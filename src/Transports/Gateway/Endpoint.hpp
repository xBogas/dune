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

#include <DUNE/Network/Address.hpp>
#include <DUNE/Network/Interface.hpp>
#include <DUNE/Tasks/MessageFilter.hpp>

namespace Transports
{
  namespace Gateway
  {
    using namespace DUNE::Network;
    using namespace DUNE::Tasks;

    //! Endpoint.
    struct Endpoint
    {
      //! Vehicle system name.
      std::string name;
      //! Vehicle system ID.
      unsigned id;
      //! UDP transport address.
      Address udp_addr;
      //! UDP transport port.
      unsigned udp_port;
      //! Interface through which the endpoint is reachable.
      Interface intf;
      //! Last announce timestamp.
      double last_announce;
      //! Message filter for this endpoint.
      MessageFilter filter;

      Endpoint(void):
        id(0),
        udp_port(0),
        intf(),
        last_announce(-1)
      { }
    };

    //! Predicate: true if interface shares subnet with peer IPv4 address.
    struct MatchesPeerSubnet
    {
      explicit MatchesPeerSubnet(uint32_t peer_addr):
        peer(peer_addr)
      { }

      bool
      operator()(const Interface& face) const
      {
        uint32_t addr = face.address().toInteger();
        uint32_t bcast = face.broadcast().toInteger();

        // For CIDR IPv4 networks, broadcast ends with a contiguous run
        // of 1 bits in the host portion.
        uint32_t host_mask = 0;
        while (bcast & 1U)
        {
          host_mask = (host_mask << 1U) | 1U;
          bcast >>= 1U;
        }

        uint32_t netmask = ~host_mask;
        return (peer & netmask) == (addr & netmask);
      }

      uint32_t peer;
    };

    //! Predicate: true if interface has same IPv4 address as target.
    struct MatchesInterfaceAddress
    {
      explicit MatchesInterfaceAddress(const Interface& target_face):
        target(target_face)
      { }

      bool
      operator()(const Interface& face) const
      {
        return face.address() == target.address();
      }

      const Interface& target;
    };
  }
}
