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

// WMM 2015 Geomagnetism library (namespace wmm2015).
#include <wmm2015/Geomagnetism.hpp>

// DUNE headers.
#include <DUNE/Coordinates/WMMBackendImpl.hpp>

namespace DUNE
{
  namespace Coordinates
  {
    //! Adapter for the wmm2015 Geomagnetism library.
    struct Wmm2015Lib
    {
      typedef wmm2015::MAGtype_MagneticModel Model;
      typedef wmm2015::MAGtype_Geoid Geoid;
      typedef wmm2015::MAGtype_Ellipsoid Ellipsoid;
      typedef wmm2015::MAGtype_Date Date;
      typedef wmm2015::MAGtype_CoordGeodetic Geodetic;
      typedef wmm2015::MAGtype_CoordSpherical Spherical;
      typedef wmm2015::MAGtype_GeoMagneticElements Elements;

      static Model*
      readModel(const char* file)
      {
        return wmm2015::MAG_robustReadMagModels(file);
      }

      static Model*
      allocateModel(int num_terms)
      {
        return wmm2015::MAG_AllocateModelMemory(num_terms);
      }

      static void
      setDefaults(Ellipsoid* ellip, Geoid* geoid)
      {
        wmm2015::MAG_SetDefaults(ellip, geoid);
      }

      static void
      dateToYear(Date* date)
      {
        char error[100];
        wmm2015::MAG_DateToYear(date, error);
      }

      static void
      timelyModify(const Date& date, Model* mm, Model* timed_mm)
      {
        wmm2015::MAG_TimelyModifyMagneticModel(date, mm, timed_mm);
      }

      static void
      geodeticToSpherical(const Ellipsoid& ellip, const Geodetic& geo, Spherical* sph)
      {
        wmm2015::MAG_GeodeticToSpherical(ellip, geo, sph);
      }

      static void
      geomag(const Ellipsoid& ellip, const Spherical& sph, const Geodetic& geo,
             Model* timed_mm, Elements* gme)
      {
        wmm2015::MAG_Geomag(ellip, sph, geo, timed_mm, gme);
      }

      static void
      gridVariation(const Geodetic& geo, Elements* gme)
      {
        wmm2015::MAG_CalculateGridVariation(geo, gme);
      }

      static void
      geoidHeight(double lat, double lon, double* height, Geoid* geoid)
      {
        wmm2015::MAG_GetGeoidHeight(lat, lon, height, geoid);
      }

      static void
      freeModel(Model* mm)
      {
        wmm2015::MAG_FreeMagneticModelMemory(mm);
      }
    };

    WMMBackend*
    createWmm2015Backend(void)
    {
      return new WMMBackendImpl<Wmm2015Lib>;
    }
  }
}
