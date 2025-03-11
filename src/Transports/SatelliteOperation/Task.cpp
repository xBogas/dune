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

namespace Transports
{
  //! This task is responsible for handling the satellite control operations.
  //!
  //!
  //! @author João Bogas
  namespace SatelliteOperation
  {
    using DUNE_NAMESPACES;

    //! Database types string representation.
    static const char* c_db_types[] = {
      "Request", "Success", "Failure", "In Progress", "Unknown",
    };

    //! Database operation string representation.
    static const char* c_db_op[] = {
      "Set", "Delete", "Get", "Get Info", "Clear", "Get State", "Get DB State", "Boot", "Unknown",
    };

    struct Arguments
    {
      //! Maximum satellite message size.
      uint32_t max_payload;
      //! Rate limiters.
      std::vector<std::string> rate_lims;
      //! Filtered entities.
      std::vector<std::string> entities_flt;
      //! List of messages to send.
      std::vector<std::string> msgs;
      //! Message time to live.
      uint16_t ttl;
      //! satellite operation timeout.
      uint32_t ir_timeout;
    };

    struct Task: public DUNE::Tasks::Task
    {
      //! Task arguments.
      Arguments m_args;
      //! Request identifier.
      uint16_t m_req_id;
      //! Message filter.
      MessageFilter m_filter;
      //! Plan Control state.
      IMC::PlanControlState m_pcs;
      //! Entity State map.
      std::map<uint32_t, EntityState> m_entity_map;
      //! List of satellite subscribers. <ID, Timestamp>.
      std::map<unsigned, double> m_sat_subs;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx)
      {
        paramActive(Tasks::Parameter::SCOPE_GLOBAL,  // Add Active parameters
                    Tasks::Parameter::VISIBILITY_USER, false);

        param("Maximum satellite payload size", m_args.max_payload)
          .defaultValue("259")
          .description("Maximum size of satellite payload messages in bytes.");

        param("Rate Limiters", m_args.rate_lims)
          .description("List of <Message>:<Period> to send messages at a specific period.");

        param("Filtered Entities", m_args.entities_flt)
          .description("List of <Message>:<Entity>+<Entity> that define the source entities "
                       "allowed to pass message of a specific message type.");

        param("Transport", m_args.msgs)
          .defaultValue("")
          .description("List of messages to transport");

        param("Message TTL", m_args.ttl)
          .defaultValue("30")
          .description("Time to live for satellite messages.");

        param("Satellite Operation Timeout", m_args.ir_timeout)
          .defaultValue("600")
          .description("Satellite operation timeout in seconds.");

        bind<IMC::SatelliteStatus>(this);
        bind<IMC::SatelliteRx>(this);
        bind<IMC::EntityState>(this);
        bind<IMC::PlanDB>(this);
        bind<IMC::PlanControlState>(this);
        bind<IMC::EntityList>(this);
      }

      //! Update internal state with new parameter values.
      void
      onUpdateParameters(void)
      {
        // Process rate limiters.
        if (paramChanged(m_args.rate_lims))
          m_filter.setupRates(m_args.rate_lims);

        // Process filtered entities.
        if (paramChanged(m_args.entities_flt))
          m_filter.setupEntities(m_args.entities_flt, this);
      }

      //! Acquire resources.
      void
      onResourceAcquisition(void)
      {
        bind(this, m_args.msgs);
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
      consume(const IMC::PlanDB* msg)
      {
        if (msg->getSource() != getSystemId())
          return;

        if (msg->op != PlanDB::DBOP_GET_INFO && msg->op != PlanDB::DBOP_GET)
          return;

        debug("type %s op %s - %s", c_db_types[msg->type], c_db_op[msg->op], msg->plan_id.c_str());

        auto it = m_sat_subs.find(msg->getDestination());
        if (it == m_sat_subs.end())
          return;

        sendMsg(msg);
      }

      void
      consume(const IMC::EntityState* msg)
      {
        if (m_entity_map.find(msg->getSourceEntity()) == m_entity_map.end())
        {
          // First state message.
          EntityState& ent_state = m_entity_map[msg->getSourceEntity()];
          ent_state = *msg;
          return;
        }

        EntityState& ent = m_entity_map[msg->getSourceEntity()];
        if (ent.state == msg->state)  // Same state, ignore.
          return;

        // If entity updated from boot to normal, ignore.
        if (ent.state == EntityState::ESTA_BOOT && msg->state == EntityState::ESTA_NORMAL)
        {
          ent = *msg;
          return;
        }

        ent = *msg;

        if (m_sat_subs.empty())
          return;

        sendRaw(msg);
      }

      void
      consume(const IMC::PlanControlState* msg)
      {
        if (msg->getSource() != getSystemId())
          return;

        if (msg->state == m_pcs.state && msg->plan_id == m_pcs.plan_id
            && msg->man_id == m_pcs.man_id)
          return;

        m_pcs = *msg;

        if (m_sat_subs.empty())
          return;

        sendMsg(msg);
      }

      void
      consume(const IMC::EntityList* msg)
      {
        if (msg->getSource() != getSystemId())
          return;

        if (msg->op != EntityList::OP_REPORT)
          return;

        if (m_sat_subs.empty())
          return;

        auto it = m_sat_subs.find(msg->getDestination());
        if (it == m_sat_subs.end())
          return;

        sendMsg(msg);
      }

      //! Consume for control messages
      void
      consume(const IMC::Message* msg)
      {
        if (msg->getSource() != getSystemId())
          return;

        if (m_sat_subs.empty())
          return;

        if (m_filter.filter(msg))
          return;

        sendMsg(msg);
      }

      void
      sendMsg(const IMC::Message* msg)
      {
        uint16_t tid = m_req_id++;

        IMC::TransmissionRequest tr;
        tr.setDestination(getSystemId());
        tr.setDestinationEntity(getEntityId());
        tr.comm_mean = TransmissionRequest::CMEAN_SATELLITE;
        tr.data_mode = TransmissionRequest::DMODE_INLINEMSG;
        tr.deadline = Clock::getSinceEpoch() + m_args.ttl;
        tr.req_id = tid;
        tr.msg_data.set(*msg);
      }

      void
      sendRaw(const IMC::Message* msg)
      {
        IMC::TransmissionRequest tr;
        tr.setDestination(getSystemId());

        tr.req_id = m_req_id++;
        tr.comm_mean = IMC::TransmissionRequest::CMEAN_SATELLITE;
        tr.data_mode = IMC::TransmissionRequest::DMODE_RAW;
        tr.deadline = Clock::getSinceEpoch() + m_args.ttl;

        uint8_t bfr[DUNE_IMC_CONST_MAX_SIZE];

        ImcFullIridiumMsg ir_msg(msg->clone());

        uint16_t len = ir_msg.serialize(bfr);
        tr.raw_data.assign(bfr, bfr + len);

        dispatch(tr);
        trace("Sent message (%d) %s as raw", tr.req_id, msg->getName());
      }

      void
      consume(const IMC::SatelliteStatus* msg)
      {
        if (msg->getDestination() != getSystemId() && msg->getDestinationEntity() != getEntityId())
          return;

        spew("new status (%d) for message %d", msg->status, msg->req_id);

        switch (msg->status)
        {
          case IMC::IridiumTxStatus::TXSTATUS_OK:
            trace("message ack %d", msg->req_id);
            break;

          case IMC::IridiumTxStatus::TXSTATUS_EXPIRED:
            spew("message failed %d", msg->req_id);
            break;

          default:
            break;
        }
      }

      void
      consume(const IMC::SatelliteRx* msg)
      {
        IridiumMessage* ir_msg = nullptr;
        ir_msg = IridiumMessage::deserialize(msg);
        if (ir_msg == nullptr)
          return;

        if (ir_msg->msg_id != ID_UPDATE_OP)
        {
          if (!isActive())
            requestActivation();

          m_sat_subs[ir_msg->source] = Clock::getSinceEpoch();
          onIridiumActivation(ir_msg->source);
          delete ir_msg;
          return;
        }

        IMC::IridiumOperation* op = (IMC::IridiumOperation*)ir_msg;
        double elapsed = Clock::getSinceEpoch() - op->ts;
        if (elapsed > 180.0)
        {
          inf("expired operation from %d (-%f seconds)", op->source, elapsed);
          return;
        }

        switch (op->type)
        {
          case IMC::IridiumOperation::OP_DEACTIVATE:
          {
            auto it = m_sat_subs.find(op->source);
            if (it == m_sat_subs.end())
              return;

            m_sat_subs.erase(it);
          }
          break;

          case IMC::IridiumOperation::OP_ACTIVATE:
          {
            auto it = m_sat_subs.find(op->source);
            if (it != m_sat_subs.end())
            {
              it->second = Clock::getSinceEpoch();
              return;
            }

            m_sat_subs[op->source] = Clock::getSinceEpoch();

            if (!isActive())
              requestActivation();

            onIridiumActivation(op->source);
          }
          break;

          default:
            inf("invalid operation type %d", op->type);
            break;
        }

        delete op;
      }

      void
      onIridiumActivation(unsigned id)
      {
        debug("Activating iridium for %d", id);

        //? Send All EntityState messages?

        sendMsg(&m_pcs);
      }

      void
      checkSatSubs(void)
      {
        // Check if iridium subscriber is still active.
        for (auto iter = m_sat_subs.begin(); iter != m_sat_subs.end();)
        {
          double elapsed = Clock::getSinceEpoch() - iter->second;
          if (elapsed < 60)
          {
            ++iter;
            continue;
          }

          inf("deactivating iridium for %d (-%f seconds)", iter->first,
              elapsed - m_args.ir_timeout);
          iter = m_sat_subs.erase(iter);
        }
      }

      //! Main loop.
      void
      onMain(void)
      {
        while (!stopping())
        {
          waitForMessages(1.0);

          if (!isActive())
            continue;

          if (m_sat_subs.empty())
            continue;

          checkSatSubs();
        }
      }
    };
  }
}

DUNE_TASK
