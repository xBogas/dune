//***************************************************************************
// Copyright 2007-2022 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Luis Venancio                                                    *
// Author: João Bogas                                                       *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

// local headers
#include "MosquittoClient.hpp"

namespace Transports
{
  //! MQTT transport bridge for IMC messages.
  //! Publishes configured local IMC messages to MQTT topics and subscribes to
  //! configured topics to ingest MQTT payloads.
  //! IMC payloads are deserialized and dispatched internally; non-IMC payloads
  //! are forwarded as text diagnostics.
  //! Requires libmosquitto (headers and library available at build time).
  //! On Debian/Ubuntu install with: sudo apt install libmosquitto-dev
  //! @author Luis Venancio
  namespace MQTT
  {
    using DUNE_NAMESPACES;

    //! %Task arguments.
    struct Arguments
    {
      //! List of messages to publish.
      std::vector<std::string> messages;
      //! List of topics to subscribe
      std::vector<std::string> topics;
      //! Basic topic name for IMC messages
      std::string basic_name;
    };

    //! Message buffer size.
    constexpr int c_bfr_size = DUNE_IMC_CONST_MAX_SIZE;

    struct Task: public DUNE::Tasks::Task
    {
      //! Task arguments
      Arguments m_args;
      //! Mosquitto client arguments
      MosquittoClient::Arguments m_client_args;
      //! Client
      MosquittoClient* m_client;
      //! Serialization buffer.
      uint8_t m_msg_bfr[c_bfr_size];

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx),
        m_client(nullptr)
      {
        param("Client ID", m_client_args.client_id)
          .defaultValue(getSystemName())
          .description("Identifier used by this MQTT client when connecting to the broker.");

        param("Broker Address", m_client_args.address)
          .defaultValue("")
          .description("Hostname or IP address of the MQTT broker.");

        param("Broker Port", m_client_args.port)
          .defaultValue("1883")
          .description("TCP port of the MQTT broker.");

        param("Keepalive Period", m_client_args.keepalive)
          .defaultValue("60")
          .units(Units::Second)
          .description("Maximum idle interval (in seconds) before sending a keepalive PING to the "
                       "broker.");

        param("Retain Messages", m_client_args.retain)
          .defaultValue("false")
          .description("If true, published messages are retained by the broker.");

        param("Subscribe Topics", m_args.topics)
          .defaultValue("")
          .description("List of MQTT topics to subscribe to. "
                       "Use '*' instead of '#'.");

        param("Use TLS", m_client_args.auth_mode)
          .defaultValue("false")
          .description("Enable TLS for broker connection. "
                       "If false, username/password authentication is used.");

        param("Authentication -- User", m_client_args.usr)
          .defaultValue("admin")
          .description("Username used for broker authentication (non-TLS mode).");

        param("Authentication -- Password", m_client_args.pw)
          .defaultValue("")
          .description("Password used for broker authentication. "
                       "In TLS mode, this value is also used as the private key passphrase."
                       " If left blank, only the username is sent.");

        param("Certificate authority path", m_client_args.ca_path)
          .defaultValue("")
          .description("Path to a file or directory containing trusted CA certificates "
                       "(TLS mode).");

        param("Certificate path", m_client_args.cert_path)
          .defaultValue("")
          .description("Path to the client certificate file (TLS mode).");

        param("Private key path", m_client_args.key_path)
          .defaultValue("")
          .description("Path to the client private key file (TLS mode).");

        param("Transports", m_args.messages)
          .defaultValue("")
          .description("List of IMC message names to publish to MQTT.");

        param("Basic Name", m_args.basic_name)
          .defaultValue("IMC")
          .description("Base topic prefix used for IMC messages.");
      }

      //! Update internal state with new parameter values.
      void
      onUpdateParameters(void)
      {
        // Workaround for ini comment char
        for (unsigned i = 0; i < m_args.topics.size(); i++)
          m_args.topics[i] = String::replace(m_args.topics[i], '*', "#");
      }

      //! Reserve entity identifiers.
      void
      onEntityReservation(void)
      { }

      //! Resolve entity names.
      void
      onEntityResolution(void)
      { }

      //! Acquire resources.
      void
      onResourceAcquisition(void)
      {
        // Register normal messages.
        bind(this, m_args.messages);

        // Start client
        try
        {
          PacketHandler handler = std::bind(&Task::onMessage, this, std::placeholders::_1,
                                            std::placeholders::_2, std::placeholders::_3);
          m_client = new MosquittoClient(this, &m_client_args, handler);

          if (m_client != nullptr)
            m_client->start();
        }
        catch (const std::exception& e)
        {
          m_client = nullptr;
          throw RestartNeeded(e.what(), 10);
        }

        announceService();
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
      }

      //! Initialize resources.
      void
      onResourceInitialization(void)
      {
        if (m_client)
          m_client->subscribe(m_args.topics);
      }

      //! Release resources.
      void
      onResourceRelease(void)
      {
        if (m_client == nullptr)
          return;

        m_client->stop();
        delete m_client;
        m_client = nullptr;
      }

      void
      consume(const IMC::Message* msg)
      {
        if (!m_client)
          return;

        uint16_t bytes;
        try
        {
          bytes = IMC::Packet::serialize(msg, m_msg_bfr, c_bfr_size);

          std::string topic = m_args.basic_name + "/" + getSystemName() + "/" + msg->getName();
          m_client->publish(topic, m_msg_bfr, bytes);
        }
        catch (const std::exception& e)
        {
          war(DTR("Failed to publish message %s: %s"), msg->getName(), e.what());
          return;
        }
      }

      void
      onMessage(char* topic, uint8_t* payload, uint32_t payload_length)
      {
        const std::string& prefix = m_args.basic_name;
        if (std::strncmp(topic, prefix.c_str(), prefix.size()) == 0 && topic[prefix.size()] == '/')
          dispatchIMC(topic, payload, payload_length);
        else
          dispatchRaw(topic, payload, payload_length);
      }

      void
      dispatchRaw(char* topic, uint8_t* payload, uint32_t payload_length)
      {
        IMC::DevDataText msg;
        msg.value = String::str("%s\r\n%.*s", topic, payload_length, payload);
        dispatch(msg, DF_KEEP_TIME | DF_KEEP_SRC_EID);
      }

      void
      dispatchIMC(char* topic, uint8_t* payload, uint32_t payload_length)
      {
        IMC::Message* msg;
        try
        {
          msg = IMC::Packet::deserialize(payload, payload_length);
        }
        catch (const std::exception& e)
        {
          dispatchRaw(topic, payload, payload_length);
          return;
        }

        dispatch(msg, DF_KEEP_TIME | DF_KEEP_SRC_EID);

        if (getDebugLevel() >= DEBUG_LEVEL_SPEW)
        {
          std::stringstream ss;
          msg->toText(ss);
          spew("recv msg (%s):\n%s", topic, ss.str().c_str());
        }

        Memory::clear(msg);
        return;
      }

      void
      announceService(void)
      {
        std::stringstream os;
        os << "imc+mqtt://" << m_client_args.address.str() << ":" << m_client_args.port << "/";

        IMC::AnnounceService announce;
        announce.service = os.str();
        announce.service_type = IMC::AnnounceService::SRV_TYPE_EXTERNAL;

        dispatch(announce);
      }

      //! Main loop.
      void
      onMain(void)
      {
        while (!stopping())
          waitForMessages(1.0);
      }
    };
  }
}

DUNE_TASK
