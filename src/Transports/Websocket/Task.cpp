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

// ISO C++ 98 headers.
#include <cstdio>
#include <iomanip>
#include <map>
#include <sstream>
#include <vector>

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local headers.
#include "Server.hpp"

namespace Transports
{
  //! WebSocket server that streams IMC messages as JSON
  //! to all connected clients in real-time.
  //! @author João Bogas
  namespace Websocket
  {
    using DUNE_NAMESPACES;

    static std::string
    jsonEscape(const std::string& value)
    {
      std::ostringstream os;

      for (size_t i = 0; i < value.size(); ++i)
      {
        unsigned char c = (unsigned char)value[i];

        switch (c)
        {
          case '\\':
            os << "\\\\";
            break;
          case '"':
            os << "\\\"";
            break;
          case '\b':
            os << "\\b";
            break;
          case '\f':
            os << "\\f";
            break;
          case '\n':
            os << "\\n";
            break;
          case '\r':
            os << "\\r";
            break;
          case '\t':
            os << "\\t";
            break;
          default:
            if (c < 0x20)
            {
              char hex[7];
              std::sprintf(hex, "\\u%04x", c);
              os << hex;
            }
            else
            {
              os << value[i];
            }
            break;
        }
      }

      return os.str();
    }

    struct Snapshot
    {
      typedef std::map<unsigned, std::string> EntityMap;
      typedef std::map<uint64_t, IMC::Message*> MessageMap;
      typedef std::map<std::string, IMC::PowerChannelState*> PowerChannelMap;

      //! Constructor.
      Snapshot(const std::string& system, uint64_t uid):
        m_system(system),
        m_uid(uid),
        m_logbook_lines(100)
      {
        std::ostringstream os;
        os << getFullVersion() << " - " << getCompileDate();
        m_version = os.str();

        m_private_version = getFullVersionPrivate();

        std::ostringstream ts;
        ts << std::setprecision(12) << Clock::getSinceEpoch();
        m_time_start = ts.str();
      }

      //! Destructor.
      ~Snapshot(void)
      {
        MessageMap::iterator mit = m_messages.begin();
        for (; mit != m_messages.end(); ++mit)
          delete mit->second;

        PowerChannelMap::iterator pit = m_power_channels.begin();
        for (; pit != m_power_channels.end(); ++pit)
          delete pit->second;

        for (unsigned i = 0; i < m_logbook.size(); ++i)
          delete m_logbook[i];
      }

      void
      setEntities(const std::map<unsigned, std::string>& entities)
      {
        m_entities = entities;
      }

      void
      setLogEntry(unsigned lines)
      {
        if (lines == 0)
          lines = 1;

        m_logbook_lines = lines;

        while (m_logbook.size() > m_logbook_lines)
        {
          Memory::clear(m_logbook.front());
          m_logbook.erase(m_logbook.begin());
        }
      }

      void
      updateMessage(const IMC::Message* msg)
      {
        if (msg->getId() == DUNE_IMC_POWERCHANNELSTATE)
          updatePowerChannel(static_cast<const IMC::PowerChannelState*>(msg));

        IMC::Message* cmsg = msg->clone();
        uint64_t key = ((uint64_t)cmsg->getId() << 8) | cmsg->getSourceEntity();

        MessageMap::iterator it = m_messages.find(key);
        if (it != m_messages.end())
        {
          delete it->second;
          it->second = cmsg;
        }
        else
        {
          m_messages[key] = cmsg;
        }
      }

      void
      addLogEntry(const IMC::LogBookEntry* msg)
      {
        if (m_logbook.size() >= m_logbook_lines)
        {
          Memory::clear(m_logbook.front());
          m_logbook.erase(m_logbook.begin());
        }

        m_logbook.push_back(msg->clone());
      }

      std::string
      messagesJSON(void) const
      {
        std::ostringstream os;
        os << "{\"type\":\"state\",\"data\":{"
           << "\"dune_version\":\"" << jsonEscape(m_version) << "\","
           << "\"dune_private_version\":\"" << jsonEscape(m_private_version) << "\","
           << "\"dune_uid\":\"" << m_uid << "\","
           << "\"dune_time_start\":\"" << m_time_start << "\","
           << "\"dune_system\":\"" << jsonEscape(m_system) << "\",";

        std::ostringstream tc;
        tc << std::setprecision(12) << Clock::getSinceEpoch();
        os << "\"dune_time_current\":\"" << tc.str() << "\",";

        os << "\"dune_entities\":{";
        bool first = true;
        EntityMap::const_iterator eit = m_entities.begin();
        for (; eit != m_entities.end(); ++eit)
        {
          if (!first)
            os << ",";

          os << "\"" << eit->first << "\":{"
             << "\"label\":\"" << jsonEscape(eit->second) << "\"}";
          first = false;
        }
        os << "},";

        os << "\"dune_messages\":[";
        bool first_msg = true;

        MessageMap::const_iterator mit = m_messages.begin();
        for (; mit != m_messages.end(); ++mit)
        {
          if (!first_msg)
            os << ",";

          mit->second->toJSON(os);
          first_msg = false;
        }

        PowerChannelMap::const_iterator pit = m_power_channels.begin();
        for (; pit != m_power_channels.end(); ++pit)
        {
          if (!first_msg)
            os << ",";

          pit->second->toJSON(os);
          first_msg = false;
        }

        os << "]}}";
        return os.str();
      }

      std::string
      logbookJSON(void) const
      {
        std::ostringstream os;
        os << "{\"type\":\"logbook\",\"logbook\":{"
           << "\"dune_logbook\":[";

        for (unsigned i = 0; i < m_logbook.size(); ++i)
        {
          if (i > 0)
            os << ",";

          m_logbook[i]->toJSON(os);
        }

        os << "]}}";
        return os.str();
      }

      void
      updatePowerChannel(const IMC::PowerChannelState* msg)
      {
        PowerChannelMap::iterator it = m_power_channels.find(msg->name);

        if (it != m_power_channels.end())
          *it->second = *msg;
        else
          m_power_channels[msg->name] = new IMC::PowerChannelState(*msg);
      }

      //! DUNE system name.
      std::string m_system;
      //! DUNE public version string.
      std::string m_version;
      //! DUNE private version string.
      std::string m_private_version;
      //! DUNE UID.
      uint64_t m_uid;
      //! DUNE startup time.
      std::string m_time_start;
      //! Entity table.
      EntityMap m_entities;
      //! Last message per type/entity.
      MessageMap m_messages;
      //! Last power channel state per channel.
      PowerChannelMap m_power_channels;
      //! Sliding window of logbook entries.
      std::vector<IMC::LogBookEntry*> m_logbook;
      //! Maximum number of logbook entries.
      unsigned m_logbook_lines;
    };

    struct Arguments
    {
      //! TCP port.
      unsigned port;
      //! List of messages to transport.
      std::vector<std::string> messages;
      //! Number of maximum lines to send from logbook.
      unsigned logbook_lines;
    };

    //! Maximum number of ports to try before giving up.
    static const int c_max_port_tries = 10;

    struct Task: public DUNE::Tasks::Task
    {
      //! WebSocket server.
      Server* m_server;
      //! Task arguments.
      Arguments m_args;
      //! Stream snapshot state.
      Snapshot m_snapshot;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx),
        m_server(NULL),
        m_snapshot(getSystemName(), ctx.uid)
      {
        param("Port", m_args.port)
        .defaultValue("8082")
        .description("TCP port to listen on");

        param("Transports", m_args.messages)
        .defaultValue("")
        .description("List of messages to transport");

        param("Number Lines From LogBook to send", m_args.logbook_lines)
        .defaultValue("100")
        .description("Maximum number of logbook entries to keep in stream state");

        bind<IMC::LogBookEntry>(this);
      }

      //! Acquire resources.
      void
      onResourceAcquisition(void)
      {
        m_snapshot.setLogEntry(m_args.logbook_lines);
        bind(this, m_args.messages);

        uint16_t last_port = m_args.port + c_max_port_tries;

        for (uint16_t port = m_args.port; port < last_port; ++port)
        {
          try
          {
            inf(DTR("listening on %s:%u"), Address(Address::Any).c_str(), port);
            m_server = new Server(port);

            // Announce WebSocket service on all interfaces.
            std::vector<Interface> itfs = Interface::get();
            for (unsigned i = 0; i < itfs.size(); ++i)
            {
              std::stringstream os;
              os << "ws://" << itfs[i].address().str() << ":" << port;

              IMC::AnnounceService announce;
              announce.service = os.str();

              if (itfs[i].address().isLoopback())
                announce.service_type = IMC::AnnounceService::SRV_TYPE_LOCAL;
              else
                announce.service_type = IMC::AnnounceService::SRV_TYPE_EXTERNAL;

              dispatch(announce);
            }
            return;
          }
          catch (std::runtime_error& e)
          {
            war("%s", e.what());
          }
        }

        throw std::runtime_error(DTR("failed to find one available port"));
      }

      //! Release resources.
      void
      onResourceRelease(void)
      {
        Memory::clear(m_server);
      }

      void
      onEntityResolution(void)
      {
        m_snapshot.setEntities(m_ctx.entities.entries());
      }

      void
      consume(const IMC::Message* msg)
      {
        // Accept Announce messages from any source,
        // all others only from the local system.
        if (msg->getId() != DUNE_IMC_ANNOUNCE
            && msg->getSource() != getSystemId())
          return;

        m_snapshot.updateMessage(msg);

        std::string json = m_snapshot.messagesJSON();
        m_server->broadcast(json.c_str(), json.size());
      }

      void
      consume(const IMC::LogBookEntry* msg)
      {
        if (msg->getSource() != getSystemId())
          return;

        m_snapshot.addLogEntry(msg);

        std::string json = m_snapshot.logbookJSON();
        m_server->broadcast(json.c_str(), json.size());
      }

      //! Main loop.
      void
      onMain(void)
      {
        while (!stopping())
        {
          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
          m_server->poll(1.0);
          consumeMessages();
          inf("streaming %zu messages to %zu clients", m_snapshot.m_messages.size(), 1);
        }
      }
    };
  }
}

DUNE_TASK
