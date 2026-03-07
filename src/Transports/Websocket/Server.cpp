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
#include <cstring>
#include <sstream>

// DUNE headers.
#include <DUNE/Algorithms/Base64.hpp>

// Local headers.
#include "Server.hpp"

namespace Transports
{
  namespace Websocket
  {
    using DUNE_NAMESPACES;

    //! WebSocket magic GUID (RFC 6455 Section 4.2.2).
    static std::string c_ws_guid = "258EAFA5-E914-47DA-95CA-C5AB0DC85B11";
    //! Maximum HTTP request size for handshake.
    static const unsigned c_max_hs_size = 2048;

    //=========================================================================
    // Minimal SHA-1 implementation (RFC 3174)
    //=========================================================================

    static uint32_t
    sha1_rotl(uint32_t val, unsigned bits)
    {
      return (val << bits) | (val >> (32 - bits));
    }

    static void
    sha1(const uint8_t* data, size_t len, uint8_t digest[20])
    {
      uint32_t h0 = 0x67452301;
      uint32_t h1 = 0xEFCDAB89;
      uint32_t h2 = 0x98BADCFE;
      uint32_t h3 = 0x10325476;
      uint32_t h4 = 0xC3D2E1F0;

      // Pre-processing: add padding.
      uint64_t bit_len = (uint64_t)len * 8;
      size_t padded_len = len + 1;
      while (padded_len % 64 != 56)
        ++padded_len;
      padded_len += 8;

      uint8_t* msg = new uint8_t[padded_len];
      std::memcpy(msg, data, len);
      msg[len] = 0x80;
      std::memset(msg + len + 1, 0, padded_len - len - 1);

      // Append length in bits as big-endian 64-bit.
      for (int i = 0; i < 8; ++i)
        msg[padded_len - 1 - i] = (uint8_t)(bit_len >> (i * 8));

      // Process each 512-bit block.
      for (size_t offset = 0; offset < padded_len; offset += 64)
      {
        uint32_t w[80];
        for (int i = 0; i < 16; ++i)
        {
          w[i] = ((uint32_t)msg[offset + i * 4 + 0] << 24)
                 | ((uint32_t)msg[offset + i * 4 + 1] << 16)
                 | ((uint32_t)msg[offset + i * 4 + 2] << 8) | ((uint32_t)msg[offset + i * 4 + 3]);
        }
        for (int i = 16; i < 80; ++i)
          w[i] = sha1_rotl(w[i - 3] ^ w[i - 8] ^ w[i - 14] ^ w[i - 16], 1);

        uint32_t a = h0, b = h1, c = h2, d = h3, e = h4;

        for (int i = 0; i < 80; ++i)
        {
          uint32_t f, k;
          if (i < 20)
          {
            f = (b & c) | ((~b) & d);
            k = 0x5A827999;
          }
          else if (i < 40)
          {
            f = b ^ c ^ d;
            k = 0x6ED9EBA1;
          }
          else if (i < 60)
          {
            f = (b & c) | (b & d) | (c & d);
            k = 0x8F1BBCDC;
          }
          else
          {
            f = b ^ c ^ d;
            k = 0xCA62C1D6;
          }

          uint32_t tmp = sha1_rotl(a, 5) + f + e + k + w[i];
          e = d;
          d = c;
          c = sha1_rotl(b, 30);
          b = a;
          a = tmp;
        }

        h0 += a;
        h1 += b;
        h2 += c;
        h3 += d;
        h4 += e;
      }

      delete[] msg;

      // Produce the 20-byte digest (big-endian).
      uint32_t h[5] = { h0, h1, h2, h3, h4 };
      for (int i = 0; i < 5; ++i)
      {
        digest[i * 4 + 0] = (uint8_t)(h[i] >> 24);
        digest[i * 4 + 1] = (uint8_t)(h[i] >> 16);
        digest[i * 4 + 2] = (uint8_t)(h[i] >> 8);
        digest[i * 4 + 3] = (uint8_t)(h[i]);
      }
    }

    //=========================================================================
    // Client
    //=========================================================================

    Client::Client(TCPSocket* sock):
      m_sock(sock)
    { }

    Client::~Client(void)
    {
      delete m_sock;
    }

    void
    Client::sendFrame(uint8_t opcode, const char* data, size_t len)
    {
      uint8_t hdr[10];
      size_t hdr_len = 0;

      // First byte: FIN + opcode.
      hdr[0] = 0x80 | (opcode & 0x0F);
      hdr_len = 1;

      // Second byte: MASK=0 + payload length.
      if (len < 126)
      {
        hdr[1] = (uint8_t)len;
        hdr_len = 2;
      }
      else if (len <= 0xFFFF)
      {
        hdr[1] = 126;
        hdr[2] = (uint8_t)(len >> 8);
        hdr[3] = (uint8_t)(len & 0xFF);
        hdr_len = 4;
      }
      else
      {
        hdr[1] = 127;
        for (int i = 0; i < 8; ++i)
          hdr[2 + i] = (uint8_t)(len >> ((7 - i) * 8));
        hdr_len = 10;
      }

      std::vector<uint8_t> frame;
      frame.insert(frame.end(), hdr, hdr + hdr_len);
      frame.insert(frame.end(), data, data + len);

      // m_sock->write((const char*)hdr, hdr_len);
      // if (len > 0)
      //   m_sock->write(data, len)
      m_sock->write((const char*)frame.data(), frame.size());
    }

    //=========================================================================
    // Server
    //=========================================================================

    Server::Server(int port)
    {
      m_sock.bind(port);
      m_sock.listen(1024);
      m_poll.add(m_sock);
    }

    Server::~Server(void)
    {
      ScopedMutex lock(m_clients_mutex);

      for (std::list<Client*>::iterator it = m_clients.begin(); it != m_clients.end(); ++it)
      {
        m_poll.remove((*it)->socket());
        delete *it;
      }
      m_clients.clear();
    }

    bool
    Server::doHandshake(TCPSocket* sock)
    {
      char bfr[c_max_hs_size] = { 0 };
      unsigned idx = 0;
      unsigned didx = 0;
      bool eor = false;

      // Read until we find \r\n\r\n (end of HTTP headers).
      while (!eor && idx < (c_max_hs_size - 1))
      {
        int rv = sock->read(bfr + idx, 1);
        if (rv <= 0)
          return false;

        if (didx == 0 && bfr[idx] == '\r')
          didx = 1;
        else if (didx == 1 && bfr[idx] == '\n')
          didx = 2;
        else if (didx == 2 && bfr[idx] == '\r')
          didx = 3;
        else if (didx == 3 && bfr[idx] == '\n')
          eor = true;
        else
          didx = 0;

        ++idx;
      }

      if (!eor)
        return false;

      bfr[idx] = 0;

      // Find Sec-WebSocket-Key header.
      std::string request(bfr);

      std::string key_header = "Sec-WebSocket-Key: ";
      size_t pos = request.find(key_header);
      if (pos == std::string::npos)
        return false;

      size_t start = pos + key_header.size();
      size_t end = request.find("\r\n", start);
      if (end == std::string::npos)
        return false;

      std::string ws_key = request.substr(start, end - start);
      // --- ADD THIS TRIMMING LOGIC ---
      ws_key.erase(0, ws_key.find_first_not_of(" \t\r\n"));
      ws_key.erase(ws_key.find_last_not_of(" \t\r\n") + 1);
      // -------------------------------

      // Compute accept key: base64(SHA-1(key + GUID)).
      std::string concat = ws_key + c_ws_guid;
      uint8_t digest[20];
      sha1((const uint8_t*)concat.c_str(), concat.size(), digest);
      std::string accept = Algorithms::Base64::encode((const char*)digest, 20);

      // Send 101 Switching Protocols response.
      std::ostringstream os;
      os << "HTTP/1.1 101 Switching Protocols\r\n"
         << "Upgrade: websocket\r\n"
         << "Connection: Upgrade\r\n"
         << "Sec-WebSocket-Accept: " << accept << "\r\n"
         << "\r\n";

      std::string response = os.str();
      sock->setKeepAlive(true);
      sock->write(response.c_str(), response.size());

      return true;
    }

    bool
    Server::handleClientFrame(Client* client)
    {
      TCPSocket& sock = client->socket();
      uint8_t hdr[2];

      int rv = sock.read((char*)hdr, 2);
      if (rv <= 0)
        return false;

      uint8_t opcode = hdr[0] & 0x0F;
      bool masked = (hdr[1] & 0x80) != 0;
      uint64_t payload_len = hdr[1] & 0x7F;

      if (payload_len == 126)
      {
        uint8_t ext[2];
        rv = sock.read((char*)ext, 2);
        if (rv <= 0)
          return false;
        payload_len = ((uint64_t)ext[0] << 8) | ext[1];
      }
      else if (payload_len == 127)
      {
        uint8_t ext[8];
        rv = sock.read((char*)ext, 8);
        if (rv <= 0)
          return false;
        payload_len = 0;
        for (int i = 0; i < 8; ++i)
          payload_len = (payload_len << 8) | ext[i];
      }

      uint8_t mask_key[4] = { 0 };
      if (masked)
      {
        rv = sock.read((char*)mask_key, 4);
        if (rv <= 0)
          return false;
      }

      // Read payload.
      std::string payload;
      if (payload_len > 0)
      {
        payload.resize((size_t)payload_len);
        size_t total = 0;
        while (total < (size_t)payload_len)
        {
          rv = sock.read(&payload[total], (size_t)payload_len - total);
          if (rv <= 0)
            return false;
          total += rv;
        }

        // Unmask.
        if (masked)
        {
          for (size_t i = 0; i < payload.size(); ++i)
            payload[i] ^= mask_key[i % 4];
        }
      }

      switch (opcode)
      {
        case OP_CLOSE:
          // Send close frame back.
          client->sendFrame(OP_CLOSE, payload.c_str(), payload.size());
          return false;

        case OP_PING:
          // Respond with pong.
          client->sendFrame(OP_PONG, payload.c_str(), payload.size());
          return true;

        case OP_PONG:
          return true;

        default:
          // Text/binary frames — ignore for now.
          return true;
      }
    }

    void
    Server::poll(double timeout)
    {
      if (!m_poll.poll(timeout))
        return;

      // Check for new connections on the listening socket.
      if (m_poll.wasTriggered(m_sock))
      {
        try
        {
          TCPSocket* nc = m_sock.accept();
          if (doHandshake(nc))
          {
            Client* client = new Client(nc);
            ScopedMutex lock(m_clients_mutex);
            m_poll.add(client->socket());
            m_clients.push_back(client);
          }
          else
          {
            DUNE_MSG("Websocket::Server", "Handshake failed, closing connection.");
            delete nc;
          }
        }
        catch (std::runtime_error& e)
        {
          DUNE_ERR("Websocket::Server", e.what());
        }
      }

      ScopedMutex lock(m_clients_mutex);
      // Check existing clients for incoming frames.
      std::list<Client*>::iterator it = m_clients.begin();
      while (it != m_clients.end())
      {
        if (m_poll.wasTriggered((*it)->socket()))
        {
          try
          {
            if (!handleClientFrame(*it))
            {
              m_poll.remove((*it)->socket());
              delete *it;
              it = m_clients.erase(it);
              continue;
            }
          }
          catch (...)
          {
            m_poll.remove((*it)->socket());
            delete *it;
            it = m_clients.erase(it);
            continue;
          }
        }
        ++it;
      }
    }

    void
    Server::broadcast(const char* data, size_t len)
    {
      std::list<Client*>::iterator it = m_clients.begin();
      while (it != m_clients.end())
      {
        try
        {
          (*it)->sendFrame(OP_TEXT, data, len);
          ++it;
        }
        catch (...)
        {
          m_poll.remove((*it)->socket());
          delete *it;
          it = m_clients.erase(it);
        }
      }
    }
  }
}
