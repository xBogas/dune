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

#ifndef DUNE_ALGORITHMS_SHA1_HPP
#define DUNE_ALGORITHMS_SHA1_HPP

// ISO C++ 98 headers.
#include <array>
#include <cstdint>

// DUNE headers.
#include <DUNE/Config.hpp>

namespace DUNE
{
  namespace Algorithms
  {
    // Export DLL Symbol.
    class DUNE_DLL_SYM Sha1;

    //! Minimal SHA-1 implementation (RFC 3174).
    class Sha1
    {
    public:
      //! Compute SHA-1 digest of input data.
      //! @param[in] data input data.
      //! @param[in] len length of input data.
      //! @param[out] digest output buffer for 20-byte digest.
      static void
      encode(const uint8_t* data, size_t len, std::array<uint8_t, 20>& digest);

      static inline void
      encode(const char* data, size_t len, std::array<uint8_t, 20>& digest)
      {
        encode(reinterpret_cast<const uint8_t*>(data), len, digest);
      }

      static inline void
      encode(const std::string& str, std::array<uint8_t, 20>& digest)
      {
        encode(reinterpret_cast<const uint8_t*>(str.c_str()), str.size(), digest);
      }

      static inline std::array<uint8_t, 20>
      encode(const std::string& str)
      {
        std::array<uint8_t, 20> digest;
        encode(str, digest);
        return digest;
      }

      static inline std::array<uint8_t, 20>
      encode(const char* data, size_t len)
      {
        std::array<uint8_t, 20> digest;
        encode(data, len, digest);
        return digest;
      }
    };
  }
}

#endif