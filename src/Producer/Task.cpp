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

namespace Producer
{
  //! Insert short task description here.
  //!
  //! Insert explanation on task behaviour here.
  //! @author João Bogas
  using DUNE_NAMESPACES;

  static const int c_bfr_size = 65535;

  struct Task: public DUNE::Tasks::Task
  {
    //! Serialization buffer.
    uint8_t m_bfr[c_bfr_size];
    //! UDP Socket.
    UDPSocket m_sock;
    //! STM port
    int m_port;
  
    //! Constructor.
    //! @param[in] name task name.
    //! @param[in] ctx context.
    Task(const std::string& name, Tasks::Context& ctx):
      DUNE::Tasks::Task(name, ctx),
      m_port(8080)
    {
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
    }

    //! Initialize resources.
    void
    onResourceInitialization(void)
    {
    }

    //! Release resources.
    void
    onResourceRelease(void)
    {
    }

    //! Main loop.
    void
    onMain(void)
    {
      while (!stopping())
      {
        IMC::SetPWM msg;
        msg.id = 1;
        msg.period = 1000;
        msg.duty_cycle = 500;

        uint16_t rv;
        try
        {
          rv = IMC::Packet::serialize(&msg, m_bfr, c_bfr_size);
          m_sock.write(m_bfr, rv, Address::Any, m_port);
        }
        catch(const std::exception& e)
        {
          war(DTR("failed msg %s to send to %u: %s"), msg.getName(), m_port, e.what());
          return;
        }
        inf("Send msg %s to port %u", msg.getName(), m_port);
        Delay::wait(3.0);
      }
    }
  };
}

DUNE_TASK
