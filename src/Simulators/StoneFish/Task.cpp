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

// C++ headers.
#include <csignal>
#include <unistd.h>

// DUNE headers.
#include <DUNE/DUNE.hpp>

#include "Stonefish.h"

#include "SimulationApp.h"
#include "SimulationManager.h"

namespace Simulators
{
  //! Insert short task description here.
  //!
  //! Insert explanation on task behaviour here.
  //! @author João Bogas
  namespace StoneFish
  {
    using DUNE_NAMESPACES;

    struct Parameters
    {
      //! Scenario file path.
      std::string scenario;
      //! Initial position (latitude, longitude, depth).
      std::vector<double> position;
    };

    struct Task: public DUNE::Tasks::Task
    {

      SimulationApp* m_engine;
      sf::Robot* m_robot;

      Parameters m_args;  //!< Task parameters.

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx),
        m_engine(nullptr),
        m_robot(nullptr)
      {
        param("Scenario Path", m_args.scenario)
          .description("Path to the scenario file to be loaded in the simulation.");

        param("Initial Position", m_args.position)
          .defaultValue("0, 0, 0")
          .description("Initial position of the robot. (latitude, longitude, depth)");
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
      { }

      //! Initialize resources.
      void
      onResourceInitialization(void)
      { }

      //! Release resources.
      void
      onResourceRelease(void)
      {
        Memory::clear(m_engine);
      }

      void
      stopImpl(void)
      {
        Thread::stopImpl();

        if (m_engine == nullptr)
          return;

        if (m_engine->getState() == sf::SimulationState::RUNNING)
          m_engine->exit();
      }

      void
      dispatchState(void)
      {
        if (m_engine == nullptr || m_engine->getSimulationManager() == nullptr)
          return;

        m_robot = m_engine->getSimulationManager()->getRobot("basic_auv");
        if (m_robot == nullptr)
          err("Failed to find robot with name 'basic_auv' in the scenario.");

        if (m_robot == nullptr)
          return;

        // Get robot transform and extract position + Euler angles
        sf::Transform transform = m_robot->getTransform();
        RobotPose pose = RobotPose::fromTransform(transform);

        IMC::SimulatedState sstate;
        // Position (NED coordinates)
        sstate.lat = pose.position.y();
        sstate.lon = pose.position.x();
        sstate.height = -pose.position.z();

        // Euler angles (in radians)
        sstate.phi = pose.roll;     // Roll
        sstate.theta = pose.pitch;  // Pitch
        sstate.psi = pose.yaw;      // Yaw

        dispatch(sstate);

        inf("Dispatched SimulatedState: lat=%.6f, lon=%.6f, height=%.2f, phi=%.2f, theta=%.2f, "
            "psi=%.2f",
            sstate.lat, sstate.lon, sstate.height, sstate.phi, sstate.theta, sstate.psi);
      }

      void
      runSim(void)
      {
        std::string scenarioPath = "/home/bogas/workspace/dune/sim/source/etc/sim/basic.scn";
        std::string dataDir = "/home/bogas/workspace/dune/sim/source/etc/sim/";
        double hz = 100.0;

        inf("Using scenario file: %s", scenarioPath.c_str());
        inf("Using data directory: %s", dataDir.c_str());

        SimulationEngine sim(hz, std::bind(&Task::dispatchState, this), scenarioPath);
        m_engine = new SimulationApp("StoneFish Simulator", dataDir, &sim);
        m_engine->Run();
      }

      //! Main loop.
      void
      onMain(void)
      {
        try
        {
          runSim();
        }
        catch (const std::exception& e)
        {
          err("Exception in main loop: %s", e.what());
        }

        stop();
      }
    };
  }
}

DUNE_TASK
