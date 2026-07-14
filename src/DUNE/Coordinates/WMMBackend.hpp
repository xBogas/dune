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

#ifndef DUNE_COORDINATES_WMM_BACKEND_HPP_INCLUDED_
#define DUNE_COORDINATES_WMM_BACKEND_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <string>

// DUNE headers.
#include <DUNE/FileSystem/Path.hpp>
#include <DUNE/Time/BrokenDown.hpp>

namespace DUNE
{
  namespace Coordinates
  {
    //! Internal interface to one generation of the vendored Geomagnetism
    //! library, used by WMM. Each generation is compiled inside its own
    //! namespace (wmm2015, wmm2025, ...) so several can be linked into
    //! the same binary, and each backend lives in its own translation
    //! unit because the library headers share macro names.
    class WMMBackend
    {
    public:
      virtual
      ~WMMBackend(void)
      { }

      //! Load a coefficient file and adjust the model to a date.
      //! @param[in] file path to the coefficient file.
      //! @param[in] date date at which the magnetic model is evaluated.
      //! @param[in] geoid_buffer EGM96 geoid height grid (not owned).
      virtual void
      load(const FileSystem::Path& file, const Time::BrokenDown& date,
           float* geoid_buffer) = 0;

      //! Get the name of the loaded magnetic model.
      //! @return model name.
      virtual std::string
      model(void) const = 0;

      //! Get magnetic declination for given latitude and longitude.
      //! @param[in] lat WGS84 latitude (radians).
      //! @param[in] lon WGS84 longitude (radians).
      //! @param[in] height height above the WGS84 ellipsoid (m).
      //! @return magnetic declination (radians).
      virtual double
      declination(double lat, double lon, double height) = 0;

      //! Get the height of the EGM96 geoid above or below the WGS84
      //! ellipsoid at the specified geodetic coordinates.
      //! @param[in] lat WGS84 latitude (radians).
      //! @param[in] lon WGS84 longitude (radians).
      //! @return geoid height (m).
      virtual double
      height(double lat, double lon) = 0;
    };

    //! Create a backend using the WMM 2015 era library.
    //! @return backend, to be deleted by the caller.
    WMMBackend*
    createWmm2015Backend(void);

    //! Create a backend using the WMM 2025 era library.
    //! @return backend, to be deleted by the caller.
    WMMBackend*
    createWmm2025Backend(void);
  }
}

#endif
