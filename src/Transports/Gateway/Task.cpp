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

// ISO C++ 98 headers.
#include <algorithm>
#include <cstdio>
#include <map>
#include <set>
#include <sstream>
#include <stdexcept>
#include <string>
#include <unordered_map>
#include <vector>

// DUNE headers.
#include <DUNE/DUNE.hpp>

#include "Endpoint.hpp"

namespace Transports
{
  //! Generic gateway between two systems that are not on the same network.
  //! It relays discovery Announce messages across both sides and forwards
  //! IMC traffic between the systems using the remote peer's `imc+udp`
  //! service endpoint.
  namespace Gateway
  {
    using DUNE_NAMESPACES;

    struct Arguments
    {
      //! Multicast address for discovery.
      Address addr_mcast;
      //! List of messages to forward.
      std::vector<std::string> messages;
      //! Rate limiters.
      std::vector<std::string> rate_lims;
      //! Filtered entities.
      std::vector<std::string> entities_flt;
      //! Trace incoming messages.
      bool trace_in;
      //! Trace outgoing messages.
      bool trace_out;
    };

    //! Internal buffer size.
    static const int c_bfr_size = 65535;

    // TODO: Create a class to manage the routing of messages.
    //  Incoming messages from CCU's must be forward to each vehicle!
    //  Neptus should be filling the dst field of each message! (check this - would be great for
    //  routing and filtering) Messages from CCUs -> all Vehicles if dst == 0xFFFF or just to the
    //  one specified in dst. Messages from Vehicles -> all CCUs!

    // Normal operation:
    // - Vehicles listen/send announce on discovery port. Announce contains imc+udp service with
    // vehicle's UDP endpoint.
    // - CCU's upon receiving an Announce from a vehicle, learn the vehicle's system name/id and UDP
    // endpoint.
    // - Start transmitting to that UDP endpoint.

    // This tasks will interface between two system on diferent networks and forward messages
    // between them.
    // Vehicle + CCU will not have a direct connection, so the Manta will be a transparent bridge
    // between them.
    struct Task: public DUNE::Tasks::Task
    {
      //! Serialization buffer.
      uint8_t* m_bfr;
      //! Socket for sending messages.
      UDPSocket m_sock;
      //! Task arguments.
      Arguments m_args;
      //! Vehicle endpoint.
      std::unordered_map<uint16_t, Endpoint> m_vehicles;
      //! CCU endpoints by system ID.
      std::unordered_map<uint16_t, Endpoint> m_ccus;
      //! Last time we sent an announce to the vehicle.
      double m_last_announce_tx;
      //! Message filter.
      MessageFilter m_filter;
      //! Bound message consumers.
      std::map<uint16_t, AbstractConsumer*> m_consumers;
      //! Usable Network interfaces.
      std::vector<Interface> m_intf;

      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx),
        m_bfr(NULL),
        m_last_announce_tx(-1)
      {
        param("Multicast Address", m_args.addr_mcast)
          .defaultValue("224.0.75.69")
          .description("Multicast address for discovery.");

        param("Transports", m_args.messages)
          .defaultValue("")
          .description("List of IMC messages to forward to the vehicle.");

        param("Rate Limiters", m_args.rate_lims)
          .defaultValue("")
          .description("List of <Message>:<Frequency> rate limiters.");

        param("Filtered Entities", m_args.entities_flt)
          .defaultValue("")
          .description("List of <Message>:<Entity>+<Entity> source entity filters.");

        param("Print Incoming Messages", m_args.trace_in)
          .defaultValue("false")
          .description("Print incoming discovery messages (Debug).");

        param("Print Outgoing Messages", m_args.trace_out)
          .defaultValue("false")
          .description("Print outgoing forwarded messages (Debug).");

        // Allocate serialization buffer.
        m_bfr = new uint8_t[c_bfr_size];

        // Bind to Announce so we can relay local announces.
        bind<IMC::Announce>(this);
      }

      ~Task(void)
      {
        if (m_bfr != NULL)
          delete[] m_bfr;
      }

      void
      onUpdateParameters(void)
      {
        // Rebind message consumers when Transports list changes.
        if (paramChanged(m_args.messages))
        {
          std::unordered_set<uint16_t> msgs_set;
          for (const auto& msg : m_args.messages)
            msgs_set.insert(IMC::Factory::getIdFromAbbrev(msg));

          std::vector<uint16_t> removed;
          for (auto it = m_consumers.begin(); it != m_consumers.end(); ++it)
          {
            if (msgs_set.find(it->first) == msgs_set.end())
              removed.push_back(it->first);
            else
              msgs_set.erase(it->first);
          }

          for (auto id : removed)
          {
            unbind(id, m_consumers[id]);
            m_consumers.erase(id);
          }

          if (!msgs_set.empty())
          {
            std::vector<uint16_t> new_msgs(msgs_set.begin(), msgs_set.end());
            auto new_consumers = bind<Task, IMC::Message>(this, new_msgs);
            for (auto it = new_consumers.begin(); it != new_consumers.end(); ++it)
              m_consumers[it->first] = it->second;
          }
        }

        if (paramChanged(m_args.rate_lims))
        {
          for (auto& [id, ep] : m_vehicles)
            ep.filter.setupRates(m_args.rate_lims);

          for (auto& [id, ep] : m_ccus)
            ep.filter.setupRates(m_args.rate_lims);
        }

        if (paramChanged(m_args.entities_flt))
        {
          for (auto& [id, ep] : m_vehicles)
            ep.filter.setupEntities(m_args.entities_flt, this);

          for (auto& [id, ep] : m_ccus)
            ep.filter.setupEntities(m_args.entities_flt, this);
        }
      }

      void
      onResourceAcquisition(void)
      {
        // Setup outgoing socket.
        m_sock.enableBroadcast(true);

        std::vector<Interface> interfaces = Interface::get();
        for (Interface& i : interfaces)
        {
          if (i.address().isLoopback())
            continue;

          m_intf.push_back(i);

          inf(DTR("Gateway enabled on interface '%s' with address %s and netmask %s"), i.name().c_str(),
              i.address().str().c_str(), i.netmask().str().c_str());
        }

        if (m_intf.size() < 2)
        {
          cri(DTR("at least 2 non-loopback interfaces are required for operation"));
          setEntityState(IMC::EntityState::ESTA_FAULT, Status::CODE_INTERNAL_ERROR);
        }
        else
          setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
      }

      //! Parse the imc+udp service URL from an Announce's services string.
      //! @param[in] services semicolon-separated service list.
      //! @param[out] addr resolved address.
      //! @param[out] port resolved port.
      //! @return true if an imc+udp service was found.
      bool
      parseUdpService(const std::string& services, Address& addr, unsigned& port)
      {
        std::vector<std::string> list;
        String::split(services, ";", list);

        for (unsigned i = 0; i < list.size(); ++i)
        {
          if (list[i].compare(0, 10, "imc+udp://", 10) != 0)
            continue;

          // Skip loopback addresses.
          if (list[i].find("127.0.0.1") != std::string::npos)
            continue;

          char address[128] = { 0 };
          unsigned p = 0;

          if (std::sscanf(list[i].c_str(), "%*[^:]://%127[^:]:%u", address, &p) == 2)
          {
            addr = address;
            port = p;
            return true;
          }
        }

        return false;
      }

      //! Find which local interface shares a subnet with a peer address.
      //! @param[in] peer_addr the peer's IP address.
      //! @return matching interface, or a default interface if no match.
      Interface
      findInterface(const Address& peer_addr)
      {
        uint32_t peer = peer_addr.toInteger();

        std::vector<Interface>::const_iterator it =
          std::find_if(m_intf.begin(), m_intf.end(), MatchesPeerSubnet(peer));

        if (it != m_intf.end())
          return *it;

        return Interface();
      }

      //! Resolve interface index in m_intf.
      //! @param[in] face interface to resolve.
      //! @return index into m_intf, or -1 if no match.
      int
      findInterfaceIndex(const Interface& face)
      {
        std::vector<Interface>::const_iterator it =
          std::find_if(m_intf.begin(), m_intf.end(), MatchesInterfaceAddress(face));

        if (it != m_intf.end())
          return (int)std::distance(m_intf.cbegin(), it);

        return -1;
      }

      //! Rewrite imc+udp service URLs in an Announce's services string,
      //! replacing the original address with the gateway's address on the
      //! target face.
      std::string
      rewriteServices(const std::string& services, const Address& new_addr)
      {
        std::vector<std::string> list;
        String::split(services, ";", list);

        std::ostringstream result;
        for (size_t i = 0; i < list.size(); ++i)
        {
          if (i > 0)
            result << ";";

          if (list[i].compare(0, 10, "imc+udp://", 10) == 0
              && list[i].find("127.0.0.1") == std::string::npos)
          {
            char old_addr[128] = { 0 };
            unsigned port = 0;
            if (std::sscanf(list[i].c_str(), "%*[^:]://%127[^:]:%u", old_addr, &port) == 2)
            {
              result << "imc+udp://" << new_addr.str().c_str() << ":" << port;
              continue;
            }
          }

          result << list[i];
        }

        return result.str();
      }

      //! Relay an Announce to the opposite face with rewritten services.
      //! @param[in] msg original Announce from the peer.
      //! @param[in] peer_face interface where the peer lives.
      //! @param[in] disc_port discovery port to broadcast on.
      void
      relayAnnounce(const IMC::Announce* msg, const Interface& peer_face, unsigned disc_port)
      {
        if (m_intf.size() < 2)
          return;

        // todo! remove findInterfaceIndex and just pass the target face as argument to this
        // function, since we already have it in onCCUAnnounce and onVehicleAnnounce
        int peer_face_idx = findInterfaceIndex(peer_face);
        if (peer_face_idx < 0)
          return;

        // Pick the opposite face.
        int relay_face = (peer_face_idx == 0) ? 1 : 0;
        const Interface& target = m_intf[relay_face];

        IMC::Announce relay(*msg);
        relay.services = rewriteServices(msg->services, target.address());

        uint16_t len;
        try
        {
          len = IMC::Packet::serialize(&relay, m_bfr, c_bfr_size);
        }
        catch (const std::exception& e)
        {
          war(DTR("failed to serialize relayed Announce: %s"), e.what());
          return;
        }

        try
        {
          m_sock.write(m_bfr, len, target.broadcast(), disc_port);
        }
        catch (const std::exception& e)
        {
          war(DTR("failed to relay Announce to %s: %s"), target.broadcast().str().c_str(),
              e.what());
          return;
        }

        if (m_args.trace_out)
          inf(DTR("relayed announce '%s' to face %d (%s)"), msg->sys_name.c_str(), relay_face,
              target.address().str().c_str());
      }

      //! Handle Announce messages received on the discovery socket.
      void
      handleAnnounce(const IMC::Announce* msg)
      {
        if (m_ctx.resolver.isUnknown(msg->getSource()))
        {
          inf(DTR("discovered '%s' / %u"), msg->sys_name.c_str(), msg->getSource());
          m_ctx.resolver.insert(msg->sys_name, msg->getSource());
        }

        Address udp_addr;
        unsigned udp_port = 0;

        if (!parseUdpService(msg->services, udp_addr, udp_port))
          return;

        Interface face = findInterface(udp_addr);
        if (findInterfaceIndex(face) < 0)
        {
          war(DTR("cannot match '%s' (%s) to any local interface"), msg->sys_name.c_str(),
              udp_addr.str().c_str());
          return;
        }

        if (m_ctx.resolver.isCCU(msg->getSource()))
          onCCUAnnounce(msg, udp_addr, udp_port, face);
        else
          onVehicleAnnounce(msg, udp_addr, udp_port, face);

        relayAnnounce(msg, face, 30100);

        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
      }

      void
      onCCUAnnounce(const IMC::Announce* msg, Address& udp_addr, unsigned udp_port,
                    const Interface& face)
      {
        auto itr = m_ccus.find(msg->getSource());
        if (itr != m_ccus.end())
        {
          Endpoint& ep = itr->second;
          bool changed = (ep.udp_addr != udp_addr) || (ep.udp_port != udp_port);
          ep.udp_addr = udp_addr;
          ep.udp_port = udp_port;
          ep.intf = face;
          if (changed)
            inf(DTR("ccu updated: '%s' at %s:%u (face %s)"), msg->sys_name.c_str(),
                udp_addr.c_str(), udp_port, face.name().c_str());
          return;
        }

        inf(DTR("ccu resolved: '%s' at %s:%u (face %s)"), msg->sys_name.c_str(), udp_addr.c_str(),
            udp_port, face.name().c_str());

        Endpoint ep;
        ep.name = msg->sys_name;
        ep.id = msg->getSource();
        ep.udp_addr = udp_addr;
        ep.udp_port = udp_port;
        ep.intf = face;
        m_ccus[msg->getSource()] = ep;
      }

      void
      onVehicleAnnounce(const IMC::Announce* msg, Address& udp_addr, unsigned udp_port,
                        const Interface& face)
      {
        auto itr = m_vehicles.find(msg->getSource());
        if (itr != m_vehicles.end())
        {
          Endpoint& ep = itr->second;
          bool changed = (ep.udp_addr != udp_addr) || (ep.udp_port != udp_port);
          ep.udp_addr = udp_addr;
          ep.udp_port = udp_port;
          ep.intf = face;
          if (changed)
            inf(DTR("vehicle updated: '%s' at %s:%u (face %s)"), msg->sys_name.c_str(),
                udp_addr.c_str(), udp_port, face.name().c_str());
          return;
        }

        inf(DTR("vehicle resolved: '%s' at %s:%u (face %s)"), msg->sys_name.c_str(),
            udp_addr.c_str(), udp_port, face.name().c_str());

        Endpoint ep;
        ep.name = msg->sys_name;
        ep.id = msg->getSource();
        ep.udp_addr = udp_addr;
        ep.udp_port = udp_port;
        ep.intf = face;
        m_vehicles[msg->getSource()] = ep;
      }

      //! Relay our own Announce to all faces so peers on both networks see us.
      void
      relayOwnAnnounce(const IMC::Announce* msg)
      {
        uint16_t len;
        try
        {
          len = IMC::Packet::serialize(msg, m_bfr, c_bfr_size);
        }
        catch (const std::exception& e)
        {
          war(DTR("failed to serialize own Announce: %s"), e.what());
          return;
        }

        for (size_t i = 0; i < m_intf.size(); ++i)
        {
          try
          {
            m_sock.write(m_bfr, len, m_intf[i].broadcast(), 30100);
          }
          catch (const std::exception& e)
          {
            war(DTR("failed to broadcast own Announce on face %d: %s"), (int)i, e.what());
          }
        }

        m_last_announce_tx = Clock::get();
      }

      //! Consume Announce messages from the local bus.
      void
      consume(const IMC::Announce* msg)
      {
        // Relay our own announce to the vehicle's discovery port.
        if (msg->getSource() == getSystemId())
          relayOwnAnnounce(msg);
        else
          handleAnnounce(msg);
      }

      //! Consume all other bound messages and forward to the vehicle.
      void
      consume(const IMC::Message* msg)
      {
        //  Only forward messages from OUTSIDE this system.
        if (msg->getSource() == getSystemId())
          return;

        uint16_t src = msg->getSource();
        if (m_vehicles.find(src) == m_vehicles.end())
          forwardTo(msg, m_vehicles);
        else
          forwardTo(msg, m_ccus);
      }

      void
      forwardTo(const IMC::Message* msg, const std::unordered_map<uint16_t, Endpoint>& m_map)
      {
        uint16_t rv;
        try
        {
          rv = IMC::Packet::serialize(msg, m_bfr, c_bfr_size);
        }
        catch (const std::exception& e)
        {
          war(DTR("failed to serialize %s: %s"), msg->getName(), e.what());
          return;
        }

        for (const auto& [id, ccu] : m_map)
        {
          // Send to the CCU's transports.udp port.
          try
          {
            m_sock.write(m_bfr, rv, ccu.udp_addr, ccu.udp_port);
          }
          catch (std::exception& e)
          {
            debug(DTR("failed to forward %s to '%s': %s"), msg->getName(), ccu.name.c_str(),
                  e.what());
          }
          catch (...)
          {
            debug(DTR("failed to forward %s to '%s': unknown error"), msg->getName(),
                  ccu.name.c_str());
          }
        }
      }

      void
      onMain(void)
      {
        while (!stopping())
        {
          // Process internal bus messages.
          consumeMessages();
        }
      }
    };
  }
}

DUNE_TASK