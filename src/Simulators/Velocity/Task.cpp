//***************************************************************************
// Copyright 2007-2025 Universidade do Porto - Faculdade de Engenharia      *
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

// DUNE headers.
#include <DUNE/DUNE.hpp>
// STL
#include <algorithm>
#include <cctype>
#include <iostream>
#include <optional>
#include <sstream>

std::vector<std::string>
split_csv_line(const std::string& line, char delim = ',')
{
  std::vector<std::string> out;
  std::stringstream ss(line);
  std::string item;
  while (std::getline(ss, item, delim))
    out.push_back(item);

  return out;
}

static inline std::string
trim(const std::string& s)
{
  auto b = s.begin();
  while (b != s.end() && std::isspace((unsigned char)*b))
    ++b;
  auto e = s.end();
  do
  {
    --e;
  } while (std::distance(b, e) >= 0 && std::isspace((unsigned char)*e));
  return std::string(b, e + 1);
}

struct VelocityRow
{
  std::string timestamp;
  double ts_epoch;
  double vx = 0.0;
  double vy = 0.0;
  double vz = 0.0;
};

static std::optional<VelocityRow>
parse_velocity_line(const std::string& line)
{
  if (line.find_first_not_of(" \t\r\n") == std::string::npos)
    return std::nullopt;
  auto toks = split_csv_line(line, ',');
  if (toks.size() < 4)
    return std::nullopt;

  VelocityRow r;
  r.timestamp = trim(toks[0]);
  try
  {
    r.ts_epoch = std::stod(r.timestamp);
    r.vx = std::stod(trim(toks[1]));
    r.vy = std::stod(trim(toks[2]));
    r.vz = std::stod(trim(toks[3]));
  }
  catch (...)
  {
    return std::nullopt;
  }

  return r;
}

namespace Simulators
{
  //! Dispatch simulated velocity data read from a CSV file.
  //! CSV file with the following columns:
  //! - timestamp: Timestamp in seconds since epoch.
  //! - ground_velocity_x: predicted ground velocity in the X axis (m/s).
  //! - ground_velocity_y: predicted ground velocity in the Y axis (m/s).
  //! - ground_velocity_z: predicted ground velocity in the Z axis (m/s).
  //!
  //! This task reads the CSV file line by line, parses the velocity data,
  //! and dispatches it to the IMC bus.
  //! @author João Bogas
  namespace Velocity
  {
    using DUNE_NAMESPACES;

    struct Arguments
    {
      std::string file_path;
    };

    class EOFException: public std::runtime_error
    {
    public:
      EOFException(const std::string& msg):
        std::runtime_error(msg)
      { }
    };

    struct Task: public DUNE::Tasks::Task
    {
      ///! Input file stream.
      std::ifstream file;
      //! Current velocity data row.
      VelocityRow current_row;
      //! Simulation time from the last replayed EstimatedState (replay clock base).
      double m_sim_ts;
      //! Offset that maps CSV (original log) timestamps to the replay clock base.
      double m_time_offset;
      //! True once the first replayed EstimatedState has anchored the two clocks.
      bool m_synced;
      ///! Task parameters.
      Arguments m_args;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx),
        m_sim_ts(0.0),
        m_time_offset(0.0),
        m_synced(false)
      {
        param("File path", m_args.file_path)
          .description("Path to the CSV file containing the velocity data.");

        bind<IMC::EstimatedState>(this);
      }

      //! Update internal state with new parameter values.
      void
      onUpdateParameters(void)
      { }

      //! Reserve entity identifiers.
      void
      onEntityReservation(void)
      { }

      //! Resolve entity names.
      void
      onEntityResolution(void)
      { }

      //! Acquire resources.
      void
      onResourceAcquisition(void)
      {
        file.open(m_args.file_path);
        if (!file.is_open())
        {
          err("Could not open file: %s", m_args.file_path.c_str());
          throw RestartNeeded("Could not open input file.", 5);
        }
      }

      //! Initialize resources.
      void
      onResourceInitialization(void)
      {
        // Read and parse the CSV file that was opened in onResourceAcquisition().
        // First read header
        std::string header;
        if (!std::getline(file, header))
        {
          err("Input file is empty: %s", m_args.file_path.c_str());
          return;
        }

        const std::string expected_header =
          "timestamp,pred_ground_velocity_x,pred_ground_velocity_y,pred_ground_velocity_z";
        if (header != expected_header)
          war("CSV header differs %s from expected %s.", header.c_str(), expected_header.c_str());

        current_row.ts_epoch = -1.0;
        current_row.vx = 0.0;
        current_row.vy = 0.0;
        current_row.vz = 0.0;

        while (current_row.ts_epoch < 0)
          readLine();
      }

      //! Release resources.
      void
      onResourceRelease(void)
      { }

      void
      readLine(void)
      {
        std::string line;
        if (!std::getline(file, line) && file.eof())
        {
          inf("Reached end of input file: %s", m_args.file_path.c_str());
          throw EOFException("End of file reached.");
        }

        auto maybe = parse_velocity_line(line);
        if (!maybe)
        {
          err("Skipping malformed CSV line: %s", line.c_str());
          return;
        }

        current_row = *maybe;
      }

      bool
      sendVelocity(void)
      {
        // Wait for the first replayed EstimatedState to anchor the clocks.
        if (!m_synced)
          return false;

        // CSV holds original log timestamps; map them onto the replay clock.
        const double row_ts = current_row.ts_epoch + m_time_offset;
        if (row_ts > m_sim_ts)
        {
          spew("Timestamp %s not reached yet (sim_ts=%f).", current_row.timestamp.c_str(),
               m_sim_ts);
          return false;
        }

        IMC::GroundVelocity gv;
        gv.x = current_row.vx;
        gv.y = current_row.vy;
        gv.z = current_row.vz;

        gv.validity = IMC::GroundVelocity::VAL_VEL_X | IMC::GroundVelocity::VAL_VEL_Y
                      | IMC::GroundVelocity::VAL_VEL_Z;

        // Stamp onto the replay timeline so navigation correlates it with the
        // replayed sensor data instead of the local wall clock.
        gv.setTimeStamp(row_ts);

        spew("Dispatching GroundVelocity: ts=%s vx=%.2f vy=%.2f vz=%.2f",
             current_row.timestamp.c_str(), gv.x, gv.y, gv.z);

        spew("ts_epoch=%f sim_time=%f", row_ts, m_sim_ts);
        dispatch(gv, DF_KEEP_TIME);
        return true;
      }

      void
      consume(const IMC::EstimatedState* msg)
      {
        // Track the replayed vehicle's state, not our own navigation output.
        if (msg->getSource() == getSystemId())
          return;

        m_sim_ts = msg->getTimeStamp();

        // Anchor the CSV (original log) clock to the replay clock on the first
        // replayed state. Replay shifts timestamps to the wall clock, so the two
        // bases differ by a constant offset that we capture here.
        if (!m_synced)
        {
          m_time_offset = m_sim_ts - current_row.ts_epoch;
          m_synced = true;
          inf("Synced to replay clock: offset=%f (first state ts=%f, first row ts=%f).",
              m_time_offset, m_sim_ts, current_row.ts_epoch);
        }
      }

      //! Main loop.
      void
      onMain(void)
      {
        try
        {
          while (!stopping())
          {
            waitForMessages(0.5);

            // Flush every row whose timestamp has been reached by the replay.
            while (sendVelocity())
              readLine();
          }
        }
        catch (const EOFException& e)
        {
          war("Reached end of input file: %s", e.what());
          Time::Delay::wait(10);  // Sleep for 10 seconds before restarting.
          raise(SIGTERM);
        }
      }
    };
  }
}

DUNE_TASK
