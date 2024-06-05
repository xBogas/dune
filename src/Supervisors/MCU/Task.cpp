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
    };

    struct Task: public DUNE::Tasks::Task
    {
      //! IO Handle.
      IO::Handle* m_handle;
      //! Task arguments.
      Arguments m_args;
      //! MCU Parameters.
      std::vector<IMC::EntityParameters*> m_dev_params;
      //! MCU Number Labels.
      unsigned m_num_labels;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx),
        m_handle(nullptr),
        m_num_labels(0)
      {
        param("IO Handle", m_args.io_dev)
          .description("IO Handle with uri type:/dev:/arg to interface with MCU");

        param("Clock Sync Period (s)", m_args.clock_sync)
          .defaultValue("10")
          .description("Synchronize MCU clock with DUNE");
      }

      //! Destructor.
      ~Task(void)
      {
        Memory::clear(m_handle);
      }

      //! Update internal state with new parameter values.
      void
      onUpdateParameters(void)
      {
        if (paramChanged(m_args.io_dev))
          updateHandle();
      }

      bool
      onWriteParamsXML(std::ostream& os) const
      {
        Task* non_const = const_cast<Task*>(this);
        return non_const->WriteMCUParams(os);
      }

      bool
      WriteMCUParams(std::ostream& os)
      {
        inf("writing MCU parameters");

        using DUNE::Utils::XML;

        IMC::QueryEntityParameters query;
        query.name = "all";
        sendMessage(query);

        Counter<double> timer(10.0);
        while (!timer.overflow())
        {
          if (m_num_labels <= m_dev_params.size())
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
          m_dev_params.push_back(ep);
        }

        for (auto entity : m_dev_params)
        {
          spew("Entity %s", entity->name.c_str());

          os << "<section";
          XML::writeAttr("name", entity->name.c_str(), os);
          XML::writeAttr("name-i18n", DTR(entity->name.c_str()), os);
          os << ">\n";

          for (auto p : entity->params)
          {
            spew("param %s - val %s", p->name.c_str(), p->value.c_str());

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
          return "integer";

        // Reset
        ss.clear();
        ss.str(value);

        double f;
        if (ss >> f)
          return "real";

        // default to string
        return "string";
      }

      //! Reserve entity identifiers.
      void
      onEntityReservation(void)
      {
        EntityList el;
        el.op = IMC::EntityList::OP_QUERY;

        Counter<double> timer(10.0);
        IMC::Message* msg = nullptr;
        while (!timer.overflow())
        {
          debug("Sending Entity List Query");
          sendMessage(el);

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
          return;
        }

        err("Timeout waiting for MCU to respond");
        exit(1);
      }

      //! Reserve entity identifiers for MCU labels.
      //! Add labels to entity list and send it to MCU.
      //! @param[in] labels vector of labels to reserve.
      void
      reserveLabels(std::vector<std::string>& labels)
      {
        EntityList el;
        el.op = EntityList::OP_REPORT;

        try
        {
          el.list = "";
          for (unsigned i = 0; i < labels.size(); ++i)
          {
            unsigned id = reserveEntity(labels[i]);
            m_num_labels++;

            el.list += labels[i];
            el.list += "=";
            el.list += std::to_string(id);
            el.list += ";";
          }
        }
        catch (const std::exception& e)
        {
          err("%s", e.what());
        }

        sendMessage(el);
      }

      void
      onQueryEntityParameters(const IMC::QueryEntityParameters* msg)
      {
        spew("Query %s", msg->name.c_str());
        if (msg->name != getEntityLabel())
          return;

        Task::onQueryEntityParameters(msg);
        IMC::QueryEntityParameters* to_send = const_cast<IMC::QueryEntityParameters*>(msg);
        sendMessage(to_send);
      }

      //! Resolve entity names.
      void
      onEntityResolution(void)
      { }

      IO::Handle*
      createSerial(const char* dev, const char* arg)
      {
        debug("creating serial %s::%s", dev, arg);

        unsigned baud = std::stoul(arg);
        SerialPort* serial = new SerialPort(dev, baud);

        return serial;
      }

      IO::Handle*
      createSocketTCP(const char* addr, const char* arg)
      {
        debug("Creating tcp to %s::%s", addr, arg);

        TCPSocket* sock = nullptr;
        try
        {
          unsigned port = std::stoul(arg);
          sock = new TCPSocket();
          sock->setKeepAlive(true);
          sock->setNoDelay(true);
          sock->setSendTimeout(1.0);
          sock->setReceiveTimeout(1.0);
          sock->connect(addr, port);
        }
        catch (const std::exception& e)
        {
          err("%s", e.what());
        }

        return sock;
      }

      IO::Handle*
      createSocketUDP(const char* addr, const char* arg)
      {
        debug("Creating udp to %s::%s", addr, arg);

        UDPSocket* sock = nullptr;
        try
        {
          unsigned port = std::stoul(arg);
          sock = new UDPSocket();
          sock->enableBroadcast(true);
          sock->bind(5000);
          sock->connect(addr, port);

          debug("Listening on %s:%u", addr, port);
        }
        catch (const std::exception& e)
        {
          err("%s", e.what());
        }

        return sock;
      }

      void
      updateHandle(void)
      {
        char comms[64];
        char dev[64];
        char arg[64];
        if (std::sscanf(m_args.io_dev.c_str(), "%63[^:]:/%63[^:]:/%63s", comms, dev, arg) != 3)
          throw std::runtime_error("Invalid handle (type:/dev:/arg): " + m_args.io_dev);

        Memory::clear(m_handle);
        if (!strcmp(comms, "serial"))
          m_handle = createSerial(dev, arg);
        else if (!strcmp(comms, "udp"))
          m_handle = createSocketUDP(dev, arg);
        else if (!strcmp(comms, "tcp"))
          m_handle = createSocketTCP(dev, arg);
        else if (!strcmp(comms, "can"))
        {
          unsigned can_type = std::stoul(arg);
          m_handle = new SocketCAN(dev, (SocketCAN::can_frame_t)can_type);
        }
        else
        {
          throw std::runtime_error("Unknown handle " + m_args.io_dev);
        }
      }

      IMC::Message*
      waitMessage(double timeout)
      {
        char bfr[65535];
        if (!Poll::poll(*m_handle, timeout))
        {
          trace("Timeout waiting for message");
          return nullptr;
        }

        size_t rv = m_handle->read(bfr, sizeof(bfr));
        if (rv <= 0)
        {
          war("IO error - received %ld bytes", rv);
          return nullptr;
        }

        IMC::Message* msg = nullptr;
        spew("Received %ld bytes", rv);
        try
        {
          msg = IMC::Packet::deserialize((uint8_t*)bfr, rv);
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

        if (msg != nullptr)
          spew("Received message %s", msg->getName());

        return msg;
      }

      void
      sendMessage(IMC::Message* msg)
      {
        sendMessage(*msg);
      }

      void
      sendMessage(IMC::Message& msg)
      {
        if (msg.getTimeStamp() == -1)
          msg.setTimeStamp();

        uint8_t bfr[65535];
        size_t rv = IMC::Packet::serialize(&msg, bfr, sizeof(bfr));
        if (rv <= 0)
        {
          war("Serialization error - sent %ld bytes", rv);
          return;
        }

        m_handle->write(bfr, rv);
      }

      void
      checkInput(void)
      {
        IMC::Message* msg = waitMessage(5.0);
        if (msg == nullptr)
          return;

        dispatch(msg);
      }

      //! Main loop.
      void
      onMain(void)
      {
        while (!stopping())
        {
          waitForMessages(1.0);
          checkInput();
        }
      }
    };
  }
}

DUNE_TASK
