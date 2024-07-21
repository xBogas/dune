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
#include <DUNE/Network/ExtendedFragments.hpp>

// Local headers.
#include "Slave.hpp"

namespace Vision
{
  //! Insert short task description here.
  //!
  //! Insert explanation on task behaviour here.
  //! @author João Bogas
  namespace VideoStream
  {
    using DUNE_NAMESPACES;

    struct Arguments
    {
      //! Camera file path.
      std::string cam_path;
      //! Remote Destination.
      std::string dst;
      //! Camera FPS.
      uint16_t cam_fps;
      //! Camera width.
      uint16_t cam_width;
      //! Camera height.
      uint16_t cam_height;
      //! Dispatch Images.
      bool dispatch;
    };

    struct Task: public DUNE::Tasks::Task
    {
      //! Buffer for image data.
      uint8_t m_buffer[65535];
      //! UDP socket.
      IO::Handle* m_dev;
      //! Camera slave.
      Slave* m_slave;
      //! Task arguments.
      Arguments m_args;
      //! FPS Counter.
      unsigned m_fps_count;
      //! FPS Watchog.
      Counter<double> m_fps;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx),
        m_dev(nullptr),
        m_slave(nullptr)
      {
        paramActive(Parameter::SCOPE_GLOBAL, Parameter::VISIBILITY_USER, true);

        param("Camera Path", m_args.cam_path).description("Camera file path");

        param("UDP - Remote Address", m_args.dst)
          .defaultValue("255.255.255.255//2525")
          .description("Remote UDP address in form of IP//PORT");

        param("Camera FPS", m_args.cam_fps)
          .description("VideoCapture framerate in frame per second");

        param("Camera Width", m_args.cam_width)
          .description("Width of the video capture resolution in pixels.");

        param("Camera Height", m_args.cam_height)
          .description("Height of the video capture resolution in pixels.");

        param("Dispatch Images", m_args.dispatch)
          .defaultValue("false")
          .description("Dispatch images to the IMC bus");

        bind<IMC::CompressedImage>(this);
      }

      //! Update internal state with new parameter values.
      void
      onUpdateParameters(void)
      {
        if (m_slave == nullptr)
          return;

        if (paramChanged(m_args.cam_width) || paramChanged(m_args.cam_height))
          m_slave->setCameraResolution(m_args.cam_width, m_args.cam_height);

        if (paramChanged(m_args.cam_fps))
          m_slave->setCameraFPS(m_args.cam_fps);
      }

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
      {
        try
        {
          UDPSocket* dev = new UDPSocket();
          dev->enableBroadcast(true);

          unsigned port = 2525;
          Address addr = Address::Broadcast;
          char bfr[128];

          if (sscanf(m_args.dst.c_str(), "%[^:]:%u", bfr, &port) != 2)
            war("Invalid remote address: %s", m_args.dst.c_str());

          addr = bfr;
          dev->connect(addr, port);
          inf("Transmitting to %s:%u", addr.c_str(), port);
          m_dev = dev;

          m_slave = new Slave(m_args.cam_path, *this, m_args.dispatch);
        }
        catch (const std::exception& e)
        {
          err("Failed to acquire resource: %s", e.what());
          throw RestartNeeded(e.what(), 60);
        }
      }

      //! Initialize resources.
      void
      onResourceInitialization(void)
      {
        m_slave->setCameraResolution(m_args.cam_width, m_args.cam_height);
        m_slave->setCameraFPS(m_args.cam_fps);
      }

      void
      onActivation(void)
      {
        m_fps.setTop(1.0);
        m_slave->start();
      }

      void
      onDeactivation(void)
      {
        m_slave->stopAndJoin();
      }

      //! Release resources.
      void
      onResourceRelease(void)
      {
        if (m_slave != nullptr)
        {
          if (m_slave->isRunning())
            m_slave->stopAndJoin();

          Memory::clear(m_slave);
        }
      }

      void
      consume(const IMC::CompressedImage* msg)
      {
        m_fps_count++;
        if (msg->getSerializationSize() > 65500)
        {
          sendFragments(msg);
          return;
        }

        try
        {
          uint16_t len = IMC::Packet::serialize(msg, m_buffer, sizeof(m_buffer));

          m_dev->write(m_buffer, len);
        }
        catch (const std::exception& e)
        {
          war("%s", e.what());
        }
      }

      void
      sendFragments(const IMC::CompressedImage* msg)
      {
        try
        {
          ExtendedFragments::Splitter splitter(msg, 65400);
          for (auto&& part : splitter)
          {
            part.setSource(getSystemId());
            part.setSourceEntity(getEntityId());

            uint16_t len = IMC::Packet::serialize(&part, m_buffer, sizeof(m_buffer));
            m_dev->write(m_buffer, len);
          }
        }
        catch (const std::exception& e)
        {
          err("%s", e.what());
        }
      }

      //! Main loop.
      void
      onMain(void)
      {
        m_fps_count = 0;
        while (!stopping())
        {
          waitForMessages(1.0);

          if (!isActive())
            continue;

          if (m_fps.overflow())
          {
            trace(DTR("FPS: %d"), m_fps_count);
            m_fps_count = 0;
            m_fps.reset();
          }
        }
      }
    };
  }
}

DUNE_TASK
