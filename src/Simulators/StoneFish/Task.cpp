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

// C++ headers.
#include <csignal>
#include <unistd.h>

// DUNE headers.
#include <DUNE/DUNE.hpp>

#include "Stonefish.h"

#include "Engine.h"
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
      //! Enable graphical interface.
      bool enable_graphics;
    };

    struct Task: public DUNE::Tasks::Task
    {
      //! Path to the scenario file to be loaded in the simulation.
      Path m_scenario;
      //! Simulation engine instance.
      Engine* m_engine;
      //! Robot instance.
      sf::Robot* m_robot;
      //! Task parameters.
      Parameters m_args;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx),
        m_engine(nullptr),
        m_robot(nullptr)
      {
        param("Scenario Path", m_args.scenario)
          .description("Relative path from the configuration directory to the scenario file to be "
                       "loaded in the simulation.");

        param("Initial Position", m_args.position)
          .defaultValue("0, 0, 0")
          .description("Initial position of the robot. (latitude, longitude, depth)");

        param("Enable Graphics", m_args.enable_graphics)
          .defaultValue("true")
          .description("Enable graphical interface for the simulator.");

        bind<IMC::SetThrusterActuation>(this);
      }

      //! Update internal state with new parameter values.
      void
      onUpdateParameters(void)
      {
        m_scenario = m_ctx.dir_cfg / m_args.scenario;
        if (m_scenario.exists())
          return;

        m_scenario = m_ctx.dir_usr_cfg / m_args.scenario;
        if (m_scenario.exists())
          return;

        throw RestartNeeded("Invalid parameter 'Scenario Path': " + m_args.scenario, 5);
      }

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

        m_engine->exit();
      }

      void
      consume(const IMC::SetThrusterActuation* msg)
      {
        (void)msg;
      }

      void
      dispatchState(sf::SimulationManager& simManager)
      {
        m_robot = simManager.getRobot(0);
        if (m_robot == nullptr)
        {
          err("Robot not found in the simulation.");
          exit(1);
          return;
        }

        // Get robot transform and extract position + Euler angles
        sf::Transform transform = m_robot->getTransform();

        // Extract position
        sf::Vector3 position = transform.getOrigin();

        // Extract Euler angles from rotation matrix
        sf::Matrix3 rotMatrix = transform.getBasis();
        sf::Scalar yaw, pitch, roll;
        rotMatrix.getEulerZYX(yaw, pitch, roll);

        // TODO: As it diverges from the initial position update the lat,lon reference frame
        IMC::SimulatedState sstate;

        // Update position
        sstate.lat = m_args.position[0];
        sstate.lon = m_args.position[1];
        sstate.height = m_args.position[2];

        sstate.x = position.x();
        sstate.y = position.y();
        sstate.z = position.z();

        // Euler angles (in radians)
        sstate.phi = roll;     // Roll
        sstate.theta = pitch;  // Pitch
        sstate.psi = yaw;      // Yaw

        // Velocities
        sstate.u = 0.0;  // Body-Fixed xx Linear Velocity
        sstate.v = 0.0;  // Body-Fixed yy Linear Velocity
        sstate.w = 0.0;  // Body-Fixed zz Linear Velocity

        // Angular velocities
        sstate.p = 0.0;  // Angular Velocity in x
        sstate.q = 0.0;  // Angular Velocity in y
        sstate.r = 0.0;  // Angular Velocity in z

        dispatch(sstate);
      }

      void
      getSimResources(sf::SimulationManager& simManager)
      {
        // TODO: Load robots
      }

      void
      runSim(void)
      {
        double hz = 100.0;

        inf("Using scenario file: %s", m_scenario.c_str());
        inf("Graphics %s", m_args.enable_graphics ? "enabled" : "disabled");

        SimMode mode = m_args.enable_graphics ? SimMode::GRAPHICAL : SimMode::CONSOLE;

        simCallback onStep = std::bind(&Task::dispatchState, this, std::placeholders::_1);
        simCallback onBuild = std::bind(&Task::getSimResources, this, std::placeholders::_1);
        m_engine = new Engine(mode, m_scenario, hz, onStep, onBuild);
        m_engine->start();
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
