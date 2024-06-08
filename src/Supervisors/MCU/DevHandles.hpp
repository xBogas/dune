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

#ifndef SUPERVISORS_MCU_DEV_HANDLES_HPP_INCLUDED_
#define SUPERVISORS_MCU_DEV_HANDLES_HPP_INCLUDED_

#include <DUNE/DUNE.hpp>

namespace Supervisors
{
  namespace MCU
  {
    using DUNE_NAMESPACES;

    class InvalidHandle: public std::runtime_error
    {
    public:
      InvalidHandle(const std::string& msg):
        std::runtime_error("Invalid handle format: " + msg)
      { }
    };

    class MCUSerial: public IO::Handle
    {
    public:
      MCUSerial(SerialPort* serial):
        m_serial(serial)
      { }

      ~MCUSerial(void)
      {
        delete m_serial;
      }

      size_t
      doWrite(const uint8_t* data, size_t size)
      {
        m_serial->write(data, size);
        m_serial->write("\r\n", 2);
        return size + 2;
      }

      size_t
      doRead(uint8_t* data, size_t size)
      {
        return readUntil((char*)data, size, "\r\n");
      }

      IO::NativeHandle
      doGetNative(void) const
      {
        return m_serial->getNative();
      }

      void
      doFlush(void) override
      {
        char bfr[1024];
        readUntil(bfr, 1024, "\r\n");
      }

    private:
      size_t
      readUntil(char* bfr, size_t size, std::string end)
      {
        size_t i = 0;
        while (i < size)
        {
          if (!Poll::poll(*m_serial, 0.1))
            return i;

          size_t rv = m_serial->read(&bfr[i], 1);
          if (rv == 0)
          {
            std::cout << "No data available" << std::endl;
            continue;
          }
          

          i++;
          if (i < end.size())
            continue;

          if (std::string(bfr + i - end.size(), end.size()) == end)
            break;
        }

        return i;
      }

      //! Serial port handle.
      SerialPort* m_serial;
    };

    //! Class to handle the devices connected to the MCU
    class DevHandles
    {
    public:
      DevHandles(Task* task):
        m_task(task)
      { }

      IO::Handle*
      createHandle(const char* uri)
      {
        char comms[64];
        char dev[64];
        char arg[64];
        if (std::sscanf(uri, "%63[^:]:/%63[^:]:/%63s", comms, dev, arg) != 3)
          throw InvalidHandle(uri);

        if (strcasecmp(comms, "serial") == 0)
          return createSerial(dev, arg);
        else if (strcasecmp(comms, "udp") == 0)
          return createSocketUDP(dev, arg);
        else if (strcasecmp(comms, "tcp") == 0)
          return createSocketTCP(dev, arg);
        else if (strcasecmp(comms, "can") == 0)
          return createSocketCAN(dev, arg);
        else
          throw InvalidHandle(uri);
      }

    private:
      IO::Handle*
      createSerial(const char* dev, const char* arg)
      {
        unsigned baud = std::stoul(arg);
        SerialPort* serial = new SerialPort(dev, baud);

        return new MCUSerial(serial);
      }

      IO::Handle*
      createSocketUDP(const char* addr, const char* arg)
      {
        m_task->debug("Creating udp to %s::%s", addr, arg);

        UDPSocket* sock = nullptr;
        try
        {
          unsigned port = std::stoul(arg);
          sock = new UDPSocket();
          sock->enableBroadcast(true);
          sock->bind(5000);
          sock->connect(addr, port);

          m_task->debug("Listening on %s:%u", addr, port);
        }
        catch (const std::exception& e)
        {
          m_task->err("%s", e.what());
        }

        return sock;
      }

      IO::Handle*
      createSocketTCP(const char* addr, const char* arg)
      {
        m_task->debug("Creating tcp to %s::%s", addr, arg);

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
          m_task->err("%s", e.what());
        }

        return sock;
      }

      IO::Handle*
      createSocketCAN(const char* dev, const char* arg)
      {
        m_task->debug("Creating CAN socket %s::%s", dev, arg);

        unsigned can_type = std::stoul(arg);
        return new SocketCAN(dev, (SocketCAN::can_frame_t)can_type);
      }

      IO::Handle*
      createSPI(const char* dev, const char* arg)
      {
        m_task->debug("Creating SPI handle %s::%s", dev, arg);

        unsigned mode;
        unsigned bits;
        unsigned speed;
        int rv = sscanf(arg, "Mode:%u//Bits:%u//Speed:%u", &mode, &bits, &speed);
        if (rv != 3)
          throw InvalidHandle("SPI args err: " + std::string(arg));

        SPI* spi = nullptr;
        try
        {
          spi = new SPI(dev, (SPI::Mode)mode, bits, speed);
        }
        catch (const std::exception& e)
        {
          m_task->err("%s", e.what());
        }

        return spi;
      }

      //! Task Owner
      Task* m_task;
    };
  }
}

#endif  // SUPERVISORS_MCU_DEV_HANDLES_HPP_INCLUDED_