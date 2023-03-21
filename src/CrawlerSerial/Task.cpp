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
  
  struct Task: public DUNE::Tasks::Task
  {
    //! Serial port handle
    SerialPort* m_port;
    //! Bom nome
    DriverCrawlerSerial* m_driver;
    //! Timer
    Counter<double> m_timer;
    //! Task arguments
    Arguments m_args;


    //! Constructor.
    //! @param[in] name task name.
    //! @param[in] ctx context.
    Task(const std::string& name, Tasks::Context& ctx):
      DUNE::Tasks::Task(name, ctx),
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
      try
      {
        m_port = new SerialPort(m_args.path_port, m_args.baud_rate);
        m_port->setCanonicalInput(true);
        m_port->flush();
        m_driver = new DriverCrawlerSerial(this, m_port);
      }
      catch(const std::runtime_error& e)
      {
        throw RestartNeeded(e.what(), 10);
      }
      
    }

    //! Initialize resources.
    void
    onResourceInitialization(void)
    {
      m_driver->stop();
      m_port->flush();
      initBoard();
    }

    //! Release resources.
    void
    onResourceRelease(void)
    {
      m_driver->stop();
      Memory::clear(m_driver);
      Memory::clear(m_port);
    }

    void
    initBoard()
    {
      /*
      if (!m_driver->init(0, 0))
      {
        m_driver->reset();
        throw RestartNeeded(DTR("failed to init Board"), 10, true);
      }
      */
      
      m_driver->start();

      inf("Init and Start OK");
      m_timer.setTop(m_args.timeout);
      m_timer.reset();
    }

    void
    dispatchData()
    {

    }

    //! Main loop.
    void
    onMain(void)
    {
      while (!stopping())
      {
        if (m_timer.overflow())
        {
          inf("Timer overflow");
          throw RestartNeeded(DTR(Status::getString(CODE_COM_ERROR)), 10);
        }
        
        if (!Poll::poll(*m_port, m_args.timeout))
          continue;
        
        if (m_driver->newData())
        {
          dispatchData();
          m_timer.reset();
        }
        
        waitForMessages(1.0);
      }
    }
  };
}

DUNE_TASK
