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

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local headers.
#include "Engine.h"
#include "Recorder.h"
#include "Scenario.h"
#include "Sensors.h"
#include "Vehicle.h"

// Stonefish headers.
#include <Stonefish/core/NED.h>
#include <Stonefish/entities/forcefields/Ocean.h>

namespace Simulators
{
  //! Interface with the Stonefish simulation engine.
  //!
  //! Runs a Stonefish simulation, with or without graphical interface,
  //! from a scenario file. The robot defined in the scenario replaces the
  //! real vehicle: its simulated sensors are translated into the
  //! corresponding IMC messages (see SensorBridge for the full mapping)
  //! and thruster/servo commands are injected into the simulation.
  //!
  //! The task dispatches:
  //! - SimulatedState with the ground truth state of the robot;
  //! - one IMC message stream per sensor of the scenario, each from an
  //!   entity labelled with the sensor name (e.g. "lauv/imu");
  //! - Rpm and ServoPosition as actuator feedback.
  //!
  //! And consumes:
  //! - SetThrusterActuation, indexing thrusters, propellers and pushers
  //!   by order of declaration in the scenario;
  //! - SetServoPosition, indexing servos and rudders likewise.
  //!
  //! @author João Bogas
  namespace StoneFish
  {
    using DUNE_NAMESPACES;

    //! %Task arguments.
    struct Arguments
    {
      //! Scenario file path.
      std::string scenario;
      //! Name of the robot to control.
      std::string robot;
      //! Enable graphical interface.
      bool graphics;
      //! Simulation frequency.
      double frequency;
      //! Actuator feedback frequency.
      double feedback_frequency;
      //! Dump per-link dynamics once, when the scenario is built.
      bool dump_dynamics;
      //! Linear speed above which the state is flagged as divergent (0 off).
      double max_speed;
      //! Angular speed above which the state is flagged as divergent (0 off).
      double max_rate;
      //! Step-trace logging rate (0 logs every step, -1 disable).
      double log_sim_hz;
    };

    struct Task: public DUNE::Tasks::Task
    {
      //! Resolved path to the scenario file.
      Path m_scenario;
      //! Simulation engine.
      Engine* m_engine;
      //! Controlled robot, valid once the scenario is built.
      std::shared_ptr<Vehicle> m_vehicle;
      //! Device name (lauv/imu) to system and entity ids.
      DeviceMap m_eids;
      //! Translates Stonefish sensors into IMC messages.
      SensorBridge m_bridge;
      //! Ground truth state, with origin set when the scenario is built.
      IMC::SimulatedState m_sstate;
      //! Actuator feedback timer.
      Time::Counter<double> m_feedback_timer;
      //! True once the simulation has been flagged as divergent.
      bool m_diverged;
      //! Resolved directory for the trace files.
      Path m_current_log;
      //! Writes the build snapshot and step trace.
      Recorder m_recorder;
      //! Task arguments.
      Arguments m_args;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx),
        m_engine(nullptr),
        m_bridge(this),
        m_diverged(false)
      {
        param("Scenario Path", m_args.scenario)
          .description("Relative path from the configuration directory to the scenario file to be "
                       "loaded in the simulation.");

        param("Enable Graphics", m_args.graphics)
          .defaultValue("true")
          .description("Enable graphical interface for the simulator.");

        param("Simulation Frequency", m_args.frequency)
          .defaultValue("100.0")
          .units(Units::Hertz)
          .description("Physics steps per second of simulated time.");

        param("Feedback Frequency", m_args.feedback_frequency)
          .defaultValue("10.0")
          .units(Units::Hertz)
          .description("Frequency of actuator feedback (Rpm and ServoPosition).");

        param("Dump Dynamics", m_args.dump_dynamics)
          .defaultValue("true")
          .description("Log the per-link mass, inertia, added mass, volume and "
                       "buoyancy computed by Stonefish once the scenario is built.");

        param("Divergence - Maximum Speed", m_args.max_speed)
          .defaultValue("25.0")
          .units(Units::MeterPerSecond)
          .description("Linear speed above which the simulated state is reported "
                       "as divergent (numerical-instability guard). 0 disables.");

        param("Divergence - Maximum Rate", m_args.max_rate)
          .defaultValue("25.0")
          .units(Units::RadianPerSecond)
          .description("Angular speed above which the simulated state is reported "
                       "as divergent. 0 disables.");

        param("Simulation Logging - Frequency", m_args.log_sim_hz)
          .defaultValue("-1.0")
          .units(Units::Hertz)
          .description("Rate at which step records are appended to the trace. 0 logs every "
                       "physics step. -1 logging disabled");

        bind<IMC::SetThrusterActuation>(this);
        bind<IMC::SetServoPosition>(this);
        bind<IMC::LoggingControl>(this);

        m_current_log = m_ctx.dir_log / getSystemName();
      }

      void
      validateScenario(void)
      {
        m_scenario = m_ctx.dir_cfg / m_args.scenario;
        if (m_scenario.exists())
          return;

        m_scenario = m_ctx.dir_usr_cfg / m_args.scenario;
        if (m_scenario.exists())
          return;

        throw RestartNeeded("Invalid parameter 'Scenario Path': " + m_args.scenario, 5);
      }

      //! Update internal state with new parameter values.
      void
      onUpdateParameters(void)
      {
        m_feedback_timer.setTop(1.0 / m_args.feedback_frequency);

        m_recorder.setFrequency(m_args.log_sim_hz);
        if (!m_recorder.isOpen())
          m_recorder.open(m_current_log, m_args.log_sim_hz);

        validateScenario();
      }

      //! Reserve one entity per device declared in the scenario, so that
      //! each sensor and actuator dispatches from its own entity.
      void
      onEntityReservation(void)
      {
        std::vector<Scenario::Device> devices;

        try
        {
          devices = Scenario::scan(m_scenario.str());
        }
        catch (const std::exception& e)
        {
          war("scenario scan failed, sensors will use the task entity: %s", e.what());
          return;
        }

        for (const Scenario::Device& device : devices)
        {
          // TODO: If device robot name != run as distributed simulation system
          // (should have an EntityList of simulated vehicle)

          try
          {
            Entities::StatefulEntity* entity = reserveEntity<Entities::StatefulEntity>(device.name);
            m_eids[device.fullName()] = { getSystemId() /* resolveSystemName(device.robot) */,
                                          entity->getId() };

            // TODO: Simulate state when dispatching data from device
            //? Add option to disable data device -> stop dispatching data -> state go idle
            // TODO: Dispatch date depending on device state (service, maneuver)
            entity->setState(IMC::EntityState::ESTA_BOOT, Status::CODE_INIT);
            entity->setState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);

            debug("reserved system (%s) entity '%s' (%s)", device.robot.c_str(),
                  device.name.c_str(), device.type.c_str());
          }
          catch (const std::exception& e)
          {
            war("failed to reserve entity '%s': %s", device.name.c_str(), e.what());
          }
        }
      }

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

        if (m_engine != nullptr)
          m_engine->exit();
      }

      void
      consume(const IMC::LoggingControl* msg)
      {
        if (msg->getSource() != getSystemId())
          return;

        if (msg->op == IMC::LoggingControl::COP_STARTED)
        {
          m_current_log = m_ctx.dir_log / msg->name;
          m_recorder.open(m_current_log, m_args.log_sim_hz);
        }
      }

      void
      consume(const IMC::SetThrusterActuation* msg)
      {
        // TODO: route source/destination to simulated system
        if (m_vehicle != nullptr)
          m_vehicle->setThrust(msg->id, msg->value);
      }

      void
      consume(const IMC::SetServoPosition* msg)
      {
        if (m_vehicle != nullptr)
          m_vehicle->setServo(msg->id, msg->value);
      }

      //! Resolve device name (robot/sensor) to reserved entity id,
      //! or return the task entity if not found.
      DeviceInfo
      resolveDevice(const std::string& dev_name)
      {
        DeviceMap::const_iterator itr = m_eids.find(dev_name);
        if (itr != m_eids.end())
          return itr->second;

        DeviceInfo info = { getSystemId(), getEntityId() };
        m_eids[dev_name] = info;
        return info;
      }

      //! Collect the resources of the built scenario: the robot to
      //! control, the sensors to translate and the geodetic origin.
      //! Runs in the simulation thread, once, before the first step.
      void
      onBuild(sf::SimulationManager& sim)
      {
        consumeMessages();

        sf::Robot* robot = nullptr;
        robot = sim.getRobot(getSystemName());
        if (robot == nullptr)
        {
          war("robot '%s' not found in scenario, using the first one", getSystemName());
          robot = sim.getRobot(0u);
        }

        sf::Ocean* ocean = sim.getOcean();
        const double water_density = ocean != nullptr ? ocean->getLiquid().density : 1000.0;

        if (robot != nullptr)
        {
          m_vehicle = std::make_shared<Vehicle>(robot);
          inf("controlling robot '%s'", m_vehicle->getName().c_str());

          if (m_args.dump_dynamics)
            m_vehicle->logDynamics(water_density);
        }
        else
        {
          war("scenario has no robot, only sensors will be dispatched");
        }

        // The scenario NED origin is the geodetic reference of all
        // positions dispatched by this task.
        sf::Scalar lat, lon, height;
        sim.getNED()->Ned2Geodetic(0, 0, 0, lat, lon, height);
        m_sstate.lat = Angles::radians(lat);
        m_sstate.lon = Angles::radians(lon);
        m_sstate.height = height;

        if (m_vehicle != nullptr)
        {
          logBuild(*m_vehicle, water_density, lat, lon, height);
        }

        m_bridge.bind(sim, m_eids);
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
      }

      void
      logBuild(const Vehicle& vehicle, double water_density, double lat, double lon, double height)
      {
        try
        {
          FileSystem::Path build_log = m_current_log / vehicle.getName() + ".json";
          m_recorder.logBuild(build_log, m_args.scenario, vehicle, water_density, lat, lon, height);
          inf("writing simulation trace to %s", build_log.c_str());
        }
        catch (const std::exception& e)
        {
          war("simulation trace disabled: %s", e.what());
        }
      }

      //! Exchange data with the simulation: apply pending actuator
      //! setpoints and dispatch the new state of the world.
      //! Runs in the simulation thread, after every physics step.
      void
      onStep(sf::SimulationManager& sim)
      {
        // The task thread is blocked running the simulation, so incoming
        // messages are consumed here, in the simulation thread.
        consumeMessages();

        m_bridge.poll();

        if (m_vehicle == nullptr)
          return;

        m_vehicle->applySetpoints();
        dispatchState(sim);

        if (m_feedback_timer.overflow())
        {
          m_feedback_timer.reset();
          dispatchFeedback();
        }

        if (m_recorder.isOpen())
          m_recorder.logStep(sim.getSimulationTime(), *m_vehicle);
      }

      //! Dispatch the ground truth state of the robot.
      //! True if any component of a vector is NaN or infinite.
      static bool
      isFinite(const sf::Vector3& v)
      {
        return std::isfinite(v.x()) && std::isfinite(v.y()) && std::isfinite(v.z());
      }

      //! Guard against numerical divergence: detect NaN/infinity or an
      //! implausibly large velocity in the robot state. On the first
      //! occurrence report the offending values and the simulation time and
      //! mark the entity in error. Returns false once the state is bad
      bool
      stateIsSane(const Vehicle::State& s, double t)
      {
        const double v = s.linearVelocity.length();
        const double w = s.angularVelocity.length();

        const bool finite = isFinite(s.position) && isFinite(s.orientation)
                            && isFinite(s.linearVelocity) && isFinite(s.angularVelocity);
        const bool fast = (m_args.max_speed > 0.0 && v > m_args.max_speed)
                          || (m_args.max_rate > 0.0 && w > m_args.max_rate);

        if (finite && !fast)
          return true;

        if (!m_diverged)
        {
          m_diverged = true;
          err("simulation diverged at t=%.3f s: |v|=%g m/s, |w|=%g rad/s%s "
              "(position [%g, %g, %g])",
              t, v, w, finite ? "" : ", NaN/Inf", s.position.x(), s.position.y(), s.position.z());
          setEntityState(IMC::EntityState::ESTA_ERROR, "simulation diverged");
        }
        return false;
      }

      void
      dispatchState(sf::SimulationManager& sim)
      {
        const Vehicle::State state = m_vehicle->getState();

        if (!stateIsSane(state, sim.getSimulationTime()))
          return;

        // TODO: Update lat, lon if vehicle goes far from origin
        m_sstate.x = state.position.x();
        m_sstate.y = state.position.y();
        m_sstate.z = state.position.z();

        m_sstate.phi = Angles::normalizeRadian(state.orientation.x());
        m_sstate.theta = Angles::normalizeRadian(state.orientation.y());
        m_sstate.psi = Angles::normalizeRadian(state.orientation.z());

        m_sstate.u = state.linearVelocity.x();
        m_sstate.v = state.linearVelocity.y();
        m_sstate.w = state.linearVelocity.z();

        m_sstate.p = state.angularVelocity.x();
        m_sstate.q = state.angularVelocity.y();
        m_sstate.r = state.angularVelocity.z();

        sf::Ocean* ocean = sim.getOcean();
        if (ocean != nullptr)
        {
          const sf::Vector3 stream = ocean->GetFluidVelocity(state.position);
          m_sstate.svx = stream.x();
          m_sstate.svy = stream.y();
          m_sstate.svz = stream.z();
        }

        dispatch(m_sstate);
      }

      //! Dispatch actuator feedback: Rpm for each rotating thrust
      //! actuator and ServoPosition for each servo.
      void
      dispatchFeedback(void)
      {
        for (size_t i = 0; i < m_vehicle->getThrusterCount(); i++)
        {
          double rpm;
          if (!m_vehicle->getThrusterRpm(i, rpm))
            continue;

          IMC::Rpm msg;
          msg.value = (int16_t)std::lround(rpm);

          DeviceInfo info = resolveDevice(m_vehicle->getThrusterName(i));
          msg.setSource(info.system_id);
          msg.setSourceEntity(info.entity_id);
          dispatch(msg, Tasks::DF_KEEP_SRC_EID);
        }

        for (size_t i = 0; i < m_vehicle->getServoCount(); i++)
        {
          IMC::ServoPosition msg;
          msg.id = i;
          msg.value = m_vehicle->getServoPosition(i);
          dispatch(msg);
        }
      }

      //! Run the simulation until it terminates. Stonefish steps the
      //! physics in a dedicated thread and this thread runs the console
      //! or rendering loop, so this call only returns on shutdown.
      void
      runSim(void)
      {
        inf("using scenario file: %s", m_scenario.c_str());
        inf("graphics %s", m_args.graphics ? "enabled" : "disabled");

        SimMode mode = m_args.graphics ? SimMode::GRAPHICAL : SimMode::CONSOLE;
        simCallback onStepCb = std::bind(&Task::onStep, this, std::placeholders::_1);
        simCallback onBuildCb = std::bind(&Task::onBuild, this, std::placeholders::_1);

        m_engine = new Engine(mode, m_scenario, m_args.frequency, onStepCb, onBuildCb);
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
          throw RestartNeeded(e.what(), 10);
        }

        if (!stopping())
        {
          war("Stonefish simulation stopped! Stopping DUNE ...");
          raise(SIGTERM);
        }

        // wait for stop signal
        while (!stopping())
          waitForMessages(1.0);
      }
    };
  }
}

DUNE_TASK
