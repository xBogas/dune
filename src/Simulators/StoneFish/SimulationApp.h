
#include <Stonefish/core/ConsoleSimulationApp.h>

class SimulationApp : public sf::ConsoleSimulationApp
{
public:
  SimulationApp(std::string title, std::string dataDirPath, sf::SimulationManager* sim):
	sf::ConsoleSimulationApp(title, dataDirPath, sim)
  { }

  void exit(void)
  {
	sf::ConsoleSimulationApp::StopSimulation();
	sf::ConsoleSimulationApp::Quit();
  }

};