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
#include <DUNE/Network/Fragments.hpp>

namespace Transports
{
  //! Insert short task description here.
  //!
  //! Insert explanation on task behaviour here.
  //! @author João Bogas
  namespace Satellite
  {
    using DUNE_NAMESPACES;

    struct Arguments
    {
      //! Maximum size of a frame to be sent.
      uint16_t max_frame_size;
      //! Maximum age of received messages.
      double max_age_secs;
      //! Send Iridium text messages as plain text (and not IMC).
      bool iridium_plain_texts;
    };

    struct Task: public DUNE::Tasks::Task
    {
      //! Task arguments.
      Arguments m_args;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx)
      {
        paramActive(Tasks::Parameter::SCOPE_GLOBAL,  // Add Active parameters
                    Tasks::Parameter::VISIBILITY_USER, false);

        param("Maximum Frame Size", m_args.max_frame_size)
          .defaultValue("268")
          .description("Maximum size of a frame to be sent.");

        param("Maximum age", m_args.max_age_secs)
          .units(Units::Second)
          .defaultValue("1200")
          .description("Age, in seconds, after which received IMC messages are discarded.");

        param("Send Iridium plain texts", m_args.iridium_plain_texts)
          .description("Send Iridium text messages as plain text (and not IMC)")
          .defaultValue("True");

        bind<IMC::IridiumTxStatus>(this);
        bind<IMC::IridiumMsgRx>(this);
        bind<IMC::SatelliteRequest>(this);
      }

      //! Initialize resources.
      void
      onResourceInitialization(void)
      {
        IMC::AnnounceService announce;
        announce.service = std::string("imc+any://iridium");
        dispatch(announce);
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
      }

      void
      onActivation(void)
      {
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
      }

      void
      onDeactivation(void)
      {
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
      }

      void
      handleIridiumCmd(const IridiumCommand* cmd)
      {
        IMC::TextMessage tm;
        tm.text = cmd->command;
        tm.origin = "iridium";
        tm.setSource(cmd->source);

        trace("dispatching text message: %s", tm.text.c_str());
        dispatch(tm);
      }

      void
      handleUpdates(const std::vector<DevicePosition>& positions)
      {
        inf("Received device update with %d positions", (int)positions.size());

        for (auto itr = positions.begin(); itr != positions.end(); itr++)
        {
          const DevicePosition& pos = *itr;
          int selector = (pos.id & 0x0F);

          IMC::RemoteSensorInfo rsi;
          rsi.alt = -1;
          rsi.lat = pos.lat;
          rsi.lon = pos.lon;
          rsi.heading = 0;

          war("System %X is at (%.5f, %.5f).", pos.id, Angles::degrees(pos.lat),
              Angles::degrees(pos.lon));

          std::string name = resolveSystemId(pos.id);

          switch (selector)
          {
            case 0:
              rsi.sensor_class = "Unmanned Vehicle";
              break;
            case 2:
              rsi.sensor_class = "External Vehicle";
              break;
            case 4:
              rsi.sensor_class = "Console";
              break;
            case 6:
              rsi.sensor_class = "Sensor";
              break;
            case 8:
              rsi.sensor_class = "Manned Vehicle";
              break;
            default:
            {
              rsi.sensor_class = "Unknown";
              std::stringstream ss;
              ss << rsi.sensor_class << "_" << pos.id;
              rsi.id = ss.str();
            }
            break;
          }

          if (pos.pos_class != 0)
          {
            std::stringstream ss;
            ss << "Argos Class " << (char)pos.pos_class;
            rsi.sensor_class = ss.str();
          }
          else
            rsi.id = name;

          dispatch(rsi);
        }
      }

      void
      handleIMCMessage(ImcIridiumMessage* ir_msg)
      {
        IMC::Message* msg = ir_msg->msg;

        double age = Clock::getSinceEpoch() - msg->getTimeStamp();
        if (age >= m_args.max_age_secs)
        {
          war("discarded IMC message of type %s because it is too old (%f seconds of age).",
              msg->getName(), age);
          return;
        }

        inf("received IMC message of type %s via Iridium from %d.", msg->getName(), ir_msg->source);
        msg->setSource(ir_msg->source);
        dispatch(msg, DF_LOOP_BACK);
      }

      //! Update Iriridium operation state.
      void
      handleOperation(const IMC::IridiumMsgRx* msg)
      {
        IMC::SatelliteRx sat_rx;
        sat_rx.setDestinationEntity(msg->getDestinationEntity());

        sat_rx.origin = msg->origin;
        sat_rx.htime = msg->htime;
        sat_rx.lat = msg->lat;
        sat_rx.lon = msg->lon;
        sat_rx.data = msg->data;

        dispatch(sat_rx);
      }

      void
      sendFragmented(const IMC::Message* msg, const IMC::SatelliteRequest* req)
      {
        Network::Fragments frags(msg, m_args.max_frame_size);

        for (int i = 0; i < frags.getNumberOfFragments(); i++)
        {
          IMC::MessagePart* msg_frag = frags.getFragment(i);

          dispatchRequest(msg_frag, req);
        }
      }

      void
      sendIridiumMsg(const IMC::SatelliteRequest* msg)
      {
        const IMC::Message* m = msg->msg_data.get();
        debug("sending message %s", m->getName());

        // 10 bytes is the ImcIridiumMessage header size
        if (m->getPayloadSerializationSize() + 10 > m_args.max_frame_size)
        {
          sendFragmented(m, msg);
          return;  // Send as fragments
        }

        dispatchRequest(m, msg);
      }

      void
      sendRaw(const IMC::SatelliteRequest* msg)
      {
        if (msg->raw_data.empty())
        {
          dispatchRequestRaw(msg->msg_data.get(), msg);
          return;
        }

        IMC::IridiumMsgTx tx;
        tx.setSource(msg->getSource());
        tx.setSourceEntity(msg->getSourceEntity());

        tx.destination = msg->destination;
        tx.ttl = msg->ttl;
        tx.req_id = msg->req_id;

        tx.data.assign(msg->raw_data.begin(), msg->raw_data.end());

        dispatch(tx);
      }

      void
      sendText(const IMC::SatelliteRequest* msg)
      {
        IridiumMsgTx tx;
        tx.setDestination(msg->getDestination());
        tx.setDestinationEntity(msg->getDestinationEntity());

        tx.destination = msg->destination;
        tx.ttl = msg->ttl;
        tx.req_id = msg->req_id;

        if (m_args.iridium_plain_texts)
        {
          tx.data.assign(msg->txt_data.begin(), msg->txt_data.end());
          dispatch(tx);
          return;
        }

        IMC::IridiumCommand m;
        m.source = getSystemId();
        m.destination = 0xFFFF;
        m.command = msg->txt_data;
        uint8_t buffer[65535];
        int len = m.serialize(buffer);
        tx.data.assign(buffer, buffer + len);

        dispatch(tx);
      }

      void
      dispatchRequest(const IMC::Message* msg, const IMC::SatelliteRequest* req)
      {
        uint8_t buffer[1024];

        ImcIridiumMessage ir_msg;
        ir_msg.source = getSystemId();
        ir_msg.destination = 0xFFFF;
        ir_msg.msg = msg->clone();
        int len = ir_msg.serialize(buffer);

        IMC::IridiumMsgTx tx;
        tx.setSource(msg->getSource());
        tx.setSourceEntity(msg->getSourceEntity());

        tx.ttl = req->ttl;
        tx.req_id = req->req_id;
        tx.destination = req->destination;
        tx.data.assign(buffer, buffer + len);

        dispatch(tx);

        spew("sent message (%d) %s", req->req_id, msg->getName());
      }

      void
      dispatchRequestRaw(const IMC::Message* msg, const IMC::SatelliteRequest* req)
      {
        uint8_t bfr[DUNE_IMC_CONST_MAX_SIZE];

        ImcFullIridiumMsg ir_msg(msg->clone());
        uint16_t len = ir_msg.serialize(bfr);

        IMC::IridiumMsgTx tx;
        tx.setDestination(msg->getDestination());

        tx.req_id = req->req_id;
        tx.data.assign(bfr, bfr + len);
        tx.destination = req->destination;
        tx.ttl = req->ttl;

        dispatch(tx);

        trace("Sent message (%d) %s as raw", req->req_id, msg->getName());
      }

      void
      consume(const IMC::IridiumTxStatus* msg)
      {
        IMC::SatelliteStatus sat_status;
        sat_status.setDestinationEntity(msg->getDestinationEntity());
        sat_status.req_id = msg->req_id;
        sat_status.status = msg->status;
        sat_status.info = msg->text;

        dispatch(sat_status);
      }

      void
      consume(const IMC::IridiumMsgRx* msg)
      {
        IridiumMessage* ir_msg = nullptr;
        try
        {
          ir_msg = IridiumMessage::deserialize(msg);
        }
        catch (const std::exception& e)
        {
          err("%s", e.what());
          war(DTR("Parsing unrecognized iridium message as text"));
          std::string text(msg->data.begin(), msg->data.end());
          IMC::TextMessage tm;
          tm.text = text;
          tm.origin = "iridium";
          std::stringstream ss;
          tm.toText(ss);
          trace("sending this message to bus: %s", ss.str().c_str());
          dispatch(tm);
          return;
        }

        switch (ir_msg->msg_id)
        {
          case ID_IRIDIUMCMD:
            handleIridiumCmd(static_cast<IridiumCommand*>(ir_msg));
            break;

          case ID_DEVICEUPDATE:
            handleUpdates(static_cast<DeviceUpdate*>(ir_msg)->positions);
            break;

          case ID_EXTDEVUPDATE:
            handleUpdates(static_cast<ExtendedDeviceUpdate*>(ir_msg)->positions);
            break;

          case ID_IMCMESSAGE:
            handleIMCMessage(static_cast<ImcIridiumMessage*>(ir_msg));
            break;

          case ID_UPDATE_OP:
            handleOperation(msg);
            break;

          default:
            break;
        }

        Memory::clear(ir_msg);
      }

      void
      consume(const IMC::SatelliteRequest* msg)
      {
        switch (msg->type)
        {
          case SatelliteRequest::TYPE_INLINEMSG:
            sendIridiumMsg(msg);
            break;

          case SatelliteRequest::TYPE_TEXT:
            sendText(msg);
            break;

          case SatelliteRequest::TYPE_RAW:
            sendRaw(msg);
            break;

          default:
            break;
        }
      }

      //! Main loop.
      void
      onMain(void)
      {
        while (!stopping())
        {
          waitForMessages(1.0);
        }
      }
    };
  }
}

DUNE_TASK
