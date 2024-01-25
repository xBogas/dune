//***************************************************************************
// Copyright 2007-2023 Universidade do Porto - Faculdade de Engenharia      *
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

#include "Echo.hpp"

namespace Producer
{
  //! Insert short task description here.
  //!
  //! Insert explanation on task behaviour here.
  //! @author João Bogas
  using DUNE_NAMESPACES;

  static const int c_bfr_size = 65535;

  struct Arguments
  {
    bool udp_or_serial;

    uint16_t src_port;

    uint16_t dst_port;

    std::string board_ip;

    std::string uart_dev;

    unsigned uart_baud;
  };

  struct Task: public DUNE::Tasks::Task
  {
    //! Serialization buffer.
    uint8_t m_bfr[c_bfr_size];
    //! UDP Socket.
    UDPSocket* m_sock;
    //! Serial Port
    SerialPort* m_serial;
    //! Task Arguments.
    Arguments m_args;
    //! Watchdog.
    Counter<float> m_wdog;
    //! Serial Echo.
    Reader* m_reader;

    //! Constructor.
    //! @param[in] name task name.
    //! @param[in] ctx context.
    Task(const std::string& name, Tasks::Context& ctx):
      DUNE::Tasks::Task(name, ctx),
      m_sock(nullptr),
      m_serial(nullptr),
      m_reader(nullptr)
    {
      param("Use UDP", m_args.udp_or_serial)
        .defaultValue("false")
        .description("Select communication method with the board");

      param("UDP Port", m_args.src_port)
        .defaultValue("1111")
        .description("UDP port used to communicate with the board");

      param("Board Port", m_args.dst_port)
        .defaultValue("8080")
        .description("Board UDP port");

      param("Board IP", m_args.board_ip)
        .defaultValue("10.0.2.83")
        .description("Board IPv4");

      param("Serial Port", m_args.uart_dev)
        .defaultValue("/dev/ttyACM0")
        .description("Serial port device used to communicate with the board");

      param("Serial Port - Baud Rate", m_args.uart_baud)
        .defaultValue("9600")
        .description("Serial port baud rate");
    }

    //! Update internal state with new parameter values.
    void
    onUpdateParameters(void)
    { }

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
      if (m_args.udp_or_serial)
      {
        m_sock = new UDPSocket();
        m_sock->bind(m_args.src_port);
        m_sock->enableBroadcast(true);
        m_reader = new Reader(this, m_sock);
        m_reader->start();
        return;
      }

      try
      {
        m_serial = new SerialPort(m_args.uart_dev, m_args.uart_baud);
        m_serial->setCanonicalInput(true);
        m_serial->flush();
        m_reader = new Reader(this, m_serial);
        m_reader->start();
      }
      catch (const std::exception& e)
      {
        throw RestartNeeded(e.what(), 5);
      }
    }

    //! Initialize resources.
    void
    onResourceInitialization(void)
    {
      if (m_serial)
        m_serial->flush();
    }

    //! Release resources.
    void
    onResourceRelease(void)
    {
      Memory::clear(m_sock);
      Memory::clear(m_serial);
    }

    void
    sendUDP()
    {
      IMC::SetPWM msg;
      msg.id = 1;
      msg.period = 1000;
      msg.duty_cycle = 500;

      uint16_t rv;
      try
      {
        rv = IMC::Packet::serialize(&msg, m_bfr, c_bfr_size);
        m_sock->write(m_bfr, rv, m_args.board_ip.c_str(), m_args.dst_port);
      }
      catch (const std::exception& e)
      {
        war(DTR("failed sending msg %s to %s port %u: %s"), msg.getName(),
            m_args.board_ip.c_str(), m_args.dst_port, e.what());
        return;
      }
      inf("Send msg %s to %s :port %u", msg.getName(), m_args.board_ip.c_str(),
          m_args.dst_port);

      IMC::Header sent;
      IMC::Packet::deserializeHeader(sent, m_bfr, rv);

      inf("Sync number is %d", sent.sync);
      inf("Msg ID is      %d", sent.mgid);
      inf("Size is        %d", sent.size);
      inf("Timestamp is   %f", sent.timestamp);
      inf("Src address    %d", sent.src);
      inf("Src entity     %d", sent.src_ent);
      inf("Dst address    %d", sent.dst);
      inf("Dst entity     %d", sent.dst_ent);
    }

    union dconv_t
    {
      double data;
      uint64_t bits;
    };

    void
    sendSerial()
    {
      return;
      // IMC::SetPWM msg;
      // msg.id = 1;
      // msg.period = 1000;
      // msg.duty_cycle = 500;

      IMC::ClockControl msg;
      msg.op = IMC::ClockControl::COP_SYNC_EXEC;
      msg.clock = Clock::getSinceEpoch();
      msg.tz = 0;

      uint16_t rv;
      try
      {
        rv = IMC::Packet::serialize(&msg, m_bfr, c_bfr_size);
        m_serial->write(m_bfr, rv);
      }
      catch (const std::exception& e)
      {
        war(DTR("failed msg %s to send to %u: %s"), msg.getName(),
            m_args.dst_port, e.what());
        return;
      }
      inf("Written %d bytes in msg %s to device %s", rv, msg.getName(),
          m_args.uart_dev.c_str());
    }

    //! Main loop.
    void
    onMain(void)
    {
      m_wdog.setTop(7.0);
      while (!stopping())
      {
        if (m_wdog.overflow())
        {
          if (m_args.udp_or_serial)
            sendUDP();
          else
            sendSerial();

          m_wdog.reset();
        }
      }
    }
  };
}

DUNE_TASK
