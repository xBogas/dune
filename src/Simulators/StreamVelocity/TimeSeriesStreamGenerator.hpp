//***************************************************************************
// Copyright 2007-2026 Universidade do Porto - Faculdade de Engenharia      *
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

#ifndef SIMULATORS_STREAM_VELOCITY_TIME_SERIES_STREAM_GENERATOR_HPP_INCLUDED_
#define SIMULATORS_STREAM_VELOCITY_TIME_SERIES_STREAM_GENERATOR_HPP_INCLUDED_

#include <cmath>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <string>
#include <vector>

#include "StreamGenerator.hpp"

namespace Simulators
{
  namespace StreamVelocity
  {
    namespace StreamGenerator
    {
      //! Stream velocity replayed from a file, the same everywhere. Each line
      //! holds time (s), north, east and down velocity (m/s), separated by
      //! commas or spaces; lines starting with '#' are skipped. The series
      //! starts at the first request, is interpolated linearly and repeats.
      class TimeSeriesStreamGenerator: public StreamGenerator
      {
      public:
        TimeSeriesStreamGenerator(const std::string& filename):
          StreamGenerator(0.0, 0.0, 0.0),
          m_start(-1.0)
        {
          std::ifstream ifs(filename.c_str());
          if (!ifs)
            throw std::runtime_error("unable to open " + filename);

          std::string line;
          while (std::getline(ifs, line))
          {
            if (line.empty() || line[0] == '#')
              continue;

            for (char& c: line)
              if (c == ',')
                c = ' ';

            std::istringstream is(line);
            Sample s;
            if (is >> s.t >> s.v[0] >> s.v[1] >> s.v[2])
              m_samples.push_back(s);
          }

          if (m_samples.size() < 2 || m_samples.back().t <= m_samples.front().t)
            throw std::runtime_error("time series needs two or more samples in time order: " + filename);
        }

        std::array<double, 3>
        getVelocity(double, double, double, double time) const override
        {
          if (m_start < 0.0)
            m_start = time;

          const double t0 = m_samples.front().t;
          const double span = m_samples.back().t - t0;
          const double t = t0 + std::fmod(time - m_start, span);

          size_t i = 1;
          while (i < m_samples.size() - 1 && m_samples[i].t < t)
            ++i;

          const Sample& a = m_samples[i - 1];
          const Sample& b = m_samples[i];
          const double f = (b.t > a.t) ? (t - a.t) / (b.t - a.t) : 0.0;
          return {a.v[0] + f * (b.v[0] - a.v[0]),
                  a.v[1] + f * (b.v[1] - a.v[1]),
                  a.v[2] + f * (b.v[2] - a.v[2])};
        }

      private:
        struct Sample
        {
          double t;
          double v[3];
        };

        //! Samples in time order.
        std::vector<Sample> m_samples;
        //! Time of the first request.
        mutable double m_start;
      };
    }
  }
}

#endif
