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
// Author: Eduardo Marques                                                  *
// Author: Pedro Vaz Teixeira                                               *
// Author: José Braga                                                       *
//***************************************************************************

#ifndef DUNE_COORDINATES_WMM_HPP_INCLUDED_
#define DUNE_COORDINATES_WMM_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <string>

// DUNE headers.
#include <DUNE/Config.hpp>
#include <DUNE/FileSystem/Path.hpp>
#include <DUNE/Time/BrokenDown.hpp>

namespace DUNE
{
  namespace Coordinates
  {
    // Export DLL Symbol.
    class DUNE_DLL_SYM WMM;

    // Forward declaration of internal data.
    struct WMMData;

    //! World-magnetic model 2010-2015 interface class.
    class WMM
    {
    public:
      //! Constructor.
      //! By default it looks up WMM 2015 data files
      //! in the '../etc/wmm' directory relative to the location of the current
      //! executable.
      WMM(void);

      //! Constructor.
      //! WMM 2010 files will be searched within 'root/wmm'.
      //! @param[in] root root path for searching WMM 2010 data files
      WMM(const FileSystem::Path& root);

      //! Constructor.
      //! WMM files will be searched within 'root/wmm' and the magnetic
      //! model will be evaluated at the given date instead of the
      //! current one.
      //! @param[in] root root path for searching WMM data files
      //! @param[in] date date at which the magnetic model is evaluated
      WMM(const FileSystem::Path& root, const Time::BrokenDown& date);

      //! Constructor.
      //! Loads the given magnetic model ('root/wmm/<model>.cof'),
      //! evaluated at the given date. An empty model name loads the
      //! model with the most recent epoch available in 'root/wmm'.
      //! @param[in] root root path for searching WMM data files
      //! @param[in] date date at which the magnetic model is evaluated
      //! @param[in] model coefficient file name, empty for latest model
      WMM(const FileSystem::Path& root, const Time::BrokenDown& date,
          const std::string& model);

      //! Destructor.
      ~WMM(void);

      //! Get the name of the loaded magnetic model (e.g. "WMM-2015v2").
      //! @return model name.
      std::string
      model(void) const;

      //! Returns the height of the EGM96 geoid above or below the WGS84 ellipsoid,
      //! at the specified geodetic coordinates.
      //! @param[in] lat WGS84 latitude
      //! @param[in] lon WGS84 longitude
      //! @return geoid height
      double
      height(double lat, double lon);

      //! Get magnetic declination for given latitude and longitude (in radians).
      //! @param[in] lat WGS84 latitude
      //! @param[in] lon WGS84 longitude
      //! @param[in] height optional height argument (defaults to 0)
      //! @return magnetic declination
      double
      declination(double lat, double lon, double height = 0);

    private:
      void
      init(const FileSystem::Path& root, const Time::BrokenDown& date,
           const std::string& model);

      WMMData* m_data;
    };
  }
}
#endif
