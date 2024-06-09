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

#include "DevHandles.hpp"

namespace Supervisors
{
  //! Insert short task description here.
  //!
  //! Insert explanation on task behaviour here.
  //! @author João Bogas
  namespace MCU
  {
    using DUNE_NAMESPACES;

    struct Arguments
    {
      //! IO Handle.
      std::string io_dev;
      //! Synchronize MCU clock with DUNE.
      unsigned clock_sync;
      //! MCU System Name.
      std::string sys_name;
    };

    struct Task: public DUNE::Tasks::Task
    {
      //! Factory for creating IO Handles.
      DevHandles m_factory;
      //! IO Handle.
      IO::Handle* m_handle;
      //! Task arguments.
      Arguments m_args;
      //! MCU Number Labels.
      unsigned m_num_labels;
      //! MCU consumers flag.
      bool m_mcu_callbacks;
      //! Buffer for incoming messages.
      char m_bfr[65535];
      //! Position in buffer.
      size_t m_bfr_pos;
      //! MCU Labels.
      std::vector<std::string> m_labels;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx),
        m_factory(this),
        m_handle(nullptr),
        m_num_labels(0),
        m_mcu_callbacks(false),
        m_bfr_pos(0)
      {
        param("IO Handle", m_args.io_dev)
          .description("IO Handle with uri type:/dev:/arg to interface with MCU");

        param("Clock Sync Period (s)", m_args.clock_sync)
          .defaultValue("10")
          .description("Synchronize MCU clock with DUNE");

        param("MCU System Name", m_args.sys_name)
          .defaultValue("MCU")
          .description("System name used by MCU on announce message");

        bind<IMC::Announce>(this);
      }

      //! Destructor.
      ~Task(void)
      {
        Memory::clear(m_handle);
      }

      void
      onSetEntityParameters(const IMC::SetEntityParameters* msg) override
      {
        for (auto it = m_labels.begin(); it != m_labels.end(); ++it)
        {
          if (msg->name == *it)
          {
            sendMessage(msg);
            return;
          }
        }

        DUNE::Tasks::Task::onSetEntityParameters(msg);
      }

      //! Update internal state with new parameter values.
      void
      onUpdateParameters(void)
      {
        if (paramChanged(m_args.io_dev))
        {
          Memory::clear(m_handle);
          m_handle = m_factory.createHandle(m_args.io_dev.c_str());
          onEntityReservation();
        }
      }

      bool
      onWriteParamsXML(std::ostream& os) const
      {
        // This method cannot be const
        // so we cast the const away :)
        Task* non_const = const_cast<Task*>(this);
        return non_const->WriteMCUParams(os);
      }

      bool
      WriteMCUParams(std::ostream& os)
      {
        inf("writing MCU parameters");

        using DUNE::Utils::XML;

        queryMCUParams();

        std::vector<IMC::EntityParameters*> dev_params;

        Counter<double> timer(10.0);
        while (!timer.overflow())
        {
          if (m_num_labels <= dev_params.size())
            break;

          IMC::Message* msg = waitMessage(1.0);
          if (msg == nullptr)
            continue;

          if (msg->getId() != IMC::EntityParameters::getIdStatic())
          {
            Memory::clear(msg);
            continue;
          }

          IMC::EntityParameters* ep = static_cast<IMC::EntityParameters*>(msg);
          dev_params.push_back(ep);
        }

        for (auto entity : dev_params)
        {
          debug("Entity %s", entity->name.c_str());

          os << "<section";
          XML::writeAttr("name", entity->name.c_str(), os);
          XML::writeAttr("name-i18n", DTR(entity->name.c_str()), os);
          os << ">\n";

          for (auto p : entity->params)
          {
            debug("param %s - val %s", p->name.c_str(), p->value.c_str());

            os << "<param";
            XML::writeAttr("name", p->name.c_str(), os);
            os << ">\n";

            XML::writeTag("name-i18n", DTR(p->name.c_str()), os);
            XML::writeTag("type", toType(p->value), os);
            XML::writeTag("visibility", "developer", os);
            XML::writeTag("scope", "global", os);
            XML::writeTag("default", p->value, os);
            XML::writeTag("units", "", os);

            os << "</param>\n";
          }

          os << "</section>\n";
        }

        return false;
      }

      std::string
      toType(const std::string& value)
      {
        std::stringstream ss(value);

        if (value == "true" || value == "false")
          return "boolean";

        long int i;
        if (ss >> i)
        {
          if (ss.eof())
            return "integer";
        }

        // Reset
        ss.clear();
        ss.str(value);

        double f;
        if (ss >> f)
        {
          if (ss.eof())
            return "real";
        }

        // default to string
        return "string";
      }

      //! Reserve entity identifiers.
      void
      onEntityReservation(void)
      {
        m_handle->flush();

        EntityList el;
        el.setSource(getSystemId());
        el.setTimeStamp();
        el.setDestination(getSystemId());
        el.op = IMC::EntityList::OP_QUERY;

        Counter<double> timer(10.0);
        IMC::Message* msg = nullptr;
        while (!timer.overflow())
        {
          debug("Sending Entity List Query");
          sendMessage(&el);

          msg = waitMessage(1.0);
          if (msg == nullptr)
            continue;

          if (msg->getId() != EntityList::getIdStatic())
          {
            Memory::clear(msg);
            continue;
          }

          EntityList* el_report = static_cast<EntityList*>(msg);

          std::vector<std::string> labels;
          String::split(el_report->list, ";", labels);
          Memory::clear(el_report);

          reserveLabels(labels);
          break;
        }

        // Wait for Subscription List
        while (!timer.overflow())
        {
          msg = waitMessage(1.0);
          if (msg == nullptr)
            continue;

          if (msg->getId() != SessionSubscription::getIdStatic())
          {
            trace("received %s while waiting for session sub", msg->getName());
            Memory::clear(msg);
            continue;
          }

          parseSubscription(msg);
          Memory::clear(msg);
          return;
        }

        err("Timeout waiting for MCU to respond");
      }

      void
      parseSubscription(IMC::Message* msg)
      {
        if (m_mcu_callbacks)
        {
          spew("consumers to MCU already set");
          return;
        }

        SessionSubscription* sub = static_cast<SessionSubscription*>(msg);
        spew("sub request %s", sub->messages.c_str());

        std::vector<std::string> msg_ids;
        String::split(sub->messages, ";", msg_ids);
        for (size_t i = 0; i < msg_ids.size(); i++)
        {
          if (msg_ids[i].empty())
            continue;

          if (std::stoi(msg_ids[i]) == IMC::EntityList::getIdStatic())
            continue;

          if (std::stoi(msg_ids[i]) == IMC::QueryEntityParameters::getIdStatic())
            continue;

          if (std::stoi(msg_ids[i]) == IMC::SetEntityParameters::getIdStatic())
            continue;

          bind(std::stoi(msg_ids[i]), new Consumer<Task, IMC::Message>(*this, &Task::consumeToMCU));
        }

        m_mcu_callbacks = true;
      }

      //! Reserve entity identifiers for MCU labels.
      //! Add labels to entity list and send it to MCU.
      //! @param[in] labels vector of labels to reserve.
      void
      reserveLabels(std::vector<std::string>& labels)
      {
        EntityList el;
        el.setDestination(getSystemId());
        el.op = EntityList::OP_REPORT;

        el.list = "";
        for (unsigned i = 0; i < labels.size(); ++i)
        {
          unsigned id = getEntityID(labels[i]);
          m_num_labels++;

          el.list += labels[i];
          el.list += "=";
          el.list += std::to_string(id);
          el.list += ";";
        }

        spew("Entity List Report %s", el.list.c_str());
        sendMessage(&el);
      }

      unsigned
      getEntityID(const std::string& label)
      {
        unsigned id = 0;
        try
        {
          id = resolveEntity(label);
        }
        catch (...)
        {
          debug("Reserving entity %s", label.c_str());
          id = reserveEntity(label);
          m_labels.push_back(label);
        }

        return id;
      }

      void
      onQueryEntityParameters(const IMC::QueryEntityParameters* msg)
      {
        for (auto it = m_labels.begin(); it != m_labels.end(); ++it)
        {
          if (msg->name == *it)
          {
            war("query %s", msg->name.c_str());
            sendMessage(msg);
            return;
          }
        }

        if (msg->name != getEntityLabel())
          return;

        DUNE::Tasks::Task::onQueryEntityParameters(msg);
      }

      IMC::Message*
      waitMessage(double timeout)
      {
        if (!Poll::poll(*m_handle, timeout))
          return nullptr;

        size_t rv = m_handle->read(&m_bfr[m_bfr_pos], sizeof(m_bfr) - m_bfr_pos);
        if (rv <= 0)
          return nullptr;

        spew("Read %lu bytes", rv);
        m_bfr_pos += rv;
        if (m_bfr_pos >= sizeof(m_bfr))
        {
          err("Buffer overflow");
          m_bfr_pos = 0;
          return nullptr;
        }

        IMC::Message* msg = nullptr;
        try
        {
          msg = IMC::Packet::deserialize((uint8_t*)m_bfr, m_bfr_pos);
        }
        catch (const std::exception& e)
        {
          err("%s", e.what());
          return nullptr;
        }
        catch (...)
        {
          err("Unknown error ...");
          return nullptr;
        }

        m_bfr_pos = 0;
        std::stringstream ss;
        msg->toText(ss);
        spew("read %s", ss.str().c_str());
        return msg;
      }

      void
      queryMCUParams(const IMC::QueryEntityParameters* msg = nullptr)
      {
        spew("Querying MCU parameters");
        IMC::QueryEntityParameters query;
        if (msg)
        {
          query.setSource(msg->getSource());
          query.setSourceEntity(msg->getSourceEntity());
        }

        query.setDestination(getSystemId());
        query.name = "all";
        sendMessage(&query);
      }

      void
      consumeToMCU(const IMC::Message* msg)
      {
        sendMessage(msg);
      }

      void
      sendMessage(const IMC::Message* msg)
      {
        if (msg->getDestination() != getSystemId())
          return;

        uint8_t bfr[65535];
        size_t rv = IMC::Packet::serialize(msg, bfr, sizeof(bfr));
        if (rv <= 0)
        {
          war("Serialization error - sent %ld bytes", rv);
          return;
        }

        // trace("Sending %s to MCU", msg->getName());
        m_handle->write(bfr, rv);
        // std::stringstream ss;
        // msg->toText(ss);
        // spew("Sent %s", ss.str().c_str());
        // spew("Sent %ld bytes", rv);
      }

      void
      consume(const IMC::Announce* msg)
      {
        if (msg->sys_name != m_args.sys_name)
          return;

        spew("restarting entity configuration");
        war("MCU reset: %s", msg->services.c_str());
        onEntityReservation();
      }

      void
      onClockSync(const IMC::ClockControl* msg)
      {
        if (msg->getSource() != getSystemId())
          return;
      }

      //! Main loop.
      void
      onMain(void)
      {
        Counter<double> clock_sync(m_args.clock_sync);
        Counter<double> query_params(m_args.clock_sync);
        Counter<double> hb_wdog(1.0);
        while (!stopping())
        {
          waitForMessages(0.1);
          if (hb_wdog.overflow())
          {
            IMC::Heartbeat hb;
            hb.setSource(getSystemId());
            hb.setDestination(getSystemId());
            sendMessage(&hb);
            hb_wdog.reset();
          }
          
          // if (query_params.overflow())
          // {
          //   queryMCUParams();
          //   query_params.reset();
          // }

          IMC::Message* msg = waitMessage(0.5);
          if (msg != nullptr)
          {
            dispatch(msg, DF_LOOP_BACK | DF_KEEP_SRC_EID);
            std::stringstream ss;
            msg->toText(ss);
            spew("from mcu to bus %s", ss.str().c_str());
            Memory::clear(msg);
          }
        }
      }
    };
  }
}

DUNE_TASK
