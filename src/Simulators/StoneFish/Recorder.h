//***************************************************************************
// Copyright 2007-2026 Universidade do Porto - Faculdade de Engenharia      *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)                  *
//***************************************************************************
// This file is part of DUNE: Unified Navigation Environment.               *
//                                                                          *
// Commercial Licence Usage                                                 *
// Licencees holding valid commercial DUNE licences may use this file in    *
// accordance with the commercial licence agreement provided with the       *
// Software or, alternatively, in accordance with the terms contained in a  *
// written agreement between you and Faculdade de Engenharia da             *
// Universidade do Porto. For licensing terms, conditions, and further      *
// information contact lsts@fe.up.pt.                                       *
//                                                                          *
// Modified European Union Public Licence - EUPL v.1.1 Usage                *
// Alternatively, this file may be used under the terms of the Modified     *
// EUPL, Version 1.1 only (the "Licence"), appearing in the file LICENCE.md *
// included in the packaging of this file. You may not use this work        *
// except in compliance with the Licence. Unless required by applicable     *
// law or agreed to in writing, software distributed under the Licence is   *
// distributed on an "AS IS" basis, WITHOUT WARRANTIES OR CONDITIONS OF     *
// ANY KIND, either express or implied. See the Licence for the specific    *
// language governing permissions and limitations at                        *
// https://github.com/LSTS/dune/blob/master/LICENCE.md and                  *
// http://ec.europa.eu/idabc/eupl.html.                                     *
//***************************************************************************
// Author: João Bogas                                                       *
//***************************************************************************

#ifndef SIMULATORS_STONEFISH_RECORDER_H
#define SIMULATORS_STONEFISH_RECORDER_H

// C++ headers.
#include <cmath>
#include <fstream>
#include <iomanip>
#include <ostream>
#include <string>

// DUNE headers.
#include <DUNE/FileSystem/Path.hpp>

// Local headers.
#include "Vehicle.h"

namespace Simulators
{
  namespace StoneFish
  {
    //! Trace of a Stonefish run.
    //!
    //! Writes two plain-text files into an output directory:
    //! - sim_build.json: a pretty-printed, once-on-build snapshot of the
    //!   scenario (robot, water density, NED origin, per-link dynamics and
    //!   totals, actuator inventory);
    //! - sim_trace.jsonl: one compact JSON object per logged physics step
    //!   (newline-delimited), with the robot state and actuator readings.
    //!
    //! The step trace is throttled by simulation time so the file stays small
    //! and reviewable regardless of the physics frequency. All numbers that are
    //! not finite (NaN/Inf) are written as JSON null.
    class Recorder
    {
    public:
      //! Constructor.
      Recorder(void):
        m_period(-1.0),
        m_wdog(-1.0)
      { }

      //! True once the trace file is open for writing.
      bool
      isOpen(void) const
      {
        return m_trace.is_open();
      }

      void
      setFrequency(double hz)
      {
        m_period = (hz > 0.0) ? 1.0 / hz : 0.0;

        if (hz > 0.0)
          m_period = 1.0 / hz;
        else if (hz < 0)
          m_period = -1.0;  // disable
        else
          m_period = 0.0;  // log everything
      }

      //! Open the output files under @a dir (created if needed).
      //! @param[in] dir output directory.
      //! @param[in] hz step-logging rate [Hz]; <= 0 logs every step.
      //! @return true if the trace file could be opened.
      bool
      open(const DUNE::FileSystem::Path& dir, double hz)
      {
        if (hz < 0.0)
          return false;

        m_trace.open((dir / "sim_trace.jsonl").str().c_str(), std::ios::out | std::ios::trunc);
        m_trace << std::setprecision(9);
        setFrequency(hz);
        return m_trace.is_open();
      }

      //! Write the once-on-build scenario snapshot as pretty JSON.
      //! @param[in] scenario scenario file path, as configured.
      //! @param[in] vehicle controlled robot.
      //! @param[in] water_density fluid density [kg/m^3].
      //! @param[in] lat_deg NED origin latitude [deg].
      //! @param[in] lon_deg NED origin longitude [deg].
      //! @param[in] height NED origin height [m].
      void
      logBuild(const DUNE::FileSystem::Path& build_path, const std::string& scenario,
               const Vehicle& vehicle, double water_density, double lat_deg, double lon_deg,
               double height)
      {
        std::ofstream os(build_path.c_str(), std::ios::out | std::ios::trunc);
        if (!os.is_open())
          return;

        os << std::setprecision(9);
        os << "{\n";
        os << "  \"scenario\": ";
        jstr(os, scenario);
        os << ",\n";
        os << "  \"robot\": ";
        jstr(os, vehicle.getName());
        os << ",\n";
        os << "  \"water_density_kgm3\": ";
        num(os, water_density);
        os << ",\n";
        os << "  \"origin\": {\"lat_deg\": ";
        num(os, lat_deg);
        os << ", \"lon_deg\": ";
        num(os, lon_deg);
        os << ", \"height_m\": ";
        num(os, height);
        os << "},\n";

        const std::vector<Vehicle::LinkDynamics> links = vehicle.getDynamics(water_density);
        double total_mass = 0.0;
        double total_disp = 0.0;
        for (size_t i = 0; i < links.size(); ++i)
        {
          total_mass += links[i].mass;
          total_disp += links[i].displaced;
        }

        os << "  \"totals\": {\"mass_kg\": ";
        num(os, total_mass);
        os << ", \"displaced_kg\": ";
        num(os, total_disp);
        os << ", \"net_buoyancy_kg\": ";
        num(os, total_disp - total_mass);
        os << ", \"floats\": " << (total_disp > total_mass ? "true" : "false");
        os << "},\n";

        os << "  \"links\": [\n";
        for (size_t i = 0; i < links.size(); ++i)
        {
          const Vehicle::LinkDynamics& d = links[i];
          os << "    {\"name\": ";
          jstr(os, d.name);
          os << ", \"mass_kg\": ";
          num(os, d.mass);
          os << ", \"displaced_kg\": ";
          num(os, d.displaced);
          os << ", \"net_buoyancy_kg\": ";
          num(os, d.displaced - d.mass);
          os << ", \"volume_m3\": ";
          num(os, d.volume);
          os << ", \"submerged_volume_m3\": ";
          num(os, d.submergedVolume);
          os << ", \"inertia\": ";
          vec(os, d.inertia);
          os << ", \"added_mass\": ";
          vec(os, d.addedMass);
          os << ", \"added_inertia\": ";
          vec(os, d.addedInertia);
          os << ", \"cg\": ";
          vec(os, d.cg);
          os << ", \"cb\": ";
          vec(os, d.cb);
          os << "}" << (i + 1 < links.size() ? ",\n" : "\n");
        }
        os << "  ],\n";

        os << "  \"thrusters\": [\n";
        for (size_t i = 0; i < vehicle.getThrusterCount(); ++i)
        {
          double rpm;
          const bool reports = vehicle.getThrusterRpm(i, rpm);
          os << "    {\"index\": " << i << ", \"name\": ";
          jstr(os, vehicle.getThrusterName(i));
          os << ", \"reports_rpm\": " << (reports ? "true" : "false");
          os << "}" << (i + 1 < vehicle.getThrusterCount() ? ",\n" : "\n");
        }
        os << "  ],\n";

        os << "  \"servos\": [\n";
        for (size_t i = 0; i < vehicle.getServoCount(); ++i)
        {
          os << "    {\"index\": " << i << ", \"name\": ";
          jstr(os, vehicle.getServoName(i));
          os << "}" << (i + 1 < vehicle.getServoCount() ? ",\n" : "\n");
        }
        os << "  ]\n";

        os << "}\n";
      }

      //! Append one step record to the trace, subject to the throttle.
      //! @param[in] t simulation time [s].
      //! @param[in] vehicle controlled robot.
      void
      logStep(double t, const Vehicle& vehicle)
      {
        if (m_period < 0)
          return;

        if (!m_trace.is_open())
          return;

        if (!m_wdog.overflow())
          return;

        m_wdog.reset();

        const Vehicle::State s = vehicle.getState();

        m_trace << "{\"t\": ";
        num(m_trace, t);
        m_trace << ", \"pos\": ";
        vec(m_trace, s.position);
        m_trace << ", \"rpy\": ";
        vec(m_trace, s.orientation);
        m_trace << ", \"vel\": ";
        vec(m_trace, s.linearVelocity);
        m_trace << ", \"angvel\": ";
        vec(m_trace, s.angularVelocity);

        m_trace << ", \"thrusters\": [";
        for (size_t i = 0; i < vehicle.getThrusterCount(); ++i)
        {
          if (i)
            m_trace << ", ";
          double rpm;
          const bool ok = vehicle.getThrusterRpm(i, rpm);
          m_trace << "{\"name\": ";
          jstr(m_trace, vehicle.getThrusterName(i));
          m_trace << ", \"rpm\": ";
          if (ok)
            num(m_trace, rpm);
          else
            m_trace << "null";
          m_trace << "}";
        }
        m_trace << "]";

        m_trace << ", \"servos\": [";
        for (size_t i = 0; i < vehicle.getServoCount(); ++i)
        {
          if (i)
            m_trace << ", ";
          m_trace << "{\"name\": ";
          jstr(m_trace, vehicle.getServoName(i));
          m_trace << ", \"pos_rad\": ";
          num(m_trace, vehicle.getServoPosition(i));
          m_trace << "}";
        }
        m_trace << "]}\n";

        // Flush so the trace is readable live, even if the run is interrupted.
        m_trace.flush();
      }

    private:
      //! Write a finite number, or JSON null for NaN/Inf.
      static void
      num(std::ostream& os, double v)
      {
        if (std::isfinite(v))
          os << v;
        else
          os << "null";
      }

      //! Write a 3-vector as a JSON array.
      static void
      vec(std::ostream& os, const sf::Vector3& v)
      {
        os << "[";
        num(os, v.x());
        os << ", ";
        num(os, v.y());
        os << ", ";
        num(os, v.z());
        os << "]";
      }

      //! Write a JSON string literal, escaping quotes and backslashes.
      static void
      jstr(std::ostream& os, const std::string& s)
      {
        os << '"';
        for (std::string::const_iterator it = s.begin(); it != s.end(); ++it)
        {
          if (*it == '"' || *it == '\\')
            os << '\\';
          os << *it;
        }
        os << '"';
      }

      //! Path of the build snapshot file.
      std::string m_build_path;
      //! Step trace file (newline-delimited JSON).
      std::ofstream m_trace;
      //! Minimum simulation-time spacing between step records [s] (0 = every step).
      double m_period;
      DUNE::Time::Counter<double> m_wdog;
    };
  }
}

#endif  // SIMULATORS_STONEFISH_RECORDER_H
