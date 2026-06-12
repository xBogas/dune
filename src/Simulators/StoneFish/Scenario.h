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

#ifndef SIMULATORS_STONEFISH_SCENARIO_H
#define SIMULATORS_STONEFISH_SCENARIO_H

// C++ headers.
#include <string>
#include <vector>

namespace Simulators
{
  namespace StoneFish
  {
    //! Lightweight inspection of Stonefish scenario files.
    //!
    //! DUNE reserves entities while tasks start, before the simulation
    //! engine can run, so the devices that will exist in the simulation
    //! must be known beforehand. This scanner extracts them from the
    //! scenario file without building the simulation.
    namespace Scenario
    {
      //! Device (sensor or actuator) declared in a scenario file.
      struct Device
      {
        //! Enclosing robot, or empty for top-level devices.
        std::string robot;
        //! Device name, as written in the scenario file .
        std::string name;
        //! Device type, as written in the scenario file.
        std::string type;

        std::string fullName(void) const
        {
          return robot.empty() ? name : robot + "/" + name;
        }
      };

      //! Scan a scenario file for sensor and actuator declarations,
      //! following <include> elements.
      //! @param[in] path path to the scenario file.
      //! @return devices found.
      //! @throw std::runtime_error if a file cannot be parsed.
      std::vector<Device>
      scan(const std::string& path);
    }
  }
}

#endif  // SIMULATORS_STONEFISH_SCENARIO_H
