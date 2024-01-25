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
#ifndef PRODUCER_ECHO_HPP_INCLUDED_
#define PRODUCER_READER_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Producer
{
  using DUNE_NAMESPACES;

  static const int bfr_len = 65535;
  //! Line termination character.
  static const char c_line_term = '\n';

  class Reader: public Concurrency::Thread
  {
  public:
    //! Constructor.
    //! @param[in] task parent task.
    //! @param[in] handle I/O handle.
    Reader(Tasks::Task* task, IO::Handle* handle, bool isSerial = true):
      m_task(task),
      m_handle(handle),
      m_Serial(isSerial)
    { }

  private:
    //! Parent task.
    Tasks::Task* m_task;
    //! I/O handle.
    IO::Handle* m_handle;
    //! Internal read buffer.
    std::vector<char> m_buffer;
    //! Current line.
    std::string m_line;
    //! Serial port flag.
    bool m_Serial;

    void
    parseBuffer(uint8_t* bfr, uint16_t len)
    {
      try
      {
        IMC::Message* msg = IMC::Packet::deserialize(bfr, len);

        std::stringstream os;
        msg->toText(os);
        m_task->inf("received message: %s", os.str().c_str());
      }
      catch (std::exception& e)
      {
        m_task->inf("error while unpacking message: %s", e.what());
      }
    }

    // serial will send a message with \r\n at the end
    // so that we can know when to stop reading
    void
    serial(void)
    {
      uint8_t bfr[bfr_len];
      size_t i = 0;

      while (i < bfr_len)
      {
        size_t rv = m_handle->read(&bfr[i], 1);
        if (rv == 0)
          return;

        i += rv;
        if (bfr[i - 2] == '\r' && bfr[i - 1] == '\n')
        {
          parseBuffer(bfr, i);
          return;
        }
      }
    }

    void
    udp(void)
    {
      uint8_t bfr[bfr_len];
      uint16_t rv = m_handle->read(bfr, bfr_len);

      parseBuffer(bfr, rv);
    }

    void
    run(void)
    {
      while (!isStopping())
      {
        try
        {
          if (!Poll::poll(*m_handle, 1.0))
            continue;

          m_Serial ? serial() : udp();
        }
        catch (std::runtime_error& e)
        {
          m_task->err("%s", e.what());
          break;
        }
      }
    }
  };
}  // namespace Producer
#endif
