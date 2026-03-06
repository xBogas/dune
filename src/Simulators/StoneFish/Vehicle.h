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

#include <Stonefish/actuators/Motor.h>
#include <Stonefish/actuators/Propeller.h>
#include <Stonefish/actuators/Servo.h>
#include <Stonefish/actuators/Thruster.h>
#include <Stonefish/core/Robot.h>
#include <Stonefish/sensors/Sensor.h>

#include <DUNE/Streams/Terminal.hpp>

namespace Simulators
{
  namespace StoneFish
  {

    class Vehicle
    {
    public:
      struct State
      {
        sf::Vector3 position;
        sf::Vector3 orientation;
        sf::Vector3 linearVelocity;
        sf::Vector3 angularVelocity;
      };

      Vehicle(sf::Robot* robot);

      State
      getState(void) const;

    private:
      void
      load_config(void);

      void
      newThruster(sf::Actuator* thruster)
      {
        m_thrusters.push_back(static_cast<sf::Thruster*>(thruster));
      }

      void
      newServo(sf::Actuator* servo)
      {
        m_servos.push_back(static_cast<sf::Servo*>(servo));
      }

      void
      newSensor(sf::Sensor* sensor)
      {
        m_sensors.push_back(sensor);
      }

      void
      newMotor(sf::Actuator* motor)
      {
        m_motors.push_back(static_cast<sf::Motor*>(motor));
      }

      void
      newPropeller(sf::Actuator* propeller)
      {
        m_propellers.push_back(static_cast<sf::Propeller*>(propeller));
      }

      sf::Robot* m_robot;

      // TODO: Add relevant actuators

      std::vector<sf::Thruster*> m_thrusters;
      std::vector<sf::Motor*> m_motors;
      std::vector<sf::Propeller*> m_propellers;
      std::vector<sf::Servo*> m_servos;
      std::vector<sf::Sensor*> m_sensors;
    };
  }
}