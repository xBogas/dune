//***************************************************************************
// Copyright 2007-2025 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Bogas                                                            *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Simulators
{
  //! Insert short task description here.
  //!
  //! Insert explanation on task behaviour here.
  //! @author Bogas
  namespace Producer
  {
    using DUNE_NAMESPACES;

    struct Arguments
    {
      //! Payload timeout.
      double timeout;
      //! Number of samples to send.
      uint32_t num_samples;
    };

    struct Task: public DUNE::Tasks::Task
    {
      Arguments m_args;  //!< Task arguments.

      //! Send watchdog.
      Counter<double> m_send_wdog;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx)
      {
        param("Payload timeout", m_args.timeout)
          .defaultValue("2.0")
          .description("Payload timeout in seconds.");

        param("Number of samples", m_args.num_samples)
          .defaultValue("5")
          .description("Number of samples to send.");
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
      { }

      //! Initialize resources.
      void
      onResourceInitialization(void)
      { }

      //! Release resources.
      void
      onResourceRelease(void)
      { }

      void
      send(void)
      {
        IMC::VerticalProfile msg;
        msg.parameter = IMC::VerticalProfile::PROF_CURRENT_VELOCITY;
        msg.numsamples = m_args.num_samples;
        msg.lat = 0.0;
        msg.lon = 0.0;

        for (size_t i = 0; i < msg.numsamples; i++)
        {
          IMC::ProfileSample sample;
          sample.depth = i * 10.0;
          sample.avg = i * 0.1;  // Example value

          msg.samples.push_back(sample);
        }

        msg.setTimeStamp(0.0);
        inf("Sending message %s - timestamp %f", msg.getName(), msg.getTimeStamp());
        dispatch(msg, DF_KEEP_TIME);
      }

      //! Main loop.
      void
      onMain(void)
      {
        m_send_wdog.setTop(m_args.timeout);
        while (!stopping())
        {
          waitForMessages(0.1);

          if (m_send_wdog.overflow())
          {
            send();
            m_send_wdog.reset();
          }
        }
      }
    };
  }
}

DUNE_TASK
