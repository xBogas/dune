//***************************************************************************
// Copyright 2007-2020 Universidade do Porto - Faculdade de Engenharia      *
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

// ISO C++ 98 headers.
#include <cstdio>
#include <cstdlib>
#include <stdexcept>
#include <string>

// DUNE headers.
#include <DUNE/Coordinates/WMM.hpp>
#include <DUNE/Coordinates/WMMBackend.hpp>
#include <DUNE/FileSystem/Directory.hpp>

namespace DUNE
{
  namespace Coordinates
  {
    //! EGM96 geoid height grid dimensions.
    static const unsigned c_num_geoid_cols = 1441;
    static const unsigned c_num_geoid_rows = 721;

    struct WMMData
    {
      //! Geomagnetism library generation matching the loaded model.
      WMMBackend* backend;
      //! EGM96 geoid height grid, shared with the backend.
      float* geoid_buffer;
    };

    //! Read the model epoch from the first line of a coefficient file.
    //! @param[in] file path to coefficient file.
    //! @return model epoch in decimal years, negative on failure.
    static double
    readModelEpoch(const FileSystem::Path& file)
    {
      std::FILE* fd = std::fopen(file.c_str(), "r");
      if (fd == NULL)
        return -1.0;

      double epoch = -1.0;
      char line[128];
      if (std::fgets(line, sizeof(line), fd) == NULL
          || std::sscanf(line, "%lf", &epoch) != 1)
        epoch = -1.0;

      std::fclose(fd);
      return epoch;
    }

    //! Select the coefficient file ('.cof') to load from a directory: the
    //! named model when one is given, otherwise the model with the most
    //! recent epoch available.
    //! @param[in] dir directory holding coefficient files.
    //! @param[in] model coefficient file name, empty for latest model.
    //! @return path to the selected file, empty if none was found.
    static FileSystem::Path
    selectModel(const FileSystem::Path& dir, const std::string& model)
    {
      if (!model.empty())
      {
        std::string name = model;
        if (name.size() < 4 || name.compare(name.size() - 4, 4, ".cof") != 0)
          name += ".cof";
        return dir / name;
      }

      FileSystem::Path best;
      double best_epoch = -1.0;

      FileSystem::Directory folder(dir);
      const char* entry = NULL;
      while ((entry = folder.readEntry(FileSystem::Directory::RD_FULL_NAME)) != NULL)
      {
        std::string name(entry);
        if (name.size() < 4 || name.compare(name.size() - 4, 4, ".cof") != 0)
          continue;

        double epoch = readModelEpoch(entry);
        if (epoch < 0)
          continue;

        if (epoch > best_epoch)
        {
          best = entry;
          best_epoch = epoch;
        }
      }

      return best;
    }

    //! Pick the vendored Geomagnetism library generation used to evaluate
    //! a model of the given epoch: each library handles models from its
    //! own generation onwards. To support a future model generation,
    //! vendor its library under a new namespace (see
    //! vendor/libraries/wmm2025), add a WMMBackend adapter for it (see
    //! WMMBackend2025.cpp) and dispatch to it here (newest first).
    //! @param[in] epoch model epoch in decimal years.
    //! @return backend, to be deleted by the caller.
    static WMMBackend*
    createBackend(double epoch)
    {
      if (epoch >= 2025.0)
        return createWmm2025Backend();

      return createWmm2015Backend();
    }

    WMM::WMM(void)
    {
      init(FileSystem::Path::applicationFile().dirname() / "../etc", Time::BrokenDown(), "");
    }

    WMM::WMM(const FileSystem::Path& root)
    {
      init(root, Time::BrokenDown(), "");
    }

    WMM::WMM(const FileSystem::Path& root, const Time::BrokenDown& date)
    {
      init(root, date, "");
    }

    WMM::WMM(const FileSystem::Path& root, const Time::BrokenDown& date,
             const std::string& model)
    {
      init(root, date, model);
    }

    void
    WMM::init(const FileSystem::Path& root, const Time::BrokenDown& date,
              const std::string& model)
    {
      m_data = new WMMData;
      m_data->backend = NULL;
      m_data->geoid_buffer = NULL;

      FileSystem::Path egmfile(root / "wmm/egm9615.bin");

      if (!egmfile.isFile())
        throw std::runtime_error(egmfile.str() + " not found");

      // Select the magnetic model to load.
      FileSystem::Path wmmfile = selectModel(root / "wmm", model);
      if (!wmmfile.isFile())
      {
        if (!model.empty())
          throw std::runtime_error("WMM coefficient file " + wmmfile.str() + " not found");

        throw std::runtime_error("no WMM coefficient file (.cof) found in "
                                 + (root / "wmm").str());
      }

      // Read EGM96 geoid height grid.
      unsigned n = c_num_geoid_cols * c_num_geoid_rows;
      m_data->geoid_buffer = (float*)std::malloc((n + 1) * sizeof(float));
      std::FILE* file = std::fopen(egmfile.c_str(), "rb");
      size_t rv = std::fread(m_data->geoid_buffer, sizeof(float), n, file);
      std::fclose(file);
      if (rv != n)
        throw std::runtime_error("unable to extract geoid");

      // Load the model with the library generation matching its epoch.
      m_data->backend = createBackend(readModelEpoch(wmmfile));
      m_data->backend->load(wmmfile, date, m_data->geoid_buffer);
    }

    WMM::~WMM(void)
    {
      delete m_data->backend;
      std::free(m_data->geoid_buffer);
      delete m_data;
    }

    std::string
    WMM::model(void) const
    {
      return m_data->backend->model();
    }

    double
    WMM::height(double lat, double lon)
    {
      return m_data->backend->height(lat, lon);
    }

    double
    WMM::declination(double lat, double lon, double h)
    {
      return m_data->backend->declination(lat, lon, h);
    }
  }
}
