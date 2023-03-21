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

// Local headers
#include "Driver.hpp"

namespace CrawlerSerial
{
  //! Insert short task description here.
  //!
  //! Insert explanation on task behaviour here.
  //! @author João Bogas
  using DUNE_NAMESPACES;

  struct Arguments
  {
    //! Serial port
    std::string path_port;
    //!
    unsigned baud_rate;
    //!
    unsigned timeout;
  };

  struct Task : public DUNE::Tasks::Task
  {
    //! Serial port handle
    SerialPort *m_uart;
    //! I/O Multiplexer
    Poll m_poll;
    //! Bom nome
    DriverCrawlerSerial *m_driver;
    //! Timer
    Counter<double> m_wdog;
    //! Read timestamp.
    double m_tstamp;
    //! IMC msg
    IMC::Pressure m_press;
    //! Task arguments
    Arguments m_args;

    //! Constructor.
    //! @param[in] name task name.
    //! @param[in] ctx context.
    Task(const std::string &name, Tasks::Context &ctx) : DUNE::Tasks::Task(name, ctx),
      m_uart(nullptr),
      m_driver(nullptr)
    {
      param("Serial Port - Device", m_args.path_port)
          .defaultValue("")
          .description("Serial port device");

      param("Serial Port - Baud Rate", m_args.baud_rate)
          .defaultValue("")
          .description("Serial port baud rate");

      param("Input timeout", m_args.timeout)
          .description("Amount of seconds to wait for data");

      bind<IMC::PWM>(this);
    }

    //! Update internal state with new parameter values.
    void
    onUpdateParameters(void)
    {
    }

    //! Reserve entity identifiers.
    void
    onEntityReservation(void)
    {
    }

    //! Resolve entity names.
    void
    onEntityResolution(void)
    {
    }

    //! Acquire resources.
    void
    onResourceAcquisition(void)
    {
      setEntityState(IMC::EntityState::ESTA_BOOT, Status::CODE_INIT);
      try
      {
        m_uart = new SerialPort(m_args.path_port, m_args.baud_rate);
        m_uart->setCanonicalInput(true);
        m_uart->flush();
        m_poll.add(*m_uart);
        m_driver = new DriverCrawlerSerial(this, m_uart, m_poll);
      }
      catch (const std::runtime_error &e)
      {
        throw RestartNeeded(e.what(), 10);
      }
    }

    //! Initialize resources.
    void
    onResourceInitialization(void)
    {
      m_driver->stop();
      m_uart->flush();
      Delay::wait(4.0F);
      m_driver->start();
      m_wdog.setTop(m_args.timeout);
      m_wdog.reset();
    }

    //! Release resources.
    void
    onResourceRelease(void)
    {
      if (m_uart != nullptr)
      {
        m_poll.remove(*m_uart);
        Memory::clear(m_driver);
        Memory::clear(m_uart);
      }
    }

    void
    consume(const IMC::PWM* msg)
    {
      std::string send = String::str("@PWM,%u,%u", msg->period, msg->duty_cycle);
      m_driver->sendCommand(send.c_str(),"$RSP,ACK,,*");
    }

    void
    dispatchData()
    {
      m_tstamp = Clock::getSinceEpoch();

      m_press.setTimeStamp(m_tstamp);
      m_press.value = m_driver->m_boardData.pressure;
      dispatch(m_press, DF_KEEP_TIME);
      inf("Send IMC::Pressure msg: %f", m_press.value);
    }

    //! Main loop.
    void
    onMain(void)
    {
      while (!stopping())
      {
        waitForMessages(0.01);

        if (m_wdog.overflow())
        {
          inf("Timer overflow");
          throw RestartNeeded(DTR(Status::getString(CODE_COM_ERROR)), 10);
        }

        if (!Poll::poll(*m_uart, m_args.timeout))
          continue;

        if (m_driver->newData())
        {
          dispatchData();
          m_wdog.reset();
        }
      }
    }
  };
}

DUNE_TASK
