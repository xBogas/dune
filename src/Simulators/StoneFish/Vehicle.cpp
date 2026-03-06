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

#include "Vehicle.h"

#include <Stonefish/entities/SolidEntity.h>

namespace Simulators
{
  namespace StoneFish
  {
    Vehicle::Vehicle(sf::Robot* robot):
      m_robot(robot)
    {
      load_config();
    }

    Vehicle::State
    Vehicle::getState(void) const
    {
      if (m_robot == nullptr)
        return State();

      sf::Vector3 position;
      sf::Scalar roll, pitch, yaw;

      // Get robot transform and extract position + Euler angles
      sf::Transform transform = m_robot->getTransform();
      position = transform.getOrigin();
      sf::Matrix3 rotMatrix = transform.getBasis();
      rotMatrix.getEulerZYX(yaw, pitch, roll);

      sf::SolidEntity* base = m_robot->getBaseLink();
      if (base == nullptr)
        return State{ position, sf::Vector3(roll, pitch, yaw), sf::Vector3(0, 0, 0),
                      sf::Vector3(0, 0, 0) };

      return State{ position, sf::Vector3(roll, pitch, yaw), base->getLinearVelocity(),
                    base->getAngularVelocity() };
    }

    void
    Vehicle::load_config(void)
    {
      size_t id = 0;
      sf::Actuator* act = nullptr;
      while ((act = m_robot->getActuator(id)) != nullptr)
      {
        DUNE_MSG("Vehicle loader", "Found actuator : " << act->getName());

        switch (act->getType())
        {
          case sf::ActuatorType::THRUSTER:
            newThruster(act);
            break;
          case sf::ActuatorType::SERVO:
            newServo(act);
            break;

          case sf::ActuatorType::MOTOR:
            newMotor(act);
            break;

          case sf::ActuatorType::PROPELLER:
            newPropeller(act);
            break;

          default:
            break;
        }

        id++;
      }
    }

  }
}