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

#include <cstring>
#include <sstream>

#include "Sha1.hpp"

namespace DUNE
{
  namespace Algorithms
  {
    static uint32_t
    sha1_rotl(uint32_t val, unsigned bits)
    {
      return (val << bits) | (val >> (32 - bits));
    }

    void
    Sha1::encode(const uint8_t* data, size_t len, std::array<uint8_t, 20>& digest)
    {
      uint32_t h0 = 0x67452301;
      uint32_t h1 = 0xEFCDAB89;
      uint32_t h2 = 0x98BADCFE;
      uint32_t h3 = 0x10325476;
      uint32_t h4 = 0xC3D2E1F0;

      // Pre-processing: add padding.
      uint64_t bit_len = (uint64_t)len * 8;
      size_t padded_len = len + 1;
      while (padded_len % 64 != 56)
        ++padded_len;
      padded_len += 8;

      uint8_t* msg = new uint8_t[padded_len];
      std::memcpy(msg, data, len);
      msg[len] = 0x80;
      std::memset(msg + len + 1, 0, padded_len - len - 1);

      // Append length in bits as big-endian 64-bit.
      for (int i = 0; i < 8; ++i)
        msg[padded_len - 1 - i] = (uint8_t)(bit_len >> (i * 8));

      // Process each 512-bit block.
      for (size_t offset = 0; offset < padded_len; offset += 64)
      {
        uint32_t w[80];
        for (int i = 0; i < 16; ++i)
        {
          w[i] = ((uint32_t)msg[offset + i * 4 + 0] << 24)
                 | ((uint32_t)msg[offset + i * 4 + 1] << 16)
                 | ((uint32_t)msg[offset + i * 4 + 2] << 8) | ((uint32_t)msg[offset + i * 4 + 3]);
        }
        for (int i = 16; i < 80; ++i)
          w[i] = sha1_rotl(w[i - 3] ^ w[i - 8] ^ w[i - 14] ^ w[i - 16], 1);

        uint32_t a = h0, b = h1, c = h2, d = h3, e = h4;

        for (int i = 0; i < 80; ++i)
        {
          uint32_t f, k;
          if (i < 20)
          {
            f = (b & c) | ((~b) & d);
            k = 0x5A827999;
          }
          else if (i < 40)
          {
            f = b ^ c ^ d;
            k = 0x6ED9EBA1;
          }
          else if (i < 60)
          {
            f = (b & c) | (b & d) | (c & d);
            k = 0x8F1BBCDC;
          }
          else
          {
            f = b ^ c ^ d;
            k = 0xCA62C1D6;
          }

          uint32_t tmp = sha1_rotl(a, 5) + f + e + k + w[i];
          e = d;
          d = c;
          c = sha1_rotl(b, 30);
          b = a;
          a = tmp;
        }

        h0 += a;
        h1 += b;
        h2 += c;
        h3 += d;
        h4 += e;
      }

      delete[] msg;

      // Produce the 20-byte digest (big-endian).
      uint32_t h[5] = { h0, h1, h2, h3, h4 };
      for (int i = 0; i < 5; ++i)
      {
        digest[i * 4 + 0] = (uint8_t)(h[i] >> 24);
        digest[i * 4 + 1] = (uint8_t)(h[i] >> 16);
        digest[i * 4 + 2] = (uint8_t)(h[i] >> 8);
        digest[i * 4 + 3] = (uint8_t)(h[i]);
      }
    }
  }
}