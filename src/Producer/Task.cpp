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

  static bool entityReservationDone = false;

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
    //! IO Handle.
    IO::Handle* m_handle;
    //! Task Arguments.
    Arguments m_args;
    //! Watchdog.
    Counter<float> m_wdog;

    //! Constructor.
    //! @param[in] name task name.
    //! @param[in] ctx context.
    Task(const std::string& name, Tasks::Context& ctx):
      DUNE::Tasks::Task(name, ctx),
      m_handle(nullptr)
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
    {
      if (!paramChanged(m_args.udp_or_serial))
        return;

      // Create new handle to be able to reserve entities.
      Memory::clear(m_handle);
      createHandle();
    }

    //! Reserve entity identifiers.
    void
    onEntityReservation(void)
    {
      IMC::EntityList el;
      el.op = IMC::EntityList::OP_QUERY;
      el.setTimeStamp();

      inf("sending message for Entity reservation");
      sendMessage(&el);

      IMC::Message* msg = nullptr;
      while (!parseList(msg))
      {
        msg = m_args.udp_or_serial ? waitUDP() : waitSerial();
      }

      inf("Done Entity reservation!");
      Memory::clear(msg);
      entityReservationDone = true;
    }

    bool
    parseList(IMC::Message* msg)
    {
      if (!msg)
        return false;

      if (msg->getId() != DUNE_IMC_ENTITYLIST)
      {
        war(DTR("unexpected message received: %s"), msg->getName());
        return false;
      }

      IMC::EntityList* el = static_cast<IMC::EntityList*>(msg);
      
      std::vector<std::string> labels;
      String::split(el->list, ";", labels);

      el->list.clear();
      el->op = IMC::EntityList::OP_REPORT;

      try
      {
        unsigned id = reserveEntity(labels[0]);
        el->list = labels[0];
        el->list += "=";
        el->list += std::to_string(id);

        for (size_t i = 1; i < labels.size(); i++)
        {
          id = reserveEntity(labels[i]);
          el->list += ";";
          el->list += labels[i];
          el->list += "=";
          el->list += std::to_string(id);
        }
      }
      catch(const std::exception& e)
      {
        std::cerr << e.what() << '\n';
      }
      
      sendMessage(el);
      return true;
    }
  
    //! Resolve entity names.
    void
    onEntityResolution(void)
    { }

    void
    createHandle(void)
    {
      if (m_args.udp_or_serial)
      {
        UDPSocket* sock;
        sock = new UDPSocket();
        sock->bind(m_args.src_port);
        sock->enableBroadcast(true);
        m_handle = sock;
        return;
      }

      SerialPort* serial = new SerialPort(m_args.uart_dev, m_args.uart_baud);
      //serial->setCanonicalInput(true);
      m_handle = serial;
    }
    //! Acquire resources.
    void
    onResourceAcquisition(void)
    {
      if (m_handle)
        return;

      createHandle();
    }

    //! Initialize resources.
    void
    onResourceInitialization(void)
    {
      if (m_handle)
        m_handle->flush();
    }

    //! Release resources.
    void
    onResourceRelease(void)
    {
      Memory::clear(m_handle);
    }

    void
    sendMessage(const IMC::Message* msg)
    {
      IMC::ClockControl* ptr;

      if(!msg)
      {
        ptr = new IMC::ClockControl(); // random message to test fp64_t
        ptr->op = IMC::ClockControl::COP_SYNC_EXEC;
        ptr->clock = Clock::getSinceEpoch();
        ptr->tz = 0;
        msg = ptr;
      }

      try
      {
        uint8_t m_bfr[c_bfr_size];
        uint16_t rv;
        rv = IMC::Packet::serialize(msg, m_bfr, c_bfr_size);
        m_handle->write(m_bfr, rv);
      }
      catch (const std::exception& e)
      {
        war(DTR("failed to send msg %s: %s"), msg->getName(), e.what());
        return;
      }

      std::stringstream os;
      msg->toText(os);
      inf("Message sent: %s", os.str().c_str());
      Memory::clear(ptr);
    }

    void
    parseDebugMessage(uint8_t* bfr, uint16_t len)
    {
      std::string str((char*)&bfr[1], len - 1);
      war("debug message: %s", sanitize(str).c_str());
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
        inf("received message: %s", os.str().c_str());
      }
      catch (std::exception& e)
      {
        inf("error while unpacking message: %s", e.what());
        std::string str((char*)bfr, len);
        inf("buffer: %s", sanitize(str).c_str());
        msg = nullptr; // make sure we don't send a message
      }

      return msg;
    }

    Message*
    waitSerial(void)
    {
      inf("waiting for Serial ...");
      uint8_t bfr[c_bfr_size];
      size_t i = 0;

      while (!stopping())
      {
        if (!Poll::poll(*m_handle, 5.0))
          return nullptr;

        size_t rv = m_handle->read(&bfr[i], c_bfr_size);
        inf("read %ld bytes", rv);
        i += rv;
        if (bfr[i - 2] == '\r' && bfr[i - 1] == '\n')
        {
          inf("message complete %ld bytes", i);
          return parseBuffer(bfr, i);
        }
      }

      m_handle->flush();
      return nullptr;
    }

    Message*
    waitUDP(void)
    {
      inf("waiting for UDP ...");
      uint8_t bfr[c_bfr_size];

      while (!stopping())
      {
        if (!Poll::poll(*m_handle, 5.0))
          return nullptr;

        uint16_t rv = m_handle->read(bfr, c_bfr_size);
        return parseBuffer(bfr, rv);
      }

      return nullptr;
    }

    //! Main loop.
    void
    onMain(void)
    {
      while (!entityReservationDone)
      { }

      while (!stopping())
      {
        consumeMessages();

        if (m_args.udp_or_serial ? waitUDP() : waitSerial())
          ;//sendMessage();
      }
    }
  };
}

DUNE_TASK
