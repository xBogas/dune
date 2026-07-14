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

#ifndef DUNE_COORDINATES_WMM_BACKEND_IMPL_HPP_INCLUDED_
#define DUNE_COORDINATES_WMM_BACKEND_IMPL_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <cstddef>
#include <stdexcept>
#include <string>

// DUNE headers.
#include <DUNE/Coordinates/WMMBackend.hpp>
#include <DUNE/Math/Angles.hpp>

namespace DUNE
{
  namespace Coordinates
  {
    //! Generic WMMBackend implementation shared by every vendored
    //! Geomagnetism library generation. 'Lib' adapts one library: it
    //! provides the MAGtype typedefs and thin forwarders to the
    //! library's functions (see WMMBackend2015.cpp for a model).
    template <typename Lib>
    class WMMBackendImpl: public WMMBackend
    {
    public:
      WMMBackendImpl(void):
        m_mm(NULL),
        m_timed_mm(NULL)
      { }

      ~WMMBackendImpl(void)
      {
        if (m_timed_mm != NULL)
          Lib::freeModel(m_timed_mm);

        if (m_mm != NULL)
          Lib::freeModel(m_mm);
      }

      void
      load(const FileSystem::Path& file, const Time::BrokenDown& date,
           float* geoid_buffer)
      {
        m_mm = Lib::readModel(file.c_str());
        if (m_mm == NULL)
          throw std::runtime_error("failed to read WMM coefficient file " + file.str());

        int num_terms = ((m_mm->nMax + 1) * (m_mm->nMax + 2) / 2);
        m_timed_mm = Lib::allocateModel(num_terms);
        Lib::setDefaults(&m_ellip, &m_geoid);

        m_geoid.GeoidHeightBuffer = geoid_buffer;
        m_geoid.Geoid_Initialized = 1;

        // Adjust magnetic model according to date.
        typename Lib::Date mag_date;
        mag_date.Year = date.year;
        mag_date.Month = date.month;
        mag_date.Day = date.day;
        Lib::dateToYear(&mag_date);
        Lib::timelyModify(mag_date, m_mm, m_timed_mm);
      }

      std::string
      model(void) const
      {
        return m_mm->ModelName;
      }

      double
      declination(double lat, double lon, double height)
      {
        typename Lib::Geodetic geo;
        typename Lib::Spherical sph;
        typename Lib::Elements gme;

        geo.phi = Math::Angles::degrees(lat);
        geo.lambda = Math::Angles::degrees(lon);
        geo.UseGeoid = false;
        geo.HeightAboveEllipsoid = height * 1e-03;

        Lib::geodeticToSpherical(m_ellip, geo, &sph);
        Lib::geomag(m_ellip, sph, geo, m_timed_mm, &gme);
        Lib::gridVariation(geo, &gme);

        return Math::Angles::radians(gme.Decl);
      }

      double
      height(double lat, double lon)
      {
        double h = 0;
        Lib::geoidHeight(Math::Angles::degrees(lat), Math::Angles::degrees(lon),
                         &h, &m_geoid);
        return h;
      }

    private:
      typename Lib::Model* m_mm;
      typename Lib::Model* m_timed_mm;
      typename Lib::Geoid m_geoid;
      typename Lib::Ellipsoid m_ellip;
    };
  }
}

#endif
