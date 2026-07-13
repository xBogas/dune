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

#ifndef SIMULATORS_STONEFISH_SENSORS_H
#define SIMULATORS_STONEFISH_SENSORS_H

// C++ headers.
#include <map>
#include <mutex>
#include <set>
#include <string>
#include <vector>

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Stonefish headers.
#include <Stonefish/core/SimulationManager.h>
#include <Stonefish/sensors/Sample.h>
#include <Stonefish/sensors/ScalarSensor.h>
#include <Stonefish/sensors/VisionSensor.h>
#include <Stonefish/sensors/vision/ColorCamera.h>
#include <Stonefish/sensors/vision/FLS.h>
#include <Stonefish/sensors/vision/MSIS.h>
#include <Stonefish/sensors/vision/SSS.h>

namespace Simulators
{
  namespace StoneFish
  {

    struct DeviceInfo
    {
      uint32_t system_id;
      uint32_t entity_id;
    };

    typedef std::map<std::string, DeviceInfo> DeviceMap;

    //! Translates Stonefish sensor readings into IMC messages.
    //!
    //! Every sensor of the simulation is dispatched from its own DUNE
    //! entity, labelled with the sensor name from the scenario file
    //! (robot sensors are prefixed with the robot name, e.g. "lauv/imu").
    //!
    //! Scalar sensors are polled every simulation step and translated when
    //! a fresh sample is available:
    //! - accelerometer: Acceleration;
    //! - gyroscope:     AngularVelocity;
    //! - imu:           EulerAngles, AngularVelocity and Acceleration;
    //! - compass:       EulerAngles (yaw only);
    //! - dvl:           GroundVelocity, WaterVelocity and Distance (altitude);
    //! - gps:           GpsFix;
    //! - pressure:      Pressure and Depth;
    //! - ins:           EstimatedState;
    //! - encoder:       Rpm;
    //! - current:       Current;
    //! - multibeam:     SonarData (16-bit ranges in millimetres);
    //! - profiler:      Distance.
    //!
    //! Vision sensors deliver data through callbacks, which only fire when
    //! the simulation renders (graphical mode):
    //! - color camera:  CompressedImage (JPEG);
    //! - fls:           SonarData (multibeam, 8-bit intensities);
    //! - sss:           SonarData (sidescan, latest line, 8-bit intensities);
    //! - msis:          SonarData (pencilbeam, full scan, 8-bit intensities).
    //!
    //! Sensors with no IMC counterpart (odometry, pose, force/torque,
    //! torque, depth camera, thermal camera, optical flow camera,
    //! segmentation camera, event-based camera and multibeam2) are
    //! reported once and ignored.
    class SensorBridge
    {
    public:
      //! Constructor.
      //! @param[in] task parent task, used to dispatch IMC messages.
      explicit SensorBridge(DUNE::Tasks::Task* task);

      //! Collect the sensors of a built simulation and install the data
      //! callbacks of vision sensors.
      //! @param[in] sim simulation manager with a built scenario.
      //! @param[in] entities sensor name to reserved entity id map.
      void
      bind(sf::SimulationManager& sim, const DeviceMap& entities);

      //! Translate fresh samples of all scalar sensors into IMC messages.
      //! Must be called from the simulation thread, on every step.
      void
      poll(void);

      //! Bind (or rebind) a device name to a system and entity id, replacing
      //! any previous mapping. Used to apply the ids a simulated vehicle
      //! announces in its EntityList after the bridge has been bound, so its
      //! sensor data is dispatched from the vehicle's own system and entity.
      //! Thread-safe.
      //! @param[in] dev_name device name (robot/sensor), as in the scenario.
      //! @param[in] info system and entity id to dispatch the sensor from.
      void
      setEntity(const std::string& dev_name, const DeviceInfo& info);

    private:
      //! Resolve device name (robot/sensor) to system and entity id,
      //! or return the task entity if not found. Thread-safe.
      DeviceInfo
      resolveDevice(const std::string& dev_name);

      //! Dispatch a message from the entity reserved for a sensor.
      void
      dispatch(DUNE::IMC::Message& msg, const std::string& name);

      //! Report a sensor as unsupported, only once.
      void
      warnOnce(const std::string& name, const char* reason);

      //! Translate the last sample of a scalar sensor.
      void
      translate(sf::ScalarSensor* sensor);

      void
      translateAccelerometer(const std::string& name, const sf::Sample& sample);

      void
      translateGyroscope(const std::string& name, const sf::Sample& sample);

      void
      translateImu(const std::string& name, const sf::Sample& sample);

      void
      translateCompass(const std::string& name, const sf::Sample& sample);

      void
      translateDvl(const std::string& name, const sf::Sample& sample);

      void
      translateGps(const std::string& name, const sf::Sample& sample);

      void
      translatePressure(const std::string& name, const sf::Sample& sample);

      void
      translateIns(const std::string& name, const sf::Sample& sample);

      void
      translateEncoder(const std::string& name, const sf::Sample& sample);

      void
      translateCurrent(const std::string& name, const sf::Sample& sample);

      void
      translateMultibeam(sf::ScalarSensor* sensor, const sf::Sample& sample);

      void
      translateProfiler(const std::string& name, const sf::Sample& sample);

      //! Install the data callback of a vision sensor.
      void
      setupVision(sf::VisionSensor* sensor);

      void
      onColorCamera(sf::ColorCamera* camera);

      void
      onFls(sf::FLS* fls);

      void
      onSss(sf::SSS* sss);

      void
      onMsis(sf::MSIS* msis);

      //! Parent task.
      DUNE::Tasks::Task* m_task;
      //! Sensor name to system and entity id.
      DeviceMap m_entities;
      //! Guards m_entities (read on every step and from vision callbacks,
      //! updated when a vehicle's EntityList is consumed).
      std::mutex m_entities_mutex;
      //! Scalar sensors polled every step.
      std::vector<sf::ScalarSensor*> m_scalars;
      //! Water density used to derive depth from pressure [kg/m³].
      double m_water_density;
      //! JPEG encoder for camera frames (rendering thread only).
      DUNE::Media::JPEGCompressor m_jpeg;
      //! Camera frame counter.
      uint8_t m_frameid;
      //! Sensors already reported as unsupported.
      std::set<std::string> m_warned;
      //! Guards m_warned (poll and vision callbacks run in different threads).
      std::mutex m_warn_mutex;
    };
  }
}

#endif  // SIMULATORS_STONEFISH_SENSORS_H
