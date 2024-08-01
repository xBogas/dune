//***************************************************************************
// Copyright 2007-2024 Universidade do Porto - Faculdade de Engenharia      *
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

// C++ headers.
#include <unordered_map>

namespace Transports
{
  //! Insert short task description here.
  //!
  //! Insert explanation on task behaviour here.
  //! @author João Bogas
  namespace SatelliteAnnounces
  {
    using DUNE_NAMESPACES;

    struct Arguments
    {
      //! Delay between announce messages.
      double ann_period;
      //! Delay between device updates messages.
      double dev_period;
    };

    struct Task: public DUNE::Tasks::Task
    {
      //! Task arguments.
      Arguments m_args;
      //! Last announce messages received.
      std::unordered_map<std::string, IMC::Announce> m_last_announces;
      //! Last plan state received.
      IMC::PlanControlState m_plan_state;
      //! Last fuel state received.
      IMC::FuelLevel m_fuel_state;
      //! Last vehicle state received.
      IMC::VehicleState m_vehicle_state;
      //! Request ID for Iridium messages.
      uint16_t m_req_id;
      //! Request ID for announce messages.
      uint16_t m_ann_req_id;
      //! Request ID for device updates messages.
      uint16_t m_dev_req_id;
      //! Flag to indicate if the last announce message was queued.
      bool m_ann_queued;
      //! Flag to indicate if the last device update message was queued.
      bool m_dev_queued;
      //! Announce watchdog.
      Counter<double> m_ann_wdog;
      //! Device updates watchdog.
      Counter<double> m_dev_wdog;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx)
      {
        paramActive(Tasks::Parameter::SCOPE_GLOBAL, Tasks::Parameter::VISIBILITY_USER);

        param("Announce Periodicity", m_args.ann_period)
          .units(Units::Second)
          .defaultValue("60")
          .description("Delay between announce messages being sent. 0 for no updates being sent.");

        param("Device updates - Periodicity", m_args.dev_period)
          .units(Units::Second)
          .defaultValue("60")
          .description("Delay between device updates being sent.");

        bind<IMC::Announce>(this);
        bind<IMC::FuelLevel>(this);
        bind<IMC::PlanControlState>(this);
        bind<IMC::VehicleState>(this);
      }

      void
      onActivation(void)
      {
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);

        m_ann_wdog.setTop(m_args.ann_period);
        m_dev_wdog.setTop(m_args.dev_period);
      }

      void
      onDeactivation(void)
      {
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
      }

      void
      consume(const IMC::Announce* msg)
      {
        if (msg->lat == 0 && msg->lon == 0)
          return;

        m_last_announces[msg->sys_name] = *msg;
      }

      void
      consume(const IMC::FuelLevel* msg)
      {
        m_fuel_state = *msg;
      }

      void
      consume(const IMC::PlanControlState* msg)
      {
        m_plan_state = *msg;
      }

      void
      consume(const IMC::VehicleState* msg)
      {
        m_vehicle_state = *msg;
      }

      void
      consume(const IMC::SatelliteStatus* msg)
      {
        // Filter Announce message
        if (msg->req_id == m_ann_req_id)
        {
          if (msg->status == IridiumTxStatus::TXSTATUS_OK)
          {
            m_ann_wdog.setTop(m_args.ann_period);
            debug("announce sent successfully");
          }

          // If message was expired or send, clear the flag
          m_ann_queued = !(msg->status == IridiumTxStatus::TXSTATUS_OK
                           || msg->status == IridiumTxStatus::TXSTATUS_EXPIRED);

          return;
        }

        // Filter DeviceUpdate message
        if (msg->req_id == m_dev_req_id)
        {
          if (msg->status == IridiumTxStatus::TXSTATUS_OK)
          {
            m_dev_wdog.setTop(m_args.dev_period);
            debug("device update sent successfully");
          }

          m_dev_queued = !(msg->status == IridiumTxStatus::TXSTATUS_OK
                           || msg->status == IridiumTxStatus::TXSTATUS_EXPIRED);

          return;
        }
      }

      void
      sendAnnounce(void)
      {
        if (m_ann_queued)
        {
          debug("won't send announce message while previous one is still queued.");
          return;
        }

        debug("queuing announce");

        if (m_last_announces.find(getSystemName()) == m_last_announces.end())
          return;

        IMC::Announce* ann = &m_last_announces[getSystemName()];

        std::stringstream ss;
        if (m_plan_state.state == IMC::PlanControlState::PCS_EXECUTING)
          ss << "P:" << m_plan_state.plan_id << " ";
        else
          ss << "P:n/a ";
        ss << "F:" << (int)m_fuel_state.value << "% ";
        if (m_vehicle_state.error_count > 0)
          ss << "E:" << m_vehicle_state.last_error;

        ann->services = ss.str();

        m_ann_req_id = m_req_id;
        sendSatelitteMsg(ann);
        m_ann_queued = true;
      }

      void
      sendDeviceUpdates(void)
      {
        if (m_dev_queued)
        {
          debug("won't send device updates message because pool is not empty");
          return;
        }

        debug("queuing device updates");
        IMC::DeviceUpdate msg;
        std::unordered_map<std::string, IMC::Announce>::iterator it;

        for (it = m_last_announces.begin(); it != m_last_announces.end(); it++)
        {
          DevicePosition pos;
          pos.id = it->second.getSource();
          pos.lat = it->second.lat;
          pos.lon = it->second.lon;
          pos.time = it->second.getTimeStamp();
          msg.positions.push_back(pos);

          spew("position to be sent: id:%d, lat: %f, lon: %f, time: %f", pos.id, pos.lat, pos.lon,
               pos.time);
        }
        m_last_announces.clear();

        msg.source = getSystemId();
        msg.destination = 0xFFFF;

        sendSatelitteMsg(&msg);
        m_dev_queued = true;
      }

      void
      sendSatelitteMsg(DeviceUpdate* msg)
      {
        m_dev_req_id = m_req_id++;

        SatelliteRequest req;
        req.req_id = m_dev_req_id;
        req.ttl = 60;
        req.type = SatelliteRequest::TYPE_RAW;

        IMC::DevDataBinary data;
        uint8_t buffer[1024];
        size_t len = msg->serialize(buffer);
        data.value.assign(buffer, buffer + len);

        req.msg.set(data);

        dispatch(req);

        trace("device update request sent ...");
      }

      void
      sendSatelitteMsg(Announce* msg)
      {
        m_ann_req_id = m_req_id++;

        SatelliteRequest req;
        req.req_id = m_ann_req_id;
        req.ttl = 60;
        req.type = SatelliteRequest::TYPE_INLINEMSG;
        req.msg.set(*msg);

        dispatch(req);

        trace("announce request sent ...");
      }

      //! Main loop.
      void
      onMain(void)
      {
        while (!stopping())
        {
          waitForMessages(3.0);

          if (!isActive())
            continue;

          if (m_ann_wdog.overflow() && m_ann_wdog.getTop() != 0)
            sendAnnounce();

          if (m_dev_wdog.overflow())
            sendDeviceUpdates();
        }
      }
    };
  }
}

DUNE_TASK
