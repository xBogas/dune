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
    //! Serial port device.
    std::string uart_dev;
    //! Serial port baud rate.
    unsigned uart_baud;
    //! Input timeout.
    double input_timeout;
    //! Number of attempts before error
    int number_attempts;
  };

  struct Task : public DUNE::Tasks::Task
  {
    //! Serial port handle
    SerialPort *m_uart;
    //! I/O Multiplexer
    Poll m_poll;
    //! Task arguments
    Arguments m_args;
    //! Driver for CrawlerSerial
    DriverCrawlerSerial *m_driver;
    //! Timer
    Counter<double> m_wdog;
    //! IMC msg
    IMC::Pressure m_press;
    //! Read timestamp.
    double m_tstamp;
    //! Count for attempts
    int m_count_attempts;
    //! Flag to control reset of board
    bool m_is_first_reset;

    //! Constructor.
    //! @param[in] name task name.
    //! @param[in] ctx context.
    Task(const std::string &name, Tasks::Context &ctx) : DUNE::Tasks::Task(name, ctx),
                                                         m_uart(NULL),
                                                         m_driver(0),
                                                         m_tstamp(0)
    {
      param("Serial Port - Device", m_args.uart_dev)
          .defaultValue("")
          .description("Serial port device");

      param("Serial Port - Baud Rate", m_args.uart_baud)
          .defaultValue("")
          .description("Serial port baud rate");

      param("Input Timeout", m_args.input_timeout)
          .defaultValue("3.0")
          .minimumValue("2.0")
          .maximumValue("4.0")
          .units(Units::Second)
          .description("Amount of seconds to wait for data before reporting an error");

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
        m_uart = new SerialPort(m_args.uart_dev, m_args.uart_baud);
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
      m_driver->stopAcquisition();
      m_uart->flush();
      Delay::wait(4.0F);
      initBoard(true);
      m_wdog.setTop(m_args.input_timeout);
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
    initBoard(bool noRestart)
    {
      if (!m_driver->getVersionFirmware())
      {
        setEntityState(IMC::EntityState::ESTA_NORMAL, Utils::String::str(DTR("trying connecting to board")));
        war(DTR("failed to get firmware version"));
      }
      else
      {
        inf("Firmware Version: %s", m_driver->getFirmwareVersion().c_str());
      }

      if (!m_driver->startAcquisition())
      {
        if (!noRestart)
        {
          m_driver->sendCommandNoRsp("@RESET,*");
          Delay::wait(1.0);
          throw RestartNeeded(DTR("failed to start acquisition"), 10, true);
        }
        else
        {
          setEntityState(IMC::EntityState::ESTA_NORMAL, Utils::String::str(DTR("trying connecting to board")));
          war(DTR("failed to start acquisition"));
          return;
        }
      }

      debug("Init and Start OK");
      m_wdog.setTop(m_args.input_timeout);
      m_wdog.reset();
    }

    void
    consume(const IMC::PWM *msg)
    {
      std::string send = String::str("@PWM,%u,%u", msg->period, msg->duty_cycle);
      m_driver->sendCommand(send.c_str(), "$RSP,ACK,,*");
    }

    void
    dispatchData()
    {
      m_tstamp = Clock::getSinceEpoch();

      m_press.setTimeStamp(m_tstamp);
      m_press.value = m_driver->m_crawlerData.pressure;
      dispatch(m_press, DF_KEEP_TIME);
    }

    //! Main loop.
    void
    onMain(void)
    {
      while (!stopping())
      {
        waitForMessages(0.01);

        /* if (m_wdog.overflow())
        {
          inf("Timer overflow");
          throw RestartNeeded(DTR(Status::getString(CODE_COM_ERROR)), 10);
        } */

        if (!Poll::poll(*m_uart, m_args.input_timeout))
          continue;

        if (m_driver->haveNewData())
        {
          dispatchData();
          m_wdog.reset();
        }
      }
    }
  };
}

DUNE_TASK
