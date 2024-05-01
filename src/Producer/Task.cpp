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
#include "Reader.hpp"
#include <DUNE/DUNE.hpp>

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
    //! Io device.
    std::string io_dev;
    //! Input timeout.
    double inp_tout;
  };

  struct Task: public Hardware::BasicDeviceDriver
  {
    //! IO Handle.
    IO::Handle* m_handle;
    //! Task Arguments.
    Arguments m_args;
    //! Watchdog.
    Time::Counter<double> m_wdog;

    //! Constructor.
    //! @param[in] name task name.
    //! @param[in] ctx context.
    Task(const std::string& name, Tasks::Context& ctx):
      DUNE::Hardware::BasicDeviceDriver(name, ctx),
      m_handle(nullptr)
    {
      paramActive(Tasks::Parameter::SCOPE_GLOBAL,
                  Tasks::Parameter::VISIBILITY_USER, true);

      param("IO Port - Device", m_args.io_dev)
        .defaultValue("")
        .description("IO device URI in the form \"tcp://ADDRESS:PORT\" "
                     "or \"uart://DEVICE:BAUD\" "
                     "or \"udp://ADDRESS:PORT\"");

      param("Input Timeout", m_args.inp_tout)
        .defaultValue("5.0")
        .units(Units::Second)
        .description("Input timeout");
    }

    //! Update internal state with new parameter values.
    void
    onUpdateParameters(void)
    {
      if (paramChanged(m_args.io_dev))
      {
        m_wdog.setTop(m_args.inp_tout);
      }
    }

    //! Reserve entity identifiers.
    void
    onEntityReservation(void)
    {
      // IMC::EntityList el;
      // el.op = IMC::EntityList::OP_QUERY;
      // el.setTimeStamp();

      // inf("sending message for Entity reservation");
      // sendMessage(&el);

      // IMC::Message* msg = nullptr;
      // while (!parseList(msg))
      // {
      //   msg = m_args.udp_or_serial ? waitUDP() : waitSerial();
      // }

      // inf("Done Entity reservation!");
      // Memory::clear(msg);
      // entityReservationDone = true;
      // Reader* reader = new Reader(this, m_handle);
      // reader->start();
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
      catch (const std::exception& e)
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

    bool
    openUDP(std::string& uri)
    {
      char addr[128];
      int dst_port;
      if (std::sscanf(uri.c_str(), "udp://%[^:]:%d", addr, &dst_port) != 2)
        return false;

      UDPSocket* sock = new UDPSocket();
      for (uint16_t offset = 0; offset < 10; offset++)
      {
        uint16_t port = 5000 + offset;
        try
        {
          Address local = Address("10.0.2.80");
          inf("interfacing with %s:%d", local.c_str(), port);

          sock->bind(port, local);
          sock->enableBroadcast(true);
          break;
        }
        catch (std::runtime_error& e)
        {
          war("%s", e.what());
        }
      }
      sock->connect(addr, dst_port);

      m_handle = sock;

      return true;
    }

    //! Acquire resources.
    bool
    onConnect(void)
    {
      if (openUDP(m_args.io_dev))
        return true;

      try
      {
        m_handle = openDeviceHandle(m_args.io_dev);
        m_handle->flush();
      }
      catch (std::runtime_error& e)
      {
        err(DTR("failed to open device: %s"), e.what());
        return false;
      }

      return true;
    }

    //! Disconnect from device.
    void
    onDisconnect(void) override
    {
      Memory::clear(m_handle);
    }

    void
    onInitializeDevice(void) override
    {
      sendHeartBeat();
      m_wdog.setTop(m_args.inp_tout);
    }

    void
    sendMessage(const IMC::Message* msg)
    {
      IMC::ClockControl* ptr = nullptr;

      if (!msg)
      {
        ptr = new IMC::ClockControl();  // random message to test fp64_t
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

      inf("Message sent: %s", msg->getName());
      Memory::clear(ptr);
    }

    void
    sendHeartBeat(void)
    {
      IMC::QueryEntityParameters msg;
      msg.name = "all";
      sendMessage(&msg);
      if (m_args.inp_tout == 0)
        exit(0);
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
        msg = nullptr;  // make sure we don't send a message
      }

      return msg;
    }

    void
    reportEntity(const IMC::EntityParameters* msg)
    {
      inf("reporting entity: %s", msg->name.c_str());

      for (auto i : msg->params)
      {
        inf("param: %s = %s", i->name.c_str(), i->value.c_str());
      }
    }

    void
    parseData(void)
    {
      uint8_t bfr[c_bfr_size];

      uint16_t rv = m_handle->read(bfr, c_bfr_size);
      IMC::Message* msg = parseBuffer(bfr, rv);
      if (msg)
      {
        inf("received message: %s", msg->getName());
        if (msg->getId() == IMC::EntityParameters::getIdStatic())
          reportEntity(static_cast<IMC::EntityParameters*>(msg));
      }

      Memory::clear(msg);
    }

    //! Check for input timeout.
    //! Data is read in the DevDataText consume.
    //! @return true.
    bool
    onReadData(void) override
    {
      if (m_wdog.overflow())
      {
        m_wdog.reset();
        sendHeartBeat();
      }

      if (Poll::poll(*m_handle, 0.01))
        parseData();

      return true;
    }
  };
}

DUNE_TASK
