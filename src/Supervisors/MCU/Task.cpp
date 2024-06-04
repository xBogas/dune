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
    };

    struct Task: public DUNE::Tasks::Task
    {
      //! IO Handle.
      IO::Handle* m_handle;
      //! Task arguments.
      Arguments m_args;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx)
      {
        param("IO Handle", m_args.io_dev)
          .description("IO Handle with uri type:/dev:/arg to interface with MCU");
      }

      //! Update internal state with new parameter values.
      void
      onUpdateParameters(void)
      {
        if (paramChanged(m_args.io_dev))
          updateHandle();
      }

      //! Reserve entity identifiers.
      void
      onEntityReservation(void)
      {
        debug("Reserving mcu entities");

        char bfr[65535];
        Counter<double> wdog(10);
        while (!wdog.overflow())
        {
          Poll::poll(*m_handle, wdog.getRemaining());
          m_handle->read(bfr, sizeof(bfr));
        }

        err("Timeout waiting for MCU to respond");
      }

      //! Resolve entity names.
      void
      onEntityResolution(void)
      { }

      //! Acquire resources.
      void
      onResourceAcquisition(void)
      { }

      //! Initialize resources.
      void
      onResourceInitialization(void)
      { }

      //! Release resources.
      void
      onResourceRelease(void)
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
          sock->connect(addr, port);
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
          throw std::runtime_error("Invalid handle " + m_args.io_dev);

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
