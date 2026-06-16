
#ifndef BT_USE_DOUBLE_PRECISION
#define BT_USE_DOUBLE_PRECISION 1
#endif

#include <DUNE/Streams/Terminal.hpp>

#include <Stonefish/core/ScenarioParser.h>

#include "Manager.h"

namespace Simulators
{
  namespace StoneFish
  {
    SimManager::SimManager(sf::Scalar stepsPerSecond, simCallback onStep, simCallback onBuild,
                           simCallback onPreTick, const std::string& scenarioPath):
      SimulationManager(stepsPerSecond),
      m_onStep(onStep),
      m_onBuild(onBuild),
      m_onPreTick(onPreTick),
      m_scenarioPath(scenarioPath)
    { }

    void
    SimManager::SimulationStepCompleted(sf::Scalar timeStep)
    {
      (void)timeStep;  // Unused parameter

      // Install the body-lift pre-tick on the first completed step. It must
      // happen before the IC solve.
      // SolveICProblem() run afterwards and re-set the engine's own pre-tick 
      // overwriting an earlier install.
      if (!m_pretick_installed && m_onPreTick)
      {
        getDynamicsWorld()->setInternalTickCallback(PreTickCallback, this, true);
        m_pretick_installed = true;
      }

      m_onStep(*this);
    }

    void
    SimManager::PreTickCallback(btDynamicsWorld* world, sf::Scalar timeStep)
    {
      // Run the engine's standard pre-tick first: it clears every body's
      // accumulated forces, then lets actuators, joints and entities apply theirs.
      // Our extra force is added afterwards so it survives to the integration of this sub-step
      // (a force applied from SimulationStepCompleted would be cleared here).
      sf::SimulationManager::SimulationTickCallback(world, timeStep);

      SimManager* self = static_cast<SimManager*>(world->getWorldUserInfo());
      if (self != nullptr && self->m_onPreTick)
        self->m_onPreTick(*self);
    }

    void
    SimManager::BuildScenario(void)
    {
      if (m_scenarioPath.empty())
      {
        throw std::runtime_error("Scenario path is empty. Cannot build scenario.");
      }

      // Load scenario from XML file using ScenarioParser
      sf::ScenarioParser parser(this);
      if (parser.Parse(m_scenarioPath))
      {
        m_onBuild(*this);
        return;
      }

      std::vector<sf::ConsoleMessage> logs = parser.getLog();
      for (sf::ConsoleMessage& log : logs)
      {
        switch (log.type)
        {
          case sf::MessageType::INFO:

            DUNE_MSG("Stonefish", log.text);
            break;
          case sf::MessageType::WARNING:
            DUNE_WRN("Stonefish", log.text);
            break;
          case sf::MessageType::ERROR:
            DUNE_ERR("Stonefish", log.text);
            break;
          case sf::MessageType::CRITICAL:
            DUNE_ERR("Stonefish", "CRITICAL: " << log.text);
            break;
        }
      }

      throw std::runtime_error("Failed to build scenario from file: " + m_scenarioPath);
    }
  }
}