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


#ifndef SIMULATORS_STONEFISH_ENGINE_H
#define SIMULATORS_STONEFISH_ENGINE_H

#include "SimulationManager.h"
#include "Stonefish.h"
#include "Sim.h"

enum class SimMode
{
  GRAPHICAL,
  CONSOLE
};

class Engine
{
public:
  Engine(SimMode mode, const DUNE::FileSystem::Path& scn_fd, double freq, simCallback onStep):
    m_mode(mode),
    m_sim(nullptr),
    m_graphicalApp(nullptr),
    m_consoleApp(nullptr)
  {
    m_sim = new SimManager(freq, onStep, scn_fd.str());

    std::string data_dir = scn_fd.dirname().str() + "/";

    switch (mode)
    {
      case SimMode::CONSOLE:
        m_consoleApp = new sf::ConsoleSimulationApp("DUNE sim", data_dir, m_sim);

        break;
      case SimMode::GRAPHICAL:
        m_graphicalApp = new sf::GraphicalSimulationApp("DUNE sim", data_dir, sf::RenderSettings(),
                                                        sf::HelperSettings(), m_sim);
        break;

      default:
        break;
    }
  }

  // Load simulation resources.
  void
  load(void)
  {
    // TODO: 
  }

  void
  start(void)
  {
    m_mode == SimMode::CONSOLE ? m_consoleApp->StartSimulation() : m_graphicalApp->Run();
  }

  void
  exit(void)
  {
    m_mode == SimMode::CONSOLE ? m_consoleApp->StopSimulation() : m_graphicalApp->StopSimulation();
  }

private:
  SimMode m_mode;
  SimManager* m_sim;
  sf::GraphicalSimulationApp* m_graphicalApp;
  sf::ConsoleSimulationApp* m_consoleApp;
};

#endif  // SIMULATORS_STONEFISH_ENGINE_H