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

#ifndef VISION_VIDEOSTREAM_SLAVE_HPP_INCLUDED_
#define VISION_VIDEOSTREAM_SLAVE_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/DUNE.hpp>

// OpenCV headers.
#include <opencv2/opencv.hpp>

namespace Vision
{
  namespace VideoStream
  {
    using DUNE_NAMESPACES;

    class Slave: public DUNE::Concurrency::Thread
    {
    public:
      //! Constructor.
      //! @param[in] name camera path
      Slave(const std::string& path, Task& owner, bool log_img = false):
        Thread(),
        m_log_img(log_img),
        m_frame_id(0),
        m_camera(path),
        m_owner(owner)
      {
        if (!m_camera.isOpened())
          throw std::runtime_error("Could not open camera");

        m_owner.debug("Camera (%s) opened", path.c_str());

        double width = m_camera.get(cv::CAP_PROP_FRAME_WIDTH);
        double height = m_camera.get(cv::CAP_PROP_FRAME_HEIGHT);
        m_owner.debug("Current image resolution: %.0f x %.0f", width, height);

        double fps = m_camera.get(cv::CAP_PROP_FPS);
        m_owner.debug("Current frame rate: %.0f FPS", fps);
      }

      ~Slave(void)
      {
        m_camera.release();
      }

      void
      setCameraResolution(double width, double height)
      {
        m_camera.set(cv::CAP_PROP_FRAME_WIDTH, width);
        m_camera.set(cv::CAP_PROP_FRAME_HEIGHT, height);

        width = m_camera.get(cv::CAP_PROP_FRAME_WIDTH);
        height = m_camera.get(cv::CAP_PROP_FRAME_HEIGHT);
        m_owner.debug("Update image resolution: %.0f x %.0f", width, height);
      }

      void
      setCameraFPS(double fps)
      {
        m_camera.set(cv::CAP_PROP_FPS, fps);

        fps = m_camera.get(cv::CAP_PROP_FPS);
        m_owner.debug("Update frame rate: %.0f FPS", fps);
      }

    private:
      void
      run(void)
      {
        m_owner.inf("Camera thread started");

        // Create a window to display the images
        cv::namedWindow("Display", cv::WINDOW_AUTOSIZE);

        cv::Mat frame;
        while (!isStopping())
        {
          m_camera >> frame;
          if (frame.empty())
          {
            m_owner.war("Frame is empty");
            continue;
          }

          cv::flip(frame, frame, 1);

          IMC::CompressedImage* cimg = new IMC::CompressedImage();
          cimg->frameid = m_frame_id++;

          // Convert OpenCV Mat to DUNE Image
          std::vector<uchar> buf;
          cv::imencode(".jpg", frame, buf);

          cimg->data.assign(buf.begin(), buf.end());

          if (m_log_img)
            dispatch(cimg);
          else
            receive(cimg);

#ifndef DEBUG
          cv::imshow("Display", frame);
#endif
        }

        m_owner.inf("Camera thread stopped");
      }

      //! Dispatch message to bus
      void
      dispatch(IMC::Message* msg)
      {
        msg->setSource(m_owner.getSystemId());
        msg->setSourceEntity(m_owner.getEntityId());

        msg->setTimeStamp();
        m_owner.dispatch(msg, DF_KEEP_TIME);

        Memory::clear(msg);
      }

      //! Send messsage to Task
      void
      receive(IMC::Message* msg)
      {
        msg->setSource(m_owner.getSystemId());
        msg->setSourceEntity(m_owner.getEntityId());

        msg->setTimeStamp();
        m_owner.receive(msg);
      }

      //! Log image flag.
      bool m_log_img;
      //! Frame ID.
      uint8_t m_frame_id;
      //! Camera object.
      cv::VideoCapture m_camera;
      //! Task owner.
      Task& m_owner;
    };
  }
}

#endif  // VISION_VIDEOSTREAM_SLAVE_HPP_INCLUDED_