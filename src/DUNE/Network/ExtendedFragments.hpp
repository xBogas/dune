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

#ifndef DUNE_NETWORK_EXTENDED_FRAGMENTS_HPP_INCLUDED_
#define DUNE_NETWORK_EXTENDED_FRAGMENTS_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/Algorithms/CRC16.hpp>
#include <DUNE/DUNE.hpp>

namespace DUNE
{
  namespace Network
  {
    namespace ExtendedFragments
    {
      //! Compute CRC16 of buffer with size bigger than 65535.
      //! @param[in] buffer buffer to compute CRC16.
      //! @param[in] len buffer length.
      //! @param[in] crc initial CRC16 value.
      //! @return CRC16 value.
      static inline size_t
      computeExtentded(const char* buffer, size_t len, size_t crc = 0)
      {
        while (len--)
          crc = (crc >> 8) ^ Algorithms::c_crc16_ibm_table[(crc ^ *buffer++) & 0xff];

        return crc;
      }

      //! Serialize vector of char.
      static inline unsigned
      extSerialize(const std::vector<char>& vec, uint8_t* bfr)
      {
        uint32_t size = vec.size();
        uint8_t* ptr = bfr;
        ptr += IMC::serialize(size, ptr);
        ptr = std::copy(vec.begin(), vec.end(), ptr);

        return ptr - bfr;
      }

      //! Deserialize vector of char.
      //! @param[in] data vector of char.
      //! @param[out] bfr buffer to deserialize.
      //! @return size of deserialized data.
      static inline size_t
      extDeserialize(std::vector<char>& data, uint8_t* bfr)
      {
        uint32_t size;
        uint16_t len = sizeof(size);
        uint8_t* ptr = bfr;

        ptr += IMC::deserialize(size, ptr, len);
        data.resize(size);
        std::copy(ptr, ptr + size, data.begin());

        return data.size() + len;
      }

      //! Splitter class.
      //! This class is used to split a message into fragments.
      class Splitter
      {
        typedef std::vector<IMC::MessagePart>::iterator iterator;
        typedef std::vector<IMC::MessagePart>::const_iterator c_iterator;

      public:
        //! Constructor.
        //! @param[in] msg message to split.
        //! @param[in] mtu maximum transmission unit.
        Splitter(const IMC::CompressedImage* msg, unsigned mtu = 65505)
        {
          uint8_t uid = Splitter::s_uid++;
          // Size of header in data vector.
          unsigned frag_hdr_size = 2 + 1 + sizeof(size_t);
          double payload_size = frag_hdr_size + msg->data.size();
          unsigned frag_size =
            mtu - (DUNE_IMC_CONST_HEADER_SIZE + frag_hdr_size + DUNE_IMC_CONST_FOOTER_SIZE);
          n_frags = ceil(payload_size / frag_size);

          Utils::ByteBuffer bb;
          bb.grow(payload_size);
          uint8_t* ptr = bb.getBuffer();

          ptr += IMC::serialize(msg->getId(), ptr);
          ptr += IMC::serialize(msg->frameid, ptr);
          ptr += extSerialize(msg->data, ptr);

          int pos = 0;
          m_fragments.reserve(n_frags);
          ptr = bb.getBuffer();
          for (uint8_t i = 0; i < n_frags; i++)
          {
            IMC::MessagePart part;
            part.uid = uid;
            part.num_frags = n_frags;
            part.frag_number = i;

            unsigned remaining = payload_size - pos;
            unsigned curr_size = std::min(remaining, frag_size);

            part.data.assign(ptr + pos, ptr + pos + curr_size);

            pos += curr_size;
            m_fragments.push_back(part);
          }
        }

        Splitter(void)
        { }

        ~Splitter(void)
        {
          m_fragments.clear();
        }

        IMC::MessagePart&
        getFragment(uint8_t frag_number)
        {
          return m_fragments[frag_number];
        }

        unsigned
        getSize(void) const
        {
          return m_fragments.size();
        }

        iterator
        begin(void)
        {
          return m_fragments.begin();
        }

        iterator
        end(void)
        {
          return m_fragments.end();
        }

        c_iterator
        begin(void) const
        {
          return m_fragments.cbegin();
        }

        c_iterator
        end(void) const
        {
          return m_fragments.cend();
        }

      private:
        //! Fragment unique identifier.
        static uint8_t s_uid;
        //! Number of fragments.
        uint8_t n_frags;
        //! Fragments.
        std::vector<IMC::MessagePart> m_fragments;
      };

      uint8_t Splitter::s_uid = 0;

      //! Combiner class.
      //! This class is used to combine fragments into a single message.
      class Combiner
      {
      public:
        Combiner(void):
          m_uid(0),
          n_frags(0),
          payload_size(0)
        { }

        //! Update the message with new fragment.
        //! @param[in] part fragment to add.
        //! @return message if all fragments are received, nullptr otherwise.
        IMC::CompressedImage*
        onMessagePart(const IMC::MessagePart* part)
        {
          if (m_uid == 0)
          {
            m_uid = part->uid;
            n_frags = part->num_frags;
          }
          else if (part->uid != m_uid)
          {
            m_uid = part->uid + 1;
            for (auto&& itr : m_fragments)
              Memory::clear(itr.second);
            m_fragments.clear();
            return nullptr;
          }

          m_fragments[part->frag_number] = part->clone();
          payload_size += part->data.size();

          if (getMissing() != 0)
            return nullptr;

          std::vector<uint8_t> data;
          data.resize(payload_size);
          auto it = data.data();
          for (auto&& itr : m_fragments)
          {
            it = std::move(itr.second->data.begin(), itr.second->data.end(), it);
            // it++;
            Memory::clear(itr.second);
          }

          IMC::CompressedImage* msg = getMessage(data);
          if (msg == nullptr)
            return nullptr;

          msg->setSource(part->getSource());
          msg->setSourceEntity(part->getSourceEntity());
          msg->setTimeStamp(part->getTimeStamp());
          msg->setDestination(part->getDestination());
          msg->setDestinationEntity(part->getDestinationEntity());

          m_uid = 0;
          payload_size = 0;
          m_fragments.clear();

          return msg;
        }

        //! Get number of missing fragments.
        unsigned
        getMissing(void)
        {
          return n_frags - m_fragments.size();
        }

      private:
        //! Construct message from fragments.
        //! @param[in] data serialized message fragments.
        //! @return message.
        IMC::CompressedImage*
        getMessage(std::vector<uint8_t>& data)
        {
          // Invalid data size
          if (data.size() < 65535)
            return nullptr;

          uint16_t msg_id = 0;
          // uint32_t -> std::vector::size() > 65535 (uint16_t)
          uint16_t header_size = sizeof(msg_id) + sizeof(uint8_t);

          uint8_t* ptr = &data[0];

          ptr += IMC::deserialize(msg_id, ptr, header_size);
          if (msg_id != DUNE_IMC_COMPRESSEDIMAGE)
            return nullptr;

          IMC::CompressedImage* cimg = new IMC::CompressedImage();
          ptr += IMC::deserialize(cimg->frameid, ptr, header_size);
          extDeserialize(cimg->data, ptr);

          return cimg;
        }

        //! Fragment unique identifier.
        uint8_t m_uid;
        //! Number of fragments.
        uint16_t n_frags;
        //! Payload size.
        size_t payload_size;
        //! Fragments.
        std::map<uint8_t, IMC::MessagePart*> m_fragments;
      };
    }
  }
}

#endif  // DUNE_NETWORK_EXTENDED_FRAGMENTS_HPP_INCLUDED_