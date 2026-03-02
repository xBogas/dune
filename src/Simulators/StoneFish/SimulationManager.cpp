
#ifndef BT_USE_DOUBLE_PRECISION
#define BT_USE_DOUBLE_PRECISION 1
#endif

#include <DUNE/Streams/Terminal.hpp>

#include "SimulationManager.h"

#include "Stonefish.h"
#include <Stonefish/entities/solids/Sphere.h>
#include <Stonefish/entities/statics/Plane.h>

SimulationEngine::SimulationEngine(sf::Scalar stepsPerSecond, std::function<void(void)> onStep,
                                   const std::string& scenarioPath):
  SimulationManager(stepsPerSecond),
  m_onStep(onStep),
  m_scenarioPath(scenarioPath)
{ }

void
SimulationEngine::SimulationStepCompleted(sf::Scalar timeStep)
{
  (void)timeStep;  // Unused parameter
  m_onStep();
}

void
SimulationEngine::BuildScenario(void)
{
  if (m_scenarioPath.empty())
  {
    throw std::runtime_error("Scenario path is empty. Cannot build scenario.");
  }

  // Load scenario from XML file using ScenarioParser
  sf::ScenarioParser parser(this);
  if (!parser.Parse(m_scenarioPath))
  {
    DUNE_ERR("Stonefish", "Failed to parse scenario file: " << m_scenarioPath.c_str());
    std::vector logs = parser.getLog();
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
  }
}