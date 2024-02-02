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
// Author: Ricardo Martins                                                  *
//***************************************************************************

#ifndef SENSORS_GPS_READER_HPP_INCLUDED_
#define SENSORS_GPS_READER_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Producer
{
  using DUNE_NAMESPACES;

  //! Read buffer size.
  static const size_t c_read_buffer_size = 4096;
  //! Line termination character.
  static const char c_line_term = '\n';

  class Reader: public Concurrency::Thread
  {
  public:
    //! Constructor.
    //! @param[in] task parent task.
    //! @param[in] handle I/O handle.
    Reader(Tasks::Task* task, IO::Handle* handle):
      m_task(task),
      m_handle(handle)
    { }

  private:
    //! Parent task.
    Tasks::Task* m_task;
    //! I/O handle.
    IO::Handle* m_handle;

    void
    parseDebugMessage(uint8_t* bfr, uint16_t len)
    {
      std::string str((char*)&bfr[1], len - 1);
      m_task->war("debug message: %s", sanitize(str).c_str());
    }

    Message*
    parseBuffer(uint8_t* bfr, uint16_t len)
    {
      if (bfr[0] == '$')  // Debug message
      {
        parseDebugMessage(bfr, len);
        return nullptr;
      }

      IMC::Message* msg = nullptr;
      try
      {
        msg = IMC::Packet::deserialize(bfr, len);

        std::stringstream os;
        msg->toText(os);
        m_task->inf("received message: %s", os.str().c_str());
      }
      catch (std::exception& e)
      {
        m_task->inf("error while unpacking message: %s", e.what());
        std::string str((char*)bfr, len);
        m_task->inf("buffer: %s", sanitize(str).c_str());
        msg = nullptr;  // make sure we don't send a message
      }

      return msg;
    }

    Message*
    waitSerial(void)
    {
      m_task->inf("waiting for Serial ...");
      uint8_t bfr[65535];
      size_t i = 0;

      while (!isStopping())
      {
        if (!Poll::poll(*m_handle, 5.0))
          return nullptr;

        size_t rv = m_handle->read(&bfr[i], 65535);
        m_task->inf("read %ld bytes", rv);
        i += rv;
        if (bfr[i - 2] == '\r' && bfr[i - 1] == '\n')
        {
          m_task->inf("message complete %ld bytes", i);
          return parseBuffer(bfr, i);
        }
      }

      m_handle->flush();
      return nullptr;
    }

    void
    run(void)
    {
      while (!isStopping())
      {
        try
        {
          waitSerial();
        }
        catch (std::runtime_error& e)
        {
          m_task->err("%s", e.what());
        }
      }
    }
  };
}

#endif
