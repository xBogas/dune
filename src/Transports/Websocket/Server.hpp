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

#ifndef TRANSPORTS_WEBSOCKET_SERVER_HPP_INCLUDED_
#define TRANSPORTS_WEBSOCKET_SERVER_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <list>
#include <string>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Transports
{
  namespace Websocket
  {
    using DUNE_NAMESPACES;

    //! WebSocket opcodes (RFC 6455).
    enum Opcode
    {
      OP_TEXT   = 0x01,
      OP_BINARY = 0x02,
      OP_CLOSE  = 0x08,
      OP_PING   = 0x09,
      OP_PONG   = 0x0A
    };

    //! A connected WebSocket client.
    class Client
    {
    public:
      //! Constructor.
      //! @param[in] sock accepted TCP socket (takes ownership).
      Client(TCPSocket* sock);

      //! Destructor.
      ~Client(void);

      //! Get underlying socket reference.
      TCPSocket&
      socket(void)
      {
        return *m_sock;
      }

      //! Send a WebSocket frame (server-to-client, unmasked).
      //! @param[in] opcode frame opcode.
      //! @param[in] data payload data.
      //! @param[in] len payload length.
      void
      sendFrame(uint8_t opcode, const char* data, size_t len);

    private:
      //! TCP socket.
      TCPSocket* m_sock;
    };

    //! WebSocket server — accepts connections, performs handshakes,
    //! handles control frames, and broadcasts data to all clients.
    class Server
    {
    public:
      //! Constructor.
      //! @param[in] port TCP port to listen on.
      Server(int port);

      //! Destructor.
      ~Server(void);

      //! Poll for new connections and incoming client frames.
      //! @param[in] timeout poll timeout in seconds.
      void
      poll(double timeout);

      //! Broadcast a text frame to all connected clients.
      //! @param[in] data payload data.
      //! @param[in] len payload length.
      void
      broadcast(const char* data, size_t len);

    private:
      //! Listening socket.
      TCPSocket m_sock;
      //! I/O multiplexer.
      IO::Poll m_poll;
      //! Mutex for client list.
      Mutex m_clients_mutex;
      //! Connected clients.
      std::list<Client*> m_clients;

      //! Perform WebSocket handshake on a newly accepted socket.
      //! @param[in] sock accepted TCP socket.
      //! @return true if handshake succeeded.
      bool
      doHandshake(TCPSocket* sock);

      //! Read and handle one frame from a client.
      //! @param[in] client the client to read from.
      //! @return true if the client is still connected.
      bool
      handleClientFrame(Client* client);
    };
  }
}

#endif
