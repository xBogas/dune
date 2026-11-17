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

#include "Sensors.h"

// Stonefish headers.
#include <Stonefish/entities/forcefields/Ocean.h>

namespace Simulators
{
  namespace StoneFish
  {
    using DUNE_NAMESPACES;

    //! Default water density used when the scenario has no ocean [kg/m³].
    static const double c_water_density = 1025.0;
    //! Validity flags of a simulated GPS fix.
    static const uint16_t c_gps_validity =
      IMC::GpsFix::GFV_VALID_DATE | IMC::GpsFix::GFV_VALID_TIME | IMC::GpsFix::GFV_VALID_POS
      | IMC::GpsFix::GFV_VALID_HACC | IMC::GpsFix::GFV_VALID_VACC | IMC::GpsFix::GFV_VALID_HDOP
      | IMC::GpsFix::GFV_VALID_VDOP;

    //! Convert an intensity buffer (8-bit, the Stonefish default output
    //! format) into the data field of a SonarData message.
    static void
    fillSonarData(IMC::SonarData& msg, const uint8_t* intensities, size_t count)
    {
      msg.bits_per_point = 8;
      msg.scale_factor = 1.0;
      msg.data.assign(intensities, intensities + count);
    }

    SensorBridge::SensorBridge(Tasks::Task* task, const Registry& registry):
      m_task(task),
      m_registry(registry),
      m_water_density(c_water_density),
      m_frameid(0)
    { }

    void
    SensorBridge::bind(sf::SimulationManager& sim)
    {
      sf::Ocean* ocean = sim.GetOcean();
      if (ocean != nullptr)
        m_water_density = ocean->GetLiquid().density;

      // A rebuilt simulation replaces the sensors of the previous one.
      m_scalars.clear();

      sf::Sensor* sensor;
      for (unsigned i = 0; (sensor = sim.GetSensor(i)) != nullptr; i++)
      {
        switch (sensor->GetType())
        {
          case sf::SensorType::JOINT:
          case sf::SensorType::LINK:
            DUNE_MSG("SensorBridge", "scalar sensor: " << sensor->GetName());
            m_scalars.push_back(static_cast<sf::ScalarSensor*>(sensor));
            break;

          case sf::SensorType::VISION:
            setupVision(static_cast<sf::VisionSensor*>(sensor));
            break;

          default:
            warnOnce(sensor->GetName(), "sensor has no IMC counterpart implemented!");
            break;
        }
      }
    }

    void
    SensorBridge::poll(void)
    {
      for (sf::ScalarSensor* sensor : m_scalars)
      {
        if (!sensor->IsNewDataAvailable())
          continue;

        translate(sensor);
        sensor->MarkDataOld();
      }
    }

    void
    SensorBridge::dispatch(IMC::Message& msg, const std::string& dev_name)
    {
      DeviceInfo info;
      if (!m_registry.resolve(dev_name, info))
      {
        warnOnce(dev_name, "no IMC system/entity for this sensor, not dispatched");
        return;
      }

      msg.setSource(info.system_id);
      msg.setSourceEntity(info.entity_id);
      msg.setDestination(info.system_id);
      m_task->dispatch(msg, Tasks::DF_KEEP_SRC_EID);
    }

    void
    SensorBridge::warnOnce(const std::string& dev_name, const char* reason)
    {
      std::lock_guard<std::mutex> lock(m_warn_mutex);
      if (!m_warned.insert(dev_name).second)
        return;

      DUNE_WRN("SensorBridge", dev_name << ": " << reason);
    }

    void
    SensorBridge::translate(sf::ScalarSensor* sensor)
    {
      const std::string dev_name = sensor->GetName();
      const sf::Sample sample = sensor->GetLastSample();

      switch (sensor->GetScalarSensorType())
      {
        case sf::ScalarSensorType::ACC:
          translateAccelerometer(dev_name, sample);
          break;
        case sf::ScalarSensorType::GYRO:
          translateGyroscope(dev_name, sample);
          break;
        case sf::ScalarSensorType::IMU:
          translateImu(dev_name, sample);
          break;
        case sf::ScalarSensorType::COMPASS:
          translateCompass(dev_name, sample);
          break;
        case sf::ScalarSensorType::DVL:
          translateDvl(dev_name, sample);
          break;
        case sf::ScalarSensorType::GPS:
          translateGps(dev_name, sample);
          break;
        case sf::ScalarSensorType::PRESSURE:
          translatePressure(dev_name, sample);
          break;
        case sf::ScalarSensorType::INS:
          translateIns(dev_name, sample);
          break;
        case sf::ScalarSensorType::ENCODER:
          translateEncoder(dev_name, sample);
          break;
        case sf::ScalarSensorType::CURRENT:
          translateCurrent(dev_name, sample);
          break;
        case sf::ScalarSensorType::MULTIBEAM:
          translateMultibeam(sensor, sample);
          break;
        case sf::ScalarSensorType::PROFILER:
          translateProfiler(dev_name, sample);
          break;
        default:
          // Odometry, pose, force/torque and torque have no IMC counterpart.
          warnOnce(dev_name, "sensor has no IMC counterpart implemented!");
          break;
      }
    }

    void
    SensorBridge::translateAccelerometer(const std::string& dev_name, const sf::Sample& sample)
    {
      IMC::Acceleration msg;
      msg.x = sample.GetValue(0);
      msg.y = sample.GetValue(1);
      msg.z = sample.GetValue(2);
      dispatch(msg, dev_name);
    }

    void
    SensorBridge::translateGyroscope(const std::string& dev_name, const sf::Sample& sample)
    {
      IMC::AngularVelocity msg;
      msg.x = sample.GetValue(0);
      msg.y = sample.GetValue(1);
      msg.z = sample.GetValue(2);
      dispatch(msg, dev_name);
    }

    void
    SensorBridge::translateImu(const std::string& dev_name, const sf::Sample& sample)
    {
      IMC::EulerAngles euler;
      euler.phi = sample.GetValue(0);
      euler.theta = sample.GetValue(1);
      euler.psi = sample.GetValue(2);
      euler.psi_magnetic = euler.psi;
      dispatch(euler, dev_name);

      IMC::AngularVelocity rates;
      rates.x = sample.GetValue(3);
      rates.y = sample.GetValue(4);
      rates.z = sample.GetValue(5);
      dispatch(rates, dev_name);

      IMC::Acceleration accel;
      accel.x = sample.GetValue(6);
      accel.y = sample.GetValue(7);
      accel.z = sample.GetValue(8);
      dispatch(accel, dev_name);
    }

    void
    SensorBridge::translateCompass(const std::string& dev_name, const sf::Sample& sample)
    {
      IMC::EulerAngles msg;
      msg.psi_magnetic = sample.GetValue(0);
      dispatch(msg, dev_name);
    }

    void
    SensorBridge::translateDvl(const std::string& dev_name, const sf::Sample& sample)
    {
      // Channels: bottom velocity (0-2), altitude (3), water velocity (4-6)
      // and ping status (7): 0 - bottom, 1 - water, 2 - both, 3 - none.
      // Older Stonefish versions only provide the first four channels.
      const std::vector<sf::Scalar> data = sample.GetData();
      const int status = data.size() > 7 ? (int)data[7] : 0;
      const bool bottom_lock = (status == 0 || status == 2);
      const bool water_lock = (status == 1 || status == 2);

      IMC::GroundVelocity ground;
      ground.x = sample.GetValue(0);
      ground.y = sample.GetValue(1);
      ground.z = sample.GetValue(2);
      ground.validity = bottom_lock
                          ? (IMC::GroundVelocity::VAL_VEL_X | IMC::GroundVelocity::VAL_VEL_Y
                             | IMC::GroundVelocity::VAL_VEL_Z)
                          : 0;
      dispatch(ground, dev_name);

      if (data.size() > 6)
      {
        IMC::WaterVelocity water;
        water.x = data[4];
        water.y = data[5];
        water.z = data[6];
        water.validity = water_lock ? (IMC::WaterVelocity::VAL_VEL_X | IMC::WaterVelocity::VAL_VEL_Y
                                       | IMC::WaterVelocity::VAL_VEL_Z)
                                    : 0;
        dispatch(water, dev_name);
      }

      IMC::Distance altitude;
      altitude.value = sample.GetValue(3);
      altitude.validity = bottom_lock ? IMC::Distance::DV_VALID : IMC::Distance::DV_INVALID;
      dispatch(altitude, dev_name);
    }

    void
    SensorBridge::translateGps(const std::string& dev_name, const sf::Sample& sample)
    {
      // Stonefish reports latitude and longitude in degrees and flags the
      // absence of a fix (sensor underwater) with out of range values.
      const double lat = sample.GetValue(0);
      const double lon = sample.GetValue(1);
      const bool has_fix = std::fabs(lat) <= 90.0 && std::fabs(lon) <= 180.0;

      IMC::GpsFix msg;
      msg.type = IMC::GpsFix::GFT_STANDALONE;

      if (has_fix)
      {
        Time::BrokenDown utc(Time::Clock::getSinceEpoch());
        msg.validity = c_gps_validity;
        msg.utc_year = utc.year;
        msg.utc_month = utc.month;
        msg.utc_day = utc.day;
        msg.utc_time = utc.hour * 3600 + utc.minutes * 60 + utc.seconds;
        msg.lat = Angles::radians(lat);
        msg.lon = Angles::radians(lon);
        msg.satellites = 8;
        msg.hacc = 1.0;
        msg.vacc = 2.0;
        msg.hdop = 1.0;
        msg.vdop = 1.0;
      }

      dispatch(msg, dev_name);
    }

    void
    SensorBridge::translatePressure(const std::string& dev_name, const sf::Sample& sample)
    {
      const double pascal = sample.GetValue(0);

      // IMC pressure is expressed in hectopascal.
      IMC::Pressure pressure;
      pressure.value = pascal / 100.0;
      dispatch(pressure, dev_name);

      IMC::Depth depth;
      depth.value = pascal / (m_water_density * Math::c_gravity);
      dispatch(depth, dev_name);
    }

    void
    SensorBridge::translateIns(const std::string& dev_name, const sf::Sample& sample)
    {
      // Channels: north (0), east (1), depth (2), altitude (3), latitude (4),
      // longitude (5), body velocity (6-8), attitude (9-11), angular
      // rates (12-14) and body acceleration (15-17).
      IMC::EstimatedState msg;
      msg.lat = Angles::radians(sample.GetValue(4));
      msg.lon = Angles::radians(sample.GetValue(5));
      msg.x = sample.GetValue(0);
      msg.y = sample.GetValue(1);
      msg.z = sample.GetValue(2);
      msg.depth = sample.GetValue(2);
      msg.alt = sample.GetValue(3);
      msg.u = sample.GetValue(6);
      msg.v = sample.GetValue(7);
      msg.w = sample.GetValue(8);
      msg.phi = sample.GetValue(9);
      msg.theta = sample.GetValue(10);
      msg.psi = sample.GetValue(11);
      msg.p = sample.GetValue(12);
      msg.q = sample.GetValue(13);
      msg.r = sample.GetValue(14);
      Coordinates::BodyFixedFrame::toInertialFrame(msg.phi, msg.theta, msg.psi, msg.u, msg.v, msg.w,
                                                   &msg.vx, &msg.vy, &msg.vz);
      dispatch(msg, dev_name);
    }

    void
    SensorBridge::translateEncoder(const std::string& dev_name, const sf::Sample& sample)
    {
      // Channels: angle (0) and angular velocity (1).
      IMC::Rpm msg;
      msg.value = (int16_t)std::lround(sample.GetValue(1) * 60.0 / Math::c_two_pi);
      dispatch(msg, dev_name);
    }

    void
    SensorBridge::translateCurrent(const std::string& dev_name, const sf::Sample& sample)
    {
      IMC::Current msg;
      msg.value = sample.GetValue(0);
      dispatch(msg, dev_name);
    }

    void
    SensorBridge::translateMultibeam(sf::ScalarSensor* sensor, const sf::Sample& sample)
    {
      const sf::SensorChannel desc = sensor->GetSensorChannelDescription(0);
      const std::vector<sf::Scalar> ranges = sample.GetData();

      IMC::SonarData msg;
      msg.type = IMC::SonarData::ST_MULTIBEAM;
      msg.frequency = 0;
      msg.min_range = (uint16_t)desc.rangeMin;
      msg.max_range = (uint16_t)desc.rangeMax;
      msg.bits_per_point = 16;
      msg.scale_factor = 0.001;

      // Ranges as 16-bit little endian millimetres.
      msg.data.reserve(ranges.size() * 2);
      for (sf::Scalar range : ranges)
      {
        const uint16_t mm = (uint16_t)Math::trimValue(range * 1000.0, 0.0, 65535.0);
        msg.data.push_back((char)(mm & 0xff));
        msg.data.push_back((char)(mm >> 8));
      }

      dispatch(msg, sensor->GetName());
    }

    void
    SensorBridge::translateProfiler(const std::string& dev_name, const sf::Sample& sample)
    {
      // Channels: beam angle (0) and measured distance (1). The angle has
      // no place in an IMC Distance message and is dropped.
      IMC::Distance msg;
      msg.value = sample.GetValue(1);
      msg.validity = IMC::Distance::DV_VALID;
      dispatch(msg, dev_name);
    }

    void
    SensorBridge::setupVision(sf::VisionSensor* sensor)
    {
      DUNE_MSG("SensorBridge", "vision sensor: " << sensor->GetName());

      switch (sensor->GetVisionSensorType())
      {
        case sf::VisionSensorType::COLOR_CAMERA:
          static_cast<sf::ColorCamera*>(sensor)->InstallNewDataHandler(
            [this](sf::ColorCamera* camera) { onColorCamera(camera); });
          break;

        case sf::VisionSensorType::FLS:
          static_cast<sf::FLS*>(sensor)->InstallNewDataHandler(
            [this](sf::FLS* fls) { onFls(fls); });
          break;

        case sf::VisionSensorType::SSS:
          static_cast<sf::SSS*>(sensor)->InstallNewDataHandler(
            [this](sf::SSS* sss) { onSss(sss); });
          break;

        case sf::VisionSensorType::MSIS:
          static_cast<sf::MSIS*>(sensor)->InstallNewDataHandler(
            [this](sf::MSIS* msis) { onMsis(msis); });
          break;

        default:
          warnOnce(sensor->GetName(), "vision sensor has no IMC counterpart implemented!");
          break;
      }
    }

    void
    SensorBridge::onColorCamera(sf::ColorCamera* camera)
    {
      unsigned int width, height;
      camera->GetResolution(width, height);

      m_jpeg.setInputDimensions(width, height).setInputColorSpace(Media::JPEGCompressor::CS_RGB);
      if (!m_jpeg.compress((uint8_t*)camera->GetImageDataPointer(), 90))
      {
        warnOnce(camera->GetName(), "failed to compress camera frame");
        return;
      }

      IMC::CompressedImage msg;
      msg.frameid = m_frameid++;
      msg.data.assign(m_jpeg.imageData(), m_jpeg.imageData() + m_jpeg.imageSize());
      dispatch(msg, camera->GetName());
    }

    void
    SensorBridge::onFls(sf::FLS* fls)
    {
      unsigned int beams, bins;
      fls->GetResolution(beams, bins);

      IMC::SonarData msg;
      msg.type = IMC::SonarData::ST_MULTIBEAM;
      msg.frequency = 0;
      msg.min_range = 0;
      msg.max_range = (uint16_t)fls->GetRangeMax();
      fillSonarData(msg, (uint8_t*)fls->GetImageDataPointer(), beams * bins);
      dispatch(msg, fls->GetName());
    }

    void
    SensorBridge::onSss(sf::SSS* sss)
    {
      unsigned int width, lines;
      sss->GetResolution(width, lines);

      // The buffer is a waterfall image with the newest ping in the first
      // row, covering both channels: port and starboard.
      IMC::SonarData msg;
      msg.type = IMC::SonarData::ST_SIDESCAN;
      msg.frequency = 0;
      msg.min_range = 0;
      msg.max_range = (uint16_t)sss->GetRangeMax();
      fillSonarData(msg, (uint8_t*)sss->GetImageDataPointer(), width);
      dispatch(msg, sss->GetName());
    }

    void
    SensorBridge::onMsis(sf::MSIS* msis)
    {
      unsigned int bins, steps;
      msis->GetResolution(bins, steps);

      // Full mechanical scan: one row of bins per beam angle step.
      IMC::SonarData msg;
      msg.type = IMC::SonarData::ST_PENCILBEAM;
      msg.frequency = 0;
      msg.min_range = 0;
      msg.max_range = (uint16_t)msis->GetRangeMax();
      fillSonarData(msg, (uint8_t*)msis->GetImageDataPointer(), bins * steps);
      dispatch(msg, msis->GetName());
    }
  }
}
