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
// Author: Ricardo Martins                                                  *
//***************************************************************************
// Automatically generated.                                                 *
//***************************************************************************
// IMC XML MD5: ed119357debb643394dcc65c38e4c9c1                            *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

using DUNE_NAMESPACES;

#include "Test.hpp"

int
main(void)
{
  Test test("IMC Serialization/Deserialization");

  {
    IMC::EntityState msg;
    msg.setTimeStamp(0.6334355843700052);
    msg.setSource(3149U);
    msg.setSourceEntity(13U);
    msg.setDestination(27483U);
    msg.setDestinationEntity(39U);
    msg.state = 229U;
    msg.flags = 209U;
    msg.description.assign("ZWUEHZSMLYNOOHVDNQWFPQBKSNNXHHTTSAQFBCVHOUPRRADYLJISXLPJHSZUDWJHQRQEFIYNLXEPWXIDFIVSKOGCDNYMWILJMZZYGCXMYEQAHMCUCAFGPAFKL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityState msg;
    msg.setTimeStamp(0.22171760484629943);
    msg.setSource(44813U);
    msg.setSourceEntity(217U);
    msg.setDestination(22836U);
    msg.setDestinationEntity(63U);
    msg.state = 237U;
    msg.flags = 222U;
    msg.description.assign("QUFWRJKFPEYURXQDTLFZIHZMWOBEGVXOLNRQPFSNFDNTIGODQMOPAABLHVEAKUFMIJCEEBN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityState msg;
    msg.setTimeStamp(0.64785729937696);
    msg.setSource(4460U);
    msg.setSourceEntity(13U);
    msg.setDestination(59017U);
    msg.setDestinationEntity(118U);
    msg.state = 85U;
    msg.flags = 11U;
    msg.description.assign("QCZXWKYRQGADNAWUPHWYLCIIKFNVMVFSPAHLUUOXEBJNLSQKNLEY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityState msg;
    msg.setTimeStamp(0.8146498575362899);
    msg.setSource(11304U);
    msg.setSourceEntity(245U);
    msg.setDestination(39031U);
    msg.setDestinationEntity(56U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityState msg;
    msg.setTimeStamp(0.165701760982915);
    msg.setSource(39419U);
    msg.setSourceEntity(128U);
    msg.setDestination(60892U);
    msg.setDestinationEntity(52U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityState msg;
    msg.setTimeStamp(0.04717632416226736);
    msg.setSource(48960U);
    msg.setSourceEntity(135U);
    msg.setDestination(31013U);
    msg.setDestinationEntity(85U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityInfo msg;
    msg.setTimeStamp(0.8195965506100227);
    msg.setSource(4466U);
    msg.setSourceEntity(90U);
    msg.setDestination(14798U);
    msg.setDestinationEntity(8U);
    msg.id = 47U;
    msg.label.assign("EGWITEEGASZZVZOUXLDQFMBMHCHPVSALGNQILNFNIMDPTKAZGCBKYMLKQZHPQBXFTXIVEVSZGEBRBSFLRJXJHXFQVBBUTWBDRUVF");
    msg.component.assign("SOWKUGNIYPZJIGQDQVOALATIOEEHAQROHULBEBUKWFCDPCICMJJDPTMXDFSWKXTBICGFLSMRYRMTIJQBVXZNGTYVPHLLBEKCNPHNMWAXBTUEPGUEBZCVQVXHUWMMPDDNHYNRWBSDAUXWOQRDEO");
    msg.act_time = 42124U;
    msg.deact_time = 55035U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityInfo #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityInfo msg;
    msg.setTimeStamp(0.5038711079764586);
    msg.setSource(34706U);
    msg.setSourceEntity(221U);
    msg.setDestination(43023U);
    msg.setDestinationEntity(73U);
    msg.id = 91U;
    msg.label.assign("ODHDZWZYTQGPCCRKLTKAXCRHQETZONMFZXBMKMZSKUPTEQRFGBALZJPEQPDGAKVIPCIYQOIPQSHULXXPTKWVCSHJRXIRMFWINASJWOUHCTRYOKVUGFCDYRQDOEIHAHSNVCFGOPXXPFMUDXYMEVEDWZ");
    msg.component.assign("ZZFKKUIBBIWWVJRRKXZTFHVWGYVOXGOTAHSCWOWNZFCXUZDDRQQRDBAUUIJHVPALHABJWUICYVTJCPLWQLTIYBYBFSKCYKROJSLMAOSREYQXKPMNUBGWNRSKXFENOLDMNDVCQIXFRKDAAPZNPMMLEGPJLPSVHTCXLQ");
    msg.act_time = 21880U;
    msg.deact_time = 26903U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityInfo #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityInfo msg;
    msg.setTimeStamp(0.861410671183337);
    msg.setSource(39500U);
    msg.setSourceEntity(200U);
    msg.setDestination(7325U);
    msg.setDestinationEntity(69U);
    msg.id = 132U;
    msg.label.assign("FQVPPYMOROALLJCWSOEBMKPP");
    msg.component.assign("OLNKAQIVVUSNFJQGDUAZFUQUWHEAHQQIXNOMXBDBXMGEHTFYWKRFJOOLPHUWDPDVGVTBYR");
    msg.act_time = 56498U;
    msg.deact_time = 18154U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityInfo #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityInfo msg;
    msg.setTimeStamp(0.11628960655610177);
    msg.setSource(38406U);
    msg.setSourceEntity(118U);
    msg.setDestination(60979U);
    msg.setDestinationEntity(143U);
    msg.id = 149U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityInfo #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityInfo msg;
    msg.setTimeStamp(0.7595341619697599);
    msg.setSource(21648U);
    msg.setSourceEntity(44U);
    msg.setDestination(38073U);
    msg.setDestinationEntity(42U);
    msg.id = 26U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityInfo #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityInfo msg;
    msg.setTimeStamp(0.39284714458432735);
    msg.setSource(52586U);
    msg.setSourceEntity(113U);
    msg.setDestination(2279U);
    msg.setDestinationEntity(129U);
    msg.id = 59U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityInfo #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityList msg;
    msg.setTimeStamp(0.18702878111713328);
    msg.setSource(3286U);
    msg.setSourceEntity(84U);
    msg.setDestination(12657U);
    msg.setDestinationEntity(194U);
    msg.op = 119U;
    msg.list.assign("YBWSVKHPYCQNDRNXMCLUFIJZGVMAEQPLQGPGKTCTDWLCYFXJOQKEJBMZSOREEEZINKPLCKIKXXXJNMLAVWISRANHQVBYBDQGFCURABZTWHWIXRDGDXJSJIPZUVQMQNBCGHNTFPLRTIPUKNIFBUSXVOHLEMOJWGJGFTAAVYFTSVDYRUSOFWUPUNREEMDLLMOZKTDLHABAAEKXOPYMZGGFWHOZYKBNOYWOCTCJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityList #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityList msg;
    msg.setTimeStamp(0.9883427034644275);
    msg.setSource(65074U);
    msg.setSourceEntity(110U);
    msg.setDestination(43820U);
    msg.setDestinationEntity(59U);
    msg.op = 55U;
    msg.list.assign("BCEEZKCFLXZURFYBQUJIOPYVNQHYAQKPRXZRVXMIJFVVPEPOWAXEKTFSKVDAHPYZJRFEXWSRVYNJWEBFMQBGISNMYUUESGPDGSIRLYZHTBINHUZEMYIPMOTBCUACOTUHSVJRINVCFGOCKGADRZJSXDVWWLOBDJNDUNLGBQPNBOHWH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityList #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityList msg;
    msg.setTimeStamp(0.30420443177772827);
    msg.setSource(16033U);
    msg.setSourceEntity(221U);
    msg.setDestination(65405U);
    msg.setDestinationEntity(197U);
    msg.op = 127U;
    msg.list.assign("WKQSDFSHBZHILZYIKPOYBFJDFGEDATHDVOVDXCZPWLMKCJFKHEHQEQQRKBUKNSAZBCUFEMP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityList #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CpuUsage msg;
    msg.setTimeStamp(0.20016720457308657);
    msg.setSource(58199U);
    msg.setSourceEntity(173U);
    msg.setDestination(44844U);
    msg.setDestinationEntity(232U);
    msg.value = 51U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CpuUsage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CpuUsage msg;
    msg.setTimeStamp(0.26723191528723045);
    msg.setSource(51159U);
    msg.setSourceEntity(103U);
    msg.setDestination(18924U);
    msg.setDestinationEntity(237U);
    msg.value = 46U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CpuUsage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CpuUsage msg;
    msg.setTimeStamp(0.49656409392885437);
    msg.setSource(26785U);
    msg.setSourceEntity(231U);
    msg.setDestination(1873U);
    msg.setDestinationEntity(204U);
    msg.value = 176U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CpuUsage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransportBindings msg;
    msg.setTimeStamp(0.7924690633931685);
    msg.setSource(2383U);
    msg.setSourceEntity(35U);
    msg.setDestination(59662U);
    msg.setDestinationEntity(200U);
    msg.consumer.assign("RAVUZMYXLQGQUDVOWITBURPMTPOKPIWOWICQFEYKCTCKIZUQEEHIXFGMHGATUABJWEOXGXIJCCVGQWEVSVIAVLYWSVWMWRKNFNNKAM");
    msg.message_id = 41020U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransportBindings #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransportBindings msg;
    msg.setTimeStamp(0.28936863670337976);
    msg.setSource(19078U);
    msg.setSourceEntity(14U);
    msg.setDestination(22823U);
    msg.setDestinationEntity(73U);
    msg.consumer.assign("WSHJAMAAAYIIERVVFGITWKZJZWCNHIFOILXRDYXUPFRPLBBDUFNZGGHYOIJVAAKGCJDKMUSUJXJAECTOHRFUVFQYMGTSPLLOLLXPDWHBSNPSCMNPGWXLPYEKRBNIJXSYQYQWOOZN");
    msg.message_id = 13845U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransportBindings #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransportBindings msg;
    msg.setTimeStamp(0.9374544217026943);
    msg.setSource(26893U);
    msg.setSourceEntity(249U);
    msg.setDestination(14134U);
    msg.setDestinationEntity(181U);
    msg.consumer.assign("YZZCBRODQWTCAQSFZUXNMVGGKADWGABYOGARXAPPOMUZYESKENCLCDMRMNIYBDQCWLFBDEYIVIVKTUSRIAQTUFEGEPJDKPURPUIRSJTTODWWALYCCIEVYSNFVWLTHFOOEJUZWAVSMQUZMNHQSBPXSHRRFELZNOMUINMKHKELLQNTQTPLJHHGKDVJBDENJQICIFVAZBXSMBRLFZHYXIFLRWXXCXBHVPHAKQGJPGTXVFWKHJWOZBKJ");
    msg.message_id = 9367U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransportBindings #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RestartSystem msg;
    msg.setTimeStamp(0.030430012309350385);
    msg.setSource(16200U);
    msg.setSourceEntity(111U);
    msg.setDestination(50968U);
    msg.setDestinationEntity(242U);
    msg.type = 75U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RestartSystem #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RestartSystem msg;
    msg.setTimeStamp(0.0769045099584329);
    msg.setSource(52813U);
    msg.setSourceEntity(77U);
    msg.setDestination(51941U);
    msg.setDestinationEntity(128U);
    msg.type = 232U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RestartSystem #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RestartSystem msg;
    msg.setTimeStamp(0.1332746596968618);
    msg.setSource(22720U);
    msg.setSourceEntity(124U);
    msg.setDestination(37301U);
    msg.setDestinationEntity(189U);
    msg.type = 137U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RestartSystem #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationControl msg;
    msg.setTimeStamp(0.5298285148428685);
    msg.setSource(21931U);
    msg.setSourceEntity(29U);
    msg.setDestination(61850U);
    msg.setDestinationEntity(251U);
    msg.op = 148U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationControl msg;
    msg.setTimeStamp(0.08285408559330998);
    msg.setSource(56737U);
    msg.setSourceEntity(52U);
    msg.setDestination(44778U);
    msg.setDestinationEntity(13U);
    msg.op = 133U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationControl msg;
    msg.setTimeStamp(0.14888860542320426);
    msg.setSource(60904U);
    msg.setSourceEntity(103U);
    msg.setDestination(40436U);
    msg.setDestinationEntity(209U);
    msg.op = 221U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationState msg;
    msg.setTimeStamp(0.4136270826548569);
    msg.setSource(47444U);
    msg.setSourceEntity(254U);
    msg.setDestination(33275U);
    msg.setDestinationEntity(125U);
    msg.total_steps = 187U;
    msg.step_number = 103U;
    msg.step.assign("EHCELYYPBIWKKGVPKNZCUADJSJNHPWMHYABOGFDKBSNVUAIZCRUTKFQLXZZQATTQOHCBQTQHJJKQLCXYTUGOBQHBZEORPEDOTEAZOGKLZA");
    msg.flags = 218U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationState msg;
    msg.setTimeStamp(0.2214171341388954);
    msg.setSource(64581U);
    msg.setSourceEntity(56U);
    msg.setDestination(22845U);
    msg.setDestinationEntity(181U);
    msg.total_steps = 35U;
    msg.step_number = 35U;
    msg.step.assign("TSPOCMMZWRNZDVGDTRZKEWHOFLLDYXTWYKTETBAHJPELJGV");
    msg.flags = 244U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationState msg;
    msg.setTimeStamp(0.22053153184730434);
    msg.setSource(23021U);
    msg.setSourceEntity(179U);
    msg.setDestination(46100U);
    msg.setDestinationEntity(59U);
    msg.total_steps = 101U;
    msg.step_number = 132U;
    msg.step.assign("UGZDGBPXDQTGSEETPFWUJRYYQ");
    msg.flags = 66U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityActivationState msg;
    msg.setTimeStamp(0.4430374806149677);
    msg.setSource(23354U);
    msg.setSourceEntity(241U);
    msg.setDestination(20476U);
    msg.setDestinationEntity(214U);
    msg.state = 4U;
    msg.error.assign("EXSIYSOLHTCVUSGUBYBVWQYUFECCWLJJWYFJAJNXPSFZFRBDLKBNFIBGTOSKQCRZVC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityActivationState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityActivationState msg;
    msg.setTimeStamp(0.40143557665052043);
    msg.setSource(17146U);
    msg.setSourceEntity(227U);
    msg.setDestination(56877U);
    msg.setDestinationEntity(111U);
    msg.state = 103U;
    msg.error.assign("CFZQDPSCSOZBLCVJYIPBIYKSCOEYSSFDRIUZBIYAQUKJOWUUYMBTCPJKHTDMIMQNCISTVRKYVJNVXPYGDTZAGFTQJAUKRJSPPENXSPWZWEQXCCDGZEOALFZIHFLHBONS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityActivationState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityActivationState msg;
    msg.setTimeStamp(0.2588391771489462);
    msg.setSource(50525U);
    msg.setSourceEntity(75U);
    msg.setDestination(11001U);
    msg.setDestinationEntity(102U);
    msg.state = 102U;
    msg.error.assign("KGTFETWKUYUSDVPVGXQYNJWNBGJVMKPIUTALOBKYEOVTLHLUWQCREXXCDXMSQSOEBUIQBEBQGCAWICUZRLHOFIIKOWQGQYCVGSHDZINTSPGCSVAAEXDOZVPDFJTRZYLDPLSOZQMYIXCNSHGRAWVWBRRHMONN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityActivationState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityActivationState msg;
    msg.setTimeStamp(0.17855675111858305);
    msg.setSource(12024U);
    msg.setSourceEntity(145U);
    msg.setDestination(34486U);
    msg.setDestinationEntity(175U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityActivationState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityActivationState msg;
    msg.setTimeStamp(0.21495328277901093);
    msg.setSource(48634U);
    msg.setSourceEntity(197U);
    msg.setDestination(61271U);
    msg.setDestinationEntity(215U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityActivationState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityActivationState msg;
    msg.setTimeStamp(0.2728335919116903);
    msg.setSource(59893U);
    msg.setSourceEntity(43U);
    msg.setDestination(46322U);
    msg.setDestinationEntity(141U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityActivationState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleOperationalLimits msg;
    msg.setTimeStamp(0.5332118410457642);
    msg.setSource(31549U);
    msg.setSourceEntity(213U);
    msg.setDestination(12578U);
    msg.setDestinationEntity(231U);
    msg.op = 82U;
    msg.speed_min = 0.045502479591537526;
    msg.speed_max = 0.48898201397149166;
    msg.long_accel = 0.45916161523508203;
    msg.alt_max_msl = 0.6868331419092694;
    msg.dive_fraction_max = 0.05879323586426921;
    msg.climb_fraction_max = 0.07150286691971319;
    msg.bank_max = 0.31811860101034994;
    msg.p_max = 0.4073793085042785;
    msg.pitch_min = 0.6970382474514535;
    msg.pitch_max = 0.06119631180407292;
    msg.q_max = 0.5279815528441941;
    msg.g_min = 0.5489495102564763;
    msg.g_max = 0.2656030927783861;
    msg.g_lat_max = 0.9678592989326611;
    msg.rpm_min = 0.5896109414245658;
    msg.rpm_max = 0.8698085758286002;
    msg.rpm_rate_max = 0.7499000324360061;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleOperationalLimits #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleOperationalLimits msg;
    msg.setTimeStamp(0.6112778011430656);
    msg.setSource(57757U);
    msg.setSourceEntity(107U);
    msg.setDestination(7473U);
    msg.setDestinationEntity(247U);
    msg.op = 43U;
    msg.speed_min = 0.2723213545495269;
    msg.speed_max = 0.9121398287810918;
    msg.long_accel = 0.7786725596421932;
    msg.alt_max_msl = 0.6331869273075912;
    msg.dive_fraction_max = 0.9492968651220539;
    msg.climb_fraction_max = 0.2726623751560211;
    msg.bank_max = 0.6091881309465668;
    msg.p_max = 0.9285698728335674;
    msg.pitch_min = 0.37286599705131374;
    msg.pitch_max = 0.7624382041818061;
    msg.q_max = 0.15646145837756387;
    msg.g_min = 0.9514634503634418;
    msg.g_max = 0.2803135013693979;
    msg.g_lat_max = 0.8153796145021767;
    msg.rpm_min = 0.44310629930611534;
    msg.rpm_max = 0.859788527991413;
    msg.rpm_rate_max = 0.8766981084711511;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleOperationalLimits #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleOperationalLimits msg;
    msg.setTimeStamp(0.7548995685071184);
    msg.setSource(30908U);
    msg.setSourceEntity(47U);
    msg.setDestination(30630U);
    msg.setDestinationEntity(91U);
    msg.op = 5U;
    msg.speed_min = 0.55085841928042;
    msg.speed_max = 0.23699494524088627;
    msg.long_accel = 0.5272509486803314;
    msg.alt_max_msl = 0.2716424614227554;
    msg.dive_fraction_max = 0.8122541847555825;
    msg.climb_fraction_max = 0.6214380686720988;
    msg.bank_max = 0.49209344307994585;
    msg.p_max = 0.5784220114756116;
    msg.pitch_min = 0.7376963422149969;
    msg.pitch_max = 0.1979746594116092;
    msg.q_max = 0.40278260084432793;
    msg.g_min = 0.01857896163208339;
    msg.g_max = 0.9217678654945698;
    msg.g_lat_max = 0.42234133348818104;
    msg.rpm_min = 0.5390698439321535;
    msg.rpm_max = 0.6953418459279403;
    msg.rpm_rate_max = 0.7599899038904451;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleOperationalLimits #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MsgList msg;
    msg.setTimeStamp(0.1850231117904506);
    msg.setSource(9018U);
    msg.setSourceEntity(191U);
    msg.setDestination(6805U);
    msg.setDestinationEntity(193U);
    IMC::IndicatedSpeed tmp_msg_0;
    tmp_msg_0.value = 0.09583291194300181;
    msg.msgs.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MsgList #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MsgList msg;
    msg.setTimeStamp(0.3624692697389017);
    msg.setSource(51411U);
    msg.setSourceEntity(35U);
    msg.setDestination(2664U);
    msg.setDestinationEntity(178U);
    IMC::ExtendedRSSI tmp_msg_0;
    tmp_msg_0.value = 0.04398639547666772;
    tmp_msg_0.units = 232U;
    msg.msgs.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MsgList #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MsgList msg;
    msg.setTimeStamp(0.8938234599776665);
    msg.setSource(15840U);
    msg.setSourceEntity(187U);
    msg.setDestination(60870U);
    msg.setDestinationEntity(69U);
    IMC::EntityState tmp_msg_0;
    tmp_msg_0.state = 245U;
    tmp_msg_0.flags = 253U;
    tmp_msg_0.description.assign("IZVSPYIFHYUBMAXWJHTKTHWVLXRBLIZSSBZWUQTUUJQJPAJEYLYUZSCQSAHMZZIHWBCUJLZPDINLCTVOIEQGJEHFNFDWVHFWEXLOMZXCOXRMPFIGRBKLKSMYOXANFFMHTCNFGLRTKD");
    msg.msgs.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MsgList #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SimulatedState msg;
    msg.setTimeStamp(0.1750940520031411);
    msg.setSource(14318U);
    msg.setSourceEntity(167U);
    msg.setDestination(10140U);
    msg.setDestinationEntity(170U);
    msg.lat = 0.8783394934765827;
    msg.lon = 0.46438882956446426;
    msg.height = 0.34343542164429597;
    msg.x = 0.5308392469657505;
    msg.y = 0.8626591157264849;
    msg.z = 0.042741029813857745;
    msg.phi = 0.9163261396831087;
    msg.theta = 0.1819978560947103;
    msg.psi = 0.5938599479447547;
    msg.u = 0.05399813863232439;
    msg.v = 0.5024755946460857;
    msg.w = 0.9564678244654763;
    msg.p = 0.7222899400246034;
    msg.q = 0.10940826785481317;
    msg.r = 0.08218880965197917;
    msg.svx = 0.17837708455038292;
    msg.svy = 0.23391316246242944;
    msg.svz = 0.8475890815502295;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SimulatedState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SimulatedState msg;
    msg.setTimeStamp(0.9519905851627805);
    msg.setSource(16083U);
    msg.setSourceEntity(150U);
    msg.setDestination(6604U);
    msg.setDestinationEntity(154U);
    msg.lat = 0.8846773140839042;
    msg.lon = 0.6229961092216012;
    msg.height = 0.25956708848284515;
    msg.x = 0.6137108286590586;
    msg.y = 0.8209960021718669;
    msg.z = 0.9674057704777322;
    msg.phi = 0.9338031178602891;
    msg.theta = 0.157715840928213;
    msg.psi = 0.36880803370494075;
    msg.u = 0.09396285339792154;
    msg.v = 0.04731351034010578;
    msg.w = 0.21629762483886217;
    msg.p = 0.50655101522885;
    msg.q = 0.3596221473591251;
    msg.r = 0.009703636448587849;
    msg.svx = 0.3988990194162976;
    msg.svy = 0.45490958569450335;
    msg.svz = 0.4420185448899572;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SimulatedState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SimulatedState msg;
    msg.setTimeStamp(0.7057364173500358);
    msg.setSource(38490U);
    msg.setSourceEntity(193U);
    msg.setDestination(58764U);
    msg.setDestinationEntity(63U);
    msg.lat = 0.635279571393617;
    msg.lon = 0.7740036956425925;
    msg.height = 0.7762537703331167;
    msg.x = 0.3328173955437106;
    msg.y = 0.052542749513806664;
    msg.z = 0.9704521491149348;
    msg.phi = 0.7295627784334037;
    msg.theta = 0.3889726395317744;
    msg.psi = 0.800541533000204;
    msg.u = 0.7160531257889582;
    msg.v = 0.7834893287604878;
    msg.w = 0.40387957637917604;
    msg.p = 0.13298837857581958;
    msg.q = 0.46770699305283936;
    msg.r = 0.9516302380119476;
    msg.svx = 0.28633663856853797;
    msg.svy = 0.9025391001039631;
    msg.svz = 0.5279858001188008;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SimulatedState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeakSimulation msg;
    msg.setTimeStamp(0.003377474164999339);
    msg.setSource(61933U);
    msg.setSourceEntity(44U);
    msg.setDestination(28009U);
    msg.setDestinationEntity(196U);
    msg.op = 95U;
    msg.entities.assign("REDHPAXKUBNNPODBQIUSGCCDGOGTBQWOPFLXHWVXPNMFQWEYRHIKYSILUAEWYFR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeakSimulation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeakSimulation msg;
    msg.setTimeStamp(0.7195271463097482);
    msg.setSource(18908U);
    msg.setSourceEntity(131U);
    msg.setDestination(26919U);
    msg.setDestinationEntity(62U);
    msg.op = 38U;
    msg.entities.assign("PFRMPLHVDAVTUBAZBRGUFJCOIVOXZRSEFIUIMISHQMJWKRLPCLUXWTATSSYSFUWXYRAMJUKTTBYWCGCMDPJHGQOBXQGPTIGWKMCWDUIMWXUZGEQFWDQXFYZKRBLXEVYZRCQEPEOHRKOKAQQVSBIHEKXHXOWIEEBKDPILGCLCAHSFVSSADDNNYWJNXMNTPFRUGOCFJOLEMZPNASTNLDLVBNMFAJTZPADJYGBVNYOYHKKZOVN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeakSimulation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeakSimulation msg;
    msg.setTimeStamp(0.3729940306138072);
    msg.setSource(12503U);
    msg.setSourceEntity(164U);
    msg.setDestination(47483U);
    msg.setDestinationEntity(183U);
    msg.op = 66U;
    msg.entities.assign("KOULALTUJDPCEQHVUIHVVDRGZCXNWRPSLKYVEBOMAGTKDOSWWXLGCBUGZIHNRUIAPEFDPHJEGWCRHSMBCDPPFYHOMMJXLFEIKJVBHASUDXOMIBBDXTYQSWLITQDRHHFZSQQQMJNQXPRLOINSIGWZYIEAZSFUPKHVTJUXRALPYBWKWEJFPBFOWRYQEOMEMAXLVSN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeakSimulation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UASimulation msg;
    msg.setTimeStamp(0.10164704321330975);
    msg.setSource(56724U);
    msg.setSourceEntity(204U);
    msg.setDestination(18641U);
    msg.setDestinationEntity(181U);
    msg.type = 70U;
    msg.speed = 22512U;
    const signed char tmp_msg_0[] = {-102, 16, 57, 80, -10, 102, 113, -60, -128, 89, 34, -108, -125, 111, -127, -18, 9, -107, -37, 56, 53, -6, -1, -112, -63, -26, -12, -35, -78, -5, 43, 115, 111, 79, 7, -43, -104, -43, -12, 106, -7, -36, 93, -114, -99, 105, 54, -39, 46, -59, 118, 10, 7, 99, 16, 79, 106, 19, -81, 61, -102, 90, -21, -76, -83, 108, -41, -105, -127, -98, 72, -99, -77, -13, 100, 78, -95, 26, 63, 48, 12, 125, -100, 18, -12, -127, -89, -8, 110, -127, 87, -68, -109, -73, -107, -95, 101, -14, -36, 66, -6, 80, -83, 100, -75, -93, 71, 88, -73, 89, 63, -15, 67, -90, -92, 8, -77, 105, -66, -34, 38, 34, -64, 12, 82, -98, 108, 55, -1, -6, 54, 117, -7, -31, 74, 123, -126, -101, 92, -10, -64, 98, -118, 119, 111, -62, 69, -26, -55, -107, -116, 87, 72, -118, -7, -81, 95, -79, -35, -108, 67, 53, 106, -125, -62, 97, 21, -97};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UASimulation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UASimulation msg;
    msg.setTimeStamp(0.7997515691270529);
    msg.setSource(18311U);
    msg.setSourceEntity(226U);
    msg.setDestination(63700U);
    msg.setDestinationEntity(132U);
    msg.type = 165U;
    msg.speed = 34978U;
    const signed char tmp_msg_0[] = {97, 105, -101, -60, 42, -111, 56, 122, -12, -126, 22, -79, -89, -37, 94, -75, 92, 19, 116, 97, -102, 92, -54, -30, 120, -17, 35, -121, -119, 83, -90, 124, -48, -21, -2, 3, -80, -88, -86, -97, -101, 39, -55, -88, -65, 109, -45, -91, 60, -91, 17, 13, 61, -40, 20, 93, -77, 46, -87, 46, 119, 54, -1, 96, 121, -84, -89, -10, -86, -65, 77, 95, 97, 85, -47, 14, -127, -35, -124, 46, 91, -92, 109, -123, -12, 52, 99, 47, 114, 76, -122, -53, -124, 125, 117, -42, 81, -61, 35, -80, 20, 11, 18, 15, -127, -74, -21, -91, 102, 27, -96, 119, -82, 110, -24, -3, -51, 65, 51, -82, -48, 112, 38, -38, -122, -62, 94, 27, -48, -7, 114, 44, 13, 120, -57, 60, 84, -17, 111, 35, -5, 53, -14, -43, 92, -45, 121, 6, -8, -85, 6, -102, -20, -26, -70, -72, 40, -27, 54, -47, 100, 53, -88, 74, 104, 69, -118, -20, 61, -54, -56, -117, 111, 6, 65, -124, -41, -29, 67, -115, -54, 48, -26, -78, -40, 43, -115, 46, 54};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UASimulation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UASimulation msg;
    msg.setTimeStamp(0.7310451758790685);
    msg.setSource(398U);
    msg.setSourceEntity(159U);
    msg.setDestination(46092U);
    msg.setDestinationEntity(81U);
    msg.type = 244U;
    msg.speed = 38012U;
    const signed char tmp_msg_0[] = {-105, -40, -125, 58, 69, -94, 91, 104, -8, 12, -67, -3, -20, 85, 102, -57, 124, -19, -111, -26, 58, 109, 47, -122, -27, -115, -3, -96, 96, -18, 3, 19, -2, 53, -118, 43, 7, 52, 16, 55, 60, 42, 32, -47, 81, 85, 100, 56, -84, 108, -107, -116, -5, -60, 3, -63, -94, 80, 89, 125, -19, -36, 105, 122, -118, 3, -78, 29, -28, 97, -47, -112, -53, -16, 47, -41, -21, 52, 54, 7, -24, 21, -12, 69, -2};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UASimulation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DynamicsSimParam msg;
    msg.setTimeStamp(0.22736616469970872);
    msg.setSource(26U);
    msg.setSourceEntity(245U);
    msg.setDestination(62509U);
    msg.setDestinationEntity(26U);
    msg.op = 137U;
    msg.tas2acc_pgain = 0.6190839746856815;
    msg.bank2p_pgain = 0.7872050062472211;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DynamicsSimParam #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DynamicsSimParam msg;
    msg.setTimeStamp(0.9563874019088544);
    msg.setSource(12799U);
    msg.setSourceEntity(189U);
    msg.setDestination(5456U);
    msg.setDestinationEntity(153U);
    msg.op = 87U;
    msg.tas2acc_pgain = 0.11117149483070565;
    msg.bank2p_pgain = 0.24147542001876832;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DynamicsSimParam #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DynamicsSimParam msg;
    msg.setTimeStamp(0.036920797806806904);
    msg.setSource(61576U);
    msg.setSourceEntity(205U);
    msg.setDestination(46963U);
    msg.setDestinationEntity(239U);
    msg.op = 2U;
    msg.tas2acc_pgain = 0.013459047958419457;
    msg.bank2p_pgain = 0.17219952272570094;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DynamicsSimParam #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StorageUsage msg;
    msg.setTimeStamp(0.4235435609683814);
    msg.setSource(52765U);
    msg.setSourceEntity(106U);
    msg.setDestination(12852U);
    msg.setDestinationEntity(84U);
    msg.available = 3231660704U;
    msg.value = 49U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StorageUsage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StorageUsage msg;
    msg.setTimeStamp(0.08197136340259581);
    msg.setSource(18612U);
    msg.setSourceEntity(113U);
    msg.setDestination(11578U);
    msg.setDestinationEntity(178U);
    msg.available = 833979062U;
    msg.value = 243U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StorageUsage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StorageUsage msg;
    msg.setTimeStamp(0.49726697433322065);
    msg.setSource(45570U);
    msg.setSourceEntity(147U);
    msg.setDestination(7888U);
    msg.setDestinationEntity(16U);
    msg.available = 4180088771U;
    msg.value = 117U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StorageUsage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CacheControl msg;
    msg.setTimeStamp(0.356902611734903);
    msg.setSource(58373U);
    msg.setSourceEntity(116U);
    msg.setDestination(38277U);
    msg.setDestinationEntity(44U);
    msg.op = 176U;
    msg.snapshot.assign("WKPCNRRCFNXKBCQFJQJMTEETUIGVCQOUJAPLAHLQVKBVORAINEWWCECSZIGDCXYXBKVFVSEUERSHDMBESJQZTCHOXJEHTYAUKAAEYYSIYMWIJOHMGSYKROQULHCVKTUALHWZYJZGNVLBINTIGZNPZLADMNPXRGBWSUPRDMGDZUOZHKPW");
    IMC::CoverArea tmp_msg_0;
    tmp_msg_0.lat = 0.3743416613014916;
    tmp_msg_0.lon = 0.8704973037653171;
    tmp_msg_0.z = 0.5053015520709219;
    tmp_msg_0.z_units = 35U;
    tmp_msg_0.speed = 0.27119868196116115;
    tmp_msg_0.speed_units = 83U;
    IMC::PolygonVertex tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.4068476307058825;
    tmp_tmp_msg_0_0.lon = 0.9205548048679016;
    tmp_msg_0.polygon.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("VCPSLNPHNTDXVIYVOSFQDNWEKSPAMQDUEIUTNKWVAGVYKYIJJPZRGCVOBLKCNHDRAGTWRBHQPRJHZKFWYCWHPADIFSRDNJHOAMXXGQQXMCHUSXGXFIMRBZQGFJIACEGRCE");
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CacheControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CacheControl msg;
    msg.setTimeStamp(0.16418836900267264);
    msg.setSource(30902U);
    msg.setSourceEntity(125U);
    msg.setDestination(23628U);
    msg.setDestinationEntity(206U);
    msg.op = 243U;
    msg.snapshot.assign("SZEWIGLBPQLHNVCOIFOOSMOXHDBISZMJILRTCVEWKYCRCQGPKVAVYCNXTKHJNQPBMZGWATEFWYGKMBQHLKLYQDDLBKGMVZDIQOLHVKQFOEGUJZSWZGONFGTPPOLU");
    IMC::FuelLevel tmp_msg_0;
    tmp_msg_0.value = 0.2457389544608919;
    tmp_msg_0.confidence = 0.14087070024143467;
    tmp_msg_0.opmodes.assign("FMSCFKGIFPWJCXAXLUSDSVBBVEEIEXFKVGCHDWYJKEZXDHYXCLGZNSTJYGHZSFLOAKLVSRWKRHCMVBWOPJPEYWSZZRRHRDQMQHVNRDTRFAOITQEITQFJTFPOALHTMYAXQLOJUWEYPNKNXNBZRYBOLPYQSNLDOLWWVWNTEXTMUCDUIHBCBHNKIAAWUPOGMJCRXSMHZQDCTZNJSMMRUKPEKFIUOODGNAPVTIYJQBMZGBDGLFIUGYUVVAQ");
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CacheControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CacheControl msg;
    msg.setTimeStamp(0.9036470555541137);
    msg.setSource(50575U);
    msg.setSourceEntity(245U);
    msg.setDestination(22282U);
    msg.setDestinationEntity(245U);
    msg.op = 128U;
    msg.snapshot.assign("OYOHSMNTUHHNHRADQGLGZ");
    IMC::FormationEval tmp_msg_0;
    tmp_msg_0.err_mean = 0.0042180514789735835;
    tmp_msg_0.dist_min_abs = 0.4161776701558464;
    tmp_msg_0.dist_min_mean = 0.7263470370628657;
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CacheControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LoggingControl msg;
    msg.setTimeStamp(0.7241859945063416);
    msg.setSource(42020U);
    msg.setSourceEntity(69U);
    msg.setDestination(24734U);
    msg.setDestinationEntity(211U);
    msg.op = 130U;
    msg.name.assign("VBSFVNHOGCKZB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LoggingControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LoggingControl msg;
    msg.setTimeStamp(0.052343226196701065);
    msg.setSource(64116U);
    msg.setSourceEntity(206U);
    msg.setDestination(59985U);
    msg.setDestinationEntity(9U);
    msg.op = 125U;
    msg.name.assign("XHRCVWDOSLTKCPQTBGPHCXGHIOLZKGYCXAERSRQFDS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LoggingControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LoggingControl msg;
    msg.setTimeStamp(0.7971109921712551);
    msg.setSource(57354U);
    msg.setSourceEntity(205U);
    msg.setDestination(65265U);
    msg.setDestinationEntity(83U);
    msg.op = 95U;
    msg.name.assign("MUQVLKVGITGCFJHXRPURWUMSFCPXDTFNFZVCLLEYYCRGFKWGKNRIHUVWUVUNAJUTDOKJQGMXGEPUZERPLDQXFATABYKBGOVIQNLLYQJZEMYEOMXCXCJZDAOHSNPTFOVZBDGINSRTWUVNQPQJHCBSBLHAIRHNSOJFCNGAOXAZRCEIBLZQYZIPKBDPXXWTMRIWA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LoggingControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookEntry msg;
    msg.setTimeStamp(0.5429679395860436);
    msg.setSource(41856U);
    msg.setSourceEntity(47U);
    msg.setDestination(7826U);
    msg.setDestinationEntity(142U);
    msg.type = 144U;
    msg.htime = 0.043731998503905745;
    msg.context.assign("ENSRFYCNRNXJFHMJKRCGDKPLNWYXJEPYSVAZHEOGBQYCYLBXXKWBPFWLZFUWUWTKCROJQJGGYORATHDJTPHRVGOZBSYDXLOMDSFFZXCKTCFRPKIQXSMTGBOXAMESXICJMVLZHTUJLUUPBWTGYHEIOKDAVQZQNFRKFSPNYKNLVZKNNIQZGMGVEUBGADISBNAOWIEPCBVCIHBOW");
    msg.text.assign("PJYSWNOHTSVLBUWDJATIQFLXGQKMRZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookEntry #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookEntry msg;
    msg.setTimeStamp(0.010428801720525738);
    msg.setSource(6555U);
    msg.setSourceEntity(49U);
    msg.setDestination(34787U);
    msg.setDestinationEntity(229U);
    msg.type = 86U;
    msg.htime = 0.07004471859241823;
    msg.context.assign("XPIHKTMYASJSDNWQRFGGWDGFVLXOXVUDIENKCEJVLCPWJUBPOSDUUXKFSIZEBLTMUGQTAJHLUCXKHLOZTXBFMMMTYMNRYGBIEEZFWITYUCVJRGJQDEKFROECKSGNYVFLZANQPVEKLVQLTZLRNBDOXBWGDEQYBDWXHVBWAOHKAPEYAXAPMBUCNOZQSVRTFSQRTYHSPISIPAJWMMBMNDHQPAGDICJOFXVNILCJYJITZAZUSRRQKPKZWOOHC");
    msg.text.assign("LULBNFQENHNFTXDOXTBERNENCOUKRTJZCBPOGEAHZQDJDMSX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookEntry #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookEntry msg;
    msg.setTimeStamp(0.5392589891244233);
    msg.setSource(62379U);
    msg.setSourceEntity(20U);
    msg.setDestination(27615U);
    msg.setDestinationEntity(242U);
    msg.type = 77U;
    msg.htime = 0.3470832098550046;
    msg.context.assign("SZKJCAKANAXFFFXFKGEZBAOVVXLCEEMVGVUXRQRIBVRXLTHJWJYHFJLACGRNYMXQDLAFBYHLPWNKEHPCJCOQRPZHAAUFGFQMHPSEXLTMBTIVKOKAMRZCTTJJWWQPTUBTICIHRSGYVHNUPVEGGMVUEHUFWKOQDHUSJZKSQDMYQWSAGZLXCCPEOUDNDUPLGKZ");
    msg.text.assign("CAVNOTJGCVLHMPVVHFJHSRHGVOBTDBPMFWNRCCJZVWOWODHESELSSZMEKJGIXZPPPUYKDLDBUBBWUGATHJMYVSTORFLCOHIYWJKUPXKMMYTRXXDZKGBUQNFRFWTPZQQLXOVSZZNIJWARFLSGNGKHAUQDVJIFMBIRCMUADEYMYGTHKEXN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookEntry #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookControl msg;
    msg.setTimeStamp(0.8877971328004542);
    msg.setSource(60190U);
    msg.setSourceEntity(215U);
    msg.setDestination(58247U);
    msg.setDestinationEntity(211U);
    msg.command = 244U;
    msg.htime = 0.6776816894670814;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookControl msg;
    msg.setTimeStamp(0.2955550506046578);
    msg.setSource(28828U);
    msg.setSourceEntity(161U);
    msg.setDestination(30134U);
    msg.setDestinationEntity(244U);
    msg.command = 172U;
    msg.htime = 0.8253647406881985;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 123U;
    tmp_msg_0.htime = 0.3121256056755983;
    tmp_msg_0.context.assign("EIJENBUSOYEBWOULETPJTNTXICZTWTFSVUPQUZDSXVMHCDNWKUOABGHPMPMYFOCXRHGKDNFWDCJBFVVBROCYQZLQDUHVXRAFPYALMKEZNRUX");
    tmp_msg_0.text.assign("NWSYGKATPCMQGRKDLINBMYBZGPLCJYIAZMDNHBOCBVUVZMYJYFRQVMCZQMOXPTNQUEPGXDBONQAFHUSYUTFIHJGFYYRHRSTPUJFPWEFBJROXKLCATIPVWWTZSWGVHIGRCODNNXIDHLUFSGVKPBF");
    msg.msg.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookControl msg;
    msg.setTimeStamp(0.12402608786367586);
    msg.setSource(28671U);
    msg.setSourceEntity(122U);
    msg.setDestination(19074U);
    msg.setDestinationEntity(30U);
    msg.command = 33U;
    msg.htime = 0.5478152376174282;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 155U;
    tmp_msg_0.htime = 0.4259742630188881;
    tmp_msg_0.context.assign("HAUNTSOERXYDBLBGMAHGBGSWKSYTUPUZPWMJVXEFVZTJEMBHKQTSRZSLCFUJDZEJIZXPVGWDTZFCIITXUXPIAXWEHYMEQHJKNOANUFDZVCPVIDPMOTTIGKBWVJQNOYBQLGCFSNMMGLPAGJYFD");
    tmp_msg_0.text.assign("YEQROIPMRQLIYWLMNUTWSLCZKMSHBQCLUDZKAGGCIJINLSPVYMTAWCRSERBVPYKUHQRPAZBGFCBDSPVECDBVAFWOAKNOITHGBLK");
    msg.msg.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReplayControl msg;
    msg.setTimeStamp(0.41459110914549);
    msg.setSource(46821U);
    msg.setSourceEntity(71U);
    msg.setDestination(50889U);
    msg.setDestinationEntity(131U);
    msg.op = 53U;
    msg.file.assign("LWFCQOAGLXGZXXVTDHHFDBQTDUYKRPDVMAHVOGBILBTNVYTBIQTONPHIGZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReplayControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReplayControl msg;
    msg.setTimeStamp(0.40047784252123575);
    msg.setSource(50514U);
    msg.setSourceEntity(211U);
    msg.setDestination(23224U);
    msg.setDestinationEntity(2U);
    msg.op = 128U;
    msg.file.assign("HDLBBEXXDYQDLIJIPRMVWEYYCCBHNFHUHVCERRADRBVFSHJFQSEECPCMUOUATGPUQALMXBNHGZPXDLUIMSWZIOAHXTKZIFZZUAXYRPIMSCPEGNNWHTD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReplayControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReplayControl msg;
    msg.setTimeStamp(0.13537037639569838);
    msg.setSource(32300U);
    msg.setSourceEntity(203U);
    msg.setDestination(5289U);
    msg.setDestinationEntity(116U);
    msg.op = 41U;
    msg.file.assign("RBWJUPUSFNVMDXVOVBAZDCZJQBAISDGFKOIOAFYRNMNYHDPRAHLHQXKZHTLQUGZLCOTCWFWVHBEQHGPBLLCWHRUHDLNUFOXKFRELTUWEWISCMS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReplayControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ClockControl msg;
    msg.setTimeStamp(0.11678910583135071);
    msg.setSource(19206U);
    msg.setSourceEntity(107U);
    msg.setDestination(58074U);
    msg.setDestinationEntity(107U);
    msg.op = 247U;
    msg.clock = 0.45635817713401505;
    msg.tz = -65;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ClockControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ClockControl msg;
    msg.setTimeStamp(0.1622509234451296);
    msg.setSource(22412U);
    msg.setSourceEntity(22U);
    msg.setDestination(14263U);
    msg.setDestinationEntity(237U);
    msg.op = 48U;
    msg.clock = 0.8588994180044449;
    msg.tz = 111;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ClockControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ClockControl msg;
    msg.setTimeStamp(0.646832049386678);
    msg.setSource(23141U);
    msg.setSourceEntity(187U);
    msg.setDestination(22928U);
    msg.setDestinationEntity(181U);
    msg.op = 237U;
    msg.clock = 0.4189578804340025;
    msg.tz = -49;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ClockControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricCTD msg;
    msg.setTimeStamp(0.04587052577629047);
    msg.setSource(23474U);
    msg.setSourceEntity(186U);
    msg.setDestination(12707U);
    msg.setDestinationEntity(244U);
    msg.conductivity = 0.22339995855772588;
    msg.temperature = 0.2832128517821072;
    msg.depth = 0.5695273531534608;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricCTD #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricCTD msg;
    msg.setTimeStamp(0.5124729774222571);
    msg.setSource(63808U);
    msg.setSourceEntity(29U);
    msg.setDestination(3798U);
    msg.setDestinationEntity(215U);
    msg.conductivity = 0.23593737919218205;
    msg.temperature = 0.5293252195114686;
    msg.depth = 0.43622333492266396;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricCTD #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricCTD msg;
    msg.setTimeStamp(0.2796751999384156);
    msg.setSource(28824U);
    msg.setSourceEntity(27U);
    msg.setDestination(51760U);
    msg.setDestinationEntity(216U);
    msg.conductivity = 0.8091356713076894;
    msg.temperature = 0.7596369705359104;
    msg.depth = 0.34569354679491293;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricCTD #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricTelemetry msg;
    msg.setTimeStamp(0.5634543426419487);
    msg.setSource(39874U);
    msg.setSourceEntity(10U);
    msg.setDestination(62851U);
    msg.setDestinationEntity(205U);
    msg.altitude = 0.5333879686692671;
    msg.roll = 35614U;
    msg.pitch = 34081U;
    msg.yaw = 23179U;
    msg.speed = -31146;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricTelemetry #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricTelemetry msg;
    msg.setTimeStamp(0.9902377531150734);
    msg.setSource(22347U);
    msg.setSourceEntity(246U);
    msg.setDestination(9915U);
    msg.setDestinationEntity(157U);
    msg.altitude = 0.25390700778518904;
    msg.roll = 30364U;
    msg.pitch = 47676U;
    msg.yaw = 8140U;
    msg.speed = -26136;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricTelemetry #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricTelemetry msg;
    msg.setTimeStamp(0.07844536386778322);
    msg.setSource(22114U);
    msg.setSourceEntity(251U);
    msg.setDestination(59072U);
    msg.setDestinationEntity(167U);
    msg.altitude = 0.5373492886104316;
    msg.roll = 1198U;
    msg.pitch = 10083U;
    msg.yaw = 55311U;
    msg.speed = -32208;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricTelemetry #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricSonarData msg;
    msg.setTimeStamp(0.3995773158048035);
    msg.setSource(29410U);
    msg.setSourceEntity(19U);
    msg.setDestination(32230U);
    msg.setDestinationEntity(42U);
    msg.altitude = 0.08684168004610837;
    msg.width = 0.49107007933619884;
    msg.length = 0.8276770903195357;
    msg.bearing = 0.9691353307893371;
    msg.pxl = 28735;
    msg.encoding = 26U;
    const signed char tmp_msg_0[] = {-82, 55, -25, -69, 52, 10, -125, -108, -76, 63, 74, 64, -41, -92, 93, -70, -42, -9, -62, -71, -11, 49, 103, 20, -17, -94, -68, 107, -75, 88, -105, 42, 0, 62, -113, 79, -15, 24, -23, -96, 98, -34, 101, 31, -84, -78, 52, -81, -87, 102, 62, -125, 79, -112, -36, -59, -55, 29, 124, -99, 17, -54, -61, -111, -50, -111, 85, -81, -60, 121, 68, -54, 102, -67, 61, -36, -28, 70, 41, -123, -50, -24, 7, 34, 81, -7, -108, -2, -122, 49, -117, 91, 12, -76, 119, 28, 98, 89, -41, -108, -44, 50, 105, -41, 49, -74, 104, 100, 61, -42, -68, 37, -126, 46, 20, -20, 20, -104, 43, -33, 39, 57, 124, -91, 101, 95, -7, 75, 112, -72, 97, -103, 73, 107, -22, 116, -6, -102, -37, 66, 39, -5, -20, 115, 48, 9, 100, 1, -103, 78, -49, -99, 75, 5, 104, -12, -12, -55, -4, -60, 28, -109, 81, 9};
    msg.sonar_data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricSonarData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricSonarData msg;
    msg.setTimeStamp(0.2955582332179557);
    msg.setSource(47275U);
    msg.setSourceEntity(177U);
    msg.setDestination(47944U);
    msg.setDestinationEntity(196U);
    msg.altitude = 0.4466787731596724;
    msg.width = 0.4854682649139127;
    msg.length = 0.8949977639709934;
    msg.bearing = 0.5509396597207878;
    msg.pxl = 16798;
    msg.encoding = 154U;
    const signed char tmp_msg_0[] = {-15, -123, -34, -36, -119, 42, 86, -124, -51, 95, 71, -123, 51, -100, -14, -32, 101, 86, -3, -20, -128, 44, -68, -96, 10, -116, -121, 50, 69, 94, 26, 29, -106, -83, -106, -84, -17, 82, -102, -83, 76, 106, -15, 48, -110, 38, 47, -35, -57, 111, -7, 83, 17, 47, -119};
    msg.sonar_data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricSonarData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricSonarData msg;
    msg.setTimeStamp(0.4898981181797548);
    msg.setSource(25255U);
    msg.setSourceEntity(71U);
    msg.setDestination(11630U);
    msg.setDestinationEntity(82U);
    msg.altitude = 0.511318689306239;
    msg.width = 0.14896827294073878;
    msg.length = 0.28022130350808394;
    msg.bearing = 0.4664591502082014;
    msg.pxl = 7103;
    msg.encoding = 68U;
    const signed char tmp_msg_0[] = {-31, -34, -11, -42, -69, -75, -77, -81, 27, 83, -75, -104, -68, 49, -114, -5, 70, -94, -33, 41, 52, 76, 14, -86, 37, 125, -113, -78, -94, -41, 104, -84, -20, -13, -91, 35, -83, -9, 5, 57, 107, -64, 17, -124, 64, 20, 38, -84, 125, 10, -57, -21, -17, 92, 45, 0, -54, 50, 117, 79, -42, 19};
    msg.sonar_data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricSonarData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricEvent msg;
    msg.setTimeStamp(0.06864702024693758);
    msg.setSource(28977U);
    msg.setSourceEntity(62U);
    msg.setDestination(39044U);
    msg.setDestinationEntity(20U);
    msg.text.assign("CSPJDQLPYJMKEMCEODDNDZWQWHEFNWJQAZUFPSHGUKTNBLEDQPGJWEXRXSQQNJIYXCWOCFGIMRCAKVIJMTBVAUTMWPYKOZIKHCFDEVYVKJZMVBAHZQTHUZTICJMYRLRRLVMNXRYYDXHGBUZSDZGEUQNXWTDPEPGWZVXIHOVVLWXTGNGEGGUK");
    msg.type = 61U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricEvent #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricEvent msg;
    msg.setTimeStamp(0.7070571830919073);
    msg.setSource(49590U);
    msg.setSourceEntity(142U);
    msg.setDestination(24903U);
    msg.setDestinationEntity(121U);
    msg.text.assign("HEFESCKJFEWWKRPWTDIQUPYBOOLJTGWKRGNRPVF");
    msg.type = 232U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricEvent #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricEvent msg;
    msg.setTimeStamp(0.5843883659717595);
    msg.setSource(3463U);
    msg.setSourceEntity(251U);
    msg.setDestination(46795U);
    msg.setDestinationEntity(44U);
    msg.text.assign("KBZXYEMNZWNSSJJZDKNTQJIALQVHHAP");
    msg.type = 67U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricEvent #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VerticalProfile msg;
    msg.setTimeStamp(0.2456835991308557);
    msg.setSource(14535U);
    msg.setSourceEntity(151U);
    msg.setDestination(54934U);
    msg.setDestinationEntity(106U);
    msg.parameter = 80U;
    msg.numsamples = 79U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 55602U;
    tmp_msg_0.avg = 0.551701393539676;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.25323998529280956;
    msg.lon = 0.8818785643456233;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VerticalProfile #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VerticalProfile msg;
    msg.setTimeStamp(0.8529463216677662);
    msg.setSource(7151U);
    msg.setSourceEntity(146U);
    msg.setDestination(42727U);
    msg.setDestinationEntity(249U);
    msg.parameter = 148U;
    msg.numsamples = 97U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 39987U;
    tmp_msg_0.avg = 0.03750525051643938;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.5256554079586409;
    msg.lon = 0.5275489460875605;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VerticalProfile #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VerticalProfile msg;
    msg.setTimeStamp(0.6025078157201794);
    msg.setSource(55851U);
    msg.setSourceEntity(19U);
    msg.setDestination(58328U);
    msg.setDestinationEntity(9U);
    msg.parameter = 178U;
    msg.numsamples = 47U;
    msg.lat = 0.7261260709161714;
    msg.lon = 0.7884387481431032;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VerticalProfile #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ProfileSample msg;
    msg.setTimeStamp(0.7246284476622313);
    msg.setSource(19675U);
    msg.setSourceEntity(220U);
    msg.setDestination(21256U);
    msg.setDestinationEntity(176U);
    msg.depth = 17519U;
    msg.avg = 0.004360940514613998;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ProfileSample #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ProfileSample msg;
    msg.setTimeStamp(0.5104834550226918);
    msg.setSource(41588U);
    msg.setSourceEntity(135U);
    msg.setDestination(22957U);
    msg.setDestinationEntity(160U);
    msg.depth = 11807U;
    msg.avg = 0.4340655465026759;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ProfileSample #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ProfileSample msg;
    msg.setTimeStamp(0.858485093214826);
    msg.setSource(34174U);
    msg.setSourceEntity(219U);
    msg.setDestination(33887U);
    msg.setDestinationEntity(144U);
    msg.depth = 59298U;
    msg.avg = 0.7792061210378092;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ProfileSample #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Heartbeat msg;
    msg.setTimeStamp(0.7959421692240926);
    msg.setSource(60183U);
    msg.setSourceEntity(200U);
    msg.setDestination(4010U);
    msg.setDestinationEntity(24U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Heartbeat #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Heartbeat msg;
    msg.setTimeStamp(0.551633069325032);
    msg.setSource(54687U);
    msg.setSourceEntity(138U);
    msg.setDestination(56218U);
    msg.setDestinationEntity(33U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Heartbeat #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Heartbeat msg;
    msg.setTimeStamp(0.44112189713025207);
    msg.setSource(7932U);
    msg.setSourceEntity(51U);
    msg.setDestination(22888U);
    msg.setDestinationEntity(42U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Heartbeat #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Announce msg;
    msg.setTimeStamp(0.6072076812470957);
    msg.setSource(32454U);
    msg.setSourceEntity(28U);
    msg.setDestination(18513U);
    msg.setDestinationEntity(56U);
    msg.sys_name.assign("DBHPMOWRVCSVMEEGVGIJAZYEYKQPNHXHOCBOVXLJCNRPTSPSYIGKADFZSOSZODLIMRQGPCEAMZBAQKMCJZEFNUHKNQUWBVQPYAUMCXMMRGJWZWOGIEKPJGWXJKLUARZKVDTIHWSEUVXNHFTHJKTUHKTXFNFTGPSYFBYDXSRILDLSROLQPJAUDLUEBTIBDUNQBWDPTMYQNDEFL");
    msg.sys_type = 196U;
    msg.owner = 36426U;
    msg.lat = 0.44371895294407526;
    msg.lon = 0.8457363759835631;
    msg.height = 0.13963980784487362;
    msg.services.assign("AQYQKJEJTZSUZGXCHUWIOTMKYSREEYWMEJBOKLASCNHBNUUSWTPXREDBMYAHGWYYCRZRSRJUAVFADSELNNPOPYWKXBCTSZSDGLPNMTCBGK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Announce #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Announce msg;
    msg.setTimeStamp(0.5846222725999173);
    msg.setSource(36603U);
    msg.setSourceEntity(36U);
    msg.setDestination(28323U);
    msg.setDestinationEntity(43U);
    msg.sys_name.assign("QZUVBPQVCFHESGRIPPTYHDFONDFUGOVKAVMFTGZVYURJZMKHLNXLQBXAEIKNFVWHJVZHCXLGSLQWDSZMNYDJGATDPAID");
    msg.sys_type = 33U;
    msg.owner = 56554U;
    msg.lat = 0.7548971161741962;
    msg.lon = 0.7988024803960253;
    msg.height = 0.17212389298647357;
    msg.services.assign("XOQAIXLILWKYNSITFNIPCYPEMESEBRAJAVOOCEQTVCMUAOBHDELKXZGDLVIIAKRAFNKNPKLVJRXKUJFBSWQUQGICKCTNRSRMLJGNHZCDUNFPHSXPMGBQPZXDOLNZDYAANKQWCPZYRWHRMTEFWXTOUVJHFACMYGEMWRUQWQSIGOTXWYJEDPHGIHXTSQCHTZLJZVJBBVOYKZJYXBCGYRHJUBTRVWPGDULBBAQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Announce #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Announce msg;
    msg.setTimeStamp(0.32121476975221885);
    msg.setSource(43906U);
    msg.setSourceEntity(37U);
    msg.setDestination(47126U);
    msg.setDestinationEntity(149U);
    msg.sys_name.assign("BPQFVWELQYCLWFMKHGNSNHZZVBHUMJYPIHIPOMLECBLFZKKGQXLSWNMXGZE");
    msg.sys_type = 177U;
    msg.owner = 899U;
    msg.lat = 0.7379638887348513;
    msg.lon = 0.7265227161358374;
    msg.height = 0.1452446893412105;
    msg.services.assign("EIQKOPPPMICGIDNRKTMBVAPUBQWMFBGUMADTQHYEHSAGOXKQTIDUACAZRJGYTRGAHCCMWVXXDIPHMEBFZSZRVMQOYHFNUCQKYQCMEYJANLLIWFWKRDWCHFGVVDSTLVV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Announce #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AnnounceService msg;
    msg.setTimeStamp(0.9617068763583155);
    msg.setSource(28346U);
    msg.setSourceEntity(183U);
    msg.setDestination(58449U);
    msg.setDestinationEntity(107U);
    msg.service.assign("KSQMMGFWSMYRNTSSFQPOIBWIOUQCSAYGFCMBQWODIROHRLRZYAZNEJTBKCYEVNEQMFVAXFBHTHOXHOBPAIMIQNEDSLEXGFBWJKHQRNMPXBPEKRWAGZSXECFOLTGMYWEFIADMZUTNCSFZWSVDKLUZPHEYLPZVYDJYULNXAPQLJKOORAEVPDVVIXGQDYJNHTXKHDWBODPCT");
    msg.service_type = 51U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AnnounceService #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AnnounceService msg;
    msg.setTimeStamp(0.7094791692773841);
    msg.setSource(58982U);
    msg.setSourceEntity(84U);
    msg.setDestination(57720U);
    msg.setDestinationEntity(152U);
    msg.service.assign("LTUQKLVPCWZNITVKHFAYHWFZNBQNAMZRBJSTIGCLOUXMNHXCWQJYGNGMWPYZREVPLCCUQLZYHPLAHEIFRGFMPAKYXRUPMTTZRRCDGJSMYZWBTJAXTCHDXREKFM");
    msg.service_type = 79U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AnnounceService #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AnnounceService msg;
    msg.setTimeStamp(0.042244735147759394);
    msg.setSource(46413U);
    msg.setSourceEntity(56U);
    msg.setDestination(26478U);
    msg.setDestinationEntity(245U);
    msg.service.assign("TVZMPNIVKEULPCOZKDSUVECFLQJJNNPYQGMZLRAFCDUOAHLSCXQOLHFDDXYVWGVZDYAHVWJQPYXGDRQUHRDCBRCRUWMFBQBPIFITSMEUSWOWUTSNYGEKMCJJGTAXHYQEJQOWOKXBHGHKHMDXJBEINSMUKMPMYFAMYQPIKKCHFRKGHSWTTABRZXEVXFVLNUEROZRKEFZCTCXSZU");
    msg.service_type = 209U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AnnounceService #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RSSI msg;
    msg.setTimeStamp(0.07413947304017832);
    msg.setSource(36319U);
    msg.setSourceEntity(67U);
    msg.setDestination(6656U);
    msg.setDestinationEntity(195U);
    msg.value = 0.06951079872723143;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RSSI #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RSSI msg;
    msg.setTimeStamp(0.9378130227229623);
    msg.setSource(21679U);
    msg.setSourceEntity(62U);
    msg.setDestination(8298U);
    msg.setDestinationEntity(176U);
    msg.value = 0.7672167472316318;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RSSI #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RSSI msg;
    msg.setTimeStamp(0.9662480037633968);
    msg.setSource(51676U);
    msg.setSourceEntity(111U);
    msg.setDestination(48729U);
    msg.setDestinationEntity(131U);
    msg.value = 0.9609626410404194;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RSSI #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VSWR msg;
    msg.setTimeStamp(0.3211972093333163);
    msg.setSource(5441U);
    msg.setSourceEntity(43U);
    msg.setDestination(6935U);
    msg.setDestinationEntity(157U);
    msg.value = 0.9118717246693254;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VSWR #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VSWR msg;
    msg.setTimeStamp(0.14197431648869618);
    msg.setSource(65044U);
    msg.setSourceEntity(126U);
    msg.setDestination(63572U);
    msg.setDestinationEntity(204U);
    msg.value = 0.47773499731824187;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VSWR #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VSWR msg;
    msg.setTimeStamp(0.5813746141081133);
    msg.setSource(60699U);
    msg.setSourceEntity(153U);
    msg.setDestination(49326U);
    msg.setDestinationEntity(7U);
    msg.value = 0.8718869304104151;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VSWR #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LinkLevel msg;
    msg.setTimeStamp(0.06168006175690721);
    msg.setSource(6417U);
    msg.setSourceEntity(145U);
    msg.setDestination(533U);
    msg.setDestinationEntity(253U);
    msg.value = 0.8980249405393788;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LinkLevel #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LinkLevel msg;
    msg.setTimeStamp(0.6763296725450152);
    msg.setSource(31864U);
    msg.setSourceEntity(87U);
    msg.setDestination(28333U);
    msg.setDestinationEntity(156U);
    msg.value = 0.19857317485353176;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LinkLevel #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LinkLevel msg;
    msg.setTimeStamp(0.05974438487145617);
    msg.setSource(17651U);
    msg.setSourceEntity(219U);
    msg.setDestination(48155U);
    msg.setDestinationEntity(81U);
    msg.value = 0.5558194181161993;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LinkLevel #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Sms msg;
    msg.setTimeStamp(0.08446719246577794);
    msg.setSource(28943U);
    msg.setSourceEntity(192U);
    msg.setDestination(31368U);
    msg.setDestinationEntity(132U);
    msg.number.assign("TYWEHQTKHAVNNQURSEMMLNPRNCBXSSHCYQVFLWZJHGCXRVPTJCUVIIXMMPAGVUUKDGAKYHNJLSVBWAFZDUEPBUTDDNRTWMINJYKPDYOICFJQXTKJJPEAAARXGRFYERSBFGNFABKMTGGWAOXQILGPZDGFYMDZLYLBXRJUYFHETIMPOJWU");
    msg.timeout = 56445U;
    msg.contents.assign("EQBSAMGZYLNJIGKTUUJLILULNYCPCFRGLIQGWFTJVVAEVWZMRLRKPNYLEWZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Sms #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Sms msg;
    msg.setTimeStamp(0.26838854751379315);
    msg.setSource(26235U);
    msg.setSourceEntity(200U);
    msg.setDestination(55147U);
    msg.setDestinationEntity(176U);
    msg.number.assign("PKOAQBMJBNOXLVFQZCJJUGLGFADWIZXXMVKQNZOHMFRSTLWVDWPTQMOYYRCWYGSDGIUOEVRGBIXAQDZIKOPWKBKJOKYJCFJJAHVTCQRJLGMXNOBINTRTGCCCUQITYSLLWRAGHQPMTCHBHUDUORFZPSHEZLENMHVDUPLIRIDEYGKSUERMDNAXBPZVHFISZWMIFNWHWETSAPXRQONCVFYKESNCMPVTWKYSDVUZJUXTLHLFBYXQA");
    msg.timeout = 13249U;
    msg.contents.assign("EWSRFEKLJVB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Sms #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Sms msg;
    msg.setTimeStamp(0.36032147004695025);
    msg.setSource(24947U);
    msg.setSourceEntity(186U);
    msg.setDestination(51982U);
    msg.setDestinationEntity(205U);
    msg.number.assign("MJUVXBRHMBNJJCSEDSXIDYIOVBZRYEYWNXVFMQCFTLLGAWOTLSVYQMVRLDKNTHHWZREQRXCSHGZINGGFBBQSGJAPJMIVUEUHZPQOTUYAKRUKXEZHCNCYZXAWDIDHDTUQCCGRWAPBMZOANJKOWRLWZJGNVJNXUYEFOOCOWNOEUDLPUNXSALFXBSKTMWRTIJJMKAMPDCBGTHPLFVID");
    msg.timeout = 52212U;
    msg.contents.assign("UBMSKFMIWDSLWJGPWIQTDRDBNCKSDC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Sms #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsTx msg;
    msg.setTimeStamp(0.3283404571562173);
    msg.setSource(27741U);
    msg.setSourceEntity(232U);
    msg.setDestination(59138U);
    msg.setDestinationEntity(150U);
    msg.seq = 2321495996U;
    msg.destination.assign("OSJWCPVYAPSZBRMHTYQPMTFHIVZUNRIIPSEDRESZFSMOTFJZAJWFZYMMQVJBPJAPYTABXZCAWBNOUJODGNCNTPUDENEGKMQHJKXUPDHGFIKKGB");
    msg.timeout = 24569U;
    const signed char tmp_msg_0[] = {23, 31, -72, 92, -7, 16, -13, 31, 105, -107, -94, -9, -8, 13, 93, -35, 67, -71, -82, -56, 99, 11, 4, -78, 86, -67, -95, -109, 97, 45, 2, -43, -51, -116, -105, 117, -9, -2, 114, -78, -117, -66, -41, -47, 80, -117, 121, -29, 91, 12, 7, -121, 1, 15, -18, -71, -110, -26, -22, 124, -57, 110, -97, -51, 115, 103, -108, -95, -116, 57, 16, -115, 20, 96, 57, 126, 34, -69, -9, 71, -119, 123, 97, 23, -79, -72, 3, -113, -22, 34, 86, -46, 46, -94, 81, -65, 57, 31, -41, 25, -113, -38, 40, 4, 80, 74, -25, -13, -33, -77, 66, 37, -92, 27, -15, 64, -117, -16, -110, 90};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsTx #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsTx msg;
    msg.setTimeStamp(0.06610514450143457);
    msg.setSource(43544U);
    msg.setSourceEntity(23U);
    msg.setDestination(26132U);
    msg.setDestinationEntity(51U);
    msg.seq = 1594979282U;
    msg.destination.assign("JSJDYSTMOZLIWQFFFXGCNORIQCEVUMRMKHXUDNMQAUCTSUOYIGKPOEPNJPVXSJIETIXPMBDPETWLQMAVXTGBZTVKEMRLKOJHLATIHOQFBWDXDCXHQKGEGWVRXBVJNYDKFNAZMIJYXRPHAFNJSZLHOELQEZHVSZMJBEYNABZWUYUYLNZHNTTAOKPMVUGIGNAFVLAICCPHKTRCQCKQJOOPDDWC");
    msg.timeout = 62263U;
    const signed char tmp_msg_0[] = {-44, 19, -44, 114, 73, -100, -19, -52, 109, 16, -34, -44, -8, 41, 20, -113, 97, -67, 107, 99, 23, -23, 105, -40, 4, -8, -101, -6, -105, 110, -41, 93, -101, -24, 30, 94, 34, 40, -96, -26, 62, 109, -71, -63, -15};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsTx #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsTx msg;
    msg.setTimeStamp(0.08157642678240451);
    msg.setSource(17033U);
    msg.setSourceEntity(202U);
    msg.setDestination(4080U);
    msg.setDestinationEntity(10U);
    msg.seq = 4217355126U;
    msg.destination.assign("MNQAPLDRTQJFPKUWRFHIXWCUCBSRVZTXNVHZSOKEHMFZXDGYNNBALOWNJSICUFJBGSPAOYTAMXKOJLURZYIUXIEQZVXWWTDFSOBXJTPONFOWNQGLWVXGGGIAIQOFEPCQZLLVHIRCDKRJPMKUZMEWQYYNWUG");
    msg.timeout = 48781U;
    const signed char tmp_msg_0[] = {-85, 62, -78, -99, 4, -14, -69, -111, 73, -128, 77, 94, 79, -72, -40, -82, -73, 84, 103, 28, 25, -63, 49, -116, -9, -119, -97, -36, 65, -58, 105, 105, -64, 61, 105, -34, 25, 67, 112, 41, 2, -50, -16, 86, 116, -89, -85, 91, -58, 94, 81, 93, 81, -44, 84, 10, -118, -89, -75, 60, 59, -83, 53, -13, -104, 7, -29, 78, 64, 23, 88, 38, -126, -48, -106, -29, -43, 83, -91, 21, -74, -51, 0, -22, 122, 76, -70, -38, -27, -77, -70, -47, -114, 49, -86, -36, 96, 65, -57, 28, 108, 40, -44, 119, -78, 20, -99, -66, 9, -83, -75, 80, -19, 2, 29, -88, 99, 63, -23, -100, 122, 70, 27, -84, -84, 111, -5, -59, -102, 93, 22, 77, -116, 7, -79, 99, -2, 77, 66, 1, -18, 119, 9, -115, 84, -94, -46, -124, 113, -22, 30};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsTx #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsRx msg;
    msg.setTimeStamp(0.7053098347511797);
    msg.setSource(36803U);
    msg.setSourceEntity(57U);
    msg.setDestination(4551U);
    msg.setDestinationEntity(227U);
    msg.source.assign("ZHNUGVTSGTBYSKIGKCFXRVLZCBXUMJRPQYELYABXTXSQFDWBXNEMOZDBLEZFARKJAMONVZZBLAYLOOJBMPAKCJBPNWRXDHQAPJAUHFEXFMSVSTEDTIHGTVKRNRCYURCZC");
    const signed char tmp_msg_0[] = {47, -36, 47, 94, -88, -56, -115, -124, -19, -47, 51, 5, -46, 80, -73, -39, -48, 33, 86, -64, -51, -71, 92, 28, -88, 7, 65, -52, -128, 23, -124, -108, -97, -20, -28, 6, -6, 51, -37, -77, 61, 73, -123, 38, -91, 97, -102, -46, -43, -71, -39, 2, -94, -94, -49, 78, 22, -1, 73, 44, -4, 36, 23, -124, 65, 18, -25, 49, -71, 16, 45, 43, 99, -87, -116, -68, 51, -75, -24, -6, -28, 75, 80, -51, 69, -61, 25, -63, -71, 60, -5, 28, 22, -18, 63, -123, -84, 126, -116, -36, -110, 111, -69, 51, -14, -92, 36, 61, -85, -35, -57, -25, -99, -12, -49, -25, 111, 11, 27, 22, -65, 91, -113, -3, 58, -123, 58, 101, -49, 23, -25, 87, 105, -12, -117, 73, 91, 23, 3, -117, 119, -93, -2, 32, 70, 33, -50, 105, -123, 120, -14, -121, 20, 102, 86, -28, -113, -34, -62, -47, -75, -116, -28, -24, -108, -72, -28, 68, -119, 117, 30, 120, 105, -93, 26, 124, -93, -82, 84, -45, 22, 94, -10, 26, 21, 14, 15, -102, -10, -6, 92, 39, 72, 77, 114, 107, 113, 90, -43, 64, 87, -88, 126, 76, -37, -67, 98, 95, 99, -25, 104, -99, 9, -73, 50, 56, -116, 72, -38, 78, 72, -7, 59};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsRx #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsRx msg;
    msg.setTimeStamp(0.9680893679050826);
    msg.setSource(31511U);
    msg.setSourceEntity(114U);
    msg.setDestination(63061U);
    msg.setDestinationEntity(84U);
    msg.source.assign("IRPFNUIWRLGGUZSCCSTQDQVNEGBOTRGQFYYAIJWSMRQAFXLEHBLJTYSDJHPVHJKYIMBETCPHIEKDYCILLYCPMUXMYVGSLLXJDAFKQZZOSUWKOVHT");
    const signed char tmp_msg_0[] = {44, -9, 41, -81, -97, -1, -123, 3, 80, 28, -89, -104, 123, -118, 126, 58, -69, 82, 64, -106, -11, 116, 96, 62, -111, 8, 53, -10, -101, 109, -8, -75, -61, 64, -34, -17, 96, -123, 99, 63, 21, 55, -41, 39, -74, -74, 101, 2, 63, 87, 39, 75, -42, -10, -125, 22, -35, -40, 94, 79, 16, -32, -13, -10, 99, 88, 55, -71, -52, 4, -70, -43, -21, -110, 103, -86, 16, 17, -53, 40, -65, 41, 20, 122, -86, -109, 37, 120, -117, 83, 57, 58, 105, -17, 111};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsRx #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsRx msg;
    msg.setTimeStamp(0.15287147477390184);
    msg.setSource(34873U);
    msg.setSourceEntity(171U);
    msg.setDestination(21986U);
    msg.setDestinationEntity(31U);
    msg.source.assign("RXIXADFLZYJYIBGFHRMEICZPEOEHWFNBYGYBZZTXUXRJIKPYEXEGVLMRIUA");
    const signed char tmp_msg_0[] = {16, 80, -114, 66, 93, -36, 106, 2, 80, 42, -73, 112, 119, -95, 102, -75, -67, -110, -3, 58, 86, 57, -76, -16, 9, 96, 42, -78, -65, -12, 37, 126, 40, 35, -22, -27, -61, 61, -64, 64, -122, 89, 28, -35, -90, 55, -31, 81, -70, -19, 70, 38, 112, -79, 13, -111, -62, 70, -96, 111, 41, -95, -94, -111, 83, 82, 46, 98, -25, 71, -68, -7, -1, 49, -24, -60, -40, -112, 16, 124, 125, -9, -27, 105, -14, 90, -95, -125, 87, 87, -73, -43, 84, -126, 17, 42, -98, 21, -97, -127, 74, 4, -68, -112, 15, 82, 69, -103, 22, -111, 79, -127, -65, 20, 53, 121, 87, -46, -86, 53, -39, -39, 11, -52, -31, -5, 71, -98, 62, 90, 77, 14, -65, -56};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsRx #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsState msg;
    msg.setTimeStamp(0.5693530226099831);
    msg.setSource(34348U);
    msg.setSourceEntity(7U);
    msg.setDestination(44309U);
    msg.setDestinationEntity(82U);
    msg.seq = 1181066917U;
    msg.state = 123U;
    msg.error.assign("QRFDLLLIBUUXAWZOZFMTRIJCOGDQFCUSIMUNPXXAGHSDZQEHLGECSKWITDABHSZSVEZPFOTWLMNRRKDBKGXUXPZVFHWCBCZRRNGKNNVSQWKTJBUPKWIMGQJNOWYAOJEXECPDMN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsState msg;
    msg.setTimeStamp(0.6707591392921957);
    msg.setSource(38617U);
    msg.setSourceEntity(99U);
    msg.setDestination(16869U);
    msg.setDestinationEntity(11U);
    msg.seq = 4113290543U;
    msg.state = 75U;
    msg.error.assign("SZYNSECOMHDKHGELEHYWXTNQBULDHLIMTSJMUXUSEYONWUSFHOFQHNUJCBFAZWDDPGERCQCLINCBJOKBJXKZWLN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsState msg;
    msg.setTimeStamp(0.45780594012191644);
    msg.setSource(45812U);
    msg.setSourceEntity(251U);
    msg.setDestination(5225U);
    msg.setDestinationEntity(229U);
    msg.seq = 4224683012U;
    msg.state = 11U;
    msg.error.assign("KMEMNLOFZBMDVPLULERBUAZNQIMQCJJISXNTKTRKSHPTTQFAWIXPWBGBOEDBQYTUYHOLIDIMWWNCJPZYRXUSFSRNQNYBZVENWAFLEHWNMUUQGVTRPJLXOHOVDOIXIFMFSEYSZQYRKCFJBAOCXBLSVKETVDCYDMFPXAXVTDYVAROZPMEPTRJHURXDUCUWZCKBG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TextMessage msg;
    msg.setTimeStamp(0.6340410633178235);
    msg.setSource(65081U);
    msg.setSourceEntity(156U);
    msg.setDestination(52868U);
    msg.setDestinationEntity(190U);
    msg.origin.assign("KPSRUYZLXAOGFTSMLSHBGLJXEBLGQQQTIMZCPWMAFJJNCRQOACKMOIHCKNTCJDKIPCQXWSYZPKQOVTMNDKZUQRCIQZUUWFLSZXNDUCSVWMSAEDLJAWVBBRMUYMWFBNTAMHYRAFWJYHRGHFDRDWEXEJYQPFMTOBWZVVRKUIIERCOPDEUHKOGYFTVPJNYKXVQVHTZDXDPBVLIGSFTSVIXDEKJGBTAANIZHFXOENRP");
    msg.text.assign("MEBVHRGAFOQPNXOPYNYTPAJIRLXAJLJBKUUSUEOFYLYTPOJXCSRCANWZHLSXFCDWDUSWOFOSLVPERUHMGKCQMFDSJRWKMQOVBBFPVWBGLYAAXQTRDIOZKTIRMJCQMOAPNCFUYVHINZSXRDVEHQMKQNSHEDMTGHTE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TextMessage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TextMessage msg;
    msg.setTimeStamp(0.3839856639798226);
    msg.setSource(18163U);
    msg.setSourceEntity(163U);
    msg.setDestination(62722U);
    msg.setDestinationEntity(24U);
    msg.origin.assign("AXZKWDSZGJXKFAIWSRDOIRJMTFJVMHSUVEOMCXBEQMTBMJBBXHTJYRKAZSVUMSQPSCIPODKFOIULLRWJDVFUGANLJIVBBTEGZRYOWDGHZVCPGLUECPJRLOBXAPECYBYTXJIHYWFSPOJMWPDAZATINNCGHUUWNZ");
    msg.text.assign("OLUDHIIOFBKRISVSAYBVLQSULWEUFQPJFIHLDCDZQUTJKTNTDGLSMLCUHGEBQXOBASTZNRJGMCPEAKTHACZXGVNFTZTNRJPMMOYRAWFVUYJNMSTMPKXXAREHQKVYKJRPLZUYIZAKIN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TextMessage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TextMessage msg;
    msg.setTimeStamp(0.046817476149716764);
    msg.setSource(60596U);
    msg.setSourceEntity(59U);
    msg.setDestination(33711U);
    msg.setDestinationEntity(26U);
    msg.origin.assign("EKAIANFODFCTLMVUXLNCENGZASWEWQECBGUCDPUEROVPZBPKKBBBVTTIUDEYXWCHMBHDPGRBWZGAUYAONGTZQAQPHXSMPVLZWTJBYILILQHPGHSUJSFYFJXWYRMSJIRUYCWQXGTUJYKRXPXDXZMKHGLPMSSHTRFZCVAXOSMOXVWTEJKNNFFDMIMYUGRKJIZNZJTBKBOFVHNRL");
    msg.text.assign("THUNNXMRAUROQSBIQCOSONHZZMYSBVQREWEYERSSPEYLIAXCXFDIKEUNH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TextMessage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgRx msg;
    msg.setTimeStamp(0.5445375956128624);
    msg.setSource(1694U);
    msg.setSourceEntity(189U);
    msg.setDestination(12032U);
    msg.setDestinationEntity(138U);
    msg.origin.assign("EKTZNGBWGFRMJYCFCMAVLLHYRCNRFEUHDYSIFXFCXEIAUQUVQNZOEDGBBHSNLNDVRUTCCYOMOVZKAVWRQMDKGVE");
    msg.htime = 0.7550574137421403;
    msg.lat = 0.052818588628747776;
    msg.lon = 0.10687600933667385;
    const signed char tmp_msg_0[] = {-110, -29, -79, 101, -56, 67, 116, -23, -72, -88, 44, -21, 72, 93, 55, -5, -80, 70, -20, 27, -27, -8, -82, -120, 68, 88, -75, -23, 47, -7, 12, 65, 51, 52, -41, 95, -97, -69, 84, 126, 74, -73, 63, -89, -115, 52, -20, 52, -117, -85, -43, -95, 42, 46, 92, -112, 2, 68, 83, -15, -80, -80, 13, -90, -46, -17, 42, -99, -74, -30, -1, -33, -88, -34, 97, 88, 39, 43, -115, 8, -63, -88, 36, -101, -100, 14, -22, 2, 60, -83, -108, -89, -64, 88, 83, 83, 111, -93, 107, -43, 36, -41, 56, -80, -73, 96, 25, 38, -115, 77, 40, -64, -12, 47, 18, 26, -77, 32, -123, 81, 25, 77, -78, -96, 60, 53, 72, 3, 81, 57, 55, 88, 47, 29, -1, 82, -110, 117, 5, -31, 110, 99, 90, 126, 33, -104, -123};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgRx #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgRx msg;
    msg.setTimeStamp(0.6376930780907328);
    msg.setSource(22791U);
    msg.setSourceEntity(189U);
    msg.setDestination(56523U);
    msg.setDestinationEntity(10U);
    msg.origin.assign("YMAJTGGADBCEBDCEJVULOTFHWHBJISQCCRAHWPLOAUZXUQOTLPTJXTWSEWVWSWPDMEASEFYCZJKOIXLRKR");
    msg.htime = 0.9368806731646033;
    msg.lat = 0.7800290878723988;
    msg.lon = 0.5570082735632733;
    const signed char tmp_msg_0[] = {24, -48, -46, 120, 11, 93, -26, 1, -68, 65, -12, -95, 29, -25, 83, 22, 93, 71, -110, -126, 15, -59, -50, -72, 106, 68, 30, 66, -39, 97, 59, -82, -68, 83, 28, -1, -66, 17, 116, 44, -40, -38, -5, -39, -4, -65, -86, -57, -30, 126, -38, 121, 93, 81, -100, -69, 116, 119, -87, -106, 122, 45, -118, 119, -39, -23, 116, 1, -83, -83, 2, 59, -39, 115, 67, 23, 59, -75, -99, -53, 47, -65, 67, -17, 24, -124, 14, -117, 16, 41, -42, 76, -32, -101, 51, -44, 72, 30, 113, -12, -71, -85, -76, 113, 126, 19, 0, -28, 125, 95, -126, 28, -79, -37, -58};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgRx #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgRx msg;
    msg.setTimeStamp(0.3447983572667105);
    msg.setSource(33903U);
    msg.setSourceEntity(223U);
    msg.setDestination(6821U);
    msg.setDestinationEntity(236U);
    msg.origin.assign("CGKSIKTTCKMTUFCXOWY");
    msg.htime = 0.2652426771980596;
    msg.lat = 0.7075227127263196;
    msg.lon = 0.3193970958641059;
    const signed char tmp_msg_0[] = {14, -54, 50, 101, -34, -110, 110, 126, 42, 72, 96, 15, 55, -78, 104, 119, -27, 21, 114, -45, 7, 75, -30, -99, -28, -127, 45, -73, -110, -4, 94, 24, -83, -77, -86, 100, -110, 92, 124, 87, -67, -103, 101, -20, 47, -87, -108};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgRx #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgTx msg;
    msg.setTimeStamp(0.22755707907649847);
    msg.setSource(30702U);
    msg.setSourceEntity(37U);
    msg.setDestination(29663U);
    msg.setDestinationEntity(25U);
    msg.req_id = 24289U;
    msg.ttl = 15975U;
    msg.destination.assign("IGMNWLPXRBKWYPKVWMJCROVONEBVZPATACGWZDAMOIVUZHKPZLTWOXHBZQQXQZ");
    const signed char tmp_msg_0[] = {49, -26, -31, -38, 21, -82, 35, -105, 50, -4, 100, -33, 37, 57, 98, 45, 62, 23, 19, 114, -82, 48, 104, -97, -76, 47, -125, -10, 30, -29, -113, -18, 91, -46, 84, -3, 76, -10, -49, 35, -97};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgTx #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgTx msg;
    msg.setTimeStamp(0.9365421896716641);
    msg.setSource(37543U);
    msg.setSourceEntity(128U);
    msg.setDestination(7044U);
    msg.setDestinationEntity(32U);
    msg.req_id = 37114U;
    msg.ttl = 55686U;
    msg.destination.assign("BSSHRUTHRQXHBYGOVQSEJXWGKESCKZATZSEMELUBHEWIVRVLDHNZJAHTTYNFGLDISOVFIXJQSWFGWBWJYUASUPONMYUFOOCFXNQSRWXYBDRPKPAMCBODHKFPPCOAGOMWK");
    const signed char tmp_msg_0[] = {-101, 83, -21, -115, -88, 75, -40, -75, -40, 6, -42, 109, -37, 82, 103, -12, -42, -75, 7, 92, 97, 126, -62, 47, -15, -126, -110, 68, -109, 94, 49, 46, 73, -125, 98, 115, -39, 79, 48, 115, 112, -27, 37, 62, 86, 11, -47, 121, -25, -68, -32, -80, 59, -3, 13, -90, -25, 112, -81, -84, 110, -93, 81, 6, 63, 30, -5, -23, 67, -37, 25, -34, 51, 49, 85, 88, -93, -72, 110, -66, -93, 31, -74, -108, -86, 115, -51, -121, -102, 31, -20, -124, 120, -124, -30, 1, 49, 22, 88, -100, -26, -40, 3, 77, 58, -113, -21, 7, -81, 23, 103, -97, 64, 80, -84, -82, -65, -89, -14, 84, 105, 22, -66, 5, 44, -90, -87, 105, 102, 119, -34, -44, 51, 112, 1, 117, -105, -38, 9, 50, 105, -119, -28, 47, -29, -126, 68, -60, 96, -12, -42, -30, 2, 67, 68, -37, 65, -112, 54, -70, -18, 44, 51, -5, -15, -95, -19, 13, -1, 66, 49, -57, 105, 12, 12, 93, -44, 11, -110, 1, -51, -59, 124, -93, 43, 93, -11, 56, 56, 99, 91, -54, -102, 95, -27, 28, 41, 119, -94, 57, -22, -46, -122, -79, -23, -56, 75, 87, -67, 43, 106, -13, 62, -25, -37, -51, 2, -88, -22, -4, -104, -34, 100, -50, -50, -117, -65, 115, 73};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgTx #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgTx msg;
    msg.setTimeStamp(0.64701612627007);
    msg.setSource(27299U);
    msg.setSourceEntity(183U);
    msg.setDestination(28432U);
    msg.setDestinationEntity(145U);
    msg.req_id = 15913U;
    msg.ttl = 52964U;
    msg.destination.assign("OKCTHIJAPGBEFYCDXJKLYYIDHRGUWXDQMSKUJCTHFRJUQHEALHLYJOTGCJLNJWVFTDHOLCXFAQBQSWIYCLNXXRHPQLNVRPDYBMWFVTQJSTCWFFEJMVIDBNBVKMVEQVXLPAMKUTMAOSCLTUZZWAMAFWBDNGIZARRSZIONRDGXOKZBUCUPRNWENXQZGZGSYQUSREHEOHBZTPZPMDJKOPFWVLKGOWKYEN");
    const signed char tmp_msg_0[] = {-102, -50, 102, -18, 25, -31, -3, 12, 62, -4, -70, 99, -105, -98, 79, 33, -18, 126, -127, 54, -114, 57, -98, -7, -46, 43, 34, -119, 112, 103, -39, -48, -25, -119, 121, -28, 71, 3, 51, 49, 68, 60, -33, 69, 76, -11, 9, 64, -95, -10, 59, -23, 22, -30, 81, -48, 74, -26, -4, 42, -37, -102, 61, -5, -86, -83, 32, -80, 92, 17, 121, -28, 92, 69, 1, -76, 84, -98, 87, 107, -77, -48, 17, -125, -12, -60, -38, -95, -1, -125, 101, -101, 93, -118, 45, -21, 67, 97, 8, 101, -73, 4, 72, 106, -53, 76, -8, 97, 63, 92, -69, 96, 59, -87, 89, 0, 69, -107, 40, 61, 63, -19, 113, 22, -22, 47, -54, -100, -62, -49, 123, 16, 6, 99, -93, 92, -68, 96, -43, 108, 46, -40, 112, -98, -4, 68, 7, 122, -121, 95, -9, -123, -61, -84, 110, -43, -92, -117, -17, 45, 106, 21, -19, 73, -108, -22, -88, 101, 1, -106, 71, 58, 22, 49, -70, 121, -60, 15, -53, 124, -33, -99, 65, -21, -45, 33, -5, 111, 49, 92, -50, 69, 62, -45, 76, 70, 50, -23, -56, -115, -85, -36, 121, -67, 60, 5, -83, 10, -125, -1, -91, 30, 56, -39, 108, 95, -40, 9, -110, 64, -90, -32, -58, 44, 3, 97, -51, -36, 39, -46, 73, -119, -102, -41, 16, -44, 66, 48, 27, 25, 70, 80, 72, 0, -63, -6, -88, -64, 41};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgTx #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumTxStatus msg;
    msg.setTimeStamp(0.7856566316518635);
    msg.setSource(33857U);
    msg.setSourceEntity(215U);
    msg.setDestination(2416U);
    msg.setDestinationEntity(7U);
    msg.req_id = 51953U;
    msg.status = 192U;
    msg.text.assign("FGMHMCYZBKTVVOCVHZTWYCMGHFZANSGNGXQSTJOZKRDBIDQPLDBCUPJPJOFICAXSTGGUANSQOJMXXOJOQUQYMGSNHHADRBRWWJUHEDXLTKVYPOLIDDU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumTxStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumTxStatus msg;
    msg.setTimeStamp(0.5718193784514348);
    msg.setSource(35617U);
    msg.setSourceEntity(68U);
    msg.setDestination(31495U);
    msg.setDestinationEntity(222U);
    msg.req_id = 58731U;
    msg.status = 130U;
    msg.text.assign("MBGZMGJWIJQXLPLMSGBORCJLYIBDTMGVLYLBPVKFQJEUEQHBOZLCYNVEOKCHKHMWWUQWYMZQFGQUEFVZSWFHNPBSDNGEIIKOFFVOJOAKACDPYATYHRKLXNKTIGVSKBHVWGJHPJSAZSOWJFLCYSMXBZACZMGIGLYUXXYS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumTxStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumTxStatus msg;
    msg.setTimeStamp(0.11006640330995388);
    msg.setSource(4129U);
    msg.setSourceEntity(141U);
    msg.setDestination(18179U);
    msg.setDestinationEntity(180U);
    msg.req_id = 44274U;
    msg.status = 7U;
    msg.text.assign("FOLJXGWELQMWNTFEFCVZBXWVKYOPHGDIHSUBAPPXTMUAKJQEZRCOIKXEQEOFPKLRWDVICNLNMKLTRIIJSFIUXGVIDTKNVWWDOTHZQOQBQIAUHCXQAVMNPBEEH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumTxStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupMembershipState msg;
    msg.setTimeStamp(0.6225826062705588);
    msg.setSource(4492U);
    msg.setSourceEntity(164U);
    msg.setDestination(32064U);
    msg.setDestinationEntity(254U);
    msg.group_name.assign("HYRTJOQUTCGRXIZBPEVIWRDGVKALSUZFPAJPJQKWGXTDCONNNBUTDYYBZBVRJWHPHFOCORSACAIDJHWYKQNDLLQBEBVYXOVGJEKWCJFOBMTUIOKMRFECSLLHYENQUVAHWFXCKRYZHNRVTDDVQWJZISXPIFDNYGQGGAEUJL");
    msg.links = 2517646452U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupMembershipState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupMembershipState msg;
    msg.setTimeStamp(0.6915714709865158);
    msg.setSource(32442U);
    msg.setSourceEntity(252U);
    msg.setDestination(45679U);
    msg.setDestinationEntity(19U);
    msg.group_name.assign("LIRIEZDWSKUZGMIJRCWFFODEBPJTZXJVNPPZLWYBKXEKWBFYSQHZQXXTDFLGTLPDHOMAKAQVAMZWGVMWLOEXYUVNTONHRQLXCQRYCJBJRPLLBUCPDTDCFFLJWKNBWXINFONCPEHDUNWSAZMMHHYUISUEGGBBCKJTEGAIGMNVQADPTUOIBRDZEYGIICKYSHAQMVKMJPJTPKOYADCZMHFXNOHUYVS");
    msg.links = 1415706369U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupMembershipState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupMembershipState msg;
    msg.setTimeStamp(0.4213552268535199);
    msg.setSource(53227U);
    msg.setSourceEntity(240U);
    msg.setDestination(11545U);
    msg.setDestinationEntity(129U);
    msg.group_name.assign("KSXHFOQMVCOWMXDGCVWLJKZXLHDEINVRRYUYDKBCAOYEHZUIVPWQJOQHEGIULWPLFVMCQCEEOLPBNBQVYHABNMSDQSWZYCANYHOFODKTTZUTXXVXJXLKKMBJZENLOCKDQHNFGTFNUPADDOSSTINBUWXSFWMIPWIABJIXHFEZGZRETKUAKWOVMUQZYPZP");
    msg.links = 616806615U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupMembershipState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SystemGroup msg;
    msg.setTimeStamp(0.34879777326138683);
    msg.setSource(62940U);
    msg.setSourceEntity(168U);
    msg.setDestination(35967U);
    msg.setDestinationEntity(230U);
    msg.groupname.assign("QQXVQSTYMWPQCBGZEOGXTNGXZRKKQRBOQPRKSACIVKEJWSFVXFUWHKYDNZZMQECZILAZHSODKABJYYPNJFVFKPAKIUKUWIDJSROAOQIPTPBZTHXLODONWRVNMSUUGVLSPEAHGHNRCJFTMTNGOJFYGPUWWEIUFPXHDRLLAZYSLNHUIXLECPLYWFTVGVMTEEZCRDDXFMGACBYICRHQYJBMWBMMCJVDYBTABXLJURDBXQSNH");
    msg.action = 115U;
    msg.grouplist.assign("PIDNOYOZEKGTQLTINQPXPABGWWDKUEGJUVDGVMKDYBJYHCCSCFXZIJHHNGAOUYHVRZYBKYFMRKBAAQJELZUSVBKFDWTHJOMOWSGQXVRJLFDYUTTQEXTHJIOITNAHZMURAQHWPGCKLQVJEMZTYMEOFMSDVJXFBLIYPAFNLLVNCCFXADYGLZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SystemGroup #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SystemGroup msg;
    msg.setTimeStamp(0.17858718606867474);
    msg.setSource(51782U);
    msg.setSourceEntity(228U);
    msg.setDestination(46606U);
    msg.setDestinationEntity(51U);
    msg.groupname.assign("HLEXCORWIAMHYMNCIALZHLPZAYTPOPXGUZVRTHOIBSVIMQWUHW");
    msg.action = 218U;
    msg.grouplist.assign("SPJORFJPJCNSSJJMJLELPRGKWAGOALNDYBINUUNFIPIAHTEAQECVFRZZBUHGTWJROFGWNYERSVLEBIBDXHDTNHVIDDVKSRGTCRMQPPAZQYZTSABGQKLSCHCHHOTDMWUUKEOMFGUOHOPWVMCFURKGEWABOEBMQZCIGVQJNKSZDXQIRMKNTEJLBPR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SystemGroup #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SystemGroup msg;
    msg.setTimeStamp(0.39585912016052527);
    msg.setSource(15632U);
    msg.setSourceEntity(116U);
    msg.setDestination(57111U);
    msg.setDestinationEntity(112U);
    msg.groupname.assign("ZPEVDLNCNAQWKPPMVUAJGHIFDXYZSRMIPAHXZDZPDSKAWFPJJJZGVLQVUKYUSYORTNMMEEBFRGXCUUVXDLLVMILNOJVYBRRSAQNAIGHCFJXTUKYFCLBFYJTBAQTELHUAWNPCSYHESIPQEGGAGMEDHRWRMTHVIZZZGNMDSSBWRGGULXFXCOWEITDOOQFEWXWBCTOBMHTOYRVMCPFNKQWCAKTWHQBOKZZSXJREUQQIFPUKKDLBYXTNYDOC");
    msg.action = 54U;
    msg.grouplist.assign("WRJMOIIWJKDSMCEFPQHSKNXPAFNBVXEXXVBDROVHNWCXHPNQNJALSYQFZACUGIVHFUYXZSKPLDCBHDGT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SystemGroup #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LinkLatency msg;
    msg.setTimeStamp(0.023935167847764838);
    msg.setSource(48625U);
    msg.setSourceEntity(45U);
    msg.setDestination(15403U);
    msg.setDestinationEntity(94U);
    msg.value = 0.20673759360585164;
    msg.sys_src = 46544U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LinkLatency #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LinkLatency msg;
    msg.setTimeStamp(0.3196161219171366);
    msg.setSource(39775U);
    msg.setSourceEntity(175U);
    msg.setDestination(25142U);
    msg.setDestinationEntity(179U);
    msg.value = 0.6372910324561137;
    msg.sys_src = 14938U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LinkLatency #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LinkLatency msg;
    msg.setTimeStamp(0.50804732945271);
    msg.setSource(59105U);
    msg.setSourceEntity(219U);
    msg.setDestination(10754U);
    msg.setDestinationEntity(14U);
    msg.value = 0.8647262956525635;
    msg.sys_src = 6913U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LinkLatency #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ExtendedRSSI msg;
    msg.setTimeStamp(0.3084675768438335);
    msg.setSource(367U);
    msg.setSourceEntity(157U);
    msg.setDestination(54356U);
    msg.setDestinationEntity(199U);
    msg.value = 0.5271892222702182;
    msg.units = 87U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ExtendedRSSI #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ExtendedRSSI msg;
    msg.setTimeStamp(0.0660254504711908);
    msg.setSource(37177U);
    msg.setSourceEntity(105U);
    msg.setDestination(56691U);
    msg.setDestinationEntity(77U);
    msg.value = 0.3173906297474607;
    msg.units = 226U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ExtendedRSSI #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ExtendedRSSI msg;
    msg.setTimeStamp(0.8819375758792781);
    msg.setSource(67U);
    msg.setSourceEntity(197U);
    msg.setDestination(8322U);
    msg.setDestinationEntity(212U);
    msg.value = 0.9422008352011794;
    msg.units = 57U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ExtendedRSSI #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricData msg;
    msg.setTimeStamp(0.3070272814762236);
    msg.setSource(45752U);
    msg.setSourceEntity(25U);
    msg.setDestination(8483U);
    msg.setDestinationEntity(76U);
    msg.base_lat = 0.8472851957047762;
    msg.base_lon = 0.47498453398426843;
    msg.base_time = 0.26573922899714253;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricData msg;
    msg.setTimeStamp(0.9272431169229202);
    msg.setSource(42541U);
    msg.setSourceEntity(27U);
    msg.setDestination(10699U);
    msg.setDestinationEntity(161U);
    msg.base_lat = 0.6485419097992938;
    msg.base_lon = 0.16377255632096144;
    msg.base_time = 0.04477039852026876;
    IMC::HistoricSample tmp_msg_0;
    tmp_msg_0.sys_id = 33560U;
    tmp_msg_0.priority = 91;
    tmp_msg_0.x = 28402;
    tmp_msg_0.y = -10530;
    tmp_msg_0.z = -24695;
    tmp_msg_0.t = 21796;
    IMC::CurrentProfileCell tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.cell_position = 0.18937995757356074;
    IMC::ADCPBeam tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.vel = 0.013279248578456193;
    tmp_tmp_tmp_msg_0_0_0.amp = 0.1835814182240193;
    tmp_tmp_tmp_msg_0_0_0.cor = 222U;
    tmp_tmp_msg_0_0.beams.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.sample.set(tmp_tmp_msg_0_0);
    msg.data.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricData msg;
    msg.setTimeStamp(0.881487310293321);
    msg.setSource(55564U);
    msg.setSourceEntity(20U);
    msg.setDestination(14113U);
    msg.setDestinationEntity(165U);
    msg.base_lat = 0.7351109091852904;
    msg.base_lon = 0.2350721763396585;
    msg.base_time = 0.38445198968563377;
    IMC::RemoteCommand tmp_msg_0;
    tmp_msg_0.original_source = 62484U;
    tmp_msg_0.destination = 17275U;
    tmp_msg_0.timeout = 0.8311718909920768;
    IMC::PlanGeneration tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.cmd = 239U;
    tmp_tmp_msg_0_0.op = 248U;
    tmp_tmp_msg_0_0.plan_id.assign("RNAHVJDHZYLFKWKNIJITCLKGHEEDTEBSIOLIVTUXTPPLYAMHYFCAEWKQPRJVLHXSNQBVIWXUWCPZUGPKPRMYDTCACQKRQOFXGXEDZJSYIYTJNPLMQDNJXCSHRLIURVHCFMKGERBIMZINDNFMQOXJJULOYEDARQLKBCRDODODZIGTVZWQBVSUGOHEUMQEYGZVXOFGASLMUOMSAYZAMJWKUPWNYHJZTBFFKVSPZFBBVRGWCTWFNHNASSCQP");
    tmp_tmp_msg_0_0.params.assign("VFBLOIXRGVQZKHVIFCHWEOEGJVOHWLPJZKYTPYQTAQATLSLMQICSMKOCWGBYJAFNWEJRFMDRXOOPJLPFVZYCEALCESUZLAGBRJXQSQHQVFZGTPYTWPWNRMMS");
    tmp_msg_0.cmd.set(tmp_tmp_msg_0_0);
    msg.data.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompressedHistory msg;
    msg.setTimeStamp(0.591757560404277);
    msg.setSource(248U);
    msg.setSourceEntity(108U);
    msg.setDestination(47523U);
    msg.setDestinationEntity(151U);
    msg.base_lat = 0.0015546442418777895;
    msg.base_lon = 0.6291078459354693;
    msg.base_time = 0.8095453741735263;
    const signed char tmp_msg_0[] = {88, 73, 62, -94, 6, -52, 5, -47, -24, -42, 114, -118, -71, 79, -58, -54, -51, 50, 67, 82, -15};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompressedHistory #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompressedHistory msg;
    msg.setTimeStamp(0.15123332962100544);
    msg.setSource(30685U);
    msg.setSourceEntity(17U);
    msg.setDestination(24140U);
    msg.setDestinationEntity(104U);
    msg.base_lat = 0.4359321664091126;
    msg.base_lon = 0.05588648810298702;
    msg.base_time = 0.5686368198176556;
    const signed char tmp_msg_0[] = {34, 47, -2, 67, 49, 120, 122, 79, -54, 22, 122, -60, -107, -58, 9, 47, 119, -9, -58, 99, -123, 19, -71, -20, 84, 80, -62, 55, 54, 92, 96, 19, -86, -64, -43, 80, -42, 37, 42, 54, -29, 7, -8, -97, -39, 120, 105, 15, -120, -73, 47, 46, -83, 21, 61, -81, -86, -25, -55, -65, -39, -26, -92, 78, -55, -41, 53, 19, -118, -111, -96};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompressedHistory #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompressedHistory msg;
    msg.setTimeStamp(0.004051252839966657);
    msg.setSource(55058U);
    msg.setSourceEntity(1U);
    msg.setDestination(32534U);
    msg.setDestinationEntity(212U);
    msg.base_lat = 0.8432454789288347;
    msg.base_lon = 0.3774796117340319;
    msg.base_time = 0.27376098558372997;
    const signed char tmp_msg_0[] = {-49, -57, -39, 34, -121, 34, -70, 55, 80, 28, -104, -10, 84, -128, -8, 95, -73, -73, 96, -78, 43, 92, -72, -81, -65, -52, -115, 116, -22, 65, 93, 33, -16, 60, 76, -16, -71, 64, -89, -99, -71, 77, -113, -81, -2, -65, 17, 7, 81, 98, 58, -67, 64, -37, 73, 9, -118, -89, 105, -4, 72, 69, -47, 86, -84, -90, -106, -21, 82, 125, 16, 4, 27, -62, -6, 84, 57, -92, -98, 57, -44, -103, -116, -8, 104, 16, -103, -35, -75, 94, -16, -74, 5, 47, -92, 25, -128, -35, -80, -17, -60, 76, -19, 80, -127, -35, -113, -25, -26, 38, -54, 18, -25, -57, 81, -8, -109, 96, -64, 40, -100, -33, -50, 93, -80, 43, -82, -105, 26, -87, -58, 119, 77, 10, 118, -46, -31, 97, -97, 62, 78, 50, -126, -74, -22, 107, -7, 61, -46, 94, -6, -23, 109, 61, -43, 34, 46, 60, 87, -78, -36, 119, -60, 75, 37, 5, -82, 108, 88, -83, 115, -93, 25, -27, -19, 115, -60, -89, 32, 120, 16, 49, -10, -120, -114, 88, 123, 2, 44, 72, 19, 116, 49, 62, 87, 47, 28, -6, -74, -19, -40, 126, 84, 9, -101, -23, -128, 63, 55, -46, 2, 111, -88, -19, 95, -15, 42, 96, -30, 39, 61, -115, -56, -53, 8, 114, -19, -126, -36, 20, 51, 94, -25, -58, -19, -38, -46, -53, -66, 104, 82};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompressedHistory #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricSample msg;
    msg.setTimeStamp(0.9270532610422589);
    msg.setSource(11115U);
    msg.setSourceEntity(17U);
    msg.setDestination(41630U);
    msg.setDestinationEntity(85U);
    msg.sys_id = 10411U;
    msg.priority = 92;
    msg.x = -28380;
    msg.y = 14756;
    msg.z = 26189;
    msg.t = -5754;
    IMC::RemoteState tmp_msg_0;
    tmp_msg_0.lat = 0.3401838831965571;
    tmp_msg_0.lon = 0.1179224578060265;
    tmp_msg_0.depth = 191U;
    tmp_msg_0.speed = 0.9471565592238553;
    tmp_msg_0.psi = 0.6324881279182415;
    msg.sample.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricSample #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricSample msg;
    msg.setTimeStamp(0.39535013096276284);
    msg.setSource(38806U);
    msg.setSourceEntity(74U);
    msg.setDestination(60203U);
    msg.setDestinationEntity(82U);
    msg.sys_id = 14528U;
    msg.priority = -41;
    msg.x = -1406;
    msg.y = -29512;
    msg.z = -21177;
    msg.t = -11457;
    IMC::FollowPath tmp_msg_0;
    tmp_msg_0.timeout = 51698U;
    tmp_msg_0.lat = 0.16498982296399356;
    tmp_msg_0.lon = 0.9482382946609305;
    tmp_msg_0.z = 0.1342989984957248;
    tmp_msg_0.z_units = 103U;
    tmp_msg_0.speed = 0.1668482757609856;
    tmp_msg_0.speed_units = 240U;
    IMC::PathPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.8189127135458381;
    tmp_tmp_msg_0_0.y = 0.5845688170604354;
    tmp_tmp_msg_0_0.z = 0.24725828030197738;
    tmp_msg_0.points.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("SQJMQRLSJSINVXWWIRWLVXHBBWPIKRWLVVJRJRSLHHRAQVZFUASLTEJJIUTAPZVPKCDSGMOGTCVKFYNZXXUBBTB");
    msg.sample.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricSample #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricSample msg;
    msg.setTimeStamp(0.6448309490206389);
    msg.setSource(63955U);
    msg.setSourceEntity(114U);
    msg.setDestination(60813U);
    msg.setDestinationEntity(40U);
    msg.sys_id = 42196U;
    msg.priority = 57;
    msg.x = 4769;
    msg.y = -29539;
    msg.z = -7026;
    msg.t = 15223;
    IMC::QueryEntityState tmp_msg_0;
    msg.sample.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricSample #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricDataQuery msg;
    msg.setTimeStamp(0.16568239688502484);
    msg.setSource(62065U);
    msg.setSourceEntity(27U);
    msg.setDestination(61495U);
    msg.setDestinationEntity(89U);
    msg.req_id = 12399U;
    msg.type = 211U;
    msg.max_size = 5057U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.42545565128474283;
    tmp_msg_0.base_lon = 0.5520339370505052;
    tmp_msg_0.base_time = 0.8053393255441121;
    msg.data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricDataQuery #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricDataQuery msg;
    msg.setTimeStamp(0.46467670312690845);
    msg.setSource(3879U);
    msg.setSourceEntity(127U);
    msg.setDestination(45500U);
    msg.setDestinationEntity(24U);
    msg.req_id = 47352U;
    msg.type = 108U;
    msg.max_size = 61052U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.46373528391473506;
    tmp_msg_0.base_lon = 0.43703787346052025;
    tmp_msg_0.base_time = 0.9718831724413989;
    msg.data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricDataQuery #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricDataQuery msg;
    msg.setTimeStamp(0.665311849782932);
    msg.setSource(27380U);
    msg.setSourceEntity(212U);
    msg.setDestination(32341U);
    msg.setDestinationEntity(47U);
    msg.req_id = 40086U;
    msg.type = 158U;
    msg.max_size = 12264U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.9145498498667823;
    tmp_msg_0.base_lon = 0.08657429897195112;
    tmp_msg_0.base_time = 0.5251360183645527;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 28259U;
    tmp_tmp_msg_0_0.priority = 5;
    tmp_tmp_msg_0_0.x = -9396;
    tmp_tmp_msg_0_0.y = 31238;
    tmp_tmp_msg_0_0.z = -2285;
    tmp_tmp_msg_0_0.t = -111;
    IMC::CurrentProfileCell tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.cell_position = 0.5023154916383852;
    tmp_tmp_msg_0_0.sample.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.data.push_back(tmp_tmp_msg_0_0);
    msg.data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricDataQuery #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteCommand msg;
    msg.setTimeStamp(0.6189042324393069);
    msg.setSource(42827U);
    msg.setSourceEntity(237U);
    msg.setDestination(58786U);
    msg.setDestinationEntity(244U);
    msg.original_source = 54241U;
    msg.destination = 24156U;
    msg.timeout = 0.2653210856753767;
    IMC::PlanDBState tmp_msg_0;
    tmp_msg_0.plan_count = 20260U;
    tmp_msg_0.plan_size = 3932924616U;
    tmp_msg_0.change_time = 0.4454554757659436;
    tmp_msg_0.change_sid = 33647U;
    tmp_msg_0.change_sname.assign("TMMLTIUVTATWCEVKNNWDYYNWGPQUBVTXKXBOJDZUVACCGXEAFXEHCIUHIU");
    const signed char tmp_tmp_msg_0_0[] = {-59, 20, 64, -39, 114, -1, 33, 119, 116, 9, 38, -58, -83, -91, 106, 70, 58, -112, -45, -128, 76, -1, -3, 26, -1, 59, -88, 115, -69, 43, 76, -118, 40, 17, 85, 72, -126, -94, -110, 32, -101, -53, 83, 0, 9, 101, -86, -94, 121, -73, 46, 107, -22};
    tmp_msg_0.md5.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.cmd.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteCommand #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteCommand msg;
    msg.setTimeStamp(0.22894485602236736);
    msg.setSource(49632U);
    msg.setSourceEntity(33U);
    msg.setDestination(43714U);
    msg.setDestinationEntity(216U);
    msg.original_source = 17745U;
    msg.destination = 30060U;
    msg.timeout = 0.5709626860540946;
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("UOMDLTWIVNXMUYZXWDGSSSSKRUEYIGJKTTBHZB");
    tmp_msg_0.attr_type = 151U;
    tmp_msg_0.min.assign("VQXGYEPUTKVYDEFGWAAOVGTNFKKWSEBXBI");
    tmp_msg_0.max.assign("XCWDNZPRSIOPDPSAFHTKXZSNFEETRVSNVKRKRJMJSQ");
    msg.cmd.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteCommand #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteCommand msg;
    msg.setTimeStamp(0.012142273312890972);
    msg.setSource(6073U);
    msg.setSourceEntity(254U);
    msg.setDestination(62051U);
    msg.setDestinationEntity(131U);
    msg.original_source = 52559U;
    msg.destination = 40092U;
    msg.timeout = 0.9175539423584235;
    IMC::SimAcousticMessage tmp_msg_0;
    tmp_msg_0.lat = 0.37277947721552185;
    tmp_msg_0.lon = 0.8083592495214145;
    tmp_msg_0.depth = 0.9282425180201572;
    tmp_msg_0.sentence.assign("IUIKGOEXHPKLUEDUJAJWRAUPQXDZNEXEIOUOHKODNVYJGMGBSBLSDHHCRD");
    tmp_msg_0.txtime = 0.2149035517353698;
    tmp_msg_0.modem_type.assign("XJZZNQXCBEBHPRZCMYCIWMXDOSVVYJQRMEGHFHJPZESDKLQQBWUDDGHGTEAJTPVAKEDSTFMDIDVPLXGOXEVFSNIPNUCWKSEOJNJVRI");
    tmp_msg_0.sys_src.assign("ZNQOZTZQFZMXUMBNGVAAEQMSRIPTHJTPOLGWISNDZKOWWWLLHIPVCFXYNCOLDBOZJMZNAFBECCUWVGMDYKBWIPENSSHYVUQULZQBVFQJSLVKPJRZEMIATHISERPEMRTGPZXVVKPCTRRAGPLWYJPENGMBBRJLUCSQTTYGEAXCJQWKAYQDYOCNHYXYKFFEDLNKDCWD");
    tmp_msg_0.seq = 37452U;
    tmp_msg_0.sys_dst.assign("ZRYNZFLUBSYOXJHJLCOLTDZUEHGIULZMWBGDBHUWGPEGOMQTEPBECEVYCOIDZOJPHJVQVYVKOJGKHNBJLPFIPMIZIFUDSMXRGBARORKBRKHHTPWWQHDUNFVNXTLBVVEDFZDMUKACNPCTVXYGXHARQWVOPLITXXIMMLPLVUEXFJJTKQJSNSY");
    tmp_msg_0.flags = 126U;
    const signed char tmp_tmp_msg_0_0[] = {108, 122, -10, 14, 98, -58, 66, -127, -21, 55, 12, -61, 41, -81, 91, -81, 35, -12, 70, 63, 5, 6, 11, -75, 91, -123, -87, 101, -53, -67, -60, -114, -86, 124, -99, -21, 3, -91, 2, -40, 110, 7, 53, -112, 21, -43, -100, -14, -113, -49, -128, 25, 34, 81, -111, 115, 107, -118, 19, -118, -122, -6, 112, -67, 51, -105, 124, -71, 47, 11, 27, -68, 37, 6, 55, -22, -57, -76, 56, -19, 32, 15, -77, 23, 118, -70};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.cmd.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteCommand #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommSystemsQuery msg;
    msg.setTimeStamp(0.2942236279887571);
    msg.setSource(22355U);
    msg.setSourceEntity(96U);
    msg.setDestination(6679U);
    msg.setDestinationEntity(33U);
    msg.type = 117U;
    msg.comm_interface = 40073U;
    msg.model = 31066U;
    msg.list.assign("TCHMMHZDYRXOMBBKSMABZXOUZLRLJTORTEPTGXLIQFCUHHUJZNAILNNNWKIKVVXBMXKXGPEJDGPPMYSIGNDEQRCMQJGUPTVQNEVUTWTYWSFVIDSGUNOLNVEYJRBAKQGDRCFRWOHCXBVVRPEEKMXGQLQPTFVQKODCFSUDEFLPCFHIKYSAQBPGCJZKAWFYBPMIZJWSDJYBWOYJOEAZI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommSystemsQuery #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommSystemsQuery msg;
    msg.setTimeStamp(0.4587799426429673);
    msg.setSource(58816U);
    msg.setSourceEntity(39U);
    msg.setDestination(24010U);
    msg.setDestinationEntity(191U);
    msg.type = 137U;
    msg.comm_interface = 65272U;
    msg.model = 26485U;
    msg.list.assign("YRNHEIHBKLCJJHHZDOZQSCBLSKNNMHFNAXQKPMDBXEJLHAIFVQPTVYINLLY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommSystemsQuery #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommSystemsQuery msg;
    msg.setTimeStamp(0.8611411645292099);
    msg.setSource(4530U);
    msg.setSourceEntity(96U);
    msg.setDestination(44582U);
    msg.setDestinationEntity(158U);
    msg.type = 218U;
    msg.comm_interface = 5806U;
    msg.model = 51964U;
    msg.list.assign("JJGCMSJQAVIWACIINPMXIDNLGKCYEEWKYUXOSQEYLOYRZVOUVQATFQVDSCLFZDBBXVLMIJFPQCWABNFWCMUHPUPL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommSystemsQuery #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TelemetryMsg msg;
    msg.setTimeStamp(0.36009586041057795);
    msg.setSource(36552U);
    msg.setSourceEntity(191U);
    msg.setDestination(9136U);
    msg.setDestinationEntity(71U);
    msg.type = 78U;
    msg.req_id = 1244258587U;
    msg.ttl = 32147U;
    msg.code = 80U;
    msg.destination.assign("UWLFHRVRILCOREVMSODJUWWQUMTGEEZD");
    msg.source.assign("YXJWMZTPWSLPFYYDURKNBVWVVDQQTUPCJLXNESWEZZYJNMGKXIMOEBSFQXPSXJZLUQJIEHKPKFGYODOVFCUUFDNALGWINFIABQRKZCIDSBXVTYACFLRLOJPHRTXDNEZGTCUNWVTRRLXVSMAIHOMUMAWKGOGEEORTBCMLBCWQUHOBAQHNFVRQHZJTKKATYIUIGLJQPCJSYHPAQIJCNTCSEMXYYDKBHRZDPUDMOEPRWAHVMBBDGXE");
    msg.acknowledge = 240U;
    msg.status = 96U;
    const signed char tmp_msg_0[] = {-104, 98, -54, -114, 82, -1, -79, -125, 105, 116, -19, -21, -101, 71, 88, 116, -19, 89, 73, 90, 8, 62, 41, -65, 36, 4, -65, -9, -60, 61, -48, -93, -85, 85, 24, 88, 101, -3, 42, 45, 87, -48, -114, 73, -71, -63, 73, -27, 1, 26, 110, -50, -78, 26, -21, 89, -34, 39, 67, -76, -126, 125, 16, 108, 94, 112, -47, 124, -41, 3, 105, 77, -65, -86, -3, 56, 50, -55, -87, -15, 35, 12, 60, -71, -62, 94, -60, 68, 58, -107, -20, -35, -30, 58, 89, 37, 61, -30, -109, 9, -18, -127, 104, -55, -47, -28, -91, 55, -116, -33, -98, 60, -5, -13, 46, -126, 106, 82, -70, 61, 121, 79, 121, 4, 45, -127, 50, -58, 8, -1, -37, -49, -61, -44, -24, 48, -116, -91, 96, 8, 32, 58, -95, -31, 17, 48, 68, 43, 0, 70, 107, -100, 20, 65, -35, -68, -93, -117, -104, -94, 103, 98, -80, -9, 38, 92, -127, 108, -50, -76, 75, 89, 12, 55, -45, 126, 75, -34, 100, -104, 35, -12, -99, 57, -6, 34, 119, -65, -108, -55, -104, 43, 33, 60, 2, 20, -86, 61, 21, -32, -93, -92, 41, -10, 67, -91, 79, 63, 61, -85};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TelemetryMsg #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TelemetryMsg msg;
    msg.setTimeStamp(0.014073920960705477);
    msg.setSource(3905U);
    msg.setSourceEntity(93U);
    msg.setDestination(42776U);
    msg.setDestinationEntity(67U);
    msg.type = 34U;
    msg.req_id = 385913929U;
    msg.ttl = 56935U;
    msg.code = 129U;
    msg.destination.assign("GEXFGWOOEIJFMVLKUXBMCZWTLWGVZPOPHZWXJZVSEGWSBETLKRFQQRFEYCEINIURBPGOEWHHNFNXJPKYDIMLDJMBGZEZWPTZNUZGFKHBYJRAISDKMOPYLQJA");
    msg.source.assign("RRZYQVKODBJKQLBIDWAHVNFARDSPOOXBUZRHEQHTNMFEWNNWBEXTQWJOLLXALUONTHTQTHZRRJSSYUPUAEWANDPTJPPCCMSMCCVNARLJCRMHFAQPXKKQBVVKXMHDGEPISYEMDUIIUJID");
    msg.acknowledge = 198U;
    msg.status = 20U;
    const signed char tmp_msg_0[] = {112, -126, -93, 125, 3, -91, -105, -125, 97, 114, -66, -19, 25, -38, 5, -21, -23, 53, -101, -38, 78, -91, -75, -29, 54, 27, 49, 39, -48, -88, 94, -78, 112, 25, -21, 49, -63, -113, 109, 3, -45, 101, -8, 7, -94, 33, 46, -1, 124, 75, 74, 94, 101, 120, -74, -39, 74, 77, 112, -50, -96, -94, -89, -86, -85, -96, -77, 41, -36, 110, -103, -73, -61, 86, -53, 104, 1, -33, -51, -77, -103, 19, -26, -128, -111, 39, 30, 90, -94, 118, 21, 49, 79, -21, -16, -113, 28, -35, 90, -109, 28, 42, -98, 72, -115, -92, 62, 108, -33, -116, 51, 73, -69, 25, -12, -72, -97, -106, -72, -116, -57, -116, -84, -44, -92, 71, -56, -43, 65, 57, 40, -68, 10, -44, 19, -33, -12, 57, -77, 19, 85, 118, -40, 67, -48, -85, 65, -47, 49, 12, 87, 23, -75, 17, 68, 103, -32, -48, 54, 51, 93, -100, 102, -81, -37, -17, -32, 94, 55, 36, -114, 112, -68, -7, -61, -79, 22, -42, -60, 38, -36, -108, 43, -70, -56, 87, 100, -63, 76, -91, 112, 35, 58, -57, 50, 119, -48, -94, -42, 21, 22, 26, -58, 99, 107, 101, 88, 23, 50, 96, 34, 25, 72, -13, -39, 93, -68, 92, 126, -126, -32, -53, -119, 10, -36, -68, 34, -57};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TelemetryMsg #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TelemetryMsg msg;
    msg.setTimeStamp(0.15630219731686823);
    msg.setSource(61813U);
    msg.setSourceEntity(47U);
    msg.setDestination(60428U);
    msg.setDestinationEntity(8U);
    msg.type = 11U;
    msg.req_id = 3252203309U;
    msg.ttl = 3483U;
    msg.code = 202U;
    msg.destination.assign("YQCUGAFARWWODCGAUNFXTGYAITXTDNHMQBDLTCNTIIHCWPHAEMBRDVCMKNKBXKAIWZXAYYLPAGZVPYKXULZOKGBSEUFIQSVGLLWJTYFTRFXWSFJZRFXZNYAUSJZZAOKMOORMPQCUZXHRQQRPZBTCRONOFEBLEOW");
    msg.source.assign("DVLJTLXCCZEWXUPJFQAMNATLFWCNQEDPTKCCXRQQJDPYXHB");
    msg.acknowledge = 198U;
    msg.status = 250U;
    const signed char tmp_msg_0[] = {123, 52, 41, 118, 8, 43, -43, 37, -89, 92, 29, 64, -50, 15, 112, 6, 6, -90, -15, 108, -65, -110, 24, 122, -10, 42, 53, -4, -12, 3, 58, 57, -7, -88, -119, 110, -106, -102, -35, -27, 58, -46, -124, 90, -96, -92, -50, 119, 36, 107, 98, -100, -104, -39, 73, 111, 45, 37, 58, 61, -45, -103, 58, -124, -25, 5, -44, 50, 66, 56, -126, 5, 12, 117, -106, 27, -42, -74, 55, 10, -72, 19, -97, -91, 13, 55, 58, -107, 43, 46, 93, 107, -66, -46, -17, 15, 18, 64, 74, -47, 30, -122, -113, -109, 9, -66, -125, -123, 98, 122, -88, 116, -69, -86, -4, -103, 14, 79, 107, 30, 119, -113, 75, 19, -45, -18, -70, 6, -63, -120, -76, 82, -51, -55, -24, -83, 15, 110, -11, -4, 19, -106, -26, -55, -91, 2, 44, 78, -101, -125, 5, -123, 28, 55, -117, 27, -112, -126, 42, -40, 46, -107, -29, 19, -117, -48, -10, 26, 14, 114, 58, 73, -54, -95, -62, -37, -3, -41, -3, -9, 79, 101, 1, -109, -47, 0, 20, -20, 97, 94, -78, -81, -18, 27, -2, 80, -52, -54, 0, 24, 14, -14, 74, -61, 109, 45, -12, -36, -66, -63, 99, -116, -49, 88, 8, 110, -115, -51, -109, -105, -119, 117, 11, 57, 106, 52, -67, 59, 10, -88, -66, 15, -17, -55, -4, -109, -77, -59, 121, -119, 125, -17, -52, 48, 19, -120, 10, -30, 50, 110, 116, 25, 51, 63};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TelemetryMsg #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRange msg;
    msg.setTimeStamp(0.9756374403140626);
    msg.setSource(39474U);
    msg.setSourceEntity(186U);
    msg.setDestination(12633U);
    msg.setDestinationEntity(115U);
    msg.id = 98U;
    msg.range = 0.14946572183565743;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRange #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRange msg;
    msg.setTimeStamp(0.9005912878789253);
    msg.setSource(41519U);
    msg.setSourceEntity(5U);
    msg.setDestination(24131U);
    msg.setDestinationEntity(31U);
    msg.id = 158U;
    msg.range = 0.4089696958099548;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRange #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRange msg;
    msg.setTimeStamp(0.44591059560085156);
    msg.setSource(45155U);
    msg.setSourceEntity(0U);
    msg.setDestination(41347U);
    msg.setDestinationEntity(243U);
    msg.id = 123U;
    msg.range = 0.08844138248701161;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRange #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblBeacon msg;
    msg.setTimeStamp(0.6002312117393243);
    msg.setSource(48972U);
    msg.setSourceEntity(46U);
    msg.setDestination(3885U);
    msg.setDestinationEntity(13U);
    msg.beacon.assign("CYRKZCEXQIRBOPXOZBXVWLRYFIEBGIXCACLFGOEJLEMQAARYIIAHIHUGZWQZKIUZMDBJMVFHNAXDBNLSTVUIQPWXPLDLJXNJNOCSSJRJUVVKVQRYVGHTMHHLDKTYKXFSONXEZKFNBYRSUZFJSYUKASPGPMOOCYDAFFETFAWSNCTWYCXGIAWBPKGMBQVNORFMEQWTVJRTMNWQTHWR");
    msg.lat = 0.5790647001537924;
    msg.lon = 0.428064440814248;
    msg.depth = 0.059376727450047184;
    msg.query_channel = 141U;
    msg.reply_channel = 229U;
    msg.transponder_delay = 225U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblBeacon #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblBeacon msg;
    msg.setTimeStamp(0.03805652284738248);
    msg.setSource(28287U);
    msg.setSourceEntity(156U);
    msg.setDestination(4330U);
    msg.setDestinationEntity(34U);
    msg.beacon.assign("GTMJKSCXMHZYXDVKARCNMFMZFCQYBCSTDFUJCVXSLRQDFVOKSTGUGMQQMEKOCZY");
    msg.lat = 0.5114251913866645;
    msg.lon = 0.8846677057115053;
    msg.depth = 0.9751674027437076;
    msg.query_channel = 170U;
    msg.reply_channel = 252U;
    msg.transponder_delay = 23U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblBeacon #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblBeacon msg;
    msg.setTimeStamp(0.8530221946095904);
    msg.setSource(25197U);
    msg.setSourceEntity(157U);
    msg.setDestination(8121U);
    msg.setDestinationEntity(61U);
    msg.beacon.assign("ZHWDOQZORSPTWVXBYWLGHXNHORTCPMYPDEOEUGDWYINVYNFKZEJLZIGFXUVDTBIIECSNDSPCYVALILHMJBTPNOFAJLMKLKBJTWWYGECMUEWDHAAZYYQQTDRHRAFSZASMBUZNLIKOJXKYQNLPXJCLIZPETGUSSQVNVRKDCZFPFUGMSVRUIZKQGFJSKWTI");
    msg.lat = 0.40178337484408844;
    msg.lon = 0.12365632983116082;
    msg.depth = 0.7259281523340938;
    msg.query_channel = 94U;
    msg.reply_channel = 96U;
    msg.transponder_delay = 91U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblBeacon #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblConfig msg;
    msg.setTimeStamp(0.36732631569442076);
    msg.setSource(47178U);
    msg.setSourceEntity(106U);
    msg.setDestination(53941U);
    msg.setDestinationEntity(142U);
    msg.op = 21U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("QSUUVQROVACTMZBWIHBGQCEGGPVIACUDMVLZKQBEAHWKKRDNHNHSNOYHWEMBNBAYFXMDHEUPNJXYHCWPQUXPIRKITFWKCXLSCPNFVMOLDKJLSLJAFMMX");
    tmp_msg_0.lat = 0.6150420585551046;
    tmp_msg_0.lon = 0.4626698252711142;
    tmp_msg_0.depth = 0.233952258931019;
    tmp_msg_0.query_channel = 45U;
    tmp_msg_0.reply_channel = 116U;
    tmp_msg_0.transponder_delay = 72U;
    msg.beacons.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblConfig #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblConfig msg;
    msg.setTimeStamp(0.3834457550538477);
    msg.setSource(58909U);
    msg.setSourceEntity(70U);
    msg.setDestination(19286U);
    msg.setDestinationEntity(33U);
    msg.op = 228U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("OLZZPYKAYNXJLUSOYXMWEDXEDXIQODPWTPAHQPTJEIRYZMCUENNQQACBVEZTQIVZLBRWGIHMRHZYRCGQLISUQJQWWCXDEFAVKJCBZAOWHQRLGCRAPCSFJHOBBV");
    tmp_msg_0.lat = 0.7637370373581355;
    tmp_msg_0.lon = 0.2852514649320489;
    tmp_msg_0.depth = 0.3000293137846982;
    tmp_msg_0.query_channel = 240U;
    tmp_msg_0.reply_channel = 44U;
    tmp_msg_0.transponder_delay = 157U;
    msg.beacons.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblConfig #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblConfig msg;
    msg.setTimeStamp(0.24603521203096945);
    msg.setSource(30136U);
    msg.setSourceEntity(140U);
    msg.setDestination(54479U);
    msg.setDestinationEntity(168U);
    msg.op = 186U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("JUZRTMSBDBVWIMQZDZZNGNKWDHHOEEDOQSTVBTOBUYAXKECGZEVFKHYDXRFVVHMFKPTXQNZEKOQNFQGURXU");
    tmp_msg_0.lat = 0.6845200171974649;
    tmp_msg_0.lon = 0.043130687663762046;
    tmp_msg_0.depth = 0.059624749179912895;
    tmp_msg_0.query_channel = 63U;
    tmp_msg_0.reply_channel = 32U;
    tmp_msg_0.transponder_delay = 173U;
    msg.beacons.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblConfig #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticMessage msg;
    msg.setTimeStamp(0.5028226446950235);
    msg.setSource(49620U);
    msg.setSourceEntity(250U);
    msg.setDestination(54743U);
    msg.setDestinationEntity(154U);
    IMC::SetLedBrightness tmp_msg_0;
    tmp_msg_0.name.assign("CBDLYBHQIAECLVEIYJOUVMBNAFUURHFNAJUZAKIVYZNDNMGCQVPRKDDXTQRSUFANNTWSYRWDOJWRHGQLBFTJISEXKPUJBAYGNKFRLITGHLXPPUWOPRGJCQOLNNEWMQKADMCKGWJMSREZZJMHCPCWGETOZDVMFJSEOBIBWQJYOBXYDQGSUKCZHSBFVEVVKWVLBPEYTPAVYINIDRGTUGTFCIYCLRZXHMMQLXOISTH");
    tmp_msg_0.value = 73U;
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticMessage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticMessage msg;
    msg.setTimeStamp(0.8162038930271271);
    msg.setSource(32164U);
    msg.setSourceEntity(165U);
    msg.setDestination(47405U);
    msg.setDestinationEntity(142U);
    IMC::GroundVelocity tmp_msg_0;
    tmp_msg_0.validity = 111U;
    tmp_msg_0.x = 0.054468651467557305;
    tmp_msg_0.y = 0.1953604785544979;
    tmp_msg_0.z = 0.8403923330997298;
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticMessage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticMessage msg;
    msg.setTimeStamp(0.03425621863086259);
    msg.setSource(54884U);
    msg.setSourceEntity(230U);
    msg.setDestination(63010U);
    msg.setDestinationEntity(67U);
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("UHQYRJMKQEFXYGOSCBXKZUSGANXTFQBVXUGOLYIGNVIDLIVQXDTMWSGXTYVKXPXZJLEEMBSHJVZHFZRRCRJCATQUGQZDYWNTQBQVRHOABLHDJDVEAKWNNCWHLYDFUEVNNOAGIOWOSPQPXBKUGHZORFKPCCTEFDTWKESLAQVWPBRPUPYICPRTLCPMJOBJOMHMYIGZKIRHAABMEZWPSFOJUFIILJIAZUECNKSLMBNLJMATVGXHWNYFDYDRD");
    tmp_msg_0.value.assign("DXBYQZHFTAOBZCDXEQNUAQSULYKKPKQOLSNMNFRFVALTKGGZDXYMHFXTJISPDDIRXFEKUIUTDWMSTVEOSABGTRVZSUSXYHHLAKINFIDMDPAHFCYCLCJYISPJMEHFYIZBRAGCWTJSCTHUAHXGWQRVQTWMJULVOQWLMLRHJJFWOUXZBUDPPQORGCNNGUEPAJJBGOXMKK");
    tmp_msg_0.type = 245U;
    tmp_msg_0.access = 233U;
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticMessage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SimAcousticMessage msg;
    msg.setTimeStamp(0.635422883273789);
    msg.setSource(45714U);
    msg.setSourceEntity(87U);
    msg.setDestination(49569U);
    msg.setDestinationEntity(123U);
    msg.lat = 0.0738723349394631;
    msg.lon = 0.2517325320424685;
    msg.depth = 0.25239436644195057;
    msg.sentence.assign("IJCKRYKOWCBDQANGCZYZZJEVIVDZQGYMNXAAJQBWCWLFLHCUOVVRTGWULMBTMBVJVEBDGDXMIYTLXSAYKLGNQUQFECKSHBBEPAMXENCBTCRNRGYHHJGJHMHEIPKOIJWDMTZBRSUETDGJRFAKXUXNHKKUTUVFIPNPMDWIGQJWYLO");
    msg.txtime = 0.290593679969276;
    msg.modem_type.assign("KPJLVKOGDCJOXDKSALUPPG");
    msg.sys_src.assign("SYYPEAVGSFYRYLOKVOWLKRGCDYCRHPYUNEOYOWTCBQFHSFFTDXUVSQHGZWNKIYQTNITOBVKWSYPEJELIAIQIB");
    msg.seq = 45482U;
    msg.sys_dst.assign("EQVKOUBUMGPHAMRRUWNPVQBEEUPEBEIVJPINMXKMCFTSNQNAXHGZVCGAVRUXXGAOGRFHRWTXYH");
    msg.flags = 157U;
    const signed char tmp_msg_0[] = {-13, -110, 63, -96, -74, -47, 10, -54, -57, 51, 12, -9, -116, 74, -26, -76, 70, 9, -14, -66, -63, -34, -60, -40, 42, 23, -58, 75, -11, -98, -96, 14, 22, 58, -15, 115, -23, 48, 51, -59, -120, 48, 84, -85, -28, -26, -2, 16, 34, 24, -44, 34, 120, 125, 111, 2, -25, 46, 107, 59, 58, -111, 6, -119};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SimAcousticMessage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SimAcousticMessage msg;
    msg.setTimeStamp(0.530029244056251);
    msg.setSource(52689U);
    msg.setSourceEntity(82U);
    msg.setDestination(21608U);
    msg.setDestinationEntity(208U);
    msg.lat = 0.028559364338865634;
    msg.lon = 0.843832669687486;
    msg.depth = 0.07225526427956419;
    msg.sentence.assign("UBCVARFIKHSRVKTSCEOJYYVDKMRJSPNUGNWAFIIBGHGBLRAFZBCTAHDULGINKDBKGXPFFCHBJNSWVNQIRKT");
    msg.txtime = 0.20608037370726928;
    msg.modem_type.assign("HWDUVYLEBCVHNJYMESZXOLVLNWJFGSQFWONTAOXCCUNKHCROPSNJTYXOPKDWNBPIZMKANRKIKTQQPMAYVVDILKPVRCTFMFADTGDFVYRSHXFWJRKMYSQSZGBEUMZSIJ");
    msg.sys_src.assign("HJJHAKROJTIZMFJOVBRKXQSECWBSAYZCHWWIDSCXWOQPHCQTGPGJAKNDFVGOBGYUSNRIQRHHBUUJMKGDCVALOXQBMEWNGKHRRPJQOPNZHITTIWJUDXGUKSGPNEZZCRPPETNAYISBBZMBTEEWMRCNPKISZDULHW");
    msg.seq = 30136U;
    msg.sys_dst.assign("ELHDGYJWIWKRQRZLKEVAJCKOISIARAHUDDLEIJFFJUKFGTSPBAVGQFCMBNDSIUXJKZCCVMDEROPYPXVNNXCTKOXKLVFJREFYQBFNVVAGDHCHGLPYERRTCWENWUSBYGZZYYUZKHDYHLKWSVKYTGIJRXMSQHTUBOAXXYMBPPSAXEUSJTGHBQXIQINLPZUONPFUWZDMXDAZPOITQBMQAOMZLCOCUEOWINFWHTLVWPLQGDGTFSVNQRSHM");
    msg.flags = 142U;
    const signed char tmp_msg_0[] = {-69, -119, 81, 52, 86, -1, -92, -20, 74, 44, -60, 102, -78, 116, 41, 42, 14, -119, -27, -64, -100, 56, -47, -80, -85, -89, -23, -102, -60, -74, -61, -3, 68, -31, -109, -39, -124, -90, 66, -88, 73, -96, 29, 76, -57, -25, 14, -103, -113, 49, -43, -105, 12, -11, 57, 91, 64, -92, -61, 49, -89, 30, -107, -36, 24, 34, -48, -24, 116, -105, -74, -119, 33, 125, -73, 62, -35, 113, 18, 78, -98, -112, -8, 48, -87, 100, 5, -59, 58, -107, 47, 46, -19, 7, -62, 81, 90, -29, -77, -115, 13, -90, -65, 79, -28, 15, 55, 17, -24, -74, 83, 35, -81, 122, -44, -36, -11};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SimAcousticMessage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SimAcousticMessage msg;
    msg.setTimeStamp(0.14556543593034565);
    msg.setSource(27055U);
    msg.setSourceEntity(117U);
    msg.setDestination(33795U);
    msg.setDestinationEntity(27U);
    msg.lat = 0.7494857335018964;
    msg.lon = 0.27649555377160095;
    msg.depth = 0.826346213606327;
    msg.sentence.assign("IBQGTTZKWYVMUCKWDFWOENYNZYQRCDIPOSVMHFYHRTOREQLUIXJYSWCKXXIGYBWUAVMFTVRQMNMEPRM");
    msg.txtime = 0.8779656486281999;
    msg.modem_type.assign("FEUKXRJXWOUNUJKHVRXXONSZWYEDLGBETNLRLEAUQPFYXMGOFUAXOFWHQLNTZCAYTKPJDTDABPRKWPIGAKQKSHJNCQJHOIRBCBFJJEAKOCMVWATQYBRHBIDZLASUJWTKEZBCXIVYNPCAXTOCMBEVPKGYINGZULENVQZWHZRVTLGSXMCDZLPHDYJBTROFYVWQFHFIVGUOYI");
    msg.sys_src.assign("UTHTZXKBAFMJMVCQDGPTVYXSXXDHQULDOAQBJBDHMVXUDLKHSYWTJZAWELCLVCKPOJOQEPPPLMGCNINLROZJVN");
    msg.seq = 29968U;
    msg.sys_dst.assign("QFEFYTIEJFQABAFURCIMYTNLUCIVNKWXGKKRVZCACDBROHZOUEWJKVSCLCHWLWPEZAUAYBTGWQJJTSNNSYNDUHPTAMPDAZSYMLMXFQJERKOFJAVBIXJWZ");
    msg.flags = 198U;
    const signed char tmp_msg_0[] = {87, 80, 17, -100, -1, 13, 98, 38, -25, 112, -81, -102, -45, -52, 14, -14, -117, -107, 72, 35, 9, -18, -45, -42, 92, 99, 63, 56, -22, 113, -85, 40, -26, 79, -86, 99, -117, -63, -66, 23, 27, -118, 15, -9, 112, 84, 15, -98, 19, -67, 108, -58, -121, -70, 36, 111, 118, -25, 100, 75, -69, -12, -58, -37, 68, -94, -100, -7, 109, -96, 7, 39, -61, 95, -101, 63, -56, 69, -92, -115, -47, 110, 17, -2, 33, 51, 42, -83, -17, 68, 97, -128, 86, -79, -53, -112, 71, -63, 88, -10, 65, -64, 87, -83, -120, 96, 99, 82, 116, -63, 112, -122, 125, 20, 1, 67, 24, 125, -19, 51, -67, 37, 110, 78, -21, 88, 56, -64, 4, 15, -61, 3, 79, -60, 34};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SimAcousticMessage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticOperation msg;
    msg.setTimeStamp(0.9377786277548379);
    msg.setSource(58331U);
    msg.setSourceEntity(47U);
    msg.setDestination(61464U);
    msg.setDestinationEntity(184U);
    msg.op = 195U;
    msg.system.assign("KULTEFMMQCXOQZACHMNPXGICEWWHFIFQYADSLP");
    msg.range = 0.3318545742631991;
    IMC::RSSI tmp_msg_0;
    tmp_msg_0.value = 0.8585901179765164;
    msg.msg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticOperation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticOperation msg;
    msg.setTimeStamp(0.7154153388392717);
    msg.setSource(45528U);
    msg.setSourceEntity(74U);
    msg.setDestination(58693U);
    msg.setDestinationEntity(139U);
    msg.op = 43U;
    msg.system.assign("JVLYHEXDLP");
    msg.range = 0.6643573249563113;
    IMC::WaterDensity tmp_msg_0;
    tmp_msg_0.value = 0.16411962307992456;
    msg.msg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticOperation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticOperation msg;
    msg.setTimeStamp(0.15930035060043812);
    msg.setSource(14132U);
    msg.setSourceEntity(12U);
    msg.setDestination(35628U);
    msg.setDestinationEntity(123U);
    msg.op = 8U;
    msg.system.assign("DXBRLVDOVVMPICWJBXBKUSYLIXHQZNBRGRNZBTCLULQPXJMEKMXWRQEJBDGGKHNUDSVRPIJNJFKEKAKLZSKEPZSONNTNWSHUUEGMCOLSYOOVOPWSCRVFTUYBWWFMHIXBYAFIYRVLDHUTTQFIIMSEDATRNOSPZMYGCJDEWHVIDFACYFDJIXRXUMWZBHTQACOACZQGZFQHKKQ");
    msg.range = 0.9018345903716258;
    IMC::FollowReference tmp_msg_0;
    tmp_msg_0.control_src = 63194U;
    tmp_msg_0.control_ent = 201U;
    tmp_msg_0.timeout = 0.7935335832803861;
    tmp_msg_0.loiter_radius = 0.5051110010730332;
    tmp_msg_0.altitude_interval = 0.14369186127585964;
    msg.msg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticOperation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystemsQuery msg;
    msg.setTimeStamp(0.2772169234536531);
    msg.setSource(21849U);
    msg.setSourceEntity(163U);
    msg.setDestination(48918U);
    msg.setDestinationEntity(76U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystemsQuery #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystemsQuery msg;
    msg.setTimeStamp(0.8286917760944524);
    msg.setSource(25260U);
    msg.setSourceEntity(158U);
    msg.setDestination(63620U);
    msg.setDestinationEntity(99U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystemsQuery #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystemsQuery msg;
    msg.setTimeStamp(0.520227964871963);
    msg.setSource(2667U);
    msg.setSourceEntity(60U);
    msg.setDestination(8228U);
    msg.setDestinationEntity(28U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystemsQuery #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystems msg;
    msg.setTimeStamp(0.7984158608876024);
    msg.setSource(46092U);
    msg.setSourceEntity(131U);
    msg.setDestination(24742U);
    msg.setDestinationEntity(147U);
    msg.list.assign("JVPWVBYMKNVGOPHELQEJZAQQHSZBRLVQMYWMAXOUYSEA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystems #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystems msg;
    msg.setTimeStamp(0.2031815578912084);
    msg.setSource(59115U);
    msg.setSourceEntity(238U);
    msg.setDestination(62998U);
    msg.setDestinationEntity(203U);
    msg.list.assign("VFYVRKVYMGMOWAAYGQTPBQDGYBKBONSCJEXZKUHQZXFTGAOYJYNLMIGFWNMHPNZJZGZEBVPOWRZROUPNIPVCAHVESLIMKRCFLFUWQIZHFQUTLNKACJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystems #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystems msg;
    msg.setTimeStamp(0.3223223812686834);
    msg.setSource(16545U);
    msg.setSourceEntity(28U);
    msg.setDestination(18679U);
    msg.setDestinationEntity(114U);
    msg.list.assign("EZCSXVOXNZAVOFKEJROVAEDDZLBADZYWLJCJEKMGGIIWALUWEGWWTTDYMSPRDKIJKGDCPYINZJBURNLQIMKLNAALZXGKMHFSUQVVLWHFGCRURDYGXSQTIRUACMVNAEEBSTJIJZQZFBRKLHQOUMTHLQRPIATIOHGFYTLENPPSCABHXSWPXDNXWNUSVTOBXPBGBUTBVFOWYYXRFDPNHUIENQJBMPXKYUCHMFZHCOG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystems #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticLink msg;
    msg.setTimeStamp(0.46561857502800563);
    msg.setSource(23671U);
    msg.setSourceEntity(234U);
    msg.setDestination(22790U);
    msg.setDestinationEntity(65U);
    msg.peer.assign("WZOVTAXSHWNOFPZMEXJACIMNZTQEBBJFYXHZGVSFQUPPHEXTBXWGUYWQLFUVSQFSDMSTPLQQVERKIGYCICKMYIBPDIHIOTODWUTSELZJQTJODKFGWZBMUHPXLFWEOJTMQUDFDXNRSWUVJNRACRRCVKPZUIAGKFZPAOJXVNOGPYIVHRGCEARMBLGDIN");
    msg.rssi = 0.35317313733674427;
    msg.integrity = 45008U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticLink #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticLink msg;
    msg.setTimeStamp(0.7644442786397145);
    msg.setSource(42343U);
    msg.setSourceEntity(223U);
    msg.setDestination(48454U);
    msg.setDestinationEntity(74U);
    msg.peer.assign("UWMIDFCUFHKDRZGJWDELVRCSJJXBKYTDJIOHRZIRSSLPCTBSURBKHXHWTGMPBXJFHRWCPGWLZPQFLWMJMUNYRZOSVAKCMYAOAZWCAKSJEVLMXEAIXNMPCNKBVZOYWQYHLKWVGVDUVRFMPZNBBCXSERXEUPCDUBJAUVJKNAZZHDFKTQ");
    msg.rssi = 0.4239782368977518;
    msg.integrity = 29385U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticLink #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticLink msg;
    msg.setTimeStamp(0.8012642818169449);
    msg.setSource(51726U);
    msg.setSourceEntity(204U);
    msg.setDestination(56725U);
    msg.setDestinationEntity(57U);
    msg.peer.assign("ZZBGMABWTVTUOJEHYBOJHWJFAZXLOCEGLILSJWUSWKBPUUVKIJBVHDBHADUYMXQSQFYVAGNIWPLPZDAWXRXUJCTVNYXWFMDPUMYECNITKETCOIYQNRMKOJAVMXRTHIZHEMXQJXZMZDRQHSZKFJLKLSKQHGGRTSNOBEWBDFRE");
    msg.rssi = 0.18274784977199554;
    msg.integrity = 16646U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticLink #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticRequest msg;
    msg.setTimeStamp(0.6845096312861156);
    msg.setSource(31797U);
    msg.setSourceEntity(40U);
    msg.setDestination(34061U);
    msg.setDestinationEntity(101U);
    msg.req_id = 56522U;
    msg.destination.assign("CSGRZWUASBZUJNSXNOBJWALUTYEXGMTHCXMPFMCIFDVSSUZHZOXTNCETJCYQOPKCODXSQKKLLNPGXMKPIHEITZIJPILQJQRGBIBVHMQSPKNJZSDIKPWJDJAOFHFKDTSMRNFQUQXMLOLYAPLTCAKDHRKXTMEPJSFANAEWYWEXBFTIRDWZEUGHGAAVHUDWRDWIYYOJEQYPVGGHBVVLBTCKBLROQFERGZ");
    msg.timeout = 0.18903167550851108;
    msg.range = 0.15506666666991953;
    msg.type = 195U;
    IMC::Target tmp_msg_0;
    tmp_msg_0.label.assign("RKJMNIDHAASDPJSBFBOMFZCYNKSYDZVXHKUWEUGARBJRXZBZAWNTWTOANLFBMYKEQSMLKFRDLCPYXDHTIDSEOREFWIBVXVLSMQLGLOEWANSBGNWPHFQUZHTMTWEOEYILCOPLUBITTLUGYYEODYIRRPWH");
    tmp_msg_0.lat = 0.07012080363292184;
    tmp_msg_0.lon = 0.36503175963506385;
    tmp_msg_0.z = 0.5028891838688327;
    tmp_msg_0.z_units = 41U;
    tmp_msg_0.cog = 0.13305133528035806;
    tmp_msg_0.sog = 0.6907880692862509;
    msg.msg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticRequest #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticRequest msg;
    msg.setTimeStamp(0.3778548470743086);
    msg.setSource(17174U);
    msg.setSourceEntity(80U);
    msg.setDestination(5162U);
    msg.setDestinationEntity(234U);
    msg.req_id = 20864U;
    msg.destination.assign("WMTKCFUSLRMAMTERSBULKZOBIPEAKXZMQHXLWWHJKDBLWSCKHPISRVOVBUVNAXULMDEJTELQRUXYZFXSFIQHUIBALJKFTEOWRPCKHWHJNDSDDKIUDPZVJQVXFRCIMWJBQWRPFZGSVLAJMUHCADTIVYIORZNBVPCMGPG");
    msg.timeout = 0.961890878526234;
    msg.range = 0.22774266589132908;
    msg.type = 123U;
    IMC::Formation tmp_msg_0;
    tmp_msg_0.formation_name.assign("KCFVAGWOYIYYNSFIQPSVNEYSUEBHCZMOABGRJYUQACZDHMUFZDGAMJLVMSIHJZLLUOKXNUSGXUHJTRRTECYGLBNKXEQVPHOCBOIBAP");
    tmp_msg_0.type = 51U;
    tmp_msg_0.op = 37U;
    tmp_msg_0.group_name.assign("MUCNXUVJKODHXFLGJUFLCRPQQKIVNVIVDWEJUYSZEURWEHOPCVIOSLDHJBSILQCMHFRDYXRFBBCTTOVSCWXAQQZPKNXZZFEWEFKBAXVYFAOPLMBXYKJDVGAHQDMAWYEBYYPDDWOSKBWGFQ");
    tmp_msg_0.plan_id.assign("PEVATFTMJSGYRYSWDOGQZQOJIKFNLLGUKSWBOCNJWCGIDLPPZJEKXHGPRYFUDOVKB");
    tmp_msg_0.description.assign("XSVOZFBNFMEVDANWOMDUBWMHSNOXAJKNZYRJETRUYHOLPNTPBQDWWFMVRPANOPKAAZBLUCRHCRLPOFUIFSZDZFSWTBICFEYHSNPODCSTEMOTXQBSEVNZGPVKXGDUCTIURKLYRJHQPISMQEHBWDHVTQTMKZUOFGEJVCAVQDUDBIWTWYGIGIRVAFIFGCKZYMAEBJVIXQJXRMXNYTZRNLJAMKWECGJGSYQZIUHGQBCOPHJLKKAJQLLLWYGKDEYXPC");
    tmp_msg_0.reference_frame = 170U;
    tmp_msg_0.leader_bank_lim = 0.018073635858586345;
    tmp_msg_0.leader_speed_min = 0.03762998279361496;
    tmp_msg_0.leader_speed_max = 0.1999118308309451;
    tmp_msg_0.leader_alt_min = 0.5628133907861429;
    tmp_msg_0.leader_alt_max = 0.2930413838760255;
    tmp_msg_0.pos_sim_err_lim = 0.8061694228653893;
    tmp_msg_0.pos_sim_err_wrn = 0.07014414964519855;
    tmp_msg_0.pos_sim_err_timeout = 30640U;
    tmp_msg_0.converg_max = 0.5524397539393966;
    tmp_msg_0.converg_timeout = 64927U;
    tmp_msg_0.comms_timeout = 32071U;
    tmp_msg_0.turb_lim = 0.4336701176807648;
    tmp_msg_0.custom.assign("AKGUAYWLKQSJFYMOLKMVZETQMPBIAVQEVOSYUKTJGFRDBGXZPVRMGOPAXLUKWULKOBYWSEXADCGDTLEQVJFJWUJGPASVZPXSIHDXREQUXWQHIDPPEOZNCVGNFIGTNFQLDAFPEYSIBFBKRJXMAPYBRCCZSMKDBWOCCKNWVNNEDCMLSBTOLRPWOMHSHKXYCITDXHFEZYOTHXORHBFVV");
    msg.msg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticRequest #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticRequest msg;
    msg.setTimeStamp(0.9249560290058909);
    msg.setSource(22235U);
    msg.setSourceEntity(252U);
    msg.setDestination(17588U);
    msg.setDestinationEntity(76U);
    msg.req_id = 34764U;
    msg.destination.assign("NBLQRPIKDSRRVLNWTDZKEWDVNAUWPEGBRWUMLZKLEPMEMYNAVNQZXXNVHVQVTKMDDHOTXINOXVCSAEISULBFZDPDPZOQGJKJDUNBCYYJGXJIBCUGSQFOKHFRR");
    msg.timeout = 0.7609612300839783;
    msg.range = 0.5849598349207603;
    msg.type = 145U;
    IMC::Loiter tmp_msg_0;
    tmp_msg_0.timeout = 6905U;
    tmp_msg_0.lat = 0.4544436226694929;
    tmp_msg_0.lon = 0.6316104197535912;
    tmp_msg_0.z = 0.44803471622696356;
    tmp_msg_0.z_units = 233U;
    tmp_msg_0.duration = 29919U;
    tmp_msg_0.speed = 0.7542204746960232;
    tmp_msg_0.speed_units = 204U;
    tmp_msg_0.type = 100U;
    tmp_msg_0.radius = 0.4595305192536029;
    tmp_msg_0.length = 0.5927631724356609;
    tmp_msg_0.bearing = 0.3557979088793145;
    tmp_msg_0.direction = 114U;
    tmp_msg_0.custom.assign("QGAZTEPZKLBCNSYUMYLGRZTPQAWLJEHWLRHLTHYFDRDCGYIBLSFYEXZGWECDMKDPTVRDSYYIVUWORNXBYQIRTWBJZCLVFXOGOVSVEKMPNFHANIWSDLDUUWOFHBHS");
    msg.msg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticRequest #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticStatus msg;
    msg.setTimeStamp(0.39583488700632397);
    msg.setSource(32497U);
    msg.setSourceEntity(223U);
    msg.setDestination(34224U);
    msg.setDestinationEntity(41U);
    msg.req_id = 33748U;
    msg.type = 184U;
    msg.status = 56U;
    msg.info.assign("HMFNLXCAWIAJKNYOCWYCAJQXLPUTDQQUTVYRTAEUCREESDVZDSBAHOYJHEAYWSYDFRKGCQOEMWWPNTHREJO");
    msg.range = 0.24684955314485812;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticStatus msg;
    msg.setTimeStamp(0.29295930130137193);
    msg.setSource(64612U);
    msg.setSourceEntity(225U);
    msg.setDestination(64680U);
    msg.setDestinationEntity(103U);
    msg.req_id = 62436U;
    msg.type = 131U;
    msg.status = 235U;
    msg.info.assign("OEOXFTKTSPUDVHSIPCRHDLXTWLUIEXYEDVFNCJMTVYAVMNRYRZXGIGIRWSWCJTQSSJFQDAACKLUMFKUSTCFBXDHRZSBFKIIVCSBAYZYEUAFGJPWRQWZPNGCDHMXGQCLIYSIVXLOTEPPVAM");
    msg.range = 0.7864102365307534;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticStatus msg;
    msg.setTimeStamp(0.8482289385354732);
    msg.setSource(55228U);
    msg.setSourceEntity(94U);
    msg.setDestination(25064U);
    msg.setDestinationEntity(10U);
    msg.req_id = 31385U;
    msg.type = 123U;
    msg.status = 56U;
    msg.info.assign("DFPOKFHPYEFIPMRCMZFDKQBMULRQVAWQYJODYETKDHBSNJPNCDCJAVUQSEOHGJAUOSAFWHFCMDKGSNAUBVEICJTWKRZJYCZYCQOXEZYTNTNJXJBQZUQXRLDMXCGVOTUNIAGSDHIHPWIWEIPSCKEWKTLKZHGDHBZURXLUEXRTUNIIASMBRVVHSOEBLVMBWVX");
    msg.range = 0.38216010054106453;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticRelease msg;
    msg.setTimeStamp(0.6501537828958157);
    msg.setSource(60229U);
    msg.setSourceEntity(89U);
    msg.setDestination(63625U);
    msg.setDestinationEntity(61U);
    msg.system.assign("VPTFBDRDQLDNKNZWSVUEKRZYHPYLAJFKVTAGUFMXNCOAFHDQNXMSJHQUZGJBSIMAJAEWFIRWESBGTEUBMYSLVBYQDYRNDZSQLYMIQTXGQSWXIERHPPZOZFLZJHIDIXACYUOKHZCTHVXQTBSFPDENUTKHCAWSZFUHWOJ");
    msg.op = 90U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticRelease #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticRelease msg;
    msg.setTimeStamp(0.7107566040883593);
    msg.setSource(31258U);
    msg.setSourceEntity(16U);
    msg.setDestination(36767U);
    msg.setDestinationEntity(83U);
    msg.system.assign("HJYCXFULXPDTNVLOGHQITVMWZSSJUVHXGXAKQXHIQOCXVIGOVTPVYWQCXMCMCFJEVNLWDCVYGWAIYEOSYFTKPEMRDYBMBRFWEWVREBZGTNFDROQALJTNRZJIOGGYHYWHLZETDXKNNSCEMYSAKPFWFUNKTEASOFNLZMLRFUSGHPNRNDS");
    msg.op = 71U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticRelease #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticRelease msg;
    msg.setTimeStamp(0.47597193837065366);
    msg.setSource(26888U);
    msg.setSourceEntity(90U);
    msg.setDestination(32031U);
    msg.setDestinationEntity(233U);
    msg.system.assign("AXNNXASFGHNISCLOMHGERKQKNGTESUMYDDJZHZBGFMSLWZJVPFHKTJEZMBMYDCDUJLJDKGPCVKZPWTYTNXUGBIXQZFAOXEUKVBABMAINFAMXECKVJZMQCCIEWLXOQBW");
    msg.op = 91U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticRelease #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rpm msg;
    msg.setTimeStamp(0.16813636732049209);
    msg.setSource(49876U);
    msg.setSourceEntity(220U);
    msg.setDestination(1456U);
    msg.setDestinationEntity(138U);
    msg.value = -7043;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rpm #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rpm msg;
    msg.setTimeStamp(0.8678834128094084);
    msg.setSource(44694U);
    msg.setSourceEntity(69U);
    msg.setDestination(26175U);
    msg.setDestinationEntity(58U);
    msg.value = 15906;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rpm #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rpm msg;
    msg.setTimeStamp(0.23978209758763291);
    msg.setSource(17901U);
    msg.setSourceEntity(168U);
    msg.setDestination(32359U);
    msg.setDestinationEntity(96U);
    msg.value = 1699;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rpm #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Voltage msg;
    msg.setTimeStamp(0.012101623581683096);
    msg.setSource(185U);
    msg.setSourceEntity(219U);
    msg.setDestination(34177U);
    msg.setDestinationEntity(108U);
    msg.value = 0.616534261702138;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Voltage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Voltage msg;
    msg.setTimeStamp(0.7227152889310959);
    msg.setSource(7873U);
    msg.setSourceEntity(188U);
    msg.setDestination(34448U);
    msg.setDestinationEntity(128U);
    msg.value = 0.9271557118385207;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Voltage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Voltage msg;
    msg.setTimeStamp(0.02869829232475196);
    msg.setSource(1077U);
    msg.setSourceEntity(19U);
    msg.setDestination(21707U);
    msg.setDestinationEntity(223U);
    msg.value = 0.5875859085217362;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Voltage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Current msg;
    msg.setTimeStamp(0.8070584785488565);
    msg.setSource(20458U);
    msg.setSourceEntity(179U);
    msg.setDestination(61982U);
    msg.setDestinationEntity(145U);
    msg.value = 0.38371392679269456;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Current #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Current msg;
    msg.setTimeStamp(0.3575685189074911);
    msg.setSource(57320U);
    msg.setSourceEntity(168U);
    msg.setDestination(6823U);
    msg.setDestinationEntity(203U);
    msg.value = 0.6923044813876142;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Current #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Current msg;
    msg.setTimeStamp(0.8369659687595707);
    msg.setSource(24231U);
    msg.setSourceEntity(22U);
    msg.setDestination(43075U);
    msg.setDestinationEntity(252U);
    msg.value = 0.6127676022804307;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Current #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFix msg;
    msg.setTimeStamp(0.20284814612536473);
    msg.setSource(1602U);
    msg.setSourceEntity(133U);
    msg.setDestination(20400U);
    msg.setDestinationEntity(190U);
    msg.validity = 53913U;
    msg.type = 213U;
    msg.utc_year = 21570U;
    msg.utc_month = 206U;
    msg.utc_day = 20U;
    msg.utc_time = 0.2094010798516659;
    msg.lat = 0.903873912693868;
    msg.lon = 0.5768530666749057;
    msg.height = 0.8213724190177012;
    msg.satellites = 179U;
    msg.cog = 0.21340728790008712;
    msg.sog = 0.6801758723643211;
    msg.hdop = 0.35574981283096374;
    msg.vdop = 0.7282987226112942;
    msg.hacc = 0.9697927695239978;
    msg.vacc = 0.5679040224612999;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFix #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFix msg;
    msg.setTimeStamp(0.524223411418577);
    msg.setSource(59133U);
    msg.setSourceEntity(71U);
    msg.setDestination(31695U);
    msg.setDestinationEntity(42U);
    msg.validity = 10280U;
    msg.type = 89U;
    msg.utc_year = 31147U;
    msg.utc_month = 153U;
    msg.utc_day = 212U;
    msg.utc_time = 0.9541706556388108;
    msg.lat = 0.7651806598715012;
    msg.lon = 0.45949669868423515;
    msg.height = 0.026561815910850828;
    msg.satellites = 231U;
    msg.cog = 0.7939430401030658;
    msg.sog = 0.4502317117158997;
    msg.hdop = 0.3998304269894325;
    msg.vdop = 0.24355940160219713;
    msg.hacc = 0.6985316796684639;
    msg.vacc = 0.3099332301772856;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFix #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFix msg;
    msg.setTimeStamp(0.8603114292089111);
    msg.setSource(21853U);
    msg.setSourceEntity(169U);
    msg.setDestination(19503U);
    msg.setDestinationEntity(17U);
    msg.validity = 36054U;
    msg.type = 148U;
    msg.utc_year = 43218U;
    msg.utc_month = 41U;
    msg.utc_day = 18U;
    msg.utc_time = 0.24006800252692517;
    msg.lat = 0.3814908829042132;
    msg.lon = 0.12163378000938552;
    msg.height = 0.05165282682359695;
    msg.satellites = 152U;
    msg.cog = 0.6204874580547273;
    msg.sog = 0.5490551220971138;
    msg.hdop = 0.2356316874415192;
    msg.vdop = 0.3951978991963616;
    msg.hacc = 0.665455616737231;
    msg.vacc = 0.894907721225419;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFix #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAngles msg;
    msg.setTimeStamp(0.8533873301707836);
    msg.setSource(14431U);
    msg.setSourceEntity(0U);
    msg.setDestination(4184U);
    msg.setDestinationEntity(128U);
    msg.time = 0.8708796336256042;
    msg.phi = 0.22805123616135792;
    msg.theta = 0.8054768463117055;
    msg.psi = 0.44494520229901136;
    msg.psi_magnetic = 0.5786581605903832;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAngles #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAngles msg;
    msg.setTimeStamp(0.17204890178093313);
    msg.setSource(53213U);
    msg.setSourceEntity(104U);
    msg.setDestination(19539U);
    msg.setDestinationEntity(33U);
    msg.time = 0.3415856068261265;
    msg.phi = 0.5529961293007715;
    msg.theta = 0.08279056638898286;
    msg.psi = 0.7587023112818541;
    msg.psi_magnetic = 0.6926213979192346;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAngles #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAngles msg;
    msg.setTimeStamp(0.7394569339313646);
    msg.setSource(55816U);
    msg.setSourceEntity(75U);
    msg.setDestination(25861U);
    msg.setDestinationEntity(58U);
    msg.time = 0.6566872875525627;
    msg.phi = 0.15697132868454589;
    msg.theta = 0.2293910444569094;
    msg.psi = 0.0350031898458969;
    msg.psi_magnetic = 0.0459843484332062;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAngles #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAnglesDelta msg;
    msg.setTimeStamp(0.8736424527652372);
    msg.setSource(37806U);
    msg.setSourceEntity(202U);
    msg.setDestination(35160U);
    msg.setDestinationEntity(212U);
    msg.time = 0.2979487854270281;
    msg.x = 0.512753618864244;
    msg.y = 0.5642559686739739;
    msg.z = 0.8550613344223185;
    msg.timestep = 0.7485531836276678;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAnglesDelta #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAnglesDelta msg;
    msg.setTimeStamp(0.24703436641859633);
    msg.setSource(349U);
    msg.setSourceEntity(25U);
    msg.setDestination(48930U);
    msg.setDestinationEntity(106U);
    msg.time = 0.00963973920811556;
    msg.x = 0.5183793224379633;
    msg.y = 0.47663793119356346;
    msg.z = 0.5612395081980063;
    msg.timestep = 0.44072929006661243;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAnglesDelta #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAnglesDelta msg;
    msg.setTimeStamp(0.7882873437960806);
    msg.setSource(45688U);
    msg.setSourceEntity(71U);
    msg.setDestination(31592U);
    msg.setDestinationEntity(251U);
    msg.time = 0.9137231724300193;
    msg.x = 0.03969871364261357;
    msg.y = 0.4891308346330958;
    msg.z = 0.7287134018462109;
    msg.timestep = 0.4232418935542045;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAnglesDelta #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AngularVelocity msg;
    msg.setTimeStamp(0.514534623512699);
    msg.setSource(44618U);
    msg.setSourceEntity(110U);
    msg.setDestination(9283U);
    msg.setDestinationEntity(225U);
    msg.time = 0.7825204550165467;
    msg.x = 0.9982199607225507;
    msg.y = 0.40680236783419277;
    msg.z = 0.711004894561079;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AngularVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AngularVelocity msg;
    msg.setTimeStamp(0.5130256525455056);
    msg.setSource(20017U);
    msg.setSourceEntity(247U);
    msg.setDestination(28612U);
    msg.setDestinationEntity(138U);
    msg.time = 0.6752029084029265;
    msg.x = 0.771884554117316;
    msg.y = 0.06646777576193019;
    msg.z = 0.4969687430491657;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AngularVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AngularVelocity msg;
    msg.setTimeStamp(0.38047093938686904);
    msg.setSource(267U);
    msg.setSourceEntity(234U);
    msg.setDestination(55365U);
    msg.setDestinationEntity(234U);
    msg.time = 0.947724043720388;
    msg.x = 0.8077290995379401;
    msg.y = 0.0589760972120128;
    msg.z = 0.6241772584291064;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AngularVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Acceleration msg;
    msg.setTimeStamp(0.8908875558051323);
    msg.setSource(41853U);
    msg.setSourceEntity(250U);
    msg.setDestination(8080U);
    msg.setDestinationEntity(51U);
    msg.time = 0.3432147531792966;
    msg.x = 0.4974819352697626;
    msg.y = 0.29214671663356306;
    msg.z = 0.6959750067177011;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Acceleration #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Acceleration msg;
    msg.setTimeStamp(0.9809527139426863);
    msg.setSource(41301U);
    msg.setSourceEntity(200U);
    msg.setDestination(40901U);
    msg.setDestinationEntity(81U);
    msg.time = 0.2905775657799231;
    msg.x = 0.46732286385282096;
    msg.y = 0.037279741932458865;
    msg.z = 0.9978124192714786;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Acceleration #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Acceleration msg;
    msg.setTimeStamp(0.3740320725368551);
    msg.setSource(46791U);
    msg.setSourceEntity(179U);
    msg.setDestination(14893U);
    msg.setDestinationEntity(205U);
    msg.time = 0.093821496088622;
    msg.x = 0.7759571624692178;
    msg.y = 0.5265044438723063;
    msg.z = 0.7510023762598379;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Acceleration #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MagneticField msg;
    msg.setTimeStamp(0.7562696235712963);
    msg.setSource(41668U);
    msg.setSourceEntity(179U);
    msg.setDestination(31993U);
    msg.setDestinationEntity(205U);
    msg.time = 0.6224164587783981;
    msg.x = 0.3427959818725277;
    msg.y = 0.07202744462092825;
    msg.z = 0.5448923746151264;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MagneticField #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MagneticField msg;
    msg.setTimeStamp(0.735143242836041);
    msg.setSource(55258U);
    msg.setSourceEntity(173U);
    msg.setDestination(58252U);
    msg.setDestinationEntity(244U);
    msg.time = 0.49556495434507497;
    msg.x = 0.8795814993500498;
    msg.y = 0.9832449074814843;
    msg.z = 0.7863309046546965;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MagneticField #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MagneticField msg;
    msg.setTimeStamp(0.0007575418925030997);
    msg.setSource(23431U);
    msg.setSourceEntity(234U);
    msg.setDestination(3614U);
    msg.setDestinationEntity(59U);
    msg.time = 0.4642971998129518;
    msg.x = 0.00225279202503903;
    msg.y = 0.4299092702138301;
    msg.z = 0.47477986042496;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MagneticField #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroundVelocity msg;
    msg.setTimeStamp(0.2680636259763184);
    msg.setSource(12834U);
    msg.setSourceEntity(132U);
    msg.setDestination(40595U);
    msg.setDestinationEntity(103U);
    msg.validity = 145U;
    msg.x = 0.9593930159102677;
    msg.y = 0.5046836661937889;
    msg.z = 0.15265207616188425;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroundVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroundVelocity msg;
    msg.setTimeStamp(0.02271452925112849);
    msg.setSource(14612U);
    msg.setSourceEntity(148U);
    msg.setDestination(63427U);
    msg.setDestinationEntity(26U);
    msg.validity = 119U;
    msg.x = 0.44384569625542813;
    msg.y = 0.6919462288681405;
    msg.z = 0.24721874877135297;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroundVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroundVelocity msg;
    msg.setTimeStamp(0.0049142832779968115);
    msg.setSource(7754U);
    msg.setSourceEntity(113U);
    msg.setDestination(42915U);
    msg.setDestinationEntity(102U);
    msg.validity = 55U;
    msg.x = 0.9564133498425741;
    msg.y = 0.16784866438086232;
    msg.z = 0.07803621147846107;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroundVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterVelocity msg;
    msg.setTimeStamp(0.46685666284146576);
    msg.setSource(38250U);
    msg.setSourceEntity(83U);
    msg.setDestination(43440U);
    msg.setDestinationEntity(121U);
    msg.validity = 37U;
    msg.x = 0.5467336937392293;
    msg.y = 0.08848863973482413;
    msg.z = 0.36114633619519976;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterVelocity msg;
    msg.setTimeStamp(0.7062721531424463);
    msg.setSource(21487U);
    msg.setSourceEntity(246U);
    msg.setDestination(60768U);
    msg.setDestinationEntity(105U);
    msg.validity = 142U;
    msg.x = 0.5027895163123995;
    msg.y = 0.24697124851871077;
    msg.z = 0.7002972678580154;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterVelocity msg;
    msg.setTimeStamp(0.3757406793619592);
    msg.setSource(28943U);
    msg.setSourceEntity(174U);
    msg.setDestination(31752U);
    msg.setDestinationEntity(98U);
    msg.validity = 183U;
    msg.x = 0.4616906875010328;
    msg.y = 0.9150523649325657;
    msg.z = 0.37941340059190887;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VelocityDelta msg;
    msg.setTimeStamp(0.5325627824980185);
    msg.setSource(62427U);
    msg.setSourceEntity(8U);
    msg.setDestination(9539U);
    msg.setDestinationEntity(165U);
    msg.time = 0.11885677232504832;
    msg.x = 0.5132578135492737;
    msg.y = 0.8052940759989056;
    msg.z = 0.2966788518381215;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VelocityDelta #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VelocityDelta msg;
    msg.setTimeStamp(0.678403595210873);
    msg.setSource(59828U);
    msg.setSourceEntity(32U);
    msg.setDestination(8034U);
    msg.setDestinationEntity(183U);
    msg.time = 0.11337247893560631;
    msg.x = 0.8081633753902532;
    msg.y = 0.5545020858835615;
    msg.z = 0.16239544333091405;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VelocityDelta #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VelocityDelta msg;
    msg.setTimeStamp(0.34094497305322646);
    msg.setSource(28002U);
    msg.setSourceEntity(202U);
    msg.setDestination(36207U);
    msg.setDestinationEntity(74U);
    msg.time = 0.4008499280403399;
    msg.x = 0.8252236856005807;
    msg.y = 0.8196013534516816;
    msg.z = 0.5558466865456245;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VelocityDelta #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Distance msg;
    msg.setTimeStamp(0.5591514283790343);
    msg.setSource(52315U);
    msg.setSourceEntity(128U);
    msg.setDestination(36565U);
    msg.setDestinationEntity(159U);
    msg.validity = 141U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.4542049089172706;
    tmp_msg_0.beam_height = 0.2848666301661966;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.3329123634052612;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Distance #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Distance msg;
    msg.setTimeStamp(0.035842386550264727);
    msg.setSource(11013U);
    msg.setSourceEntity(225U);
    msg.setDestination(53808U);
    msg.setDestinationEntity(183U);
    msg.validity = 248U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.13700258187958325;
    tmp_msg_0.y = 0.24185018145372128;
    tmp_msg_0.z = 0.43227141792981216;
    tmp_msg_0.phi = 0.9468605592678535;
    tmp_msg_0.theta = 0.9581323239656063;
    tmp_msg_0.psi = 0.5851329780061818;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.8028863507518382;
    tmp_msg_1.beam_height = 0.7532328419654778;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.64194748991517;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Distance #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Distance msg;
    msg.setTimeStamp(0.282367340849222);
    msg.setSource(33774U);
    msg.setSourceEntity(44U);
    msg.setDestination(2599U);
    msg.setDestinationEntity(181U);
    msg.validity = 99U;
    msg.value = 0.18500248556350074;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Distance #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Temperature msg;
    msg.setTimeStamp(0.019411688560348583);
    msg.setSource(47105U);
    msg.setSourceEntity(214U);
    msg.setDestination(62504U);
    msg.setDestinationEntity(24U);
    msg.value = 0.675121022859981;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Temperature #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Temperature msg;
    msg.setTimeStamp(0.3097262023043268);
    msg.setSource(14947U);
    msg.setSourceEntity(159U);
    msg.setDestination(10285U);
    msg.setDestinationEntity(224U);
    msg.value = 0.437824371049366;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Temperature #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Temperature msg;
    msg.setTimeStamp(0.5181355590867994);
    msg.setSource(38933U);
    msg.setSourceEntity(230U);
    msg.setDestination(54424U);
    msg.setDestinationEntity(163U);
    msg.value = 0.6436825685621433;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Temperature #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pressure msg;
    msg.setTimeStamp(0.06750898035249198);
    msg.setSource(47561U);
    msg.setSourceEntity(151U);
    msg.setDestination(43352U);
    msg.setDestinationEntity(251U);
    msg.value = 0.15488055792922184;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pressure #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pressure msg;
    msg.setTimeStamp(0.9851930099636372);
    msg.setSource(19366U);
    msg.setSourceEntity(63U);
    msg.setDestination(8875U);
    msg.setDestinationEntity(104U);
    msg.value = 0.4691404451867621;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pressure #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pressure msg;
    msg.setTimeStamp(0.21511739502016225);
    msg.setSource(2804U);
    msg.setSourceEntity(72U);
    msg.setDestination(18138U);
    msg.setDestinationEntity(37U);
    msg.value = 0.8239052069577578;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pressure #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Depth msg;
    msg.setTimeStamp(0.8234860593593043);
    msg.setSource(22320U);
    msg.setSourceEntity(65U);
    msg.setDestination(28209U);
    msg.setDestinationEntity(139U);
    msg.value = 0.7669295444660708;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Depth #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Depth msg;
    msg.setTimeStamp(0.7728434535424563);
    msg.setSource(59621U);
    msg.setSourceEntity(41U);
    msg.setDestination(22621U);
    msg.setDestinationEntity(193U);
    msg.value = 0.20955229820721444;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Depth #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Depth msg;
    msg.setTimeStamp(0.9965847821492878);
    msg.setSource(33880U);
    msg.setSourceEntity(54U);
    msg.setDestination(42376U);
    msg.setDestinationEntity(162U);
    msg.value = 0.35906495103707026;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Depth #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DepthOffset msg;
    msg.setTimeStamp(0.2763921184004836);
    msg.setSource(5383U);
    msg.setSourceEntity(63U);
    msg.setDestination(35243U);
    msg.setDestinationEntity(180U);
    msg.value = 0.17409297369913412;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DepthOffset #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DepthOffset msg;
    msg.setTimeStamp(0.14510851216997722);
    msg.setSource(26229U);
    msg.setSourceEntity(147U);
    msg.setDestination(51746U);
    msg.setDestinationEntity(9U);
    msg.value = 0.5798418760360297;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DepthOffset #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DepthOffset msg;
    msg.setTimeStamp(0.4052446932624332);
    msg.setSource(27164U);
    msg.setSourceEntity(206U);
    msg.setDestination(36267U);
    msg.setDestinationEntity(45U);
    msg.value = 0.9359903261278862;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DepthOffset #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoundSpeed msg;
    msg.setTimeStamp(0.4902702369622336);
    msg.setSource(15138U);
    msg.setSourceEntity(245U);
    msg.setDestination(46193U);
    msg.setDestinationEntity(51U);
    msg.value = 0.9666354213144298;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoundSpeed #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoundSpeed msg;
    msg.setTimeStamp(0.9704481257779293);
    msg.setSource(32279U);
    msg.setSourceEntity(97U);
    msg.setDestination(12132U);
    msg.setDestinationEntity(58U);
    msg.value = 0.9362845135446924;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoundSpeed #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoundSpeed msg;
    msg.setTimeStamp(0.4018072275476404);
    msg.setSource(495U);
    msg.setSourceEntity(247U);
    msg.setDestination(33238U);
    msg.setDestinationEntity(197U);
    msg.value = 0.21194410633157346;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoundSpeed #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterDensity msg;
    msg.setTimeStamp(0.721669134898856);
    msg.setSource(37999U);
    msg.setSourceEntity(29U);
    msg.setDestination(40552U);
    msg.setDestinationEntity(18U);
    msg.value = 0.3428305042829176;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterDensity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterDensity msg;
    msg.setTimeStamp(0.8288705683443539);
    msg.setSource(7112U);
    msg.setSourceEntity(41U);
    msg.setDestination(36964U);
    msg.setDestinationEntity(127U);
    msg.value = 0.36063312902276645;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterDensity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterDensity msg;
    msg.setTimeStamp(0.8620119583826235);
    msg.setSource(48781U);
    msg.setSourceEntity(108U);
    msg.setDestination(28678U);
    msg.setDestinationEntity(148U);
    msg.value = 0.8229220785989307;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterDensity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Conductivity msg;
    msg.setTimeStamp(0.7237748441312029);
    msg.setSource(36406U);
    msg.setSourceEntity(171U);
    msg.setDestination(313U);
    msg.setDestinationEntity(68U);
    msg.value = 0.9800582020234024;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Conductivity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Conductivity msg;
    msg.setTimeStamp(0.7222368512810342);
    msg.setSource(56706U);
    msg.setSourceEntity(127U);
    msg.setDestination(16261U);
    msg.setDestinationEntity(210U);
    msg.value = 0.8956783711886234;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Conductivity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Conductivity msg;
    msg.setTimeStamp(0.8887062766024693);
    msg.setSource(27920U);
    msg.setSourceEntity(70U);
    msg.setDestination(27601U);
    msg.setDestinationEntity(71U);
    msg.value = 0.5577729114010322;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Conductivity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Salinity msg;
    msg.setTimeStamp(0.47032945578695917);
    msg.setSource(12923U);
    msg.setSourceEntity(62U);
    msg.setDestination(44213U);
    msg.setDestinationEntity(37U);
    msg.value = 0.8142866771929596;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Salinity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Salinity msg;
    msg.setTimeStamp(0.6054892785319077);
    msg.setSource(31358U);
    msg.setSourceEntity(85U);
    msg.setDestination(44226U);
    msg.setDestinationEntity(210U);
    msg.value = 0.20355222467974843;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Salinity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Salinity msg;
    msg.setTimeStamp(0.9456940738278278);
    msg.setSource(16112U);
    msg.setSourceEntity(191U);
    msg.setDestination(63495U);
    msg.setDestinationEntity(195U);
    msg.value = 0.6876547831405206;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Salinity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WindSpeed msg;
    msg.setTimeStamp(0.6436066942017047);
    msg.setSource(39877U);
    msg.setSourceEntity(119U);
    msg.setDestination(1509U);
    msg.setDestinationEntity(157U);
    msg.direction = 0.35098293548385984;
    msg.speed = 0.2736262064666086;
    msg.turbulence = 0.5887986501931888;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WindSpeed #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WindSpeed msg;
    msg.setTimeStamp(0.17001137249831255);
    msg.setSource(51915U);
    msg.setSourceEntity(68U);
    msg.setDestination(8432U);
    msg.setDestinationEntity(63U);
    msg.direction = 0.7498738131219891;
    msg.speed = 0.37424522343920985;
    msg.turbulence = 0.03787477246441251;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WindSpeed #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WindSpeed msg;
    msg.setTimeStamp(0.05001211171100062);
    msg.setSource(2981U);
    msg.setSourceEntity(195U);
    msg.setDestination(17080U);
    msg.setDestinationEntity(12U);
    msg.direction = 0.9690091397670543;
    msg.speed = 0.6204878117372584;
    msg.turbulence = 0.16768005697973598;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WindSpeed #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeHumidity msg;
    msg.setTimeStamp(0.36765575210156654);
    msg.setSource(40286U);
    msg.setSourceEntity(63U);
    msg.setDestination(61459U);
    msg.setDestinationEntity(20U);
    msg.value = 0.4104708131510645;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeHumidity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeHumidity msg;
    msg.setTimeStamp(0.2844143024195984);
    msg.setSource(29094U);
    msg.setSourceEntity(248U);
    msg.setDestination(25393U);
    msg.setDestinationEntity(21U);
    msg.value = 0.22083692375037856;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeHumidity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeHumidity msg;
    msg.setTimeStamp(0.46372862907346646);
    msg.setSource(4481U);
    msg.setSourceEntity(116U);
    msg.setDestination(62229U);
    msg.setDestinationEntity(17U);
    msg.value = 0.1578420416231996;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeHumidity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataText msg;
    msg.setTimeStamp(0.47985908016510126);
    msg.setSource(11280U);
    msg.setSourceEntity(150U);
    msg.setDestination(11994U);
    msg.setDestinationEntity(212U);
    msg.value.assign("RFLZRLOEVIJMGTIWIFCLRHNMBPEONQZTSGKUMVEGVBMHPBRFBGJORFZHKWEKNSQAFBSDDSNOAZVTZXYFGRIIGBG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataText #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataText msg;
    msg.setTimeStamp(0.1816891775731979);
    msg.setSource(21966U);
    msg.setSourceEntity(27U);
    msg.setDestination(33880U);
    msg.setDestinationEntity(219U);
    msg.value.assign("AFJTCJYKMSCJIQBGKZBHPLOJRXXFJICOEPJUSFYAABURCPADRBFUYTSYHEEMAVTYMRODKMJDRKVCYZWHMOMUAHZFQOAWVTLBGYFGXLSWOUOWFSDARGNHRSZPXCQLEEIMCDJTNOQFZCBIDZVMQQZGFNGBSKZMQJTDPRGXXGNUATNIWUITHMWNNITKSFPUJXUSWYKNVLWTXQSKLVWVHUCDBKIDLVAYXNWZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataText #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataText msg;
    msg.setTimeStamp(0.7132532229115043);
    msg.setSource(11486U);
    msg.setSourceEntity(56U);
    msg.setDestination(57847U);
    msg.setDestinationEntity(220U);
    msg.value.assign("DJBTGCMPIYGLVN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataText #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataBinary msg;
    msg.setTimeStamp(0.4687059520374077);
    msg.setSource(12399U);
    msg.setSourceEntity(4U);
    msg.setDestination(33564U);
    msg.setDestinationEntity(8U);
    const signed char tmp_msg_0[] = {-37, -26, -15, -109, -101, 86, 51, 13, -45, -82, -68, 109, -28, 87, -42, 73, -59, 16, -26, 99, -87, -56, -14, -85, 112, 49, -12, 38, -106, 6, 69, 114, 51, 65, 83, -45, -63, -125, 69, -74, -116, -11, 54, 104, -88, -110, 68, 117, 57, 31, -71, 47, 21, 61, -27, 3, 125, 69, 41, 91, -86, 20, 45, -78, -22, 32, -118, -7, -125, -4, 34, -1, -31, -111, -39, 96, -12, 117, 82, 78, 0, 31, -101, 21, 25, -17, 60, -43, -35, 49, -119, 19, -80, -116, 110, 74, -114, 41, 88, 32, -100, 100, 109, 28, 81, 40, 82, 23, -100, -60, 115, -124, 24};
    msg.value.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataBinary #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataBinary msg;
    msg.setTimeStamp(0.8442980736112796);
    msg.setSource(47852U);
    msg.setSourceEntity(84U);
    msg.setDestination(31781U);
    msg.setDestinationEntity(184U);
    const signed char tmp_msg_0[] = {-47, -31, 103, 13, -25, -11, -58, -57, 71, -9, 9, -90, 45, 61, 96, -45, 1, 27, -52, -3, -20, 100, 51, -73, -85, -123, 80, -81, -125, 115, 75, 95, 100, -101, -109, -66, 94, -117, 18, 67, 41, -84, 112, 61, 44, -27, -32, 110, -115, -79, -75, 71, -25, -89, -123, -55, -61, -90, 76, 31, 95, 38, 55, 46, 23, 38, -79, -84, -32, -76, -48, 55, -73, -28, -61, -30, 32, 105, -48, 101, -70, 73, -17, 21, 8, -56, -95, -125, 72, -46, -7, -81, -5, 52, 115, -40, 13, 37, -46, 29, 40, 113, 110, -98, -67, 119, 35, -3, 109, 40, -85, 21, -6, -89, 95, -108, 63, -6, 61, -71, -36, -69, 57, 10, -40, 18, -33, 109, 99, -57, 28, -79, -42, -5, 102, 103, 53, -102, -122, 99, 106, -127, -10, -108, -85, 60, -53, 10, -48, -117, -55, 87, -121, 49, 92, 70, -110, -45, -99, -67, -93, -6, 35, -83, 1, -31, 107, 125, 94, -94, -15, -107, 109, 2, -105, 124, 59, -99, 59, -78, 70, 104, 34, 117, 84, -108, 3, -28, 94, 112, -106, -26, -115, 45, 52, -96, 84, 28, 91, -12, -7, -24, -94, 60, -63, 44, 106, -24, -98, 122, 114, 99, -111, -123, 58, -119, -64, 67, 102, -58, 37, 24, 15, 108, -86, -7, 99, 57, -23, 86, 60, 17, -50, -102, 89, -112, 9};
    msg.value.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataBinary #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataBinary msg;
    msg.setTimeStamp(0.7750483846932092);
    msg.setSource(59275U);
    msg.setSourceEntity(68U);
    msg.setDestination(57296U);
    msg.setDestinationEntity(122U);
    const signed char tmp_msg_0[] = {124, -94, 60, 24, 8, 48, 25, -38, 38, -112, -29, 104, 27, 98, -95, 74, -77, 72, 64, 55, 112, -14, 12, 3, 80, -4, 45, 43, 15, 86, -52, -27, 58, 50, -29, -5, -91, 107, 108, 44, -69, 70, -114, 23, 125, 69, -71, 2, 70, -11, 36, 96, 64, -70, 78, 42, 81, 33, -95, 108, -98, 7, -94, 90, -73, 14, -4, 12, 114, 42, -17, -2, -42, 63, 95, 53, -57, 113, 83, 95, 28, -100, 32, 40, -75, -115, -111, 101, -98, -113, 51, -14, 16, -41, -62, 53, 120, -67, 59, 64, -117, 104, 9, -18, -43, -120, -75, -54, 8, -65, -76, -104, 113, -115, 52, 64, 6, -93, 107, -27, 88, -33, 88, 92, -61, -32, -32, -38, -96, 89, -16, -57, -102, -61, -44, -97, -81, 7, 36, -28, 31, -117, 3, 122, 22, -118, 115, -74, -70, -49, 103, 74, -50, 98, -9, -99, -23, 46, 21, -90, -119, -98, -13, -123, 28, 60, 60, 0, 50, -26, -42, 77, -108, 107, 29, 55, -56, -77, -81, 105, 66, -82, 115, 49, -18, -103, 98, 1, 89, 67, 118, -125, -28, -111, -1, -21, -63, -3, 106, 110, -113, 74, -76, -117, -8, 58, -125, -51, 71, -103, 57, -53, -1, 78, 108, 8, -48, 125, 24};
    msg.value.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataBinary #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Force msg;
    msg.setTimeStamp(0.4756226833504661);
    msg.setSource(51561U);
    msg.setSourceEntity(106U);
    msg.setDestination(26708U);
    msg.setDestinationEntity(148U);
    msg.value = 0.807481561415909;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Force #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Force msg;
    msg.setTimeStamp(0.2556619450608717);
    msg.setSource(63479U);
    msg.setSourceEntity(47U);
    msg.setDestination(2637U);
    msg.setDestinationEntity(116U);
    msg.value = 0.8555174815806766;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Force #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Force msg;
    msg.setTimeStamp(0.29915354212475376);
    msg.setSource(8033U);
    msg.setSourceEntity(177U);
    msg.setDestination(13964U);
    msg.setDestinationEntity(198U);
    msg.value = 0.6900938217172433;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Force #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SonarData msg;
    msg.setTimeStamp(0.18842205056336692);
    msg.setSource(23772U);
    msg.setSourceEntity(33U);
    msg.setDestination(8181U);
    msg.setDestinationEntity(186U);
    msg.type = 218U;
    msg.frequency = 3469547320U;
    msg.min_range = 13988U;
    msg.max_range = 29053U;
    msg.bits_per_point = 176U;
    msg.scale_factor = 0.9082360968337948;
    const signed char tmp_msg_0[] = {-105, -89, -53, 72, -117, 93, -84, 23, -46, -85, 87, 106, -67, 4, -108, 84, 57, 108, 125, 28, 109, -121, -28, 36, 52, 2, -24, 17, -81, 95, -51, -55, 98, 50, -19, 35, -108, 23, -66, 117, 73, -78, -90, 57, 39, 57, 104, -116, -48, -65, -39, 47, -9, -109, -125, 98, 109, 11, 43, 100, -30, 87, 43, -96, 93, -117, -87, 93, -40, -41, -106, 92, 21, -2, 79, -118, 85, 15, -23, 125, -57, -14, 30, -79, 77, -72, 26, 74, 91, -52, -7, -70, -97, 96, -69, -104, 13, -44, 77, 60, -7, -47, 63, -27, 68, 6, -92, -45, 24, 37, 125, -64, 93, -55, 124, 32, -55, 74, 53, -87, 109, -12, 92, 95, -29, -40, -50, 90, -49, -12, 10, 54, 39, 53, 125, 49, -90, -97, 103, -89, -59, 102, -1, 73, -67, -126, 71, 43, 37, 61, -84, 31, 50, 17, -125, 0, 104, -72, 126, 83, -94, 19, -115, -14, 41, -6, -4, -2, 67, 84, -98, 101, -109, -45, 101, 95, 59, 121, 67, 11, -115, 15, 27, -113, -66, 43, -55, 103, 78, 63, -78, 10, -62, 35, -79, 122, -13, 38, 124, -96, 73, 70, 3, -117, 106, -113, 113, -97, -40, -1, -77, 81, -82, -9, -99, -33, 23, 93, 36, -91, -9, -62, 118, 53, -125, -65, 90, 52, 84, 46, 0, -20};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SonarData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SonarData msg;
    msg.setTimeStamp(0.432603954143007);
    msg.setSource(33055U);
    msg.setSourceEntity(191U);
    msg.setDestination(51639U);
    msg.setDestinationEntity(253U);
    msg.type = 120U;
    msg.frequency = 1975229280U;
    msg.min_range = 4023U;
    msg.max_range = 57665U;
    msg.bits_per_point = 243U;
    msg.scale_factor = 0.32552310716953825;
    const signed char tmp_msg_0[] = {124, -42, 122, 7, 42, 97, 21, -4, 73, -1, -49, -13, 49, 112, -15, 108, -33, -46, -42, -126, -126, 10, -106, 59, 28, 5, -55, 76, -123, -2, -102, -3, 5, 39, -127, 72, 18};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SonarData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SonarData msg;
    msg.setTimeStamp(0.9350862253331816);
    msg.setSource(59916U);
    msg.setSourceEntity(133U);
    msg.setDestination(32798U);
    msg.setDestinationEntity(118U);
    msg.type = 243U;
    msg.frequency = 1061012598U;
    msg.min_range = 37880U;
    msg.max_range = 45703U;
    msg.bits_per_point = 200U;
    msg.scale_factor = 0.41444529855002743;
    const signed char tmp_msg_0[] = {-123, -85, -106, 78, -77, -82, -14, -83, 79, 33, -40, -118, 49, -107, 72, 19, 110, 79, -106, -35, 94, 10, -87, -33, 105, 7, 126, 15, 72, 68, 54, 33, -9, 113, 13, 111, -53, 16, 116, 14, -21, 1, -33, 22, -101, -38, -116, -123, 28, -128, -52, 23, 53, 99, 64, 7, 45, -60, -38, -94, 71, -77, 48, 13, -98, 0, 25, -100, 39, -123, -95, 120, 96, 56, 4, -98, -47, 25, -2, 73, -38, -84, -12, 107, 70, -93, -28, -79, 15, -112, 98, 11, -47, -10, -114, -48, 25, -73, 78, 83, -7, 121, -112, -10, -91, 116, 19, 64, -105, 55, -69, 51, -15, -22, -24, -79, -50, -85, -99, 62, -43, 78, -35, -41, -48, -98, 74, -81, 46, 12, -14, -108, 108, -39, 115, -11, -27, -106, 57, -15, -49, 37, -90, 18, 89, 50, 20, -1, -19, 92, 19, -100, -73, -44, -46, 37, 61, -86, 80, -64, 67, 30, -65, -8, -77, 103, 99, 27, 83, 75, 49, -28, -32, 28, -73, -99, -102, 54, -69, -8, -78, 106, -127, 17, 123, -11, 42, 92, 58, 4, 57, -126, -57, 51, -107, 109, 114, 41, 6, 90, 4, 18, -76, 95, 67, -115, 45, -120, -99, -43, 116};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SonarData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pulse msg;
    msg.setTimeStamp(0.16655687865235524);
    msg.setSource(6369U);
    msg.setSourceEntity(242U);
    msg.setDestination(24971U);
    msg.setDestinationEntity(90U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pulse #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pulse msg;
    msg.setTimeStamp(0.23789561613056598);
    msg.setSource(60969U);
    msg.setSourceEntity(32U);
    msg.setDestination(35066U);
    msg.setDestinationEntity(129U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pulse #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pulse msg;
    msg.setTimeStamp(0.37122126166691805);
    msg.setSource(9009U);
    msg.setSourceEntity(131U);
    msg.setDestination(3996U);
    msg.setDestinationEntity(140U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pulse #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PulseDetectionControl msg;
    msg.setTimeStamp(0.49900654173865644);
    msg.setSource(51776U);
    msg.setSourceEntity(172U);
    msg.setDestination(36896U);
    msg.setDestinationEntity(106U);
    msg.op = 104U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PulseDetectionControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PulseDetectionControl msg;
    msg.setTimeStamp(0.3180196976693672);
    msg.setSource(9227U);
    msg.setSourceEntity(65U);
    msg.setDestination(8929U);
    msg.setDestinationEntity(11U);
    msg.op = 130U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PulseDetectionControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PulseDetectionControl msg;
    msg.setTimeStamp(0.6897510417021536);
    msg.setSource(9071U);
    msg.setSourceEntity(187U);
    msg.setDestination(18124U);
    msg.setDestinationEntity(222U);
    msg.op = 58U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PulseDetectionControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FuelLevel msg;
    msg.setTimeStamp(0.6367626291234778);
    msg.setSource(12354U);
    msg.setSourceEntity(193U);
    msg.setDestination(9664U);
    msg.setDestinationEntity(88U);
    msg.value = 0.9318856554802866;
    msg.confidence = 0.07652949103554052;
    msg.opmodes.assign("EBFZYTDLOQBPRATKIDFIVWDPZCGZUQSPCLVRSNDIPIJIAYNRYMHYMOFCVUMVJCWGLMGKPDY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FuelLevel #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FuelLevel msg;
    msg.setTimeStamp(0.616846804305312);
    msg.setSource(48601U);
    msg.setSourceEntity(240U);
    msg.setDestination(14181U);
    msg.setDestinationEntity(120U);
    msg.value = 0.4844512950354277;
    msg.confidence = 0.29521589323903497;
    msg.opmodes.assign("HCDZMVHVJXXFGGYPPNMUQNFFXNNSFJWOTJTCSOHDZWIAOLGDEQMPVWJATZGJBBMXRDIRLOAKMICNPVQENJIZIPXPBNTROROERVHYUSLATZQUCFZMMQANYSAAUYOCVQRLDWSACLROWKWSFRTGMHKAGUTGOISUXZKBQPHMSNBW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FuelLevel #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FuelLevel msg;
    msg.setTimeStamp(0.6657789905305393);
    msg.setSource(44162U);
    msg.setSourceEntity(119U);
    msg.setDestination(14084U);
    msg.setDestinationEntity(197U);
    msg.value = 0.13052723805471056;
    msg.confidence = 0.19185753128682248;
    msg.opmodes.assign("FYHHSLYXFZNGWBAODWQWJYYMYAAXFUAUSKNFVADTZZIJWIHBIPCPNPMZYOAL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FuelLevel #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsNavData msg;
    msg.setTimeStamp(0.11737950251768858);
    msg.setSource(29999U);
    msg.setSourceEntity(56U);
    msg.setDestination(41979U);
    msg.setDestinationEntity(253U);
    msg.itow = 3745828971U;
    msg.lat = 0.7810933525495322;
    msg.lon = 0.9250512309304557;
    msg.height_ell = 0.9547586131943784;
    msg.height_sea = 0.2853440546342959;
    msg.hacc = 0.4323067999084468;
    msg.vacc = 0.29427047596157874;
    msg.vel_n = 0.1495599862749013;
    msg.vel_e = 0.20788136777834043;
    msg.vel_d = 0.26388061788704853;
    msg.speed = 0.11893315534235571;
    msg.gspeed = 0.8585446698145787;
    msg.heading = 0.3175616866797424;
    msg.sacc = 0.8699299579788821;
    msg.cacc = 0.8521113559735465;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsNavData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsNavData msg;
    msg.setTimeStamp(0.9735492679785049);
    msg.setSource(41289U);
    msg.setSourceEntity(89U);
    msg.setDestination(11963U);
    msg.setDestinationEntity(88U);
    msg.itow = 2940162258U;
    msg.lat = 0.5731955245624375;
    msg.lon = 0.8862541009110545;
    msg.height_ell = 0.25979815354311697;
    msg.height_sea = 0.6330119262232011;
    msg.hacc = 0.9453863131998832;
    msg.vacc = 0.3783048509620096;
    msg.vel_n = 0.30872508070004556;
    msg.vel_e = 0.004020480646522051;
    msg.vel_d = 0.9858300415684574;
    msg.speed = 0.5944945410924416;
    msg.gspeed = 0.3019000377551391;
    msg.heading = 0.4158612147373938;
    msg.sacc = 0.025486286639219702;
    msg.cacc = 0.9936597239755961;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsNavData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsNavData msg;
    msg.setTimeStamp(0.07910402990721244);
    msg.setSource(10229U);
    msg.setSourceEntity(30U);
    msg.setDestination(13420U);
    msg.setDestinationEntity(21U);
    msg.itow = 3223233598U;
    msg.lat = 0.3189603662118672;
    msg.lon = 0.060801867840223456;
    msg.height_ell = 0.7485262593535574;
    msg.height_sea = 0.2544357814988011;
    msg.hacc = 0.9674662834675136;
    msg.vacc = 0.1039405782744679;
    msg.vel_n = 0.9363519448628019;
    msg.vel_e = 0.12351871257497804;
    msg.vel_d = 0.6211299709271666;
    msg.speed = 0.5202252422584539;
    msg.gspeed = 0.10202976889671145;
    msg.heading = 0.8432222258816038;
    msg.sacc = 0.40101001629436983;
    msg.cacc = 0.5080669407214637;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsNavData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ServoPosition msg;
    msg.setTimeStamp(0.10920239123325237);
    msg.setSource(3001U);
    msg.setSourceEntity(198U);
    msg.setDestination(58912U);
    msg.setDestinationEntity(141U);
    msg.id = 107U;
    msg.value = 0.32345223020927627;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ServoPosition #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ServoPosition msg;
    msg.setTimeStamp(0.49064887882429586);
    msg.setSource(53919U);
    msg.setSourceEntity(244U);
    msg.setDestination(16586U);
    msg.setDestinationEntity(71U);
    msg.id = 209U;
    msg.value = 0.2182538156743945;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ServoPosition #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ServoPosition msg;
    msg.setTimeStamp(0.4425841995746914);
    msg.setSource(577U);
    msg.setSourceEntity(49U);
    msg.setDestination(47546U);
    msg.setDestinationEntity(15U);
    msg.id = 18U;
    msg.value = 0.9195084468190744;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ServoPosition #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DeviceState msg;
    msg.setTimeStamp(0.8710118448885104);
    msg.setSource(42926U);
    msg.setSourceEntity(7U);
    msg.setDestination(29349U);
    msg.setDestinationEntity(39U);
    msg.x = 0.9307801382289285;
    msg.y = 0.956188949619679;
    msg.z = 0.13298988881118823;
    msg.phi = 0.41331828204872534;
    msg.theta = 0.029533574836669407;
    msg.psi = 0.2863265155977104;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DeviceState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DeviceState msg;
    msg.setTimeStamp(0.39269037204813684);
    msg.setSource(6150U);
    msg.setSourceEntity(78U);
    msg.setDestination(5045U);
    msg.setDestinationEntity(11U);
    msg.x = 0.5222362456518489;
    msg.y = 0.8498704506464112;
    msg.z = 0.2563140090033976;
    msg.phi = 0.6736846638516988;
    msg.theta = 0.06928721795837811;
    msg.psi = 0.757892991310842;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DeviceState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DeviceState msg;
    msg.setTimeStamp(0.7495422655949656);
    msg.setSource(12542U);
    msg.setSourceEntity(153U);
    msg.setDestination(16529U);
    msg.setDestinationEntity(146U);
    msg.x = 0.32928638500584817;
    msg.y = 0.02188860924999869;
    msg.z = 0.005600768720782745;
    msg.phi = 0.45304929846556063;
    msg.theta = 0.33337974758359645;
    msg.psi = 0.3562529030718573;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DeviceState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::BeamConfig msg;
    msg.setTimeStamp(0.21923178998699688);
    msg.setSource(10144U);
    msg.setSourceEntity(21U);
    msg.setDestination(41946U);
    msg.setDestinationEntity(251U);
    msg.beam_width = 0.7392614664439375;
    msg.beam_height = 0.019101038577345575;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("BeamConfig #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::BeamConfig msg;
    msg.setTimeStamp(0.09132123011225357);
    msg.setSource(27895U);
    msg.setSourceEntity(168U);
    msg.setDestination(45304U);
    msg.setDestinationEntity(209U);
    msg.beam_width = 0.829713439774306;
    msg.beam_height = 0.002555676783569494;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("BeamConfig #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::BeamConfig msg;
    msg.setTimeStamp(0.6490132380659966);
    msg.setSource(21870U);
    msg.setSourceEntity(220U);
    msg.setDestination(7959U);
    msg.setDestinationEntity(162U);
    msg.beam_width = 0.8464680913135149;
    msg.beam_height = 0.12170617371457404;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("BeamConfig #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DataSanity msg;
    msg.setTimeStamp(0.7477178692436802);
    msg.setSource(60401U);
    msg.setSourceEntity(190U);
    msg.setDestination(17911U);
    msg.setDestinationEntity(192U);
    msg.sane = 204U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DataSanity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DataSanity msg;
    msg.setTimeStamp(0.9459282764754045);
    msg.setSource(11706U);
    msg.setSourceEntity(222U);
    msg.setDestination(19204U);
    msg.setDestinationEntity(155U);
    msg.sane = 160U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DataSanity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DataSanity msg;
    msg.setTimeStamp(0.6927063241097121);
    msg.setSource(45100U);
    msg.setSourceEntity(2U);
    msg.setDestination(20016U);
    msg.setDestinationEntity(236U);
    msg.sane = 95U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DataSanity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RhodamineDye msg;
    msg.setTimeStamp(0.20398906843631948);
    msg.setSource(31143U);
    msg.setSourceEntity(218U);
    msg.setDestination(22145U);
    msg.setDestinationEntity(90U);
    msg.value = 0.24840352437612;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RhodamineDye #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RhodamineDye msg;
    msg.setTimeStamp(0.19218799829333);
    msg.setSource(17608U);
    msg.setSourceEntity(103U);
    msg.setDestination(2404U);
    msg.setDestinationEntity(132U);
    msg.value = 0.8429267592283465;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RhodamineDye #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RhodamineDye msg;
    msg.setTimeStamp(0.9004141159763422);
    msg.setSource(1989U);
    msg.setSourceEntity(39U);
    msg.setDestination(17826U);
    msg.setDestinationEntity(50U);
    msg.value = 0.511096573974416;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RhodamineDye #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CrudeOil msg;
    msg.setTimeStamp(0.9610829511640998);
    msg.setSource(38207U);
    msg.setSourceEntity(83U);
    msg.setDestination(31713U);
    msg.setDestinationEntity(111U);
    msg.value = 0.8932652482222168;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CrudeOil #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CrudeOil msg;
    msg.setTimeStamp(0.5608552414973038);
    msg.setSource(41161U);
    msg.setSourceEntity(167U);
    msg.setDestination(3563U);
    msg.setDestinationEntity(154U);
    msg.value = 0.4209010660742417;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CrudeOil #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CrudeOil msg;
    msg.setTimeStamp(0.08113698780842749);
    msg.setSource(54801U);
    msg.setSourceEntity(145U);
    msg.setDestination(35129U);
    msg.setDestinationEntity(160U);
    msg.value = 0.25122517656148946;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CrudeOil #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FineOil msg;
    msg.setTimeStamp(0.897582662013718);
    msg.setSource(57691U);
    msg.setSourceEntity(35U);
    msg.setDestination(48534U);
    msg.setDestinationEntity(112U);
    msg.value = 0.6680903579137857;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FineOil #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FineOil msg;
    msg.setTimeStamp(0.9119518238827071);
    msg.setSource(38829U);
    msg.setSourceEntity(24U);
    msg.setDestination(20780U);
    msg.setDestinationEntity(124U);
    msg.value = 0.2855148576561203;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FineOil #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FineOil msg;
    msg.setTimeStamp(0.8589992844331024);
    msg.setSource(2646U);
    msg.setSourceEntity(93U);
    msg.setDestination(352U);
    msg.setDestinationEntity(180U);
    msg.value = 0.3737853941318392;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FineOil #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Turbidity msg;
    msg.setTimeStamp(0.11321229477245442);
    msg.setSource(40650U);
    msg.setSourceEntity(249U);
    msg.setDestination(58230U);
    msg.setDestinationEntity(162U);
    msg.value = 0.8171065607979312;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Turbidity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Turbidity msg;
    msg.setTimeStamp(0.46498799456655293);
    msg.setSource(57036U);
    msg.setSourceEntity(38U);
    msg.setDestination(29184U);
    msg.setDestinationEntity(28U);
    msg.value = 0.8047265437184566;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Turbidity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Turbidity msg;
    msg.setTimeStamp(0.5134023806924978);
    msg.setSource(44996U);
    msg.setSourceEntity(235U);
    msg.setDestination(20506U);
    msg.setDestinationEntity(160U);
    msg.value = 0.7852444283671348;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Turbidity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Chlorophyll msg;
    msg.setTimeStamp(0.8150917805474027);
    msg.setSource(32383U);
    msg.setSourceEntity(11U);
    msg.setDestination(14190U);
    msg.setDestinationEntity(91U);
    msg.value = 0.8823572349513115;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Chlorophyll #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Chlorophyll msg;
    msg.setTimeStamp(0.629095997572631);
    msg.setSource(54579U);
    msg.setSourceEntity(123U);
    msg.setDestination(3830U);
    msg.setDestinationEntity(182U);
    msg.value = 0.5945096410093316;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Chlorophyll #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Chlorophyll msg;
    msg.setTimeStamp(0.20872646436240194);
    msg.setSource(42802U);
    msg.setSourceEntity(24U);
    msg.setDestination(61122U);
    msg.setDestinationEntity(34U);
    msg.value = 0.34924472121042593;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Chlorophyll #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Fluorescein msg;
    msg.setTimeStamp(0.9883846059527307);
    msg.setSource(41125U);
    msg.setSourceEntity(100U);
    msg.setDestination(40334U);
    msg.setDestinationEntity(109U);
    msg.value = 0.11495255043580621;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Fluorescein #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Fluorescein msg;
    msg.setTimeStamp(0.4958552679995847);
    msg.setSource(59535U);
    msg.setSourceEntity(114U);
    msg.setDestination(14577U);
    msg.setDestinationEntity(5U);
    msg.value = 0.3487392084811647;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Fluorescein #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Fluorescein msg;
    msg.setTimeStamp(0.010476412576400751);
    msg.setSource(37958U);
    msg.setSourceEntity(162U);
    msg.setDestination(55641U);
    msg.setDestinationEntity(46U);
    msg.value = 0.6637034416087852;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Fluorescein #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Phycocyanin msg;
    msg.setTimeStamp(0.6873977574298216);
    msg.setSource(9180U);
    msg.setSourceEntity(206U);
    msg.setDestination(57765U);
    msg.setDestinationEntity(16U);
    msg.value = 0.8215336632044955;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Phycocyanin #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Phycocyanin msg;
    msg.setTimeStamp(0.19652828123252752);
    msg.setSource(9197U);
    msg.setSourceEntity(26U);
    msg.setDestination(1630U);
    msg.setDestinationEntity(227U);
    msg.value = 0.27427147283714937;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Phycocyanin #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Phycocyanin msg;
    msg.setTimeStamp(0.6189626172867047);
    msg.setSource(14413U);
    msg.setSourceEntity(153U);
    msg.setDestination(49697U);
    msg.setDestinationEntity(159U);
    msg.value = 0.9989911228574864;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Phycocyanin #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Phycoerythrin msg;
    msg.setTimeStamp(0.7445667532203022);
    msg.setSource(8435U);
    msg.setSourceEntity(242U);
    msg.setDestination(15321U);
    msg.setDestinationEntity(104U);
    msg.value = 0.5361638066830176;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Phycoerythrin #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Phycoerythrin msg;
    msg.setTimeStamp(0.007360263865919703);
    msg.setSource(19083U);
    msg.setSourceEntity(102U);
    msg.setDestination(35629U);
    msg.setDestinationEntity(161U);
    msg.value = 0.17917110082702148;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Phycoerythrin #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Phycoerythrin msg;
    msg.setTimeStamp(0.2756596761446751);
    msg.setSource(26153U);
    msg.setSourceEntity(136U);
    msg.setDestination(14463U);
    msg.setDestinationEntity(163U);
    msg.value = 0.5593678938059974;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Phycoerythrin #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFixRtk msg;
    msg.setTimeStamp(0.47073419002023054);
    msg.setSource(19688U);
    msg.setSourceEntity(42U);
    msg.setDestination(56296U);
    msg.setDestinationEntity(198U);
    msg.validity = 57220U;
    msg.type = 232U;
    msg.tow = 2003719949U;
    msg.base_lat = 0.5728254200097148;
    msg.base_lon = 0.12977162312615032;
    msg.base_height = 0.9181903852231135;
    msg.n = 0.45700614791785565;
    msg.e = 0.6188416961283667;
    msg.d = 0.3258250358263316;
    msg.v_n = 0.5912370475164234;
    msg.v_e = 0.08667052923948726;
    msg.v_d = 0.5273177051021757;
    msg.satellites = 58U;
    msg.iar_hyp = 56821U;
    msg.iar_ratio = 0.3645612230183227;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFixRtk #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFixRtk msg;
    msg.setTimeStamp(0.024411876596488802);
    msg.setSource(14116U);
    msg.setSourceEntity(241U);
    msg.setDestination(10254U);
    msg.setDestinationEntity(179U);
    msg.validity = 62604U;
    msg.type = 247U;
    msg.tow = 233300620U;
    msg.base_lat = 0.2711531748040841;
    msg.base_lon = 0.8166681945301831;
    msg.base_height = 0.7378825361566395;
    msg.n = 0.7693472849243228;
    msg.e = 0.9848270111772208;
    msg.d = 0.5141679478052822;
    msg.v_n = 0.0026188964943534287;
    msg.v_e = 0.8628996752395;
    msg.v_d = 0.005899184899821108;
    msg.satellites = 42U;
    msg.iar_hyp = 1765U;
    msg.iar_ratio = 0.09223796908925486;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFixRtk #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFixRtk msg;
    msg.setTimeStamp(0.7451357560073241);
    msg.setSource(31122U);
    msg.setSourceEntity(79U);
    msg.setDestination(14934U);
    msg.setDestinationEntity(182U);
    msg.validity = 34259U;
    msg.type = 201U;
    msg.tow = 3712837335U;
    msg.base_lat = 0.7898731666534349;
    msg.base_lon = 0.9853693594555564;
    msg.base_height = 0.11312393297679812;
    msg.n = 0.1513514923733531;
    msg.e = 0.21699739225002046;
    msg.d = 0.828946018968918;
    msg.v_n = 0.8132808911307776;
    msg.v_e = 0.5360733690112298;
    msg.v_d = 0.6088576389603714;
    msg.satellites = 200U;
    msg.iar_hyp = 52682U;
    msg.iar_ratio = 0.6399110992085788;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFixRtk #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ExternalNavData msg;
    msg.setTimeStamp(0.8619537237125601);
    msg.setSource(37881U);
    msg.setSourceEntity(21U);
    msg.setDestination(35828U);
    msg.setDestinationEntity(83U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.4083603698476993;
    tmp_msg_0.lon = 0.9887828049777395;
    tmp_msg_0.height = 0.6348729580765847;
    tmp_msg_0.x = 0.38123039536068504;
    tmp_msg_0.y = 0.5143622825740608;
    tmp_msg_0.z = 0.6886615506138956;
    tmp_msg_0.phi = 0.45184471388594394;
    tmp_msg_0.theta = 0.24443400937293525;
    tmp_msg_0.psi = 0.1575706431406232;
    tmp_msg_0.u = 0.8786808474915103;
    tmp_msg_0.v = 0.38456816580561304;
    tmp_msg_0.w = 0.7756150976678549;
    tmp_msg_0.vx = 0.6870197569228114;
    tmp_msg_0.vy = 0.8558001569427287;
    tmp_msg_0.vz = 0.005303504551445348;
    tmp_msg_0.p = 0.4425541793155504;
    tmp_msg_0.q = 0.7083734390038282;
    tmp_msg_0.r = 0.65089228051844;
    tmp_msg_0.depth = 0.4079854483981077;
    tmp_msg_0.alt = 0.3959034465780299;
    msg.state.set(tmp_msg_0);
    msg.type = 78U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ExternalNavData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ExternalNavData msg;
    msg.setTimeStamp(0.8590402354173668);
    msg.setSource(3007U);
    msg.setSourceEntity(151U);
    msg.setDestination(218U);
    msg.setDestinationEntity(40U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.5916021768252785;
    tmp_msg_0.lon = 0.9667190914307892;
    tmp_msg_0.height = 0.45820325517881266;
    tmp_msg_0.x = 0.13669996418909458;
    tmp_msg_0.y = 0.10818970325500565;
    tmp_msg_0.z = 0.34569435030332474;
    tmp_msg_0.phi = 0.8699313251340033;
    tmp_msg_0.theta = 0.625324864440304;
    tmp_msg_0.psi = 0.6925592827715578;
    tmp_msg_0.u = 0.4940373698560291;
    tmp_msg_0.v = 0.8651244745111684;
    tmp_msg_0.w = 0.09267659745916035;
    tmp_msg_0.vx = 0.5635637948487228;
    tmp_msg_0.vy = 0.4148018780024514;
    tmp_msg_0.vz = 0.8554816522751523;
    tmp_msg_0.p = 0.7563311600354711;
    tmp_msg_0.q = 0.023364213992629;
    tmp_msg_0.r = 0.5123739528779802;
    tmp_msg_0.depth = 0.27859895852685623;
    tmp_msg_0.alt = 0.943567573777305;
    msg.state.set(tmp_msg_0);
    msg.type = 230U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ExternalNavData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ExternalNavData msg;
    msg.setTimeStamp(0.8137033857123909);
    msg.setSource(27043U);
    msg.setSourceEntity(65U);
    msg.setDestination(5949U);
    msg.setDestinationEntity(162U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.019546889075987783;
    tmp_msg_0.lon = 0.8350771975908813;
    tmp_msg_0.height = 0.6784533841471381;
    tmp_msg_0.x = 0.5515897971791497;
    tmp_msg_0.y = 0.7568984689707133;
    tmp_msg_0.z = 0.6848406088359497;
    tmp_msg_0.phi = 0.20031640742943868;
    tmp_msg_0.theta = 0.3112910377293657;
    tmp_msg_0.psi = 0.8482162427446748;
    tmp_msg_0.u = 0.6579332618701161;
    tmp_msg_0.v = 0.5507920925471053;
    tmp_msg_0.w = 0.8524245259838931;
    tmp_msg_0.vx = 0.4141667070443005;
    tmp_msg_0.vy = 0.05806426062599235;
    tmp_msg_0.vz = 0.8482908498479184;
    tmp_msg_0.p = 0.2586576475833904;
    tmp_msg_0.q = 0.827693809100708;
    tmp_msg_0.r = 0.3462119978326491;
    tmp_msg_0.depth = 0.9103205744245347;
    tmp_msg_0.alt = 0.6510577779249693;
    msg.state.set(tmp_msg_0);
    msg.type = 93U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ExternalNavData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DissolvedOxygen msg;
    msg.setTimeStamp(0.6794979208856627);
    msg.setSource(37508U);
    msg.setSourceEntity(109U);
    msg.setDestination(2758U);
    msg.setDestinationEntity(88U);
    msg.value = 0.7496591029453636;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DissolvedOxygen #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DissolvedOxygen msg;
    msg.setTimeStamp(0.7335986811430956);
    msg.setSource(37842U);
    msg.setSourceEntity(95U);
    msg.setDestination(42178U);
    msg.setDestinationEntity(160U);
    msg.value = 0.8989450162095816;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DissolvedOxygen #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DissolvedOxygen msg;
    msg.setTimeStamp(0.6628801083234355);
    msg.setSource(40588U);
    msg.setSourceEntity(171U);
    msg.setDestination(20736U);
    msg.setDestinationEntity(223U);
    msg.value = 0.036670615959520925;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DissolvedOxygen #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AirSaturation msg;
    msg.setTimeStamp(0.29904559565772515);
    msg.setSource(61204U);
    msg.setSourceEntity(198U);
    msg.setDestination(57109U);
    msg.setDestinationEntity(214U);
    msg.value = 0.6270657130287125;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AirSaturation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AirSaturation msg;
    msg.setTimeStamp(0.9713364575463092);
    msg.setSource(31781U);
    msg.setSourceEntity(22U);
    msg.setDestination(562U);
    msg.setDestinationEntity(137U);
    msg.value = 0.2156892729612686;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AirSaturation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AirSaturation msg;
    msg.setTimeStamp(0.22716511325023803);
    msg.setSource(26877U);
    msg.setSourceEntity(164U);
    msg.setDestination(21049U);
    msg.setDestinationEntity(61U);
    msg.value = 0.12382596237415966;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AirSaturation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Throttle msg;
    msg.setTimeStamp(0.9038278302229662);
    msg.setSource(14165U);
    msg.setSourceEntity(45U);
    msg.setDestination(62235U);
    msg.setDestinationEntity(169U);
    msg.value = 0.810744268930264;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Throttle #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Throttle msg;
    msg.setTimeStamp(0.23391760102844494);
    msg.setSource(63891U);
    msg.setSourceEntity(202U);
    msg.setDestination(18142U);
    msg.setDestinationEntity(121U);
    msg.value = 0.831659246875452;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Throttle #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Throttle msg;
    msg.setTimeStamp(0.1696181603986917);
    msg.setSource(33407U);
    msg.setSourceEntity(238U);
    msg.setDestination(47252U);
    msg.setDestinationEntity(159U);
    msg.value = 0.15950213226843069;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Throttle #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PH msg;
    msg.setTimeStamp(0.8030633745592202);
    msg.setSource(44961U);
    msg.setSourceEntity(141U);
    msg.setDestination(8275U);
    msg.setDestinationEntity(250U);
    msg.value = 0.051031180639038776;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PH #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PH msg;
    msg.setTimeStamp(0.4688580694601856);
    msg.setSource(57920U);
    msg.setSourceEntity(214U);
    msg.setDestination(30884U);
    msg.setDestinationEntity(71U);
    msg.value = 0.19115426115321565;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PH #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PH msg;
    msg.setTimeStamp(0.7837683318742328);
    msg.setSource(32656U);
    msg.setSourceEntity(160U);
    msg.setDestination(40335U);
    msg.setDestinationEntity(108U);
    msg.value = 0.33007098261427326;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PH #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Redox msg;
    msg.setTimeStamp(0.6582140118317843);
    msg.setSource(54834U);
    msg.setSourceEntity(168U);
    msg.setDestination(58847U);
    msg.setDestinationEntity(109U);
    msg.value = 0.6616393125918746;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Redox #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Redox msg;
    msg.setTimeStamp(0.0016710623252569334);
    msg.setSource(9870U);
    msg.setSourceEntity(93U);
    msg.setDestination(56535U);
    msg.setDestinationEntity(93U);
    msg.value = 0.9615518431827833;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Redox #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Redox msg;
    msg.setTimeStamp(0.5404958074067374);
    msg.setSource(62221U);
    msg.setSourceEntity(246U);
    msg.setDestination(42871U);
    msg.setDestinationEntity(182U);
    msg.value = 0.6001111283439357;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Redox #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CameraZoom msg;
    msg.setTimeStamp(0.35227628113767495);
    msg.setSource(62991U);
    msg.setSourceEntity(238U);
    msg.setDestination(9771U);
    msg.setDestinationEntity(250U);
    msg.id = 158U;
    msg.zoom = 14U;
    msg.action = 11U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CameraZoom #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CameraZoom msg;
    msg.setTimeStamp(0.4117143648583703);
    msg.setSource(41403U);
    msg.setSourceEntity(32U);
    msg.setDestination(30422U);
    msg.setDestinationEntity(158U);
    msg.id = 168U;
    msg.zoom = 96U;
    msg.action = 34U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CameraZoom #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CameraZoom msg;
    msg.setTimeStamp(0.11605618325355749);
    msg.setSource(62834U);
    msg.setSourceEntity(218U);
    msg.setDestination(60939U);
    msg.setDestinationEntity(237U);
    msg.id = 141U;
    msg.zoom = 83U;
    msg.action = 83U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CameraZoom #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetThrusterActuation msg;
    msg.setTimeStamp(0.753803377715537);
    msg.setSource(46722U);
    msg.setSourceEntity(173U);
    msg.setDestination(48175U);
    msg.setDestinationEntity(43U);
    msg.id = 236U;
    msg.value = 0.13035635944732005;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetThrusterActuation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetThrusterActuation msg;
    msg.setTimeStamp(0.2769780643679779);
    msg.setSource(44065U);
    msg.setSourceEntity(47U);
    msg.setDestination(24989U);
    msg.setDestinationEntity(97U);
    msg.id = 7U;
    msg.value = 0.429448363352804;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetThrusterActuation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetThrusterActuation msg;
    msg.setTimeStamp(0.41428676668295494);
    msg.setSource(24536U);
    msg.setSourceEntity(95U);
    msg.setDestination(57538U);
    msg.setDestinationEntity(221U);
    msg.id = 254U;
    msg.value = 0.45286184884173886;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetThrusterActuation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetServoPosition msg;
    msg.setTimeStamp(0.012403071016762524);
    msg.setSource(55791U);
    msg.setSourceEntity(185U);
    msg.setDestination(33861U);
    msg.setDestinationEntity(110U);
    msg.id = 181U;
    msg.value = 0.6937373370650942;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetServoPosition #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetServoPosition msg;
    msg.setTimeStamp(0.7283404398232391);
    msg.setSource(59008U);
    msg.setSourceEntity(72U);
    msg.setDestination(41057U);
    msg.setDestinationEntity(7U);
    msg.id = 25U;
    msg.value = 0.46703622044290793;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetServoPosition #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetServoPosition msg;
    msg.setTimeStamp(0.9757493942168259);
    msg.setSource(25054U);
    msg.setSourceEntity(4U);
    msg.setDestination(29245U);
    msg.setDestinationEntity(138U);
    msg.id = 21U;
    msg.value = 0.06356281021213894;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetServoPosition #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetControlSurfaceDeflection msg;
    msg.setTimeStamp(0.2905391745379573);
    msg.setSource(12211U);
    msg.setSourceEntity(65U);
    msg.setDestination(51229U);
    msg.setDestinationEntity(251U);
    msg.id = 120U;
    msg.angle = 0.39569675443283336;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetControlSurfaceDeflection #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetControlSurfaceDeflection msg;
    msg.setTimeStamp(0.5806459931642208);
    msg.setSource(52894U);
    msg.setSourceEntity(93U);
    msg.setDestination(17556U);
    msg.setDestinationEntity(222U);
    msg.id = 67U;
    msg.angle = 0.9855986915395142;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetControlSurfaceDeflection #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetControlSurfaceDeflection msg;
    msg.setTimeStamp(0.9176053861274431);
    msg.setSource(52266U);
    msg.setSourceEntity(227U);
    msg.setDestination(40356U);
    msg.setDestinationEntity(143U);
    msg.id = 127U;
    msg.angle = 0.8579889821832668;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetControlSurfaceDeflection #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActionsRequest msg;
    msg.setTimeStamp(0.7352351765430559);
    msg.setSource(48211U);
    msg.setSourceEntity(100U);
    msg.setDestination(1198U);
    msg.setDestinationEntity(174U);
    msg.op = 25U;
    msg.actions.assign("BFPFWJQGHLBIYSVXLLTNRDJYQGXMHANLOLUQQAJBTQRFEEAUONWWYPZSUULSBOMAUXBKCZGPFQRKGUDRDIIPWTMVOLTDSFMGJFSVQCTMPRZHYVVPJXRXKHNXILZPVANGHOIJGCZDYUUAKDWBCOL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActionsRequest #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActionsRequest msg;
    msg.setTimeStamp(0.007278529153063151);
    msg.setSource(28348U);
    msg.setSourceEntity(143U);
    msg.setDestination(12609U);
    msg.setDestinationEntity(94U);
    msg.op = 110U;
    msg.actions.assign("TIBTTGFZZNRDDSYANYYXWYETCKOKCRKLAFWDSJILUIRVPLRMXF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActionsRequest #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActionsRequest msg;
    msg.setTimeStamp(0.07237210652390413);
    msg.setSource(34937U);
    msg.setSourceEntity(163U);
    msg.setDestination(46233U);
    msg.setDestinationEntity(39U);
    msg.op = 43U;
    msg.actions.assign("ZYOXVHHPELOTFIFOYMWTHSQUXJBPBMLPNTJHZGDEUIMHQJYXEESZBFQJCGCMNJYLRGPJSXOFWUBMGPNVFMFEWDDVGXDAAKJNDXXKWCSNROLWWPIAGLISDATKMGQLRKMARACZVIHJIHPIORKTDVAUMGTSRUARYKESGADYVQNKOBUOCVDMTRVGO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActionsRequest #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActions msg;
    msg.setTimeStamp(0.07651500920735699);
    msg.setSource(44169U);
    msg.setSourceEntity(10U);
    msg.setDestination(4156U);
    msg.setDestinationEntity(39U);
    msg.actions.assign("RQOONYSYBRHWKMFYPVRZOGVFEGMUAXZZAIFPSQJHPVDQMKCWIOLWKKEMZGLLICPRKFEDANKWQSHUHBEMOZFTTEDWCXBBUMGXSHYCQGVIRVMJCOTOVHJRACJDGJBWZGYW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActions #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActions msg;
    msg.setTimeStamp(0.15733476521344136);
    msg.setSource(63890U);
    msg.setSourceEntity(244U);
    msg.setDestination(24709U);
    msg.setDestinationEntity(58U);
    msg.actions.assign("OCZVHLYTCPSPMEZZIUMVBMGWVRNDAVBTBOTOQZEKPMNEUUQVWHURUULLSDBOMMYGELQIFFJNNZGWYKTJAHUKARECAJEJDGLWXDCNRTXFIZMDIWEIAMXSLTRKESARBCAPHWTYBPLVFBDTSYGKI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActions #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActions msg;
    msg.setTimeStamp(0.8025100479731322);
    msg.setSource(18908U);
    msg.setSourceEntity(99U);
    msg.setDestination(28081U);
    msg.setDestinationEntity(21U);
    msg.actions.assign("WJICYQBUICYWLYOLBBHXIPCBHMKBNLWITJWVFFUVJXDLQEVKKZVPSCXQTTQOZNSZQFWJHCACUERYHRVUTNNKBOETYQQQOHXTIAGFEZVJZPTPHLPFPFXJRJHGMSLGRWNIIGVCRBRSYMRCWOAEGQCXMOIFUFDXOXG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActions #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ButtonEvent msg;
    msg.setTimeStamp(0.3126370124232568);
    msg.setSource(20008U);
    msg.setSourceEntity(181U);
    msg.setDestination(29260U);
    msg.setDestinationEntity(240U);
    msg.button = 38U;
    msg.value = 42U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ButtonEvent #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ButtonEvent msg;
    msg.setTimeStamp(0.7865544592359177);
    msg.setSource(53081U);
    msg.setSourceEntity(110U);
    msg.setDestination(14283U);
    msg.setDestinationEntity(188U);
    msg.button = 140U;
    msg.value = 145U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ButtonEvent #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ButtonEvent msg;
    msg.setTimeStamp(0.24980439330097637);
    msg.setSource(7984U);
    msg.setSourceEntity(102U);
    msg.setDestination(52767U);
    msg.setDestinationEntity(78U);
    msg.button = 116U;
    msg.value = 100U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ButtonEvent #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LcdControl msg;
    msg.setTimeStamp(0.6721153892943608);
    msg.setSource(44940U);
    msg.setSourceEntity(220U);
    msg.setDestination(15720U);
    msg.setDestinationEntity(63U);
    msg.op = 66U;
    msg.text.assign("SKMTBFQTDHIPZZXJLBRNYHFPWHYIIASCSBDUHETOVXCCRUOQRBRFEEFLLPQIZQPXYICNJCIBZMCHQJTLSFAODIWVMMGJXVBECINTYCALWHMNSRFKQTASOKUONPYKBVTWUJYOORARYSPXZJPWGCAOEVAZMVTGZAJBMDXWBEOWVZN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LcdControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LcdControl msg;
    msg.setTimeStamp(0.8438527115854099);
    msg.setSource(3024U);
    msg.setSourceEntity(224U);
    msg.setDestination(5504U);
    msg.setDestinationEntity(206U);
    msg.op = 35U;
    msg.text.assign("NJDLYMFGEICEAZZXBFISUZPEAVBBLHUQRHUJMUIVCKQOOAWPISEOSYYGAIWKBQGTTOMFXYKHHUYCNIISEVKGJIPKRDLFYFDDXWVNVEDTFXAJALOLXTRFLUMMCQWHKXWSLBPPMCSUDTPHNSRMNYECBETNYWZXUBZPAGWBSQWZOVDNFJDNUWYLAGHEPVQURETJVIFODBZFIVZKLGCOODMQKAGJJHWCZJKKMTVRPHR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LcdControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LcdControl msg;
    msg.setTimeStamp(0.945544737218301);
    msg.setSource(8569U);
    msg.setSourceEntity(67U);
    msg.setDestination(26642U);
    msg.setDestinationEntity(191U);
    msg.op = 56U;
    msg.text.assign("EVYTSIATQIVHJJVSZDNTDZAYDQOBGEGSPEJSYGLRMDLTXGPMQGFT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LcdControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerOperation msg;
    msg.setTimeStamp(0.08127051427854493);
    msg.setSource(12191U);
    msg.setSourceEntity(63U);
    msg.setDestination(24576U);
    msg.setDestinationEntity(250U);
    msg.op = 234U;
    msg.time_remain = 0.68740618990415;
    msg.sched_time = 0.25186853927692154;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerOperation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerOperation msg;
    msg.setTimeStamp(0.45848213826619144);
    msg.setSource(53017U);
    msg.setSourceEntity(211U);
    msg.setDestination(55447U);
    msg.setDestinationEntity(221U);
    msg.op = 127U;
    msg.time_remain = 0.258197986552539;
    msg.sched_time = 0.0017794877861364577;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerOperation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerOperation msg;
    msg.setTimeStamp(0.37496954255950976);
    msg.setSource(52572U);
    msg.setSourceEntity(133U);
    msg.setDestination(47580U);
    msg.setDestinationEntity(72U);
    msg.op = 79U;
    msg.time_remain = 0.5399995195331837;
    msg.sched_time = 0.8928693615344049;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerOperation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelControl msg;
    msg.setTimeStamp(0.5563955510135972);
    msg.setSource(16183U);
    msg.setSourceEntity(90U);
    msg.setDestination(56677U);
    msg.setDestinationEntity(137U);
    msg.name.assign("OUIUAYNWEXEFHHVXUVHUKULCFJ");
    msg.op = 138U;
    msg.sched_time = 0.32483417616095145;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelControl msg;
    msg.setTimeStamp(0.6930940505566705);
    msg.setSource(13191U);
    msg.setSourceEntity(173U);
    msg.setDestination(60310U);
    msg.setDestinationEntity(0U);
    msg.name.assign("ZOOTDDLIYHACWFOBEUQDSGZQRBBOXFHAWWHSPWKEWLFTMHPYXEBAIFQHUGQMZEVSJDATFPWVUHPPRZPODVTLWEQRUACYRJIAKBHKBISLDNRGMCQVYMJIUOXBMXWZRVTGDTVPXNJXGSMJWHMISKKVGJQXKBYFVJTYFNGVQNNLRMZKVJKGLZEQAJIPRITXOCCQLYCLF");
    msg.op = 238U;
    msg.sched_time = 0.905525877362825;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelControl msg;
    msg.setTimeStamp(0.5980753027524136);
    msg.setSource(14205U);
    msg.setSourceEntity(176U);
    msg.setDestination(10297U);
    msg.setDestinationEntity(213U);
    msg.name.assign("ATDTQHVWOSCGEQCKKFQFEZEHOGDOTOJORVYGXNLUKRCOFRMJTFMRKVNZHZDTHIRYIQYPMAWRUZFBJSSPJGLNNLCPDFVJZIDDKMCEUANPGYRAWOUOUEMWWVDXZHMBBEISBLBZAKVKCHUOWSABECEZLPBPMATGVG");
    msg.op = 220U;
    msg.sched_time = 0.951310891210538;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryPowerChannelState msg;
    msg.setTimeStamp(0.09426483840612376);
    msg.setSource(25006U);
    msg.setSourceEntity(122U);
    msg.setDestination(58857U);
    msg.setDestinationEntity(98U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryPowerChannelState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryPowerChannelState msg;
    msg.setTimeStamp(0.006937264637913998);
    msg.setSource(40046U);
    msg.setSourceEntity(142U);
    msg.setDestination(5914U);
    msg.setDestinationEntity(234U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryPowerChannelState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryPowerChannelState msg;
    msg.setTimeStamp(0.7256616328905544);
    msg.setSource(15999U);
    msg.setSourceEntity(169U);
    msg.setDestination(17593U);
    msg.setDestinationEntity(178U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryPowerChannelState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelState msg;
    msg.setTimeStamp(0.9681299240520351);
    msg.setSource(57034U);
    msg.setSourceEntity(54U);
    msg.setDestination(64538U);
    msg.setDestinationEntity(179U);
    msg.name.assign("YBWEUELXYRQLKKIGKTXLSWBHCJXCEJYJUYBLECQIZYKEQDFGSUPFLDNLQGHGWEADMDOAZBDGIWITXEFPPTOMNXUDHUULWBCNBSVDPIYIGQOXHIUOPVSOZUFRYFIPWVVMNSENUWZZMBRKSAAYQMSBAHCTIVCXAAIRNQMWJYCBWKSFVDUJZOQHDJFPRXLVFNNFSGOTCOTRZEPQJNVTAXYMGBMPHJAJ");
    msg.state = 195U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelState msg;
    msg.setTimeStamp(0.972349881121958);
    msg.setSource(13110U);
    msg.setSourceEntity(211U);
    msg.setDestination(4595U);
    msg.setDestinationEntity(67U);
    msg.name.assign("JDVQSIKPWNBDTGTCHMURTTDVRSEQZQELHYWJMZFWVSIPNHNSMKCINOQABHCGFIZQHCYPOWLOPXJMSPFDDOPGEUAFXJYDFGJFBXHPTDGRSKABUCUOHZBYJLIEYJQAINWKHWLATG");
    msg.state = 244U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelState msg;
    msg.setTimeStamp(0.6325748427820068);
    msg.setSource(37221U);
    msg.setSourceEntity(142U);
    msg.setDestination(54288U);
    msg.setDestinationEntity(218U);
    msg.name.assign("DAWLGUIOUCCVDZYAIFPBEVOBITECKAHHSUSWMDS");
    msg.state = 158U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LedBrightness msg;
    msg.setTimeStamp(0.2739662104796686);
    msg.setSource(45538U);
    msg.setSourceEntity(171U);
    msg.setDestination(59236U);
    msg.setDestinationEntity(53U);
    msg.name.assign("YHUZOYEHXMEWTYJYLXJXYDMOIVLJLOESBGMDCQDJYHBVSFUUGAOGUUTFXQFJMYTKQVGTQCMEQHZQTNAWZLIBKVYXKKXUZNJBRDANUEVPRAQEMYXPVKVJZWLSSGZXHLIDAEKHSKFLWGQDXOEAWWIBKWCUHOLMYDWFDNPMCIRGTRFEJUBOFIBWNICCKHWKRBIPFSMCLGRL");
    msg.value = 66U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LedBrightness #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LedBrightness msg;
    msg.setTimeStamp(0.8552874903446238);
    msg.setSource(11599U);
    msg.setSourceEntity(196U);
    msg.setDestination(21038U);
    msg.setDestinationEntity(135U);
    msg.name.assign("OARXLVBXEDJRDFGDCYRQSLSVVOLZXXQCHRYCDAGLVNQHBUBHBAJAPQJFZYNTTDCSAGNK");
    msg.value = 212U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LedBrightness #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LedBrightness msg;
    msg.setTimeStamp(0.5013920966768447);
    msg.setSource(51760U);
    msg.setSourceEntity(83U);
    msg.setDestination(59334U);
    msg.setDestinationEntity(70U);
    msg.name.assign("HLSNWIARBQRRIYOTBTCILXJDVGVBWLHPOCNTLZGFKWYEQALHUGPNVVEYPWJCPJTVUHFJZNORMGIAZNMHEIVHDUTWK");
    msg.value = 177U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LedBrightness #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryLedBrightness msg;
    msg.setTimeStamp(0.7686236527255786);
    msg.setSource(26664U);
    msg.setSourceEntity(53U);
    msg.setDestination(62348U);
    msg.setDestinationEntity(226U);
    msg.name.assign("XDOOHHJFUGIHTKFWFOJZKUNZTLSBSOGUEIZCASCJNTPOPUDGMUEMVDXZDIWFXEWHLKNTYZVJDMQWGTALSVPHHENAZAHLAJDPOQEBMDFRPKBUWHQRRPSBQBAQXUYFEYWGIRSNCFWRRVFTUCCMMOYJAMMYEGRTAIZBKUHV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryLedBrightness #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryLedBrightness msg;
    msg.setTimeStamp(0.2699907697040279);
    msg.setSource(39769U);
    msg.setSourceEntity(228U);
    msg.setDestination(57161U);
    msg.setDestinationEntity(188U);
    msg.name.assign("CKLZFPVSTBPCLSCWXCXNAWUGRGUORIXSIYMVUIMFXJDTCERGQLUBTJKNTEICWPAWTZIYKMG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryLedBrightness #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryLedBrightness msg;
    msg.setTimeStamp(0.011147440333681424);
    msg.setSource(15317U);
    msg.setSourceEntity(139U);
    msg.setDestination(62902U);
    msg.setDestinationEntity(35U);
    msg.name.assign("TILRKTCSUHXTNXFZVNNBCZFHMKRLWLNYVTVUHHQYENTTJDBNMINVXMUYLHDTQJMMALIBYVXSKOYVONKAOMPHRFQPDWMTNTVOJWPGFYUUDAKIX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryLedBrightness #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetLedBrightness msg;
    msg.setTimeStamp(0.6606887796255969);
    msg.setSource(50881U);
    msg.setSourceEntity(145U);
    msg.setDestination(21565U);
    msg.setDestinationEntity(116U);
    msg.name.assign("FRGGFOLYKTXQVSSIKOUSQXGPREBOUDKRJHKYOWNAVCMJYXCYXKTIEIPMHZDCLGYDEPVIAYPZTREFYZOTXMPXJJFYTZANSCQFTUZHQFWWKNUQVNAHXMXAPJBCJCGDNCHTKURWTWDJYGOJMAIWLBUHBFSZBIRDKZBOUWLRLZINUMXAVPOLAF");
    msg.value = 137U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetLedBrightness #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetLedBrightness msg;
    msg.setTimeStamp(0.33389158063736324);
    msg.setSource(37952U);
    msg.setSourceEntity(128U);
    msg.setDestination(59386U);
    msg.setDestinationEntity(124U);
    msg.name.assign("WVJMTJAJOTVOZOLGWOMJTUGOLRYUMGXUYQMZISSMLGEVMDNDGKDZEVLSILHAKFXMXAVUWEUHDHRQXEONBQMSERHACTGFAGBYCTQZYLWTPMZNEAFIZLZUKGUSSPJWCADQYAPIBFNGRKXIFIIZKEIPEUNZLCXKDWPDLJCWEPVQTZKYJPWOVXHFSHSVR");
    msg.value = 212U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetLedBrightness #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetLedBrightness msg;
    msg.setTimeStamp(0.28668979499447955);
    msg.setSource(40853U);
    msg.setSourceEntity(16U);
    msg.setDestination(31474U);
    msg.setDestinationEntity(101U);
    msg.name.assign("JLUAHDGUJSGLUHICGCBGBTHJEMMNBQODGVLO");
    msg.value = 197U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetLedBrightness #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetPWM msg;
    msg.setTimeStamp(0.5998877125890427);
    msg.setSource(45268U);
    msg.setSourceEntity(53U);
    msg.setDestination(60101U);
    msg.setDestinationEntity(162U);
    msg.id = 150U;
    msg.period = 2780574585U;
    msg.duty_cycle = 420867431U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetPWM #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetPWM msg;
    msg.setTimeStamp(0.2705889439961071);
    msg.setSource(22800U);
    msg.setSourceEntity(213U);
    msg.setDestination(39001U);
    msg.setDestinationEntity(12U);
    msg.id = 49U;
    msg.period = 2609386684U;
    msg.duty_cycle = 626483495U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetPWM #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetPWM msg;
    msg.setTimeStamp(0.728311703300744);
    msg.setSource(60768U);
    msg.setSourceEntity(58U);
    msg.setDestination(43668U);
    msg.setDestinationEntity(132U);
    msg.id = 72U;
    msg.period = 3913511904U;
    msg.duty_cycle = 1272124413U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetPWM #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PWM msg;
    msg.setTimeStamp(0.9999390772429214);
    msg.setSource(61012U);
    msg.setSourceEntity(110U);
    msg.setDestination(54053U);
    msg.setDestinationEntity(237U);
    msg.id = 201U;
    msg.period = 1805900558U;
    msg.duty_cycle = 3624913042U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PWM #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PWM msg;
    msg.setTimeStamp(0.6992080326996235);
    msg.setSource(57088U);
    msg.setSourceEntity(83U);
    msg.setDestination(933U);
    msg.setDestinationEntity(224U);
    msg.id = 17U;
    msg.period = 3142022532U;
    msg.duty_cycle = 2086124498U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PWM #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PWM msg;
    msg.setTimeStamp(0.46087741666031234);
    msg.setSource(39149U);
    msg.setSourceEntity(13U);
    msg.setDestination(11619U);
    msg.setDestinationEntity(205U);
    msg.id = 102U;
    msg.period = 18154857U;
    msg.duty_cycle = 1401879473U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PWM #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedState msg;
    msg.setTimeStamp(0.21110689809708372);
    msg.setSource(48784U);
    msg.setSourceEntity(55U);
    msg.setDestination(32491U);
    msg.setDestinationEntity(47U);
    msg.lat = 0.47047663608941914;
    msg.lon = 0.27508888746191185;
    msg.height = 0.07791143267633338;
    msg.x = 0.683928983956138;
    msg.y = 0.0194485238059644;
    msg.z = 0.30843372035021643;
    msg.phi = 0.09216130532416189;
    msg.theta = 0.9036695062015934;
    msg.psi = 0.08376340852355724;
    msg.u = 0.06172271360196757;
    msg.v = 0.7585025070506024;
    msg.w = 0.13407817091657126;
    msg.vx = 0.41815512405539657;
    msg.vy = 0.42646806568451534;
    msg.vz = 0.34736989884537517;
    msg.p = 0.5083226463054656;
    msg.q = 0.9162398293033958;
    msg.r = 0.6323867743916146;
    msg.depth = 0.6705938969978071;
    msg.alt = 0.11264843592873097;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedState msg;
    msg.setTimeStamp(0.744372703609261);
    msg.setSource(59971U);
    msg.setSourceEntity(36U);
    msg.setDestination(60035U);
    msg.setDestinationEntity(132U);
    msg.lat = 0.4821528824960022;
    msg.lon = 0.30537132235915776;
    msg.height = 0.9479595972324155;
    msg.x = 0.04111983161083621;
    msg.y = 0.6675319120987727;
    msg.z = 0.6031980809185801;
    msg.phi = 0.892718355712093;
    msg.theta = 0.07799263822891922;
    msg.psi = 0.8956983420861421;
    msg.u = 0.39019933673042895;
    msg.v = 0.9633169061583146;
    msg.w = 0.5600875008341561;
    msg.vx = 0.12254204202866625;
    msg.vy = 0.36178931480033905;
    msg.vz = 0.15732255738549705;
    msg.p = 0.9475787080055669;
    msg.q = 0.331337802943675;
    msg.r = 0.35140807150680187;
    msg.depth = 0.2799655551133674;
    msg.alt = 0.8754966903540538;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedState msg;
    msg.setTimeStamp(0.8555848652888712);
    msg.setSource(7294U);
    msg.setSourceEntity(117U);
    msg.setDestination(12244U);
    msg.setDestinationEntity(34U);
    msg.lat = 0.49323896380462406;
    msg.lon = 0.13296610175182444;
    msg.height = 0.3940202021825905;
    msg.x = 0.20531770379196101;
    msg.y = 0.671724570007244;
    msg.z = 0.9948337895863211;
    msg.phi = 0.25194961963645135;
    msg.theta = 0.4446349085759561;
    msg.psi = 0.13922831292622617;
    msg.u = 0.5889824924640447;
    msg.v = 0.7773844557785575;
    msg.w = 0.04153570618029523;
    msg.vx = 0.42670841394354075;
    msg.vy = 0.0014345590985980206;
    msg.vz = 0.831520255558845;
    msg.p = 0.571854436629498;
    msg.q = 0.005899832830409624;
    msg.r = 0.4159288140263425;
    msg.depth = 0.02916996869286337;
    msg.alt = 0.1694988414868951;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedStreamVelocity msg;
    msg.setTimeStamp(0.3647205495899153);
    msg.setSource(15522U);
    msg.setSourceEntity(31U);
    msg.setDestination(46688U);
    msg.setDestinationEntity(220U);
    msg.x = 0.08184085307751632;
    msg.y = 0.9349549133760633;
    msg.z = 0.24077875734051124;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedStreamVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedStreamVelocity msg;
    msg.setTimeStamp(0.7345973497960786);
    msg.setSource(19759U);
    msg.setSourceEntity(81U);
    msg.setDestination(13290U);
    msg.setDestinationEntity(86U);
    msg.x = 0.3975947983516339;
    msg.y = 0.4862248893709761;
    msg.z = 0.9529732288581864;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedStreamVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedStreamVelocity msg;
    msg.setTimeStamp(0.6916115607464043);
    msg.setSource(59737U);
    msg.setSourceEntity(238U);
    msg.setDestination(4516U);
    msg.setDestinationEntity(160U);
    msg.x = 0.6825303373284665;
    msg.y = 0.8248276976342264;
    msg.z = 0.12547068407698003;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedStreamVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IndicatedSpeed msg;
    msg.setTimeStamp(0.8244380566254718);
    msg.setSource(42169U);
    msg.setSourceEntity(163U);
    msg.setDestination(51972U);
    msg.setDestinationEntity(19U);
    msg.value = 0.17540509787911607;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IndicatedSpeed #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IndicatedSpeed msg;
    msg.setTimeStamp(0.9542032157574172);
    msg.setSource(23971U);
    msg.setSourceEntity(64U);
    msg.setDestination(10480U);
    msg.setDestinationEntity(196U);
    msg.value = 0.9020919807884659;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IndicatedSpeed #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IndicatedSpeed msg;
    msg.setTimeStamp(0.17993411589058206);
    msg.setSource(604U);
    msg.setSourceEntity(139U);
    msg.setDestination(2135U);
    msg.setDestinationEntity(146U);
    msg.value = 0.4846875339730542;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IndicatedSpeed #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrueSpeed msg;
    msg.setTimeStamp(0.8823164992434427);
    msg.setSource(23782U);
    msg.setSourceEntity(221U);
    msg.setDestination(60561U);
    msg.setDestinationEntity(205U);
    msg.value = 0.020234958150707638;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrueSpeed #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrueSpeed msg;
    msg.setTimeStamp(0.8530518560721787);
    msg.setSource(13334U);
    msg.setSourceEntity(78U);
    msg.setDestination(48684U);
    msg.setDestinationEntity(246U);
    msg.value = 0.5914962844281499;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrueSpeed #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrueSpeed msg;
    msg.setTimeStamp(0.170056340113247);
    msg.setSource(25580U);
    msg.setSourceEntity(92U);
    msg.setDestination(20560U);
    msg.setDestinationEntity(251U);
    msg.value = 0.388177610564031;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrueSpeed #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationUncertainty msg;
    msg.setTimeStamp(0.08047396054377898);
    msg.setSource(62346U);
    msg.setSourceEntity(100U);
    msg.setDestination(39158U);
    msg.setDestinationEntity(124U);
    msg.x = 0.4820740308099756;
    msg.y = 0.23588698218401793;
    msg.z = 0.20703385093748006;
    msg.phi = 0.022163246296792782;
    msg.theta = 0.02459481524379392;
    msg.psi = 0.8663520531404082;
    msg.p = 0.7147547659906248;
    msg.q = 0.7919597410632477;
    msg.r = 0.5664810643869218;
    msg.u = 0.5254843738510375;
    msg.v = 0.8368026444957701;
    msg.w = 0.6179086695572906;
    msg.bias_psi = 0.771853118488528;
    msg.bias_r = 0.6578446900146652;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationUncertainty #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationUncertainty msg;
    msg.setTimeStamp(0.05878038591212453);
    msg.setSource(57481U);
    msg.setSourceEntity(189U);
    msg.setDestination(59206U);
    msg.setDestinationEntity(79U);
    msg.x = 0.05582495658103925;
    msg.y = 0.6236152918202742;
    msg.z = 0.3478674439519289;
    msg.phi = 0.8896654952337674;
    msg.theta = 0.600679278882;
    msg.psi = 0.08931087789720449;
    msg.p = 0.003520997040016738;
    msg.q = 0.26510610796952394;
    msg.r = 0.8355448738696732;
    msg.u = 0.0031589664993184607;
    msg.v = 0.6946692557314358;
    msg.w = 0.6140343114790031;
    msg.bias_psi = 0.38045291142540083;
    msg.bias_r = 0.3607993450403042;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationUncertainty #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationUncertainty msg;
    msg.setTimeStamp(0.6437826547744391);
    msg.setSource(59486U);
    msg.setSourceEntity(155U);
    msg.setDestination(53567U);
    msg.setDestinationEntity(207U);
    msg.x = 0.47893093222664285;
    msg.y = 0.8830351389204514;
    msg.z = 0.10055809938049753;
    msg.phi = 0.6722028642613831;
    msg.theta = 0.7642066535522337;
    msg.psi = 0.1351177032969224;
    msg.p = 0.34648072728666035;
    msg.q = 0.3701751360662511;
    msg.r = 0.66043923660749;
    msg.u = 0.1482136557291045;
    msg.v = 0.29317425825370036;
    msg.w = 0.40044459586231873;
    msg.bias_psi = 0.360058252123295;
    msg.bias_r = 0.5118998647862849;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationUncertainty #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationData msg;
    msg.setTimeStamp(0.12706173444253288);
    msg.setSource(46890U);
    msg.setSourceEntity(119U);
    msg.setDestination(32755U);
    msg.setDestinationEntity(200U);
    msg.bias_psi = 0.7543744137236186;
    msg.bias_r = 0.9619833263109792;
    msg.cog = 0.7040825198236861;
    msg.cyaw = 0.92506272186892;
    msg.lbl_rej_level = 0.06704322013951403;
    msg.gps_rej_level = 0.5010203721552007;
    msg.custom_x = 0.26618810193124365;
    msg.custom_y = 0.20624998151205376;
    msg.custom_z = 0.037130139764832704;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationData msg;
    msg.setTimeStamp(0.11542297933474288);
    msg.setSource(4911U);
    msg.setSourceEntity(151U);
    msg.setDestination(27853U);
    msg.setDestinationEntity(70U);
    msg.bias_psi = 0.9191915715978802;
    msg.bias_r = 0.018400061043047367;
    msg.cog = 0.225441501897109;
    msg.cyaw = 0.720275033064418;
    msg.lbl_rej_level = 0.6582670527812048;
    msg.gps_rej_level = 0.8836616422513921;
    msg.custom_x = 0.29806777205017054;
    msg.custom_y = 0.32200207092429867;
    msg.custom_z = 0.6467754014494396;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationData msg;
    msg.setTimeStamp(0.929568396075202);
    msg.setSource(45083U);
    msg.setSourceEntity(66U);
    msg.setDestination(50825U);
    msg.setDestinationEntity(176U);
    msg.bias_psi = 0.8953874428568931;
    msg.bias_r = 0.3961385561701337;
    msg.cog = 0.0896618693933613;
    msg.cyaw = 0.43500304390405775;
    msg.lbl_rej_level = 0.8850271089362819;
    msg.gps_rej_level = 0.852876490047731;
    msg.custom_x = 0.17607193853676728;
    msg.custom_y = 0.7710400874700432;
    msg.custom_z = 0.2785328880340847;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFixRejection msg;
    msg.setTimeStamp(0.02320656212384231);
    msg.setSource(55526U);
    msg.setSourceEntity(70U);
    msg.setDestination(19372U);
    msg.setDestinationEntity(124U);
    msg.utc_time = 0.9665160335904864;
    msg.reason = 181U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFixRejection #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFixRejection msg;
    msg.setTimeStamp(0.5492199007843896);
    msg.setSource(64661U);
    msg.setSourceEntity(252U);
    msg.setDestination(27684U);
    msg.setDestinationEntity(34U);
    msg.utc_time = 0.4742102360252899;
    msg.reason = 69U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFixRejection #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFixRejection msg;
    msg.setTimeStamp(0.68945345160871);
    msg.setSource(47547U);
    msg.setSourceEntity(242U);
    msg.setDestination(27214U);
    msg.setDestinationEntity(236U);
    msg.utc_time = 0.6155504294498896;
    msg.reason = 2U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFixRejection #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRangeAcceptance msg;
    msg.setTimeStamp(0.10896441289142378);
    msg.setSource(47554U);
    msg.setSourceEntity(145U);
    msg.setDestination(59894U);
    msg.setDestinationEntity(5U);
    msg.id = 38U;
    msg.range = 0.29371874616934235;
    msg.acceptance = 93U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRangeAcceptance #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRangeAcceptance msg;
    msg.setTimeStamp(0.04105741244270855);
    msg.setSource(25518U);
    msg.setSourceEntity(204U);
    msg.setDestination(35237U);
    msg.setDestinationEntity(83U);
    msg.id = 234U;
    msg.range = 0.9586895655500164;
    msg.acceptance = 152U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRangeAcceptance #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRangeAcceptance msg;
    msg.setTimeStamp(0.2566326783993511);
    msg.setSource(53804U);
    msg.setSourceEntity(246U);
    msg.setDestination(59847U);
    msg.setDestinationEntity(167U);
    msg.id = 140U;
    msg.range = 0.4585596443271984;
    msg.acceptance = 202U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRangeAcceptance #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DvlRejection msg;
    msg.setTimeStamp(0.9480094094326678);
    msg.setSource(23247U);
    msg.setSourceEntity(24U);
    msg.setDestination(55647U);
    msg.setDestinationEntity(46U);
    msg.type = 132U;
    msg.reason = 125U;
    msg.value = 0.6522834407312248;
    msg.timestep = 0.256665273139816;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DvlRejection #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DvlRejection msg;
    msg.setTimeStamp(0.6314608516420009);
    msg.setSource(37868U);
    msg.setSourceEntity(1U);
    msg.setDestination(35318U);
    msg.setDestinationEntity(71U);
    msg.type = 28U;
    msg.reason = 163U;
    msg.value = 0.5298511392184352;
    msg.timestep = 0.6686902283046219;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DvlRejection #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DvlRejection msg;
    msg.setTimeStamp(0.3439102731860262);
    msg.setSource(5509U);
    msg.setSourceEntity(52U);
    msg.setDestination(54010U);
    msg.setDestinationEntity(123U);
    msg.type = 153U;
    msg.reason = 78U;
    msg.value = 0.2529498249116181;
    msg.timestep = 0.12994228929109541;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DvlRejection #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblEstimate msg;
    msg.setTimeStamp(0.28687542693308865);
    msg.setSource(817U);
    msg.setSourceEntity(131U);
    msg.setDestination(38783U);
    msg.setDestinationEntity(122U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("FNPJVQUADLNDTPHOBIDLTRHRYNRHENMSPYOJAIOCIGU");
    tmp_msg_0.lat = 0.8587417310405864;
    tmp_msg_0.lon = 0.29823494912439463;
    tmp_msg_0.depth = 0.9962104989105797;
    tmp_msg_0.query_channel = 45U;
    tmp_msg_0.reply_channel = 145U;
    tmp_msg_0.transponder_delay = 50U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.3197322231765696;
    msg.y = 0.30553007303463997;
    msg.var_x = 0.936154563171684;
    msg.var_y = 0.7261755655719971;
    msg.distance = 0.5383509284183529;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblEstimate #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblEstimate msg;
    msg.setTimeStamp(0.8278180343508522);
    msg.setSource(28246U);
    msg.setSourceEntity(149U);
    msg.setDestination(12264U);
    msg.setDestinationEntity(101U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("GBDHGSBOQVATPOCWKOQEUHTOEEPKABYJXMZASQOMSONCWSWNBKIDRHHFHNHZTMZLCJGDYXOZVYULWXFUYDAFYTUKFQBYIEEAZEUDZFBDPELMRIVVDIPOFPACLGPYSKJFSNIHIXARNMZCLVRSVRPAYKGSYNJINCDIGJWILFXLKAJRTSTPUZELKCNMGKXGFWKFVHARWVOGLZMNCOWBDTQQQ");
    tmp_msg_0.lat = 0.01332715544665175;
    tmp_msg_0.lon = 0.19995403594561523;
    tmp_msg_0.depth = 0.6071589660019354;
    tmp_msg_0.query_channel = 79U;
    tmp_msg_0.reply_channel = 186U;
    tmp_msg_0.transponder_delay = 115U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.9170501689838443;
    msg.y = 0.7897682308985088;
    msg.var_x = 0.7419734230415993;
    msg.var_y = 0.33067163159080837;
    msg.distance = 0.5985637322529674;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblEstimate #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblEstimate msg;
    msg.setTimeStamp(0.3235157446124236);
    msg.setSource(18274U);
    msg.setSourceEntity(181U);
    msg.setDestination(47759U);
    msg.setDestinationEntity(222U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("KLMQUYPTOQHHZZDCJOATBQELGWFFHOGJDVMFWTWCHKCPZRDTMJGLCTEBGENORDHKXSTQRGTHFLPAVEUQBIYPUXWEBIIIUCWJDWIJFONCXXRLBZRRNCNOCPOGSCZMYPENJZKFMQNIFYKUIBDJQYBAOM");
    tmp_msg_0.lat = 0.26626388531083567;
    tmp_msg_0.lon = 0.962025219642813;
    tmp_msg_0.depth = 0.6154369610923442;
    tmp_msg_0.query_channel = 145U;
    tmp_msg_0.reply_channel = 46U;
    tmp_msg_0.transponder_delay = 86U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.1739228692224165;
    msg.y = 0.04488419830491741;
    msg.var_x = 0.08670497581242775;
    msg.var_y = 0.7402516957320234;
    msg.distance = 0.5116410833666216;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblEstimate #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AlignmentState msg;
    msg.setTimeStamp(0.40191655475052557);
    msg.setSource(59706U);
    msg.setSourceEntity(69U);
    msg.setDestination(60028U);
    msg.setDestinationEntity(50U);
    msg.state = 24U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AlignmentState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AlignmentState msg;
    msg.setTimeStamp(0.1535025318896407);
    msg.setSource(27053U);
    msg.setSourceEntity(236U);
    msg.setDestination(662U);
    msg.setDestinationEntity(51U);
    msg.state = 224U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AlignmentState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AlignmentState msg;
    msg.setTimeStamp(0.3986252987977419);
    msg.setSource(65009U);
    msg.setSourceEntity(14U);
    msg.setDestination(32194U);
    msg.setDestinationEntity(73U);
    msg.state = 236U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AlignmentState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupStreamVelocity msg;
    msg.setTimeStamp(0.7283258071376576);
    msg.setSource(59084U);
    msg.setSourceEntity(232U);
    msg.setDestination(52980U);
    msg.setDestinationEntity(177U);
    msg.x = 0.9673760475248236;
    msg.y = 0.13898933265516744;
    msg.z = 0.4370315726135381;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupStreamVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupStreamVelocity msg;
    msg.setTimeStamp(0.07456509309665416);
    msg.setSource(29564U);
    msg.setSourceEntity(193U);
    msg.setDestination(6403U);
    msg.setDestinationEntity(199U);
    msg.x = 0.4874158021791658;
    msg.y = 0.5079752387494519;
    msg.z = 0.9560955990649573;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupStreamVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupStreamVelocity msg;
    msg.setTimeStamp(0.23106771674968474);
    msg.setSource(11776U);
    msg.setSourceEntity(181U);
    msg.setDestination(50656U);
    msg.setDestinationEntity(239U);
    msg.x = 0.07110962419762012;
    msg.y = 0.4566248690130461;
    msg.z = 0.09938746970518553;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupStreamVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Airflow msg;
    msg.setTimeStamp(0.9944836662272233);
    msg.setSource(9036U);
    msg.setSourceEntity(215U);
    msg.setDestination(45375U);
    msg.setDestinationEntity(151U);
    msg.va = 0.5461668760683603;
    msg.aoa = 0.18116245674239362;
    msg.ssa = 0.512760680820371;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Airflow #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Airflow msg;
    msg.setTimeStamp(0.9036277113542106);
    msg.setSource(47370U);
    msg.setSourceEntity(31U);
    msg.setDestination(16235U);
    msg.setDestinationEntity(221U);
    msg.va = 0.9548825461528029;
    msg.aoa = 0.5253777044710379;
    msg.ssa = 0.09205030226685762;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Airflow #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Airflow msg;
    msg.setTimeStamp(0.29561346301854285);
    msg.setSource(11770U);
    msg.setSourceEntity(87U);
    msg.setDestination(45560U);
    msg.setDestinationEntity(171U);
    msg.va = 0.576573720720561;
    msg.aoa = 0.4935971934139909;
    msg.ssa = 0.2511077377881835;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Airflow #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeading msg;
    msg.setTimeStamp(0.5116370268605467);
    msg.setSource(53319U);
    msg.setSourceEntity(169U);
    msg.setDestination(62014U);
    msg.setDestinationEntity(193U);
    msg.value = 0.2217093430573035;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeading #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeading msg;
    msg.setTimeStamp(0.04508881838291823);
    msg.setSource(32849U);
    msg.setSourceEntity(42U);
    msg.setDestination(35487U);
    msg.setDestinationEntity(193U);
    msg.value = 0.2523345942417202;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeading #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeading msg;
    msg.setTimeStamp(0.06033603111427488);
    msg.setSource(55004U);
    msg.setSourceEntity(168U);
    msg.setDestination(64039U);
    msg.setDestinationEntity(112U);
    msg.value = 0.6007186223579531;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeading #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredZ msg;
    msg.setTimeStamp(0.21989099274532453);
    msg.setSource(56559U);
    msg.setSourceEntity(23U);
    msg.setDestination(1219U);
    msg.setDestinationEntity(247U);
    msg.value = 0.06385980056015106;
    msg.z_units = 245U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredZ #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredZ msg;
    msg.setTimeStamp(0.7975976651346852);
    msg.setSource(42274U);
    msg.setSourceEntity(164U);
    msg.setDestination(52973U);
    msg.setDestinationEntity(65U);
    msg.value = 0.8835670699659668;
    msg.z_units = 14U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredZ #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredZ msg;
    msg.setTimeStamp(0.22976142699129787);
    msg.setSource(24622U);
    msg.setSourceEntity(140U);
    msg.setDestination(29240U);
    msg.setDestinationEntity(188U);
    msg.value = 0.45643827276752136;
    msg.z_units = 180U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredZ #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredSpeed msg;
    msg.setTimeStamp(0.32818766497476626);
    msg.setSource(61928U);
    msg.setSourceEntity(227U);
    msg.setDestination(43090U);
    msg.setDestinationEntity(192U);
    msg.value = 0.5675274299435116;
    msg.speed_units = 58U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredSpeed #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredSpeed msg;
    msg.setTimeStamp(0.6845737027560331);
    msg.setSource(47890U);
    msg.setSourceEntity(202U);
    msg.setDestination(5450U);
    msg.setDestinationEntity(103U);
    msg.value = 0.6242394214966127;
    msg.speed_units = 69U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredSpeed #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredSpeed msg;
    msg.setTimeStamp(0.9076944756555819);
    msg.setSource(19222U);
    msg.setSourceEntity(102U);
    msg.setDestination(38856U);
    msg.setDestinationEntity(137U);
    msg.value = 0.7948431847183067;
    msg.speed_units = 154U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredSpeed #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredRoll msg;
    msg.setTimeStamp(0.8218315841804);
    msg.setSource(27760U);
    msg.setSourceEntity(231U);
    msg.setDestination(65250U);
    msg.setDestinationEntity(10U);
    msg.value = 0.7364327714373546;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredRoll #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredRoll msg;
    msg.setTimeStamp(0.31632076096435335);
    msg.setSource(63599U);
    msg.setSourceEntity(195U);
    msg.setDestination(26433U);
    msg.setDestinationEntity(99U);
    msg.value = 0.9823293142140324;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredRoll #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredRoll msg;
    msg.setTimeStamp(0.32755055119017695);
    msg.setSource(3438U);
    msg.setSourceEntity(170U);
    msg.setDestination(41058U);
    msg.setDestinationEntity(63U);
    msg.value = 0.7403438045177447;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredRoll #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPitch msg;
    msg.setTimeStamp(0.4666864632152721);
    msg.setSource(30348U);
    msg.setSourceEntity(143U);
    msg.setDestination(53781U);
    msg.setDestinationEntity(15U);
    msg.value = 0.3717247012212701;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPitch #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPitch msg;
    msg.setTimeStamp(0.28921270981237435);
    msg.setSource(64914U);
    msg.setSourceEntity(209U);
    msg.setDestination(56981U);
    msg.setDestinationEntity(204U);
    msg.value = 0.008616519175137727;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPitch #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPitch msg;
    msg.setTimeStamp(0.8798886780012297);
    msg.setSource(14804U);
    msg.setSourceEntity(114U);
    msg.setDestination(55441U);
    msg.setDestinationEntity(251U);
    msg.value = 0.8763993770821861;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPitch #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVerticalRate msg;
    msg.setTimeStamp(0.8997039221062111);
    msg.setSource(14833U);
    msg.setSourceEntity(201U);
    msg.setDestination(40854U);
    msg.setDestinationEntity(88U);
    msg.value = 0.9606931476743913;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVerticalRate #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVerticalRate msg;
    msg.setTimeStamp(0.6375483501713926);
    msg.setSource(8234U);
    msg.setSourceEntity(177U);
    msg.setDestination(57942U);
    msg.setDestinationEntity(105U);
    msg.value = 0.9820865652362043;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVerticalRate #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVerticalRate msg;
    msg.setTimeStamp(0.3966542543742464);
    msg.setSource(40637U);
    msg.setSourceEntity(233U);
    msg.setDestination(39522U);
    msg.setDestinationEntity(7U);
    msg.value = 0.3583410015082269;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVerticalRate #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPath msg;
    msg.setTimeStamp(0.6838232361758441);
    msg.setSource(51806U);
    msg.setSourceEntity(42U);
    msg.setDestination(32462U);
    msg.setDestinationEntity(10U);
    msg.path_ref = 3491520931U;
    msg.start_lat = 0.4735340668179261;
    msg.start_lon = 0.7218728095690705;
    msg.start_z = 0.5878199462029677;
    msg.start_z_units = 127U;
    msg.end_lat = 0.2761972053659041;
    msg.end_lon = 0.12186429302770663;
    msg.end_z = 0.8054556300136942;
    msg.end_z_units = 147U;
    msg.speed = 0.31818363141580874;
    msg.speed_units = 207U;
    msg.lradius = 0.8398629688608058;
    msg.flags = 151U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPath #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPath msg;
    msg.setTimeStamp(0.04122428386204002);
    msg.setSource(5458U);
    msg.setSourceEntity(126U);
    msg.setDestination(65189U);
    msg.setDestinationEntity(238U);
    msg.path_ref = 162757461U;
    msg.start_lat = 0.8070799059847834;
    msg.start_lon = 0.8679724822125331;
    msg.start_z = 0.6464507690223252;
    msg.start_z_units = 146U;
    msg.end_lat = 0.6636910086141771;
    msg.end_lon = 0.20128644015647057;
    msg.end_z = 0.15117734891498802;
    msg.end_z_units = 40U;
    msg.speed = 0.17782365679357126;
    msg.speed_units = 214U;
    msg.lradius = 0.7726250284726391;
    msg.flags = 186U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPath #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPath msg;
    msg.setTimeStamp(0.4943960029314949);
    msg.setSource(2797U);
    msg.setSourceEntity(202U);
    msg.setDestination(43406U);
    msg.setDestinationEntity(76U);
    msg.path_ref = 883216544U;
    msg.start_lat = 0.34939462471302907;
    msg.start_lon = 0.15798461692909338;
    msg.start_z = 0.18008341410818363;
    msg.start_z_units = 220U;
    msg.end_lat = 0.23227892128022576;
    msg.end_lon = 0.4551609327122278;
    msg.end_z = 0.016839761005850162;
    msg.end_z_units = 8U;
    msg.speed = 0.04177574609737322;
    msg.speed_units = 48U;
    msg.lradius = 0.490802744188117;
    msg.flags = 241U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPath #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredControl msg;
    msg.setTimeStamp(0.04545946111695853);
    msg.setSource(9883U);
    msg.setSourceEntity(192U);
    msg.setDestination(54800U);
    msg.setDestinationEntity(252U);
    msg.x = 0.9867459666126009;
    msg.y = 0.6697161755939114;
    msg.z = 0.0978756053071137;
    msg.k = 0.2816743971908635;
    msg.m = 0.43738117292251666;
    msg.n = 0.10789283799760985;
    msg.flags = 132U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredControl msg;
    msg.setTimeStamp(0.7611781718191006);
    msg.setSource(42960U);
    msg.setSourceEntity(43U);
    msg.setDestination(38532U);
    msg.setDestinationEntity(31U);
    msg.x = 0.9789695873623518;
    msg.y = 0.3556973238651687;
    msg.z = 0.197041071488691;
    msg.k = 0.5695422585135433;
    msg.m = 0.5269433941375149;
    msg.n = 0.15399826894724367;
    msg.flags = 215U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredControl msg;
    msg.setTimeStamp(0.30348145724101383);
    msg.setSource(56811U);
    msg.setSourceEntity(149U);
    msg.setDestination(64169U);
    msg.setDestinationEntity(201U);
    msg.x = 0.04451278685047555;
    msg.y = 0.8246196623388392;
    msg.z = 0.37153655322656476;
    msg.k = 0.2859081761039023;
    msg.m = 0.01661549397059159;
    msg.n = 0.2951770239308943;
    msg.flags = 78U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeadingRate msg;
    msg.setTimeStamp(0.00767233385135313);
    msg.setSource(43014U);
    msg.setSourceEntity(96U);
    msg.setDestination(36060U);
    msg.setDestinationEntity(53U);
    msg.value = 0.3064351380549697;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeadingRate #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeadingRate msg;
    msg.setTimeStamp(0.49922107892683576);
    msg.setSource(3572U);
    msg.setSourceEntity(109U);
    msg.setDestination(25756U);
    msg.setDestinationEntity(72U);
    msg.value = 0.6451539062517221;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeadingRate #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeadingRate msg;
    msg.setTimeStamp(0.8507372369016764);
    msg.setSource(25049U);
    msg.setSourceEntity(218U);
    msg.setDestination(6625U);
    msg.setDestinationEntity(41U);
    msg.value = 0.7530550940521519;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeadingRate #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVelocity msg;
    msg.setTimeStamp(0.8451842073677373);
    msg.setSource(1738U);
    msg.setSourceEntity(46U);
    msg.setDestination(31121U);
    msg.setDestinationEntity(97U);
    msg.u = 0.3035269287292276;
    msg.v = 0.8099342352298348;
    msg.w = 0.29422173878718216;
    msg.p = 0.16676838795235582;
    msg.q = 0.9295176155819088;
    msg.r = 0.9596884415931117;
    msg.flags = 141U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVelocity msg;
    msg.setTimeStamp(0.5975129045799654);
    msg.setSource(17891U);
    msg.setSourceEntity(137U);
    msg.setDestination(4228U);
    msg.setDestinationEntity(174U);
    msg.u = 0.5138072018531904;
    msg.v = 0.20604102692520132;
    msg.w = 0.16763122830745658;
    msg.p = 0.7178743735174876;
    msg.q = 0.37543937701047425;
    msg.r = 0.5444381343788675;
    msg.flags = 120U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVelocity msg;
    msg.setTimeStamp(0.17756888048638675);
    msg.setSource(60909U);
    msg.setSourceEntity(62U);
    msg.setDestination(52146U);
    msg.setDestinationEntity(148U);
    msg.u = 0.4908070515546009;
    msg.v = 0.7726502526759084;
    msg.w = 0.8635055849732093;
    msg.p = 0.6813117049581735;
    msg.q = 0.2777415424736528;
    msg.r = 0.39291275718063856;
    msg.flags = 12U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathControlState msg;
    msg.setTimeStamp(0.8324447743414212);
    msg.setSource(42305U);
    msg.setSourceEntity(148U);
    msg.setDestination(12797U);
    msg.setDestinationEntity(27U);
    msg.path_ref = 3667743590U;
    msg.start_lat = 0.11733494981581494;
    msg.start_lon = 0.38271864302268455;
    msg.start_z = 0.05884140814176253;
    msg.start_z_units = 38U;
    msg.end_lat = 0.8141155054660932;
    msg.end_lon = 0.6311231801021677;
    msg.end_z = 0.5626809612230386;
    msg.end_z_units = 151U;
    msg.lradius = 0.34338737952405907;
    msg.flags = 119U;
    msg.x = 0.1287605799873801;
    msg.y = 0.08310324281290382;
    msg.z = 0.6549391267567667;
    msg.vx = 0.7206911505632114;
    msg.vy = 0.12475292926129378;
    msg.vz = 0.8212683267301746;
    msg.course_error = 0.9983640018865145;
    msg.eta = 49714U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathControlState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathControlState msg;
    msg.setTimeStamp(0.30504864706050794);
    msg.setSource(17726U);
    msg.setSourceEntity(46U);
    msg.setDestination(12082U);
    msg.setDestinationEntity(13U);
    msg.path_ref = 3022262909U;
    msg.start_lat = 0.1881839183042474;
    msg.start_lon = 0.8260394839593055;
    msg.start_z = 0.28210367338677556;
    msg.start_z_units = 181U;
    msg.end_lat = 0.12302028698322909;
    msg.end_lon = 0.5559960989521159;
    msg.end_z = 0.4700553577649903;
    msg.end_z_units = 111U;
    msg.lradius = 0.25270626361738313;
    msg.flags = 46U;
    msg.x = 0.5558606255748912;
    msg.y = 0.6434397927476428;
    msg.z = 0.4268222106463475;
    msg.vx = 0.4066958454665527;
    msg.vy = 0.01723499572499143;
    msg.vz = 0.8762862022689801;
    msg.course_error = 0.2619105730992768;
    msg.eta = 36090U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathControlState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathControlState msg;
    msg.setTimeStamp(0.5866169813959314);
    msg.setSource(51047U);
    msg.setSourceEntity(67U);
    msg.setDestination(37755U);
    msg.setDestinationEntity(180U);
    msg.path_ref = 1408633929U;
    msg.start_lat = 0.4562940146503355;
    msg.start_lon = 0.5813080865479441;
    msg.start_z = 0.2751729911218116;
    msg.start_z_units = 220U;
    msg.end_lat = 0.7920536767432549;
    msg.end_lon = 0.9691636314078053;
    msg.end_z = 0.33914107847168884;
    msg.end_z_units = 183U;
    msg.lradius = 0.6006776842490856;
    msg.flags = 145U;
    msg.x = 0.9704042597651533;
    msg.y = 0.24628238320851914;
    msg.z = 0.9775816274707296;
    msg.vx = 0.3447654124112369;
    msg.vy = 0.5332207934622359;
    msg.vz = 0.1570396477430538;
    msg.course_error = 0.08835149467676318;
    msg.eta = 16812U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathControlState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AllocatedControlTorques msg;
    msg.setTimeStamp(0.29468847635729156);
    msg.setSource(59871U);
    msg.setSourceEntity(99U);
    msg.setDestination(14702U);
    msg.setDestinationEntity(88U);
    msg.k = 0.7348186474915013;
    msg.m = 0.6830613412950743;
    msg.n = 0.06998838669187835;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AllocatedControlTorques #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AllocatedControlTorques msg;
    msg.setTimeStamp(0.9777805380331948);
    msg.setSource(32071U);
    msg.setSourceEntity(127U);
    msg.setDestination(53311U);
    msg.setDestinationEntity(153U);
    msg.k = 0.42589275543965144;
    msg.m = 0.1903174178168101;
    msg.n = 0.4889731282972595;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AllocatedControlTorques #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AllocatedControlTorques msg;
    msg.setTimeStamp(0.945663339392557);
    msg.setSource(14267U);
    msg.setSourceEntity(165U);
    msg.setDestination(49179U);
    msg.setDestinationEntity(30U);
    msg.k = 0.675078166157821;
    msg.m = 0.30361632026161123;
    msg.n = 0.7210109295669032;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AllocatedControlTorques #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlParcel msg;
    msg.setTimeStamp(0.7932397869667474);
    msg.setSource(21321U);
    msg.setSourceEntity(117U);
    msg.setDestination(61900U);
    msg.setDestinationEntity(246U);
    msg.p = 0.7770775847955806;
    msg.i = 0.19167407097646794;
    msg.d = 0.24903994163088705;
    msg.a = 0.7898161472449561;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlParcel #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlParcel msg;
    msg.setTimeStamp(0.45828318039263494);
    msg.setSource(32237U);
    msg.setSourceEntity(153U);
    msg.setDestination(44621U);
    msg.setDestinationEntity(154U);
    msg.p = 0.5796220715243585;
    msg.i = 0.3812054567774932;
    msg.d = 0.8220195214144488;
    msg.a = 0.3880042430365671;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlParcel #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlParcel msg;
    msg.setTimeStamp(0.10993203831072829);
    msg.setSource(52454U);
    msg.setSourceEntity(181U);
    msg.setDestination(39669U);
    msg.setDestinationEntity(88U);
    msg.p = 0.9820310361026131;
    msg.i = 0.2897983016234126;
    msg.d = 0.0977976200299353;
    msg.a = 0.58747666434401;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlParcel #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Brake msg;
    msg.setTimeStamp(0.0628278474216657);
    msg.setSource(53496U);
    msg.setSourceEntity(88U);
    msg.setDestination(7176U);
    msg.setDestinationEntity(70U);
    msg.op = 66U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Brake #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Brake msg;
    msg.setTimeStamp(0.7596390999021668);
    msg.setSource(60554U);
    msg.setSourceEntity(214U);
    msg.setDestination(7499U);
    msg.setDestinationEntity(101U);
    msg.op = 170U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Brake #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Brake msg;
    msg.setTimeStamp(0.8571919257556812);
    msg.setSource(30515U);
    msg.setSourceEntity(86U);
    msg.setDestination(38343U);
    msg.setDestinationEntity(222U);
    msg.op = 182U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Brake #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredLinearState msg;
    msg.setTimeStamp(0.1620120997116442);
    msg.setSource(54334U);
    msg.setSourceEntity(1U);
    msg.setDestination(9634U);
    msg.setDestinationEntity(241U);
    msg.x = 0.253269197505835;
    msg.y = 0.9132472635398271;
    msg.z = 0.7786002195958862;
    msg.vx = 0.6917868761194627;
    msg.vy = 0.397474215784801;
    msg.vz = 0.10001542735972369;
    msg.ax = 0.6869351544364324;
    msg.ay = 0.7685378363508687;
    msg.az = 0.5491896064041305;
    msg.flags = 44376U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredLinearState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredLinearState msg;
    msg.setTimeStamp(0.22202634780635722);
    msg.setSource(11455U);
    msg.setSourceEntity(252U);
    msg.setDestination(9185U);
    msg.setDestinationEntity(140U);
    msg.x = 0.43487196159372354;
    msg.y = 0.8803848038223713;
    msg.z = 0.9747417630522663;
    msg.vx = 0.46347390181062065;
    msg.vy = 0.14449264228498593;
    msg.vz = 0.7157289019800124;
    msg.ax = 0.7395963659360987;
    msg.ay = 0.9656735398930475;
    msg.az = 0.24596179645724492;
    msg.flags = 25378U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredLinearState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredLinearState msg;
    msg.setTimeStamp(0.4552934716547996);
    msg.setSource(49524U);
    msg.setSourceEntity(165U);
    msg.setDestination(59019U);
    msg.setDestinationEntity(199U);
    msg.x = 0.23426400788574742;
    msg.y = 0.5155870407849762;
    msg.z = 0.07670578605892864;
    msg.vx = 0.1759069885411373;
    msg.vy = 0.557569233319021;
    msg.vz = 0.22598882071983273;
    msg.ax = 0.5902473071317226;
    msg.ay = 0.4701552993838678;
    msg.az = 0.029771556431913537;
    msg.flags = 5193U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredLinearState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredThrottle msg;
    msg.setTimeStamp(0.001394345577839351);
    msg.setSource(38660U);
    msg.setSourceEntity(174U);
    msg.setDestination(28980U);
    msg.setDestinationEntity(226U);
    msg.value = 0.9448526737015305;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredThrottle #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredThrottle msg;
    msg.setTimeStamp(0.2622933975011039);
    msg.setSource(23620U);
    msg.setSourceEntity(106U);
    msg.setDestination(64567U);
    msg.setDestinationEntity(210U);
    msg.value = 0.5468026615987748;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredThrottle #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredThrottle msg;
    msg.setTimeStamp(0.266853613823236);
    msg.setSource(56388U);
    msg.setSourceEntity(111U);
    msg.setDestination(26307U);
    msg.setDestinationEntity(148U);
    msg.value = 0.8488647810775366;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredThrottle #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Goto msg;
    msg.setTimeStamp(0.6628173509278789);
    msg.setSource(5791U);
    msg.setSourceEntity(84U);
    msg.setDestination(52522U);
    msg.setDestinationEntity(218U);
    msg.timeout = 15302U;
    msg.lat = 0.4111598562165788;
    msg.lon = 0.32344113626417226;
    msg.z = 0.7432450788010446;
    msg.z_units = 111U;
    msg.speed = 0.038081403868724384;
    msg.speed_units = 120U;
    msg.roll = 0.714050800082263;
    msg.pitch = 0.8422538333516835;
    msg.yaw = 0.08166038674088871;
    msg.custom.assign("ALAKGYIQRSBNEH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Goto #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Goto msg;
    msg.setTimeStamp(0.7140568506495956);
    msg.setSource(39312U);
    msg.setSourceEntity(135U);
    msg.setDestination(27697U);
    msg.setDestinationEntity(70U);
    msg.timeout = 30430U;
    msg.lat = 0.6953536857351409;
    msg.lon = 0.9220355306352521;
    msg.z = 0.10581110275683148;
    msg.z_units = 165U;
    msg.speed = 0.9957604121052757;
    msg.speed_units = 39U;
    msg.roll = 0.8074719396011607;
    msg.pitch = 0.5699869109008359;
    msg.yaw = 0.6734465363162954;
    msg.custom.assign("FCGOADGRYIAGBCIBUXEURHMPYWMOZVHHXRTEKCFXNMBTVPNOZXLBVNDERHOVSVTNYMLLRHEMQPJHLIPDMJCWEIKXSBXXFKACNOUYJQCSYBAFPGDSQUIWOEOIWQVZJKSUHTRZIVXTGXDUUDFVHCLGCEMUMLFBKQEHXUUIKTRAIZFKTHTEPVFNQRKOWGSZZLIPSCJDDJAKJWQJWTQDNRMABDA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Goto #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Goto msg;
    msg.setTimeStamp(0.8374517043897974);
    msg.setSource(10225U);
    msg.setSourceEntity(203U);
    msg.setDestination(60252U);
    msg.setDestinationEntity(245U);
    msg.timeout = 42637U;
    msg.lat = 0.6806586519940709;
    msg.lon = 0.38984446726469457;
    msg.z = 0.9642183451515248;
    msg.z_units = 193U;
    msg.speed = 0.8280503566087947;
    msg.speed_units = 119U;
    msg.roll = 0.1304540492128936;
    msg.pitch = 0.1748304389709534;
    msg.yaw = 0.6407528895126944;
    msg.custom.assign("WZCQFCODREZEGGPJDRGNIPVDTVYELGZMGPFIRABQBLIDPGHOQFAKGWXMKQYKFAMJHHHJYCSTALFNNBXSRAZBJINDLITOVKWJAFWOBXIXTRUPYUDPSZUPIMEAWCTXNVNCGVNTSCLUWUSVSTKFVUVXCISO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Goto #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopUp msg;
    msg.setTimeStamp(0.015086971219880119);
    msg.setSource(206U);
    msg.setSourceEntity(166U);
    msg.setDestination(9157U);
    msg.setDestinationEntity(166U);
    msg.timeout = 56089U;
    msg.lat = 0.44142685833872874;
    msg.lon = 0.9176698275066167;
    msg.z = 0.7543967098067174;
    msg.z_units = 248U;
    msg.speed = 0.27439603282682445;
    msg.speed_units = 178U;
    msg.duration = 41886U;
    msg.radius = 0.38845238125836223;
    msg.flags = 10U;
    msg.custom.assign("SILQFTHFGLVJQFQTPHPIOZTYFRYRGKSXPTBGOIAXLCQFPXPRSDEWZPIVXODHKZPECBEYTLEXYROLLRGBJKUTHEWJABZDJNSHPJCLWQKQNJINUGKMWXRHAKAHGBCJEMKCNYGZAVHYKOJXAAUDQICGWDBTNVAFUREYLCNUFDDVZQBGVSDOWXAXMNWSUMYRGCKROINKVEPMBBISYMFIJA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopUp #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopUp msg;
    msg.setTimeStamp(0.04467662078376544);
    msg.setSource(64234U);
    msg.setSourceEntity(101U);
    msg.setDestination(32051U);
    msg.setDestinationEntity(158U);
    msg.timeout = 34184U;
    msg.lat = 0.8149520625777936;
    msg.lon = 0.061457757680166036;
    msg.z = 0.3471439629098001;
    msg.z_units = 91U;
    msg.speed = 0.15486462225312125;
    msg.speed_units = 97U;
    msg.duration = 43234U;
    msg.radius = 0.23963012415705687;
    msg.flags = 193U;
    msg.custom.assign("PVEEJULCBCDNQZUPFQWRALTVDOJYTYGRUXDDFGVLSCPGRHQCCKEIWZMFIMLKJCOFOWPGMEUXWXTZKAOMIYMXAWYAVZJCRZHMWDZUREAHHHQFTWSTRJBNCZTFNLVRBNSHAYPZFOUJWYCQBHGMPFXTQVUSNIDDNDRJXB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopUp #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopUp msg;
    msg.setTimeStamp(0.8424979708706981);
    msg.setSource(63584U);
    msg.setSourceEntity(73U);
    msg.setDestination(28197U);
    msg.setDestinationEntity(67U);
    msg.timeout = 2293U;
    msg.lat = 0.01604926533771256;
    msg.lon = 0.35114895517854783;
    msg.z = 0.7861939418804514;
    msg.z_units = 90U;
    msg.speed = 0.16790396982416234;
    msg.speed_units = 156U;
    msg.duration = 55726U;
    msg.radius = 0.09826998748854965;
    msg.flags = 85U;
    msg.custom.assign("SKXVCMSASKYLPOCMVNARDLTPFZOLWBGFZMEAGRTCZUHMXTXDLTSVQALRIFSOBDXMPFGYYQVDKKSELLNHFAHNWVZAOENPNFLHJOBKZNNERPYTPUQNCFPJRIDKBTQGQGNQQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopUp #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Teleoperation msg;
    msg.setTimeStamp(0.6624385376397749);
    msg.setSource(27564U);
    msg.setSourceEntity(64U);
    msg.setDestination(5542U);
    msg.setDestinationEntity(42U);
    msg.custom.assign("KIEMJNUNXYYUYQKOPFFRATHVQUMUTREXXHVSZULKEZCFJKAFPDXGBYMHZAXFTVBCTDLTQRNRIPJWXULCBGSMYCTZUPNXHKOGSDAJEVKOAQOBJIWFRPFWBCARLSHTLLEHGUJZRSHIOQQJKHOMNUY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Teleoperation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Teleoperation msg;
    msg.setTimeStamp(0.43965228053882655);
    msg.setSource(31543U);
    msg.setSourceEntity(117U);
    msg.setDestination(25693U);
    msg.setDestinationEntity(188U);
    msg.custom.assign("EEVWLPEYLUKVVTKRPNFQNR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Teleoperation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Teleoperation msg;
    msg.setTimeStamp(0.7463417420629591);
    msg.setSource(17175U);
    msg.setSourceEntity(60U);
    msg.setDestination(24707U);
    msg.setDestinationEntity(168U);
    msg.custom.assign("GIONXFGEBZR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Teleoperation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Loiter msg;
    msg.setTimeStamp(0.301274937604049);
    msg.setSource(16068U);
    msg.setSourceEntity(215U);
    msg.setDestination(40519U);
    msg.setDestinationEntity(111U);
    msg.timeout = 33511U;
    msg.lat = 0.5905405038636488;
    msg.lon = 0.36657141989707154;
    msg.z = 0.43180936097883627;
    msg.z_units = 65U;
    msg.duration = 51034U;
    msg.speed = 0.6183503239096146;
    msg.speed_units = 167U;
    msg.type = 18U;
    msg.radius = 0.5056924025668634;
    msg.length = 0.958255062805972;
    msg.bearing = 0.4337965327321751;
    msg.direction = 49U;
    msg.custom.assign("JWZCMHLFPMPVGIOUVRXBRBPTVHQZWOSTDRIFSSEDMDWRWKQEMQBWHAUFKTXIGTYCEQPRIUKSWWFDN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Loiter #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Loiter msg;
    msg.setTimeStamp(0.4463580364430959);
    msg.setSource(57588U);
    msg.setSourceEntity(62U);
    msg.setDestination(15478U);
    msg.setDestinationEntity(24U);
    msg.timeout = 33992U;
    msg.lat = 0.9972006532071828;
    msg.lon = 0.18033929453348374;
    msg.z = 0.7796621227777055;
    msg.z_units = 102U;
    msg.duration = 31076U;
    msg.speed = 0.09826262402945529;
    msg.speed_units = 14U;
    msg.type = 69U;
    msg.radius = 0.25867553892136885;
    msg.length = 0.33093839299643035;
    msg.bearing = 0.13629339449730116;
    msg.direction = 92U;
    msg.custom.assign("OGMSPHHARXHWOFKMSCHJZXTXCBUNKZJPZJYKPWWQBYBJRUONPORNQGTIGGKQFHULFNRUKIYWMVZYKZWSIQDQLVZVZMHGILGLJVEBOJPZTTTEEULDHAUMDKEFBYHFISATNDNGOEYQWEMEZSPIRJBMTSQYCBGFPVWMKRNOXMJAPUBEXWHSFIEANLDWCYLADTLSQFTNOVGDUSJLXRODXWDTICCBCPIAZPMVCVHULNVCBKDF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Loiter #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Loiter msg;
    msg.setTimeStamp(0.01679939725851154);
    msg.setSource(14232U);
    msg.setSourceEntity(78U);
    msg.setDestination(14509U);
    msg.setDestinationEntity(67U);
    msg.timeout = 13253U;
    msg.lat = 0.16211819479522094;
    msg.lon = 0.17096426532002584;
    msg.z = 0.6237854517897921;
    msg.z_units = 2U;
    msg.duration = 4784U;
    msg.speed = 0.11355594930058688;
    msg.speed_units = 21U;
    msg.type = 141U;
    msg.radius = 0.5031395139097585;
    msg.length = 0.49555461254020006;
    msg.bearing = 0.06892372382923295;
    msg.direction = 232U;
    msg.custom.assign("XBKXCWWMQMZNSFFBUVABHCIUTBFKQAHDLUTKYMAWFGVXCZEKLNEFBSRKIPCLHDRGOCDYWETCOLHFEO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Loiter #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IdleManeuver msg;
    msg.setTimeStamp(0.8108155402827393);
    msg.setSource(10065U);
    msg.setSourceEntity(63U);
    msg.setDestination(23218U);
    msg.setDestinationEntity(73U);
    msg.duration = 1109U;
    msg.custom.assign("UNRMHEJWKPQLITZMBWCEIVYQFPPLKVCKDGXBFZSFQDVOMIGUSDOWLJXULTEHRGKSQRIQBJNTXNYKLWGQOYYVBFSRBCFVLKMJMNZENHDAUUJXWEUVTEFGYEAFCXQQTSABAOTKODJRMJYSVOILLGDFUWLVR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IdleManeuver #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IdleManeuver msg;
    msg.setTimeStamp(0.568903140665674);
    msg.setSource(8949U);
    msg.setSourceEntity(1U);
    msg.setDestination(5013U);
    msg.setDestinationEntity(58U);
    msg.duration = 30483U;
    msg.custom.assign("HLEUWFTATIOHIVNCNOOVDDVFJBRLIQHHRYOQVBWVFBRXUXMUEVAVNHMLQGJRZAJZLZPEHLSXCMBYACKWOSWOIIFHGUNEXQW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IdleManeuver #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IdleManeuver msg;
    msg.setTimeStamp(0.3744791370938463);
    msg.setSource(11733U);
    msg.setSourceEntity(160U);
    msg.setDestination(2585U);
    msg.setDestinationEntity(4U);
    msg.duration = 49001U;
    msg.custom.assign("QVRLSQYBJQOTBWMKTHDZXJKDNQEAYEVZUPHECHPGHDOWDIAJXKWNUCSIERKIEMUKAOKDZVZKWMPPQSWPNIRMMUIXWQAGMFWIJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IdleManeuver #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LowLevelControl msg;
    msg.setTimeStamp(0.5730461833847303);
    msg.setSource(1541U);
    msg.setSourceEntity(47U);
    msg.setDestination(11974U);
    msg.setDestinationEntity(169U);
    IMC::DesiredRoll tmp_msg_0;
    tmp_msg_0.value = 0.502009273202728;
    msg.control.set(tmp_msg_0);
    msg.duration = 27181U;
    msg.custom.assign("ACGPKXIAYPWLWRWDUJAQWKSJBTOCCRNZAZDNYRUUGHSVBRBBJEBVSFTZQXHJRVOFOQTZLSUOZNMXERAPJMPFZOMJXVHAATHLTDHILSTXENGIMIQMELLXFGDZYOGODLUYUVNTSFBSKKFRCEPXHVEKAPYAOYKZCGGU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LowLevelControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LowLevelControl msg;
    msg.setTimeStamp(0.4515270907211747);
    msg.setSource(35691U);
    msg.setSourceEntity(139U);
    msg.setDestination(37543U);
    msg.setDestinationEntity(221U);
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.37353119755495445;
    tmp_msg_0.z_units = 147U;
    msg.control.set(tmp_msg_0);
    msg.duration = 54332U;
    msg.custom.assign("EKPFHWRCIDIUVRBFOCYLQVJRWRMLCYGNTKVCYJVRAUWKOCCHWNFQETJDXNVKUCOMZGZFSSUHIEFLEOXTGHZFNZEARYWNPYQGXNBZSCPWAXKLKVJSQQPADXDLKDHOBOKEGMMLCNBAZSXLHBYPLOGUPOKVVRDVZDIWRASBDXBAQUPWSPQAQFVXTBTLFJTGRU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LowLevelControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LowLevelControl msg;
    msg.setTimeStamp(0.5720501950898054);
    msg.setSource(5401U);
    msg.setSourceEntity(251U);
    msg.setDestination(31222U);
    msg.setDestinationEntity(251U);
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.4732668530154487;
    msg.control.set(tmp_msg_0);
    msg.duration = 20912U;
    msg.custom.assign("UQPANGQPLTYWNJLKDRVKESPTMWIDSGPFUCGVGJHJANHRNRIVJXLOYDNOWKMBKUUDQVNMJMZAUWXLVINTCIBEPRSEMDZIRFEHREKOGBLMTNLFZHYETZSJAGIZTCHIQKPCUOXBCNQISDKVXSPXSWTMVWPGHTYKBROXXYXEXWMIOZPOJOGZRQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LowLevelControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rows msg;
    msg.setTimeStamp(0.2721382377782867);
    msg.setSource(29432U);
    msg.setSourceEntity(166U);
    msg.setDestination(15920U);
    msg.setDestinationEntity(132U);
    msg.timeout = 11169U;
    msg.lat = 0.7816770952172973;
    msg.lon = 0.13487048404810476;
    msg.z = 0.7151624664973022;
    msg.z_units = 241U;
    msg.speed = 0.02793093706565808;
    msg.speed_units = 7U;
    msg.bearing = 0.6662687091521627;
    msg.cross_angle = 0.23036588527485058;
    msg.width = 0.06705444784790826;
    msg.length = 0.9459516120215895;
    msg.hstep = 0.9533775385374399;
    msg.coff = 150U;
    msg.alternation = 36U;
    msg.flags = 37U;
    msg.custom.assign("AKJORTTHRGZUCUDKGIBRCBBHLRMFACFUZDZUYTWGJNYZAGQCOQMYFDOWYADPKXTMJSXGNCBKMEAVKPQCGIJYRSTQIVSQYGPJWISWEPSBQKJFOZLNDLQVVFDSMXWRNXEZKU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rows #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rows msg;
    msg.setTimeStamp(0.45684040406254545);
    msg.setSource(13578U);
    msg.setSourceEntity(158U);
    msg.setDestination(57673U);
    msg.setDestinationEntity(105U);
    msg.timeout = 58853U;
    msg.lat = 0.982586554482439;
    msg.lon = 0.8178521166103145;
    msg.z = 0.0685256457904283;
    msg.z_units = 84U;
    msg.speed = 0.08197665832289913;
    msg.speed_units = 206U;
    msg.bearing = 0.28482276696003317;
    msg.cross_angle = 0.22651027494216547;
    msg.width = 0.9178478291210181;
    msg.length = 0.3016343057478925;
    msg.hstep = 0.2816352280379786;
    msg.coff = 83U;
    msg.alternation = 73U;
    msg.flags = 9U;
    msg.custom.assign("QPIBDFWMYSUGXQAHIBGWXTBACUILGBKTPHYNRKVQEXDMYJTXLIGPLGCOXEUNOILZWMCFTBHOQIAWVJSVOMNLBXSJZSTGABIYBWOBPGDFYXMKWJLTNTXQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rows #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rows msg;
    msg.setTimeStamp(0.32264651094060226);
    msg.setSource(14912U);
    msg.setSourceEntity(109U);
    msg.setDestination(54115U);
    msg.setDestinationEntity(43U);
    msg.timeout = 60377U;
    msg.lat = 0.5467987426223138;
    msg.lon = 0.3970270248279122;
    msg.z = 0.20371383337101268;
    msg.z_units = 223U;
    msg.speed = 0.706952094217797;
    msg.speed_units = 171U;
    msg.bearing = 0.7776176689410295;
    msg.cross_angle = 0.4179461609276198;
    msg.width = 0.8363384965422852;
    msg.length = 0.5078716700105717;
    msg.hstep = 0.34562376073681644;
    msg.coff = 19U;
    msg.alternation = 23U;
    msg.flags = 74U;
    msg.custom.assign("IJTKGJUGLOMEMFDKONEGQCGXZSUQYBPMUJAMLBTWEHMBPHIPYWUZXEZXRRYEAOEKHNVGIHCYZQWHCSPKEODOVITXTDVBYNOSJSSSXIPCFMUNEKRDWUCVBPLVVTQJZOLRLSCEKWQXZGLWATNIQLFDVKKGYYKJDFRTCYQROAWNJAXDBCMKRB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rows #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowPath msg;
    msg.setTimeStamp(0.5438412512294095);
    msg.setSource(31536U);
    msg.setSourceEntity(7U);
    msg.setDestination(47299U);
    msg.setDestinationEntity(213U);
    msg.timeout = 15947U;
    msg.lat = 0.015225129507873691;
    msg.lon = 0.15972330431768345;
    msg.z = 0.6620498884902862;
    msg.z_units = 100U;
    msg.speed = 0.5070424399261823;
    msg.speed_units = 60U;
    msg.custom.assign("HISVNYQFPJIXQMUZKCEPKKCZSQYCLAUODEBIHKNRHOKKDQNBPQSTRRPEKDTXUUCGFVBCLMNAXFYUZLJXJOFSSVSCMJHWRXRTJILQUGEQTPNMZJWOMVVSBDVOHHFSCVKVTIICDLTIVXAFXNHPIPBEXIWOSZLGHZYLXOUETDPELANA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowPath #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowPath msg;
    msg.setTimeStamp(0.10967440421079311);
    msg.setSource(48041U);
    msg.setSourceEntity(205U);
    msg.setDestination(13260U);
    msg.setDestinationEntity(96U);
    msg.timeout = 31788U;
    msg.lat = 0.8904434077636709;
    msg.lon = 0.4587830840505669;
    msg.z = 0.9997964784328011;
    msg.z_units = 74U;
    msg.speed = 0.9257060419853477;
    msg.speed_units = 137U;
    msg.custom.assign("WBULQOMASIZBWXZHPXIAERPYVKXNJAUSYHAWJUVURPEJOQCQTGXGNVQWMXOSTRXADSVSVSGWARCKFTUDUALDJDNFQAGIFRWDCGGXJMHLNDBKOUEZFETYZRDOMONGCUYQWQUKCWEPINPHLBUFBWNHYVEQHIDTEIOZBKLXWPGYNZJHNEAMYFJKME");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowPath #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowPath msg;
    msg.setTimeStamp(0.4283627305590304);
    msg.setSource(3119U);
    msg.setSourceEntity(145U);
    msg.setDestination(5002U);
    msg.setDestinationEntity(110U);
    msg.timeout = 21741U;
    msg.lat = 0.1950132310263557;
    msg.lon = 0.12888517373466057;
    msg.z = 0.9363529248319945;
    msg.z_units = 101U;
    msg.speed = 0.8613346448938087;
    msg.speed_units = 106U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.02088550733209138;
    tmp_msg_0.y = 0.6546563196557516;
    tmp_msg_0.z = 0.14775727994080046;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("KINZSPTXVPHQHKPJZHAYVTHWCGCWZSITVTIGZBKDXZPZMLLCSVCCGATXYEMUFFYTRP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowPath #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathPoint msg;
    msg.setTimeStamp(0.40748530328358534);
    msg.setSource(16287U);
    msg.setSourceEntity(187U);
    msg.setDestination(6989U);
    msg.setDestinationEntity(249U);
    msg.x = 0.7601171194490027;
    msg.y = 0.9901160210516127;
    msg.z = 0.41642370175702814;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathPoint #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathPoint msg;
    msg.setTimeStamp(0.8697477013933613);
    msg.setSource(35790U);
    msg.setSourceEntity(228U);
    msg.setDestination(32273U);
    msg.setDestinationEntity(203U);
    msg.x = 0.872864537376731;
    msg.y = 0.3490133229988439;
    msg.z = 0.8964129418908318;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathPoint #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathPoint msg;
    msg.setTimeStamp(0.3078141462927215);
    msg.setSource(59067U);
    msg.setSourceEntity(152U);
    msg.setDestination(6304U);
    msg.setDestinationEntity(1U);
    msg.x = 0.20334874748255505;
    msg.y = 0.6002920734413179;
    msg.z = 0.5615008463988908;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathPoint #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::YoYo msg;
    msg.setTimeStamp(0.8215123834189301);
    msg.setSource(14910U);
    msg.setSourceEntity(151U);
    msg.setDestination(6967U);
    msg.setDestinationEntity(117U);
    msg.timeout = 9622U;
    msg.lat = 0.16815073575604744;
    msg.lon = 0.04297277317513026;
    msg.z = 0.8569525533226882;
    msg.z_units = 8U;
    msg.amplitude = 0.16254350625088065;
    msg.pitch = 0.6779571955796725;
    msg.speed = 0.13150109053595194;
    msg.speed_units = 71U;
    msg.custom.assign("UKGQWLFPEKOWBJGQVZYBFPUQYBLIITKASNGDAPUJQJVELGDEVOSIALVAMGHMODZCUMMAVTLASTYCUAZJXWVKHMKXYLWDXJRZZIFGMPBFNQQTOESHTFEQCBEDHJT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("YoYo #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::YoYo msg;
    msg.setTimeStamp(0.09564803342021022);
    msg.setSource(50469U);
    msg.setSourceEntity(182U);
    msg.setDestination(3492U);
    msg.setDestinationEntity(95U);
    msg.timeout = 54393U;
    msg.lat = 0.961212283050709;
    msg.lon = 0.0029961561064549835;
    msg.z = 0.04694971177170615;
    msg.z_units = 210U;
    msg.amplitude = 0.5201326591512707;
    msg.pitch = 0.6417085545408945;
    msg.speed = 0.4439395537023543;
    msg.speed_units = 107U;
    msg.custom.assign("GIMPABGWTXEEDJYCGOCCGVRTJJWCNFFOVQBNZMTCIPOVUOLNZNMXMIITNUARZNQUCKVKEXENJWHPBZEROAVQRJAUXECYPITYAREMKFJUVVFLFYBIFARYLWPJNRDWWRIHZXLCHLMXLHHSBDSBJOKZHIXMDUBQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("YoYo #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::YoYo msg;
    msg.setTimeStamp(0.9437743386162942);
    msg.setSource(17744U);
    msg.setSourceEntity(143U);
    msg.setDestination(12907U);
    msg.setDestinationEntity(70U);
    msg.timeout = 8995U;
    msg.lat = 0.40704165988945307;
    msg.lon = 0.6907274369843719;
    msg.z = 0.3763492096702479;
    msg.z_units = 145U;
    msg.amplitude = 0.694693250247545;
    msg.pitch = 0.08520620056533179;
    msg.speed = 0.4908515132481126;
    msg.speed_units = 14U;
    msg.custom.assign("SHPKMXGXFMCKQENMTDCQAOSWWRGZBRUYZLGZRHBAXMIXPWRLCXILIOSUOSYXDTDBXSNUCHYQQDEYAGAZTVUGMJRUDNYNTFFHCHPKJIBDZWLVSTKO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("YoYo #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TeleoperationDone msg;
    msg.setTimeStamp(0.5171211890675222);
    msg.setSource(4585U);
    msg.setSourceEntity(101U);
    msg.setDestination(52U);
    msg.setDestinationEntity(197U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TeleoperationDone #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TeleoperationDone msg;
    msg.setTimeStamp(0.3421802631255044);
    msg.setSource(9444U);
    msg.setSourceEntity(108U);
    msg.setDestination(29593U);
    msg.setDestinationEntity(183U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TeleoperationDone #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TeleoperationDone msg;
    msg.setTimeStamp(0.5177999093841906);
    msg.setSource(40428U);
    msg.setSourceEntity(170U);
    msg.setDestination(31388U);
    msg.setDestinationEntity(224U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TeleoperationDone #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StationKeeping msg;
    msg.setTimeStamp(0.24399436503082195);
    msg.setSource(54551U);
    msg.setSourceEntity(106U);
    msg.setDestination(3623U);
    msg.setDestinationEntity(182U);
    msg.lat = 0.009720562819916845;
    msg.lon = 0.17249477372874367;
    msg.z = 0.9703203348901217;
    msg.z_units = 151U;
    msg.radius = 0.42004239819691525;
    msg.duration = 13599U;
    msg.speed = 0.34318629666060474;
    msg.speed_units = 114U;
    msg.custom.assign("LMRYUYAKJHTYDESJDXRYFKCDGHRXRFLTWQEHBUJKKRVFGQIGCPMZHEOGXSRXKYZJYLUWFWDOTIRMMMFISQVOKVZZDYVJCVENVXNDNLGZVPXUHTVUSELNAEUTOFOHDNIHEAXCMDIAMYZTAQUSLPBWVIFPLCTBNWBMMWGTAVIOUAXWBJWHORCEIJPKRNXQGBJPFPTOJUPGASNLZSPBQFCKQIIWSYQZWCCNULBGZTPGJQBNSAMYZBFAHXERSDHKO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StationKeeping #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StationKeeping msg;
    msg.setTimeStamp(0.4192247944178267);
    msg.setSource(5107U);
    msg.setSourceEntity(66U);
    msg.setDestination(31534U);
    msg.setDestinationEntity(232U);
    msg.lat = 0.3866857530213045;
    msg.lon = 0.9882968360109771;
    msg.z = 0.9228902487118691;
    msg.z_units = 200U;
    msg.radius = 0.16428862369695207;
    msg.duration = 38325U;
    msg.speed = 0.40526268619073924;
    msg.speed_units = 168U;
    msg.custom.assign("WPAOTUIZGNPHIWOWAEMTCRYNIEGULDJIARMEVVJQFEBTVFUQDJFOXYNYHIOZQCPNQHRYJXGRLCMCEKMGXSBJKBZZMQYUPRDOSMBDYP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StationKeeping #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StationKeeping msg;
    msg.setTimeStamp(0.171482581290881);
    msg.setSource(46074U);
    msg.setSourceEntity(78U);
    msg.setDestination(15227U);
    msg.setDestinationEntity(161U);
    msg.lat = 0.34982250375430013;
    msg.lon = 0.8860148545666002;
    msg.z = 0.5936645602399127;
    msg.z_units = 54U;
    msg.radius = 0.3013370375307727;
    msg.duration = 50481U;
    msg.speed = 0.7034725972522342;
    msg.speed_units = 245U;
    msg.custom.assign("ZLOPPRLKFGGUNJIKXNRUHQQPFSWYJGILJWRMVMKHAIJNSZLSGRDEKLDSLICOEDACFQJBV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StationKeeping #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Elevator msg;
    msg.setTimeStamp(0.6718380383111104);
    msg.setSource(40964U);
    msg.setSourceEntity(166U);
    msg.setDestination(48031U);
    msg.setDestinationEntity(142U);
    msg.timeout = 25699U;
    msg.flags = 176U;
    msg.lat = 0.978174722652499;
    msg.lon = 0.11148874538451226;
    msg.start_z = 0.9196764341073095;
    msg.start_z_units = 3U;
    msg.end_z = 0.6202616066036934;
    msg.end_z_units = 191U;
    msg.radius = 0.6592201437970489;
    msg.speed = 0.04841681901758388;
    msg.speed_units = 166U;
    msg.custom.assign("HGSUJHFTNJRPKUWHXHABPYLVFDSELBJCYYXMCMVFMIMPXMFVOVMCDVATINTSOITYANCVLQBOTWXSREIWDHDLGEFZXJKQGZFRMCJNAQGPRNZKHEQTLHKTIWUQGSGSOYFWPQCYWYBITBUYTEIJHPJKLHLGGUZZDUVXMDJSNAOPROBBIXFZUALCBBMVZSKNLUREWLZWROGKDFANPOWNEVJUCYKAZQNIIZEX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Elevator #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Elevator msg;
    msg.setTimeStamp(0.5361390706884067);
    msg.setSource(7672U);
    msg.setSourceEntity(41U);
    msg.setDestination(1316U);
    msg.setDestinationEntity(183U);
    msg.timeout = 39414U;
    msg.flags = 251U;
    msg.lat = 0.41765712339016503;
    msg.lon = 0.8410195262783428;
    msg.start_z = 0.7803475396222543;
    msg.start_z_units = 84U;
    msg.end_z = 0.5786848461098191;
    msg.end_z_units = 56U;
    msg.radius = 0.7748970310748963;
    msg.speed = 0.7470944782761393;
    msg.speed_units = 143U;
    msg.custom.assign("GYPRBKVZXYUTSODISTESJGRNPGHMSIDLEPPDBFEMSXKHEBCPS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Elevator #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Elevator msg;
    msg.setTimeStamp(0.9562027933510002);
    msg.setSource(23840U);
    msg.setSourceEntity(47U);
    msg.setDestination(6460U);
    msg.setDestinationEntity(214U);
    msg.timeout = 35071U;
    msg.flags = 119U;
    msg.lat = 0.1741445813543766;
    msg.lon = 0.09396573051137636;
    msg.start_z = 0.5428776779797487;
    msg.start_z_units = 6U;
    msg.end_z = 0.8449368971162339;
    msg.end_z_units = 148U;
    msg.radius = 0.5522648927673068;
    msg.speed = 0.38462676930924655;
    msg.speed_units = 94U;
    msg.custom.assign("VZQAXDCHWDZLOSZDTBNXQVDWFBVNZYWIQJEMXIJMTQUACNNUOWKZEOTWHQAMPKQCFXJLOGSNBNXIMKMACISIERTTDNUYMJMGSPSDFUZOLHLUCKRHFYIONEFONCPJULDFZCKWYSHEXTUJGMKGDCHKQSLROVVPZYGTGOWAVUBAEZVI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Elevator #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowTrajectory msg;
    msg.setTimeStamp(0.9541680978963889);
    msg.setSource(56851U);
    msg.setSourceEntity(4U);
    msg.setDestination(2374U);
    msg.setDestinationEntity(228U);
    msg.timeout = 58172U;
    msg.lat = 0.8016592184456819;
    msg.lon = 0.6939006780666488;
    msg.z = 0.14940619192920845;
    msg.z_units = 186U;
    msg.speed = 0.05365665392354557;
    msg.speed_units = 180U;
    msg.custom.assign("ILTWDCLTAEEHSCQCPFJZWNHPXLHXXMCFEYMAKUZPYJTBPBWYOBEBURFHYHUVYROXHFLKNRGLYBMVHIFMDCBWRIUOTDNBZFPFVSSTJEQSWYKUFISAWMPXTG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowTrajectory #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowTrajectory msg;
    msg.setTimeStamp(0.7490267122696479);
    msg.setSource(26513U);
    msg.setSourceEntity(196U);
    msg.setDestination(62745U);
    msg.setDestinationEntity(134U);
    msg.timeout = 27601U;
    msg.lat = 0.9574413171912749;
    msg.lon = 0.7738572092893677;
    msg.z = 0.517588817517016;
    msg.z_units = 118U;
    msg.speed = 0.08523676020949567;
    msg.speed_units = 23U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.7369820963903652;
    tmp_msg_0.y = 0.02589614964361553;
    tmp_msg_0.z = 0.205678951299603;
    tmp_msg_0.t = 0.47590266310601437;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("NTRMWRGPHSVERUUCXRURBRCJYVEIPYWKMOOEMGPTPGKMZSWJGUNOP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowTrajectory #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowTrajectory msg;
    msg.setTimeStamp(0.004822189463909443);
    msg.setSource(57374U);
    msg.setSourceEntity(121U);
    msg.setDestination(26920U);
    msg.setDestinationEntity(110U);
    msg.timeout = 59133U;
    msg.lat = 0.7663303257396845;
    msg.lon = 0.3435903243349988;
    msg.z = 0.5505378165994363;
    msg.z_units = 53U;
    msg.speed = 0.8441405013764234;
    msg.speed_units = 230U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.39424117674264947;
    tmp_msg_0.y = 0.4748221026263131;
    tmp_msg_0.z = 0.5735800983331242;
    tmp_msg_0.t = 0.7324144990236563;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("FOJMEXLHCTZYUVZVATNPWKBZONYZWXLHRAJGWYVJVLFSSTQIMXJDHLMEEACCXHJCZFPQZLHFNKDQNAIBIYQMMIYLUEVZBGQPCLAMTJZTDASXUWMWXMUOVDALPHDDNZPQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowTrajectory #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrajectoryPoint msg;
    msg.setTimeStamp(0.3018276200782908);
    msg.setSource(41588U);
    msg.setSourceEntity(17U);
    msg.setDestination(31426U);
    msg.setDestinationEntity(248U);
    msg.x = 0.909833069446668;
    msg.y = 0.3445586037333165;
    msg.z = 0.1385666458386937;
    msg.t = 0.8048753320855991;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrajectoryPoint #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrajectoryPoint msg;
    msg.setTimeStamp(0.33029244947489267);
    msg.setSource(60029U);
    msg.setSourceEntity(164U);
    msg.setDestination(50719U);
    msg.setDestinationEntity(22U);
    msg.x = 0.7195049921896424;
    msg.y = 0.5807855461148418;
    msg.z = 0.18018922083065392;
    msg.t = 0.9261648613138348;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrajectoryPoint #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrajectoryPoint msg;
    msg.setTimeStamp(0.5392159584960289);
    msg.setSource(18540U);
    msg.setSourceEntity(93U);
    msg.setDestination(28622U);
    msg.setDestinationEntity(118U);
    msg.x = 0.8902547130410776;
    msg.y = 0.4368162532589144;
    msg.z = 0.5848365404364836;
    msg.t = 0.5744562119405101;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrajectoryPoint #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CustomManeuver msg;
    msg.setTimeStamp(0.7634847473844926);
    msg.setSource(28135U);
    msg.setSourceEntity(14U);
    msg.setDestination(55155U);
    msg.setDestinationEntity(104U);
    msg.timeout = 13825U;
    msg.name.assign("DWIHCWMMGEGWAVKBBXJDKYCMKAQKCHZCTLTTPUYIHZRNVUUESTUXPXDMLMFAONVLROLGXZLUEXEGZTRIHAANORFOQEOSIWFYQXWTGZZQCNLVHCQFTRCNOOMGWCWAVMYSOP");
    msg.custom.assign("IOFKAMRTMWOVJOFYCEEJZSEUPAPZHLBQZVWWJBVITRSBANKCDIIRMBXKJFQNQPFURPRBASZBHVLHRSITRWBUCQZXYMXJLTMQKAKCGLCDPIXSRZGGQCEIYHKJDXSSRKMDQFDLLNSKDZJTEYMUYFDWTUZHKHPNVNONUJEGQFVWZCRNOCAHBXFNSLGEGWOXHUFGLEOUVWFXZGHEONBTYJQAIKYVPBAGXSUTMIQPDUPVLLMXVAOWYMT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CustomManeuver #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CustomManeuver msg;
    msg.setTimeStamp(0.6269899198812463);
    msg.setSource(12357U);
    msg.setSourceEntity(174U);
    msg.setDestination(20685U);
    msg.setDestinationEntity(96U);
    msg.timeout = 401U;
    msg.name.assign("BUYITPBFXBHBBCDHIPSJOKNIOVSXWHZRQEJRLGYXXGLMMDKXCRUEMRJPQHUBRAXUOIWFKRJFGWTDVEADKWEEJZZJCFCDSMYIYGSFEVHBNDGDQZPIEHMFKVQKZPYLVXYAJLUOUOXVGOXNQKWMNAJWPNRFYLEZGPDZNOHKTUOUQDYTNQSSLHGHAVDABKELPAYHIBMOTACICNTLEUPQWGSCWSFTWMYCTXNTVRAFZJWINQ");
    msg.custom.assign("WYKJKYCSLUOIGQNWQMQAQJJAKDWSPWEQWHCALOXAVBELEVEBXHZIGRFW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CustomManeuver #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CustomManeuver msg;
    msg.setTimeStamp(0.25232015968872923);
    msg.setSource(15106U);
    msg.setSourceEntity(145U);
    msg.setDestination(42531U);
    msg.setDestinationEntity(129U);
    msg.timeout = 11316U;
    msg.name.assign("PMVXFYCSDJUECODJFRAOZXFDABEQJUBZGYIXPCKWIAWWUTGROHHHIXCKOMLSVETHWZNAOGDMRZILILEUAVBKFXXZQMHNYVXKJOBEKFNKBWYDQJJDXBFQUHLVOSJCPAYSWGMYSOOQYQBGLUCBVBPVRMVTDUFEEWWTUKOHEYNLHKNDGAMDRSWQQZNMIACZPRHZIECRRMMTPWZLEINVNRTPSNXGFYJDITJCJQPKALZCKQRSASGNHGVFUXLLTBYSFT");
    msg.custom.assign("JCVFLOKQDUQVZIKVAFMZLRANFWTUCEEDUBOMNLWZOZUKXJDGZJKKRQYVIACXDEWXWGSFBGGPEYUNFJNIYROPDBJYUDYJBBICZXZRDASHMHNCSQTAAHISTGQOJYBTNFZOYXLGYHWMZCVPHSSOYTXEGBKTWRKGVFQLXACRUFPYADDEILMVGUQNTHXPVFHNPCIEKGKN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CustomManeuver #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormation msg;
    msg.setTimeStamp(0.8799111144447728);
    msg.setSource(6411U);
    msg.setSourceEntity(91U);
    msg.setDestination(42495U);
    msg.setDestinationEntity(60U);
    msg.lat = 0.8708563135861721;
    msg.lon = 0.3780230716723666;
    msg.z = 0.05831744635780145;
    msg.z_units = 193U;
    msg.speed = 0.1940376787273982;
    msg.speed_units = 228U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.5162557666621166;
    tmp_msg_0.y = 0.19144571131839916;
    tmp_msg_0.z = 0.3105507929886282;
    tmp_msg_0.t = 0.4176548078809065;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 60536U;
    tmp_msg_1.off_x = 0.38547625895852233;
    tmp_msg_1.off_y = 0.8274781351665348;
    tmp_msg_1.off_z = 0.3960861574133875;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.8489089811328749;
    msg.custom.assign("SFJGBUTFJXENNVJGSRJBDPAQAAFGDRIKXRHHKKNKJHEMPCCNOPSXAXXBLELLCTVFBCZVEEBMZKWEMFGWZUDIZWBOHZTYJMNPKWCOOCPDDPSZQHUORQGIMNTKPTGHZTKZNPEQWYAVZRRQUOBVXYTWGENLASMLSDEILNCAQBXMXYIDFTHVMASVWNCSJQJDVYHLARORRRXMUUYLYYKOBMICJUZQGULHFVCJSXOWUBAEYTFFWDVUFIITKPOIYPG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormation msg;
    msg.setTimeStamp(0.7673395680601262);
    msg.setSource(43700U);
    msg.setSourceEntity(223U);
    msg.setDestination(52929U);
    msg.setDestinationEntity(143U);
    msg.lat = 0.6683304829243764;
    msg.lon = 0.8842918706200392;
    msg.z = 0.15208903271834506;
    msg.z_units = 29U;
    msg.speed = 0.6344133500344339;
    msg.speed_units = 29U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.6426650554426651;
    tmp_msg_0.y = 0.14645919627752246;
    tmp_msg_0.z = 0.5029317205861449;
    tmp_msg_0.t = 0.5392871849516057;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 18942U;
    tmp_msg_1.off_x = 0.4969811040793569;
    tmp_msg_1.off_y = 0.8332662797964454;
    tmp_msg_1.off_z = 0.7678026085511138;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.544781188586757;
    msg.custom.assign("DNNAJELIQDRBLSMSIPVYCICKZNPTNBWOGV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormation msg;
    msg.setTimeStamp(0.34490907005774707);
    msg.setSource(7824U);
    msg.setSourceEntity(59U);
    msg.setDestination(63645U);
    msg.setDestinationEntity(165U);
    msg.lat = 0.06148203023969345;
    msg.lon = 0.9135655943322005;
    msg.z = 0.3064143332845334;
    msg.z_units = 175U;
    msg.speed = 0.5902359156284799;
    msg.speed_units = 93U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.3450403227451395;
    tmp_msg_0.y = 0.880919138201603;
    tmp_msg_0.z = 0.16811811333781956;
    tmp_msg_0.t = 0.7157287822603818;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 63553U;
    tmp_msg_1.off_x = 0.3887806158903325;
    tmp_msg_1.off_y = 0.9359159356049237;
    tmp_msg_1.off_z = 0.2804557759258336;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.3564513434779394;
    msg.custom.assign("IONVJCRZGPGXSMNCRXEKIKHFKCNBGCQGTTPYICTBDDMSNXVBFIEMMWUXAHEPJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormationParticipant msg;
    msg.setTimeStamp(0.24257655626666708);
    msg.setSource(48146U);
    msg.setSourceEntity(106U);
    msg.setDestination(58353U);
    msg.setDestinationEntity(26U);
    msg.vid = 43632U;
    msg.off_x = 0.6069282673305668;
    msg.off_y = 0.12726195936995877;
    msg.off_z = 0.15020963436259527;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormationParticipant #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormationParticipant msg;
    msg.setTimeStamp(0.8920479083917866);
    msg.setSource(38862U);
    msg.setSourceEntity(76U);
    msg.setDestination(3776U);
    msg.setDestinationEntity(219U);
    msg.vid = 9010U;
    msg.off_x = 0.22558133891228604;
    msg.off_y = 0.5288403930656956;
    msg.off_z = 0.5582818182315403;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormationParticipant #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormationParticipant msg;
    msg.setTimeStamp(0.2741613386143734);
    msg.setSource(38781U);
    msg.setSourceEntity(112U);
    msg.setDestination(32938U);
    msg.setDestinationEntity(176U);
    msg.vid = 12744U;
    msg.off_x = 0.07994435942040412;
    msg.off_y = 0.37577929292134804;
    msg.off_z = 0.49158177979155204;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormationParticipant #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StopManeuver msg;
    msg.setTimeStamp(0.42711552836018074);
    msg.setSource(55229U);
    msg.setSourceEntity(45U);
    msg.setDestination(45148U);
    msg.setDestinationEntity(99U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StopManeuver #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StopManeuver msg;
    msg.setTimeStamp(0.4161840336824081);
    msg.setSource(31901U);
    msg.setSourceEntity(132U);
    msg.setDestination(27854U);
    msg.setDestinationEntity(236U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StopManeuver #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StopManeuver msg;
    msg.setTimeStamp(0.6193698544115138);
    msg.setSource(49532U);
    msg.setSourceEntity(217U);
    msg.setDestination(55860U);
    msg.setDestinationEntity(60U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StopManeuver #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RegisterManeuver msg;
    msg.setTimeStamp(0.3759203935205886);
    msg.setSource(49749U);
    msg.setSourceEntity(46U);
    msg.setDestination(4578U);
    msg.setDestinationEntity(252U);
    msg.mid = 17012U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RegisterManeuver #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RegisterManeuver msg;
    msg.setTimeStamp(0.6142495568118492);
    msg.setSource(281U);
    msg.setSourceEntity(100U);
    msg.setDestination(53844U);
    msg.setDestinationEntity(200U);
    msg.mid = 47146U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RegisterManeuver #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RegisterManeuver msg;
    msg.setTimeStamp(0.015175956243643207);
    msg.setSource(38196U);
    msg.setSourceEntity(90U);
    msg.setDestination(27496U);
    msg.setDestinationEntity(128U);
    msg.mid = 2331U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RegisterManeuver #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ManeuverControlState msg;
    msg.setTimeStamp(0.2903864845547115);
    msg.setSource(2939U);
    msg.setSourceEntity(163U);
    msg.setDestination(47143U);
    msg.setDestinationEntity(92U);
    msg.state = 94U;
    msg.eta = 16402U;
    msg.info.assign("DXKYZWDMCYEZALQXMTNRMZPGWMWOQNCMBDXZRMFDVBCNFFRUIOUBUYWJXGRRVJIAUCXKZABUSKKLYEIOAJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ManeuverControlState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ManeuverControlState msg;
    msg.setTimeStamp(0.35739194404265884);
    msg.setSource(37581U);
    msg.setSourceEntity(188U);
    msg.setDestination(48167U);
    msg.setDestinationEntity(64U);
    msg.state = 49U;
    msg.eta = 41599U;
    msg.info.assign("BBTIWKLUUGVFAHEVCAGDMZZVQESXLOKASXPCTLFJKVFYUYBNXZNESNNGDXNRKOQYKLVJJEWFKNGYKGFFDVBSTKRWOEBYHXYWVACQZORMWKZGPDELWLLOVBPAICIUTJWPGRELTMOWITCLJSZDGCQPIJXJNERIMRFHISNZMAYUFRUSCJWQIFMNHPTPY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ManeuverControlState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ManeuverControlState msg;
    msg.setTimeStamp(0.09085455763432737);
    msg.setSource(41662U);
    msg.setSourceEntity(77U);
    msg.setDestination(5598U);
    msg.setDestinationEntity(117U);
    msg.state = 250U;
    msg.eta = 10117U;
    msg.info.assign("PMEUZKBVVCIPLMDRSWTAHIGTZPBCRQYBLHSYYAWMBQBOMJZUVEKFKWJXYEDFJMPXIZDFWZNCVQNSFLBVULNPGQNALKVCESIUDVNIQDPNCBIEDFNTOOEHZMZHKPJWQJRYTQCAAAAUEALLUBFQYGGCISHTOFMIZDHRUUVSIGXBOWFXWGSDUECTGPYKKBQOSJLHRRMRJPSOKDRNAXOKVXKY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ManeuverControlState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowSystem msg;
    msg.setTimeStamp(0.2393783323292743);
    msg.setSource(56673U);
    msg.setSourceEntity(31U);
    msg.setDestination(20047U);
    msg.setDestinationEntity(158U);
    msg.system = 3740U;
    msg.duration = 627U;
    msg.speed = 0.8721413177910695;
    msg.speed_units = 231U;
    msg.x = 0.21605437059184407;
    msg.y = 0.2978345856073491;
    msg.z = 0.12725789209787053;
    msg.z_units = 39U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowSystem #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowSystem msg;
    msg.setTimeStamp(0.3727595410062501);
    msg.setSource(23754U);
    msg.setSourceEntity(69U);
    msg.setDestination(30445U);
    msg.setDestinationEntity(196U);
    msg.system = 9932U;
    msg.duration = 46337U;
    msg.speed = 0.831182569173794;
    msg.speed_units = 63U;
    msg.x = 0.6800435959748307;
    msg.y = 0.3900458622465478;
    msg.z = 0.8635849086436744;
    msg.z_units = 131U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowSystem #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowSystem msg;
    msg.setTimeStamp(0.3648629583177433);
    msg.setSource(32009U);
    msg.setSourceEntity(61U);
    msg.setDestination(21057U);
    msg.setDestinationEntity(233U);
    msg.system = 7108U;
    msg.duration = 46710U;
    msg.speed = 0.09362615578246747;
    msg.speed_units = 193U;
    msg.x = 0.36868127126656713;
    msg.y = 0.8638408198471501;
    msg.z = 0.7417223092151791;
    msg.z_units = 148U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowSystem #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommsRelay msg;
    msg.setTimeStamp(0.45111275435207854);
    msg.setSource(41329U);
    msg.setSourceEntity(218U);
    msg.setDestination(37631U);
    msg.setDestinationEntity(226U);
    msg.lat = 0.9683217374191134;
    msg.lon = 0.11964505777309453;
    msg.speed = 0.8262421605576906;
    msg.speed_units = 70U;
    msg.duration = 40395U;
    msg.sys_a = 3801U;
    msg.sys_b = 58159U;
    msg.move_threshold = 0.5503159095843657;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommsRelay #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommsRelay msg;
    msg.setTimeStamp(0.06864145435441027);
    msg.setSource(32351U);
    msg.setSourceEntity(248U);
    msg.setDestination(54459U);
    msg.setDestinationEntity(108U);
    msg.lat = 0.14139189510909045;
    msg.lon = 0.7978085228133631;
    msg.speed = 0.3393295381968706;
    msg.speed_units = 123U;
    msg.duration = 18626U;
    msg.sys_a = 51922U;
    msg.sys_b = 38869U;
    msg.move_threshold = 0.14525456400911574;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommsRelay #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommsRelay msg;
    msg.setTimeStamp(0.029589750061374653);
    msg.setSource(45457U);
    msg.setSourceEntity(226U);
    msg.setDestination(25107U);
    msg.setDestinationEntity(147U);
    msg.lat = 0.7052164200350854;
    msg.lon = 0.3724111240570166;
    msg.speed = 0.0818138130928654;
    msg.speed_units = 250U;
    msg.duration = 30384U;
    msg.sys_a = 62730U;
    msg.sys_b = 12796U;
    msg.move_threshold = 0.43485416232987373;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommsRelay #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CoverArea msg;
    msg.setTimeStamp(0.9220228997188704);
    msg.setSource(45921U);
    msg.setSourceEntity(50U);
    msg.setDestination(22102U);
    msg.setDestinationEntity(36U);
    msg.lat = 0.06455827450984852;
    msg.lon = 0.3843099296513306;
    msg.z = 0.1362498548544333;
    msg.z_units = 76U;
    msg.speed = 0.22055479399928235;
    msg.speed_units = 162U;
    msg.custom.assign("OFJOAAEZOCVDXKQRKOCPUMXVQNGZPEUINYSPEDAGMQSDWCOAPEDSKPYMUEBYJKSIYRHBMKWVXNHOFNWNLUKIJTSVALMNWEWMVGA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CoverArea #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CoverArea msg;
    msg.setTimeStamp(0.548511370638281);
    msg.setSource(15406U);
    msg.setSourceEntity(138U);
    msg.setDestination(15457U);
    msg.setDestinationEntity(165U);
    msg.lat = 0.6483231268235138;
    msg.lon = 0.07781230267258987;
    msg.z = 0.9593675921660104;
    msg.z_units = 75U;
    msg.speed = 0.9965724080547429;
    msg.speed_units = 245U;
    msg.custom.assign("UWKVIZKCKGSQPTVEJHLWPPRSVMDKQAMHNOERFCBTIGOWJSVYHOKOMFZTGAJHUIQDXZVYFWONTFTDMJEGUDQBIPTTHTEWLOMWSCLZPUNBNTUWACRXAHIBOYYGLSZUSSKIXRYREJAIXJIRHUWXMTNUEYFCJSVOSHNCRVLBLOHLEMDYDUAARQKGSBJIVYCPDCYQDFKXAGRGKBXQGMEJMEXLFZERPLFFVBHDJNBWY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CoverArea #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CoverArea msg;
    msg.setTimeStamp(0.1193301825908164);
    msg.setSource(57711U);
    msg.setSourceEntity(48U);
    msg.setDestination(57422U);
    msg.setDestinationEntity(1U);
    msg.lat = 0.6985351182996334;
    msg.lon = 0.23700547511813552;
    msg.z = 0.6492494550756245;
    msg.z_units = 76U;
    msg.speed = 0.6226072270538738;
    msg.speed_units = 216U;
    msg.custom.assign("HMRXLQFIFIYDSPOGHNOIQEKPYOYJJZIACVZCOVZYLPXCBLQBZVAFEJABEGWAJWMGWEVKAOCTFRZONEQWGHJSWVXWARNURDBMFDNTYMHJSPNCKQGDUKFVSDDIIXQTRXGUZLVFTRTYMPGBBUUMKVZKTNAFLPDUXVCHYOKWXPYHLKUYRLXXCSSTIOHVWHI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CoverArea #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PolygonVertex msg;
    msg.setTimeStamp(0.2404305205763051);
    msg.setSource(58713U);
    msg.setSourceEntity(80U);
    msg.setDestination(42077U);
    msg.setDestinationEntity(241U);
    msg.lat = 0.5693285816984818;
    msg.lon = 0.9959013222074419;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PolygonVertex #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PolygonVertex msg;
    msg.setTimeStamp(0.3497129955451881);
    msg.setSource(47616U);
    msg.setSourceEntity(146U);
    msg.setDestination(13651U);
    msg.setDestinationEntity(242U);
    msg.lat = 0.07501191027648979;
    msg.lon = 0.7235897261401134;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PolygonVertex #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PolygonVertex msg;
    msg.setTimeStamp(0.06859013730241414);
    msg.setSource(51380U);
    msg.setSourceEntity(79U);
    msg.setDestination(50017U);
    msg.setDestinationEntity(34U);
    msg.lat = 0.32221893168239335;
    msg.lon = 0.08287235674952409;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PolygonVertex #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompassCalibration msg;
    msg.setTimeStamp(0.49427775228700876);
    msg.setSource(4535U);
    msg.setSourceEntity(146U);
    msg.setDestination(37971U);
    msg.setDestinationEntity(239U);
    msg.timeout = 46785U;
    msg.lat = 0.42630871214249666;
    msg.lon = 0.6000131509478303;
    msg.z = 0.2859516872316682;
    msg.z_units = 145U;
    msg.pitch = 0.8180916548353521;
    msg.amplitude = 0.19151837989142162;
    msg.duration = 23787U;
    msg.speed = 0.17797533921592545;
    msg.speed_units = 41U;
    msg.radius = 0.7398221346801809;
    msg.direction = 65U;
    msg.custom.assign("JYASAAROBJLQDSTERKPYLGJEABQPKHNFZNTZVMSCXIQZTNIHYGJCBSKXXZLIRTUQD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompassCalibration #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompassCalibration msg;
    msg.setTimeStamp(0.592583320164407);
    msg.setSource(19047U);
    msg.setSourceEntity(170U);
    msg.setDestination(13273U);
    msg.setDestinationEntity(188U);
    msg.timeout = 21438U;
    msg.lat = 0.9202278872441432;
    msg.lon = 0.016232867370181592;
    msg.z = 0.6542748235676313;
    msg.z_units = 65U;
    msg.pitch = 0.2906960603164692;
    msg.amplitude = 0.29864417618618533;
    msg.duration = 4313U;
    msg.speed = 0.663370220565771;
    msg.speed_units = 216U;
    msg.radius = 0.33086054423621336;
    msg.direction = 208U;
    msg.custom.assign("ANRWDTHBGLZFWHCILI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompassCalibration #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompassCalibration msg;
    msg.setTimeStamp(0.6948081046736572);
    msg.setSource(24749U);
    msg.setSourceEntity(222U);
    msg.setDestination(4966U);
    msg.setDestinationEntity(51U);
    msg.timeout = 34183U;
    msg.lat = 0.31240893283014404;
    msg.lon = 0.11427019368182667;
    msg.z = 0.2744804052255815;
    msg.z_units = 32U;
    msg.pitch = 0.10222999680690359;
    msg.amplitude = 0.9698103454340622;
    msg.duration = 24052U;
    msg.speed = 0.6962310431504806;
    msg.speed_units = 71U;
    msg.radius = 0.23733639750266133;
    msg.direction = 112U;
    msg.custom.assign("UCBSCCCDBEQFORWDBIXADKGTBWUIBSRNUGEARCWWQUXAIGEOJVTG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompassCalibration #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationParameters msg;
    msg.setTimeStamp(0.2978723005255606);
    msg.setSource(33506U);
    msg.setSourceEntity(70U);
    msg.setDestination(56951U);
    msg.setDestinationEntity(11U);
    msg.formation_name.assign("SKDHPVHWMQJMMLVSTOFRZPNXJIVBYAOPTX");
    msg.reference_frame = 36U;
    msg.custom.assign("HBCBVYZVOSBQYPAHYRPIDYPXLWFRCSOPXGXXIQAKDUNANJFQEUKT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationParameters msg;
    msg.setTimeStamp(0.17177162452792305);
    msg.setSource(32705U);
    msg.setSourceEntity(123U);
    msg.setDestination(47909U);
    msg.setDestinationEntity(187U);
    msg.formation_name.assign("PJUFQUAZMLKQARSFSAOZDNPUHCZAWFWZNTTJ");
    msg.reference_frame = 121U;
    msg.custom.assign("CIESZMJVFKONRVXLWSKAIZUANNFUNJRVYIVHDCUYZHDLFKTSZQJOGUIHEGFOHJIEXJTTJMWGARGDFJHYBUARFCROIAMBBSMWVGXPDYUDPPDJGEHSNBIXLWZNWHTXDWBMXPQGKYQZEKPUCHCAKINWEURCTMNHABLTYPWGGEBDQKBCFKJSSCHMLXLRXANPFAAUWRDLNIFZIOLOKSTVW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationParameters msg;
    msg.setTimeStamp(0.8834239303520602);
    msg.setSource(23596U);
    msg.setSourceEntity(133U);
    msg.setDestination(50267U);
    msg.setDestinationEntity(194U);
    msg.formation_name.assign("KHRNIOQPCUGRRBZOKCBDHVRPQBFMUXWENZSTUEAIUTLPBGICJSWFUWVBCFDDDOQIUSPFXVZXMPOGOIWCYPJYXKVJYMANZDKLKSBXMVMLDKXAYFFIZGNVTQMPFAHNVQAXDVIOWSJGFGLBHMUZYEOHNORJWFMQGNUTKABHWBWGKQOYRMJYTYVHJERSMYRXTIZQELDJH");
    msg.reference_frame = 159U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 26992U;
    tmp_msg_0.off_x = 0.18940536738280855;
    tmp_msg_0.off_y = 0.2607172720555099;
    tmp_msg_0.off_z = 0.8749182550306236;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("HKIMBXJDNLWNKPDDXOOUVPBKECBTJISOMIAUYRXLIJYOVGAAPTDLRBAMYZRSCKHTAOMVEJEUOEZQHZXKMRQWWTWNKCKRRCZWFEPBQLGIYYDKVMCFOHSKGBPJYLNDXFFYPAUVLQJPXYGUFLZQSWGRDIANUCNHUVJAQWJTGZBFJQRWTOVC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationPlanExecution msg;
    msg.setTimeStamp(0.9881843614123199);
    msg.setSource(7659U);
    msg.setSourceEntity(82U);
    msg.setDestination(47459U);
    msg.setDestinationEntity(121U);
    msg.group_name.assign("FIDUWJECEINUVOQJKRYUCKTDMKNFZCTRSIEWUQQBVXJOMEVVLTEAFOXPXLWTVJBHBUUPMNHEOYMXMNLMRDYGSFGSDJSZSQDEAAUFFRORQWHWWEYKDNDIHSYRATIPPAJAKLDHTRLCBOZP");
    msg.formation_name.assign("MLTYZBASDOUUVKKCMUVZEPIQABOWBLKPAHKBYXXGJIHG");
    msg.plan_id.assign("VHMXMHECBBCTFDYKXPWKCYSCKOJIYVQHBYZPQFXRNBCAHALOXPFZGZGJODBIAVOBEVBLMXLNLOOZJBASXLSUYSMCQRPRIDETDNKWAJ");
    msg.description.assign("OKALYFRAHGMVOBTSWEUMMFMLQUVDNEJAHIRJMJVTAPWZTRZXTDTSSYRJQYKTBQRGNYUONTPFZARQSGMXHQKLLWPXMCBPACDZBIOZPPLMBNCXRLYGDSWWCKFBDBUTPBXVKWLWYZSGMNAEYONYPSHDFSUSCHTJOBEJECKWVXGEDHHUBCWDFEXLJFEIGCROMASUIIRUZQCKAVWOGPEKUVYIXNZVQJUHJFNGZOIOHZQXFXJGYI");
    msg.leader_speed = 0.7112121542244445;
    msg.leader_bank_lim = 0.5714376522048366;
    msg.pos_sim_err_lim = 0.46619229605426094;
    msg.pos_sim_err_wrn = 0.4609459849859906;
    msg.pos_sim_err_timeout = 27904U;
    msg.converg_max = 0.8476779647699503;
    msg.converg_timeout = 19314U;
    msg.comms_timeout = 62251U;
    msg.turb_lim = 0.5644309995392993;
    msg.custom.assign("JZRVLGQMABAYCYXJYEGTFBLRZL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationPlanExecution #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationPlanExecution msg;
    msg.setTimeStamp(0.8549909603591621);
    msg.setSource(22550U);
    msg.setSourceEntity(145U);
    msg.setDestination(24501U);
    msg.setDestinationEntity(204U);
    msg.group_name.assign("VBTQLYNMDJMFLYLVIKHTYKUMBUUWFIRXPMHAMQZGJOJLNODNXAMXMSVJWNYGTOHMTQSOHCVFPUZVCBRWPOFZQWXXBYGRCKEYFOKGBENKQAFFGMZGSNEZURIZXKEECWTDJODBUUYRTBYXZBCEPGTQTKGDVHWIKOYCAZCDPJSQS");
    msg.formation_name.assign("FQJARKRHBRZBHYZXEMJPEEFPJWLVFXGNLUUMGFZGCSAMEXUYQIVXKCINAAIYYPBVGQSWHXIDKRZEBUYPFCXLUWDHJRUGMZWWGFWCVMFYHOLOIORXWMLQXYNCMZBKYJMIHIRCNUPDTONBTJXOWVIAVUFVTTPCUMNUPEOMQVKQGSNCPKLDXWA");
    msg.plan_id.assign("THQBVBBBIECDOAPFRLIHVUEKIEPVFYWTNXUVIUKTSVXCGCMUEVNYFNQBOCLZJUWRHZMGSRHIUZHLZDMACWOXZYXLBGVUJNQIWYPOQBMRZJHNIFUSORMTSODAKCZDGPEINXNEMTKWMVCHYFQYWMXFJQAPOPZKTLCGJDZLBQTOSEDVNRKZPWPKFKGEAWXQJLWQRDFMUFSADPALACSFVDRJYIXGSCBEAKSNIRQXWKRULJTPLXGB");
    msg.description.assign("TCLFOXQLKGAFRUUTOEJZWCNJVNXQOZPOLVDEASBMMXPVHLHYXISFDVSPOGTJSV");
    msg.leader_speed = 0.6584443136377064;
    msg.leader_bank_lim = 0.2001286178565529;
    msg.pos_sim_err_lim = 0.943196693284272;
    msg.pos_sim_err_wrn = 0.09543211336135504;
    msg.pos_sim_err_timeout = 60061U;
    msg.converg_max = 0.0016916759970028172;
    msg.converg_timeout = 28777U;
    msg.comms_timeout = 36745U;
    msg.turb_lim = 0.43363540112133847;
    msg.custom.assign("RARYWWCUMOZFJWLKYEWQLZJTPZFSKUUCGRMFLDWJOYAHHMLDXDEVTEGHQCFJMDLXTDGDQEBNRTQUOBLIGZKLXSSRPAGMKROHGFIJWVXSSEZVBD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationPlanExecution #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationPlanExecution msg;
    msg.setTimeStamp(0.9492660240011633);
    msg.setSource(27537U);
    msg.setSourceEntity(118U);
    msg.setDestination(1313U);
    msg.setDestinationEntity(202U);
    msg.group_name.assign("TCLGUTDYDIBKUKIXDBIMFUDLC");
    msg.formation_name.assign("KNLPXFJKREGBLDUKVCVCLCMLTUCVILQAUQHMVLISHOLBEWPNYXDXSTEOUEFAIOMPZJMQNJVQCBIRUZFKYJJKCOAHZOXPIGAKDDDKEYJBGJZUSZPAGJHFYYMTGYLJGWXSZUFURPHCMFACONFDETHGWZTXPNTAWHRXWQM");
    msg.plan_id.assign("UZRIARPQFUORPPHHLZYAWQUTYD");
    msg.description.assign("DCNQCEWTSXOOKSVCHKVDGQMLGJJBESLPMMHYUADBYPWORHFGYXWQKYLPBWWVIMIHPZCANPAHTYUOGXTAKFQGPPJACEOCTEIJXULOSGGCJDYHAIGBKLBCVPFTWFOAZTFIWQEFCRMHNAYKRDEOLMNXIABLYDDRDJYZKRSNFSLLHKUNZVJZNUTQWMOIBOVMFYUVMRXGPUUIBXBWRXJQNHTQJHDRBIKGNUCDRAZZZEXRZEWQIQKSJSSF");
    msg.leader_speed = 0.07066205229846756;
    msg.leader_bank_lim = 0.4986972654001174;
    msg.pos_sim_err_lim = 0.08548758213175889;
    msg.pos_sim_err_wrn = 0.07383613978115722;
    msg.pos_sim_err_timeout = 45180U;
    msg.converg_max = 0.47739516092340606;
    msg.converg_timeout = 50424U;
    msg.comms_timeout = 29237U;
    msg.turb_lim = 0.4059304629351853;
    msg.custom.assign("BHVSXGZTUDFAJLWPLXVY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationPlanExecution #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowReference msg;
    msg.setTimeStamp(0.6644871381331592);
    msg.setSource(50893U);
    msg.setSourceEntity(93U);
    msg.setDestination(42916U);
    msg.setDestinationEntity(176U);
    msg.control_src = 60165U;
    msg.control_ent = 170U;
    msg.timeout = 0.9670307844815619;
    msg.loiter_radius = 0.5755413435387315;
    msg.altitude_interval = 0.09284343508397053;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowReference #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowReference msg;
    msg.setTimeStamp(0.15094482854737656);
    msg.setSource(43957U);
    msg.setSourceEntity(188U);
    msg.setDestination(2021U);
    msg.setDestinationEntity(160U);
    msg.control_src = 48264U;
    msg.control_ent = 156U;
    msg.timeout = 0.6282385226736926;
    msg.loiter_radius = 0.23276266876227258;
    msg.altitude_interval = 0.21972281778155667;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowReference #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowReference msg;
    msg.setTimeStamp(0.7390377460917497);
    msg.setSource(24136U);
    msg.setSourceEntity(113U);
    msg.setDestination(2698U);
    msg.setDestinationEntity(139U);
    msg.control_src = 42536U;
    msg.control_ent = 229U;
    msg.timeout = 0.3329823022573022;
    msg.loiter_radius = 0.681753453061882;
    msg.altitude_interval = 0.5390035237915443;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowReference #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Reference msg;
    msg.setTimeStamp(0.8461992742198666);
    msg.setSource(49214U);
    msg.setSourceEntity(119U);
    msg.setDestination(55376U);
    msg.setDestinationEntity(8U);
    msg.flags = 87U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.3014224532841534;
    tmp_msg_0.speed_units = 140U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.9643883847205698;
    tmp_msg_1.z_units = 228U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.8860993466671193;
    msg.lon = 0.9387344450894395;
    msg.radius = 0.8380940383902797;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Reference #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Reference msg;
    msg.setTimeStamp(0.9085499370358597);
    msg.setSource(2017U);
    msg.setSourceEntity(161U);
    msg.setDestination(59216U);
    msg.setDestinationEntity(92U);
    msg.flags = 72U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.07770093489010566;
    tmp_msg_0.speed_units = 19U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.8502160510332257;
    tmp_msg_1.z_units = 130U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.19555494113240968;
    msg.lon = 0.21122137088572346;
    msg.radius = 0.40939629626938245;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Reference #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Reference msg;
    msg.setTimeStamp(0.9112239704001701);
    msg.setSource(64557U);
    msg.setSourceEntity(150U);
    msg.setDestination(22938U);
    msg.setDestinationEntity(78U);
    msg.flags = 158U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.12728350561377;
    tmp_msg_0.speed_units = 155U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.04420271616646354;
    tmp_msg_1.z_units = 160U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.6440027747628921;
    msg.lon = 0.12136647366916098;
    msg.radius = 0.7010133256455643;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Reference #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowRefState msg;
    msg.setTimeStamp(0.5112935611390113);
    msg.setSource(36743U);
    msg.setSourceEntity(55U);
    msg.setDestination(22413U);
    msg.setDestinationEntity(231U);
    msg.control_src = 59270U;
    msg.control_ent = 42U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 17U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.3262526826646325;
    tmp_tmp_msg_0_0.speed_units = 208U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.347314670097425;
    tmp_tmp_msg_0_1.z_units = 120U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.5036035622147484;
    tmp_msg_0.lon = 0.322225044716555;
    tmp_msg_0.radius = 0.7983817443455508;
    msg.reference.set(tmp_msg_0);
    msg.state = 43U;
    msg.proximity = 8U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowRefState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowRefState msg;
    msg.setTimeStamp(0.8558800932991278);
    msg.setSource(9451U);
    msg.setSourceEntity(98U);
    msg.setDestination(11804U);
    msg.setDestinationEntity(129U);
    msg.control_src = 36107U;
    msg.control_ent = 219U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 134U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.17841546275904463;
    tmp_tmp_msg_0_0.speed_units = 230U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.9407448775199286;
    tmp_tmp_msg_0_1.z_units = 155U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.5206367654433333;
    tmp_msg_0.lon = 0.4589847480818239;
    tmp_msg_0.radius = 0.9333686157805324;
    msg.reference.set(tmp_msg_0);
    msg.state = 24U;
    msg.proximity = 202U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowRefState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowRefState msg;
    msg.setTimeStamp(0.7334990831967205);
    msg.setSource(26158U);
    msg.setSourceEntity(73U);
    msg.setDestination(47949U);
    msg.setDestinationEntity(195U);
    msg.control_src = 42120U;
    msg.control_ent = 22U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 39U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.6858112713125316;
    tmp_tmp_msg_0_0.speed_units = 178U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.10805075767911865;
    tmp_tmp_msg_0_1.z_units = 223U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.02305143793101927;
    tmp_msg_0.lon = 0.43128932045531754;
    tmp_msg_0.radius = 0.7987343678072849;
    msg.reference.set(tmp_msg_0);
    msg.state = 1U;
    msg.proximity = 8U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowRefState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationMonitor msg;
    msg.setTimeStamp(0.37316565077888386);
    msg.setSource(34906U);
    msg.setSourceEntity(174U);
    msg.setDestination(32646U);
    msg.setDestinationEntity(120U);
    msg.ax_cmd = 0.2935702648173083;
    msg.ay_cmd = 0.5160605366447486;
    msg.az_cmd = 0.45080564009844826;
    msg.ax_des = 0.7653631854047496;
    msg.ay_des = 0.06561008700440774;
    msg.az_des = 0.12055709586191377;
    msg.virt_err_x = 0.3654918836223733;
    msg.virt_err_y = 0.07410785556772459;
    msg.virt_err_z = 0.00869619366565455;
    msg.surf_fdbk_x = 0.16473299524713048;
    msg.surf_fdbk_y = 0.28610984671178086;
    msg.surf_fdbk_z = 0.4270219136494273;
    msg.surf_unkn_x = 0.32499389422617053;
    msg.surf_unkn_y = 0.8877163750907958;
    msg.surf_unkn_z = 0.006317797067934561;
    msg.ss_x = 0.44932192684751626;
    msg.ss_y = 0.9011192986314775;
    msg.ss_z = 0.6131773566310265;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationMonitor #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationMonitor msg;
    msg.setTimeStamp(0.8767343833096404);
    msg.setSource(37247U);
    msg.setSourceEntity(26U);
    msg.setDestination(3336U);
    msg.setDestinationEntity(147U);
    msg.ax_cmd = 0.2762887037874505;
    msg.ay_cmd = 0.7551729729213753;
    msg.az_cmd = 0.2898099880696352;
    msg.ax_des = 0.9905248121362724;
    msg.ay_des = 0.5595468764247645;
    msg.az_des = 0.4771379160463245;
    msg.virt_err_x = 0.396760290291271;
    msg.virt_err_y = 0.06518237852850695;
    msg.virt_err_z = 0.036769679812703404;
    msg.surf_fdbk_x = 0.8333581848255072;
    msg.surf_fdbk_y = 0.12381233146953041;
    msg.surf_fdbk_z = 0.25353143495779407;
    msg.surf_unkn_x = 0.31714589448154307;
    msg.surf_unkn_y = 0.8411559771455369;
    msg.surf_unkn_z = 0.9572823026877384;
    msg.ss_x = 0.20161568306567268;
    msg.ss_y = 0.6902333768282347;
    msg.ss_z = 0.7138815613282455;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("LDKAANQVCFWZONHBELFOSOAGJOGTMBSCWUPYKRIYDUVBSIHCOAZJITHYIPVAFDSSDRIMWEOSETFQLTNEPPYUPCFXNXQYTRSJFDKKKBRFLJPBJBIKTZVHBPXZGMSCCBZJGJJNWXDGIPXLVUVUKQCTOWNENUIZOKCXWJMVGSGHAVNHXOAQYLMYRXCNUGLAEHSYMRVUAQBWDMT");
    tmp_msg_0.dist = 0.24182974743832386;
    tmp_msg_0.err = 0.5199761937831117;
    tmp_msg_0.ctrl_imp = 0.5571508284212353;
    tmp_msg_0.rel_dir_x = 0.9784710139462633;
    tmp_msg_0.rel_dir_y = 0.6696856510453021;
    tmp_msg_0.rel_dir_z = 0.9309584305094778;
    tmp_msg_0.err_x = 0.5687902616530643;
    tmp_msg_0.err_y = 0.759265106729867;
    tmp_msg_0.err_z = 0.7960154064041925;
    tmp_msg_0.rf_err_x = 0.48004861627441187;
    tmp_msg_0.rf_err_y = 0.49784940999458005;
    tmp_msg_0.rf_err_z = 0.07487477875702231;
    tmp_msg_0.rf_err_vx = 0.34721573854553667;
    tmp_msg_0.rf_err_vy = 0.383171260739644;
    tmp_msg_0.rf_err_vz = 0.19270655756096744;
    tmp_msg_0.ss_x = 0.6129597829644267;
    tmp_msg_0.ss_y = 0.666956234974131;
    tmp_msg_0.ss_z = 0.03504204539863076;
    tmp_msg_0.virt_err_x = 0.34203056389691944;
    tmp_msg_0.virt_err_y = 0.006393988327674016;
    tmp_msg_0.virt_err_z = 0.5429994489941109;
    msg.rel_state.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationMonitor #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationMonitor msg;
    msg.setTimeStamp(0.635325443263524);
    msg.setSource(19362U);
    msg.setSourceEntity(135U);
    msg.setDestination(39235U);
    msg.setDestinationEntity(178U);
    msg.ax_cmd = 0.5142741942499818;
    msg.ay_cmd = 0.030355601119621434;
    msg.az_cmd = 0.647570984145168;
    msg.ax_des = 0.21270960527594263;
    msg.ay_des = 0.2187567934079;
    msg.az_des = 0.9641458711957056;
    msg.virt_err_x = 0.8644010766832468;
    msg.virt_err_y = 0.9219032761448454;
    msg.virt_err_z = 0.19141342331504974;
    msg.surf_fdbk_x = 0.09924697930283743;
    msg.surf_fdbk_y = 0.7589915221995721;
    msg.surf_fdbk_z = 0.0934501902637983;
    msg.surf_unkn_x = 0.49950719612967076;
    msg.surf_unkn_y = 0.4732131771835426;
    msg.surf_unkn_z = 0.46370716480512586;
    msg.ss_x = 0.27053382552662597;
    msg.ss_y = 0.17979733684052135;
    msg.ss_z = 0.43562216602571635;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("BCCWTUIGRZYCMGVRYMIBNYJIMQEKQRRAIBHDOENHSOOKMSIQQWAEVFWGGPSFIHCCWIBVDLWCPNSEEFQJRXVUWZZQPOTXHLBTTPNJBKNTEVJKCGOOWOYVIBGCPOMHMMXWFJVKDXQEQBKFEHZFSJXLLJXUMPSOAKNZSQUUDAUUGLYVMPTRLAEVJAOCFRHLRDPXDF");
    tmp_msg_0.dist = 0.12284946616805081;
    tmp_msg_0.err = 0.2864230032507158;
    tmp_msg_0.ctrl_imp = 0.5697905123481187;
    tmp_msg_0.rel_dir_x = 0.4890748734382976;
    tmp_msg_0.rel_dir_y = 0.6003749838390854;
    tmp_msg_0.rel_dir_z = 0.9663457170923991;
    tmp_msg_0.err_x = 0.02711469455405424;
    tmp_msg_0.err_y = 0.6093346416236671;
    tmp_msg_0.err_z = 0.21326535043446326;
    tmp_msg_0.rf_err_x = 0.4719336260368433;
    tmp_msg_0.rf_err_y = 0.19854887579770053;
    tmp_msg_0.rf_err_z = 0.7963738605862261;
    tmp_msg_0.rf_err_vx = 0.4599080211739186;
    tmp_msg_0.rf_err_vy = 0.8056716334528632;
    tmp_msg_0.rf_err_vz = 0.23541323697176209;
    tmp_msg_0.ss_x = 0.2269087075152073;
    tmp_msg_0.ss_y = 0.16215949244253403;
    tmp_msg_0.ss_z = 0.5345937589658486;
    tmp_msg_0.virt_err_x = 0.8996839629564493;
    tmp_msg_0.virt_err_y = 0.867615451827464;
    tmp_msg_0.virt_err_z = 0.5184017523289869;
    msg.rel_state.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationMonitor #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeState msg;
    msg.setTimeStamp(0.5276093626060548);
    msg.setSource(33078U);
    msg.setSourceEntity(21U);
    msg.setDestination(34118U);
    msg.setDestinationEntity(232U);
    msg.s_id.assign("VQXRGJRKPKUQOEFWVHATVWCNLBXBFPVKYSAWKKSOGXCJBGCARQVRMPREXUGAEEINCNGAHYDHMPJJQSPDLOCWMYIHYMCUZKTOAFETUU");
    msg.dist = 0.28163885682098355;
    msg.err = 0.8125544693671226;
    msg.ctrl_imp = 0.802569002184901;
    msg.rel_dir_x = 0.5558798417139309;
    msg.rel_dir_y = 0.540069632949562;
    msg.rel_dir_z = 0.17832516201013626;
    msg.err_x = 0.8304211427561142;
    msg.err_y = 0.9251895346850036;
    msg.err_z = 0.35351343117657297;
    msg.rf_err_x = 0.17829837550060612;
    msg.rf_err_y = 0.8525975202792315;
    msg.rf_err_z = 0.7675393701338494;
    msg.rf_err_vx = 0.5775657601019379;
    msg.rf_err_vy = 0.48525136417769676;
    msg.rf_err_vz = 0.8139728404655381;
    msg.ss_x = 0.28168137499587187;
    msg.ss_y = 0.046848079554324684;
    msg.ss_z = 0.05463089925231834;
    msg.virt_err_x = 0.7624423976577805;
    msg.virt_err_y = 0.6900981105471286;
    msg.virt_err_z = 0.5030114115447869;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeState msg;
    msg.setTimeStamp(0.21511850983975722);
    msg.setSource(46631U);
    msg.setSourceEntity(84U);
    msg.setDestination(4630U);
    msg.setDestinationEntity(65U);
    msg.s_id.assign("ZOEHLJAEGFQNUTIREOCARKCCFHQLGNBQUKHLVUOBDKNPREZCYMRWJDYWMAWGODJYDIZHPMDAQQBIFGOGNSIFKXJLRVJJGWPFJVHOPSRCEKBVQQVSXNXIBOHJTVMMWEEBMTUCVSUSAEQAWFAPYXBFWLXNNJMTZUVYFNYTGGPXHQFIZHRMZPPWTDCGSCCVLGMZFJKBAWZISDTKBAQIMVOYRDDYZYSKZOBCKHTEWUUTHOP");
    msg.dist = 0.6760906605366593;
    msg.err = 0.20432004100354217;
    msg.ctrl_imp = 0.22251963220706572;
    msg.rel_dir_x = 0.17444273655942388;
    msg.rel_dir_y = 0.07183312077162818;
    msg.rel_dir_z = 0.23255919480827003;
    msg.err_x = 0.7629343073054747;
    msg.err_y = 0.8219613263681687;
    msg.err_z = 0.6513229982894564;
    msg.rf_err_x = 0.36866073033471236;
    msg.rf_err_y = 0.537987114654595;
    msg.rf_err_z = 0.9619280265838731;
    msg.rf_err_vx = 0.9399277798445421;
    msg.rf_err_vy = 0.988959962354401;
    msg.rf_err_vz = 0.8789647508567182;
    msg.ss_x = 0.25779018329659686;
    msg.ss_y = 0.879116893272725;
    msg.ss_z = 0.2236615317103594;
    msg.virt_err_x = 0.1270535616706766;
    msg.virt_err_y = 0.0971926578343969;
    msg.virt_err_z = 0.7105084927079012;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeState msg;
    msg.setTimeStamp(0.28541038004589936);
    msg.setSource(59791U);
    msg.setSourceEntity(168U);
    msg.setDestination(4271U);
    msg.setDestinationEntity(131U);
    msg.s_id.assign("AJXTCNHBHUWSYFCKGDRFLYOXPVIKCSBHDORHSNCBYFJXGNJHXNBUDWTIYRSMEOOYALLXYMUZWPBPKURPOVCDNGEKJWYJTNEMQLMLIISJJRVYDVXQKGGQPTZMGBDZGTPQGCHVIAZTNNLXVXKCQLHMPLFIHITJSTYCEDZRNWXCMUOMWUMERFHZEHGDWBVIKAEXOUWPKAFPQUDGZIPYADQZBUJEVSWNATAVLJFMKUQSOZFQT");
    msg.dist = 0.3067275577717743;
    msg.err = 0.58901181245296;
    msg.ctrl_imp = 0.12752223727756362;
    msg.rel_dir_x = 0.14621315606584406;
    msg.rel_dir_y = 0.22858875212113172;
    msg.rel_dir_z = 0.5640383128285391;
    msg.err_x = 0.9142442330655929;
    msg.err_y = 0.5846524080816348;
    msg.err_z = 0.7535212925890076;
    msg.rf_err_x = 0.9399230932885181;
    msg.rf_err_y = 0.4992317055880573;
    msg.rf_err_z = 0.666122696435227;
    msg.rf_err_vx = 0.5538879843935959;
    msg.rf_err_vy = 0.312869346939077;
    msg.rf_err_vz = 0.541263220188414;
    msg.ss_x = 0.11229116880818157;
    msg.ss_y = 0.9517054013692773;
    msg.ss_z = 0.8229860694361962;
    msg.virt_err_x = 0.5104794990604254;
    msg.virt_err_y = 0.07684460104389523;
    msg.virt_err_z = 0.7702862420877187;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Dislodge msg;
    msg.setTimeStamp(0.5547908772928893);
    msg.setSource(54643U);
    msg.setSourceEntity(106U);
    msg.setDestination(18610U);
    msg.setDestinationEntity(120U);
    msg.timeout = 423U;
    msg.rpm = 0.0973641959612569;
    msg.direction = 50U;
    msg.custom.assign("MCXWNLKGTODFUMVDQGTXUJFUEQBSABOYLDBWVDFQTMVNOCNDTFZWIEGSQVXWTAMMZKIRESACYSDLIKKPGSFBOBKOXRZQPXRSTXCKREAVVUZLGKSFBDJTGNJZUUEQMPDPVWAHQOCHEPIJYDGBLJHNPNJCUNXLBYXCWVMGJOCBRGHRTOTSVIHUONFMAZHPEJRNEFQLLZCMYN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Dislodge #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Dislodge msg;
    msg.setTimeStamp(0.2036644593018221);
    msg.setSource(20647U);
    msg.setSourceEntity(73U);
    msg.setDestination(471U);
    msg.setDestinationEntity(134U);
    msg.timeout = 22568U;
    msg.rpm = 0.9771000266427438;
    msg.direction = 180U;
    msg.custom.assign("DBTCBOGCFMPVMDITBNOAFQHGKJPHXZNVAGWXURQCOMTXAJPUIQXPRZRNHGXJF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Dislodge #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Dislodge msg;
    msg.setTimeStamp(0.7000077147757187);
    msg.setSource(57809U);
    msg.setSourceEntity(89U);
    msg.setDestination(37270U);
    msg.setDestinationEntity(97U);
    msg.timeout = 2874U;
    msg.rpm = 0.5342623783942974;
    msg.direction = 235U;
    msg.custom.assign("TZBTPJQJBFIFHGCNYKBLYXBQEQJSAYHBTFJMPVOYVUDP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Dislodge #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Formation msg;
    msg.setTimeStamp(0.12814748662030695);
    msg.setSource(5413U);
    msg.setSourceEntity(248U);
    msg.setDestination(32353U);
    msg.setDestinationEntity(193U);
    msg.formation_name.assign("GWPXCMQZIJHTKZHSXQQCPDWWNQUTVNJAJFUFMOXBGPXDZWMCKXCLXEMQNPJUYHSNWFRNDHSSJNPFYTVGDENBOZVYPVWLDVRMNPISIYKHIZSASNTDUCYNBUVBKHMHSGHLGPOCSMFSJRYOLIQMCZBFLMYUAIQTAOTRHAGEJJLALBTFILKGEAQOMVRYXIGKWROLTCCBPZEBKPJYROKTUDKBDRZBWW");
    msg.type = 195U;
    msg.op = 189U;
    msg.group_name.assign("YZZRXKDAIWQEGEQMTUNHAVHEKPVENFWKAMFBLVPFSSXTMQZOQSSVEXXKHQBBS");
    msg.plan_id.assign("YPOLCTKUVPXZAEYDYWXPZYFSVVSEVORCXJUHRMBHWMLMGEKOAJHIWQERGKMXDBFKMCIQQQDMYIDOFNJGXDDUTRZKTSDLZKYVBAHVHFTLASBTPNEXWTAEANIFUMBLOMQGCKZVACQOGARIR");
    msg.description.assign("NPXVCSYSITYESINBBBQFYOKITWWCFCEODJVOWLKAMSLVGJZTKAUEVDLCJUHNZIRPQLRSMJSOUGGCLOYXJQURWPMBWLNPAUXQAEKFBUTBBIWIODIYFHCIKHZOIRSNFUXWHNUHEBXYGALTNMHYAHFDCGHVZBYDZRYZLJFTKKEPGRKUWROEMCOVOMSXVN");
    msg.reference_frame = 127U;
    msg.leader_bank_lim = 0.6964087670953165;
    msg.leader_speed_min = 0.9478185444938689;
    msg.leader_speed_max = 0.573857763554262;
    msg.leader_alt_min = 0.9384032232527683;
    msg.leader_alt_max = 0.24178062890617513;
    msg.pos_sim_err_lim = 0.8132096889082626;
    msg.pos_sim_err_wrn = 0.3991640934242693;
    msg.pos_sim_err_timeout = 49272U;
    msg.converg_max = 0.25598237317217387;
    msg.converg_timeout = 7251U;
    msg.comms_timeout = 62220U;
    msg.turb_lim = 0.01369784898117743;
    msg.custom.assign("OPLTUBDUBMXAJFUYDHKIVPEMJEMHWACYCPJNFGZGNTDQODERSINLQWUFZSSQQRXIYHHLHGLIJPVNROCTFADA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Formation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Formation msg;
    msg.setTimeStamp(0.1611509847640351);
    msg.setSource(47277U);
    msg.setSourceEntity(61U);
    msg.setDestination(45720U);
    msg.setDestinationEntity(128U);
    msg.formation_name.assign("JYROWGZHHIJVQCMHLDLWMM");
    msg.type = 188U;
    msg.op = 3U;
    msg.group_name.assign("RGQQBAJHNHQKKLJKMOEGMAQBKWBWXNDZXGKATZFUGRTKKPYGH");
    msg.plan_id.assign("CHBLNVAPIEXWTDLLACAEQDQWKJRNHFVZULDSYKTTNEVWKRZEPGALXZMUTCNPPSIZYAHECBYFVUXJOVXMOORESEJXGPKUYGWOMTQDCPMCYBBWBMIDLGBAJMNZIBJUDHOFLVCZUHRBAKRQYWVVLJPWOHQRMSM");
    msg.description.assign("CNGIGLGKGSLVCEIVKVQAPHTQSIXZMJCYUSNZRCEVSGDMERYQTDYEMKFOEZLFZBSWMOJITVPQLLRISCCFDUATLFXDFPBQUDLHGCGPFHZSAAFMKYCMKOXWWXWZXOJIRWXBBQJHIUBVWLEDAPJNTKONJUWSOYGVMFTJNEWXYTOHSDZQANMIPYGFPBYATQHXAPUIDURNETQZ");
    msg.reference_frame = 121U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 23883U;
    tmp_msg_0.off_x = 0.2603042091954968;
    tmp_msg_0.off_y = 0.5392101414126086;
    tmp_msg_0.off_z = 0.016960648050341476;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.22721113195242204;
    msg.leader_speed_min = 0.5999750787183177;
    msg.leader_speed_max = 0.9488289304229139;
    msg.leader_alt_min = 0.07792917721409032;
    msg.leader_alt_max = 0.15420128189620974;
    msg.pos_sim_err_lim = 0.32113701163221653;
    msg.pos_sim_err_wrn = 0.2922942333917721;
    msg.pos_sim_err_timeout = 6337U;
    msg.converg_max = 0.14969908680349575;
    msg.converg_timeout = 19870U;
    msg.comms_timeout = 47394U;
    msg.turb_lim = 0.6939217035087746;
    msg.custom.assign("AFOXHVMQKOMTDYDQIUJOBACCLZLDKEILUPBHMWZILCFUKZDAWBUEDZFCSLJOHVALIRBEDIWRBAECWYTHKRVJZCPWPEZFKEFBLSJQTKSMKPWFGNQFOQGHGIAJMNXTTMJBGUISUJTXVWPERRQQOZYXSMJVTUHUCGMKASJGXVBENHRSBRONVPYMWZPWODNIEPKZLCFLFYJODGSQAMAFQTVYLUROHCYC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Formation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Formation msg;
    msg.setTimeStamp(0.8362826926729312);
    msg.setSource(42110U);
    msg.setSourceEntity(11U);
    msg.setDestination(15951U);
    msg.setDestinationEntity(50U);
    msg.formation_name.assign("QPOAPUBHTOARQZOULAYEMFKBWZHVVMWTRPFBFADTIBPVVCDUOKWDCUQYEYRZRSXWHBVKJJVQGOTGAQZSMVCYUGQQXNOMDIKPXJLWZXSJHKUUUYCFDGHUELIHDUNCKN");
    msg.type = 148U;
    msg.op = 175U;
    msg.group_name.assign("WTICUXTOETQAQHHVJKWUJQXNSDNQMVALCUGQAEWBHJKQIETMVSJLTMAYYQLPKPGFCEPOENLONJMBWHBOPHZSZYEHDWCXZKJRQRERNWXJFCDKXOQJWLFIKRGTTGP");
    msg.plan_id.assign("XLCRKRYOSYTBVJAAYDGEBUOKAHHFUFEAEGCUBRMDTCKJENHHNQLJIXBXZTKTQVPJHIEVWPNMOZJEHJGLMEIEJTTDYLAXSVAXUSVGBNZDYMAFDCKYWMXKFOWWFQBPLMZGWBINGOICF");
    msg.description.assign("SHTQSRSTHGLVDQWIIXEGGKSHKMGBEANRNVGXLZOMSGKDPUEUITSANJFAUXHVHYSXKSPPRWOWYZZWYJJCDLQMBBKAIMCONQXRMKIFXQUZNAPCDBHORKZCUPTLVRYACQNYWZIKGQLCFSZOJFJBCZXYVOIATTZCMBSIWAMIDFAGQERBOUUYOKCTPMTDGEXENPIDWJWVHPTPFWUEDYCMRJEYUAELBTLNWMBYNFVZLJRHJKNPFLOOHQFXLDVDQVHF");
    msg.reference_frame = 232U;
    msg.leader_bank_lim = 0.19801478822476604;
    msg.leader_speed_min = 0.6036387679341765;
    msg.leader_speed_max = 0.43985684210909803;
    msg.leader_alt_min = 0.0551338835579982;
    msg.leader_alt_max = 0.012121305111389535;
    msg.pos_sim_err_lim = 0.3038622337381516;
    msg.pos_sim_err_wrn = 0.24064789332199543;
    msg.pos_sim_err_timeout = 23876U;
    msg.converg_max = 0.7585630804761473;
    msg.converg_timeout = 42132U;
    msg.comms_timeout = 22252U;
    msg.turb_lim = 0.5709847596089505;
    msg.custom.assign("DBVAIZBZACSKOAMRQZNSHUT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Formation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Launch msg;
    msg.setTimeStamp(0.5732743800066382);
    msg.setSource(7739U);
    msg.setSourceEntity(135U);
    msg.setDestination(16136U);
    msg.setDestinationEntity(131U);
    msg.timeout = 55583U;
    msg.lat = 0.5458558942731137;
    msg.lon = 0.5940551787481888;
    msg.z = 0.468415696554501;
    msg.z_units = 103U;
    msg.speed = 0.8803447315197596;
    msg.speed_units = 19U;
    msg.custom.assign("TONDNRQYUBOYEXGBFFDAUASHFQZUWCDHWCXNITHGQAQSGJPMAFRXLWHTGKRDFPKZMLC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Launch #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Launch msg;
    msg.setTimeStamp(0.20147987010040525);
    msg.setSource(59511U);
    msg.setSourceEntity(223U);
    msg.setDestination(18019U);
    msg.setDestinationEntity(5U);
    msg.timeout = 1691U;
    msg.lat = 0.23606806955759496;
    msg.lon = 0.9683954168976245;
    msg.z = 0.15185091932478023;
    msg.z_units = 123U;
    msg.speed = 0.80731303197555;
    msg.speed_units = 16U;
    msg.custom.assign("LHMQOVKGCBJFDIKWQNSJUJMMLNLDYFBCEQXAHDMWOUFZAWTTEQSNETXQERRVJAAZFTADJEMTDVYENPRWHPCZJAMHNPZKOXKKCLTABPQFBHXWGYQORHBJLRSOD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Launch #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Launch msg;
    msg.setTimeStamp(0.6375272023936035);
    msg.setSource(27927U);
    msg.setSourceEntity(2U);
    msg.setDestination(47612U);
    msg.setDestinationEntity(170U);
    msg.timeout = 41672U;
    msg.lat = 0.2853744232849824;
    msg.lon = 0.4091523649349671;
    msg.z = 0.22595587646212267;
    msg.z_units = 254U;
    msg.speed = 0.2830063701217045;
    msg.speed_units = 238U;
    msg.custom.assign("YSNWAHOETPIQJOTFZQEXHQJNPATXIKYCKJKNBPFLGFCAUS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Launch #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Drop msg;
    msg.setTimeStamp(0.5405545957721247);
    msg.setSource(11965U);
    msg.setSourceEntity(12U);
    msg.setDestination(8585U);
    msg.setDestinationEntity(39U);
    msg.timeout = 22661U;
    msg.lat = 0.3078049353980863;
    msg.lon = 0.06614094673098525;
    msg.z = 0.7685914900411924;
    msg.z_units = 3U;
    msg.speed = 0.8670122164065409;
    msg.speed_units = 153U;
    msg.custom.assign("FCZDWMESNAYNBBWVNSJUNTQGXDPCACMJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Drop #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Drop msg;
    msg.setTimeStamp(0.7850250338734337);
    msg.setSource(11709U);
    msg.setSourceEntity(77U);
    msg.setDestination(7460U);
    msg.setDestinationEntity(24U);
    msg.timeout = 64987U;
    msg.lat = 0.7897997904459332;
    msg.lon = 0.7241828123495297;
    msg.z = 0.7237766704186989;
    msg.z_units = 226U;
    msg.speed = 0.018100252007012485;
    msg.speed_units = 190U;
    msg.custom.assign("SADHLLNYXYEWJMAFATKVVXUWDVOVMKZPCVFOKDBZMGBITIKNDXMDDUZHHECQTYTQPHHIOACSUPKSAXYAVWRUVFXISWNELBGXASOCPQUYZQUCSDAIIWOLEKQGMWTJOZPSLIZFFRBRVUBTBQYKPXEARSCYMMFNEGFKZZHRMFSNMIKTDCOJHRJHPLTZYJENPVGIRORPLXBHJLJUKTGRWVZWDMOWQJGNBNXTHYGQJWQSELNLURIJYOXUP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Drop #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Drop msg;
    msg.setTimeStamp(0.8174026600020193);
    msg.setSource(42270U);
    msg.setSourceEntity(67U);
    msg.setDestination(38571U);
    msg.setDestinationEntity(9U);
    msg.timeout = 44680U;
    msg.lat = 0.015957723290415893;
    msg.lon = 0.01281524893598307;
    msg.z = 0.18546461216384957;
    msg.z_units = 230U;
    msg.speed = 0.7492747329945213;
    msg.speed_units = 94U;
    msg.custom.assign("ITMDHHUNJIYSSXUJNPIKCNRXTBGMFVPZOVEXWQZBLRGIFNWPJGVNYBOEWEAKBJKFEVZSOIQWVUWYXLZTWTZVFFZDTQAPMMZNYS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Drop #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ScheduledGoto msg;
    msg.setTimeStamp(0.5135428101009804);
    msg.setSource(60943U);
    msg.setSourceEntity(140U);
    msg.setDestination(12143U);
    msg.setDestinationEntity(13U);
    msg.arrival_time = 0.9246582422130534;
    msg.lat = 0.592602360331167;
    msg.lon = 0.13182490741527597;
    msg.z = 0.1922855085391918;
    msg.z_units = 29U;
    msg.travel_z = 0.3291171760888303;
    msg.travel_z_units = 240U;
    msg.delayed = 138U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ScheduledGoto #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ScheduledGoto msg;
    msg.setTimeStamp(0.9537415370983354);
    msg.setSource(52668U);
    msg.setSourceEntity(48U);
    msg.setDestination(16878U);
    msg.setDestinationEntity(138U);
    msg.arrival_time = 0.809233503986286;
    msg.lat = 0.7571869183105656;
    msg.lon = 0.582000430985677;
    msg.z = 0.25214379743456095;
    msg.z_units = 149U;
    msg.travel_z = 0.18366576368224685;
    msg.travel_z_units = 183U;
    msg.delayed = 244U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ScheduledGoto #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ScheduledGoto msg;
    msg.setTimeStamp(0.8999498677515407);
    msg.setSource(64650U);
    msg.setSourceEntity(157U);
    msg.setDestination(36805U);
    msg.setDestinationEntity(86U);
    msg.arrival_time = 0.04690187997075279;
    msg.lat = 0.8024063973990042;
    msg.lon = 0.8661654585370888;
    msg.z = 0.1689681546481281;
    msg.z_units = 71U;
    msg.travel_z = 0.199266558415522;
    msg.travel_z_units = 20U;
    msg.delayed = 92U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ScheduledGoto #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RowsCoverage msg;
    msg.setTimeStamp(0.8068931653723445);
    msg.setSource(38122U);
    msg.setSourceEntity(124U);
    msg.setDestination(6756U);
    msg.setDestinationEntity(4U);
    msg.lat = 0.06255310089812749;
    msg.lon = 0.5507774015035318;
    msg.z = 0.14077544034061473;
    msg.z_units = 131U;
    msg.speed = 0.5335900188510789;
    msg.speed_units = 10U;
    msg.bearing = 0.18374886004856805;
    msg.cross_angle = 0.4259265463241323;
    msg.width = 0.6495692669357964;
    msg.length = 0.40732270327318354;
    msg.coff = 153U;
    msg.angaperture = 0.7058645644579422;
    msg.range = 41112U;
    msg.overlap = 21U;
    msg.flags = 78U;
    msg.custom.assign("WYYQAEXPYBHDFGJBXAGIGMHNKRKDMDZERSEZOOLZYIURQYPSCPMVEKKNQHXPOQIKWLBXIOKGPVOQTNIKLJNEORAZELOWQFDYEDCXPUFNSUZRGCNIBXVUCQZFTVXAFDKENFXBADRQKJWJTCBFFSGBUZWBAZJSIRGZXLHKVICYGTLTWLWPBESUVVPHDGUWCLUOJNFJLQMGIAJTVLCBORZC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RowsCoverage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RowsCoverage msg;
    msg.setTimeStamp(0.142558305686186);
    msg.setSource(64173U);
    msg.setSourceEntity(104U);
    msg.setDestination(20715U);
    msg.setDestinationEntity(133U);
    msg.lat = 0.7534892937168327;
    msg.lon = 0.6671025413459732;
    msg.z = 0.5228733867512959;
    msg.z_units = 20U;
    msg.speed = 0.6168435331731601;
    msg.speed_units = 86U;
    msg.bearing = 0.9119364180571068;
    msg.cross_angle = 0.43432500259802165;
    msg.width = 0.6876492719981419;
    msg.length = 0.4932619731621555;
    msg.coff = 160U;
    msg.angaperture = 0.5281692957919583;
    msg.range = 33076U;
    msg.overlap = 22U;
    msg.flags = 101U;
    msg.custom.assign("ERIZKXVIDLTQQJKEFGCOPSWSLMXFOSZGYBTCITPRNTKOPLGHPHNLSJMMEYGNDXODLNANHMYIJRBARBDNRWAXLPHCHYZDZKCWTDESFMAVCNQVYPYZGJAJFBMVQZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RowsCoverage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RowsCoverage msg;
    msg.setTimeStamp(0.9691740003346645);
    msg.setSource(25105U);
    msg.setSourceEntity(56U);
    msg.setDestination(64022U);
    msg.setDestinationEntity(154U);
    msg.lat = 0.8544787127574134;
    msg.lon = 0.716911971764781;
    msg.z = 0.8087878193235754;
    msg.z_units = 220U;
    msg.speed = 0.24678422004706868;
    msg.speed_units = 41U;
    msg.bearing = 0.6127819026476721;
    msg.cross_angle = 0.11875519974793836;
    msg.width = 0.08953817198727898;
    msg.length = 0.5227859521984289;
    msg.coff = 161U;
    msg.angaperture = 0.8752120903909814;
    msg.range = 47337U;
    msg.overlap = 4U;
    msg.flags = 67U;
    msg.custom.assign("TUWEJOYQHXFNVFFOPMKFXFPKTPHKHQIEPFURDLJMIHYNVPGHRGBAWDCJKCMKMRUHEKZUUCBRLNRSQQYCIMKOTGGMFJRLIAABIFWYWDHODZUDZNATJBWSEZRJMZQOXBGXYGJCYTDZLKXTSZXEMBINFREINWWISYXMEVYAPSLXBKZZSTTXQRALJGVTANCIVQLWDSMNBPPWAPAQLCGHAQSWPDL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RowsCoverage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Sample msg;
    msg.setTimeStamp(0.21344729391287287);
    msg.setSource(1530U);
    msg.setSourceEntity(106U);
    msg.setDestination(18310U);
    msg.setDestinationEntity(46U);
    msg.timeout = 65524U;
    msg.lat = 0.15726209732126262;
    msg.lon = 0.921765162459734;
    msg.z = 0.6936957012281043;
    msg.z_units = 55U;
    msg.speed = 0.4856117539987982;
    msg.speed_units = 219U;
    msg.syringe0 = 62U;
    msg.syringe1 = 52U;
    msg.syringe2 = 36U;
    msg.custom.assign("DHODBURCLFGCYPVJPEHMXNVFDGGQUQEOYUHAIBQGPHXWNZOQDDQICBWFEBHNLSLOEYSIVHZINTJFTYRTAHABMC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Sample #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Sample msg;
    msg.setTimeStamp(0.5530268615057204);
    msg.setSource(65278U);
    msg.setSourceEntity(64U);
    msg.setDestination(26733U);
    msg.setDestinationEntity(211U);
    msg.timeout = 39291U;
    msg.lat = 0.1574651216983567;
    msg.lon = 0.5415293800613228;
    msg.z = 0.5799545024129406;
    msg.z_units = 171U;
    msg.speed = 0.7366304166757567;
    msg.speed_units = 49U;
    msg.syringe0 = 238U;
    msg.syringe1 = 249U;
    msg.syringe2 = 56U;
    msg.custom.assign("AVKRSFPCIANLENPKZGOJWMUNHKCZXBTJJSTYVIMUZWOJIGVRWGWFEENMHCUSIDAYZVEDKBVRWWOHFVWUOUJGOCAHNGRSQYFQQQCBJLEEMKTACQYBPXPHLDLT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Sample #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Sample msg;
    msg.setTimeStamp(0.013837894752022795);
    msg.setSource(60502U);
    msg.setSourceEntity(188U);
    msg.setDestination(30978U);
    msg.setDestinationEntity(66U);
    msg.timeout = 23932U;
    msg.lat = 0.12579993993622618;
    msg.lon = 0.0754594574309605;
    msg.z = 0.2176746995220531;
    msg.z_units = 45U;
    msg.speed = 0.6035529214939143;
    msg.speed_units = 31U;
    msg.syringe0 = 7U;
    msg.syringe1 = 196U;
    msg.syringe2 = 142U;
    msg.custom.assign("BTQXXIRJNMCYDACJCHZVPRAAGZQRWUNMJUHEVPDPWVHEDYNYUWETVFSTRJVHUAYHBMZLMINSKEHWJTJRODFNCHLQPCIOWMMLMKEAJHGIOYLWEDLNKDSXQCWCSXZKRCZSREICUAOSRPRDOOIOQWTWKUKFALTYSYJQKYFKVGGCKIJNADGUNUIPBFUTYMNVDJPGPXBOQLTBPZEKLRFOMEBXXOQIZTQL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Sample #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ImageTracking msg;
    msg.setTimeStamp(0.18496183274368305);
    msg.setSource(27435U);
    msg.setSourceEntity(104U);
    msg.setDestination(52799U);
    msg.setDestinationEntity(89U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ImageTracking #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ImageTracking msg;
    msg.setTimeStamp(0.273022062787318);
    msg.setSource(33539U);
    msg.setSourceEntity(245U);
    msg.setDestination(35617U);
    msg.setDestinationEntity(101U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ImageTracking #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ImageTracking msg;
    msg.setTimeStamp(0.05607595459089809);
    msg.setSource(61539U);
    msg.setSourceEntity(252U);
    msg.setDestination(52482U);
    msg.setDestinationEntity(98U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ImageTracking #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Takeoff msg;
    msg.setTimeStamp(0.7541610636067391);
    msg.setSource(34554U);
    msg.setSourceEntity(113U);
    msg.setDestination(21629U);
    msg.setDestinationEntity(211U);
    msg.lat = 0.6237512930773326;
    msg.lon = 0.9560483461649691;
    msg.z = 0.545643809958101;
    msg.z_units = 56U;
    msg.speed = 0.17202334023606625;
    msg.speed_units = 189U;
    msg.takeoff_pitch = 0.19923879932256705;
    msg.custom.assign("UMLUFILKEZWBUOAUUVHDARHYGWTEDCQA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Takeoff #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Takeoff msg;
    msg.setTimeStamp(0.9933950554211923);
    msg.setSource(49066U);
    msg.setSourceEntity(63U);
    msg.setDestination(33089U);
    msg.setDestinationEntity(172U);
    msg.lat = 0.6766815663506183;
    msg.lon = 0.43151311616097976;
    msg.z = 0.6536805956107054;
    msg.z_units = 100U;
    msg.speed = 0.11275724919672436;
    msg.speed_units = 99U;
    msg.takeoff_pitch = 0.3222247858757854;
    msg.custom.assign("BTTDWDOWVGWZUZUVFHCPPHXTPXJYRFOSLQMCKVGNWANIDUKGVRNBNLYHGBDVTFWGEMQXPGEFINCJYKWZNGONOYKJNRLFUEIBKDBLZEMDZPGSEMMNWRQOLKUVEBTAACPMYJDSCMAQHKOQWZYRQZULUSKHYQERILFQBUUXMSOONBFAEU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Takeoff #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Takeoff msg;
    msg.setTimeStamp(0.2294565604051615);
    msg.setSource(25622U);
    msg.setSourceEntity(212U);
    msg.setDestination(43205U);
    msg.setDestinationEntity(127U);
    msg.lat = 0.6551644975566674;
    msg.lon = 0.4691342392434632;
    msg.z = 0.4406567832565442;
    msg.z_units = 249U;
    msg.speed = 0.7176620269059467;
    msg.speed_units = 194U;
    msg.takeoff_pitch = 0.5783623793414417;
    msg.custom.assign("UMKWCZGJXAWTQVEHEMKGJYFDPFPPKPWBJQRXAELMFQPMSMXKISCFZINXKTZZSCRFGWWGNPNYJIRTHGVFHTBCHOAYAYRJVOSCEVZJFPXELRTODZUOQAQWDIVBNAQOEAINULDZXFLDRJOMABTYWCGFUCTRDVKGQSHFQGWCR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Takeoff #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Land msg;
    msg.setTimeStamp(0.2675447844077351);
    msg.setSource(12579U);
    msg.setSourceEntity(83U);
    msg.setDestination(56215U);
    msg.setDestinationEntity(3U);
    msg.lat = 0.16124744918256118;
    msg.lon = 0.6710050247436042;
    msg.z = 0.46888015265249827;
    msg.z_units = 224U;
    msg.speed = 0.26457265097300087;
    msg.speed_units = 192U;
    msg.abort_z = 0.5098877243082811;
    msg.bearing = 0.64258899538753;
    msg.glide_slope = 71U;
    msg.glide_slope_alt = 0.9574629163255204;
    msg.custom.assign("OLCFFPRSBVJU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Land #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Land msg;
    msg.setTimeStamp(0.5803330190493792);
    msg.setSource(14116U);
    msg.setSourceEntity(135U);
    msg.setDestination(61349U);
    msg.setDestinationEntity(51U);
    msg.lat = 0.9164269495272533;
    msg.lon = 0.6253425639554399;
    msg.z = 0.38170847171320677;
    msg.z_units = 247U;
    msg.speed = 0.16751967929513878;
    msg.speed_units = 22U;
    msg.abort_z = 0.10403481396636305;
    msg.bearing = 0.8639600156349623;
    msg.glide_slope = 52U;
    msg.glide_slope_alt = 0.5517572597848659;
    msg.custom.assign("OHNBHTUMMZCPMEKNPEXZLBGEWWWSMCHLUEQSTIB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Land #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Land msg;
    msg.setTimeStamp(0.2939393521444533);
    msg.setSource(30173U);
    msg.setSourceEntity(27U);
    msg.setDestination(52605U);
    msg.setDestinationEntity(90U);
    msg.lat = 0.7385882582268747;
    msg.lon = 0.5710352298545538;
    msg.z = 0.2660899636848788;
    msg.z_units = 243U;
    msg.speed = 0.2646407171378137;
    msg.speed_units = 125U;
    msg.abort_z = 0.9226439898199844;
    msg.bearing = 0.45599638845756496;
    msg.glide_slope = 232U;
    msg.glide_slope_alt = 0.7565711845455587;
    msg.custom.assign("YKUXETMMRJDBINUYOTOLEHZNGFFFDXPZTHZKLGBZJAEPVSJHMACBVIYZLSODGILXQFUADWBNJWESYTWVKVJMZDRSHCXWLWEXNIQPGRKGMSMNQYPICBCPORINSRGLXMSVSDUZWCNCCHXAUHDRBWFCAOJNOYFJKDLNZHQBPTQCTZWEAKOP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Land #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AutonomousSection msg;
    msg.setTimeStamp(0.0379277367505223);
    msg.setSource(27168U);
    msg.setSourceEntity(229U);
    msg.setDestination(7198U);
    msg.setDestinationEntity(42U);
    msg.lat = 0.18965172779368922;
    msg.lon = 0.33789506646190215;
    msg.speed = 0.516718557373753;
    msg.speed_units = 10U;
    msg.limits = 94U;
    msg.max_depth = 0.10928670835203347;
    msg.min_alt = 0.23790082897610954;
    msg.time_limit = 0.2591794418995145;
    msg.controller.assign("EINESHOZMFWVUNQRFKCIMJPRLDVQAETJYGGEUECKWCZLFRQLDSPQTNFKSIKFSLFVGTHDATKYYYLPFFQTAAEUVWSBIAKYZXFPCDPJSJJMFVVHEDDHAKQIDBVSKQWBZUGGGZRLVBOXHNXYSXCHNZBNQRISZGDXWHRZHYDRTPXEWRYOYUUBOLBUCPSLPBDMIYNJCMGLBAMNCZAXATROPJQZGVMOTUMOJKLEQWIXMTXCPNIMOWCHJKTWJIX");
    msg.custom.assign("MKRBRXKTBTZERVVOPAISKUBQLYIVOEJRFBDQRNZNTXGXJXPJMCTDYE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AutonomousSection #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AutonomousSection msg;
    msg.setTimeStamp(0.28420477895325447);
    msg.setSource(18366U);
    msg.setSourceEntity(103U);
    msg.setDestination(63762U);
    msg.setDestinationEntity(67U);
    msg.lat = 0.060967565705081106;
    msg.lon = 0.5299417118224168;
    msg.speed = 0.1203188533675622;
    msg.speed_units = 134U;
    msg.limits = 134U;
    msg.max_depth = 0.008132321577943968;
    msg.min_alt = 0.9463458473858029;
    msg.time_limit = 0.0886323353951215;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.995915538730112;
    tmp_msg_0.lon = 0.8091402816858685;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("DUOZDHRMCOMYLNLREAPVTQWSEATWNQDXBPXFYXOYPYBWFHUHISJGOJAMXKTHGSATYMFUYMNTUKRVOTCVNVWKCFGPEGSBGJFGBKZPNHRXJEUBQBIZLSHYIZUIACIRRCZYNHFYOIEOBKQJGVILESMZMEQVNHZMGNPUCGWW");
    msg.custom.assign("ZAPRDHAUPSFLLHIPEBNNLWXOTOHRAAVBQLYEUZRKRXOERXGIBOSNZJYGZPIXNTIYJTCFTNEJEZUXAYOKCZTSRVMRVKLNCYWRVFPUDKMVMLMSIBORWKOQXAQJSSCHLOJRYNYSTLFAGOGZEBPNXKCMMSVCFHHCOUWWTSYIKGLMPBNFDWJEZDUETQBXQPMWJDVUFKFZGVQMEEGFCGICSQIQWHTHHIZJBMAYDVTCLABPGXQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AutonomousSection #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AutonomousSection msg;
    msg.setTimeStamp(0.5349256692587661);
    msg.setSource(44581U);
    msg.setSourceEntity(188U);
    msg.setDestination(52447U);
    msg.setDestinationEntity(113U);
    msg.lat = 0.6645392521528193;
    msg.lon = 0.846544831688545;
    msg.speed = 0.656722255361395;
    msg.speed_units = 223U;
    msg.limits = 212U;
    msg.max_depth = 0.6167955994225657;
    msg.min_alt = 0.335067380365059;
    msg.time_limit = 0.78006721063193;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.08589405012362616;
    tmp_msg_0.lon = 0.7208336540107467;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("VWMBVSKEXOKOCTGCAAEQUFBREELKGXCJLXHQLCTHFALFYLFNODL");
    msg.custom.assign("EASXEMCDCNCDGBTEFQERJHENJNDFVJOACWTPQZFEGEJEXLWHYRBYSLUPMZNRDRMKMXTOYUKFVVJLQOZHWBYPHOUVJWKMXUQOSGYSUNULPGWOZZOPJMHQCNAGGAQBLCTKNRIZWSDDVDQDYINCZNSKNXTAGMLVULKGS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AutonomousSection #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowPoint msg;
    msg.setTimeStamp(0.30063192748722134);
    msg.setSource(11937U);
    msg.setSourceEntity(60U);
    msg.setDestination(40785U);
    msg.setDestinationEntity(214U);
    msg.target.assign("CCUGWOABIFCNWEBKKQJIDPCBYMNKTXILVFAQRVDULGCRBLEOUNWWOXVDDZYYIIAGECOPJRAO");
    msg.max_speed = 0.6898591286652771;
    msg.speed_units = 40U;
    msg.lat = 0.3030546113959576;
    msg.lon = 0.14154135311572702;
    msg.z = 0.9965436964947708;
    msg.z_units = 127U;
    msg.custom.assign("PQHITOIJJJCROGGRBMRSIQPZULSUWLLJRYIYUKVAPVFZZODDYESFNTMIQZLPBGAKBHIPEXWZDWXNYLQBTNWVMGTGGDC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowPoint #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowPoint msg;
    msg.setTimeStamp(0.9434736631953825);
    msg.setSource(52086U);
    msg.setSourceEntity(151U);
    msg.setDestination(17880U);
    msg.setDestinationEntity(125U);
    msg.target.assign("WPWEYCLRULXKEXKPUKDCPMLEWGTXCFTYDBBGIUPINQIAKDUAQJHHWFJRLVMAJVNPYJGXTGNDSEVYVBWDZMBWYPZ");
    msg.max_speed = 0.3991025643063012;
    msg.speed_units = 189U;
    msg.lat = 0.957380374423936;
    msg.lon = 0.04351859515572132;
    msg.z = 0.9781627190376413;
    msg.z_units = 220U;
    msg.custom.assign("IFVKNRKNPLUZXLQPCTMMETTPGFDNBWRPRNJJTPQLDCGIJCANWWEFAEVONFOMMZVVVSULGHQKYNGHOMXQDCMFAZLHMDVUJYHHRHKEOISAYEIQZVFPHBZXWYRBJGWAHSMPSYJXRHMKUAUKIEWTSDNSGBOEDXTCUNYZBRTURYXWYQRPQCEIBOKDAWOFFRXGFCS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowPoint #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowPoint msg;
    msg.setTimeStamp(0.7150163350389972);
    msg.setSource(57696U);
    msg.setSourceEntity(110U);
    msg.setDestination(17129U);
    msg.setDestinationEntity(200U);
    msg.target.assign("PICNHBQKWSCABJMUEUPHJCBGZVRKHQIPUAXGRSPGKSHBNHAYLGTWKMMEZFYLFLTNQGQDOQVEAJCIQJNXOIYSKLILTMMTBYUUZTKNVSCWZXICFUXZSJACORR");
    msg.max_speed = 0.20212941260515238;
    msg.speed_units = 202U;
    msg.lat = 0.3843694184750388;
    msg.lon = 0.911732505825959;
    msg.z = 0.21993520986875292;
    msg.z_units = 68U;
    msg.custom.assign("TXPGEWURCPOHULLHVSXFEIJNMAQRYGXDCWNRWFGMPEVMALZIOAKDISJNDQINISMNXTVXVQWAHJYCVHCOWYRMZXWZJPIJAGRTGSTVKUHFQEDPDQALLCBIXBAKWNMGFLVZPGUJFCYPPAVLOAYUQOTTNKPRONZTRBDOVCZFXBQSMBRESUHSYKZDLJVUHYHMCJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowPoint #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Alignment msg;
    msg.setTimeStamp(0.2130062810291653);
    msg.setSource(17350U);
    msg.setSourceEntity(212U);
    msg.setDestination(58091U);
    msg.setDestinationEntity(172U);
    msg.timeout = 42450U;
    msg.lat = 0.6995187123848485;
    msg.lon = 0.07606493679346538;
    msg.speed = 0.131410536741549;
    msg.speed_units = 176U;
    msg.custom.assign("TFQJDCSKTSBCMVKBEDMRNUKNZSLIBVOA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Alignment #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Alignment msg;
    msg.setTimeStamp(0.1925993907431124);
    msg.setSource(58853U);
    msg.setSourceEntity(221U);
    msg.setDestination(46055U);
    msg.setDestinationEntity(108U);
    msg.timeout = 3671U;
    msg.lat = 0.563850235099098;
    msg.lon = 0.28075100323459434;
    msg.speed = 0.15892007465007352;
    msg.speed_units = 141U;
    msg.custom.assign("WBLRSIVGXFIZQYJAPJHOZFMNJVKUFYIHQCAVURYQJQWKHDUPWPOEZLQPSAFVSEEKIKQAFGENBUKYXNKATMBGHRPNWBWOIHEFYZU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Alignment #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Alignment msg;
    msg.setTimeStamp(0.2757535118630977);
    msg.setSource(59293U);
    msg.setSourceEntity(106U);
    msg.setDestination(1312U);
    msg.setDestinationEntity(109U);
    msg.timeout = 1097U;
    msg.lat = 0.6065733495908537;
    msg.lon = 0.8761237649082132;
    msg.speed = 0.9603171393971518;
    msg.speed_units = 80U;
    msg.custom.assign("ZEVIVYJPVRHGFJPSGYKNPDDIFZLGFPUJTETUVUGSLZZKWQYHXWEUMZLSQARPCROOFYZAFUBTWVFHBOKPRRNIENOOIAWSOTQHRETKELIGNAWLVHXTAMSQJWRPMTICBLDKJJWSQXQCOPXGKDHWNGLJDCYGLRZYRMYBHWYTQGONB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Alignment #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StationKeepingExtended msg;
    msg.setTimeStamp(0.09004166615115017);
    msg.setSource(34285U);
    msg.setSourceEntity(93U);
    msg.setDestination(20684U);
    msg.setDestinationEntity(61U);
    msg.lat = 0.7802244703960474;
    msg.lon = 0.8757521165134942;
    msg.z = 0.7486545711655215;
    msg.z_units = 253U;
    msg.radius = 0.17957456350798484;
    msg.duration = 52313U;
    msg.speed = 0.40842173587634945;
    msg.speed_units = 234U;
    msg.popup_period = 42680U;
    msg.popup_duration = 23111U;
    msg.flags = 49U;
    msg.custom.assign("AXWKWPUUJCHUTFSITVLNRIXOUKQKGBZMWMEBHYHBCVIMMIJRJPGCJXMVTSODQSOYZPXZBYDUDOYHVTQEJJVTMPSABICAYGEMXWNYAYOZKWDAPCHFRXGSVRXYWSTQJELWYPUZQFTQXPTEFFVNKFLPIRCOITLZZEPRBGSHNVBNHBDPUUSOLKDNHLQGNEFNCVBVWISEIZU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StationKeepingExtended #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StationKeepingExtended msg;
    msg.setTimeStamp(0.3303469906366475);
    msg.setSource(60872U);
    msg.setSourceEntity(213U);
    msg.setDestination(15807U);
    msg.setDestinationEntity(159U);
    msg.lat = 0.8212501184441046;
    msg.lon = 0.021424322461305656;
    msg.z = 0.12980295226638916;
    msg.z_units = 174U;
    msg.radius = 0.6789482502740014;
    msg.duration = 33948U;
    msg.speed = 0.8051381800591992;
    msg.speed_units = 106U;
    msg.popup_period = 21502U;
    msg.popup_duration = 56662U;
    msg.flags = 61U;
    msg.custom.assign("GQVGRMOPYYVJDIMSTGMGUPWOJBZQA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StationKeepingExtended #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StationKeepingExtended msg;
    msg.setTimeStamp(0.6747610346142598);
    msg.setSource(4730U);
    msg.setSourceEntity(59U);
    msg.setDestination(63035U);
    msg.setDestinationEntity(99U);
    msg.lat = 0.20155390932391293;
    msg.lon = 0.6594308323895576;
    msg.z = 0.22626730260823313;
    msg.z_units = 88U;
    msg.radius = 0.2225804522427387;
    msg.duration = 51060U;
    msg.speed = 0.304978527023806;
    msg.speed_units = 152U;
    msg.popup_period = 26209U;
    msg.popup_duration = 5044U;
    msg.flags = 193U;
    msg.custom.assign("BNKYNDKBUUTJOQTZKXVYEIMICFHQBKQEHVTAEISRDMQWJEAEAKLJJFFSOTWDAXHVCWLXWZPGUKYADOWUUDLHVJHMBSXQLGOAOLILPYFADTGZQHUNAGOSBYOBNDESOSXRIRDRCWVKBRZJLTJZHFEFZNZGUNYCFPNZOMMFPKJIDGPMLMRPRFGTECZSB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StationKeepingExtended #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ManeuverDone msg;
    msg.setTimeStamp(0.9470212369962754);
    msg.setSource(36028U);
    msg.setSourceEntity(85U);
    msg.setDestination(32343U);
    msg.setDestinationEntity(95U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ManeuverDone #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ManeuverDone msg;
    msg.setTimeStamp(0.2744359859092619);
    msg.setSource(42497U);
    msg.setSourceEntity(86U);
    msg.setDestination(50214U);
    msg.setDestinationEntity(245U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ManeuverDone #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ManeuverDone msg;
    msg.setTimeStamp(0.12522475444340864);
    msg.setSource(9310U);
    msg.setSourceEntity(150U);
    msg.setDestination(28767U);
    msg.setDestinationEntity(27U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ManeuverDone #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Magnetometer msg;
    msg.setTimeStamp(0.6223193611888964);
    msg.setSource(26U);
    msg.setSourceEntity(26U);
    msg.setDestination(45367U);
    msg.setDestinationEntity(112U);
    msg.timeout = 32478U;
    msg.lat = 0.6764061787562773;
    msg.lon = 0.15727194753214135;
    msg.z = 0.49271837358824644;
    msg.z_units = 90U;
    msg.speed = 0.858568831567931;
    msg.speed_units = 225U;
    msg.bearing = 0.2049926864567314;
    msg.width = 0.14664978814819596;
    msg.direction = 123U;
    msg.custom.assign("GDGQGJTYBYPQXPAUEORUMSNEZRDSZIILNDIXGAJBVMHZJLVCCHTRPNIOWTILFFBAYLFPZPLKYGCDDUKCKTXQCEIUPBSPSKOJWMOHXGZOEEUDMLCNJDOUMAWKHKAQYIFPXRKEHGSFVWRKJABCTTOZGSQYRFHNRUUWDTHQILUWGLMJAEDOXSIXTKBWIQSVXZFZSBMMHCKZDYQJYEVBZATHFVVABOWLNFOJMLXRSQBNAVQVUYRRPJNWHE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Magnetometer #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Magnetometer msg;
    msg.setTimeStamp(0.21949284586317253);
    msg.setSource(34761U);
    msg.setSourceEntity(112U);
    msg.setDestination(14327U);
    msg.setDestinationEntity(36U);
    msg.timeout = 28733U;
    msg.lat = 0.0008848855206132766;
    msg.lon = 0.5316618699618633;
    msg.z = 0.37458038845099517;
    msg.z_units = 253U;
    msg.speed = 0.63938717551686;
    msg.speed_units = 19U;
    msg.bearing = 0.1878056284270324;
    msg.width = 0.48882231334475945;
    msg.direction = 9U;
    msg.custom.assign("EGXQSUVJDICRLMFPYAHTBVQHSBCDWEILWZRIFXGWUKPGRQGBACWPZKGAZHUFFEGKMUOQIDXSMRVQVQZSAVEEZCNONBIJNTLHLSLKJTMDDYIVJFONKHRBJFXVLAVBSZRTWKPGCTUDHLMOUOYPLAPITIHZNVGYROMHEYAUWOBDPXHJUEJWSMTZNIXDEUNTCTBMNOWTLONXSDKBKQFPCFQLQAXOECJEWXAYUGRFWINA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Magnetometer #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Magnetometer msg;
    msg.setTimeStamp(0.4348466204918018);
    msg.setSource(46872U);
    msg.setSourceEntity(237U);
    msg.setDestination(23853U);
    msg.setDestinationEntity(246U);
    msg.timeout = 29716U;
    msg.lat = 0.7987683688673106;
    msg.lon = 0.5888415264442727;
    msg.z = 0.833470549699692;
    msg.z_units = 89U;
    msg.speed = 0.19752048675090805;
    msg.speed_units = 148U;
    msg.bearing = 0.9811281885215796;
    msg.width = 0.5964209896940702;
    msg.direction = 22U;
    msg.custom.assign("RCYMFWGFGWUVTCIQYPYAUBDPBAWPWVHZMDCXBPZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Magnetometer #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleState msg;
    msg.setTimeStamp(0.4525187928652966);
    msg.setSource(40152U);
    msg.setSourceEntity(186U);
    msg.setDestination(41008U);
    msg.setDestinationEntity(127U);
    msg.op_mode = 118U;
    msg.error_count = 113U;
    msg.error_ents.assign("SRAXEDECJAFXBQODCRRMISNRLUODOBAQZDXKJOPMAJZIGNVJTNCQBAPOVISJYFBHSCPUZALCOVKFXYIALSEDZWCCTOBQUEDHURJWUHIKHUYGIOKJEFQKLHLTBHLQXNLXQAPWWUCMDGMKZWBMEDWTBWUPNZNNWGBMRNMMPQSHTDIVFGPFTYEKSFSSTVTKRZLQLRBVLCEWXXVVHFOYEGAPMCZTRWGM");
    msg.maneuver_type = 17670U;
    msg.maneuver_stime = 0.9926935510649116;
    msg.maneuver_eta = 31445U;
    msg.control_loops = 2596632934U;
    msg.flags = 159U;
    msg.last_error.assign("ZVWMAXBLKLZIIDAQQLBLUOFPZCDTLJGLYCYBFDEWJSDSNJJUEVDCBCCYRFPAKJRQBNIROGJLVABTFUBMWGUPHKNVMETFMRE");
    msg.last_error_time = 0.9755050408961957;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleState msg;
    msg.setTimeStamp(0.6263295780184757);
    msg.setSource(52573U);
    msg.setSourceEntity(244U);
    msg.setDestination(13914U);
    msg.setDestinationEntity(213U);
    msg.op_mode = 217U;
    msg.error_count = 99U;
    msg.error_ents.assign("ECSJNWLBZWZICOOETYRATNRTHQQKUOZJEIPJAXFIZQPCLAZQYVJZINTUPVMXCRNTQMDCFQQZLZHSTOZXAGBKYUALUEUJPPAKBKVJMCWUEDVIJRNVGLTBGYUTSXLIDWMBEQYNKPMFGRBQGEFFVLDYNAHRIJXWAGWLINMB");
    msg.maneuver_type = 18383U;
    msg.maneuver_stime = 0.5385592807771478;
    msg.maneuver_eta = 33171U;
    msg.control_loops = 2376387977U;
    msg.flags = 231U;
    msg.last_error.assign("EXITTQAXIYEXGESXAVGQUHHYOLVHQDUBUWWDLKJVIUZOEYWDYSNNSFJXDDESTWZCRQWVURJPLCSKAGQKNRWIWKGAOKKJZMOCEMZZATKIFEPFXVSSCKMHABJMLNUENQGCBVUTRXLYZS");
    msg.last_error_time = 0.6444161995455263;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleState msg;
    msg.setTimeStamp(0.08303182093925687);
    msg.setSource(45392U);
    msg.setSourceEntity(215U);
    msg.setDestination(37891U);
    msg.setDestinationEntity(185U);
    msg.op_mode = 165U;
    msg.error_count = 114U;
    msg.error_ents.assign("ABAWPURFBCXAQRRHKTXSTXWDFQGBQIMFZUAOJEITGFOWWYWJCBMIKQOKUDNDZEPTCKXYVMSJHNVDMPCZVGNAQHXFOVJAFRIGUPCXLNOJGGAZYITSHGFUSXJVBVBYSMQNBAUPILJCUYUXHPDYOSZPVCKAIUEFJSKGWBUFKLOPLEEYYWFLQNOHMZDJZTRLEMEVLNIGNRPMSZQNBWTTYXHHPWL");
    msg.maneuver_type = 2681U;
    msg.maneuver_stime = 0.8346195871984824;
    msg.maneuver_eta = 18938U;
    msg.control_loops = 2275612280U;
    msg.flags = 1U;
    msg.last_error.assign("BKJDWNJCHAGFUOIILFEAZFUCKGLIGHDOBXPADSNSHNAYPEGCCULMTAILVRCBXAKXSSKPNQDXJFIHWYTBECGGKMDLJRBIROJHZLDAYCQOMDUJQXNTGFSNVSITRGPLPZDLZQVEXSFTWUWVODRZKVYKTUZFMHYQMMYOYRLMIBFTASRZNEJEEBNPIFHQACTHEKCQEZPUTJNOSJVYUXPWY");
    msg.last_error_time = 0.8490416117458336;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleCommand msg;
    msg.setTimeStamp(0.23686274198156432);
    msg.setSource(30369U);
    msg.setSourceEntity(223U);
    msg.setDestination(9886U);
    msg.setDestinationEntity(42U);
    msg.type = 4U;
    msg.request_id = 20636U;
    msg.command = 120U;
    IMC::Goto tmp_msg_0;
    tmp_msg_0.timeout = 35130U;
    tmp_msg_0.lat = 0.5069411462635115;
    tmp_msg_0.lon = 0.16622867909300154;
    tmp_msg_0.z = 0.36602316091693143;
    tmp_msg_0.z_units = 181U;
    tmp_msg_0.speed = 0.7965573310772268;
    tmp_msg_0.speed_units = 192U;
    tmp_msg_0.roll = 0.5781309148797934;
    tmp_msg_0.pitch = 0.11529865414987694;
    tmp_msg_0.yaw = 0.019066016265359753;
    tmp_msg_0.custom.assign("AINVNQGVDXWXLEDGLTIUMKVDFCICPMRQBIQPEPTSPLZWFHDVLYBCIXAARDZZEKVSOLVMVCNZJFVWAIGODYNIYJHTRCUYGDKHRLFQLEXFKTUCUZUZMDFCCETWKKSRAQMSPBQMKIYTGMVBSSEQJMMNBHREBBHXNGJJIZXEWWYAFTLGWSWSNUK");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 62571U;
    msg.info.assign("KEFQRFWVYKLSEZTRXMYCXZIJZKXXJEEEMCRBYWHTLEHWDBHWNRTCMZISALDOVGHINHBMICPWIFSAWANBSNOVVFQEFBTMJNUAJKBPZTQSXFABOVXDYJDPYSLNTCGLUSCGOUNTAPKGVWKAUYJZPISVJUFRKRBHTNEZOVHWXVGOUAGCOZLRBFPGDMQQUFVXKMTXPURNCUQLTJZWADOIDELOWQCQIMQICJGKAEDRLOMDKMNQHH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleCommand #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleCommand msg;
    msg.setTimeStamp(0.9152090180695799);
    msg.setSource(60078U);
    msg.setSourceEntity(39U);
    msg.setDestination(20825U);
    msg.setDestinationEntity(178U);
    msg.type = 9U;
    msg.request_id = 16937U;
    msg.command = 83U;
    IMC::PopUp tmp_msg_0;
    tmp_msg_0.timeout = 8595U;
    tmp_msg_0.lat = 0.44632460093752235;
    tmp_msg_0.lon = 0.679308562299408;
    tmp_msg_0.z = 0.8519014544674319;
    tmp_msg_0.z_units = 245U;
    tmp_msg_0.speed = 0.16689621278883926;
    tmp_msg_0.speed_units = 227U;
    tmp_msg_0.duration = 52005U;
    tmp_msg_0.radius = 0.03358529201771143;
    tmp_msg_0.flags = 244U;
    tmp_msg_0.custom.assign("WVJNIPOJPCTCHEPIGPVAAPMUOCHLAKOSKFJNRLHQYPBXYZXZQCYYMTUSGCDRDQCMBHHKDMQWZCZBAVVHLKZVAIRRNBSTLUWLOTYIYJUNBNNUUOLMENSGZEUQSVRKIEFPHMEFALWKUTKYFKDCKFGXVBXNXAXNDLRSLOSLKOIPEQXRWMGTXFGDDRYWRBOOTFQPMJPYCJDQSGZF");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 10752U;
    msg.info.assign("KADOOUPQVLWLAXOHSGBEMGHXSCLWIQRCMRZIFDRQZBCKMULXJEALIOVCPTCFCZJHNUPSUXHBNFWZSBCAJTNBGGOMYZPRIWOFUEYRHKEHPXKBJEVNFEGXTXDAASQLXNTEKSTLTNVSWRMLIQOWSVQZOUQVSUKMDYGWHUDGJRNPMFIAHNDPIDZCPFATRYIHWXCXARJKVVBPKYMEBWNPJZMYSGZFNBWKUQIOJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleCommand #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleCommand msg;
    msg.setTimeStamp(0.9187062848429771);
    msg.setSource(14319U);
    msg.setSourceEntity(20U);
    msg.setDestination(30618U);
    msg.setDestinationEntity(76U);
    msg.type = 4U;
    msg.request_id = 17391U;
    msg.command = 22U;
    IMC::FollowPath tmp_msg_0;
    tmp_msg_0.timeout = 3222U;
    tmp_msg_0.lat = 0.05264582615774327;
    tmp_msg_0.lon = 0.5929943518878016;
    tmp_msg_0.z = 0.16214432202483087;
    tmp_msg_0.z_units = 212U;
    tmp_msg_0.speed = 0.9382575859861929;
    tmp_msg_0.speed_units = 253U;
    IMC::PathPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.6166104847140901;
    tmp_tmp_msg_0_0.y = 0.3007391531415219;
    tmp_tmp_msg_0_0.z = 0.4128919533154505;
    tmp_msg_0.points.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("TVAACWWMKLHXJZAAXWZCSZIYWZLULXQCPECAEKIOBURYTQSMMEVKSMNDFFWTNMFNBJEMSPFVFPWPXWKNQNTPTZXRNTIJGAECXWVRYORDBVYHNVHDWGIGPAKRCRTIQKJODFXBGILKSJNHHQIBOQERLXBEWALOFCHKGXHNZLYRJMGCFAUUDVCQTPGOBJVYOZYJEKLDHFCLUUIDQDUESOGBNRYSZTUILTSO");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 9822U;
    msg.info.assign("AULZYYAOSJPBOMPMLCVPQOUZNOEYRXRADIGPS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleCommand #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MonitorEntityState msg;
    msg.setTimeStamp(0.6913882494685494);
    msg.setSource(18454U);
    msg.setSourceEntity(123U);
    msg.setDestination(49567U);
    msg.setDestinationEntity(51U);
    msg.command = 30U;
    msg.entities.assign("TSPFORANXDBOYTRIWBFRZTJVQGXOQEGLHUJRJREEDLUHBSMMHQRISUEDKVWFONRIIUVMASAMEAOLSKNVCWSQQCHTSKVPANGTEVCOFAYPMUDKBGUFQXMEOCZLTHJDVJGDSXIOQZTBTJIVACZWGDACZXJNI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MonitorEntityState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MonitorEntityState msg;
    msg.setTimeStamp(0.4277742063668163);
    msg.setSource(20105U);
    msg.setSourceEntity(13U);
    msg.setDestination(56398U);
    msg.setDestinationEntity(226U);
    msg.command = 157U;
    msg.entities.assign("LWCWDLGIHKTQWRUUGSXXEFZVIVWXUKKCJOBCWVKJEASPMMDYILMXARFMKCLNCRTIYSSNVNPOFXPIQABAGPDKPAFDAUBLDEQISTKEBRABMTFHZVAJYUYOEPAVSXCZLIQJWMDBNIGUVTHNHRHXGFQJDXFNYPEUOBTSKOSZYMVRNGWSJEJWLWHHGTXDYLJVLJFLDRZKPCBCRIMKNDMTBZGGHZHYJQH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MonitorEntityState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MonitorEntityState msg;
    msg.setTimeStamp(0.49298822380222895);
    msg.setSource(331U);
    msg.setSourceEntity(102U);
    msg.setDestination(33776U);
    msg.setDestinationEntity(195U);
    msg.command = 13U;
    msg.entities.assign("IOJCDAVILDXKMWBNZPCCATPUOITIWSUZUEMWOWLWKVJMDEZAQVPHZPPRHSQYNVNWVLUKZNXGFRTDGUPNNCXDHSBNRGROGTMMLOFJFYUEYQEEJIHJFHRATMFGPJGKEWHMVIWUVQJNHXAPNUGIKEKOLORCLQXAADK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MonitorEntityState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityMonitoringState msg;
    msg.setTimeStamp(0.7353741735822511);
    msg.setSource(21710U);
    msg.setSourceEntity(205U);
    msg.setDestination(49688U);
    msg.setDestinationEntity(68U);
    msg.mcount = 194U;
    msg.mnames.assign("KKSXZZPADEAIHUUHLZAXINLVLUOQTCUPHXJBPRDQAYWKFPOYUAZNOHRJNTSQXTRKMRNJFKMOCYKLWDXSZQASLEFBKGDQCMLCPNTEPPIMHQYBJCBNVVJIVMOWFKMIHFNWHTISQWOESGSUOHJQJDEXDYWXHRDZDWWNYTHNDVPGGEUVMKYRLIUSLJBCCVOFYZETTRRSFKAOJMBAZVY");
    msg.ecount = 156U;
    msg.enames.assign("YHROFQOMBGQSXBGLRKNVAIHUKBJADDPWVLYIKT");
    msg.ccount = 132U;
    msg.cnames.assign("EKSFVWKANIJQVWZUZWDPRVHZYRPWQGNHFOLMAPXTKXGGUJSGUFLHAULCXTFZLSQPEZKHWYKEKTDJWVHTVIYNJDVFBR");
    msg.last_error.assign("FXHJLADOXYAPGEHLATIFBUSSIJOIWODCGBAQKEEFVZCTIGARYDWDUZRONVQRFTSWWOJJLBKKTKPPIDPZEADBITJOUSRWPWRLITJCUCZKFELZJNCXTCFMHAKSVELMCBVHXFDKEPYOFPPSDFWXMIQLQQBVUMKNEQKRUHGUNHM");
    msg.last_error_time = 0.7850388834219277;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityMonitoringState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityMonitoringState msg;
    msg.setTimeStamp(0.28408089578934925);
    msg.setSource(52667U);
    msg.setSourceEntity(125U);
    msg.setDestination(8870U);
    msg.setDestinationEntity(55U);
    msg.mcount = 13U;
    msg.mnames.assign("DMWXBBUDMRQPZTPDYSFTVUJZRGEWOSPAFBSFMNKOXIIXNAOFQTMXVGZKHIQUFXEENSQEWMPHJYCL");
    msg.ecount = 197U;
    msg.enames.assign("XNMAWCOGFXPTFBUDUICIIHTHSAWIRKXAPHIKBAJSMKCIYFTNZHIYTMDAZUPWOXQXJIMLNVBHKQFYZ");
    msg.ccount = 174U;
    msg.cnames.assign("WAZUXYTZDGPSGOOZZ");
    msg.last_error.assign("RNEGUMHUWWRDAKJGSGFKNLFMOTYRSX");
    msg.last_error_time = 0.41492630219231263;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityMonitoringState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityMonitoringState msg;
    msg.setTimeStamp(0.04339591731085901);
    msg.setSource(17632U);
    msg.setSourceEntity(198U);
    msg.setDestination(47023U);
    msg.setDestinationEntity(213U);
    msg.mcount = 116U;
    msg.mnames.assign("KFRXRSFANGYOULEODSMJUOUWVDWHMKFKTBHGESPQBMXYEFIJXWBXDRBZOOMGQNDGJDCFDPFXVJZZLAVLFTQQOITFNDVETBYPLWHYYHLZRVFIHTXCMRZDGJRAVXLCCSDGCQCKAACXKIAKMLEVOYQMVPMEQSPKHHNOEETGZANTUURPBZJIKTECCBEUUYHMWYWWRVXPBHAPSJQYNIBVLBIYQFIGAAUXGOIGSJNTMPIOSJDCWHQUZPNKNWRK");
    msg.ecount = 12U;
    msg.enames.assign("LPKRDUEZFVSKTPDIHYWCSAOTWONFSTCQCZXGXTENOHUCOACWKGTXVYETJKMHIZYIBOOVISKHLALYPMASCHGWAJQPEXQPKBOOEQKMWYENSQTXZKFUJHJMTIDHMNLBFSMAZRPJXRXRJWIUSNNMGWBDILAVJPBDYZTQBBVGKDAFRYKMELFDMHHFJFBSDR");
    msg.ccount = 26U;
    msg.cnames.assign("ULCYANPDHYNFTGYIAOSNZADHNHDLCHZUMRIFRVKXFVWDBKSWQGBQBMXLTNVZMLZIS");
    msg.last_error.assign("SQDHZXTJONROG");
    msg.last_error_time = 0.5263311909104776;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityMonitoringState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::OperationalLimits msg;
    msg.setTimeStamp(0.6383442992297423);
    msg.setSource(39559U);
    msg.setSourceEntity(122U);
    msg.setDestination(12062U);
    msg.setDestinationEntity(109U);
    msg.mask = 35U;
    msg.max_depth = 0.3852845788565036;
    msg.min_altitude = 0.5842366859859347;
    msg.max_altitude = 0.4690186919892094;
    msg.min_speed = 0.6992830899403548;
    msg.max_speed = 0.4850203594692395;
    msg.max_vrate = 0.44246553971354086;
    msg.lat = 0.5838149924921884;
    msg.lon = 0.4720630657025342;
    msg.orientation = 0.9789906095042977;
    msg.width = 0.3864753044584237;
    msg.length = 0.8321633914493417;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("OperationalLimits #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::OperationalLimits msg;
    msg.setTimeStamp(0.6696231493111083);
    msg.setSource(10615U);
    msg.setSourceEntity(112U);
    msg.setDestination(26227U);
    msg.setDestinationEntity(92U);
    msg.mask = 47U;
    msg.max_depth = 0.8809820604547949;
    msg.min_altitude = 0.5319387176891551;
    msg.max_altitude = 0.5997288288275915;
    msg.min_speed = 0.48459499989067756;
    msg.max_speed = 0.43208517832501603;
    msg.max_vrate = 0.8645102795230521;
    msg.lat = 0.18867270144848336;
    msg.lon = 0.6876736768169467;
    msg.orientation = 0.9853530207986233;
    msg.width = 0.8870522206516394;
    msg.length = 0.72186926115587;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("OperationalLimits #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::OperationalLimits msg;
    msg.setTimeStamp(0.38246370783069084);
    msg.setSource(35991U);
    msg.setSourceEntity(51U);
    msg.setDestination(59728U);
    msg.setDestinationEntity(76U);
    msg.mask = 14U;
    msg.max_depth = 0.0072376108310324705;
    msg.min_altitude = 0.980942898283048;
    msg.max_altitude = 0.12435664345417652;
    msg.min_speed = 0.5509148643301855;
    msg.max_speed = 0.5793827614478961;
    msg.max_vrate = 0.5174373109235731;
    msg.lat = 0.5941440457002489;
    msg.lon = 0.30602514339940967;
    msg.orientation = 0.8840223792935509;
    msg.width = 0.6657636840922678;
    msg.length = 0.2919829141711465;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("OperationalLimits #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetOperationalLimits msg;
    msg.setTimeStamp(0.12180452814768183);
    msg.setSource(60606U);
    msg.setSourceEntity(164U);
    msg.setDestination(26636U);
    msg.setDestinationEntity(194U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetOperationalLimits #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetOperationalLimits msg;
    msg.setTimeStamp(0.18738544225294196);
    msg.setSource(39234U);
    msg.setSourceEntity(171U);
    msg.setDestination(13473U);
    msg.setDestinationEntity(55U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetOperationalLimits #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetOperationalLimits msg;
    msg.setTimeStamp(0.732331742736093);
    msg.setSource(9312U);
    msg.setSourceEntity(154U);
    msg.setDestination(28838U);
    msg.setDestinationEntity(109U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetOperationalLimits #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Calibration msg;
    msg.setTimeStamp(0.8098248198505198);
    msg.setSource(50029U);
    msg.setSourceEntity(167U);
    msg.setDestination(15906U);
    msg.setDestinationEntity(215U);
    msg.duration = 2194U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Calibration #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Calibration msg;
    msg.setTimeStamp(0.15959063912711802);
    msg.setSource(57080U);
    msg.setSourceEntity(231U);
    msg.setDestination(38338U);
    msg.setDestinationEntity(136U);
    msg.duration = 16359U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Calibration #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Calibration msg;
    msg.setTimeStamp(0.8853091254949301);
    msg.setSource(39199U);
    msg.setSourceEntity(114U);
    msg.setDestination(13712U);
    msg.setDestinationEntity(110U);
    msg.duration = 56445U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Calibration #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlLoops msg;
    msg.setTimeStamp(0.6981271595887524);
    msg.setSource(1183U);
    msg.setSourceEntity(185U);
    msg.setDestination(9613U);
    msg.setDestinationEntity(41U);
    msg.enable = 23U;
    msg.mask = 2527311122U;
    msg.scope_ref = 831325615U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlLoops #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlLoops msg;
    msg.setTimeStamp(0.49991399733864283);
    msg.setSource(61795U);
    msg.setSourceEntity(172U);
    msg.setDestination(60728U);
    msg.setDestinationEntity(232U);
    msg.enable = 26U;
    msg.mask = 1867894823U;
    msg.scope_ref = 212452083U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlLoops #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlLoops msg;
    msg.setTimeStamp(0.5510677535936682);
    msg.setSource(30537U);
    msg.setSourceEntity(149U);
    msg.setDestination(22519U);
    msg.setDestinationEntity(42U);
    msg.enable = 229U;
    msg.mask = 1001690422U;
    msg.scope_ref = 2047283294U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlLoops #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleMedium msg;
    msg.setTimeStamp(0.5153667791039751);
    msg.setSource(10908U);
    msg.setSourceEntity(239U);
    msg.setDestination(43223U);
    msg.setDestinationEntity(69U);
    msg.medium = 154U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleMedium #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleMedium msg;
    msg.setTimeStamp(0.4596268526775553);
    msg.setSource(15449U);
    msg.setSourceEntity(42U);
    msg.setDestination(45554U);
    msg.setDestinationEntity(20U);
    msg.medium = 220U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleMedium #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleMedium msg;
    msg.setTimeStamp(0.5071243824223578);
    msg.setSource(61663U);
    msg.setSourceEntity(76U);
    msg.setDestination(57162U);
    msg.setDestinationEntity(168U);
    msg.medium = 14U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleMedium #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Collision msg;
    msg.setTimeStamp(0.27650866749548364);
    msg.setSource(61008U);
    msg.setSourceEntity(97U);
    msg.setDestination(42378U);
    msg.setDestinationEntity(73U);
    msg.value = 0.42007885447449933;
    msg.type = 97U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Collision #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Collision msg;
    msg.setTimeStamp(0.6621181692658605);
    msg.setSource(7051U);
    msg.setSourceEntity(22U);
    msg.setDestination(18302U);
    msg.setDestinationEntity(157U);
    msg.value = 0.6878340944313421;
    msg.type = 99U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Collision #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Collision msg;
    msg.setTimeStamp(0.8356612203037466);
    msg.setSource(35314U);
    msg.setSourceEntity(182U);
    msg.setDestination(18U);
    msg.setDestinationEntity(132U);
    msg.value = 0.011561457827695909;
    msg.type = 145U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Collision #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormState msg;
    msg.setTimeStamp(0.11213129763213325);
    msg.setSource(55587U);
    msg.setSourceEntity(92U);
    msg.setDestination(21361U);
    msg.setDestinationEntity(88U);
    msg.possimerr = 0.08867543460273808;
    msg.converg = 0.3891292469152974;
    msg.turbulence = 0.9383120902612724;
    msg.possimmon = 23U;
    msg.commmon = 91U;
    msg.convergmon = 192U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormState msg;
    msg.setTimeStamp(0.24456667765021856);
    msg.setSource(36899U);
    msg.setSourceEntity(196U);
    msg.setDestination(43780U);
    msg.setDestinationEntity(157U);
    msg.possimerr = 0.7673037874780025;
    msg.converg = 0.44001650967550254;
    msg.turbulence = 0.034670414657746784;
    msg.possimmon = 84U;
    msg.commmon = 108U;
    msg.convergmon = 251U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormState msg;
    msg.setTimeStamp(0.05088381724135449);
    msg.setSource(18499U);
    msg.setSourceEntity(153U);
    msg.setDestination(57432U);
    msg.setDestinationEntity(149U);
    msg.possimerr = 0.907054553898999;
    msg.converg = 0.4954330315492511;
    msg.turbulence = 0.23868111302149353;
    msg.possimmon = 240U;
    msg.commmon = 82U;
    msg.convergmon = 85U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AutopilotMode msg;
    msg.setTimeStamp(0.7176485489974259);
    msg.setSource(23577U);
    msg.setSourceEntity(103U);
    msg.setDestination(49637U);
    msg.setDestinationEntity(44U);
    msg.autonomy = 162U;
    msg.mode.assign("YFZFHTRCNUHQKLZOVDCQVIWXJOJTZOZJGHYMRVUNJBRDSDHRKCIMAECXSIBTBZNSPEOKRENUXFAXSPVAESRGTDMYULRTRESODXRAEMVTPKOVHWMJQNMSCWKHTMSJECBMGLSIDFQDOLCWHUNKPBJQVFCRLMPZHIEAPLGQOZXFYLFBWQAJTUTHCIWGYYDBBJLUGBHPQQVG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AutopilotMode #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AutopilotMode msg;
    msg.setTimeStamp(0.9364755570821218);
    msg.setSource(54627U);
    msg.setSourceEntity(179U);
    msg.setDestination(6810U);
    msg.setDestinationEntity(53U);
    msg.autonomy = 241U;
    msg.mode.assign("XJQBPQIGNZNWZYDLKCUHBGLRKIODBEHYIBXSTADSMAFVETAWSETZWIJJZOUJMFZQSIXYRMKUGAKYCQFKMWUFBD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AutopilotMode #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AutopilotMode msg;
    msg.setTimeStamp(0.11819370951271457);
    msg.setSource(56986U);
    msg.setSourceEntity(234U);
    msg.setDestination(55766U);
    msg.setDestinationEntity(42U);
    msg.autonomy = 126U;
    msg.mode.assign("ICXMXAQCKSYPTNCXZZHYVXGOCMGPCXWEUPSVMBXWRZFCPQQZIUAYPHFTWTNFPPTVDBGLZBYOYIJJHJRCQUEEZGJEITQDAOAZEWDILHTLRVLCWUNQFAZMVFUTPVYKGIGRLMALHPNJQNZUNKXSOQNBRWMRXXMGDKFAFOBJNNDCRWOSAGIWDLSAYDHLXUTFOTKZKHEWOSKUPBQEWJIICAKEOUSHSDBVYYFKGBLRVODSGVJURVJRKN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AutopilotMode #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationState msg;
    msg.setTimeStamp(0.6172526372873992);
    msg.setSource(40676U);
    msg.setSourceEntity(241U);
    msg.setDestination(50915U);
    msg.setDestinationEntity(180U);
    msg.type = 8U;
    msg.op = 157U;
    msg.possimerr = 0.46887624463981403;
    msg.converg = 0.3684502550593095;
    msg.turbulence = 0.2415614044154093;
    msg.possimmon = 124U;
    msg.commmon = 145U;
    msg.convergmon = 44U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationState msg;
    msg.setTimeStamp(0.1437986423749954);
    msg.setSource(1832U);
    msg.setSourceEntity(79U);
    msg.setDestination(555U);
    msg.setDestinationEntity(74U);
    msg.type = 168U;
    msg.op = 58U;
    msg.possimerr = 0.13197284101378848;
    msg.converg = 0.7417585505280293;
    msg.turbulence = 0.05358418938000031;
    msg.possimmon = 117U;
    msg.commmon = 166U;
    msg.convergmon = 28U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationState msg;
    msg.setTimeStamp(0.5496147851731483);
    msg.setSource(24376U);
    msg.setSourceEntity(254U);
    msg.setDestination(43396U);
    msg.setDestinationEntity(139U);
    msg.type = 94U;
    msg.op = 120U;
    msg.possimerr = 0.30097396287462996;
    msg.converg = 0.6892316310746563;
    msg.turbulence = 0.7857588501891409;
    msg.possimmon = 56U;
    msg.commmon = 49U;
    msg.convergmon = 27U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReportControl msg;
    msg.setTimeStamp(0.9151589021570447);
    msg.setSource(64813U);
    msg.setSourceEntity(80U);
    msg.setDestination(11491U);
    msg.setDestinationEntity(98U);
    msg.op = 101U;
    msg.comm_interface = 125U;
    msg.period = 39102U;
    msg.sys_dst.assign("BPHCLOXPECEKHLRBKEHGYQZDDAPUHL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReportControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReportControl msg;
    msg.setTimeStamp(0.3918484250268194);
    msg.setSource(33631U);
    msg.setSourceEntity(81U);
    msg.setDestination(7300U);
    msg.setDestinationEntity(101U);
    msg.op = 237U;
    msg.comm_interface = 245U;
    msg.period = 53371U;
    msg.sys_dst.assign("VJBYESVSOHNRAQFWKHXQOJHURMTMDVNFXCVIYSXZZLXLSFIOCTPQYWHRWXDUMWYKFVWIDOBBCQUDIKUPCUAAZNETNBFEDNKBB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReportControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReportControl msg;
    msg.setTimeStamp(0.92575091707453);
    msg.setSource(16953U);
    msg.setSourceEntity(172U);
    msg.setDestination(64438U);
    msg.setDestinationEntity(89U);
    msg.op = 22U;
    msg.comm_interface = 187U;
    msg.period = 7269U;
    msg.sys_dst.assign("TZWVBNVIRIBOHFGXGDPRGPEMARMFMRXMMZVIVSHGTXZNDGPLTBIAJEXKEAIJAKKALBXAFNCXQSMLFEOAHGLKQSWQTDHVBRMFHPYYOSTPCGMZGVNWYDBQPFIUOHMRCLQTUUJSNITWDRQRUJECECFJNRTCNKDLQNUUAMHTVOW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReportControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StateReport msg;
    msg.setTimeStamp(0.7377859603586148);
    msg.setSource(22842U);
    msg.setSourceEntity(183U);
    msg.setDestination(36890U);
    msg.setDestinationEntity(142U);
    msg.stime = 1579906126U;
    msg.latitude = 0.81344196746682;
    msg.longitude = 0.10266716849079571;
    msg.altitude = 64221U;
    msg.depth = 48679U;
    msg.heading = 30930U;
    msg.speed = 19536;
    msg.fuel = 44;
    msg.exec_state = -6;
    msg.plan_checksum = 51264U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StateReport #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StateReport msg;
    msg.setTimeStamp(0.9708570021523527);
    msg.setSource(37496U);
    msg.setSourceEntity(214U);
    msg.setDestination(37895U);
    msg.setDestinationEntity(154U);
    msg.stime = 1306614819U;
    msg.latitude = 0.9315419211704532;
    msg.longitude = 0.287759242255883;
    msg.altitude = 4600U;
    msg.depth = 59839U;
    msg.heading = 20233U;
    msg.speed = -29974;
    msg.fuel = -78;
    msg.exec_state = -108;
    msg.plan_checksum = 12052U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StateReport #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StateReport msg;
    msg.setTimeStamp(0.6717895855023044);
    msg.setSource(1952U);
    msg.setSourceEntity(40U);
    msg.setDestination(16234U);
    msg.setDestinationEntity(135U);
    msg.stime = 302055810U;
    msg.latitude = 0.4701774897349952;
    msg.longitude = 0.0675717976213902;
    msg.altitude = 14629U;
    msg.depth = 20615U;
    msg.heading = 29013U;
    msg.speed = 8704;
    msg.fuel = 85;
    msg.exec_state = -10;
    msg.plan_checksum = 28876U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StateReport #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransmissionRequest msg;
    msg.setTimeStamp(0.8795929606932219);
    msg.setSource(16872U);
    msg.setSourceEntity(87U);
    msg.setDestination(4133U);
    msg.setDestinationEntity(180U);
    msg.req_id = 58736U;
    msg.comm_mean = 49U;
    msg.destination.assign("OGXQRACYXHAIRLGTODNQRSPYPZYSKJFYEKBOPLGHVACGADKSJWIQZXUCLX");
    msg.deadline = 0.3581642898688746;
    msg.range = 0.18272309305686074;
    msg.data_mode = 213U;
    IMC::UsblFixExtended tmp_msg_0;
    tmp_msg_0.target.assign("WGRGQRQNQSQSCCZWKZFHNVLAHALHPUMMGLNAXQYVDBKEGWPOHXXRTSBVREGUESMVGDHZCYJMOHRMFXXDMFLHCUCNIOZLKOMYLGCBRBWUJPEOWCWMYNOPPRBPAPXRFBVSMGJAPLVQVFOGINB");
    tmp_msg_0.lat = 0.744328320030584;
    tmp_msg_0.lon = 0.05292084508695216;
    tmp_msg_0.z_units = 79U;
    tmp_msg_0.z = 0.4691823006303747;
    tmp_msg_0.accuracy = 0.7471769799212753;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("FVDRXVUROBGQHMUKMWDTELDPITTWRDKFKWCQHJGLHYOSFCJKYDMXSMYXDCBAAVIOBIBZPOLFOTOYANTNCDRUNJXGUDZMBFAVJJHTSWVCGIKEGVKUVKTQLRCSMEXQDGRHWEGZJQUGXFZPXPJSLHUQZRTFELAFFHIYWFIOKJXJMTCRAONCCEVUJEBLLEQNZPYWXMPDISAPYQHWSBXLCBANLPYZYRK");
    const signed char tmp_msg_1[] = {76, 27, -107, -43, 30, -23, 96, 122, 98, 34, 104, 82, 6, -103, 47, -66, 42, -10, 73, -13, 60, -115, 89, 71, -17, -98, 27, 115, -43, -23, 122, -110, -102, -33, -97, 91, -77, 3, 15, -92, -34, 108, -116, -114, -82, -88, -101, -27, 124, -85, -33, -94, -62, 0, 54, -14, 76, -24, 26, 82, -44, 50, -66, -32, -25, 25, 74, 7, 40, -75, 123, 88, -124, 117, 89, -58, 46, -40, -1, 21, 88, -92};
    msg.raw_data.assign(tmp_msg_1, tmp_msg_1 + sizeof(tmp_msg_1));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransmissionRequest #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransmissionRequest msg;
    msg.setTimeStamp(0.05399515691447543);
    msg.setSource(4865U);
    msg.setSourceEntity(190U);
    msg.setDestination(61632U);
    msg.setDestinationEntity(151U);
    msg.req_id = 12837U;
    msg.comm_mean = 250U;
    msg.destination.assign("XMWFUODKESTORLVEJACPUGQCFZGKHFYCGWVAFCSKKUTNXOGSKRAPDIIKDQZFTWRYINIBFIMHDBEUERJJCCNDMGHIZKRSJTNECVUEXNMDDJAFLVRXGWWQRHMSATHTUJFVBBNCLGNWOGDITREIAHPHBPBRYYPSLEVNPWPSNWOLDZYJMYBAHXKLVWSPOLV");
    msg.deadline = 0.12737268520173117;
    msg.range = 0.656032333624662;
    msg.data_mode = 254U;
    IMC::VehicleState tmp_msg_0;
    tmp_msg_0.op_mode = 181U;
    tmp_msg_0.error_count = 200U;
    tmp_msg_0.error_ents.assign("VFFRKRBIFBGLGMYMQHYQPNZTTFOKDICGEHPEHVJQQCMKKDNLSEZLLEHQPWDEAKHRMXEZAAAMVAXDHWSZIVWNWVOXIJVOCVMYPYMPYTRMUCLVIASOPDASZCSQNWHRTNNDGECLBDJEBJTCQBHOWZWLWYHGPJLCSYFFWDXB");
    tmp_msg_0.maneuver_type = 24143U;
    tmp_msg_0.maneuver_stime = 0.08583368612682118;
    tmp_msg_0.maneuver_eta = 44984U;
    tmp_msg_0.control_loops = 1675456878U;
    tmp_msg_0.flags = 247U;
    tmp_msg_0.last_error.assign("MQWAHLWYBHMTRRQJDNBDAWUUJKTFZAQQWAZLKOWNOVZYTVTEWLTUQDHVMISRXREEYGHUIFKUIJGPDOOYISFPDLCOLYJOOQBVJEPBRMOZVFIGGFCFNKBZMLDLRXEPGQRNGXNZXDCVKXHRCACEPMYSBPCHIJNWXLBCRBJZVSHMFXWTNGSTNJGCSKMFZIVSWGWQDF");
    tmp_msg_0.last_error_time = 0.17771754217731783;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("ORWZPQEAXJLIBOCBXUBIOTWFUIQMLBSEVGANKRUVZJGCVAIMUGVXQLFEKERJLTDRCYDOLNYGDKBPWMKQPMOJUFIZSNNMPHMJMGHAAERMULNDITVJXTTGQWXZMQJVTQKUFENBSHCCLNGVUSYSKTOUYDVFWQXNUFDOSDMKZHXXCAYAYVRDREAOHZZLJTOFCXJWSGYTWXSPRT");
    const signed char tmp_msg_1[] = {108, 11, -94, 91, 88, 97, 119, 9, -2, 36, 76, -14, -53, -66, -44, -94, -88, -6, 124, -29, -32, -108, 46, 74, -117, -125, -29, -8, -89, 15, -52, -1, -119, 8, -51, -106, -60, -92, -90, 69, -107, 104, -108, 76, -39, -57, -49, 95, 124, 74, -12, 54, 54, 10, -9, -51, -82, -47, -36, 20, -59, -79, 71, -29, 22, 121, 97, 107, -18, 48, 3, 100, 66, -41, -7, -33, 10, -104, 46, -6, -29, 0, -55, 71, 58, 68, 32, 58, -2, -25, 14, -85, -4, 100, 65, -10, 113, -10, 24, -19, 124, -56, -49, 106, -117, 56, 71, -68, -104, -8, -87, 1, 62, -45, -65, 7, 96, -68, 37, 97, -127, -11, -69, -117, 121, -66, -14, -49, 89, 89, -60, -36, 28, 54, 105, -100, -18, -41, -32, -21, 99, -20, 69, 85, 78, 48, 69, -5, 3, -5, -29, 58, 73, 2, 2, -93, -125, -123, 120, 69, 78, 32, 42, -96, 24, -53, -120, 121, -16, 105, -50, 77, -62, -60, 63, -118, -104, 63, -88, -67, -47, 73, -87, 70, -119, 44, -98, 118, 31, -48, -3, -124, -54, 50, 4, -89, -19, 38, 20, 63, 3, -81, -121, -26, -119, 95, 90, 112, 50, 30, 60, -122, 6, -24, -127, -117};
    msg.raw_data.assign(tmp_msg_1, tmp_msg_1 + sizeof(tmp_msg_1));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransmissionRequest #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransmissionRequest msg;
    msg.setTimeStamp(0.2794901084664766);
    msg.setSource(21027U);
    msg.setSourceEntity(12U);
    msg.setDestination(54080U);
    msg.setDestinationEntity(220U);
    msg.req_id = 50131U;
    msg.comm_mean = 46U;
    msg.destination.assign("QUAPUEUNCTASGPLSEQDKTQNVCZBPLLZKSYAEQPLPYPCPIDZITOEEKHNBOITKGBIUYHGHNXELXSOPJRRAPBFOUFLBZTKCMSUXKIAVWZNVTFQGHCFQSZJYJPOMDGUCNRUYQJOYBWIKMXYXENEJHAXFJYXRVTJGDROMXMFOGVDBNOJATWDZQVBZCUEJWCVOHLKWMAGZQTDRJIGHLKRXSIEGSVSZNAMIWLDQYHIAKMDMHBNHFBFRXDM");
    msg.deadline = 0.22665866624349296;
    msg.range = 0.9288314395595062;
    msg.data_mode = 56U;
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("HENJLJHOZSZMUUGKKJQHZIQGOKEUCYBRDEJSQGALSQNWLVGUAXWDNOBWTYEAEJZYIFBQFSBFCBEPPENXVHFKKRVMQHZPMFAKXUOPARVTQZSYDNIOZWVBWSHGXIYAWJVZAUPQNCW");
    tmp_msg_0.value.assign("CVUSRAIMTTRMWXHECATLZJBPOZVECIYUYACEJYKDURSYKMKPBFMUKNKFPTUE");
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("MSHYDRVFNOKZUUQGBVWLCDRTCJQKEPBBKTWKXQBMIKYOYRXCTJYVPHAQCXLNITIZYHELQCMGJUVGPSGDLAEYSVAEIBNTIVNOANRTFUADLBVWOMDMEKRWGLFXZOCOJUGLJFCTYXJXQEZDHLATQSFUNHCMPZGXBDUSUELFAUOAYWGZXITFJ");
    const signed char tmp_msg_1[] = {-71, -32, -119, 62, -9, 107, 20, -87, 108, 47, -70, 52, -6, 97, -99, 35, 95, -127, 51, -4, 102, -93, -120, -1, 125, -82, 57, 52, 123, -49, -29, 34, 113, 96, -101, -58, -23, -8, -64, 37, -23, -105, 103, 115, 53, -110, -12, 100, 48, 6, 22, 3, 54, 47, 21, -26, -95, 81, -12};
    msg.raw_data.assign(tmp_msg_1, tmp_msg_1 + sizeof(tmp_msg_1));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransmissionRequest #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransmissionStatus msg;
    msg.setTimeStamp(0.7851689613772893);
    msg.setSource(11387U);
    msg.setSourceEntity(105U);
    msg.setDestination(51233U);
    msg.setDestinationEntity(222U);
    msg.req_id = 49908U;
    msg.status = 239U;
    msg.range = 0.8663028456646533;
    msg.info.assign("TDXUJBTPKXDYWENLVDJHBVLOWXIPHZWLVFPWEOLGQBAXSAVLRWDMPQUAIJODJGRTATKQWVMMZONMPTCEKJADNBYLSYGDOKHGOBZTZWFCOEGOHLJXRSCAKOMDDUELXUWDYYKWIGIQYMZHSYRUIIIIYRFPKAQFHVQKTNUFSXAIGVBGENMHNUNLXFFCSQGCMQFSQVFLNTCPCXRHNZRAUUIJTOTYHUVKNM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransmissionStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransmissionStatus msg;
    msg.setTimeStamp(0.9824215364439136);
    msg.setSource(5191U);
    msg.setSourceEntity(84U);
    msg.setDestination(5854U);
    msg.setDestinationEntity(121U);
    msg.req_id = 58748U;
    msg.status = 135U;
    msg.range = 0.48924745789308133;
    msg.info.assign("MNLBEOBVXFKFTYPOTKKQWSLQYZEMEUJUKLGHKDYGVSJUFRSBBDIOGVLOKWJQRETTJPNVQDWHXIZNNGQWCSTJAKUAIKAVIYJDPMDESBQOACNSTZBHVQYMDWTLFVAXCFQDGYAHUPFCXUJGZPRCIRVEYEHCUZMWCMXUZPGHRBPELRENAZJWBGITQBWOSWJFTDIMLOKLVGOOJNROFNZLIAPTZXPIBCWMXDCIDYYYSXFNPGZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransmissionStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransmissionStatus msg;
    msg.setTimeStamp(0.705106668801212);
    msg.setSource(34990U);
    msg.setSourceEntity(136U);
    msg.setDestination(44695U);
    msg.setDestinationEntity(54U);
    msg.req_id = 16648U;
    msg.status = 50U;
    msg.range = 0.8661563723240895;
    msg.info.assign("RBNRCGBSHGOKUBEYQZMIDUPIZFUULNYKYSINWJYSUGCNCWTWFFKSVXYCNLKJVQXKVEFOXBAFAZMMDWFPWWQYXWCHZJDKRTVVVDEHMOQGFWKXGKMZLVOXSGHECIBZLDJBJMRNEBCKAQPAQOGLUXZHMUPCWXXDTRJOTNZQMDJRYLYRNRJHPBFSTHEZSWZBAXRQPVDIFPQU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransmissionStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsRequest msg;
    msg.setTimeStamp(0.9826250855899656);
    msg.setSource(62131U);
    msg.setSourceEntity(182U);
    msg.setDestination(55711U);
    msg.setDestinationEntity(253U);
    msg.req_id = 39655U;
    msg.destination.assign("FWJWLWBOTEIAEOWWFTUYKLTSBEDCMKTCJDXZWRVHEXNGZHKUAOUCMMHLBXKEESNBMBCHGGFXJYBMZKGINAGBQFGNJJWXHTJKHGEYFVWVZRCUVORZMMPDCSYSIULXAIXZIXAPYCSHTLONPUQIAQRDJVMTQVQXKLCODLPOPKSCOTYGNPQUWBAEJULIMGQNRLINSRZCUQFFDADZSMJUDYPBHROL");
    msg.timeout = 0.7410822833252871;
    msg.sms_text.assign("RPOAQEGPGWFWFZZNYKXSKFMXJLKEMEQHPVZIOSBUANKEQSBHIRCFMLAFAULFTVGABEQMKJNVAOPDUDAHLNOSGNRBXDYSJBCXWGYVQMQXBPEVOQWBJPGRTACHISCNFEHLYSVDZDJBCVKNUDXDRTITAYRPWHCGOMVPDEQGLWZSFITZLUPFSTVEQWXGTH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsRequest #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsRequest msg;
    msg.setTimeStamp(0.4856510213553381);
    msg.setSource(6233U);
    msg.setSourceEntity(159U);
    msg.setDestination(13820U);
    msg.setDestinationEntity(34U);
    msg.req_id = 25935U;
    msg.destination.assign("IXUGUNGYMRUUDXRYKBLFTXZDQFEZFEWGDCAJFHCIDTZQPZMZRHKUQUEXEEDXCEHXKGWKYJUDICMQZGNVWEZMGJRPIDQZOHLEGITBSTVKJIXBCC");
    msg.timeout = 0.09210723280673283;
    msg.sms_text.assign("CCCROWQXMCJTFOBEBKBFUMEUMAFJQWZRYGBXLXYBNOCUNMJEJTJLDZAHKBMZUSVYAHMJFGPGPPY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsRequest #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsRequest msg;
    msg.setTimeStamp(0.7177465915708099);
    msg.setSource(15985U);
    msg.setSourceEntity(9U);
    msg.setDestination(22251U);
    msg.setDestinationEntity(110U);
    msg.req_id = 17042U;
    msg.destination.assign("PXMTCOIYCMJSCEBOIXVUEWURKUKDWFUMUSPNEQBVKLJSIDWHQABKYACMONUIKLPHBIXEOIFZSRCSNNVAVJURXYQTLGPPFZSNRMVHFTWLLYKYESMAPBACHJQBQMRBJHAWTERFSDTZYBWZSKBJPHRDPWLRHRNTELDLHBSOYFGJICOGPYNVQZYAZVFOQIXKAZVCJEMZGMTFHZUWQHDANGZJCORWTIXLDLDGYAXKNVXTXGMQNT");
    msg.timeout = 0.0593258867031321;
    msg.sms_text.assign("IBRFGSHDBMGIRWACPLOQEVRBQKBZKFPHNENQORLXDKCIPCTNKGTHUXYSFRTTBCIFXLRSYFXNPYLXKRHGOXYJCGULKKQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsRequest #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsStatus msg;
    msg.setTimeStamp(0.19365144611238538);
    msg.setSource(58353U);
    msg.setSourceEntity(144U);
    msg.setDestination(40451U);
    msg.setDestinationEntity(180U);
    msg.req_id = 64805U;
    msg.status = 106U;
    msg.info.assign("ZVTLJLDUKVRMLNEJZCREISPGLJODGYSRRNKVGCXCHAOZFXJWYUAGKTQNADDYKQTFBNQEFOQABDXVAOMBYMQHQWXNUDFYVBCHVLHEOHIYWLNPCEFSGAEXUOUJZSHPVKGBDWHXYIUFSOPPTSDZIFCKAFIGMRZUSJWTWPYAWJRHEBLBKYMTDWZIQTNEUM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsStatus msg;
    msg.setTimeStamp(0.14433666657338662);
    msg.setSource(43726U);
    msg.setSourceEntity(152U);
    msg.setDestination(16435U);
    msg.setDestinationEntity(141U);
    msg.req_id = 14841U;
    msg.status = 105U;
    msg.info.assign("XBAOGGDBTNEIYZJGTGVNFGLJCNMJQNEPKRPZPPBXUAAGPFHKNHELSOICEECZNVCATJMFUWQTDWHKZXEHWIYJNILJAKEJNQSEJMCVBTKDBKICRDCMYOTASGORLWIXBHFR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsStatus msg;
    msg.setTimeStamp(0.9100312329102118);
    msg.setSource(40287U);
    msg.setSourceEntity(210U);
    msg.setDestination(11342U);
    msg.setDestinationEntity(165U);
    msg.req_id = 30870U;
    msg.status = 89U;
    msg.info.assign("EBQAKUOHGJNXFCXGDZTWYMWKAIFFHXBHFPGZRECOIDWPDUZKJLLVOCLFZFJYYGUNMCNUEWUIMYXBWDELPPNEQIDGHAKIVCOMSFXTSVCLYUSABEVCYQASGDTWVRJNYHHQXRQJSNZOQTREDYJVOMXPMQNHSE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VtolState msg;
    msg.setTimeStamp(0.8887780195924931);
    msg.setSource(33422U);
    msg.setSourceEntity(167U);
    msg.setDestination(12229U);
    msg.setDestinationEntity(230U);
    msg.state = 72U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VtolState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VtolState msg;
    msg.setTimeStamp(0.5786373552919526);
    msg.setSource(62128U);
    msg.setSourceEntity(17U);
    msg.setDestination(4483U);
    msg.setDestinationEntity(146U);
    msg.state = 231U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VtolState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VtolState msg;
    msg.setTimeStamp(0.21818787526050842);
    msg.setSource(19524U);
    msg.setSourceEntity(105U);
    msg.setDestination(36528U);
    msg.setDestinationEntity(73U);
    msg.state = 45U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VtolState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ArmingState msg;
    msg.setTimeStamp(0.5026411624406559);
    msg.setSource(12047U);
    msg.setSourceEntity(234U);
    msg.setDestination(28090U);
    msg.setDestinationEntity(75U);
    msg.state = 60U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ArmingState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ArmingState msg;
    msg.setTimeStamp(0.722481439637028);
    msg.setSource(35086U);
    msg.setSourceEntity(154U);
    msg.setDestination(286U);
    msg.setDestinationEntity(62U);
    msg.state = 64U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ArmingState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ArmingState msg;
    msg.setTimeStamp(0.5822011770797256);
    msg.setSource(46439U);
    msg.setSourceEntity(116U);
    msg.setDestination(52648U);
    msg.setDestinationEntity(115U);
    msg.state = 199U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ArmingState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TCPRequest msg;
    msg.setTimeStamp(0.33303305181217735);
    msg.setSource(63629U);
    msg.setSourceEntity(130U);
    msg.setDestination(19920U);
    msg.setDestinationEntity(242U);
    msg.req_id = 49717U;
    msg.destination.assign("XLAVMNTUJAGQTTRHSCSKGGSTTCZBGEHICMCXIMROMIUVQGTFHKIDJEFCAHLYAPLNSUKRZOINXJZXJWPSWZRCPRZHHKFZDHPOSXXTXULYMDTDWYVLIQQYVYOGEMPHYNEMWNBVWJUSBFZBATUDOAWSXZGPIREBLYQBDIXQNCUHSLAJQPVKEYKRCODYODEZHXJSGLRNFWOQVWTAFKIBBBMWUDR");
    msg.timeout = 0.4686093782338585;
    IMC::PowerOperation tmp_msg_0;
    tmp_msg_0.op = 132U;
    tmp_msg_0.time_remain = 0.17635349216524743;
    tmp_msg_0.sched_time = 0.7877868778945434;
    msg.msg_data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TCPRequest #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TCPRequest msg;
    msg.setTimeStamp(0.15683063789174423);
    msg.setSource(56893U);
    msg.setSourceEntity(19U);
    msg.setDestination(52824U);
    msg.setDestinationEntity(155U);
    msg.req_id = 34732U;
    msg.destination.assign("PMVRAIHBNXWFTAMEPZKCUQLDMCKWQSODGDFJBBLNYJANHOGVNVWETSGPBYARZETNGNSIVLXHRYBZUKZTHCHPREWFIKPWUXLZCOSOXIMWNHVCBMQYIRIRVYZFAKVGJSBSJURYDTSVGLAEUJMXXOXBRUOKJCPCENDJJANQIUDMOARZQYUJKBJZEGLGCBFPQFHGPS");
    msg.timeout = 0.5088258855599401;
    IMC::SetLedBrightness tmp_msg_0;
    tmp_msg_0.name.assign("NNSZWBZMWDRIRLSLIBPMZXXWEVVEAFOKRBGJCCCACRIKXLCDHEJQKYPZKBZVJYOIMYLTVREQHGKPVAUOAFPHXHCUIRCCLFVOMTSDPBYPTIMGMWEUOYPFUWVKNSESVNQNKYUHSFOIRBWEI");
    tmp_msg_0.value = 38U;
    msg.msg_data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TCPRequest #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TCPRequest msg;
    msg.setTimeStamp(0.201504618651413);
    msg.setSource(49326U);
    msg.setSourceEntity(68U);
    msg.setDestination(29439U);
    msg.setDestinationEntity(128U);
    msg.req_id = 24922U;
    msg.destination.assign("ERQXXNVTYRUUBJAESWT");
    msg.timeout = 0.018377958468022926;
    IMC::DataSanity tmp_msg_0;
    tmp_msg_0.sane = 99U;
    msg.msg_data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TCPRequest #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TCPStatus msg;
    msg.setTimeStamp(0.03767246640866373);
    msg.setSource(28472U);
    msg.setSourceEntity(246U);
    msg.setDestination(1782U);
    msg.setDestinationEntity(12U);
    msg.req_id = 17845U;
    msg.status = 29U;
    msg.info.assign("CAAEUQUVTZPPWTPEAKEKXDXAHL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TCPStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TCPStatus msg;
    msg.setTimeStamp(0.6930928595875943);
    msg.setSource(42287U);
    msg.setSourceEntity(41U);
    msg.setDestination(28403U);
    msg.setDestinationEntity(89U);
    msg.req_id = 40681U;
    msg.status = 97U;
    msg.info.assign("HLQUDTWFEVTCFYRAKNXHSTPCCVPWUCQMRPIIGJALGTKQMMSSQBAFIABAABVTZEFCPIRLBUKHSLCGYUXYVBEVGLGMJZDCHVZJXCSBYZOMOOPPGQKYWZODFPAJMENUAWKZNLUVXYNWJTQNNMLNREBQIKNEOGFEOSNHTWDPRJWDRUJUXZHOZAYPVVKFQQMXJWTTBDZIRJDNLLZLDMFDGIDOKOUXMEEXXHIBSSCQPKFFHISCWUYKTYYBHWIX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TCPStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TCPStatus msg;
    msg.setTimeStamp(0.7485351432874251);
    msg.setSource(6473U);
    msg.setSourceEntity(20U);
    msg.setDestination(17934U);
    msg.setDestinationEntity(180U);
    msg.req_id = 1500U;
    msg.status = 111U;
    msg.info.assign("KXTHHGAROEIZYAGSLPOPVNEXIVZECNGIJWXUIARTAOOQTUGBFINEZVBCRUZKCNFBPMJLICENQVXXSRMDTBBAKMOYXPSEQDUAKYBPGCMTLGJJEDHGCQCNSYOIWWHIUYQJVFRTLQYFWVYACXRTELZQMJUZQPZREDZMDFMUQWEKRHVRPPV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TCPStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SatelliteRequest msg;
    msg.setTimeStamp(0.9587283021637905);
    msg.setSource(15194U);
    msg.setSourceEntity(181U);
    msg.setDestination(53876U);
    msg.setDestinationEntity(249U);
    msg.req_id = 39961U;
    msg.destination.assign("VZYFZSRIUFCF");
    msg.ttl = 62124U;
    msg.type = 74U;
    IMC::SmsStatus tmp_msg_0;
    tmp_msg_0.req_id = 32164U;
    tmp_msg_0.status = 160U;
    tmp_msg_0.info.assign("QFTRRROCLAJXIOLQAZPTNDXMTUMPXSXJZBFZPYTLNUNZQHXEQIZXOEYXUFMHJWJSYDLQBWCAFKEOJAOGVELMGCUAFWPPBEGQXHHSWTDBKYOMXPMADGSLUTRDH");
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("BSLUVETASBNJPUQZITIESVQPNHIGDTRAOHEAYFIHY");
    const signed char tmp_msg_1[] = {-42, -70, 58, 122, 109, 115, -52, -102, 30, -29, -29, 79, 112, 6, -16, 26, -70, -100, 68, 92, 32, -92, -85, 18, 70, 53, 0};
    msg.raw_data.assign(tmp_msg_1, tmp_msg_1 + sizeof(tmp_msg_1));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SatelliteRequest #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SatelliteRequest msg;
    msg.setTimeStamp(0.4373625896175425);
    msg.setSource(34895U);
    msg.setSourceEntity(9U);
    msg.setDestination(16031U);
    msg.setDestinationEntity(167U);
    msg.req_id = 48487U;
    msg.destination.assign("TOUBLAUJLJYBFVFANMTZREBLFWZWNSRWQVTAANXKSTXAUFPLJYXXPZCQYDGHC");
    msg.ttl = 18814U;
    msg.type = 226U;
    IMC::QueryPowerChannelState tmp_msg_0;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("MDQYYAKRHCJSDQUTVGHSBABRNRQZSUNPTKGCSIUYAJRNPCFKOYFCMWPUVEQBEEIFWJXNJBDAKZYPGZHDDVICVHWVFEOMXWLLY");
    const signed char tmp_msg_1[] = {-55, 107, -93, 103, -43, 76, 113, -119, -88, -61, -10, -10, 26, 2, -35, 18, 35, -53, 46, 4, -118, -103, -122, -66, 13, -23, -30, 90, 84, 60, 14, 57, -50, 79, -44, -93, 42, 55, 56, 55, -110, 29, 113, 5, 126, -48, -22, -51, -22, -50, -30, 49, -12, 60, -64, -16, -29, 72, 63, -62, -114, -118, 13, 5, 73, 21, 53, -104, 21, -108, 1, 2, -9, 86, 40, 84, 2, -87, -38, 125, -13, 65, -18, -121, 23, 19, -104, 122, 22, -126, 94, 60, -60, -48, 9, 93, 44, 57, 21, 76, 44, -53, -116, -59, -28, -56, -35, 20, -35, 119, -59, -8, 93, 32, -123, -71, 2, 48, 60, 121, 40, 86, -93, 94, -33, -14, -30, 37, 119, -50, -50, 81, 49, 98, 94, -43, 11, 76, 68, -93, -121, -44, 112, -62, 1, -11, -74, -98, 66, 90, 66, 3, -32, -79, -77, 25, -108, -107, -26, -119, 38, 28, 79, 102, 119, -13, 115, 3, -57, -123, 88, -94};
    msg.raw_data.assign(tmp_msg_1, tmp_msg_1 + sizeof(tmp_msg_1));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SatelliteRequest #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SatelliteRequest msg;
    msg.setTimeStamp(0.7759424565541039);
    msg.setSource(22027U);
    msg.setSourceEntity(244U);
    msg.setDestination(21464U);
    msg.setDestinationEntity(2U);
    msg.req_id = 17891U;
    msg.destination.assign("URUMUJGEQNSBKDJHOGUYROGQ");
    msg.ttl = 2615U;
    msg.type = 208U;
    IMC::Throttle tmp_msg_0;
    tmp_msg_0.value = 0.6106138757196587;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("ICTQFWGEKIXGBAFRIQQCOJHOFCVDADRCSVSASCZMMWQLAUGJOPTWHLJENLCTSJOJIELQIIJHNQBJRWDGHBBYMJVSYKSKZEOAGHYOWTVRMJHLGFLOVRAMBOUDLDEHZUNLNZSSQYPKAIERKEEFZRKLCIITPYEXONWVZUCPVTPYUFWHKXXBYWJPXAZUUUSNMWDZRPVCTFMBNEAXGPKMLMCZGURSUXAIFGKHQMNPX");
    const signed char tmp_msg_1[] = {58, -48, 25, 40, 45, 106, -97, 61, 51, 57, 40, -47, -57, 126, -86, -45, 102, 89, -126, -29, -71, -55, 116, -67, 99, 90, 115, 39, -65, -93, 32, 114, 35, -72, -42, -63, 52};
    msg.raw_data.assign(tmp_msg_1, tmp_msg_1 + sizeof(tmp_msg_1));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SatelliteRequest #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SatelliteStatus msg;
    msg.setTimeStamp(0.3216532933756415);
    msg.setSource(59061U);
    msg.setSourceEntity(83U);
    msg.setDestination(12600U);
    msg.setDestinationEntity(39U);
    msg.req_id = 36213U;
    msg.status = 27U;
    msg.info.assign("GBDZEGCMOWGMXRHXWXSHWZSRDXKPNPWSXAYXPEEOXNTVFAGIBEAANBISEJDLIHHMYQORMBGNOIOARFWZCGIDSNUCNKYDRUJBSZZFKGUCUZVTPLRCTKCSSTTBYNZZBIQTWXVFJCZCKFEYFPKIQUCPMUGQTGDNFKFDVRDWYOIUHTQYJOMXUVPYJAQHQPFHNCJEJYOMMDHKEVWAPAKLVQLQEOEYJVGTJMWMIBWIAOLRRHLSQBDRZSNHLKLUFLP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SatelliteStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SatelliteStatus msg;
    msg.setTimeStamp(0.7704727820502151);
    msg.setSource(55858U);
    msg.setSourceEntity(177U);
    msg.setDestination(58388U);
    msg.setDestinationEntity(152U);
    msg.req_id = 42692U;
    msg.status = 163U;
    msg.info.assign("SSCAEAWQMYZRHREBYSBOAFSIFUOJQMIM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SatelliteStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SatelliteStatus msg;
    msg.setTimeStamp(0.4634958156823802);
    msg.setSource(38331U);
    msg.setSourceEntity(209U);
    msg.setDestination(64593U);
    msg.setDestinationEntity(43U);
    msg.req_id = 26246U;
    msg.status = 34U;
    msg.info.assign("VCWTGLASTPBWHYSNNJCEWJIMUOIZBZIERHGESOTFSRQJDKVONBKKBCSXTUVZWNOHGEYWGZGDDGMAZRPC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SatelliteStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AssetReport msg;
    msg.setTimeStamp(0.08567111597497212);
    msg.setSource(49327U);
    msg.setSourceEntity(40U);
    msg.setDestination(48114U);
    msg.setDestinationEntity(147U);
    msg.name.assign("UAVDHJXTPTWSBPTCKACOLQZPFRAYFCKRPSGCBNTJLEOENDQRJIDBQJFZDYYIJTWAZYMAGFESVKWXGXCLKSRDEPBHNXBASZRDIJUVGCYWVEUGFMGPIIVLHHYUVKCCEYJLXBRTOYAMVZAJLSWJAFOPXLEKMXWIQGHUYSHOYQGUNHXPQFNSZQDDMNRUNTEUQEBKIJWROBCIXRGEDMHSPOMQ");
    msg.report_time = 0.15499941664416228;
    msg.medium = 138U;
    msg.lat = 0.31556833707514764;
    msg.lon = 0.13137920641595646;
    msg.depth = 0.020973324544986238;
    msg.alt = 0.8904972319977946;
    msg.sog = 0.17274697311434406;
    msg.cog = 0.9920586817591944;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AssetReport #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AssetReport msg;
    msg.setTimeStamp(0.613688459905969);
    msg.setSource(38522U);
    msg.setSourceEntity(91U);
    msg.setDestination(27196U);
    msg.setDestinationEntity(169U);
    msg.name.assign("BTNVWMRVCQLHENMWIXSDUJUJKIVGQLHQATRSFDDHENFYCXNRGOIRORGDUCTFPRJEZVGPGEYZZLKATQBXLIVFBWWECORANAUXAKSSEFOLZCYFCESQCOKKROCKBS");
    msg.report_time = 0.4640840695667383;
    msg.medium = 92U;
    msg.lat = 0.0809433759225312;
    msg.lon = 0.577961101911303;
    msg.depth = 0.07565637890678412;
    msg.alt = 0.14469386707269727;
    msg.sog = 0.9605228996293353;
    msg.cog = 0.34818313515293053;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AssetReport #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AssetReport msg;
    msg.setTimeStamp(0.610331383937498);
    msg.setSource(30496U);
    msg.setSourceEntity(74U);
    msg.setDestination(22902U);
    msg.setDestinationEntity(104U);
    msg.name.assign("UHITPZUQWQIBHEIIHTCMVVMIVUPVAGTCZSTLOXQODFJQZFDOAJYFLEGLTYBUIJBRYBBQRCWCOFCFHEROYTNKDZYVHWAEKGPHRCWQTPZSNUKQJXDMDIAMKEPUY");
    msg.report_time = 0.45739419106424606;
    msg.medium = 229U;
    msg.lat = 0.9013367600502739;
    msg.lon = 0.8630542757359204;
    msg.depth = 0.23122023928604285;
    msg.alt = 0.4245182413952131;
    msg.sog = 0.3244771082963106;
    msg.cog = 0.6033704292864763;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AssetReport #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Abort msg;
    msg.setTimeStamp(0.11866956777431048);
    msg.setSource(25971U);
    msg.setSourceEntity(48U);
    msg.setDestination(54449U);
    msg.setDestinationEntity(181U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Abort #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Abort msg;
    msg.setTimeStamp(0.3635640559985611);
    msg.setSource(5469U);
    msg.setSourceEntity(187U);
    msg.setDestination(51968U);
    msg.setDestinationEntity(247U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Abort #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Abort msg;
    msg.setTimeStamp(0.9561857073853163);
    msg.setSource(26598U);
    msg.setSourceEntity(238U);
    msg.setDestination(27121U);
    msg.setDestinationEntity(45U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Abort #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanSpecification msg;
    msg.setTimeStamp(0.6442340859372235);
    msg.setSource(46534U);
    msg.setSourceEntity(254U);
    msg.setDestination(28216U);
    msg.setDestinationEntity(253U);
    msg.plan_id.assign("ASNSBUVGUIJBAB");
    msg.description.assign("JSKIBWFRTBKYFZOUVSEFETZMHXNQGRTOFUEGAWHAUFQUDYXOLVEKDDIONIHEFVGPJJMNIQNAALRGKTITPMCJJODLYLBXSBVNACYRWTUWXGELKTBRUWPAYOTAHCECCVHNRVBZZWWQZNSGOQSLKXZOHMWSQSHXBGZZPVQDDPUXLPITEKAIMHCZUXCDTRHYBVDSMMZLAOJCCQDKNIULFPKLGFREHJUDYEONMICRVYYFB");
    msg.vnamespace.assign("LELDTSVARHJHYABRFPLDHRKQXRVCUHTOWGMXRCUKCGGNEBMQMYSCVSCZBUXWIVEJVLELVVGXIEBDFRARDNPINMHHFITYAPGPMPMIYNXAFOLSNHOZSZBZQUISOMKKOQJFXANMGNTLAZTEEHVWYNUWEKQISDYBRZUKWLSLFJVVQPKBADZOLDHIDPXEYZOWJNFEAGJWCYQJMUFBDPCKSOUCZCJWQRXIUPWMHXTKRTJOWNKAFJTYTGIZ");
    msg.start_man_id.assign("LNYPTSKLIUYYAUIBFYCGQILXFTYSBMRKOCIFPLMVCNEAINZDPMVJZTKXLGQAOHJXTEIQBTPILIWUQDZJETUHNQMGXOZAAMZFVDBTCHJLSYFJOFCXHJIFHWBSEWYNVPQTAMNACGYDTFUTMJGHBDNRNIWXXZRWRQXAPMNDXOOWVKCOZKNBFCSHUWODQPWSZGXSZQEOSRRH");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("BDAFLWVUCNOPWYDNRFBCEXUCUTFNBQAWMOTGSRDDGZJDUTPXCAVXYCFHWIDUXWRGSYCJKQTXLMHLVKNNFGARDFPBTRHNLCLFZKLHBMVQRKIXOXHEVYLCNKDGVJKGBOQVSG");
    IMC::Rows tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 28653U;
    tmp_tmp_msg_0_0.lat = 0.9169714583128972;
    tmp_tmp_msg_0_0.lon = 0.8022770367076857;
    tmp_tmp_msg_0_0.z = 0.1507537671532524;
    tmp_tmp_msg_0_0.z_units = 154U;
    tmp_tmp_msg_0_0.speed = 0.08957569570755297;
    tmp_tmp_msg_0_0.speed_units = 203U;
    tmp_tmp_msg_0_0.bearing = 0.6014762283201518;
    tmp_tmp_msg_0_0.cross_angle = 0.08883721320700733;
    tmp_tmp_msg_0_0.width = 0.9848534086738343;
    tmp_tmp_msg_0_0.length = 0.33379932285962344;
    tmp_tmp_msg_0_0.hstep = 0.9476399499102356;
    tmp_tmp_msg_0_0.coff = 73U;
    tmp_tmp_msg_0_0.alternation = 112U;
    tmp_tmp_msg_0_0.flags = 110U;
    tmp_tmp_msg_0_0.custom.assign("ICFGZNMPGXDGNLQZAUSNQVMOGHBCMXMANCUDPOKBEGJXSESZLNZRMILVPESYGUWDNUKOLFLHCNHAELYXHWSSHRAMXSJQDVYS");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::SetLedBrightness tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.name.assign("ENPURZSGPJAHRLUHPNQFKBTHEKTQO");
    tmp_tmp_msg_0_1.value = 107U;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::Chlorophyll tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.value = 0.06257830082003002;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_2);
    msg.maneuvers.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanSpecification #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanSpecification msg;
    msg.setTimeStamp(0.5832284836471454);
    msg.setSource(37232U);
    msg.setSourceEntity(174U);
    msg.setDestination(56780U);
    msg.setDestinationEntity(185U);
    msg.plan_id.assign("YEPDIXHMRLRSOGWXDPAKJJQXAZQDLEDJLEOQHILQZSTNOVTYKRALMCTHMZDVYIAWERJTSFPKNOZXKVVERRYSBGIYSAQ");
    msg.description.assign("OXLSIKGQSUIGBUAWYRPCPPGFHVLFREVNQLMCDARRLBFJLRXEMFCTGR");
    msg.vnamespace.assign("SBACKYJOECIQSWPYEDRFPTGWTFIUGAVAZSUMDFHLCOUTLFYEPWZDZUYIZDMPIEQZEJPOOYOIHAJWRPIZJNFMJKLPQKRLMEFVJNQXJADAUCKKSLHCLNNLRSAWVVRXCZMRTHHXXIMITGYVTPUZGQLRWXENNDYHBDWVSUBOBSGBYJVGVVCIDDQOGBMFMBOQEABKVRKOZFFLI");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("PEINUULSLRLLJJVZDBRPIIMLWJDMASXSNKYVAPLDZUXFOZSTGSMUBTDNRXAQQNVHAXAVQPUENISDONHOJHWCKUMCKFSMKWTWIYFJFNYIMTITGQOVOYFWMGBGNXODITBCUWYCPDIEKBLOHLFGIOMKULAHYESXBZUEFAWKEQDRJCECRXKRFQ");
    tmp_msg_0.value.assign("EGJRWPTPDEIJXJYWJQJVJVVFWSCGULCPKIVZWUBIYIUWYXYEHVLBPDVERBPNBLQHIFHYOYATKQQPVZDVZVLGBYFCMEOYXDXHJPSBOXT");
    tmp_msg_0.type = 201U;
    tmp_msg_0.access = 78U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("FVTWMJVAWSOQGMSAKZCETDVUXRJWHFSORGCLXVIZHBDCOOJZMHMOAOXXKGBWXRCTQUNYOVFVRVUOLGHKPMMLGCQWXR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanSpecification #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanSpecification msg;
    msg.setTimeStamp(0.13340862738643855);
    msg.setSource(61585U);
    msg.setSourceEntity(108U);
    msg.setDestination(55053U);
    msg.setDestinationEntity(247U);
    msg.plan_id.assign("UYYJNJANQXMZNQPTLXMEKBVUO");
    msg.description.assign("TXIJKXWADVUFAKHILQTBGEAPAFKRJCBDSCDQWVFMRNNOKOLMHNGBWNYVKQVKXKBGEJYSSSEDYQENXIPDBPZRLNMVCIXPYTPIWWDOBGZXJANFOYRRZQELLFZWHMOEUPFMTZCUHRCLSIVQMDZCXQHRRHYXQUBOICPUYEUTOTWCWAIBKJYTEGMTNGMKXSSZODHCTQLSYVJALLOEJNVGXUSIDEVJFYBURWQAFWLZASHBMFGPJCGNHATMZHGPZFVR");
    msg.vnamespace.assign("VCTNCQJVGFTBXGZAIQCRGANVIZYOETCSOQOVRWKOYSWWOELXKEAIPDQMNVTSBANVZEFXXNZNUCFFLELQSEYEXJQMNRVSVFGUOZHMFDXFSEGASKTNGTQTSXWLDIWUKYYLPJCOAUUBJUTIHQMAIWRHBIBPCLWUHRHOCLJDPRJNEPRZHUKWKMVTZQBSFDKULHPWMCOPYTZYKWAZGJDJPEVKZGIADFMCHHHSKIUMXPYGYBRJODQBRLXRAILBDJYDN");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("LGTZWUOZWHJUIEYDJCIBNCLTOPUUENDQQVLHRCBPTGQFZKZYZKCFWCOHGSSZKLEAWIFAXNBZSRLAIFDEYYYCVDAOPOQJFLYBAOSPMQTDGPTXHNJJFVLVUISRVHIKLDXGRNZMQGRDEWRYKWBXOULKNHBVPMYITOSHMTINHUSBAPQEATXGXAVLWGJFVMRXDQKOFURSMEMTXBMUVVBXJEDSDRAPKICJHFQGNRYJXGT");
    tmp_msg_0.value.assign("TRFLKOLHHIYEMECCUELBXJCISWHLFTEXRWYGVOFNWDLHZJYDQNOCWFFXAUEDRUWKSGQOOZAXAFQIPDDYQMTWFWDTEREZJVKZNOBXYIWGZGHLJFQKUBMSBRJLZMKTVSQJAEUZUKGDJMRTGBNVZPRBVJZQUBQXIVXMQIOGCMANBHIFTGDOWDFLCYSMSKIANHVZSVPNIBYGWNRTRYQVACOJMP");
    tmp_msg_0.type = 217U;
    tmp_msg_0.access = 113U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("FABZOFKINDZSUOCYMOJLYPPNAXMHBHUDNRUTVIOMHVWGXWUOIGHQPBLSSWTGKAGCYGDQATBPDKFLVCIZFIEFZTREYVCYMBXJSUNHPXMRROQSXNJTUVJWLUTXNEMFJCJDOVZAJSMKKDESHGVPOZYQCIWFLTGTAFWWU");
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("TTOJSHZEUKPEFXCNIYWFOKPZOQRC");
    tmp_msg_1.dest_man.assign("DJGJEEYKLUFEXYKCEFXRXZHTMCTLLEIBBWJJZPWBACTAFJFWKNZAUZCIDOXGYTCSDHTSGMWGEYYPDUIPFNGPZYWIDLGAFVBVLPBLNCMTZU");
    tmp_msg_1.conditions.assign("XEDHHRWRFWWMTAATSUZICUGZHMFDVAVGXKDIRKHRPTSTVNMFBJJHSQBGGMPSNVFBKSPQVFLPQQFKBNQ");
    msg.transitions.push_back(tmp_msg_1);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanSpecification #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanManeuver msg;
    msg.setTimeStamp(0.318508762590861);
    msg.setSource(46031U);
    msg.setSourceEntity(211U);
    msg.setDestination(3699U);
    msg.setDestinationEntity(174U);
    msg.maneuver_id.assign("JOGFBTOHJRGIPDZEEEAUWGKZFZCLBCEBRSVTKINOTRSRIDNCOVAWGJBXBKOAAGDJSBNLEFHJVGZYW");
    IMC::Alignment tmp_msg_0;
    tmp_msg_0.timeout = 12802U;
    tmp_msg_0.lat = 0.3182826705472612;
    tmp_msg_0.lon = 0.7019141225982768;
    tmp_msg_0.speed = 0.6609226193758496;
    tmp_msg_0.speed_units = 33U;
    tmp_msg_0.custom.assign("CANTNHGRVMOOZPIUTHIEDUYPZAXLKRKLBMAMQRRLFFTIJ");
    msg.data.set(tmp_msg_0);
    IMC::UsblFixExtended tmp_msg_1;
    tmp_msg_1.target.assign("EAGZUYYDLGKVBOCSDQOFLMNXFNCHMBFSPVJQKVFMNPXSUOJFSCDTRZFXEKNEROUKZZNATZBICUWZGJIIKKMHNPTKUHIVVAFIUSOOMUETRWFBLCZZDHXQEWFVOHNHHL");
    tmp_msg_1.lat = 0.5613845977201588;
    tmp_msg_1.lon = 0.8416791162289464;
    tmp_msg_1.z_units = 117U;
    tmp_msg_1.z = 0.5363697926106562;
    tmp_msg_1.accuracy = 0.39455206648604746;
    msg.start_actions.push_back(tmp_msg_1);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanManeuver #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanManeuver msg;
    msg.setTimeStamp(0.46281674853445576);
    msg.setSource(15031U);
    msg.setSourceEntity(233U);
    msg.setDestination(18704U);
    msg.setDestinationEntity(82U);
    msg.maneuver_id.assign("JYJDNJCAIIDREYXHKYTUWDZWOFMEIZYSAMASXNUJKBBEQNPZGJNWFTPQWRJLOTAPMLTZGPZFNXKXDNLOMYPXWFXXMQUTHCTBZVIHPERZQDXBBIRYPBCGFMDPKKIJWQQKQOYQUVJCBSRHMHTEWGCTMNSTKSJPUNTALNIYVVOMSNOYVAMAHHGLSRUDRILEPWGCDBR");
    IMC::Elevator tmp_msg_0;
    tmp_msg_0.timeout = 45567U;
    tmp_msg_0.flags = 149U;
    tmp_msg_0.lat = 0.1234144432311376;
    tmp_msg_0.lon = 0.3149706882152806;
    tmp_msg_0.start_z = 0.6134065418338663;
    tmp_msg_0.start_z_units = 18U;
    tmp_msg_0.end_z = 0.7384874547879942;
    tmp_msg_0.end_z_units = 25U;
    tmp_msg_0.radius = 0.5661611565739807;
    tmp_msg_0.speed = 0.24088885238757773;
    tmp_msg_0.speed_units = 161U;
    tmp_msg_0.custom.assign("XKMLGCBRSTPUFTJHHNZBQVSTOSQEIHXDJINZGWCXPOKBXCCFIOZCWNMGFCERKTPLDUTU");
    msg.data.set(tmp_msg_0);
    IMC::ManeuverDone tmp_msg_1;
    msg.start_actions.push_back(tmp_msg_1);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanManeuver #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanManeuver msg;
    msg.setTimeStamp(0.8413655172330788);
    msg.setSource(807U);
    msg.setSourceEntity(139U);
    msg.setDestination(21061U);
    msg.setDestinationEntity(150U);
    msg.maneuver_id.assign("XBOLVUJEOQYALZMDRIGOGVZMBQXBPANAOIMXZNMDRLUHFFFUAPOIGYQWBYSNTXVSDYOMUBWKFI");
    IMC::Launch tmp_msg_0;
    tmp_msg_0.timeout = 24329U;
    tmp_msg_0.lat = 0.17709413794272255;
    tmp_msg_0.lon = 0.13438722588078;
    tmp_msg_0.z = 0.6784878584601602;
    tmp_msg_0.z_units = 188U;
    tmp_msg_0.speed = 0.3322693822642231;
    tmp_msg_0.speed_units = 125U;
    tmp_msg_0.custom.assign("XUVZJJMYBLSXAMFVBEDWAYNBQYUZQDAVQXCITGSOADMOTTBLWRDOFFNAWPUVOPESKXHVNNPGWRCUYSEJJEZPUSCTXYHHKGQRHZBIMIAXFRCTPQUSTWEMTIINKNNHFRUZZKVAKOPDKOBJFFILBLCYWOMIHWKIPFRSJYIHVPEXCVRTPXZLWDAAUVOQKFXRGQCUZEEOEQGGLQJMDRDYUGTNHHBGBLSEKCGOMIJNFDQSKNCCLGZJW");
    msg.data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanManeuver #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanTransition msg;
    msg.setTimeStamp(0.8441286993321895);
    msg.setSource(51760U);
    msg.setSourceEntity(85U);
    msg.setDestination(55495U);
    msg.setDestinationEntity(124U);
    msg.source_man.assign("OXJALGFYDUWYLKPZSUIRTLUANOYMAQWVZBSIPSCQZMOVQKKQMMKTPNFDCTZNPIVADBEXPFNWTXRMVNQTEHCIQZPFSDWHUNCIXPKVCQGMBNVFIBZSEOTLWIJKBYVBFHXEJQNADJLJUXOHMRXLESAYDOAFZYGCKEWVOAGGNGSSQRXBAVHRDTOFTBCHBYOGGUWGHJDCEHOEJJUGU");
    msg.dest_man.assign("FENVJKQXAMJOSPJKFADRJIQKRCZDZGWZFVGUOMDOPOWPZMGYHIOSKPJTOVHUHNKSYXECMLKPKLPPESZWZXRQTNYMINYNTHG");
    msg.conditions.assign("FUAHMFYSPEZBRSSDORXDKWFUGNPLVGXOCZTENCFTIBSQXJCTVWCHGAWLQBVKODCPWQZMVPJUFDQSGKDKHFIMXVIFYTSGAKAINQUYJUJAIEYOLZXHXEWNVHQKCFYPVQFWJHJQQARLGW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanTransition #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanTransition msg;
    msg.setTimeStamp(0.014441540434937172);
    msg.setSource(41538U);
    msg.setSourceEntity(214U);
    msg.setDestination(40157U);
    msg.setDestinationEntity(65U);
    msg.source_man.assign("GMKKDWJGQFTZUTHNARPEDNRIKUNNZVVJLBMCMKFUOJQMFFLMYHCEDSQDUIHCTITENZRPLZGYJSBZMQTBPOEOGCKPBYNJBQIQIPNLYVRNGHZTIGVKJXUCHEOJPFSEOGIKGBYFOHLHDPIPEKXTAFBDRQWMBRNHUVLCCNPWLXYUSMAFQTCXMZBXKGVLTODZSSAHW");
    msg.dest_man.assign("KJDDNYIHBSYNNWJPMXIYDIPHRRTONPZFQYRBLUZCCFGVLGPXEGLDCHEFRMCMXQSBQIYAOEQUWPVABKSGASLQUKBHBTMKFARPNULKTXTQGUEVSFANFJMCLFRSMODMWUEPDLMGATZEVLWACMCCIBVTLTSXJZDXTHEVOPOJLJPKVOJVZZBHIXAWVQWYTZ");
    msg.conditions.assign("ZYFHMINEVXEPQPGFURWJDCMFFTWKRXSSDQZXJFYTGNZVIQSMLNOSWSNQCWGGTATEUEPWLOSZLZMRWUWAOJQWKITFUFYUKYNUBHRSVCVJSOYCAHRABEUVXSCJZHT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanTransition #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanTransition msg;
    msg.setTimeStamp(0.6508025579555777);
    msg.setSource(16872U);
    msg.setSourceEntity(2U);
    msg.setDestination(18600U);
    msg.setDestinationEntity(19U);
    msg.source_man.assign("WFSPSHIKJYXPDQCHQSJLIBOGRZVLKGGQYRRFGDDMEIPTUFXZOWRABDVJVWSHEDVWBDTCTLRQEOVOZTJNBKXXHBFYCIUCQFXVRWEAJWJMMLEOGQXNCEEFQAUTZBMCYHCMBUZJEVSDDKMUPLCOSJIPAYNSMUYQNGABGWNKLYJKLAHXACKSXQIZFUOMJR");
    msg.dest_man.assign("OWPOUZEEJCIULMYFODFAUAHGKJHWUMLDOYCRNDTLCXKFSCJSTEAAOIBJBEKLYRFLSXYFNH");
    msg.conditions.assign("MPFXPJVGWPBOCBUCJRMLIWKNOLMOZHEVHQCXOMZBZZKKDJWD");
    IMC::LogBookControl tmp_msg_0;
    tmp_msg_0.command = 18U;
    tmp_msg_0.htime = 0.8142901303708251;
    msg.actions.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanTransition #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControl msg;
    msg.setTimeStamp(0.1663634201107247);
    msg.setSource(36904U);
    msg.setSourceEntity(55U);
    msg.setDestination(6529U);
    msg.setDestinationEntity(246U);
    msg.command = 18U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("DKPHTYAPKMSWMJUS");
    tmp_msg_0.description.assign("UJWJHTELNIXMOZVZHEHUNIGGOMVDSMYVWAKBCAJKATBGLYITIRRGFUZWTDZFZQYXRYQZFCSPHMJFRTKMRKYFSBYOELEUQHXPCKJYQWG");
    tmp_msg_0.vnamespace.assign("BNLYDNQUMVICDDQUQCFJGJWJXXSXDQXJUTPJAPPVKSQ");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("BKUJVHBOLEPONKZGMYSJCWSBDQSKE");
    tmp_tmp_msg_0_0.value.assign("JXCWIHNUPESKLHAMYQFQPYKWEZTHRGTSSEKWIJLRMYJXWYLYYUVXARJBTIWJQDFEKZPUDNCWMISRNVXGMEPAQBMVNDEMIHQADIFTWJYXOTTPKCFZBCDESGUKUDRRHUTOPJLQLOCXGFCMAOFGLICCVHKZSNENQVHFKOYUFBDOPSLUJGZAPORNQRCKONQDAJCEBPMZVRLTEDMFUGVPTOTSAZSBHVLUHNLHJYVMOWDBSXXIVZZGNAGQFBIGRIWY");
    tmp_tmp_msg_0_0.type = 126U;
    tmp_tmp_msg_0_0.access = 180U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("LCXDARZXGYMENKM");
    IMC::GetWorldCoordinates tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.tracking = 181U;
    tmp_tmp_msg_0_1.lat = 0.6405254489866548;
    tmp_tmp_msg_0_1.lon = 0.8096731017178352;
    tmp_tmp_msg_0_1.x = 0.7871088483090869;
    tmp_tmp_msg_0_1.y = 0.6470614853018184;
    tmp_tmp_msg_0_1.z = 0.6146786680081756;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::GroupStreamVelocity tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.x = 0.6789196169447266;
    tmp_tmp_msg_0_2.y = 0.23161274454299086;
    tmp_tmp_msg_0_2.z = 0.3844643864047439;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_2);
    msg.plan.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControl msg;
    msg.setTimeStamp(0.7929218324821292);
    msg.setSource(23542U);
    msg.setSourceEntity(166U);
    msg.setDestination(4688U);
    msg.setDestinationEntity(36U);
    msg.command = 59U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("MDLJOIEDWQWJRUUCMCJIYPOMEKMHRYYTLTRZDGTNVZWGOYVO");
    tmp_msg_0.description.assign("KBQKPUVSYEKRSUAEPFAJFNRDKWPSYHSHQSCLZHRAMXDDQPWCOFFTEEUJVCJUKYFDEHTO");
    tmp_msg_0.vnamespace.assign("RLPRTOOKXMREVPKSVLLBYSXWNSMFHXJVGNHAZPKAAJFBWUQRTZAFHTJCEBSFWONDGFCHKAGKVEHAMPXIFDXYNOGD");
    tmp_msg_0.start_man_id.assign("QIHYRDFBRMHFVLXTEPLQOIHNBGDBQPLFISCFHOMIVMCJIVWCQIGKXMFLZPGLJIYHRJICXZBBZCPNUYJFROWTDKDPTRQHLMEBEICYM");
    IMC::UsblConfig tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.op = 127U;
    IMC::UsblModem tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.name.assign("FRCJCDZBDYMZLSOJTYNVEZYFWXEFZGIMTERCROVYXALPPNCUSCSHPBNLUSTEMLEXXLJOLAFBGMUWBRAP");
    tmp_tmp_tmp_msg_0_0_0.lat = 0.6918319544406001;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.7137960065635616;
    tmp_tmp_tmp_msg_0_0_0.z = 0.13312087942821138;
    tmp_tmp_tmp_msg_0_0_0.z_units = 213U;
    tmp_tmp_msg_0_0.modems.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControl msg;
    msg.setTimeStamp(0.5590175727217868);
    msg.setSource(15163U);
    msg.setSourceEntity(128U);
    msg.setDestination(29882U);
    msg.setDestinationEntity(232U);
    msg.command = 38U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("GTQHOXHRVUEXUPOGDWAWTDSDGQZZJKNPALLYBLPEACOAXMSQNDTIFCTPGYPKVIPBEWEVYNFYNEHIDPCJAMYPUFAEMCPFJIOQKRLGHZOMFCJTXEMOZHHRYOMGKOZHETTNQRFSYRTNVLSDUJSBPIAWFBUGDZJWMRKLJEGZCVAMVXUVXSVCOIWFVWQNUQBXHQDKZCDAITKUZDEMLHHLNWYYKRGBXKYCBSWFWQURZFTBIBSLSISONXGACQJJLJN");
    tmp_msg_0.description.assign("FGDTPOCRBKAIGTMTRHTWXEFUPVOEYLCZIDURTEZPNXXLJOYAIEIJOWICVYCKSMVFFINUXODKPSLNWJKHARKDAYNVXHZRQD");
    tmp_msg_0.vnamespace.assign("JHVMVLXYURWBKLPOYZWFHNNOWVJKXJPEUADETCJATYHNPKFSBXZOQXZOETWWQVLDCJRBMRAALOYCQGAWXHFFLXHBXBAIKQDURWOBCGRPLBXSEYEGUGFDSOPNIQULIMMCQMEZHNQJVRFTKTYRJCEQDHFPJNNZTIDYGPIAHULKMSHUZVZREKOSTQGKGIPKMRDZGCY");
    tmp_msg_0.start_man_id.assign("KIMEPUMDCYAQDTJBPOBVADBSXXISKQGWSDFRQIWZBRRKBSEHWUGGVPWGANZULPFNVWMFZDAVLZNAUJEFKOUCKHORBAVZXXTFQGMNLJZCOFFYEYYZMLMCMDHGENVJVCOOVPGTAKJYXXBRRHPXPDWHTSXTYRNIKWEQHNVMPCDJQBTGISKLLAJRSINTNIMQEHCNQBHZLAXRQ");
    IMC::EmergencyControlState tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.state = 222U;
    tmp_tmp_msg_0_0.plan_id.assign("EBRUKVUIBNJSACOPXGTIYLOCRPGDYYIMDFHDXKQPGYQONDXZSYVMTGUEY");
    tmp_tmp_msg_0_0.comm_level = 63U;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControlState msg;
    msg.setTimeStamp(0.6127196382274044);
    msg.setSource(41396U);
    msg.setSourceEntity(121U);
    msg.setDestination(27441U);
    msg.setDestinationEntity(219U);
    msg.state = 219U;
    msg.plan_id.assign("QRUYOMMQVPBIXBIWSAXOFCQBNYBSKKWGLRLZKDYIFKGTARLKUTQDVZWYFTNCFDFWNJRHGSSTEVTBICVIUNOJEUGTARXTMSHQTHXAWLEPBKWAMUJDNHHOPLJZGPDATGOCDYEZXZDZEYMLXMCJOVAWSKNQCSFHQUONXJX");
    msg.comm_level = 125U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControlState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControlState msg;
    msg.setTimeStamp(0.7184448297466137);
    msg.setSource(18696U);
    msg.setSourceEntity(152U);
    msg.setDestination(21618U);
    msg.setDestinationEntity(215U);
    msg.state = 218U;
    msg.plan_id.assign("SOZLLMWXHXWCANOUBJCT");
    msg.comm_level = 23U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControlState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControlState msg;
    msg.setTimeStamp(0.8619652993808499);
    msg.setSource(45625U);
    msg.setSourceEntity(76U);
    msg.setDestination(35864U);
    msg.setDestinationEntity(94U);
    msg.state = 149U;
    msg.plan_id.assign("ZTSSDYBLUZKVNOMJINBTIHHERPKRDOAOCLKUXOKYGXZPNKXXKDBWESDCZTOUZWGJNSAMYQEUEGOEXVBVIOJCBPPXFTCRFLASUDQKZRLLZASYLWJ");
    msg.comm_level = 218U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControlState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDB msg;
    msg.setTimeStamp(0.3337403464192311);
    msg.setSource(17622U);
    msg.setSourceEntity(93U);
    msg.setDestination(5722U);
    msg.setDestinationEntity(62U);
    msg.type = 92U;
    msg.op = 43U;
    msg.request_id = 2147U;
    msg.plan_id.assign("TOZPMYNXFTUBIFKLNPMFBRAYAJDKEMFKWWQYLUWOTQVBOUIGMGZXAZBTNSBAOJHJRSFWJSNPYHCVDEFOCWDBDLDTVQWPWMSYCTKAULQTEXZFAYHOKLZKVACCTFYXPQVONUYVXAZGHZSTSXPIGSUYUIRNWICJRJDMXXPRCGKQBKLLVEPGXRTOFUSPUJHAEHQISIGLCMQJJSH");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("CXCKUFMTDWZVBDQNBQTMLBWWSLXRXULPOBRNWYTAVOEAXWZHEWATONVXCPRSMYUWYMJPEMVIHPJEXMTJLBYAZIMAPYIUKYJWBVVXEDNPNNUYSQEFIZRNOFKOAWLOVDNMGEGKUKVGUUCBBBFZRQPXQNOAHVHCJPRBLEMFOTDJQJEGQZSKCLIOHUYFQSSPHVXLEFFCTDTDDGCHZRGQGJJCAAWTDHKSUGFCYSGHZRKDJRSQKRTIIOKSYZMLGII");
    IMC::PopUp tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 57430U;
    tmp_tmp_msg_0_0.lat = 0.11026677958376296;
    tmp_tmp_msg_0_0.lon = 0.5753009306321024;
    tmp_tmp_msg_0_0.z = 0.016758871811588305;
    tmp_tmp_msg_0_0.z_units = 62U;
    tmp_tmp_msg_0_0.speed = 0.9487178617527734;
    tmp_tmp_msg_0_0.speed_units = 148U;
    tmp_tmp_msg_0_0.duration = 5505U;
    tmp_tmp_msg_0_0.radius = 0.6429966073587705;
    tmp_tmp_msg_0_0.flags = 234U;
    tmp_tmp_msg_0_0.custom.assign("SSUUOHEZTABNMXMPZDLDERMPTYOFUMHBHCEVLNIALHWIGXTFEVSJKJAP");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::ImageTxSettings tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.fps = 77U;
    tmp_tmp_msg_0_1.quality = 146U;
    tmp_tmp_msg_0_1.reps = 72U;
    tmp_tmp_msg_0_1.tsize = 2U;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_1);
    msg.arg.set(tmp_msg_0);
    msg.info.assign("GXCQUGYIEMZGTFCSVQHZMPTOMIWAYKGVCXSTOAXNKLBLYGPRRCLMSDHZZZCWQFKQRJWTIAEYMERWIHDQHDVTNMYOCIJPUMGKXDQNNJQUTGVDKULVWDLVOBRPVHLSCOWVXJWDJZFZWOPHUHEYBGPIYFXGDPAUYUUWMBDKKMSIBVFJJXRJTJX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDB #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDB msg;
    msg.setTimeStamp(0.646485997538312);
    msg.setSource(4712U);
    msg.setSourceEntity(87U);
    msg.setDestination(55536U);
    msg.setDestinationEntity(212U);
    msg.type = 204U;
    msg.op = 75U;
    msg.request_id = 39380U;
    msg.plan_id.assign("QNHFPXWZXFALMRBBHPTETEPJCPKVEQSDGQSIHLUWHPWBPFAZLKGMEWJMORZTFB");
    IMC::FollowRefState tmp_msg_0;
    tmp_msg_0.control_src = 47816U;
    tmp_msg_0.control_ent = 53U;
    IMC::Reference tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.flags = 205U;
    IMC::DesiredSpeed tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.value = 0.07728143064934723;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 201U;
    tmp_tmp_msg_0_0.speed.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::DesiredZ tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.value = 0.498927738010169;
    tmp_tmp_tmp_msg_0_0_1.z_units = 25U;
    tmp_tmp_msg_0_0.z.set(tmp_tmp_tmp_msg_0_0_1);
    tmp_tmp_msg_0_0.lat = 0.39173127858545875;
    tmp_tmp_msg_0_0.lon = 0.5061557679436913;
    tmp_tmp_msg_0_0.radius = 0.18439786281187387;
    tmp_msg_0.reference.set(tmp_tmp_msg_0_0);
    tmp_msg_0.state = 10U;
    tmp_msg_0.proximity = 116U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("ZHXAHCIJUMVZGFOWIOSHPWXXNZEQUBTWXDAQXUDAIJHYQCVKLCLZDEQPUWASDAFIMNJVKFPJOHTCYRZONLUTRXEBXFTDBORFBBENEROLELYCCFKISEMKWOINYZYLNAPPZESQSHODSAXFEKTGLYIRTQZGUVQBIMNYROWPRLPIWMRMSHQHVSUACMBOBDDXHYENCDVDGICSJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDB #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDB msg;
    msg.setTimeStamp(0.3902277746777033);
    msg.setSource(13926U);
    msg.setSourceEntity(161U);
    msg.setDestination(46035U);
    msg.setDestinationEntity(17U);
    msg.type = 231U;
    msg.op = 0U;
    msg.request_id = 23038U;
    msg.plan_id.assign("XVTKNTHUSESTGOAFUMNHUTPLUICBEMAATIWNPRRDDAKJQXZPJKDADCGQLMFESDYYIYRXAVAWXVQUIYKBOMAHXAOGZHQLMKZFYVUUNPVADYPWYXPSBZPBHEXJYCDBMGIOKZSOMTFQHRNSGQCCGQRBIDHTSRHGFTLXEHCLIMVVOMOEJBOZJYQNXCLFLLWPENKDSRIJWPEWVCSSXWKRWJCQTHEDMFRKNBPEBWIYJVNURFIFZOGWBTZGJNUOZCGZL");
    IMC::AcousticOperation tmp_msg_0;
    tmp_msg_0.op = 0U;
    tmp_msg_0.system.assign("QPZEVMMAZSLULOJZKRVYCNOZTEHFKHHWAPSBPWOPDJGMTGCNQCASNOPDGZCEJTIULKBHVAOISRWZSKJYBBDQEBTVHRGEWRKDDLQZMQXBXDHUQJQDYUQFZUOIWVSMCIFEKNYRLAUYIJUDAGLXUOVJDLEPGNZWUTYRWAPSNKGHYEIONWIKFCVHXVTRCMSMZYBIJPEKMTCADGBXHYTSSBMNXGT");
    tmp_msg_0.range = 0.3145405663600651;
    IMC::EmergencyControl tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.command = 211U;
    IMC::PlanSpecification tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.plan_id.assign("KNXTPNKNBCZSBMXVNVWHREVSKJELGZBMLLMRNALIVVMNIATESDTGWFQBEGJJNEGNOYRCJJOYMPDIFHIKPMOGUQLIWSYFDFBGTCWWVPDYAHYWACKPDALKALZZVWOLDURSEBUXMCTXBXOCVBWGOPTXJJCQCWNXETDQUISFOYPYRGX");
    tmp_tmp_tmp_msg_0_0_0.description.assign("PPRUGFWMUNSJYBCQHDSVDJBMFQNRIQNJMPJNZ");
    tmp_tmp_tmp_msg_0_0_0.vnamespace.assign("SKLRYYRFHCLNCIFSHAUECHNXOQVDFTIAAADGUGLEKRVMUJKUEVWMRXTAINKSOYKYEJUPSZMBXJNJHAMSJTUNPJDBGJWGIEZYVOUYIVTQQPPRETLKQMYGQMYRNTGLBDMCJWOZOQKPUSPZXZBDEMQLWFXCXPHLTEPAIUQAXIHOD");
    tmp_tmp_tmp_msg_0_0_0.start_man_id.assign("KLOFSJNXKIGHDZJDWBSNFGJJIHJCCDVFNNDGDMEAISQSOYAEPBIXYQPBAFNXUPTGRMBGTMKTFJTVMRRJGOKEBEWCWHVVIHITXLMNLRBOPMRLYUBWJHGVQICMMZROZSIZPZHTNCRXWAYAVQXNSFMQVEWHQQZNUZSPXYDHLAEU");
    IMC::PlanManeuver tmp_tmp_tmp_tmp_msg_0_0_0_0;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.maneuver_id.assign("IMBMLWXIIEK");
    IMC::Rows tmp_tmp_tmp_tmp_tmp_msg_0_0_0_0_0;
    tmp_tmp_tmp_tmp_tmp_msg_0_0_0_0_0.timeout = 37984U;
    tmp_tmp_tmp_tmp_tmp_msg_0_0_0_0_0.lat = 0.4826985830536511;
    tmp_tmp_tmp_tmp_tmp_msg_0_0_0_0_0.lon = 0.38123106644293436;
    tmp_tmp_tmp_tmp_tmp_msg_0_0_0_0_0.z = 0.8849588334056757;
    tmp_tmp_tmp_tmp_tmp_msg_0_0_0_0_0.z_units = 30U;
    tmp_tmp_tmp_tmp_tmp_msg_0_0_0_0_0.speed = 0.5637435707179742;
    tmp_tmp_tmp_tmp_tmp_msg_0_0_0_0_0.speed_units = 74U;
    tmp_tmp_tmp_tmp_tmp_msg_0_0_0_0_0.bearing = 0.08832871256238106;
    tmp_tmp_tmp_tmp_tmp_msg_0_0_0_0_0.cross_angle = 0.653170154514948;
    tmp_tmp_tmp_tmp_tmp_msg_0_0_0_0_0.width = 0.7397241953023351;
    tmp_tmp_tmp_tmp_tmp_msg_0_0_0_0_0.length = 0.5109698178929869;
    tmp_tmp_tmp_tmp_tmp_msg_0_0_0_0_0.hstep = 0.3207019373140605;
    tmp_tmp_tmp_tmp_tmp_msg_0_0_0_0_0.coff = 33U;
    tmp_tmp_tmp_tmp_tmp_msg_0_0_0_0_0.alternation = 145U;
    tmp_tmp_tmp_tmp_tmp_msg_0_0_0_0_0.flags = 187U;
    tmp_tmp_tmp_tmp_tmp_msg_0_0_0_0_0.custom.assign("AUGJYFXJFIKCMPURGMHOVIXBCBWUKYOUTQOZPESFQVYEPZIZVRHQEMOKRE");
    tmp_tmp_tmp_tmp_msg_0_0_0_0.data.set(tmp_tmp_tmp_tmp_tmp_msg_0_0_0_0_0);
    IMC::HistoricEvent tmp_tmp_tmp_tmp_tmp_msg_0_0_0_0_1;
    tmp_tmp_tmp_tmp_tmp_msg_0_0_0_0_1.text.assign("NHOUDYHVIYISQFGLUWKBCJOSKXURBCGEEVVF");
    tmp_tmp_tmp_tmp_tmp_msg_0_0_0_0_1.type = 199U;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.end_actions.push_back(tmp_tmp_tmp_tmp_tmp_msg_0_0_0_0_1);
    tmp_tmp_tmp_msg_0_0_0.maneuvers.push_back(tmp_tmp_tmp_tmp_msg_0_0_0_0);
    IMC::PlanTransition tmp_tmp_tmp_tmp_msg_0_0_0_1;
    tmp_tmp_tmp_tmp_msg_0_0_0_1.source_man.assign("PVXKVZZFXGKIVRSFFNGOARIXFPCRUCBMMXCEGTSFHSLOQDAPEUGEEMMOBLGOJUYBJMZDLXAWLDSOWWHYLYHGZIUBNRTSOTIUCGNGXMVAQYIJCMMDOFVDQBELPTPINJHRGDHZHAYTMYJBNELRRVTWWZNKIWEIAVUNEJRYXFWJFFKEPTKOCLVZINJDJCDXHXHSZLGSESQWKPCQWTVMPYQIQSLFOKBJTBYUCDYBQPZCQZXRVRAK");
    tmp_tmp_tmp_tmp_msg_0_0_0_1.dest_man.assign("FWCQYAIOACHIYVQNRADUQTYMZGZPJBUECBGISXHEVOLSOBKZJDXPKUAVLWIMAGWERMDKJNOCJTYORHCBLIGKHSIUGDFQURLVYSMWHJKNTAJHMVJLPATFZTSRLTBCXFDPSHACRKTNGRWLKVZXSWWMNXOZOPZQJXMCVFLJUT");
    tmp_tmp_tmp_tmp_msg_0_0_0_1.conditions.assign("BXPKQZGIZLRLDBUJBVGWHIQQDYXJGTHMXFBLNRRHGZRDYJISJOWTCEKTUNDDTBIZVQNSOKXFUIOCRYQDCTTUHAEYRZMWPVKEYUWZLYXLAVYRQCOEBPDKAMNSINAMIBGVSOTRGPKSGRFSVCGFTJOOOCLYBZNZMFROBUSKYEAKZYGELUDNXZWFVMSDHJJEHHWMUHKXCHDVMMJLPWUNWQEPCSEXFVLAVI");
    tmp_tmp_tmp_msg_0_0_0.transitions.push_back(tmp_tmp_tmp_tmp_msg_0_0_0_1);
    tmp_tmp_msg_0_0.plan.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.msg.set(tmp_tmp_msg_0_0);
    msg.arg.set(tmp_msg_0);
    msg.info.assign("QQREXWUNVPIYJTURUDNSRZXDSFYKHZWCUANSNYIAJZHXEHRFKZLEXXXDKHYKCQJVNYFQOWRTNBOUSGITRLTGWWESKCSRQH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDB #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBState msg;
    msg.setTimeStamp(0.08432183386818537);
    msg.setSource(64489U);
    msg.setSourceEntity(195U);
    msg.setDestination(31988U);
    msg.setDestinationEntity(254U);
    msg.plan_count = 62424U;
    msg.plan_size = 2138582544U;
    msg.change_time = 0.3063199597754116;
    msg.change_sid = 61006U;
    msg.change_sname.assign("QBIOJHYLTVSMKKRINHNKHDSQYJWVENWYGMXYYBJZXRQTCBQGXWPBOKOLYGVQQAGAZHAQMEUFJZTRLABGFICVVSTNFTDOUJBERIEVAFVFFEMDYASKJNOIGZJMORPRAGROLUVIHEAXOBECUSDUBZFZPIAKEPVPHIZIXQQMHWLXNGUZSYKDWTMPFPCSWRBTCUPSPLICXBLNFDXDFWZKTKHEZQYHVLALSXLJNHMUWGMDTG");
    const signed char tmp_msg_0[] = {-42, 50, -89, -96, 111, 113, 71, -83, 25, 16, 106, 22, -107, 10, 16, -85, 14, 106, 49, -12, 83, -114, 97, 41, 62, 21, -66, -11, 126, 113, -66, -102, 102, -51, -27, -51, -119, 100, -18, -32, -22, 14, -16, -30, -107, -84, 26, -92, -25, 40, -81};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBState msg;
    msg.setTimeStamp(0.929550402340698);
    msg.setSource(47751U);
    msg.setSourceEntity(148U);
    msg.setDestination(20847U);
    msg.setDestinationEntity(185U);
    msg.plan_count = 50623U;
    msg.plan_size = 853383481U;
    msg.change_time = 0.8844813944331423;
    msg.change_sid = 22208U;
    msg.change_sname.assign("HUDWJGWTLTTBPABNZVBOTCIWYNINXQCNCYVOXBGLILZDDNILUMOVGZHZUPJJGBNFWAKXDGDPMIVSIQRCUEMAQIYPMYMSNQQUPWGSRFLQETKZHQKWHYDRJSERJZTCKZJVVHKGXTJCYAAYRLXKWOFYMOEEPMHKNIDXLRRUVCPAHHUVSFBISJXYQKJSNZPEMOHBDFCBEBGXITVFF");
    const signed char tmp_msg_0[] = {124, 0, 43, -49, 16, 52, -48, -4, -18, 92, 37, 5, -113, 30, 50, 100, 103, -91, -53, 64, 84, 64, -92, -6, 29, -16, -97, -51, -64, 125, 60, 61, 109, -66, 53, -76, -19, 83, -66, 29, 83, -57, 22, -7, 88, -62, 52, -38, -44, -74, 21, 63, -53, 2, 17, 67, -75, -122, -44, 77, -8, -39, -122, -111, -35, -36, -117, 113, 41, 75, -96, -62, -5, 100, 68, 126, -114, 42, 28, 53, 42, 13, 93, -32, 65, 67, -67, 75, -128, -73, -90, 104, -2, -118, -12, -99, 65, 104, -101, -53, -22, -55, 10, 110, -116, -31};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBState msg;
    msg.setTimeStamp(0.8697009426961063);
    msg.setSource(10445U);
    msg.setSourceEntity(63U);
    msg.setDestination(11424U);
    msg.setDestinationEntity(236U);
    msg.plan_count = 15952U;
    msg.plan_size = 2350702931U;
    msg.change_time = 0.11863123182086832;
    msg.change_sid = 15673U;
    msg.change_sname.assign("BCUHFZFYQWBPNIKAENCLSKNDQUGNZJIVGRWGEXZJWGEGMMHHMCXBMLITPKAIZUTBEWJSYGLTOGRRDDWDSQVXTAZASKY");
    const signed char tmp_msg_0[] = {-3, 42, -35, -89, -20, 70, -31, 95, -54, 69, 5, -35, 41, 59, 54, 81, 101, -9, 47, 117, -23};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBInformation msg;
    msg.setTimeStamp(0.9609494017618525);
    msg.setSource(41284U);
    msg.setSourceEntity(188U);
    msg.setDestination(1014U);
    msg.setDestinationEntity(209U);
    msg.plan_id.assign("NVSKSBEMMVPPTNXEGYVAZCPJJGWVARJACYZMZKDCNDBHVYRHDUSUYMIZZUZYRT");
    msg.plan_size = 38580U;
    msg.change_time = 0.3637698895061555;
    msg.change_sid = 1572U;
    msg.change_sname.assign("RKILZHRSPZEIQJGFUQRCPKCJALOFXWWZDYSYEKUAQYDVEBCVVTQNWLKTMONREJSNSHZMEEPLCVEGMOXMGCBBRIABBOZIWTNQTZYECOGHFRLFJLYDAXHWZGDWVVXMMGUFUSLXJXAOSINODRYPYXDCVQHJGIXLIQMUTGQFQFKAFVUEWRTZTOZNTUJJBMJNZKVTPXBQPLVAHIXSAKYSSCHRPDGHFABKPWRSJTDIUOMYNOPWEGUIDFNKAPNCB");
    const signed char tmp_msg_0[] = {91, -88, 123, 112, -78, -101, -54, -109, 9, -36, 40, -76, 53, -76, -120, -119, -4, -60, 97, -22, 26, 82, 26, -6, 120, -1, -1, 35, -59, -63, 8, -35, 53, 4, -9, 79, 94, 64, 75, -126, 57, -6, 73, 112, -115, 26, 110, -22, -84, -48, 122, 96, 57, -99, -62, 64, 4, 39, -88, -33, -19, 9, -119, 18, -77, -8, 124, -111, 121, -124, 61, -13, -4, -106, 15, 81, -52, -37, -41, -71, -117, 109, -1, -97, -73, -11, -68, -18, -93, -4, -6, -23, -27, 53, 20, -41, -25, 120, -32, 77, 111, 118, -50, -37, -103, -105, -24, 110, -100, -109, 82, -74, -21, -113, 96, -113, -76, -58, -8, 5, -70, 18, -125, 28, -121, -93, 79, -31, 66, 81, 117, -11, -64, 124, -115, -53, -77, 88, -54, 37, -105, 66, 41, 124, -50, 30, 125, 66, -128, -122, -83, 117, -94, -125, -100, 72, 12, -63, 27, -88, -87, -93, 5, 99, -40, 5, -123, 120, 37, 32, 112, 61, -47, 99, -116, 30, -123, 70, 105, -81, 51, 123, 23, -116, 13, 29, -52, -85, 20, -3, 11};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBInformation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBInformation msg;
    msg.setTimeStamp(0.2633474251166933);
    msg.setSource(6943U);
    msg.setSourceEntity(218U);
    msg.setDestination(45098U);
    msg.setDestinationEntity(187U);
    msg.plan_id.assign("WNUSXOYQIYWRTTXZCNHPTZSARHTZDUDDJKVLKAQUDKJWCNSODJEPWTVZKDGTPVMIFJEAVJUEXLCGNHWTSUOMOEGAIOICRVHGXJZP");
    msg.plan_size = 18641U;
    msg.change_time = 0.6124099784382556;
    msg.change_sid = 13904U;
    msg.change_sname.assign("HXDAKVZFEAUBCIQHNXUGHAPPOFHSTUNBMCNIVBGMXMYYLYKJWOEOWGPGTFDEMAHDUBNKRVTFVSLQMTIZSRLTORZIMNONULZJZOTICKVMAWQLLYWEDEHAWVZVJJSYCYE");
    const signed char tmp_msg_0[] = {-62, -80, 46, -88, -106, -19, 67, 80, -91, 113, 114, -111, -17, 119, -23, 118, 7, -88, 0, 4, -108, 40, 25, -11, 8, -40, 45, 62, -57, -124, -17, 32, -89, -37, -114, -36, -33, 97, 20, -128, 56, -32, -106, -58, -122, 94, 18, -124, 27, -80, -32, 11, -119, 39, 24, 25, -21, -39, 80, -52, 13, -16, -44, -73, 7, -50, -28, 87, -7, -40, 123, 62, 61, -11, 41, -4, -17, -109, -42, 96, -8, 85, -92, -56, 85, -10, 76, -6, 76, -77, -44, -39, 99, -9, -102, -50, 45, 13, 119, -46, 40, 33, 3, 122, -50, 125, -119, -128, -106, -46, -71, -86, 66, -60, 23, 39, 34, 81, -35, -69, 87, -28, -82, -124, -38, 88, 90, 62, 62, -15, -91, 35, 94, 47, 87, 49, -9, -101, -102, -60, -5, 33, 10, 31, -92, -5, -96, -43, -40, 113, 61, -105, 46, 41, -113, 78, 118, -14, 111, 82, 118, 81, 69, 122, 114, 75, -80, -48, -18, -66, -44, 12, 18, 106, 7, 69, -22, -38, 106, 96, 32, -70, -9, -44, 105, 24, 13, 22, -98, 16, -54, 1, -120, -14, -6, -108, -31, 112, -87, 9, 125, 114, 65, 9, -67, 115, 91};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBInformation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBInformation msg;
    msg.setTimeStamp(0.9239582509930283);
    msg.setSource(49942U);
    msg.setSourceEntity(200U);
    msg.setDestination(32831U);
    msg.setDestinationEntity(18U);
    msg.plan_id.assign("GUINRMWYARHNNQMLNXJYOTSUPEBHSSEWCOCQHFOLPFMKRVLUWXVGSVBYNAHXUHTZBZNKAYBTNGPYGIDLMUFEQCEYJPMBQCTCAOCGMAGEGUDJKWTHREJESPWCZEOMCDPLRZVVGNEZPQHJYNNFITJQMVVXZEAYXSTUFQKCBPAGQIYOXFPRDHTWIZROBDUUPVKKOOIYL");
    msg.plan_size = 43348U;
    msg.change_time = 0.17666917465012122;
    msg.change_sid = 39083U;
    msg.change_sname.assign("RVKUOJOGHICKSCQGRBQJQRDEKSPQHSIDIFZNFAABTCTIFLANOTRMQNXEAZCZVXGPQPAWHPXLADEMXJICVNXSKBUKFHRRYLBAJVGXLZPEYDGMIAZPWDLTRNVSUSFOBAIKMZUGHGWQIICHUZIKWVSHLQEQWVOVUSEFDCKCNOQHTERFGJJTOMWXKMCDYMULCAOXNEFDZFDYS");
    const signed char tmp_msg_0[] = {103, 28, -116, -106, 9, -42, 91, 67, 32, 85, 69, 32, 53, 44, 73, -7, -11, -15, 88, 104, -62, -104, 9, 24};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBInformation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControl msg;
    msg.setTimeStamp(0.5915860386667342);
    msg.setSource(43335U);
    msg.setSourceEntity(112U);
    msg.setDestination(44362U);
    msg.setDestinationEntity(44U);
    msg.type = 247U;
    msg.op = 132U;
    msg.request_id = 53354U;
    msg.plan_id.assign("ECNTANAQDYRKSOBV");
    msg.flags = 19062U;
    IMC::UamRxFrame tmp_msg_0;
    tmp_msg_0.sys_src.assign("COLWDBFMUZWHEOYMBRWRAOIFEXAIEVIJHYZZCBDDQBIKBAZSQLGDOUFBNGQFLNVURCYETXUACIMKKVB");
    tmp_msg_0.sys_dst.assign("PJUTRKFBYGEUQHMUMGKPBLWQKBHESZCXGBYOHTTKNNVQXFNLCRGDHIZYWZIADDPKLHBGNRMSOVCPAHUWZSCAJILGNRSWFHDZTIEARUKGKJFKXOOFCSEVLORLRCNBRBPXLWYUIAJZBJWSPXVAISBVFTAMAWUPZGWDZIOACYWVRXNONEBQKCUFHPIIMHYVYEMOJJQFJEKHEMMLQYZNTTGWZXVYDXQCYTUPQCEFTSMQPALDXUMSJXTNDIFDD");
    tmp_msg_0.flags = 186U;
    const signed char tmp_tmp_msg_0_0[] = {-73, -110, 21, 34, -22, 3, -52, -102, 71, 66, 111, 5, -114, 103, -106, 35, -37, 110, -41, -99, 61, -111, -107, -26, 108, 83, -80, 100, -100, 80, -117, -27, -48, 53, -1, 115, -96, -29, -99, -122, -112, -128, 74, -104, -124, 5, -113, -74, 102, 124, -71, 52, -121, -26, 33, -39, 106, 108, 14, 68, 119, 106, -36, -35, -41, 36, -109, -4, -15, -83, -77, 0, -17, 24, -82, 97, 113, -52, 15, -108, -57, -105, 61, 109, 30, 41, -13, 91, 26, -20, 95, 41, 13, -16, -55, -86, 60, -110, -26, 2, -24, 97, 38, -123, -109, -79, -110, 18, -78, -8, -16, -64, 3, -17, 120, 6, -109, 21, -65, 93, 18, -5, -98, 70, 10, 48, -70, -26, -94, 112, 39, 18, -87, 94, -84, 125, -87, -7, -68, 122, 111, 37, -96, -47, -45, -67, 54, -42, 121, -91, 45, -6, -39, 112, -97, -126, 124, -124, 94, 66, -23, -109, -112, -52, 65, -93, 52, -99, -29, 99, 63, -17, -123, 73, 8, -115, -100, -78, 4, -22, -124, -11, -65, -76, 121, -57, 94};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.arg.set(tmp_msg_0);
    msg.info.assign("HOIRIHYCOBFKUQMREPJORMFXUUUMIFWEXKEIXTYETIZZLZM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControl msg;
    msg.setTimeStamp(0.24148546603433851);
    msg.setSource(57555U);
    msg.setSourceEntity(158U);
    msg.setDestination(8690U);
    msg.setDestinationEntity(111U);
    msg.type = 124U;
    msg.op = 26U;
    msg.request_id = 49198U;
    msg.plan_id.assign("XXRQTXRDUTJLTKXTJCMHIWIXYBCTSFGCQLJTTEHGAFIDSMNOEPWUNRBKLVFOZVEEKXYFCGRQYKPLUVEHHMVBPUSGMYBJIHZIZQXRFIWTIMCARSBBWDKPERSNLEBYNVTQNQWJKKZOYIOAHDUVAFOYPVDI");
    msg.flags = 65326U;
    IMC::AlignmentState tmp_msg_0;
    tmp_msg_0.state = 2U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("DSPGWDLGIYXWJQIRXMMTADHMAPVXRYRGGMGBJCMLVECQIJOFLZXEMBPZWISQUABENCOHOVWLXJNIAQSBCDCUYKLVZOKIKLJIFNFCXKAEAFLCGBMIAGBZVETIVTHQDSHINJWWMUJDNUTWGRUZRDDSFBHSEZMBWYU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControl msg;
    msg.setTimeStamp(0.9486363658068436);
    msg.setSource(50537U);
    msg.setSourceEntity(22U);
    msg.setDestination(48687U);
    msg.setDestinationEntity(238U);
    msg.type = 56U;
    msg.op = 161U;
    msg.request_id = 8227U;
    msg.plan_id.assign("FTULXMBOBGOCXETSXQXJOSYQHDYBCXTVAPQKZCUABWSVPHEKWRPRGFNRHPSHBIRPLLVLGXEKQGNFNXAZWDIZFWVQCUAAKIRNWACMCPDJAREKSZDRRUKJUGIHOUSEUFNTYTLIQJPDJTYGHVYTSTAYXWNKUFOOQRDAZDVVBHPLLVESPMGOENYCFIHBXLMNSZXBQMNJKZISHMCWRFHDOQJWGMAJLCWYKECE");
    msg.flags = 61479U;
    IMC::LcdControl tmp_msg_0;
    tmp_msg_0.op = 108U;
    tmp_msg_0.text.assign("QEOSELBVJEXYVWRQKEBRNNRJAOYQKOSAINPLFMRLSVNENACWMSIZUZXIZYFUPUBXLLKMTSHAUFSJPQGTSCHYCJQFDEVKVZXOQBYITWGODPGZYUKBANVHUFDWAOWDGFYAUPMJXBIDAQFJQGJQBVYXZJTBTVQPRBWJHFRCVCLWKCPFTIOKEGNJHCHOP");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("COHMYCZGEIGSQDTMWXQKTPRNFATFIJTZDNWKWPFWOMEODNGBYZIHXQEAZEJFMVEVCCNLJYGRVXHSZVPSBWY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControlState msg;
    msg.setTimeStamp(0.6373102188781136);
    msg.setSource(37204U);
    msg.setSourceEntity(204U);
    msg.setDestination(10503U);
    msg.setDestinationEntity(158U);
    msg.state = 139U;
    msg.plan_id.assign("EKASBKKZCIITIVNXUNCTHBZZKRHNUPTSACZAFPIYAIQUHPMPLHDMIYXLGWYOJFBERBVNSWGUYKXTFRGLUQBLHKMHMVXCWSMZCKBTNDOVQEOYLZPNTDBXLOISYOLMSTVXKWEAZMHVFNNWEMSAVQAFDIPQHWXSVWHZOGKTLQCGJJGHSUQSUDYARQPGRWRETRALFDUFXJUBMYPTGJJJXRDBBADZRXQOJDVNFGQPOYOCJKECP");
    msg.plan_eta = 1577651952;
    msg.plan_progress = 0.2830935026070607;
    msg.man_id.assign("CRKCFZSGAHNCQPFJIMGUMCEJBDDGETYLNXGVIUJPLYPFBOYAQKWKOWTIRHBPWV");
    msg.man_type = 1174U;
    msg.man_eta = 1032285161;
    msg.last_outcome = 57U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControlState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControlState msg;
    msg.setTimeStamp(0.47049948271114295);
    msg.setSource(52042U);
    msg.setSourceEntity(82U);
    msg.setDestination(15294U);
    msg.setDestinationEntity(201U);
    msg.state = 179U;
    msg.plan_id.assign("JAVUJNEZPDNKIAWGBBZTDYIEHUAHWPZWFQYCWWOVIQVFINARJNPLRFTMXCYQTPHFMHKRI");
    msg.plan_eta = -1794131486;
    msg.plan_progress = 0.6621293288352971;
    msg.man_id.assign("ZVWHIOIUDAKQJWBNSWMJHKDCITSZRLBNAYYRARGVDQVBPJZSWPTRVNUMHQMFBXPWXCULFGNOKTIHTRBODREWKFGFPWUTIIGWKICYXSMYHEBBESZFTWLMCOETQQACTRGHADDOVLRMCPFYKGSJLKYDNFUASLHBXIUPBULNYPKBHAHXUZXJWMXCRMQEEVDFJ");
    msg.man_type = 46766U;
    msg.man_eta = 1651548642;
    msg.last_outcome = 10U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControlState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControlState msg;
    msg.setTimeStamp(0.8112174705931158);
    msg.setSource(50653U);
    msg.setSourceEntity(35U);
    msg.setDestination(4080U);
    msg.setDestinationEntity(169U);
    msg.state = 242U;
    msg.plan_id.assign("KUONOYJHZZWFDPTSMOFWBJQOGKXFUERTGLJDNVESBVXTJFIUGAAGIDYAHBXCTQJHVZSAEFMRCVOMYOYIZQAPWJXTQFFREBMMCZLAHCRDFWOLYBSGNDURINMNCDOPUVFQDMVXHMPVBVZEEZJRTEVKIPQELWYZACLFUBSRQMOLZ");
    msg.plan_eta = 1726673475;
    msg.plan_progress = 0.17002356045267708;
    msg.man_id.assign("NTHMRNGINOCPXGVXNDZZQWRBEZBKCVLMQDZAAODEIZKNAODFNOMHOFPAFZBSZJURIHTKJDISPKQGKPYKVCDRLBXXFKSCYIKQYUCMETJMHUGHQYMRALMWGSNMGQVLTAJDDYQXIAEYLULFO");
    msg.man_type = 3751U;
    msg.man_eta = 924848098;
    msg.last_outcome = 148U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControlState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanVariable msg;
    msg.setTimeStamp(0.5730263997397382);
    msg.setSource(1075U);
    msg.setSourceEntity(32U);
    msg.setDestination(62467U);
    msg.setDestinationEntity(175U);
    msg.name.assign("BYTAZJVNAGPCXMXFOKZKRJQDSHTYJCFKMHFPFYIOOCRBXEN");
    msg.value.assign("ZUTCWKGZYRZMQSXRVJTEQOUFYLIYFKSNLGMKLIXDXREXTUCVSBP");
    msg.type = 253U;
    msg.access = 157U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanVariable #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanVariable msg;
    msg.setTimeStamp(0.12095576717528511);
    msg.setSource(22160U);
    msg.setSourceEntity(211U);
    msg.setDestination(7078U);
    msg.setDestinationEntity(1U);
    msg.name.assign("LMBCVESHZMKTOXJGJUIQJOUTSLUDWVYXCWAPQPBOMDXVFRZLGFHBMKVONQGBBKNCCWUYZUIZFDRVSDFZVWFVOEPHSHLANFXXNMUKJKFHSTAI");
    msg.value.assign("ALPBZFKKNYCMUJIIFTEPYYJEWONATZCSQTXZSBQWKHSAPGAUQILHWENNDDFGDWANDWXXGVMTMZIPNFGXCCLRNDBCVOFSTDHLXBAJZHNNLIWWRLUKOKMAVJOXXQQNGHFULLPIHJLURVPYYSBOAV");
    msg.type = 87U;
    msg.access = 195U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanVariable #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanVariable msg;
    msg.setTimeStamp(0.08085266208672781);
    msg.setSource(10815U);
    msg.setSourceEntity(199U);
    msg.setDestination(1200U);
    msg.setDestinationEntity(89U);
    msg.name.assign("VOYRSGDUPYBAFPTKUIXFCKVETJFNJA");
    msg.value.assign("HXUNCNZORRHOUPSKVOYKGXULIJIXDVVKDYLNTPQYNERVMEKQLBRUZWZPAMUNHXRELPMFEFFPMQWBVAFJBULAJBDHGYJKJMFCKLKTI");
    msg.type = 96U;
    msg.access = 97U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanVariable #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanGeneration msg;
    msg.setTimeStamp(0.33689309335933093);
    msg.setSource(37490U);
    msg.setSourceEntity(193U);
    msg.setDestination(44504U);
    msg.setDestinationEntity(7U);
    msg.cmd = 102U;
    msg.op = 60U;
    msg.plan_id.assign("PRQGVBWGRYKAGXENAHYUCCQVGEROZGBWLNESIHIVNQT");
    msg.params.assign("QZZXEESYAHFHWNGPYFGOQQVOXSDMYHVSVWHCRHUFSMFPIOEPBOSARFAJWWJLZDLIPHLFFEZJPFJOBIBRMVQHIMXNBNQHUAPPZIWIYNBUHJSKOMTGYOCXWLLFXKNGEJEQLDTTJRKZMSMZYNKTRCLCKCUWWDNXSBNQKDCGASDOXMFXKUOBYYJERRPGEURVABWAVBMUYCEDUCVLGQIYZLCIKUJIXNTNTEHGVXTKR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanGeneration #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanGeneration msg;
    msg.setTimeStamp(0.7290912448913947);
    msg.setSource(37762U);
    msg.setSourceEntity(27U);
    msg.setDestination(32239U);
    msg.setDestinationEntity(75U);
    msg.cmd = 107U;
    msg.op = 135U;
    msg.plan_id.assign("VAJIAEBIBRMHVCTGZNUOSSQMLXPQHVDKOVCPKTJLUGBJXFMBUXNRIAKITUBOKHDPYSDEBYXJKSIPJWSLUOBFCAAWR");
    msg.params.assign("RYIWLKGEPBGRFPEWIYDTHEOXJOEAZQAQDZIVOUXOBZVHFRHVHWMHFUDTSEWYTLYFACICSYPMUWWRSFEBAXPRGWKSNUTUSSCJQJFHVPMZCQGLC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanGeneration #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanGeneration msg;
    msg.setTimeStamp(0.8035738364927116);
    msg.setSource(47533U);
    msg.setSourceEntity(155U);
    msg.setDestination(19988U);
    msg.setDestinationEntity(107U);
    msg.cmd = 179U;
    msg.op = 173U;
    msg.plan_id.assign("PGJWDAIFACRSLFVGFUTKILMHHFLYRKMZGDNCMOUGETTDAZQPBTDVXMMXCLQREUMCWSHHYKABFCUNQAKDJSZDQJQKZZINUTXPSHTGTOWSNWEVKXVVHIDOZNEXPMPORBRKXGTOBQFJWSRMEFVDBHSOHKPSWXYUNLANCJU");
    msg.params.assign("MWQYKDTOYLNOATEWGCNNDNDFNACTBGFEJULRCVLRIWLKLXHLICZTVVHPJQJXQFGGKCSCONPARKPBSPQYYODEVCOUNXGAMDVJWIMKIKEJKPPHUXPHIHIPXATWYDYDUOWEBGLVGIBLWQXFLSAZMKTUWDNNYU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanGeneration #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeaderState msg;
    msg.setTimeStamp(0.44013219812026716);
    msg.setSource(1870U);
    msg.setSourceEntity(16U);
    msg.setDestination(60508U);
    msg.setDestinationEntity(34U);
    msg.group_name.assign("XRJCQTCOSVRJCWUNKMVNVATHRFPKNEVKBTLBCXLSODPTNGYYRNUGIZHSEVUYCOEMGWPUQFTSQDPMMHPUZOCDJXWSYROZAYUADWGLYDRCKVJRUKTFSBLXHDV");
    msg.op = 61U;
    msg.lat = 0.2748066526308556;
    msg.lon = 0.3360740077482993;
    msg.height = 0.4237904775522032;
    msg.x = 0.48172747217815215;
    msg.y = 0.6862921000086651;
    msg.z = 0.40264296649423237;
    msg.phi = 0.3656469014747866;
    msg.theta = 0.9891245903970567;
    msg.psi = 0.9376678063843064;
    msg.vx = 0.9293950574537901;
    msg.vy = 0.7068760975677856;
    msg.vz = 0.9708133548983958;
    msg.p = 0.1674821339188215;
    msg.q = 0.3404680834867272;
    msg.r = 0.8031705913315363;
    msg.svx = 0.3862726200978134;
    msg.svy = 0.7451811691150743;
    msg.svz = 0.6241376429944152;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeaderState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeaderState msg;
    msg.setTimeStamp(0.6918220240854821);
    msg.setSource(21043U);
    msg.setSourceEntity(67U);
    msg.setDestination(17867U);
    msg.setDestinationEntity(230U);
    msg.group_name.assign("IAVPTZAXRJYMVURHUQKWWYPUNNVGOSDZMVRBTDFNJJTEBKEXOIHFCWRUJHCQZGKB");
    msg.op = 9U;
    msg.lat = 0.6157418314786554;
    msg.lon = 0.7848699987888038;
    msg.height = 0.03005760175111194;
    msg.x = 0.7652617926490327;
    msg.y = 0.9350926405908241;
    msg.z = 0.010517175040958393;
    msg.phi = 0.16294293671808613;
    msg.theta = 0.8705157568092754;
    msg.psi = 0.09083141214009016;
    msg.vx = 0.35499242930933916;
    msg.vy = 0.8981096432380935;
    msg.vz = 0.12108039389154168;
    msg.p = 0.016879193110022173;
    msg.q = 0.942046926258501;
    msg.r = 0.875326845656986;
    msg.svx = 0.7124833692080471;
    msg.svy = 0.890839566058554;
    msg.svz = 0.5141338493928327;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeaderState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeaderState msg;
    msg.setTimeStamp(0.8344316392010068);
    msg.setSource(49785U);
    msg.setSourceEntity(114U);
    msg.setDestination(27384U);
    msg.setDestinationEntity(30U);
    msg.group_name.assign("ATQUZOZHMOESYMVUIALFLYVQWGCGKXOEQQDRGPDSHZKVEYCMRFZGALXYJNJMITHCNAHWMFNNRFUTVSWNQGZAEYRMTHWIJRCYBPXSFVDEXCUJVXXSZTLBR");
    msg.op = 143U;
    msg.lat = 0.45705012025727076;
    msg.lon = 0.9562171424719017;
    msg.height = 0.026758925897394814;
    msg.x = 0.22949406085784674;
    msg.y = 0.9344145266008468;
    msg.z = 0.4297228254641162;
    msg.phi = 0.5086520808227046;
    msg.theta = 0.38887475307019825;
    msg.psi = 0.9861604728228808;
    msg.vx = 0.23825840967271228;
    msg.vy = 0.21571987815289573;
    msg.vz = 0.06951929812007995;
    msg.p = 0.029616313677502948;
    msg.q = 0.7739025609156975;
    msg.r = 0.49470326528690867;
    msg.svx = 0.48860999152379614;
    msg.svy = 0.885679763018249;
    msg.svz = 0.9342289034581887;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeaderState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanStatistics msg;
    msg.setTimeStamp(0.7755190891451152);
    msg.setSource(46906U);
    msg.setSourceEntity(195U);
    msg.setDestination(54666U);
    msg.setDestinationEntity(195U);
    msg.plan_id.assign("IKSSQCTFETYHUMFLKJSZCILRGUWYJCDHBJYNZCKONUOPZKVIJOIRGBWDFAEDKIGOKAHAYXXITPIAEHDQMDWEUQYQWIIFXTXGBBCAUVTGSPAQQYHDGZWWYHMCMBSMMRQNNSXLMBLVOXRNVGNDVXEDOPEMOVEPJPDLGHTKNYTBCPLNWBFRZ");
    msg.type = 146U;
    msg.properties = 245U;
    msg.durations.assign("XOHKVAEUESQFDQKXKHLPLTWGEIDDQDVIRCJBARRYMBJCKPSZWUSYLUDRMZNYMUHGHYFNWDVZXVFWFUSMLLXHWKTMKWMVNNTDL");
    msg.distances.assign("XCAEQVTMKUHMXOZJYJDLWCVRYBNZGEWQMZTGFHKIZSHXAZFIFDKWRRXVOBANKEZJXCAJKHAPZGPTTYCPCQROENOAPTOKLGYBRNLUVSODFXWWGQBWNYDNKJXESHVTQTNUMEQUQBRRPBUUIXLPBSLPDAGJQSZFMIJXYYRJZGVNVKKPLRDIGLIMJFGMMXLDWOA");
    msg.actions.assign("TQQOITZCLIPTQPNBLFSYXKOYYPLUCVFOWUUDUEKLMNSLQTZFEYYJWPTFBMRUMGHKCHSABXGTREMYZGIEVXVVFZIFSOJXNURAXBJXLHHHVBGSANACOTIDJOFMMZXHEBGCEBHHSMHDHRRJATOAETUWYNIWVIQRXCWVWXZUKRNSYXLVPNCKYAPIADFNCWGQZZJFRGKWQKOESILVESSNMKLOPGQDVKZDCZWPPAOB");
    msg.fuel.assign("GGYFMJHFUQVMENHCIMNPSCSRGWLAVRWBFYYHCRUKUTZJMKXKGOBSSCAMQVYQJQHRGPJEXNILBJKIZPPWTWIDLODECZIOXBZMDNXNLUCLOSNEMRFPVQLYSVBTZFZQGHMUWTHJVVRSTXGNGIFWDHOAQGZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanStatistics #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanStatistics msg;
    msg.setTimeStamp(0.12952521262977523);
    msg.setSource(9238U);
    msg.setSourceEntity(78U);
    msg.setDestination(16750U);
    msg.setDestinationEntity(135U);
    msg.plan_id.assign("MHPKAGDYYJORJWTPFTIXKDMOGLPDYLIEKKRUDLSRJOYECBWBAKEFEIFTVNIDOJJHIUSIAGEKQLQGFEPMGHVEXKXDX");
    msg.type = 232U;
    msg.properties = 175U;
    msg.durations.assign("RAAQROTTZAZLPNORHVOIWTQXJMDMBKNDSCVVIPSQBEXZQHWNTMGFVVSFINHBSGLZLPDSYJWRKYVFIVRIBXKFFHUOTUAXYDABWUHKDAKTZXBSPPHVUMTMKYDYTJHGCOENQNISEGDAENIEICCLUJWLZXQYBCKCCQRCWGAGZNPEJLYFMBGPMZAGVSFLTPXWMEBQLNCVSTRUY");
    msg.distances.assign("EROBWYARKIGOIKEHS");
    msg.actions.assign("JYPQYHQAZNTDSKEICCFKVSWFFLOUTKKWAJZBGIQPDGYJJSDYSGZVQEAOIUVEBFCNTGSU");
    msg.fuel.assign("YUWSFXZIJEQAUZXCMXAKKDBTCYGOTNSVFSPLZOVMHFVGHLLRCLKCUYQKSWNTMLSPMKOQYBFWJNXNTLCKSJJVYFFBIEDHSQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanStatistics #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanStatistics msg;
    msg.setTimeStamp(0.5143131676371221);
    msg.setSource(8455U);
    msg.setSourceEntity(247U);
    msg.setDestination(19927U);
    msg.setDestinationEntity(110U);
    msg.plan_id.assign("ZBOYWGGFOFEVYBWDXKKOIWEDQNPXAJXYRJIKSTTNVLVACNJCQFAAZSXEZHMXTHD");
    msg.type = 185U;
    msg.properties = 107U;
    msg.durations.assign("ALSVFRUJJYSIALVKDUQHDQNIPWTXCYLRYTAOJFYLPTWYCRMSGTQ");
    msg.distances.assign("YMPERJVNHPOFETSYCDWYXWBZGRIHAGSFBNSCWVGMMEQYKCUBKNLJUKSQKTHMKIBEZARJMCRLQXJOJRAIIYQUXFBWKFXDREWLGCVLDAJKSLASGDGUFFAOIKLZAPRYYLKSIDVEQHSONGFTHZRNZOVTHOZMBNXIOFISZNUEWATGHBTOENOPSXC");
    msg.actions.assign("OQLYNYFTPUUXTZJSCECHBKBULLRJPGPGGEGEALIRUXFIIQOPCXSQDFLSLCXNOMJLXWISTURXEXVIARKKWIYRINU");
    msg.fuel.assign("ZFPFAQOAZBIUEZKHZABZAKVXGYMCFNARITZXNUUTAHYDCIQWNVORQDTJPCHHWOMHNQRQANTBILXLSYXWSEYGSWYHQBBBORLOTZFWMIFTTWCYVQVOPBYYSLJGKUSPVYTGIUNQJCIZMVVCDISGNBSCWNDKBLRFEPVRKN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanStatistics #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReportedState msg;
    msg.setTimeStamp(0.026350578084097354);
    msg.setSource(32174U);
    msg.setSourceEntity(206U);
    msg.setDestination(57729U);
    msg.setDestinationEntity(220U);
    msg.lat = 0.07060883769467019;
    msg.lon = 0.7174498063213997;
    msg.depth = 0.5881288668659426;
    msg.roll = 0.4232622771408877;
    msg.pitch = 0.7979285715162358;
    msg.yaw = 0.025544004731737346;
    msg.rcp_time = 0.21947807339471037;
    msg.sid.assign("PPOOZCVKYJILUNGGFMQGEXXNUKNSLHFTBSKDASLLVHOZZFCRYVDGWSBNZNELWQMLATMVHJCPGKFPYFEYLRZYRTEIQOIMZGNBEHXHXMIWQIJGZAHBLOZZWMWYJIJBKMYIMMRJENFQUEHAKMUCJOXSBKDLAGERTSUQUWNXSHIXWPWTBIEAORQVGTDSQEFUVOPKHSYKRFDFACUOTDBTPDY");
    msg.s_type = 117U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReportedState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReportedState msg;
    msg.setTimeStamp(0.9264295839065708);
    msg.setSource(17599U);
    msg.setSourceEntity(95U);
    msg.setDestination(60390U);
    msg.setDestinationEntity(187U);
    msg.lat = 0.4631704100785008;
    msg.lon = 0.8928562819828549;
    msg.depth = 0.21693377055048613;
    msg.roll = 0.24040377129549684;
    msg.pitch = 0.09260145054469149;
    msg.yaw = 0.939555583524377;
    msg.rcp_time = 0.4275617892430914;
    msg.sid.assign("WXPABANEKNMVSKQTGOSGMSWLQNIUHUXTSJYKPILIKBYWSZAQYEFDDCPZELESOPSRVOBMWPTNVNRVXLUMCVJLXGIGQINEVFGBZEAMBLDEGXQAATGMBM");
    msg.s_type = 25U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReportedState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReportedState msg;
    msg.setTimeStamp(0.8019174012721905);
    msg.setSource(56857U);
    msg.setSourceEntity(169U);
    msg.setDestination(28841U);
    msg.setDestinationEntity(185U);
    msg.lat = 0.18699525948021978;
    msg.lon = 0.06115195234806681;
    msg.depth = 0.03696503666428175;
    msg.roll = 0.861356361506532;
    msg.pitch = 0.5159839776460923;
    msg.yaw = 0.20687891657090518;
    msg.rcp_time = 0.5228890565857357;
    msg.sid.assign("APOMSOMWXTVFRXSGYJTJEUVZNTNCVXTFCEFUCVCBILFZHXIBHRLZDQJRIIFYLYNAHGJLXVRQYSLRIUMLJDHMMCBGAPBFZZSRKIDPQWBJYXUWEYKQVNNMLTUWVTSWEEIJGTOWXTBZWXASIDYSEOBZMOVBUYKHJCGZOCSMZVPFGQYHFFHAQEDDDOFWKMUUKTOQOKKZGIHYPAKDALIJGQNNPTHRCLCAGOSKSWQBURUEXKEVRHEDDXBNMPAACLWNR");
    msg.s_type = 47U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReportedState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteSensorInfo msg;
    msg.setTimeStamp(0.9907031631277105);
    msg.setSource(56531U);
    msg.setSourceEntity(146U);
    msg.setDestination(42468U);
    msg.setDestinationEntity(190U);
    msg.id.assign("DTAINQZTKFFDDOZCPTVZEJMJRRAQXWGR");
    msg.sensor_class.assign("YFBJPDLKMWNJBIXTILWOQOFATBZRVSKHGMEDGCQXTKTDYNOPUSCSUGEUHELUMZHBQXSRDAJDXHEIGJL");
    msg.lat = 0.3533590975443185;
    msg.lon = 0.3437543141981343;
    msg.alt = 0.6590206397421811;
    msg.heading = 0.2560451295273314;
    msg.data.assign("PQIXQGNRQPGYVHWKQIB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteSensorInfo #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteSensorInfo msg;
    msg.setTimeStamp(0.8992542448498106);
    msg.setSource(4393U);
    msg.setSourceEntity(219U);
    msg.setDestination(40596U);
    msg.setDestinationEntity(193U);
    msg.id.assign("UXZDYMQULUVKZQIHFITBEUN");
    msg.sensor_class.assign("AVIFCCZCLRRURFYNTBDNDEOJAEPHLUMPPEKGNQCDFMEAVYWRYFSLZOHVITAHOMVYBSSHLXYLWCCLGDMUZYXWMGDWPDKLBNOCIHNQCUKZQMWQSJBXASAMQSRIDZT");
    msg.lat = 0.2178677667787593;
    msg.lon = 0.22916172090666986;
    msg.alt = 0.055404420879658356;
    msg.heading = 0.294786153119557;
    msg.data.assign("EMQOKCMZCYMSLFVRLASZFGCMYDVHKLBMVLRDYHJEGSDAKQVSXJTNFIEEAJCJMRLTEZUTNFULKIROALWYLRDCNRGEKWTDIBOVSIXQEEDSNGBYIUXJWEAONNGPCXGQKZQGTDOZQWXYJXMNPZBAYHHZRROLGWRVUBSCUCGIYPPEPAQXJXAHVPNF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteSensorInfo #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteSensorInfo msg;
    msg.setTimeStamp(0.9833669356721901);
    msg.setSource(7530U);
    msg.setSourceEntity(110U);
    msg.setDestination(28446U);
    msg.setDestinationEntity(19U);
    msg.id.assign("OIRZMYIPHQSHUBAPKLKYCVXXFUQ");
    msg.sensor_class.assign("BWWCTUNUTLMZTXHCGLXOKMBLGBDXSZXNPHYMSAYWWYAEMBFJSKRNJGITBHXHKBJZSTFPDXPUDCARQAENLEVGDLKPIVWHDQVQGBVUXESCFFGVYBXEMHPDFKZRCIUEHMQZZJRRKPJZZOTGVNGAQRLLTYVURQMFPEDOXRWUONOVEOAVZLKEIKYSIFWYJCZSDCOAUWIVBLIJIPSDSFCWMBQTGOHKDQANYQJHIMIKRRFUJCTMXYOT");
    msg.lat = 0.8553347643307369;
    msg.lon = 0.38473815504019904;
    msg.alt = 0.9055506163765163;
    msg.heading = 0.19544228991085455;
    msg.data.assign("MGCSXGPVPDKNUUCZLLBEDAXXUSCBNJGJQITXSJCQIIQMRURZEIDHGBRVXVJQFOMTROBKELJJCNVCNAYFUENGUTWYZHILWPFJDEOROECIIHBVKICOTVVAIVFFE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteSensorInfo #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Map msg;
    msg.setTimeStamp(0.45063350638432154);
    msg.setSource(35495U);
    msg.setSourceEntity(20U);
    msg.setDestination(12678U);
    msg.setDestinationEntity(245U);
    msg.id.assign("IBHLUPMKJFDGUCQAMXXKUDSCWAFVAYTGXJTKFIOUBSNYSUGVABIHOPRFDUOCBRMQGBKCFJFTQIZUWTBLXFBY");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("VPEVGLWWJOBXUFNSXBQCIMCAZAOKDOZQJJUWQSXUIRSZSFIUZWHXBYBIPAEZYXRLYOMTGILSYXPTZDUANQNYRBAIATJWADYRRFCHHCIESNDIDRBZGSJPLVFPTXDEORIUMJVHUULLFLRQCLOVMHGJUYANKMYESZZOBJYGTGQPVDHGNKFEPWPTVTFCWW");
    tmp_msg_0.feature_type = 38U;
    tmp_msg_0.rgb_red = 155U;
    tmp_msg_0.rgb_green = 18U;
    tmp_msg_0.rgb_blue = 71U;
    msg.features.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Map #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Map msg;
    msg.setTimeStamp(0.14625299809828196);
    msg.setSource(46454U);
    msg.setSourceEntity(244U);
    msg.setDestination(15867U);
    msg.setDestinationEntity(221U);
    msg.id.assign("OKTMDBSLKBIGVQQWFSOXTEFRPDWGXSVXVVIZXLIDDLZZYPROTFEUAPPDCJWIMKJOMFRUAANMYDBFFKYQHECJTNMBKQRJUSQZEQORYVBGBSVZHHZQTEAHPLS");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("DPNMGZKPBGEYEGVCSRBFPYYLLFLAEWKVNWEOXNVUXHHIRSTVQROUSMZKUQNAHQDTGXDLPALDGNNHIBMJXMVENIXISBLSKDQXIXQMZHJSVTGMFQRCZCBFCTJ");
    tmp_msg_0.feature_type = 77U;
    tmp_msg_0.rgb_red = 93U;
    tmp_msg_0.rgb_green = 60U;
    tmp_msg_0.rgb_blue = 122U;
    msg.features.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Map #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Map msg;
    msg.setTimeStamp(0.17232260673588184);
    msg.setSource(11584U);
    msg.setSourceEntity(194U);
    msg.setDestination(8292U);
    msg.setDestinationEntity(9U);
    msg.id.assign("ESIDOJGQZFCMSKNJZSOZEZXAIIWRRYPJVFVBBQUMGLWGJHNTCGBCNMOEKQUUDUQXNUQPSRAFXTRSVZVTHIUWDKYNNBFTRXFITPAYVKWUCSKOEPILBPRIHYYLQLJDDZRKHCYPTVMVHTTLLIGLXYEXNNCSJIMSFGCHAJWDXEVZZLHPMCKQYFAAZRBXMWM");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("OFRRADTJKKUZCEKPCPYCSTVAGOQMHBYURAJSNMIUKSMXTMINNWKZNVRVEHZYEFFQGYZSTEKKNQJXEUDGIUCYAEONIXFHCBZQPXZSODELPQVNCOLFABULGRTDHFWGZHLYWWZAYMLICOAFMXPWDIWIVPMLSUTHJJISGPLQDPQHIHBVRCJMDMRASUBXWDUXONELFOFZ");
    tmp_msg_0.feature_type = 233U;
    tmp_msg_0.rgb_red = 135U;
    tmp_msg_0.rgb_green = 156U;
    tmp_msg_0.rgb_blue = 211U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.6483923332010768;
    tmp_tmp_msg_0_0.lon = 0.5674772993918417;
    tmp_tmp_msg_0_0.alt = 0.3177207330108017;
    tmp_msg_0.feature.push_back(tmp_tmp_msg_0_0);
    msg.features.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Map #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapFeature msg;
    msg.setTimeStamp(0.27365805574108315);
    msg.setSource(13934U);
    msg.setSourceEntity(7U);
    msg.setDestination(8077U);
    msg.setDestinationEntity(72U);
    msg.id.assign("EXSFDOGMWYCWSQWEGIXFJIOBPVWTXEWCDCUMXLMKZDOAYSPXPTACJU");
    msg.feature_type = 46U;
    msg.rgb_red = 149U;
    msg.rgb_green = 1U;
    msg.rgb_blue = 120U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapFeature #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapFeature msg;
    msg.setTimeStamp(0.12025276409286167);
    msg.setSource(55952U);
    msg.setSourceEntity(25U);
    msg.setDestination(30839U);
    msg.setDestinationEntity(104U);
    msg.id.assign("CZYURCJPOBNEVKZNORSHAMSHXXTAEVLVRUTBSDJLITTNWJWJPBAQIZMJM");
    msg.feature_type = 52U;
    msg.rgb_red = 33U;
    msg.rgb_green = 57U;
    msg.rgb_blue = 187U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.15666853676009163;
    tmp_msg_0.lon = 0.5629772428082744;
    tmp_msg_0.alt = 0.5775207004638765;
    msg.feature.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapFeature #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapFeature msg;
    msg.setTimeStamp(0.9000563979260228);
    msg.setSource(31483U);
    msg.setSourceEntity(211U);
    msg.setDestination(2833U);
    msg.setDestinationEntity(43U);
    msg.id.assign("KYXSNZKNRJPAJYZFWOORXYSVMQBPIAZGANRIIELPLTDCXBYKIDRFATCXRLQHBTTEHDGNZSZCRDKUWQKYIGGNIUGNLBUWYOQFSHFWKJVMXYUCOOPEXHAYECVUTAJSHWWWHBQLDXQLSKAEMFAQOQTJEMNOOSSECQGBSXVMCGUBXMODAPHLMKVLXRUTVJHBGEIJRONFWZRPQDZWIGYFPEZUJPMEL");
    msg.feature_type = 177U;
    msg.rgb_red = 253U;
    msg.rgb_green = 40U;
    msg.rgb_blue = 25U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapFeature #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapPoint msg;
    msg.setTimeStamp(0.5014971889014102);
    msg.setSource(42249U);
    msg.setSourceEntity(227U);
    msg.setDestination(18089U);
    msg.setDestinationEntity(189U);
    msg.lat = 0.7329530502106103;
    msg.lon = 0.6893029202935245;
    msg.alt = 0.2207168666536694;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapPoint #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapPoint msg;
    msg.setTimeStamp(0.8045996291784877);
    msg.setSource(27310U);
    msg.setSourceEntity(203U);
    msg.setDestination(47447U);
    msg.setDestinationEntity(136U);
    msg.lat = 0.7433070892683531;
    msg.lon = 0.432663915905242;
    msg.alt = 0.8346645484325745;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapPoint #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapPoint msg;
    msg.setTimeStamp(0.799977450495916);
    msg.setSource(24624U);
    msg.setSourceEntity(206U);
    msg.setDestination(3665U);
    msg.setDestinationEntity(3U);
    msg.lat = 0.8453285387259359;
    msg.lon = 0.3987072337433708;
    msg.alt = 0.7603359181664533;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapPoint #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CcuEvent msg;
    msg.setTimeStamp(0.8626065421456964);
    msg.setSource(19772U);
    msg.setSourceEntity(31U);
    msg.setDestination(6174U);
    msg.setDestinationEntity(126U);
    msg.type = 9U;
    msg.id.assign("LIMQECCGMHKOWRRUQKVWAWOOUYDWHGIIYGKWTIVGHKBUINBMVOBUGPXFPTUTHQSXETSAAZSCGMKXTHVYAWZVLNDQPJALMSDYQLRYTCSUYDEXMFZZJPBLNPMNLTWEYDXQSZLFJYCPQVBVDTOZRFVATCDIKLTRIPOFELAPXNKNXOXJXYABMNZFOWWSSHFESISCVPBPNJJBZJUJEHQJAGZURERQECVFXDROCEKFNRKF");
    IMC::UsblFix tmp_msg_0;
    tmp_msg_0.target = 6358U;
    tmp_msg_0.lat = 0.46112429069195937;
    tmp_msg_0.lon = 0.9148138942296821;
    tmp_msg_0.z_units = 93U;
    tmp_msg_0.z = 0.9881347989604681;
    msg.arg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CcuEvent #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CcuEvent msg;
    msg.setTimeStamp(0.3985601952041069);
    msg.setSource(8678U);
    msg.setSourceEntity(82U);
    msg.setDestination(15141U);
    msg.setDestinationEntity(254U);
    msg.type = 115U;
    msg.id.assign("OYAMRSONWBZWZFDNGLNWXKUPESBKAYSBXOBZSXUFFHJBCORTNSNZLHOJDZEFRTWDPEANCPVKFPQJVPVACEVZMPJUYMKQYMGNUETPJXIHBZDQISIUXTKFKARCVBIWDLNPOCLRXIRQQTFGWINTIPQYYZZKOMLWGXLBOSRYEGZHXGFVYGHGVPFJECWXEIVKQYGTBAJVSOQDYLQSLAWHHAJUMFACLIACKNEHJTRQTCDRLUH");
    IMC::PlanControlState tmp_msg_0;
    tmp_msg_0.state = 104U;
    tmp_msg_0.plan_id.assign("PMJSLCVNAIEKDGPTDHMSVJZNQNCFSUXBKIFDDGKVOTPBIPZVVOLNWUGEULNGMLVONPSMAWHGQIPHQWQLFPZWVLZCYOJUYJNJYOTYBTRERJBVBZSYWRUHBUFXQKMADRWJFAKWSHXOYPQQCPAJJSWDPMECDZRXTSTXIKDHTCIMHEOXKVKS");
    tmp_msg_0.plan_eta = 572213340;
    tmp_msg_0.plan_progress = 0.3055739873841131;
    tmp_msg_0.man_id.assign("AAIFYTUIAXIRGKIQQDYSWEDNNMRHAOOJYCFNLWQPTZULUWGFTTMSNDZXGYUFCMRMUADZZHOKYODEJVXQNDERFFNUCKVCAKLILEKKICRDOYXFHWSAKZGSJIOSYSOWIORKXMXLRNPQSUXVELBBASBTPJVJLHHAQZBWQVPPJLQBHETWEPVTPXLBDHWGMQFRJESEGTRZEMVFPISZHICUWMCZTYUBCONGADPQWMYYNUHB");
    tmp_msg_0.man_type = 64511U;
    tmp_msg_0.man_eta = -72293151;
    tmp_msg_0.last_outcome = 11U;
    msg.arg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CcuEvent #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CcuEvent msg;
    msg.setTimeStamp(0.8295381753805967);
    msg.setSource(5293U);
    msg.setSourceEntity(232U);
    msg.setDestination(58917U);
    msg.setDestinationEntity(181U);
    msg.type = 95U;
    msg.id.assign("KYWRDXNIQVESCAMPNCGMKRLIOACJEDWUFWMNEQHNHTMHIXLYXTXZDATNKEWUGLAEEEDLKXOZQCNSTUTOSSIYVVPTTNDUQHKILBFPPVXCFBANHWE");
    IMC::Current tmp_msg_0;
    tmp_msg_0.value = 0.6116385696758344;
    msg.arg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CcuEvent #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleLinks msg;
    msg.setTimeStamp(0.5001479770096985);
    msg.setSource(47799U);
    msg.setSourceEntity(213U);
    msg.setDestination(3212U);
    msg.setDestinationEntity(133U);
    msg.localname.assign("XLDVWWMWRQLLRVXVZIDBUONHBYOGCPIDHKELAUXTKNKQDBHGPXPBSBZQFULYFTHOMCMHXMMAFVUBKTCKZPUQKWFQGPZIZOJAKEUPJHCXTNZTQATAOBWVESVYYDGMQIYEALJRTMRDVEFCGTRIYSOKOMRDNJVGPGNZXWYSIOFFNESNPNJUHZSDNQYLSCTSRIBWYQYKEDFAJFOGIUCDERPCJJHVBZBNAGXZSMRWHIUQGLIEFTCAXUJMREWSA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleLinks #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleLinks msg;
    msg.setTimeStamp(0.8713177345807971);
    msg.setSource(19690U);
    msg.setSourceEntity(146U);
    msg.setDestination(63073U);
    msg.setDestinationEntity(70U);
    msg.localname.assign("BYKMVMRPTPSQCMVNJHXHJXKRBSNEINSGOKCBDCQWLPBZYSFFUTERHUMVUPHYAXAYZGHSMNWQOAWULJTQWJENWROPICSFAQTNXVUFIKELHXWSXDGOO");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("CUOMJDPZEJFHOVMFGDDY");
    tmp_msg_0.sys_type = 155U;
    tmp_msg_0.owner = 61160U;
    tmp_msg_0.lat = 0.16685075390434467;
    tmp_msg_0.lon = 0.79207296204948;
    tmp_msg_0.height = 0.6210692553957439;
    tmp_msg_0.services.assign("ASVJETIGBJISSKQRVHOCSEUPJIGXZJJMRYQVNUEC");
    msg.links.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleLinks #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleLinks msg;
    msg.setTimeStamp(0.23483033091436412);
    msg.setSource(39472U);
    msg.setSourceEntity(55U);
    msg.setDestination(44561U);
    msg.setDestinationEntity(111U);
    msg.localname.assign("RONEMFTQCBCEBFXMWWLHOJAI");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("EVQDOFXALYCLFEURBZJQGKHWURDJOUMNWDXIDPGZOQYTIMSSWQRXNWTPAZHKPBFGLHLZHNSAJADJOTLIUNICGCYLNQKNYRVGOWBETEXGSHDCQSVMMCWMSTCUMRCNSZTVBBZTAIKBIDROAAFXQNMNEKYZXSVSOHFODVFCMKQAYIWRKGTKYFHJCCRXUOVIQJMBO");
    tmp_msg_0.sys_type = 162U;
    tmp_msg_0.owner = 54868U;
    tmp_msg_0.lat = 0.9192905885484367;
    tmp_msg_0.lon = 0.80746047005821;
    tmp_msg_0.height = 0.5563411286457863;
    tmp_msg_0.services.assign("AHUJVTUDLUZBHJWTLCPZDPWOFEDWEVAWMJGDVFQIKFTQICVEMDSXXPBFLCEMIKRHEBYCGEIYYHWPSJVSTXXFHNNBGWGCBSRMYTILNDPJZPOXOMCLNVAOPKXQONNZRZCIYLUCYNJKHMWRUOYRXYRHYEGVGLPJKLQTAFOEBUVTWNQVKVHGZTLAXDEC");
    msg.links.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleLinks #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexObservation msg;
    msg.setTimeStamp(0.9289433543943224);
    msg.setSource(9070U);
    msg.setSourceEntity(9U);
    msg.setDestination(27388U);
    msg.setDestinationEntity(244U);
    msg.timeline.assign("FGTQQSGIANTGHICEYZNOYRKCDWAGAAFIVEWWYVLEZAPKUGVRSNDXKSPQMZCWOOTMTQBHPXNEPOYYOAXMQBAQLRJWFBZVPBVBYUHSD");
    msg.predicate.assign("NLNPSREMPZNIEECPCRYPEYDMZMWTXCEJIOSZVRXZDVANLMZCYYTRAIJORVCWHQGGBUVFHOJFGQHFRVCSKUOHWVAGIMZDSXURLHWYDOYKFOYJQMQFWBHKXQAGGTJFPTGRUUQWETASUXRVBFKPGJEDNDLXZLIJNCKRINGB");
    msg.attributes.assign("RHDMFAYWRTTKDHCSWIZIOYJVVYBFTTNSKKYAGNILSVGPRPDMGLPZWKLBBYGPROCZKPKQCROIDVBZUSLEZREGYRLQSFTTVOHQJQLBZNDPSXBRPWUCULQZFCEXAUJAAKXEFHBPBXECUXKCMMDOCGYVJNOHQUVTWONMWJXZRQULTMZGDVHKTWNXPCYEHMMXEIWGZHUONSIADFOVFUHBTDJIWESNYKAARN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexObservation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexObservation msg;
    msg.setTimeStamp(0.34030366588159744);
    msg.setSource(35387U);
    msg.setSourceEntity(227U);
    msg.setDestination(50327U);
    msg.setDestinationEntity(128U);
    msg.timeline.assign("FWAGLAOYHXTYSXFQSSHHICYCECRDKPEQRMVJESRDKUGXHXCOCQANQDGYCHMCOGPVINHVLOZTUDJNMZFTJWPZWXYRDLITOIMKNHUXFTSPWTBVXBUJQWSWFYOFCITGAKJPNI");
    msg.predicate.assign("KXUHAUSXCFBGAJIEFOLYSWUXUPDJUZFQURVFGUVPNBWVTLOVUDQZOTYZHUIMLABAKCMPVEBVICMEGKRGHKBMNSYBTJXQKHYRFNZQLHIWQNOLZTSBUBFOKWVWXYJJKHTMSNDPPMNVERQJLTGZM");
    msg.attributes.assign("IENBIJQMOLKNMVBABI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexObservation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexObservation msg;
    msg.setTimeStamp(0.2907240195386861);
    msg.setSource(54292U);
    msg.setSourceEntity(52U);
    msg.setDestination(35225U);
    msg.setDestinationEntity(161U);
    msg.timeline.assign("YFMBNMRNZIEBPQELGMRHMYKTRXPGDITNTDTAUEFELGVUMKCQKEKJUJTKNCEQKYTLHZQZWZDWIAYVBBLAHLTUCRSPLWVXKGDCPEMZJDNMIWHQXYAOVAAYLNPFLPBDNYCMOEXNSUVJPOZFAGZASTSFCFJOHXXMKSZGBHWMDRSIVUIUZ");
    msg.predicate.assign("MYQPAYJEARHQIJAZNBWFPNKRCQVVDSAJXZNYZECRZKIIABMELTIUOHEPWTWSCCRRPSMWNYFISUGFETJOMVTQJQFNFUIVQITLCZUNDHOGXOCHHXGKRMWBYTCLMKFPUXTPUIEXHQHSI");
    msg.attributes.assign("AUMPHMLZGAGWWOLNCLEOPFBKDJKFGOOIBRHBZPXDVPOUWFJSJUFSYXKABQMDYQUVXMYSDLUDZVAUGPZDOGHUHQUKCEKOIKNEJIVNXHHHWTGNSKWFMVSIWRRLIIUFATNRRUXMVFCTEXMVTDVNRWGLPPMADCHJYWJBLZNSBJQZNLTHTAIQEJNCEBAGMIZXLXRTXCKYTEDISYFAZZRBSYOCBPVNQKYSMFQCPYSGEREOYJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexObservation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexCommand msg;
    msg.setTimeStamp(0.34201506803233195);
    msg.setSource(21287U);
    msg.setSourceEntity(237U);
    msg.setDestination(9373U);
    msg.setDestinationEntity(148U);
    msg.command = 89U;
    msg.goal_id.assign("EIASFYJVDCZZWWSAHIKXCWOHUCJXJPFQBLTXBLMRXDGUPYRKPOEUMJZRZFFRMLTYULSQBJVCITBJQIKTMZYQYEAEGCDTKDRPRRSMFHEDQKMNXWZGHWYVTNGOVXNAVRHSICAD");
    msg.goal_xml.assign("NEBRSNVCWUDTXZMOVLKDZCBWIIXVANGVTXBCJMBJKGSFGFDAEZLUHQOWVUPEJGZZICXLOFTRDZFXKTPSYCPLAJLFUHXFTQYJZWKOHAOFPMNOYVKRGVBMWAKSDEVJSUEHVPUMFXHRRBWXNCAQRKYJMNIRGCWJQEBWDDOYTEIAMTTALSOCLGDNARBGIEMZIUEOPSRUCGRD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexCommand #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexCommand msg;
    msg.setTimeStamp(0.209704712693089);
    msg.setSource(39402U);
    msg.setSourceEntity(224U);
    msg.setDestination(13491U);
    msg.setDestinationEntity(130U);
    msg.command = 190U;
    msg.goal_id.assign("TEEVUYBJPTRILENQJUZVIDQRHSOKMNLJVLVHGQLZXEECXNKINTNUSQTCRYNZSHTVXFMYARPACFMWWDKRPYGWUWKUIBFDPROXIIWODDAIQWXBOTSOAHGZOVFJTHMPZHJKKNTCHBSMXFGLSQDGRRTWDZPYOAYKOLMZCAJUUCKMKYYJZRUFBSRLHAOB");
    msg.goal_xml.assign("KFYANXEUOFLCJYXMBSYICKOCACTHVOHHKOPBBKJWPZHHNIRKNHADWBASRZSWTWXIRIDARYCEUOFHTUNVPGFEUPLQEIZOPVESJMVVDHMODTSYNQSMENPWNOXQQKFMLISVGFCVRRJBXFDEOZAUGAVUUNHAXRTLOIECGCDXBCBRFWNTGQTXGWYFPMKYYBJDQMPLLHKBUJLZDYLNGPMQKQQJZMRMJYU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexCommand #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexCommand msg;
    msg.setTimeStamp(0.8545743259744432);
    msg.setSource(52532U);
    msg.setSourceEntity(161U);
    msg.setDestination(15170U);
    msg.setDestinationEntity(30U);
    msg.command = 239U;
    msg.goal_id.assign("UEMNNBPCCYFXYSTFEDADEPEKXZLGZRQKDXYQHLSPDXZOUIDGRSRMYSUNUMZGTQMFQPYRKICHASODWRI");
    msg.goal_xml.assign("AQGLVKZZNOBXRSGLSMXIDKYWDREMJNHOYIZNZYEGUVLOIJHDHTLDYWQIFMGSXXCOQEUTBSDCUFWUJWAQFGTJFDLTAQOPRPWIZLFRCKMMCNSYMICAPPACEGLXVHZETVYOCPEGJWHQYSLTWGXIXKAIXQSQKOSSNRBVNVVCZEMCIAKRWRB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexCommand #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexOperation msg;
    msg.setTimeStamp(0.154789596141512);
    msg.setSource(25957U);
    msg.setSourceEntity(118U);
    msg.setDestination(16549U);
    msg.setDestinationEntity(99U);
    msg.op = 32U;
    msg.goal_id.assign("OFTUGBCHPTEJQXVIZEDEPSDRIDHRLVYAFHCBXTZJDUQOGVHBQJXNYSWBVCHRORQTPBYWXWSIBGNTYDJMIRZOMIZKZEMQWVQXIJC");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("QTSBMWPQGGWQABKYCFZDTVUUNNQYGQEJJVLAXWHSVKJLSXCGUYVKQZJHNZXMBGDCZQFKNOPXWD");
    tmp_msg_0.predicate.assign("UUOTZMSNMZQISFHXBLAVHKTAAWCJZEVKNAVIQELBFFPEHMXLGCPDJGUDWMSSDHRVIKSYFLULROOMFWJKAJTABSJLLWFJVVHAZURZTIYPYGXDOOPHZSRCPBHKCKGKWNIFZMVABGXGNCQOKYXUYNXIPLVQGISSPFR");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("SVZERBZKWHFZQLEMTFMAOBIRK");
    tmp_tmp_msg_0_0.attr_type = 56U;
    tmp_tmp_msg_0_0.min.assign("DFBLGJYODUIOVHUJ");
    tmp_tmp_msg_0_0.max.assign("YOSEDOINKQFFWSPJYZCUDHLWCBNKKRN");
    tmp_msg_0.attributes.push_back(tmp_tmp_msg_0_0);
    msg.token.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexOperation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexOperation msg;
    msg.setTimeStamp(0.5040406863214105);
    msg.setSource(13729U);
    msg.setSourceEntity(223U);
    msg.setDestination(46822U);
    msg.setDestinationEntity(131U);
    msg.op = 15U;
    msg.goal_id.assign("OBXBUWEZFDFEMIEEAKRKYVDWXAUARCUZLBIMJSXXPNFLOWOIZFTPHUVXVPZCAMQMMWGQRRBITHYVJYLAFHYTKRHKQVILYZANJLNTNQXMB");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("EKUBWBSOUWYOTSEZVHOFHQZRABDVNUFRZWCXWRCAHGTFXSUKIFGJGTLKONJRQSBNLTIPEJMYQRJOGUPXQPGXWSIGGACEUZTOSSGBBVLKSMBURYJGCNAZAA");
    tmp_msg_0.predicate.assign("RRITVBBECNWYYOKQZRGPVIABDTDKQHUVMLPWMOGHOZGRJHFZXKZSYXOIAXYORXCWDRWQPVJ");
    msg.token.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexOperation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexOperation msg;
    msg.setTimeStamp(0.8928197608148284);
    msg.setSource(4613U);
    msg.setSourceEntity(116U);
    msg.setDestination(28570U);
    msg.setDestinationEntity(135U);
    msg.op = 160U;
    msg.goal_id.assign("BQINPLWEZSVNVTGHKAHXPXUTCWSCQLSAUDZAPRMYOK");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("ZONAXFPXCXZPRRWAYMEAPKGJEHYPFAZ");
    tmp_msg_0.predicate.assign("SFSCIZWBNZRVHCTNFIOARTXGAGDWEYRYPOLXXJD");
    msg.token.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexOperation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexAttribute msg;
    msg.setTimeStamp(0.5447081092584748);
    msg.setSource(42146U);
    msg.setSourceEntity(154U);
    msg.setDestination(21914U);
    msg.setDestinationEntity(91U);
    msg.name.assign("EBSZHHCPTXIGWDLTUXNGXYQGBEAOWFGRXXIKPILQMNWCUTPBMQHMKHINUMPUNZSBGZOTDPEDVHDLQRIOFYYFSREGESBEJBKTHDCNCOSKNMRLLAUPHQSJWZJGZRFYWUVEACMJXLEJVDBDXZH");
    msg.attr_type = 217U;
    msg.min.assign("QDGBAMLGHQKZAVFYUHUIAEJAXADYLYTHSUGPZITQSNDKH");
    msg.max.assign("TELRCHJEVVZPPYPOUMNNCNXMOTAMTOJZPITFJJMYPYGOH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexAttribute #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexAttribute msg;
    msg.setTimeStamp(0.5201270534417028);
    msg.setSource(52931U);
    msg.setSourceEntity(3U);
    msg.setDestination(64604U);
    msg.setDestinationEntity(51U);
    msg.name.assign("KYEJPLOJQJUAYCNJZZHZPFDZUDETOCQCF");
    msg.attr_type = 175U;
    msg.min.assign("ICYEOLMBZFGHXVVGHRTSAHPPONACLTLYFPWAZFBIRLA");
    msg.max.assign("TNVLOFMUYGNKDSRVKJSNFLFXWOCYMXKMSDGPLCDJQQZVHUFMCIARVPWNYGRJJEWAZHKTYEBVTWNCIRGCEYXXOHPHKISKMGPCLQLKGOPMKHAEZBHCOSXXLXIRTBLFYHATQKKEUQFTEEJBHJZHBIUXWRXUJLFUASUZCANETSUWTRYUYTWJNIOGVPOO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexAttribute #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexAttribute msg;
    msg.setTimeStamp(0.8742562594953512);
    msg.setSource(6515U);
    msg.setSourceEntity(134U);
    msg.setDestination(11201U);
    msg.setDestinationEntity(33U);
    msg.name.assign("CJTAEBKBXGNJAZNLUBWIQRIPDRJGGEJOTTKNKNGKGFFFUVANORVEVZJXFLNDMZSMRMWRWCFXUZAZXPWDHDSRNVYIHOUKNQRMETYDSAYDWAHJFUBYYQPQKZFKCHCLSTCKASOBBCXMMHAUIWRZIHQKUMTHGNJVIOQRXQTDXQXNSSVGLZASTBLMDYYULGCUEFIELPEJUYHEHLKVTWBPOHCI");
    msg.attr_type = 122U;
    msg.min.assign("XLJCHMOLEAYPWYIOGGWOMCIDXHXLQKFEBQAXKGJBEOZAHDCABYWDKPQSSDPGUHTGAMWSKNLPBTCLNEWUSYVFBSZHMPFOJKRGVM");
    msg.max.assign("GIAAYJWABOYBCVVAOBNGOKONVNMDLBBLMQDPEECAUOZKELQMFBEEVQFDGUIXIYVUWSIUJXXIWLMJHGFTGYDDXLDXMEKDRDZIJVXLEVPJYFDSSICZPZGLYWXABUZRKNHOIRZONCUUMVJPFZURSYODCKHFHMLAXASZTJOCQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexAttribute #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexToken msg;
    msg.setTimeStamp(0.7155446701059783);
    msg.setSource(34437U);
    msg.setSourceEntity(129U);
    msg.setDestination(58373U);
    msg.setDestinationEntity(83U);
    msg.timeline.assign("JPOLWQYDBLOSEXYERESRDITRMG");
    msg.predicate.assign("DXAVFAYHJQNDYJQBMCHIIFTRKLVHDDMFNILVAFZETVNEPCDKAYPRTRKRZBVFZSNLWBHCWKKGXKUDOCMQFOXJSOOGCAYUENRMAYGRSCYGLTRQISBLJXTENBVPQOCMELUPYZXTJBJKDRYARCUQQXZMXZFBOSFTWXPHTEPWS");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("SNOGIUBOWCFVDBHPKAYVUIYIOGKUVVPAQSHTSUNNPEGXITFPAYJLJAZXOXCWELCKXZMDRVJVXZGAOUOBVFMFVWALMCTNEFRZZWIGZBBUOTSDEPTAYDXWRSBZRQJOJMRDLMIRENMHRNQFHQVXWTRIHZRKOBESANGE");
    tmp_msg_0.attr_type = 159U;
    tmp_msg_0.min.assign("WXCQRKMRDULWJPMCLEFDZVUIWHENSIPUVTJOMBEFJUAJJYKRBHQGHJRDC");
    tmp_msg_0.max.assign("RPASRJTTFCWOGODHQZOOXNIZHVKUURXEFODEHNMLZMOMGNMKILVBWWRUMTBJYHDNVUBJIFXJWUYSUCVAQJPJDPVGXDQEZBJYQIQFOTXLTLTKPSFIDRGUSAE");
    msg.attributes.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexToken #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexToken msg;
    msg.setTimeStamp(0.2913433076486124);
    msg.setSource(2826U);
    msg.setSourceEntity(165U);
    msg.setDestination(53703U);
    msg.setDestinationEntity(165U);
    msg.timeline.assign("TCNBFWYAYLLDMWIDCVRQPEROCBULPXROVCQGANYPLJFLEIFHYHXBJKAAXKBJIVGODEPWZWAGOYVABFVGSLTXJWFWRABCYMMAXSJCXAMGKOUZCLVCNSBLJBDINDTVTPOQKKLEUQEEZKMXUZTMXJSPUSSGGPWRZN");
    msg.predicate.assign("TNMGTRJVDYNHMRXMESLNBZKRZGUSYKCGOPLLDNSSFWGPCJCXHQKXJVPOSNOWPYCKITKUOZWQALPAYDOGQPYIAVPQXIIDAUKYSAJBALSBDVONSCDHGBYBZDVFQWEJWRFALTBHLRFFENGIWBFTMSXU");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("ICZAPXGHJQGCPRVINFEDSWBDHUZEQWJPEBPZCLPSDOLFXPXMYJYJWMCODXXFLKBCOHVPESFQGLMKQLVTNYJDIURBGQUIVMFPMAJQNDHOMDPKNCXQTGKETCYDIBYWQLKUTLKTWUDBCAGKKXFWAMGREMFHLLFHATTWIAXZZZYZHAAGVCHRWYEVKQNBNSSZIOVNGWJNLJIOEUYOJIBVYSQHAOOSMZSRUWSARFOXGEPCRRFXRT");
    tmp_msg_0.attr_type = 210U;
    tmp_msg_0.min.assign("YARJVAAVOEOXWWXKVIEBMHBBREJDHITTZUGYKMEHXZJPRFRCWLNFPMCSXENVLMDFADFCSLZCCZALG");
    tmp_msg_0.max.assign("IWUJGRTLATVVZDRBZGOADELXYDFDSNFAATECEIGRMWVFSDIVEDJNOPOQMKUIFHZBMNKIKQUNQHUDPWZFMJBXQHARSKNXGCKBXGWOLVLZNNCWSYEJJVPWSUEHMWQOTAYQCSHBNYLROXYTYDSPGCGILFLLPJPTGWTPTSIHKVIBJQYDOUEUMMNXVRRBPUGCXJZKQIOFFLCQRYCKVAPXEH");
    msg.attributes.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexToken #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexToken msg;
    msg.setTimeStamp(0.20179921619837515);
    msg.setSource(54778U);
    msg.setSourceEntity(48U);
    msg.setDestination(57856U);
    msg.setDestinationEntity(34U);
    msg.timeline.assign("WJITWUVHTVQNJVQQQTASSEDAOIXXBNNYQBKWFPWFFMCREMNSTMBPIQISPFYYLHBMNECYAMXKKFUPXMDJOWNLGVCMHPLGZSDPSHSK");
    msg.predicate.assign("VPLKDGATFUVIWWJZRMSKOEJUKNNHIFFNJORTODUMCOHQDMHXQXQUWLYGESAIEQNAGGSCIFAWJOWDLAIXQBWDESCOBVPIUQDGTGAUBHBIMSVEBPCYGXZZSYEVFIKVVIROSKPTLJCWQFWBUQEZQYBFFHLVTJKZHPHGRUXC");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("UPGBQBWMCSITREFDKZFLLLWUDAASVINDZVNNZXYGSIJMXDWCCJIXPKHNGQXFELVTHFTL");
    tmp_msg_0.attr_type = 207U;
    tmp_msg_0.min.assign("TZPEORCFUBVVLTSOPNALQJOZNORJRVDVVFIKGZAESGQJWUFMUBEAECNHOOXWVKIQQFKYPDTHFCHYGMCRRKELHJUJSUCPDBLNKOBCPMUTJLQWRQTSXDICYZZJIMCHKIVZETWWAGOIXYMLQCSWMBCZIWXMXNDAHKBKIUXMNLJLPZWVDEMZMGHDGYHFUBUSAOGBSWSXYVJHSXLNGO");
    tmp_msg_0.max.assign("NIXYEAALWCXWABFZJZDUCNSJIBVMGSSRADGVXSTWTHJVKAIGIRVAKBOPQPUGKJHWOZVINDPNCLKBMGYSQUZDUZPAMVPWJEEFTSSJGMIQUQLCFFVOKKNDEXRSOZRLVMTUHOKFUOOUYTQYMJWZJHKGNIRMWHRPBSXECWBWCEIL");
    msg.attributes.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexToken #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexPlan msg;
    msg.setTimeStamp(0.8550545393559896);
    msg.setSource(39679U);
    msg.setSourceEntity(147U);
    msg.setDestination(45587U);
    msg.setDestinationEntity(240U);
    msg.reactor.assign("DPJRYDSWJMHLEJQBDKUVZCJRUPMDNTUXCSXRMGXTIWEKBLEHUFGIUAISHLYASFPZUPGFJAJDFERYHYCPEMJAOXUGDIXBURTOOZMQVKGIQTZVHMROINLQFBVKBHDDLVMAALIEFINWAWZZFWCASCGXQXUAYQUKJZBSTIHNCDWTOLOVCOBSBIRCGSMKBYNEHLPHNWCXDFBQAVPEKM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexPlan #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexPlan msg;
    msg.setTimeStamp(0.9999030774914311);
    msg.setSource(59386U);
    msg.setSourceEntity(83U);
    msg.setDestination(22864U);
    msg.setDestinationEntity(224U);
    msg.reactor.assign("CQIKHUQGYIAXLJXSSITWMIVEDZKEHXKAHTNJJHVISBSZSUHNNBFCTNDIVLKRQZXWVVSLCZOVONTJDBPCLNFMBBFBHSDLLWRUCTMMHWZRZWPVNAGXGZPHKYYVCRNTJKCWDSZBCTZXSJMIMKPVOGYEOWEFOGGXQMWTPQPFDJQMKFUBZNGRURYXWOLFFNTGBYGBQCQDRPUXUPTROWIVIEXEDQUFMARYKODEHKAELEQSOAAPJJAMAIALUULYPJHR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexPlan #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexPlan msg;
    msg.setTimeStamp(0.002912209712346736);
    msg.setSource(46785U);
    msg.setSourceEntity(8U);
    msg.setDestination(36031U);
    msg.setDestinationEntity(172U);
    msg.reactor.assign("XNWMAVLORYMBPMNCYKGMYWTSKGEKSZSWVUYUAUJGVEALVXJIJYDGCUICZAHJBWZGQHRXATYQDVXCKYDJOFFPWUCBNFIMPOBZNSSZAGORXRCFDOSBDUAI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexPlan #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Event msg;
    msg.setTimeStamp(0.27345032551935866);
    msg.setSource(27311U);
    msg.setSourceEntity(4U);
    msg.setDestination(41785U);
    msg.setDestinationEntity(3U);
    msg.topic.assign("TWPEDHUDDDSJKYVHMSSCKPEIUBISTPMTRYVBKFUMFVBCIECBZYHANPNOJARWCUVIEJDWSZOWQTMGXVQSLQBDOBOENRFYHGUXBQOWDEYLHMLZUBLZAEPZK");
    msg.data.assign("FYPVROYBPUKCKEFSDG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Event #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Event msg;
    msg.setTimeStamp(0.07397381133307324);
    msg.setSource(40732U);
    msg.setSourceEntity(36U);
    msg.setDestination(28260U);
    msg.setDestinationEntity(116U);
    msg.topic.assign("QLYVATBADDY");
    msg.data.assign("NSWOQBRMLDPAUHTSFBTTGYCQAOGXAMKCFNNVSWLZJDFEIWLOYCGGEYOIKCLMVCP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Event #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Event msg;
    msg.setTimeStamp(0.5081990252296049);
    msg.setSource(38462U);
    msg.setSourceEntity(198U);
    msg.setDestination(24326U);
    msg.setDestinationEntity(127U);
    msg.topic.assign("ODZISHKYRPHIWFNEHZAIGMZMIXJGAVOAOUUGXRSRAYMFLYBIRKSQXBPHCDPWXWXLVNFTPSJOIDKBQUTFJBCQPDLHKSCHJSOVZBWTKKYGCENITBPYLFEKGRQWVWEFDDZCEVPBUALFZQKZPCEUXMJXTF");
    msg.data.assign("MJGAZEEPEQQPMBIWPDQZEQYUXOTLLMISJEDAKCOFXJRKLMWTWEHVOWEHMHTTVWCSCICHLAFJBZDGVNZLYKJWRRSJIOJFRTQHUWCSGFVYNTYGEHUUKUQTZNYUIFXYNZXDANGBBSKCIBMFFQZEBJMCDGVWAAPXYSDXYCLDKGRLADGIOOLAUHHHRHNVNXGNOTIZPMLXBVUYFDIOKWSPUCTFKPSAPVJUIJTMRXCDKREBB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Event #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompressedImage msg;
    msg.setTimeStamp(0.769713621564954);
    msg.setSource(32995U);
    msg.setSourceEntity(7U);
    msg.setDestination(236U);
    msg.setDestinationEntity(154U);
    msg.frameid = 103U;
    const signed char tmp_msg_0[] = {-26, 2, 94, 69, -76, -26, -15, -91, 52, -63, -93, -68, -45, 92, -127, -100, -82, 35, 14, -114, 47, -121, -49, -34, 69, -101, 116, -40, -127, -96, 121, -87, -23, -87, -124, -120, 85, -81, 53, -11, -33, 84, 13, -38, 16, 112, -86, 86, -98, 67, 92, -8, 63, 16, -98, -59, -119, 121, -119, 19, -42, -72, 81, -37, 19, -99, 56, -100, -4, -98, -85, 18, -13, -105, -2, 17, -5, 123, -57, -59, 35, 66, -93, -75, -29, 102, -39, 80, 47, 89, 93, 114, -29, 89, -73, 112, 17, 10, -83, 34, -89, -72, -111, -128, 13, 43, -90, -36, 67, 30, -28, -37, -23, -22, 59, -119, 9, 110, 72, 6, 24, 42, 2, 54, -108, -56, 27, 56, -43, 104, -54, -94, 45, 94, 69, -32, -112, 90, 101, -55, 92, 125, 93, 100, -81, 104, 10, 48, 122, -113, -46, -127, -14, 109, -44, -107, -96, 34, 9, -76, 53, 6, 81, 69, 109, 96};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompressedImage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompressedImage msg;
    msg.setTimeStamp(0.5625669742998695);
    msg.setSource(16001U);
    msg.setSourceEntity(220U);
    msg.setDestination(63926U);
    msg.setDestinationEntity(130U);
    msg.frameid = 241U;
    const signed char tmp_msg_0[] = {-56, -83, 25, -35, 43, 51, -93, -41, -61, 54, -8, 114, 71, 16, 82, -66, 68, -10, -70, 44, 106, 5, 16, -46, 94, 63, -7, -57, -37, -110, 85, -24, 104, -98, 28, 40, -23, 121, 76, 16, 42, 40, -32, 42, 37, -85, -60, -4, -53, 48, -93, -67, -122, -120, -2, -24, -113, -76, -3, 40, 125, 94, -84, -51, 12, -70, -6, 98, -2, 93, 77, -11, 34, 84, -54, 10, -19, -1, 124, 34, -78, -75, -96, -101, -113, 47, -31, 17, 15, -56, 32, -103, -6, -44, 106, 21, -38, 95, 97, -58, -22, 124, 64, -31, 17, -42, 92, -14, 103, 44, -65, 17, -21, 29, 4, 114, 72, -108, -17, -56, 27, -61, 77, -63, 64, -79, 112, -120, -70, -46, 70, -123, -24};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompressedImage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompressedImage msg;
    msg.setTimeStamp(0.7159427303278435);
    msg.setSource(51546U);
    msg.setSourceEntity(170U);
    msg.setDestination(4844U);
    msg.setDestinationEntity(72U);
    msg.frameid = 199U;
    const signed char tmp_msg_0[] = {56, -28, -99, 109, -95, 55, -76, 6, -25, 109, -51, -70, 76, 112, 116, -116, -91, -102, 99, 3, -87, -37, -73, -68, 119, 9, -63, 121, -114, -67, 93, -93, -37, -114, -62, 52, 95, 81, -32, -70, 119, 124, 113, 3, -17, -114, -53, -93, 20, -31, -8, -40, -50, 32, 8, 4, 38, -123, 50, 102, 29, 72, 115, -34, -116, 62, -106, 34, -91, -96, -21, 125, -11, 97, 50, 36, 28, -76, 58, -83, -128, -15, -80, 66, -14, -126, -63, -9, 95, 122, -81, -13, -96, 107, -112, 88, 114, 49, -19, 69, 105, 122, -67, -32, -78, -33, 8, 30, -97, 124, 107, -113, -45, 64, 8, -36, -115, 40, 110, -119, -38, -43, -57, 84, 51, -4, 18, -15, 7, 51, 71, -65, 103, 126, -4, 77, 96, 50, 11, -26, -113, 118, 52, -12, -12, -107, -108, -56, -33, 58, 27, 79, -18, -87, -99, -29, -71, 34, 110, 55, -113, -72, -87, 122, -73, -89, -16, -95, 100, -69, 34, 57, -90, 94, -109, 23, -5, 72, -8, -125, 57, -128, 21, -30, -11, 34, 101, -120, 95, -40, -79, 71, -79, 10, -74, 126, 108, -73, -24, 101, 82, 97, -115, -120, 50, -94, -82, 45, -6, -110, 51, -37, 4, -115, 96, 97, -37, 76, -36, -22, -35, 115, 89, -8, 26, 95, -53, -104, 79, 12, -43, 37, -57, 80};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompressedImage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ImageTxSettings msg;
    msg.setTimeStamp(0.9926540610397949);
    msg.setSource(2620U);
    msg.setSourceEntity(95U);
    msg.setDestination(929U);
    msg.setDestinationEntity(135U);
    msg.fps = 186U;
    msg.quality = 46U;
    msg.reps = 147U;
    msg.tsize = 45U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ImageTxSettings #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ImageTxSettings msg;
    msg.setTimeStamp(0.2938930180245449);
    msg.setSource(3612U);
    msg.setSourceEntity(164U);
    msg.setDestination(50997U);
    msg.setDestinationEntity(169U);
    msg.fps = 128U;
    msg.quality = 151U;
    msg.reps = 146U;
    msg.tsize = 135U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ImageTxSettings #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ImageTxSettings msg;
    msg.setTimeStamp(0.7687790777231653);
    msg.setSource(2601U);
    msg.setSourceEntity(158U);
    msg.setDestination(6802U);
    msg.setDestinationEntity(28U);
    msg.fps = 129U;
    msg.quality = 170U;
    msg.reps = 219U;
    msg.tsize = 138U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ImageTxSettings #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteState msg;
    msg.setTimeStamp(0.5723950313216977);
    msg.setSource(13753U);
    msg.setSourceEntity(131U);
    msg.setDestination(21149U);
    msg.setDestinationEntity(145U);
    msg.lat = 0.26955269297647133;
    msg.lon = 0.4011114302284975;
    msg.depth = 74U;
    msg.speed = 0.2415090038529918;
    msg.psi = 0.08465613024928131;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteState msg;
    msg.setTimeStamp(0.266421032463551);
    msg.setSource(65298U);
    msg.setSourceEntity(115U);
    msg.setDestination(27763U);
    msg.setDestinationEntity(184U);
    msg.lat = 0.38397512509291276;
    msg.lon = 0.8211761154679124;
    msg.depth = 29U;
    msg.speed = 0.5977325445876617;
    msg.psi = 0.35713465617289;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteState msg;
    msg.setTimeStamp(0.42715452771115514);
    msg.setSource(52088U);
    msg.setSourceEntity(188U);
    msg.setDestination(64875U);
    msg.setDestinationEntity(85U);
    msg.lat = 0.47138708618055114;
    msg.lon = 0.11507641757276832;
    msg.depth = 68U;
    msg.speed = 0.5018938938440062;
    msg.psi = 0.5168018212459246;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Target msg;
    msg.setTimeStamp(0.8051910043111308);
    msg.setSource(40077U);
    msg.setSourceEntity(190U);
    msg.setDestination(37934U);
    msg.setDestinationEntity(115U);
    msg.label.assign("FIMWQCZITULOHRCYARPSOTCBIMTOCJPFCTTKQVXIUAMKSCZNMRMOQZEELIYLNSM");
    msg.lat = 0.48244853736136395;
    msg.lon = 0.730607848597214;
    msg.z = 0.8580936703723366;
    msg.z_units = 143U;
    msg.cog = 0.918521777491788;
    msg.sog = 0.9655849145218284;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Target #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Target msg;
    msg.setTimeStamp(0.31570098549034353);
    msg.setSource(32942U);
    msg.setSourceEntity(233U);
    msg.setDestination(54215U);
    msg.setDestinationEntity(156U);
    msg.label.assign("FPZNNCGJJAOVRXKLHEOQRHDAERAQYVHFUNXHKQGDFHSXOWMQPPGRWEGUJUMNUVBQBXMLNSYWIQGKDVHGAFHTLXPOZQFZTBMZNUJFOYDEYWDBAMZBWTCNPZLZKSKHNJQCMVSCJTLXGJKOEJUITFRKRACKTNCQ");
    msg.lat = 0.08234211917596512;
    msg.lon = 0.5896920351418694;
    msg.z = 0.7143505254921959;
    msg.z_units = 2U;
    msg.cog = 0.18874813261103363;
    msg.sog = 0.9789114540434906;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Target #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Target msg;
    msg.setTimeStamp(0.3829913744724627);
    msg.setSource(44963U);
    msg.setSourceEntity(84U);
    msg.setDestination(11291U);
    msg.setDestinationEntity(62U);
    msg.label.assign("LPTNCFSSVVZECUXVWTOAPKZDELQXNEHIBTABYPXOPAJRSQBJKWIHNXORCKRZDDZCEUYGADGLDXYXKJBYNIIIHGKFMTDYMMOZUPEFWCFTAJINIUTEWKHVBEWVYUGROLDFJBJOMRCJSUJQMYCUYQCMGVVSGLNPOJAMYQGZFHHHS");
    msg.lat = 0.920334562406211;
    msg.lon = 0.12343273216713968;
    msg.z = 0.029207481195356433;
    msg.z_units = 207U;
    msg.cog = 0.6525521675173291;
    msg.sog = 0.6279077956377628;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Target #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameter msg;
    msg.setTimeStamp(0.38547503147667794);
    msg.setSource(31138U);
    msg.setSourceEntity(4U);
    msg.setDestination(25797U);
    msg.setDestinationEntity(25U);
    msg.name.assign("KXLDNAZGQZBXI");
    msg.value.assign("SLFREDJHTNHSROCPCGQZXWSTS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameter #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameter msg;
    msg.setTimeStamp(0.4044708489733061);
    msg.setSource(34052U);
    msg.setSourceEntity(60U);
    msg.setDestination(7351U);
    msg.setDestinationEntity(199U);
    msg.name.assign("NYFQYITXSKZYQSHBXPVGGYXWWUXOGURIJQZBJDTQZHNXGXSKTWGUAZFEKYBPRKSJIAJJMGSKJICHBMFITRIAXGFVJCLDQLDROCRLLWZCVPTZVQGIVTLDLSVCEUOZDIKVKTUNKHUMEPQNXDMAUDIWFRROLMDIACSWEFSNNEEPFVBMOHONGUKBBRTCBR");
    msg.value.assign("XMRVSPQEEMKCSRYNEVADIHXXOEGGBULIAJQXWVPPXJTMDTLQCWUSFLCHHMUHJLNGLZJYPYLEMBIQKQZOXAMTKNBZMFLBQRDVQUZJDDEYRCPEPLKAIVIDZWSWMUMLJPUISVUX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameter #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameter msg;
    msg.setTimeStamp(0.46937090184781993);
    msg.setSource(62476U);
    msg.setSourceEntity(134U);
    msg.setDestination(23402U);
    msg.setDestinationEntity(230U);
    msg.name.assign("PBTSUICGXJJNVYACZDQEDYRHLNODEHOESIGMXGEYVFLXZPLNKNDJCMQARXWAHPAOWOQNNKTID");
    msg.value.assign("AXJESUDENSZRLBXYITAVJKZCKVEVCKBVUBBYJJIDSWTWFLTSZXAGFKBRQTIMOQAYEGDFLGIGPJWQLDFHCCKERESTPXKSCIJLPYRCXTGLAMNNZQQPYQLDOIFMRFWHMRRBXFINPDTIHZOWPWHZXMRBZTPUJGJCJSDHCHISOMUQANUPVANNJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameter #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameters msg;
    msg.setTimeStamp(0.84344294015663);
    msg.setSource(30826U);
    msg.setSourceEntity(170U);
    msg.setDestination(26481U);
    msg.setDestinationEntity(27U);
    msg.name.assign("IMZTQNZNGWPVKACSNXVAWSRUYTHPBAJZORGXIHMEKVQJUEZFEQXBYVZDLSAODIRNLFGUMHCSWCTACUKTVUWKPZTCXRXTMYGJDJOFBHAQGCNUCGIJPRSBWJNLLFKVKZUBBPDFGFOAKQEAZOQPMRLEEYATBFZKQVL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameters msg;
    msg.setTimeStamp(0.3122622480563816);
    msg.setSource(24813U);
    msg.setSourceEntity(172U);
    msg.setDestination(58878U);
    msg.setDestinationEntity(57U);
    msg.name.assign("ZSRTGFIGRGZQQLYWUXKUAAFOBIEVGIWNMLFZENJNI");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("QEQELZOEBUCONCBYEBAXIDNNVHULKYTPAWXFMXKWSOKYQDSYLPSDUYHDFPULAPTWNNGISJCKOQHPIWARZDIVMHZXLZSTTEEAAXXRAPMOQUUKUIFGMZWJBREXNBFMNHTJROGWLVUCTPFJGOSYBGJUAJKATSVMGHCTLXLZGTGSIRHVIYREJTGVQWFBHJCKPLQYYOWREODQJRNFZRKICODEUHSQFIGDCZKVMRXCDJMCVIMNDYBZLMKWFVZXFW");
    tmp_msg_0.value.assign("JZCXTPOZXMISVEGTUUYXTLECLXUEQBKRODNQCLTKQDIVFDHQADJPVVIEFKJUPCRTKYGBGBIRXNAUYXFGPDVYNHSCHUYEXLOOGDYAPAFDKGMWIRBWKKQEZNGGTKIZBANMBEFAMREWOXYOJANCLMYTHVSJMYKNBRURWZOOJSMLKHYTPVZHQUZJSQPFOXZJBQIRBFIHIEWVHFQSANGWAZMISSTULUDLXPGFCZOQRDBLHWJSJMRWWCFWE");
    msg.params.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameters msg;
    msg.setTimeStamp(0.288687175735433);
    msg.setSource(53446U);
    msg.setSourceEntity(8U);
    msg.setDestination(32644U);
    msg.setDestinationEntity(116U);
    msg.name.assign("VSIQNQKQAXBMCBBHRTCSOVUNVFWJKBHRHKG");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("ROTKKNIIQPEMKIBVSQJZMOMGXWEYMRNKQRAWTSFDKKHCIGKABNMALYUYGTWMBDEIPVQHRBOHFXVKCKSECAZMYIHNYSJZUCNQVJJSCFZTODXVXPBOBCDPEXXNUXDGRDEPNJWPRBSZBANUWCPAMCFQUJRUHILIFZLJWGLCWHDVLOLSJPOZUTYASFJJL");
    tmp_msg_0.value.assign("IMOATNKCWPPWKIJLSUMCXNCQBREDMUTOKLJTAVVSLWHPIYWNYUO");
    msg.params.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityParameters msg;
    msg.setTimeStamp(0.5848561368929387);
    msg.setSource(35320U);
    msg.setSourceEntity(95U);
    msg.setDestination(60187U);
    msg.setDestinationEntity(30U);
    msg.name.assign("HIHMPKUBIQMFHUUUDVLJWLYCYLL");
    msg.visibility.assign("TVCLTADNCIWTTRQRFU");
    msg.scope.assign("JWCILCGMHOLVHHOJDUKQKPVDEVAHRXJWEORQPOTASBZYWCXYRKWNFEMFLPNPFJLVSDXOHYTCZPCDGMXKUZTPIEROIBXQXXCFPWONPLNABJLXZJNPGEGQYURCVVIUFBSWGYABECTSJHDNVIVGOKWJZLMUGEWAQSYKKCQRVMYWDKMARBENMFNXBUAMZLZHBHTIAFJNQHH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityParameters msg;
    msg.setTimeStamp(0.24304192440861383);
    msg.setSource(26894U);
    msg.setSourceEntity(109U);
    msg.setDestination(25486U);
    msg.setDestinationEntity(247U);
    msg.name.assign("UIVYVLDIYFKADLMYKPHAPOWOGERANSFKIVQMRGWAWGTEHSBUDSDNBNCQZSSODYDZENNZBTDZBXPRBAQMYJSPBWXEUCJZTKVOAKPUFYUMTWHXGJJFEXFMWLORVVIMNQFGJLHHRC");
    msg.visibility.assign("GMNTTJHDDWLVXFJNYZOQATUPPXPTWZSDUYMSJVRKQWQTECFGGIWNFTSAWASECIFABSFNCFHZOONLUYNBUIKXMFRABNHAEAXJEHOVZRZBDXMIWBBQOEPQJMBZVOYTBMLCJGIJUPWASH");
    msg.scope.assign("NIXAROIKELBCECXDAEUZUWBMFIJENWMFLAOXMVJIQKWRGUNJJFS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityParameters msg;
    msg.setTimeStamp(0.4745889286291729);
    msg.setSource(58737U);
    msg.setSourceEntity(38U);
    msg.setDestination(25709U);
    msg.setDestinationEntity(127U);
    msg.name.assign("JBMKGDVZCFTIYDTWNZDUPHGFOKSHNHJUFFSFWGUZFBTTEJPNVMEVVEYNOJMPGLNUXCJZYDPPKNSALYCSVQWAWMWKAAXAOMSIDZQICYXDNUTLSKHLJFFOMKEXBWDXCVWMEAIHXBYXVZIOYXPHRLJCQISNOLZDUJKQPQBJMXCGBBATGQHJNEZQBOGPRNRTQZSSVCUOURLKFEEMVQHAILHIFRVIA");
    msg.visibility.assign("ZUIKMSVGFONACNOMHPNDRWWQTQSIARBMZDLXJJZTWGXOOVPUKINYISQYNEUBUZALDVDNTITAIXTLOHXMCGMAUWFXWPEILEBKVMUNMZGKUEUYPZCQZHALTGQHVCJQPVRJJXKZURCYAQHCEKRDFCKEBGEJBXYZTMGHKOOHERRWISYPWORCNSSBDVPGXOLAKTLXAQCTBHNUHPGWDVDLFRFVVPNMIEWCJF");
    msg.scope.assign("NMPEZBADBPYKHTMKDSIMWOVKIGCFHYMUHWWJQFXXXUNCRBCZOIWTIRDGTJLWTSGJFRGKQMCMLIPRQEKDZPKJOHEXLOOALIDHNGJMGYYNIRWEQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetEntityParameters msg;
    msg.setTimeStamp(0.7465230269845494);
    msg.setSource(25784U);
    msg.setSourceEntity(109U);
    msg.setDestination(48059U);
    msg.setDestinationEntity(148U);
    msg.name.assign("CRJIWWXISCCPHBZXFXQAMXIOQOSOUJLFGTFFWATYMKVWJRPOLBNG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetEntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetEntityParameters msg;
    msg.setTimeStamp(0.16612260912085441);
    msg.setSource(49394U);
    msg.setSourceEntity(190U);
    msg.setDestination(56070U);
    msg.setDestinationEntity(228U);
    msg.name.assign("VWYCVHAUOHHBXRTRJSOFZILMCZVUHHBERUQMIYEAXAZCYPIUWSZVBRGDNMSDSIJFNSXLITNUULFIYGRHPSAZDOHGELFUXKWONGEKQWDYAJQLBMGYMCTYOOPLEQWWUENWJSGJVDDVNMQJRXFTAKRTSBHIZFUVBJPPPZJTFCVHRKZNHDBDPCKNLPMXYDJVFZWALRJYTMIXEE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetEntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetEntityParameters msg;
    msg.setTimeStamp(0.4590955772869525);
    msg.setSource(14901U);
    msg.setSourceEntity(5U);
    msg.setDestination(37818U);
    msg.setDestinationEntity(211U);
    msg.name.assign("HIJPDCYBAKVQUWDUITTUKTLBFWWXRSJCJUEVOLSLKZYESHGHYCCWDRVBNJVODQYLEPVIJAKBCODBIBBAOKYVOQGUWNSGNLFRSHOXXTPYJUCJCHJTTQUDXDRWABUFBAPYDEEPKRWEMPCJRTJRMNYARGCPBMLYXQFQRZLLAFVGXDVSNEITAICMGASIOWKNWPSRIFZOHNLMZMHVGOQGTFZEXUNMUXFPQZSEOQFZEKQNHZTZGMZWHNIGPKHMFS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetEntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SaveEntityParameters msg;
    msg.setTimeStamp(0.8594044280430668);
    msg.setSource(31819U);
    msg.setSourceEntity(59U);
    msg.setDestination(3988U);
    msg.setDestinationEntity(79U);
    msg.name.assign("YFCDAZXHLGQULLORYUSYJGEHAHCAWQKRQNRKCQSTJYBRLZIITREUVRTNSSKYSOCCDPTYU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SaveEntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SaveEntityParameters msg;
    msg.setTimeStamp(0.37576430473635614);
    msg.setSource(42541U);
    msg.setSourceEntity(122U);
    msg.setDestination(44528U);
    msg.setDestinationEntity(154U);
    msg.name.assign("ZSBNGHVYMCFUSOFBVMGXQBSKYPBCBUYJRGGLCEQQHYWPHKTNBTOJREUXGMFFNFMDMEROWICXZNPRYXCOWNVATPLAQBVDKIIXAORDASTMQWZSWNUJJTQHNUAIRZELKDFKAFHVDRMZJTXNEQGVGLYWIGPNPZJRFZEIIJUEUOI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SaveEntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SaveEntityParameters msg;
    msg.setTimeStamp(0.1837880108340565);
    msg.setSource(47040U);
    msg.setSourceEntity(150U);
    msg.setDestination(60422U);
    msg.setDestinationEntity(137U);
    msg.name.assign("COFBANLGVDVUYRCNTZQBFLDXEAZINYRJHAGDPVIHRTKOVUQLFYBGJVEUMSNYWKCAMZPVNIUWKIETLUFOWFRXAEYMAXEDILIZXQLOWGKYUSYBBEJZTUWXRHNCKIQJF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SaveEntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CreateSession msg;
    msg.setTimeStamp(0.5291003820365059);
    msg.setSource(20852U);
    msg.setSourceEntity(166U);
    msg.setDestination(56244U);
    msg.setDestinationEntity(41U);
    msg.timeout = 4202213289U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CreateSession #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CreateSession msg;
    msg.setTimeStamp(0.32420654387877623);
    msg.setSource(23565U);
    msg.setSourceEntity(178U);
    msg.setDestination(57366U);
    msg.setDestinationEntity(235U);
    msg.timeout = 3452780763U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CreateSession #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CreateSession msg;
    msg.setTimeStamp(0.6591293662510458);
    msg.setSource(45649U);
    msg.setSourceEntity(99U);
    msg.setDestination(25954U);
    msg.setDestinationEntity(6U);
    msg.timeout = 3885176792U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CreateSession #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CloseSession msg;
    msg.setTimeStamp(0.059838771169110294);
    msg.setSource(31375U);
    msg.setSourceEntity(196U);
    msg.setDestination(62034U);
    msg.setDestinationEntity(235U);
    msg.sessid = 749066700U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CloseSession #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CloseSession msg;
    msg.setTimeStamp(0.4809220628784605);
    msg.setSource(44558U);
    msg.setSourceEntity(94U);
    msg.setDestination(26489U);
    msg.setDestinationEntity(139U);
    msg.sessid = 505440646U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CloseSession #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CloseSession msg;
    msg.setTimeStamp(0.3049802025049011);
    msg.setSource(3416U);
    msg.setSourceEntity(138U);
    msg.setDestination(36993U);
    msg.setDestinationEntity(144U);
    msg.sessid = 3737350691U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CloseSession #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionSubscription msg;
    msg.setTimeStamp(0.7144790448947484);
    msg.setSource(11651U);
    msg.setSourceEntity(179U);
    msg.setDestination(33720U);
    msg.setDestinationEntity(60U);
    msg.sessid = 468345170U;
    msg.messages.assign("KYWKNLXQHBXHNXZZPVNAEYKWPLBGZDKPOTIQUNTUBYE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionSubscription #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionSubscription msg;
    msg.setTimeStamp(0.17642752900809222);
    msg.setSource(27872U);
    msg.setSourceEntity(70U);
    msg.setDestination(42828U);
    msg.setDestinationEntity(125U);
    msg.sessid = 1428769281U;
    msg.messages.assign("ZKIPTCNAAKBEAFLTVZJCGXZGADZQSZXTRCLJNZIISVHQYVXQVEINKAAGHARJTCTWKFAUFXIDGRUEJYMWMNISBQKJFWNNOEZDLQXUMTSOWBVFPBMDCPQLWYYVV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionSubscription #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionSubscription msg;
    msg.setTimeStamp(0.946256974342014);
    msg.setSource(59603U);
    msg.setSourceEntity(239U);
    msg.setDestination(61966U);
    msg.setDestinationEntity(12U);
    msg.sessid = 2790469228U;
    msg.messages.assign("OQHRZTSTAEJQWDTJWWCGMARCDPJAKMUFBYLHYRNJERNRWABDTKZIUVYLZHJQSXPVZYKJOFHAZMBTBAKZUOBAZNPUHLUAODIEVEGNVWLMGSGILQVEYWDSBRPVPVCGHUPLXJRYBOMSAPPN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionSubscription #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionKeepAlive msg;
    msg.setTimeStamp(0.5084723281831679);
    msg.setSource(44146U);
    msg.setSourceEntity(174U);
    msg.setDestination(33009U);
    msg.setDestinationEntity(150U);
    msg.sessid = 1493760941U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionKeepAlive #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionKeepAlive msg;
    msg.setTimeStamp(0.14935561918976148);
    msg.setSource(50446U);
    msg.setSourceEntity(12U);
    msg.setDestination(45238U);
    msg.setDestinationEntity(46U);
    msg.sessid = 49684425U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionKeepAlive #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionKeepAlive msg;
    msg.setTimeStamp(0.7422957808079922);
    msg.setSource(27584U);
    msg.setSourceEntity(158U);
    msg.setDestination(1303U);
    msg.setDestinationEntity(205U);
    msg.sessid = 1691276151U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionKeepAlive #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionStatus msg;
    msg.setTimeStamp(0.6465090389720848);
    msg.setSource(1486U);
    msg.setSourceEntity(213U);
    msg.setDestination(31616U);
    msg.setDestinationEntity(207U);
    msg.sessid = 3805666447U;
    msg.status = 211U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionStatus msg;
    msg.setTimeStamp(0.03409796156726186);
    msg.setSource(56445U);
    msg.setSourceEntity(189U);
    msg.setDestination(26216U);
    msg.setDestinationEntity(205U);
    msg.sessid = 2738669507U;
    msg.status = 36U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionStatus msg;
    msg.setTimeStamp(0.8810530679741503);
    msg.setSource(48056U);
    msg.setSourceEntity(217U);
    msg.setDestination(47601U);
    msg.setDestinationEntity(175U);
    msg.sessid = 1873993184U;
    msg.status = 173U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PushEntityParameters msg;
    msg.setTimeStamp(0.9784846661891562);
    msg.setSource(11911U);
    msg.setSourceEntity(129U);
    msg.setDestination(24555U);
    msg.setDestinationEntity(46U);
    msg.name.assign("CFQDUCPFQFOKOSTIYFL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PushEntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PushEntityParameters msg;
    msg.setTimeStamp(0.2829907013532945);
    msg.setSource(61624U);
    msg.setSourceEntity(129U);
    msg.setDestination(40743U);
    msg.setDestinationEntity(82U);
    msg.name.assign("NBCQCKQWSUZJHYTPPQTVIGDJOCJIGEJGCNFVMPWBOLFGWPYXZRZJSHHMGJPYDBBCRKOKDLIOBYRQZHMTVKGVMEJNTFFYCPRSXEZHQQAOPD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PushEntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PushEntityParameters msg;
    msg.setTimeStamp(0.8276306040631699);
    msg.setSource(59876U);
    msg.setSourceEntity(51U);
    msg.setDestination(45222U);
    msg.setDestinationEntity(176U);
    msg.name.assign("KMDVLWVELFFWWGXUTBQECPSOSMDWSXHGBAPBGBHPCVNDTRFY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PushEntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopEntityParameters msg;
    msg.setTimeStamp(0.1882722198770247);
    msg.setSource(55155U);
    msg.setSourceEntity(132U);
    msg.setDestination(3137U);
    msg.setDestinationEntity(194U);
    msg.name.assign("QEUHMKBRDUTIRGORGVJQRVQBVGLOJUZJTOUDOAJYOVILKGFNRYKMDAGJPTEZSSMFIQWZLSHPNXASTIOWWVOCDCMYFKBJLZGRCNEDWLUVQABIFMEOOMXWVHXTBTACKFEFJEKCIHDEPCBBRLUACPAQHFQXYJMNIAMSBPOPLTRZIFGHYPSWXBSMEZQJAXCLLKVTHTRNDEUHVZFFZGPITWWQSAJSWYHGKYZUWHXMKNRNUDXXDBLUQYEVSNIXGN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopEntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopEntityParameters msg;
    msg.setTimeStamp(0.21793532251776637);
    msg.setSource(34420U);
    msg.setSourceEntity(29U);
    msg.setDestination(22797U);
    msg.setDestinationEntity(114U);
    msg.name.assign("CDRMBRIBNGUJLXFVTTSMCENWZPEKRDXVIKJHWUBRZQZDEANFXRGGCSDKLOWBHFNZULTRQJJRGCKTPXKPHWQZSYMLYOSUWMGVZYDSAJNRCYFVLGOHTCBGMQREIVWKUVJSZKQNAXSHFBWDOCCAEPVITWUKTITBODMLCHZCOMANEIYWDVKGXPPEPQYITSFVEHYFALUXJZGUOQJEJS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopEntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopEntityParameters msg;
    msg.setTimeStamp(0.5215079957625411);
    msg.setSource(40608U);
    msg.setSourceEntity(204U);
    msg.setDestination(38755U);
    msg.setDestinationEntity(14U);
    msg.name.assign("NHBDNMUQAOCCNIPIRAVVPVTCDUGGEOJOBQPWKQRDMNTTELQVXQVMEZRISYJBJKYOXVDBEHACBKWTDERITOJWFSLYGPUSFIQTWKJJRYFNAAFGMIMLHVZTSNJJRFLGCGRXWVEHZHXMKRROVRTKLNFUGKTUMOCHLWWZSAQSUPQMIPEZSIXMSZDTXUXCMBVPFYZHEDYWCBBXFZYXHJKI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopEntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IoEvent msg;
    msg.setTimeStamp(0.5934077891497742);
    msg.setSource(60894U);
    msg.setSourceEntity(30U);
    msg.setDestination(37844U);
    msg.setDestinationEntity(88U);
    msg.type = 68U;
    msg.error.assign("YVSWKKRUIGPDUKJPAAYOGCZTVVIJGHPFBFROILEMDLLYMORHG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IoEvent #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IoEvent msg;
    msg.setTimeStamp(0.2669028391913283);
    msg.setSource(57786U);
    msg.setSourceEntity(189U);
    msg.setDestination(46152U);
    msg.setDestinationEntity(4U);
    msg.type = 189U;
    msg.error.assign("ZCQKUBJBZOXTDQKYFY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IoEvent #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IoEvent msg;
    msg.setTimeStamp(0.6772574090452443);
    msg.setSource(11129U);
    msg.setSourceEntity(14U);
    msg.setDestination(9492U);
    msg.setDestinationEntity(87U);
    msg.type = 235U;
    msg.error.assign("RGMQOCBSJOBHHEHVI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IoEvent #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxFrame msg;
    msg.setTimeStamp(0.845963218434562);
    msg.setSource(40994U);
    msg.setSourceEntity(41U);
    msg.setDestination(64950U);
    msg.setDestinationEntity(106U);
    msg.seq = 30931U;
    msg.sys_dst.assign("AWGSNEYLZULOBNPDKTXZFXYLEFVJYFQIOJKOJBSRLUACRLFAEGLGTHQFIJRZOSHVPKWNCDCUZHSLAYHHPJO");
    msg.flags = 133U;
    const signed char tmp_msg_0[] = {-11, -3, -22, 54, 93, 44, -45, 17, 22, 39, -70, -85, -96, 38, -124, 50, 42, 94, 71, -97, 115, 73, 8, 54, -102, -89, -47, 36, 85, -26, 105, -51, 76, -82, 53, 50, -86, 91};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxFrame #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxFrame msg;
    msg.setTimeStamp(0.8618329707570069);
    msg.setSource(32411U);
    msg.setSourceEntity(26U);
    msg.setDestination(23731U);
    msg.setDestinationEntity(124U);
    msg.seq = 46873U;
    msg.sys_dst.assign("GLAEVCYQNKEODZTMMAEBRSBGHAWRGEMCYDXYLABUHKDXRYVOLNHLCWHFPHBVGQLJ");
    msg.flags = 235U;
    const signed char tmp_msg_0[] = {79, 4, -34, -36, -96, 108, -21, -73, -115, -98, 15, 92, -31, -108, 33, 35, -32, -32, -107, 6, 104, 15, -4, 25, 86, -47, -80, -111, 69, -89, -49, -124, -123, -108, 70, -123, -90, 111, -111, -64, -85, 99, 117, 121, 20, 112, 83, 91, -86, -121, -62, -23, 117, 17, -86, -27, -75, 100, -121, -34, 45, -88, -19, 38, 28, 78, -71, 51, -34, 65, 67, -81, 62, -29, 96, 33, 38, 68, 107, -51, -42, -11, 11, -101, -119, 55, -55, 115, -13, -10, 52, 60, -101, 45, 50, 77, -115, -70, -92, 5, 95, 1, 26, -33, -80, -96, 45, 49, -117, -122, -8, 43, -37, 57, -116, -19, -121, 102, -18, -36, 111, -70, -33, 51, 109, -125, 61, -126, 32, -33, -19, -70, 4, 31, -70, -62};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxFrame #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxFrame msg;
    msg.setTimeStamp(0.8335365531023845);
    msg.setSource(18605U);
    msg.setSourceEntity(105U);
    msg.setDestination(4001U);
    msg.setDestinationEntity(128U);
    msg.seq = 26112U;
    msg.sys_dst.assign("ZBDCPCWGTNFVJCTLAQHIAUIJOPCRPVWJENGFDEQNEWBZXVOGUYLBHOWHFWEYDMJYUROSWKUKCLIZFLW");
    msg.flags = 136U;
    const signed char tmp_msg_0[] = {-126, -99, -3, 117, 105, -54, -4, 101, 94, -77, 22, -67, 81, -46, 50, -64, 89, 84, -82, 33, -9, 13, -80, 82, 73, 10, 40, 79, 94, -21, 39, -39, -68, -126, -62, -79, 27, -67, 26, 17, -14, -96, 123, -122, -94, 113, 117, 98, -1, 89, 99, 43, -55, 14, 79, -18, 80, 89, -1, -112, 62, 98, -121, -89, -2, 126, 57, -72, 50, 59, -62, 86, -42, 81, 21, 113, -56, -56, -23, -8, -118, -94, 40, -24, 32, 38, -51, 44, -15, -13, 7, -13, 109, -93, -10, -86, 89, 49, -89, 118, 17, -35, 115, 23, 19, -94, -2, 62, -90, 43, -113, 9, 2, 99, -97, 16, -11, -115, 10, 12, 26, 38, -85, -77, -110, -121, -15, 54, 126};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxFrame #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxFrame msg;
    msg.setTimeStamp(0.3870690912816598);
    msg.setSource(1703U);
    msg.setSourceEntity(167U);
    msg.setDestination(38590U);
    msg.setDestinationEntity(188U);
    msg.sys_src.assign("JQJDZOXIQFUNVUGDKZHUWZPDNYTFPJLGHTSIKABTRLOGKQFGLNGIEKCWIXPNMALSHDLGSMZEZHNUOONZIUCBXYTFOZOEBGYRSIMZFCVHCXDISSDYONEJLJMVEPCCWBBMQRHXDBKJRTWRAAYNJKFKWRAZKMFELGJEOAXTIPJEGRBVHYMOMAKDVVMLKWEXHFWIYSNUUCASFTDPSQJPWVMIYVYGRPBRZQFAUSCRWNHVUALBTHCXWTYVUOBPLQDXQT");
    msg.sys_dst.assign("QJEFVGUBDBPCLNFLETPWUGRIJXYMRWAXWSFQWNSNHZTARGSHOQOVUDENKRNUKQPMRPEGQLZJZMJIDFLKBDJSETXYPZTSZSAVMITBHURCFDDHPIWCETQYGXBBCOWFAAVQEIUVZRMSXZECUNQZVGCAHKILJOKXKYBQASSLCADDARHJFJHGNDIKLCPMUMWXRXLPTZOVIOVUZBVAYJMEWGQYKWNBMLRYOYTGFVFLXUKOMBKEWHDIISJYXCP");
    msg.flags = 125U;
    const signed char tmp_msg_0[] = {-105, 80, -15, 63, -51, 79, -26, 78, -71, 102, -75, -37, -64, -54, 72, 7, 59, -127, -16, -33, 24, 84, -68, -31, -84, 73, 50, 55, 10, 120, -70, 119, 26, -75, 80, 89, -78, 110, 109, 44, -74, 116, -122, -40, 11, -88, 47, -85, -103, -55, -123, -90, 103, -127, 30, -66, 87, -91, -120, 70, -4, 63, -57, 73, 119, -105, -17, 71, -96, -119, -68, 62, 2, -78, -36, -122, -25, -124, 120, 29, -61, -84, -39, 96, -124, 33, 107, -88, -54, 126, 119, -70, -119, -88, -4, 38, 122, -3, 42, -67, -31, -24, 98, 106, -40, -24, -103, 10, -36, 73, 107, -23, -122, 2, -39, 43, 7, -110, -110, 108, 2, -9, -96, -13, 108, -88, -56, 104, -85, 31, 83, -73, 83, -63, -125, 97, -51, -75, -39, 42, -69, 3, -64};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxFrame #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxFrame msg;
    msg.setTimeStamp(0.44420742228820354);
    msg.setSource(64077U);
    msg.setSourceEntity(99U);
    msg.setDestination(58859U);
    msg.setDestinationEntity(226U);
    msg.sys_src.assign("GWNQBZRJFBLXKUIHGBSYEMUYMVYPLTO");
    msg.sys_dst.assign("JHBZNAPCZCPUPKITUQBSUTWNACDOOYVMDFXOXXKDVOUGXVLESIDMAGFRGZXRHTGJFDUNSXVIZZCCZFKWIJAZIMLNLEGOKODCQUYYPWKAOGXGSNHIRJNHEFREIYRTEJKFSILWHMCBPULOJMQMDCLLATQYYVQJJNGQYECNFPPWTKEUNBJDWRRYLTRLFVSXBFYMABAQSBRHHTPVMIXFSEOZVRJBIZUQQQHM");
    msg.flags = 84U;
    const signed char tmp_msg_0[] = {32, -80, 40, 6, 74, -78, 70, -65, -85, -99, 20, -13, -56, -109, 93, -25, -33, -106, 13, 111, 107, 60, 78, -57, 92, 57, -34, -38, 126, 32, -36, 97, -1, 13, -71, 91, 121, -54, -84, 59, 113, -19, -7, -6, 22, 73, -62, -71, 52, 48, -40, 7, -76, 47, -96, 58, 62, 50, -70, -97, -18, 81, 5, 114, -81, 8, 107, -39, -111, -109, -74, 108, 1, -39, 31, 99, -50, 56, -12, -36, -114, -120, -17, -29, -89, -119, -91, 78, -34, -37, 101, 58, -83, 122, 72, 111, 62, -67, -77, 62, 30, -41, -85, -62, 31, 65, -96, 49, 60, -32, 75, 39, 27, -120, -119, 15, 43, -39, -97, -20, 32, 98, -82, 74, -97, 17, 109, -41, -45, -52, -121, -49, -39, -86, 71, -73, 5, -102, -124, 102, -43, -120, 2, 44, -91, 88, -89, 121, -112, 8, -70, 67, -52, -106, -23, -104, -87, -32, 63, 35, -67, -37, -37, -75, -88, -127, -25, -14, -38, 46, -39, -106, 33, -21, 53, 47, 117, -73, 59, -22, 22, -37, 56, 28, 22, -110, 81, 23, 79, 25, 70, 25, 14, -87, 89, -126, 44, 102, 24, -77, -51, 76, 114, -51, -115, 61, -97, -95, 74, -58, -21};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxFrame #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxFrame msg;
    msg.setTimeStamp(0.15349460385592162);
    msg.setSource(57017U);
    msg.setSourceEntity(116U);
    msg.setDestination(58391U);
    msg.setDestinationEntity(117U);
    msg.sys_src.assign("HIGYYVADVFTIMKVFYUJBFTASERXMSOVHFOOILYZBJOEKPVECQUCKDELVVKII");
    msg.sys_dst.assign("UAIQOHTXIWHSUSVVZOFRTLBRESNQQGUNLVESUPCDPJAKDYIVXCQZTXJP");
    msg.flags = 41U;
    const signed char tmp_msg_0[] = {95, 25, 13, 114, 13, 9, 5, 75, -116, -66, 77, -115, -1, -92, -102, -8, -124, 71, 37, 57, 120, 123, -120, -20, 35, 107, 62, 45, 69, 8, 86, -88, 90, 59, 83, 124, -54, 89, -107, 35, 19, -79, 80, 48, -26, -105, -47, 117, -107, 115, -67, 19, -122, 1, -62, 116, -106, 9, -58, 57, 118, -58, -125, -9, -104, -53, -101, -88, 3, 59, 15, 106, 108, 109, 8, -19, 52, 112, 53, 125, -97, -84, 91, 32, 86, -48, -46, 55, 6, 31, 46, 72, 34, 41, 79, 42, 7, 44, 88, 32, -48, 102, 61, -92, 91, -34, -50, 10, 10, 61, 20, -43, 120, 1, 58, -95, -89, -69, -57, -60, -60, 18, 118, 67, -108, -21, 86, -47, 104, 98, -112, 112, -54, 24, -53, -48, -46, 48, 126, 20, -33, -70, 35, -47, 81, -29, -65, -8, -99, -107, 23, -48, -74, -67, 88, -10, -2, 51, 94, -83, -9, 118, 57, 112, -85, -17, 27, 92, 4, 40, -117, 121, -28, 110, -71, -78, 46, 17, 44, 69, -83, -65, -112, 1, 77, -63, 58, 18, 67, -4, 44, -6, -77, -74, -3, 53, -48, 68, -95, -46, -124, -93, 12, -68, 123, 6, 51, 55, 45};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxFrame #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxStatus msg;
    msg.setTimeStamp(0.3731990266553884);
    msg.setSource(31074U);
    msg.setSourceEntity(21U);
    msg.setDestination(53542U);
    msg.setDestinationEntity(47U);
    msg.seq = 50810U;
    msg.value = 138U;
    msg.error.assign("PPIBIUWUIZTYFWCDQURZNDEDIJFWWGMYJRFDFJTYAOEFQELMPUMGBTJRSBUQCWYVHEHKPWGUYLURCIEKPXKTFLPPVMUSYCDJXFZIOXJSRLKYQOEGGWTZMVHNAHOBBVVHRHLRFMLPHWEGQORTCZRBESXNVBGOJSTZZQCJFQNKPNDWCUCSLKDSMHYONCXZTYMNEMRAALIBAANJKSVUDVZXDB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxStatus msg;
    msg.setTimeStamp(0.47966276797981067);
    msg.setSource(53049U);
    msg.setSourceEntity(85U);
    msg.setDestination(44299U);
    msg.setDestinationEntity(68U);
    msg.seq = 39111U;
    msg.value = 141U;
    msg.error.assign("VRZBASRMMEVYFAGPYULXAQNVDQCYVNBAPIYQUKOWULIJIELHMXNQAXACJKZOBEYZMQEWS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxStatus msg;
    msg.setTimeStamp(0.8938864101972668);
    msg.setSource(45364U);
    msg.setSourceEntity(138U);
    msg.setDestination(48803U);
    msg.setDestinationEntity(129U);
    msg.seq = 51914U;
    msg.value = 202U;
    msg.error.assign("NHSIABOHELSVYIHVFTOEOZONXUMQLDLSQTSOUYSKPDGAKHAZBTZRYLNDWGVJRQXUYEIILFQOBNQOHVAJYEXOFPARSGESBIIIWNCDALVUHJBJQIEGPEGVJFMCNKFTAWYXQUKZCVFDLCNMHLFJGMTPBRJZDDBVAXCRROFUYLMVDSJTMFPGXCWRSEXKKAWGTKCIJZZGTSMDMPPQURWZCBWTIFDYHNBZCNXVBLWXPMCUQXHEKKJUUYTHYZRGWPKNEA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxRange msg;
    msg.setTimeStamp(0.7888260030377873);
    msg.setSource(12347U);
    msg.setSourceEntity(64U);
    msg.setDestination(27305U);
    msg.setDestinationEntity(63U);
    msg.seq = 58562U;
    msg.sys.assign("AHKSRRMIHJOVXHGBOUBVVLKVYWDZGDBGZJHWBYQVVQVINSZZQWGQDBBYRFCNDRJYLGNYWUBGKPXAJOHRATPXCFHVKBZDODLMYXSXYFEFRNZNMRQRDLPXMAICOWDFYTHOWZPUFICV");
    msg.value = 0.6310922780329835;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxRange #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxRange msg;
    msg.setTimeStamp(0.8409513618539256);
    msg.setSource(29456U);
    msg.setSourceEntity(60U);
    msg.setDestination(43490U);
    msg.setDestinationEntity(243U);
    msg.seq = 50345U;
    msg.sys.assign("ETXRYPSHFXVZQGAVJKGBBUMXWZRUAQFXVAOUCFDYIPQSYVOGEUJNMKJJCBEROTYEZISFLIMVWRWFRNBRGBPALNPMEKQTOL");
    msg.value = 0.476453183742229;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxRange #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxRange msg;
    msg.setTimeStamp(0.797547913400636);
    msg.setSource(42625U);
    msg.setSourceEntity(123U);
    msg.setDestination(2773U);
    msg.setDestinationEntity(205U);
    msg.seq = 63983U;
    msg.sys.assign("TFZDSVVRRHNYTWDBJJNNFTUXBFJQXMEWTNGGNTYQAPDQQUZUSUMKHKILXZGACSYRBSPSSDOTJHEOJCUHVDXKXLTCTIIPRRMDLZWWVGHPNUFHDOXIWPJKOBYMTCJRLNGLBMVRERQFISEDQEPPGXIAKVBKXCHALVKHEZJE");
    msg.value = 0.6135808079814961;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxRange #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxRange msg;
    msg.setTimeStamp(0.9604342076913966);
    msg.setSource(7081U);
    msg.setSourceEntity(64U);
    msg.setDestination(2982U);
    msg.setDestinationEntity(162U);
    msg.seq = 55384U;
    msg.sys_dst.assign("GYZUEOJZCNBCOEMOWKTKMLBJRCJYNWHYURCYXCLRHHEVZMZEEIADWHHPQSPFXSVIGIEFOKASOPRXWCNIZBVJXIQQKIQENLHAGQTDDAJSNMEWHUPUKATKXSUUDBRORCNOTUDLNJHFGSJAZVTHKATRJILBQGBDDASSYOVVFDSFPFDXYGWQCRGLT");
    msg.timeout = 0.2008103777813477;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxRange #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxRange msg;
    msg.setTimeStamp(0.3286319321346832);
    msg.setSource(9424U);
    msg.setSourceEntity(5U);
    msg.setDestination(2854U);
    msg.setDestinationEntity(142U);
    msg.seq = 64669U;
    msg.sys_dst.assign("IQVVXFJQAKDOKMFCGQFWZTHVMZRYDOHKENFOJTBZMUDBIWSWLEW");
    msg.timeout = 0.3888752082123018;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxRange #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxRange msg;
    msg.setTimeStamp(0.9108082194775382);
    msg.setSource(43184U);
    msg.setSourceEntity(48U);
    msg.setDestination(1703U);
    msg.setDestinationEntity(116U);
    msg.seq = 16222U;
    msg.sys_dst.assign("ZUAYAANBWJTUPZJFUWRNYNZUVTFVQBIXLJMEKVXOIPSWGEFEWDYAGKXHCNHCBKAAICQILXYNHRQJRRJOXXIMSVOGCEQFIVP");
    msg.timeout = 0.5927604651926321;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxRange #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormCtrlParam msg;
    msg.setTimeStamp(0.23420641407081588);
    msg.setSource(35555U);
    msg.setSourceEntity(15U);
    msg.setDestination(9334U);
    msg.setDestinationEntity(191U);
    msg.action = 167U;
    msg.longain = 0.7881816277473691;
    msg.latgain = 0.6548508532375621;
    msg.bondthick = 1710806282U;
    msg.leadgain = 0.6380258049885104;
    msg.deconflgain = 0.5920655520725089;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormCtrlParam #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormCtrlParam msg;
    msg.setTimeStamp(0.4108883837691759);
    msg.setSource(4931U);
    msg.setSourceEntity(34U);
    msg.setDestination(31066U);
    msg.setDestinationEntity(147U);
    msg.action = 226U;
    msg.longain = 0.06301372176574171;
    msg.latgain = 0.6634789234907172;
    msg.bondthick = 1847674947U;
    msg.leadgain = 0.17974110582662872;
    msg.deconflgain = 0.38674674814508825;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormCtrlParam #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormCtrlParam msg;
    msg.setTimeStamp(0.5314584166741896);
    msg.setSource(62483U);
    msg.setSourceEntity(81U);
    msg.setDestination(54087U);
    msg.setDestinationEntity(67U);
    msg.action = 130U;
    msg.longain = 0.6568768801311679;
    msg.latgain = 0.8130573827891331;
    msg.bondthick = 2174886371U;
    msg.leadgain = 0.607815940431329;
    msg.deconflgain = 0.6464731769079083;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormCtrlParam #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationEval msg;
    msg.setTimeStamp(0.23837609038300167);
    msg.setSource(65148U);
    msg.setSourceEntity(220U);
    msg.setDestination(58291U);
    msg.setDestinationEntity(97U);
    msg.err_mean = 0.061808653405827085;
    msg.dist_min_abs = 0.9854232336383331;
    msg.dist_min_mean = 0.7604858380367832;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationEval #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationEval msg;
    msg.setTimeStamp(0.2238019201092999);
    msg.setSource(27022U);
    msg.setSourceEntity(48U);
    msg.setDestination(48097U);
    msg.setDestinationEntity(181U);
    msg.err_mean = 0.30207418547787923;
    msg.dist_min_abs = 0.3568846470994348;
    msg.dist_min_mean = 0.054677371576888234;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationEval #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationEval msg;
    msg.setTimeStamp(0.06887888416479582);
    msg.setSource(13328U);
    msg.setSourceEntity(204U);
    msg.setDestination(50037U);
    msg.setDestinationEntity(166U);
    msg.err_mean = 0.6203794935968487;
    msg.dist_min_abs = 0.9836378321734068;
    msg.dist_min_mean = 0.0672651668809292;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationEval #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationControlParams msg;
    msg.setTimeStamp(0.28883549821537224);
    msg.setSource(17710U);
    msg.setSourceEntity(225U);
    msg.setDestination(61495U);
    msg.setDestinationEntity(229U);
    msg.action = 226U;
    msg.lon_gain = 0.9673293034143985;
    msg.lat_gain = 0.6761268381998848;
    msg.bond_thick = 0.8773859936666805;
    msg.lead_gain = 0.3599582944980342;
    msg.deconfl_gain = 0.8055418414613542;
    msg.accel_switch_gain = 0.1607230821715656;
    msg.safe_dist = 0.8310081580885887;
    msg.deconflict_offset = 0.2801200509771552;
    msg.accel_safe_margin = 0.03150864260769892;
    msg.accel_lim_x = 0.5466701208302582;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationControlParams #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationControlParams msg;
    msg.setTimeStamp(0.7258621765407479);
    msg.setSource(8930U);
    msg.setSourceEntity(168U);
    msg.setDestination(65425U);
    msg.setDestinationEntity(196U);
    msg.action = 144U;
    msg.lon_gain = 0.09305727293496757;
    msg.lat_gain = 0.8778375379816046;
    msg.bond_thick = 0.5097288716789204;
    msg.lead_gain = 0.8108323702839725;
    msg.deconfl_gain = 0.24080438986736374;
    msg.accel_switch_gain = 0.039932264291544506;
    msg.safe_dist = 0.3096500212192591;
    msg.deconflict_offset = 0.7533766731308972;
    msg.accel_safe_margin = 0.8475898816372885;
    msg.accel_lim_x = 0.1460545255375203;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationControlParams #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationControlParams msg;
    msg.setTimeStamp(0.12180073731850671);
    msg.setSource(37895U);
    msg.setSourceEntity(199U);
    msg.setDestination(65133U);
    msg.setDestinationEntity(248U);
    msg.action = 184U;
    msg.lon_gain = 0.9734198573905215;
    msg.lat_gain = 0.7474323500099186;
    msg.bond_thick = 0.37459369512521257;
    msg.lead_gain = 0.22599952819710223;
    msg.deconfl_gain = 0.44995037012562955;
    msg.accel_switch_gain = 0.07177495508936682;
    msg.safe_dist = 0.7134463028137054;
    msg.deconflict_offset = 0.16483301376599957;
    msg.accel_safe_margin = 0.6038722098304793;
    msg.accel_lim_x = 0.7448364778235618;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationControlParams #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationEvaluation msg;
    msg.setTimeStamp(0.9679254882305123);
    msg.setSource(33289U);
    msg.setSourceEntity(242U);
    msg.setDestination(18241U);
    msg.setDestinationEntity(199U);
    msg.type = 175U;
    msg.op = 9U;
    msg.err_mean = 0.09034398793967091;
    msg.dist_min_abs = 0.19907161424514874;
    msg.dist_min_mean = 0.23662757112076216;
    msg.roll_rate_mean = 0.7723054803445499;
    msg.time = 0.26399701525614727;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 193U;
    tmp_msg_0.lon_gain = 0.7261804347603872;
    tmp_msg_0.lat_gain = 0.18805024249480473;
    tmp_msg_0.bond_thick = 0.8858218134973274;
    tmp_msg_0.lead_gain = 0.72038092454249;
    tmp_msg_0.deconfl_gain = 0.2947123125828557;
    tmp_msg_0.accel_switch_gain = 0.4650416091126802;
    tmp_msg_0.safe_dist = 0.7558156649093749;
    tmp_msg_0.deconflict_offset = 0.26681014027466354;
    tmp_msg_0.accel_safe_margin = 0.012319754691199503;
    tmp_msg_0.accel_lim_x = 0.40039727573183126;
    msg.controlparams.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationEvaluation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationEvaluation msg;
    msg.setTimeStamp(0.054413924160212734);
    msg.setSource(55856U);
    msg.setSourceEntity(48U);
    msg.setDestination(3228U);
    msg.setDestinationEntity(151U);
    msg.type = 74U;
    msg.op = 109U;
    msg.err_mean = 0.8987282425611518;
    msg.dist_min_abs = 0.7086287882565174;
    msg.dist_min_mean = 0.2664205963569283;
    msg.roll_rate_mean = 0.49908629384456105;
    msg.time = 0.7695671430966811;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 222U;
    tmp_msg_0.lon_gain = 0.07737363102246608;
    tmp_msg_0.lat_gain = 0.05649750153831512;
    tmp_msg_0.bond_thick = 0.012622369786378096;
    tmp_msg_0.lead_gain = 0.8838503728793373;
    tmp_msg_0.deconfl_gain = 0.6920153465727591;
    tmp_msg_0.accel_switch_gain = 0.7850592982808976;
    tmp_msg_0.safe_dist = 0.9843006189337675;
    tmp_msg_0.deconflict_offset = 0.676050638623833;
    tmp_msg_0.accel_safe_margin = 0.38197245021352333;
    tmp_msg_0.accel_lim_x = 0.1106907198279834;
    msg.controlparams.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationEvaluation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationEvaluation msg;
    msg.setTimeStamp(0.26041438416182705);
    msg.setSource(1259U);
    msg.setSourceEntity(44U);
    msg.setDestination(45577U);
    msg.setDestinationEntity(152U);
    msg.type = 26U;
    msg.op = 18U;
    msg.err_mean = 0.44087510418121933;
    msg.dist_min_abs = 0.0010060938916645057;
    msg.dist_min_mean = 0.5246060941702413;
    msg.roll_rate_mean = 0.9778330095554308;
    msg.time = 0.7738506258332306;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 218U;
    tmp_msg_0.lon_gain = 0.26151351211893603;
    tmp_msg_0.lat_gain = 0.9405808221290843;
    tmp_msg_0.bond_thick = 0.771947906821731;
    tmp_msg_0.lead_gain = 0.05644617823005493;
    tmp_msg_0.deconfl_gain = 0.7359306144893678;
    tmp_msg_0.accel_switch_gain = 0.8663639055016751;
    tmp_msg_0.safe_dist = 0.9847315613600891;
    tmp_msg_0.deconflict_offset = 0.8467530423655826;
    tmp_msg_0.accel_safe_margin = 0.37408641540230947;
    tmp_msg_0.accel_lim_x = 0.8058231858761824;
    msg.controlparams.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationEvaluation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiWaypoint msg;
    msg.setTimeStamp(0.653118637460914);
    msg.setSource(21310U);
    msg.setSourceEntity(170U);
    msg.setDestination(59626U);
    msg.setDestinationEntity(56U);
    msg.lat = 0.3878373976314059;
    msg.lon = 0.19624423051265394;
    msg.eta = 704142185U;
    msg.duration = 64361U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiWaypoint #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiWaypoint msg;
    msg.setTimeStamp(0.06651955325081549);
    msg.setSource(60019U);
    msg.setSourceEntity(222U);
    msg.setDestination(63012U);
    msg.setDestinationEntity(109U);
    msg.lat = 0.4201164709197929;
    msg.lon = 0.20677570071639295;
    msg.eta = 2823911742U;
    msg.duration = 33565U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiWaypoint #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiWaypoint msg;
    msg.setTimeStamp(0.8653863068569811);
    msg.setSource(21159U);
    msg.setSourceEntity(249U);
    msg.setDestination(61821U);
    msg.setDestinationEntity(57U);
    msg.lat = 0.4440635665446172;
    msg.lon = 0.8263625308786555;
    msg.eta = 650106191U;
    msg.duration = 59583U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiWaypoint #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiPlan msg;
    msg.setTimeStamp(0.9071010786962942);
    msg.setSource(42602U);
    msg.setSourceEntity(117U);
    msg.setDestination(49463U);
    msg.setDestinationEntity(162U);
    msg.plan_id = 21970U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.24529902408494775;
    tmp_msg_0.lon = 0.8847466630731913;
    tmp_msg_0.eta = 726709717U;
    tmp_msg_0.duration = 12761U;
    msg.waypoints.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiPlan #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiPlan msg;
    msg.setTimeStamp(0.3170092724362016);
    msg.setSource(18071U);
    msg.setSourceEntity(111U);
    msg.setDestination(46276U);
    msg.setDestinationEntity(77U);
    msg.plan_id = 43782U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiPlan #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiPlan msg;
    msg.setTimeStamp(0.0029556392863873127);
    msg.setSource(59233U);
    msg.setSourceEntity(215U);
    msg.setDestination(13237U);
    msg.setDestinationEntity(237U);
    msg.plan_id = 64294U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.25791551870073026;
    tmp_msg_0.lon = 0.5880835177428663;
    tmp_msg_0.eta = 3620621428U;
    tmp_msg_0.duration = 33603U;
    msg.waypoints.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiPlan #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiCommand msg;
    msg.setTimeStamp(0.9462247655568603);
    msg.setSource(3574U);
    msg.setSourceEntity(214U);
    msg.setDestination(7892U);
    msg.setDestinationEntity(31U);
    msg.type = 253U;
    msg.command = 139U;
    msg.settings.assign("PBBIOKYAQENNABWGCIWOMBSNMVCGGECWZTSNPRVHDVCZEDZLWRPEIAQZDKPGSINEYBYFPDGUUGLGRSOIVFPCMQUAFKWHVXYTAKHZCWIYETVLRRMRRXDTXMKVILBBVHQHEMEXYATYXKRBLCFIQFYLVKVSIPNOBWMBSSADPTHUKZEDQPRIMTX");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 23750U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("HAQAISIALBJCSWOVRPBTYVTPVPFIRUAROIDRHHOQANOKUQUALANGJWXQNOZGBMQCLNFNQFIMZYSJKZTHSMOXCKFCHOMZKYJJCFOPNEYTFGXIXLGDZEVPYEK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiCommand #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiCommand msg;
    msg.setTimeStamp(0.08630414450856938);
    msg.setSource(7555U);
    msg.setSourceEntity(200U);
    msg.setDestination(6758U);
    msg.setDestinationEntity(183U);
    msg.type = 36U;
    msg.command = 171U;
    msg.settings.assign("BSNKCBFXMNKTVKMAAXTSXUMRNAFKRERHRCHGMZEXWGWMPRYEAUGIWQGQYYJQERYVBNTINFDHJOASUOFRJGVCTZVJAZYHBSJTQIHBUFGBFXQCGBHJYOSMOJIDMYPHBKKTGEYQNSXXLWLAKZKCJJUTZXHSOKLADFVIRCPWIHFPVUCPDZCUTMUHWAXLBGZELEOODIBLFWMVNPVOPJSDREQVDKMUZIUDQWXPQZLCVCNSNWE");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 22476U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("YWWXCIMFAOCTFCKIWVQGMBPBOWKZUXUHPZCZNSDXYFLCTKTRVBQXYLPDOOMJBWEUXWWRNEFILVQCEWTANXNLHDNAHLFSGHHOOSAHDRKCSERHODSXABPHKYNWFIJGYPFSCQVYLQEGSPUEBQTAXJIUAIOPPFGOTNMDTVVGFGMAWLZSMVDFJQEUXZVRURIBJJDOZZJUAYYMXRNRKMEKBBNRYYKMPVPLUE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiCommand #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiCommand msg;
    msg.setTimeStamp(0.9814829521144336);
    msg.setSource(23156U);
    msg.setSourceEntity(152U);
    msg.setDestination(57333U);
    msg.setDestinationEntity(144U);
    msg.type = 93U;
    msg.command = 11U;
    msg.settings.assign("RJBICBSGCNTQSFCOZFHSZQIPENTOXGHEYRTCYFWIRWZNGXNKWYDUPNBQSJKDJDJPFVIQMGEUDYVOXJZQXVBBWCBUJUQSJIHZXYDLMXPFLGRTUHZFIVOETAYVNO");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 26119U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("MZPUGCUCKRJZXXFENKWOLLBFK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiCommand #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiState msg;
    msg.setTimeStamp(0.6238369533633364);
    msg.setSource(26946U);
    msg.setSourceEntity(220U);
    msg.setDestination(4467U);
    msg.setDestinationEntity(81U);
    msg.state = 52U;
    msg.plan_id = 13304U;
    msg.wpt_id = 224U;
    msg.settings_chk = 43084U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiState msg;
    msg.setTimeStamp(0.8209872606048858);
    msg.setSource(6976U);
    msg.setSourceEntity(37U);
    msg.setDestination(59452U);
    msg.setDestinationEntity(152U);
    msg.state = 154U;
    msg.plan_id = 9032U;
    msg.wpt_id = 21U;
    msg.settings_chk = 43584U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiState msg;
    msg.setTimeStamp(0.5947173697806438);
    msg.setSource(46824U);
    msg.setSourceEntity(228U);
    msg.setDestination(49708U);
    msg.setDestinationEntity(27U);
    msg.state = 101U;
    msg.plan_id = 49066U;
    msg.wpt_id = 103U;
    msg.settings_chk = 47147U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MessagePart msg;
    msg.setTimeStamp(0.8221515131479928);
    msg.setSource(18239U);
    msg.setSourceEntity(199U);
    msg.setDestination(62402U);
    msg.setDestinationEntity(31U);
    msg.uid = 122U;
    msg.frag_number = 200U;
    msg.num_frags = 126U;
    const signed char tmp_msg_0[] = {39, 15, 6, -10, 49, -114, -68, 123, 19, -83, 94, 63, -57, -103, -69, -73, 57, -94, -56, -6, -82, -115, 33, 40, 83, -29, -32, -93, -14, -25, 25, -12, 21, 45, -20, -128, 40, -64, -114, -46, -77, -36, 63, -75, -108, 46, -113, 29, 24, 17, -99, 16, 104, -73, -38, 26, -82, -119, 3, 30, -9, -80, -68, -44, -58, 122, 59, 98, -99, 25, -126, -60, 47, 114, 24, -65, -74, 87, 88, 96, -101, -109, 116, -41, 88, 121, -91, 75, -37, 107, 122, 13, 87, -44, 14, -45, -100, -41, 25, -99, 96, 114, -11, 18, 78, -60, 33, -93, 117, 62, 52, 28, -72, -31, 21, -75, 87, 81, -12, 108, 39, 43, 70, 41, -46, 72, -42, 25, 3, -72, 54, -74, 15, 71, 61, -33, -50, 9, 109, -77, -29, 122, 11, -110, -124, 27, -34, 62, 77, -82, -108, -77, -72, 19, 111, -58, -120, 90, 54, 16, -25, -36, -53, 123, -41, 6, -91, 34, -52, 84, -107, -29, 26, 49, 105, 63, 123, -15, -45, -63, -84, 60, -123, -92, 28, 36, 62, 112, 74, -40, 92, -113, 76, -1, 109, 18, 88, -84, -59, -72, -119, -21, 99, 98, 92, -20, 48, -49, -36, -81};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MessagePart #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MessagePart msg;
    msg.setTimeStamp(0.875136305546719);
    msg.setSource(49623U);
    msg.setSourceEntity(98U);
    msg.setDestination(11772U);
    msg.setDestinationEntity(121U);
    msg.uid = 141U;
    msg.frag_number = 231U;
    msg.num_frags = 27U;
    const signed char tmp_msg_0[] = {-115, 74, 56, -44, 100, -124, 79, -52, -44, -75, 25, 117, -21, -64, 19, 75, 26, -100, -42, 28, -69, -116, -27, 114, -26, 123, 73, -88, -47, 52, 68, 18, 81, -12, 12, 126, -68, -20, -73, -41, 70, 8, -68, 52, -29, 12, 66, -96, -7, -62, 31, -120, 11, -104, -22, 58, 110, 105, 35, -45, -28, 126, 9, 11, 96, -46, 70, -113, 28, -35};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MessagePart #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MessagePart msg;
    msg.setTimeStamp(0.34241086758248795);
    msg.setSource(16629U);
    msg.setSourceEntity(6U);
    msg.setDestination(14236U);
    msg.setDestinationEntity(84U);
    msg.uid = 97U;
    msg.frag_number = 63U;
    msg.num_frags = 39U;
    const signed char tmp_msg_0[] = {11, -117, 39, 100, 9, 45, -80, -24, -54, -49, -8, 105, -121, 122, -65, -119, -89, 22, -93, -31, 50, -99, 114, 103, -35, 47, 74, -79, 93, 21, -61, 110};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MessagePart #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NeptusBlob msg;
    msg.setTimeStamp(0.8265948244786349);
    msg.setSource(39910U);
    msg.setSourceEntity(206U);
    msg.setDestination(33983U);
    msg.setDestinationEntity(120U);
    msg.content_type.assign("WXOIWSSDBHIPQJZTMAYDQPFAUVJMZFBOLKPJQTEYLEBLDUPNKROQXIZJCOSRBGTNOJFTVQQZGOIGEXEKMGKSIGECJOXDNAXSELZCKUBNEMQNIGCHQWGHXZJWVMMDXLUHDAHWBGHBPEBTRCVVLRUWZQPSGAMRYPVSUFJMVXPHRMFS");
    const signed char tmp_msg_0[] = {-62, 71, -32, 121, -115, 54, -41, -17, 14, 28, 119, 100, 32, -41, 53, 54, 104, 12, -114, 116, 110, 34, 108, 46, 89, 59, 118, -75, -25, -126, -111, -39, -49, -59, 103, -94, 52, 88, -79, 81, -13, -104, 92, -102, 103, 71, 19, -94, -49, 41, -10, -23, 94, 56, -64, 109, -118, -1, 63, 98, 109, -120, -17, -61, -49, -11, 39, 18, -77, 119, 107, 3, -4, -33, 87, 12, 45, -42, -8, 87, 15, 37, -18, -96, -25, 37, -73, -62, 0, -90, -74, 50, -2, 92, -71, -8, 58, -52, 123, -78, 16, -126, -71, 60, -64, 84, -12, -87, -78, -16, -109, 45, -119, 18, -59, 48, 102, -98, 85, 74, -67, -36, 55, 101, -45, 67, -104, -40, 117, -41, 33, -107, 52, 10, 65, -87, 61, 109, -8, 118, -86, -63, -49, 117, -91, -117, -105, 23, -74, 112, -52, 43, 81, 7, -7, 112, -103, 105, 115, -11, 62, -95, -85, 122, -31, 88, -26, -48, -112, -1, 68, 51, -21, 105, -68, -1, 52, 35, 117, -84, -46, -12, 1, -105, -91, 61, -80, 17, -23, 47, -118, -73, -121, 19, -61, -23, -7, 13, 45, 115, -59, -104, -66, 34, -128, 84, -23, 75, 91, 17, -12, 69, -15, 61, -15, -21, 25, 60, 77, -121, 108, -116, -38, -56, 107, -12, -64, 63, -73, -51, 102, -16, 112, -39, -29, 5, 82, -90, -83, 98, -22, 96, -33, 106, 75, 107, 89, -92, -114, -57};
    msg.content.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NeptusBlob #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NeptusBlob msg;
    msg.setTimeStamp(0.2920156150215536);
    msg.setSource(33481U);
    msg.setSourceEntity(55U);
    msg.setDestination(5465U);
    msg.setDestinationEntity(165U);
    msg.content_type.assign("FKLUKDSHAYWKLOEHMJBBKYATNXTDIIZNVHWPDLKMYLLPEAUJNRGEUDQVPTYCHQUWGXYBBHQSSUPWUGIWTZXKRATCKMFIRXGMKEYSUROSMDGUEIEMPZCMIJKYODJBRUWBFTOIODTHFOVVYPJAAZNSGCQXYGRCBQJUZBHHPQHLAAZZSLFEWO");
    const signed char tmp_msg_0[] = {-8, 64, -127, 34, 19, -26, 61, 87, 98, 73, -10, 22, -93, -8, -121, 78, 105, -16, -127, -57, -20, -63, -111, 122, -50, -114, -97, -79, 72, -107, 55, -20, 82, 64, -46, 118, 103, 61, 84, 83, -15, -58, 16, 120, -29, -127, 7, -47, -87, -70, 116, -116, 80, 115, 69, 80, 112, -20};
    msg.content.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NeptusBlob #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NeptusBlob msg;
    msg.setTimeStamp(0.9135722971204661);
    msg.setSource(41831U);
    msg.setSourceEntity(160U);
    msg.setDestination(11849U);
    msg.setDestinationEntity(38U);
    msg.content_type.assign("DEPYHCPELTMVWDLFHKBENYNHZAZSJCFWXLDEVCOYBGZGENOIAXFAMTPTHNUYMASDDFLBLQLPOGHVKUWTRJYSDXKYFQERHDGYFAZMWLJPXRQCOKISSWBCGTDCJKTWMRVMAYJWZICXVUVPKLHUFUWGZNQNPOXGG");
    const signed char tmp_msg_0[] = {-66, -71, -6, 90, -35, 100, -43, 81, -96, 8, -84, 121, -116, 60, 28, 73, 108, -52, 18, 4, 87, 107, 65, 18, 118, 90, 85, -48, 26, 83, 64, -100, 42, -95, 69, -122, 88, 59, -56, 35, 109, 100, -70, 67, 90, -25, -70, 79, -81, -120, -69, 92, -2, -9, -27, -85, 21, 118, -95, 75, 65, 93, -37, 42, -16, -67, -48, -73, 103, 117, -91, -40, -20, 28, 9, 57, 12, 33, 11, -121, 73, 34, -125, 46, -56, 115, -118, -13, -82, 85, -85, 39, 126, -10, -125, 106, -101, -34, 41, 11, -124, 2, -18, 72, -122, -9, -76, 9, 83, 83, -38, -31, -126, 99, -15, 32, 124, 75, 38, -107, 52, 15, 16, -81, 107, 56, 29, 36, 68, 112, 29, -67, 53, 20, -62, 17, -16, -93, 75, 23, -95, 86, 99, -75, -85, -10, -116, -69, 114, 74, -7, -75, 82, -115, 53, 55, -25, 25, -85, -29, -77, 116, 44, -96, 120, 50, -13, -4, 51, -128, -64, -49, -9, -47, 102, -15, 11, -89, -124, -51, -31, 107, 75, -49, -56, -9, -42, 30, 79, -44, 17, -25, 72, -71, -49, 113, -32, 77, 109, 41, 113, 119, 51, -6, -33, 70, 48, -64, -26, -100, -71, 72, -82, -23, 20, 43, -43, -55, -106, 3, -89, 51, 57, -65, -66, 27, -105, 107, 93, -53, 4, -99, -10, 43, -63, -83, 22, 102, -29, -1, -122, -41, 106, 36, -106, 77, 87, -29, -94};
    msg.content.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NeptusBlob #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Aborted msg;
    msg.setTimeStamp(0.14550945552979);
    msg.setSource(48656U);
    msg.setSourceEntity(37U);
    msg.setDestination(58134U);
    msg.setDestinationEntity(86U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Aborted #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Aborted msg;
    msg.setTimeStamp(0.4996838807607227);
    msg.setSource(4917U);
    msg.setSourceEntity(147U);
    msg.setDestination(11642U);
    msg.setDestinationEntity(221U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Aborted #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Aborted msg;
    msg.setTimeStamp(0.47732896740339603);
    msg.setSource(61119U);
    msg.setSourceEntity(80U);
    msg.setDestination(19159U);
    msg.setDestinationEntity(121U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Aborted #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblAngles msg;
    msg.setTimeStamp(0.48863842354613096);
    msg.setSource(50791U);
    msg.setSourceEntity(134U);
    msg.setDestination(52569U);
    msg.setDestinationEntity(53U);
    msg.target = 63392U;
    msg.bearing = 0.6547720478170984;
    msg.elevation = 0.4040628708802366;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblAngles #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblAngles msg;
    msg.setTimeStamp(0.7726383237000105);
    msg.setSource(17145U);
    msg.setSourceEntity(239U);
    msg.setDestination(27335U);
    msg.setDestinationEntity(96U);
    msg.target = 4555U;
    msg.bearing = 0.16189996536453277;
    msg.elevation = 0.19181776719665156;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblAngles #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblAngles msg;
    msg.setTimeStamp(0.7001944200010064);
    msg.setSource(896U);
    msg.setSourceEntity(115U);
    msg.setDestination(2108U);
    msg.setDestinationEntity(230U);
    msg.target = 15989U;
    msg.bearing = 0.6014248157384404;
    msg.elevation = 0.6610324416607087;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblAngles #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblPosition msg;
    msg.setTimeStamp(0.4849795279558561);
    msg.setSource(10494U);
    msg.setSourceEntity(58U);
    msg.setDestination(23178U);
    msg.setDestinationEntity(197U);
    msg.target = 21607U;
    msg.x = 0.36596853266042695;
    msg.y = 0.43879555935804637;
    msg.z = 0.24350677658069686;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblPosition #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblPosition msg;
    msg.setTimeStamp(0.55946248990039);
    msg.setSource(62794U);
    msg.setSourceEntity(1U);
    msg.setDestination(43036U);
    msg.setDestinationEntity(107U);
    msg.target = 389U;
    msg.x = 0.39661827196238075;
    msg.y = 0.290811172560721;
    msg.z = 0.12346514037179812;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblPosition #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblPosition msg;
    msg.setTimeStamp(0.4204386158160385);
    msg.setSource(19899U);
    msg.setSourceEntity(2U);
    msg.setDestination(32315U);
    msg.setDestinationEntity(32U);
    msg.target = 53907U;
    msg.x = 0.8276229171124602;
    msg.y = 0.9332368165989212;
    msg.z = 0.44523668300257924;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblPosition #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblFix msg;
    msg.setTimeStamp(0.94205974303348);
    msg.setSource(34114U);
    msg.setSourceEntity(78U);
    msg.setDestination(4379U);
    msg.setDestinationEntity(225U);
    msg.target = 24075U;
    msg.lat = 0.05436462742678394;
    msg.lon = 0.19561940886571438;
    msg.z_units = 7U;
    msg.z = 0.7870205863788177;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblFix #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblFix msg;
    msg.setTimeStamp(0.29695446470189923);
    msg.setSource(32486U);
    msg.setSourceEntity(103U);
    msg.setDestination(46139U);
    msg.setDestinationEntity(145U);
    msg.target = 1696U;
    msg.lat = 0.16995053170616226;
    msg.lon = 0.3851981834052949;
    msg.z_units = 72U;
    msg.z = 0.006739582207778483;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblFix #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblFix msg;
    msg.setTimeStamp(0.2125915328882998);
    msg.setSource(21665U);
    msg.setSourceEntity(113U);
    msg.setDestination(47171U);
    msg.setDestinationEntity(252U);
    msg.target = 58995U;
    msg.lat = 0.3710037812116579;
    msg.lon = 0.6004649708872887;
    msg.z_units = 99U;
    msg.z = 0.10979369455440935;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblFix #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ParametersXml msg;
    msg.setTimeStamp(0.3636033773706643);
    msg.setSource(57192U);
    msg.setSourceEntity(79U);
    msg.setDestination(62092U);
    msg.setDestinationEntity(141U);
    msg.locale.assign("NQFWKGRBHVXMAAWCVRAJZMQETTIPAXZFECRJGOPGCPVWYLQSMVFREKJVCSOZREXWVCLQEJJAWHCXKPTZBNFJMVMYUUNYDGIZLDGYCAKRBNOLYYBTWIOHRKXTQIHFBSPWIBMXJACHKEHEDNJIQYHDPBPMKPFUGYJAPTODTKKZNZYXXLAWGSDLSSDYCSXNFAUIOLVRMBNHRMUTPELUKTQWCQQHVGDGVZFLJHNOUOLUOSSWSOEBDUFGEMZX");
    const signed char tmp_msg_0[] = {-62, 50, -5, 124, 50, -121, -96, 122, 15, -101, 109, 55, 54, -7, -112, -64, 70, -78, 100, 50, 65, -119, -8, -5, -28, 58, 24, 35, -118, -8, 21, 6, -4, 109, -10, 109, -12, -41, 88, 125, 50, -52, 29, -104, 28, 96, -3, -30, 100, 89, -87, -25, -79, 49, 72, -99, -21, 80, 37, -50, -97, 49, -51, 98, -107, -92, 34, 25, 84, 33, 119, 68, 56, -70, 103, 117, 57, 0, 96, 78, -13, -63, -6, 63, 90, 68, 122, -19, -101, 110, -11, 84, 79, -64, 102, 121, 100, 32, -111, 10, 54, -42, -109, -32, 80, 76, 12, -9, 64, 62, -70, -107, 87, 70, 72, -95, -9, 81, -105, -18, -23, -78, 29, 98, -52, -52, -25, -45, -93, 124, -24, 63, 5, 18, 79, 78, -55, 0, -103, 95, -128, -89, -28, -118, -117, -111, -80, -40, -23, -53, 107, 82, -100, 121, 104, 98, 68, -51, 66, -56, 22, 45, -94, -78, 124, -78, 49, -27, -68, -69, 122, 63, 52, -71, 32, -118, -53, -2, -34, -126, 61, -14, 3, 40, 120, 48, 5, 56, -6, -88, -6, 73, -117, 80, 50, 85, 86, 99, -37, -63, 120, -39, 48, 52, -108, 46, 112, -128, 16, 70, 124, -77, 43, -116, 89, -5, 119, 102, -80, 49, -88, -128, 108, -32, -115, 8, 41, -98, -97, 11, 12, -34, -55};
    msg.config.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ParametersXml #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ParametersXml msg;
    msg.setTimeStamp(0.29696609650819505);
    msg.setSource(49102U);
    msg.setSourceEntity(109U);
    msg.setDestination(14895U);
    msg.setDestinationEntity(154U);
    msg.locale.assign("ZZEKNWCHDJPNFZGKYYHTCETQXLEUKGDNQYRDXADLQYGPXXEAQURZKGSBIREBPWZWALNRUIMW");
    const signed char tmp_msg_0[] = {-25, -20, 78, 27, -75, 89, 91, 115, 3, -18, 51, 82, 97, -57, -14, 116, -57};
    msg.config.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ParametersXml #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ParametersXml msg;
    msg.setTimeStamp(0.47418443920871944);
    msg.setSource(15821U);
    msg.setSourceEntity(12U);
    msg.setDestination(38843U);
    msg.setDestinationEntity(74U);
    msg.locale.assign("IRKRYMGCZYCPIWRLJSHTHULHOSVDCJWDOLDEFVGPPJOKBAQNFGOQMNKKKXZECWFZBQVCSDMNWTZHQFJVTXBHUJXM");
    const signed char tmp_msg_0[] = {56, 31, -8, 45, -51, 121, 105, 34, 70, 117, 62, -2, 22, 40, -71, 58, -30, -14, 26, 48, -32, 46, 40, 42, 108, -126, -65, -26, -60, 10, -109, -9, -67, -32, 81, 25, -31, 17, 76, 27, -2, 96, -26, 75, -32, 104, -81, -127, 107, 76, 74, 67, -4, 24, -84, 95, 21, -84, -5, -21, 35, -90, 10, -2, 51, 17, 1, 70, -7, 107, -33, -41, -60, 3, 70, 87, 116, -47, 20, 36, 14, -51, -94, 66, -99, 101, 42, 38, 100, 91, -41, -61, -75, 106, -18, 22, -121, 98, 13, 92, -117, 115, -40, 51, -24, 15, -17, 109, 10, -19, 74, -89, 51, -69};
    msg.config.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ParametersXml #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetParametersXml msg;
    msg.setTimeStamp(0.5700488400516827);
    msg.setSource(7161U);
    msg.setSourceEntity(249U);
    msg.setDestination(11777U);
    msg.setDestinationEntity(25U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetParametersXml #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetParametersXml msg;
    msg.setTimeStamp(0.4133121142714792);
    msg.setSource(52460U);
    msg.setSourceEntity(30U);
    msg.setDestination(23308U);
    msg.setDestinationEntity(223U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetParametersXml #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetParametersXml msg;
    msg.setTimeStamp(0.18462649921108876);
    msg.setSource(46858U);
    msg.setSourceEntity(253U);
    msg.setDestination(59287U);
    msg.setDestinationEntity(138U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetParametersXml #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetImageCoords msg;
    msg.setTimeStamp(0.8737432933836488);
    msg.setSource(41541U);
    msg.setSourceEntity(104U);
    msg.setDestination(8987U);
    msg.setDestinationEntity(136U);
    msg.camid = 64U;
    msg.x = 14103U;
    msg.y = 46201U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetImageCoords #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetImageCoords msg;
    msg.setTimeStamp(0.43825491421144713);
    msg.setSource(33294U);
    msg.setSourceEntity(80U);
    msg.setDestination(61245U);
    msg.setDestinationEntity(189U);
    msg.camid = 83U;
    msg.x = 13348U;
    msg.y = 51974U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetImageCoords #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetImageCoords msg;
    msg.setTimeStamp(0.3881176597852981);
    msg.setSource(10721U);
    msg.setSourceEntity(237U);
    msg.setDestination(17072U);
    msg.setDestinationEntity(46U);
    msg.camid = 35U;
    msg.x = 23745U;
    msg.y = 35702U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetImageCoords #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetImageCoords msg;
    msg.setTimeStamp(0.6094691418123428);
    msg.setSource(41197U);
    msg.setSourceEntity(43U);
    msg.setDestination(24114U);
    msg.setDestinationEntity(54U);
    msg.camid = 168U;
    msg.x = 58715U;
    msg.y = 28655U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetImageCoords #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetImageCoords msg;
    msg.setTimeStamp(0.14862816605376894);
    msg.setSource(13935U);
    msg.setSourceEntity(196U);
    msg.setDestination(55036U);
    msg.setDestinationEntity(177U);
    msg.camid = 71U;
    msg.x = 16182U;
    msg.y = 85U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetImageCoords #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetImageCoords msg;
    msg.setTimeStamp(0.30366352650975625);
    msg.setSource(63840U);
    msg.setSourceEntity(57U);
    msg.setDestination(53679U);
    msg.setDestinationEntity(186U);
    msg.camid = 24U;
    msg.x = 14830U;
    msg.y = 2419U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetImageCoords #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetWorldCoordinates msg;
    msg.setTimeStamp(0.3408992098491198);
    msg.setSource(41145U);
    msg.setSourceEntity(217U);
    msg.setDestination(45800U);
    msg.setDestinationEntity(222U);
    msg.tracking = 129U;
    msg.lat = 0.060032825896481734;
    msg.lon = 0.9573071751418794;
    msg.x = 0.5132962237212144;
    msg.y = 0.9198087268492489;
    msg.z = 0.7222347261256956;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetWorldCoordinates #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetWorldCoordinates msg;
    msg.setTimeStamp(0.852644075252483);
    msg.setSource(65144U);
    msg.setSourceEntity(220U);
    msg.setDestination(23466U);
    msg.setDestinationEntity(224U);
    msg.tracking = 12U;
    msg.lat = 0.7113864025097956;
    msg.lon = 0.0015280131561653532;
    msg.x = 0.30237394374470883;
    msg.y = 0.5727899634808457;
    msg.z = 0.5751296717435274;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetWorldCoordinates #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetWorldCoordinates msg;
    msg.setTimeStamp(0.555433190198655);
    msg.setSource(15777U);
    msg.setSourceEntity(211U);
    msg.setDestination(20043U);
    msg.setDestinationEntity(104U);
    msg.tracking = 151U;
    msg.lat = 0.6000067084814931;
    msg.lon = 0.5152975201392829;
    msg.x = 0.03804630581109825;
    msg.y = 0.6299384979394109;
    msg.z = 0.6186897501368457;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetWorldCoordinates #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblAnglesExtended msg;
    msg.setTimeStamp(0.3504979427047946);
    msg.setSource(30338U);
    msg.setSourceEntity(3U);
    msg.setDestination(49350U);
    msg.setDestinationEntity(64U);
    msg.target.assign("MJRRRBSMEPLTNHROFCXSZNHPTVZRJCUJCBTRGXAYTUDSHGOPLCKIKTSKRVHMIZJYYEOPLCKGUTFYYJIIZEJDHQGOPIUXYQVXGASFVRESPNUOMOBVZJRXKQBWWYZMGNWEWHNEFWUNGFWHKLAOXFWQ");
    msg.lbearing = 0.14547230327524074;
    msg.lelevation = 0.5296733382945739;
    msg.bearing = 0.132931065106776;
    msg.elevation = 0.9987456255578743;
    msg.phi = 0.26983556092187977;
    msg.theta = 0.6529812318109685;
    msg.psi = 0.11272446544810721;
    msg.accuracy = 0.9359627390000541;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblAnglesExtended #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblAnglesExtended msg;
    msg.setTimeStamp(0.725216216335161);
    msg.setSource(7914U);
    msg.setSourceEntity(231U);
    msg.setDestination(37534U);
    msg.setDestinationEntity(65U);
    msg.target.assign("NBTPFQQTRDJXU");
    msg.lbearing = 0.23263062916271693;
    msg.lelevation = 0.4893373960765055;
    msg.bearing = 0.9524746954797505;
    msg.elevation = 0.8841553959035031;
    msg.phi = 0.35865911577413423;
    msg.theta = 0.19242054557213073;
    msg.psi = 0.15644139923958855;
    msg.accuracy = 0.16598095688674153;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblAnglesExtended #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblAnglesExtended msg;
    msg.setTimeStamp(0.4517296374678088);
    msg.setSource(19332U);
    msg.setSourceEntity(229U);
    msg.setDestination(9956U);
    msg.setDestinationEntity(242U);
    msg.target.assign("ZWQCIDTKAYLVCEXRGKFHAZTZQVSPFQYGNGBBAPBCGUFNUXOLRBOMWGRCTUWTQJZWLDIZPEHSHIOCEFGAJPDPZRBFJDEDZXTFLYGWLJJKCUMF");
    msg.lbearing = 0.07482501716698231;
    msg.lelevation = 0.531055590068935;
    msg.bearing = 0.853216471414659;
    msg.elevation = 0.519988332776556;
    msg.phi = 0.15161793645461297;
    msg.theta = 0.13667778658811203;
    msg.psi = 0.14947484529343003;
    msg.accuracy = 0.6532364954291681;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblAnglesExtended #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblPositionExtended msg;
    msg.setTimeStamp(0.044452635409938046);
    msg.setSource(25107U);
    msg.setSourceEntity(93U);
    msg.setDestination(61041U);
    msg.setDestinationEntity(193U);
    msg.target.assign("JBXOBTTEEHCTEWSZYVTHDMLMOPKBUVTKBSNPBOYVLKBAISIOVCQNSPULEYLFYVUWQOQOJCFQPDJFHYNXZUFVH");
    msg.x = 0.508507653247817;
    msg.y = 0.8752361665170353;
    msg.z = 0.22522039313054254;
    msg.n = 0.48760594249071265;
    msg.e = 0.543887902033612;
    msg.d = 0.0898890132049106;
    msg.phi = 0.6801994451762826;
    msg.theta = 0.053115826331857074;
    msg.psi = 0.38942418116011;
    msg.accuracy = 0.7198728231523651;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblPositionExtended #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblPositionExtended msg;
    msg.setTimeStamp(0.584314905060622);
    msg.setSource(19636U);
    msg.setSourceEntity(52U);
    msg.setDestination(60450U);
    msg.setDestinationEntity(32U);
    msg.target.assign("MKCPZXFUGVGMGJSBVQLJMVAHFYSSOBOBXJJDTIXOVHQELJCPRCYFWCXWUTLPEVVEGUQXFXMWUOPWZTHATTQFORWLRPNAJJEIPZWDZBUMXHMWMOQNPEXJTDLUYZRBKNRGZGRFQVTPEQLSSCKIHRABKKKYCUSWNDNRYHGTPDIFTHHFIYUEHQRMCLDUNQYDBREWOYUZZIIAOHKSJXALVVKIEGANVZAKDGDIMLJCQSONL");
    msg.x = 0.6873666450726789;
    msg.y = 0.27122240668353037;
    msg.z = 0.9705195685766594;
    msg.n = 0.9449920110017419;
    msg.e = 0.6941516131260647;
    msg.d = 0.675662997054693;
    msg.phi = 0.13930883563867114;
    msg.theta = 0.36763766715653046;
    msg.psi = 0.6295665542563426;
    msg.accuracy = 0.8340606703181148;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblPositionExtended #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblPositionExtended msg;
    msg.setTimeStamp(0.6864445395318937);
    msg.setSource(3919U);
    msg.setSourceEntity(32U);
    msg.setDestination(18567U);
    msg.setDestinationEntity(103U);
    msg.target.assign("ZHWESQYMKELPKTSKTNRPZFCAUJDTJCSWODUFTDBIDZRUACBBH");
    msg.x = 0.144340341284672;
    msg.y = 0.3383620665461101;
    msg.z = 0.43427406576781225;
    msg.n = 0.290277944744184;
    msg.e = 0.3107996093671812;
    msg.d = 0.8572661360372931;
    msg.phi = 0.6241875189436425;
    msg.theta = 0.014954271178291845;
    msg.psi = 0.7007435859398058;
    msg.accuracy = 0.5949487665038655;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblPositionExtended #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblFixExtended msg;
    msg.setTimeStamp(0.18485100312353653);
    msg.setSource(29060U);
    msg.setSourceEntity(89U);
    msg.setDestination(52387U);
    msg.setDestinationEntity(244U);
    msg.target.assign("TFGXBIRIGGSLSEWPHYSGDNDTGHGRWBTTNJIXYJURBZEDXVFAAJYEMHHFAFKVOADQMATWPDROMSVOLCUNBTZGFRNPKZKLKHRIUKOWYCALNSUUCSDFRZIAIXROQYBGVWHFWSHOSMLRIQOEATHMRFGVEJPCJYCQKAZCAZXITVQCMBOSTENTJLBUFLEIMEQBCZXQJKVONKXCDDZYWNPPUJ");
    msg.lat = 0.6008929587997623;
    msg.lon = 0.7660139398122954;
    msg.z_units = 55U;
    msg.z = 0.6485434693262427;
    msg.accuracy = 0.13704915804125206;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblFixExtended #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblFixExtended msg;
    msg.setTimeStamp(0.8073009721495141);
    msg.setSource(60146U);
    msg.setSourceEntity(55U);
    msg.setDestination(18324U);
    msg.setDestinationEntity(94U);
    msg.target.assign("TUMDGHEFEJIAKGWUCCHRANNOYFGSJRDPWRVNDC");
    msg.lat = 0.8287463285412728;
    msg.lon = 0.07029319040003568;
    msg.z_units = 44U;
    msg.z = 0.03358818520449092;
    msg.accuracy = 0.14559867161955675;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblFixExtended #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblFixExtended msg;
    msg.setTimeStamp(0.4293279042166753);
    msg.setSource(8326U);
    msg.setSourceEntity(121U);
    msg.setDestination(17081U);
    msg.setDestinationEntity(48U);
    msg.target.assign("FEKQWGQQUUXOWDHHSMQADILFLAXCBZNOYHRGXZDJGAVFRTBOMFWWACHFFZZETIYWXLXQPOJMIPDTRXSBMQJCKJUMHZVWTYTTHNIFTAFPTOFQONPGEBALGBYSRNVLKELEIZRPKQASORQJIGYDHLSBERHLOHLBNCTIMPMENXIJZVPYUBCKFSVUCAKCVGKZNKGNNHXDIBPRVGVEGKLCO");
    msg.lat = 0.5440354512501016;
    msg.lon = 0.8821330074576688;
    msg.z_units = 153U;
    msg.z = 0.46708915531548756;
    msg.accuracy = 0.054997250949500476;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblFixExtended #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblModem msg;
    msg.setTimeStamp(0.1003001477868306);
    msg.setSource(62187U);
    msg.setSourceEntity(40U);
    msg.setDestination(32827U);
    msg.setDestinationEntity(42U);
    msg.name.assign("QCOBWOBQANYGTEPEUHKDVMJJHUXISZNOPHNSDYCTTZAFDFWRMYFJIOWVHAWSCTQWBKMRYMIMIYLZEZKCIFWQBPGDAZNRJOKOGTEGNQPILXTUZPMUAQXLOTDUNKPSR");
    msg.lat = 0.2421532562283436;
    msg.lon = 0.36336485941512453;
    msg.z = 0.4963886428191361;
    msg.z_units = 195U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblModem #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblModem msg;
    msg.setTimeStamp(0.7883933062725926);
    msg.setSource(49635U);
    msg.setSourceEntity(133U);
    msg.setDestination(11455U);
    msg.setDestinationEntity(180U);
    msg.name.assign("HFZACMCRFKUNCXWCRWNEHALJWTEHSNRZUSFQBIOFCXTTXTQNINZXEAEDVYGBEGFAHMFBF");
    msg.lat = 0.37243264143127186;
    msg.lon = 0.06015486121521263;
    msg.z = 0.1489878938785092;
    msg.z_units = 136U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblModem #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblModem msg;
    msg.setTimeStamp(0.7872268545411374);
    msg.setSource(44490U);
    msg.setSourceEntity(100U);
    msg.setDestination(13455U);
    msg.setDestinationEntity(191U);
    msg.name.assign("UKIZJDQVWKOJXOJCSXLBSOINGRMCFQREUDMWLOUSTTOIXWKXDQLLSHXMNLBRVMZPMVSKYBEOZTBYSTNCBPAIIVNPHCXRKAJSWHXYDYNQTEWIPZTZMTIADIACNNWFOGUDQSOTSJFFHGFJVUJUYSUDKJBRBACCZYNWDGYLRQUKMXAERMPLFPVTDYFTXLHNEEZQMFLWCPEHLVBFGAIWGPQGYZJYPHKIAHREDGMXECUVAFQOKBBGZWAHHGEQRNPV");
    msg.lat = 0.18494266779835122;
    msg.lon = 0.3189387624176666;
    msg.z = 0.5234810803979597;
    msg.z_units = 141U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblModem #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblConfig msg;
    msg.setTimeStamp(0.5465063433222306);
    msg.setSource(47339U);
    msg.setSourceEntity(174U);
    msg.setDestination(61530U);
    msg.setDestinationEntity(150U);
    msg.op = 234U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblConfig #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblConfig msg;
    msg.setTimeStamp(0.4260638797934907);
    msg.setSource(55048U);
    msg.setSourceEntity(130U);
    msg.setDestination(11276U);
    msg.setDestinationEntity(203U);
    msg.op = 113U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("VVJSORSRWFPFBHJNEYYGETPTIDVCLXDSWAODRGEXWQKMBABJMSUDUMYXLERWSMCIRBZAZRTBFCXYNMOHWNXOZPYETFGIZTUGIXKVSIAKJXGGDILAVUCYFKNPQNOKTADKQPQHSAUISAVETHCQWLEOYTPCLIZUVQWMJUBPRCZWGGDWLZSUQENHUEJUYIKPCYGOFJNIBRLEKOP");
    tmp_msg_0.lat = 0.8565880857643466;
    tmp_msg_0.lon = 0.09080257928094781;
    tmp_msg_0.z = 0.18632588537619243;
    tmp_msg_0.z_units = 224U;
    msg.modems.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblConfig #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblConfig msg;
    msg.setTimeStamp(0.061775207265585164);
    msg.setSource(63587U);
    msg.setSourceEntity(218U);
    msg.setDestination(58024U);
    msg.setDestinationEntity(100U);
    msg.op = 39U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("QMCVPYCLNKDGJUNOJBAGDKTCIAZAUZNWRKMGHXOVEGNJ");
    tmp_msg_0.lat = 0.7946557616267208;
    tmp_msg_0.lon = 0.7895002764434594;
    tmp_msg_0.z = 0.17423789064230855;
    tmp_msg_0.z_units = 179U;
    msg.modems.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblConfig #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DissolvedOrganicMatter msg;
    msg.setTimeStamp(0.9293075610814103);
    msg.setSource(6040U);
    msg.setSourceEntity(196U);
    msg.setDestination(56645U);
    msg.setDestinationEntity(13U);
    msg.value = 0.027291338262110942;
    msg.type = 165U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DissolvedOrganicMatter #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DissolvedOrganicMatter msg;
    msg.setTimeStamp(0.6867428481798955);
    msg.setSource(1404U);
    msg.setSourceEntity(120U);
    msg.setDestination(10448U);
    msg.setDestinationEntity(66U);
    msg.value = 0.5018853701003534;
    msg.type = 149U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DissolvedOrganicMatter #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DissolvedOrganicMatter msg;
    msg.setTimeStamp(0.32458297426287963);
    msg.setSource(7527U);
    msg.setSourceEntity(237U);
    msg.setDestination(30726U);
    msg.setDestinationEntity(207U);
    msg.value = 0.5265012442138735;
    msg.type = 95U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DissolvedOrganicMatter #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::OpticalBackscatter msg;
    msg.setTimeStamp(0.37443278852757333);
    msg.setSource(50055U);
    msg.setSourceEntity(21U);
    msg.setDestination(42053U);
    msg.setDestinationEntity(29U);
    msg.value = 0.9359421747676998;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("OpticalBackscatter #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::OpticalBackscatter msg;
    msg.setTimeStamp(0.4725314438476692);
    msg.setSource(51702U);
    msg.setSourceEntity(9U);
    msg.setDestination(14966U);
    msg.setDestinationEntity(155U);
    msg.value = 0.478159981663168;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("OpticalBackscatter #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::OpticalBackscatter msg;
    msg.setTimeStamp(0.41798621961227356);
    msg.setSource(52153U);
    msg.setSourceEntity(134U);
    msg.setDestination(52242U);
    msg.setDestinationEntity(202U);
    msg.value = 0.8704364716096712;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("OpticalBackscatter #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Tachograph msg;
    msg.setTimeStamp(0.07023512996941095);
    msg.setSource(34122U);
    msg.setSourceEntity(104U);
    msg.setDestination(53640U);
    msg.setDestinationEntity(3U);
    msg.timestamp_last_service = 0.17798621202979548;
    msg.time_next_service = 0.9755008256124421;
    msg.time_motor_next_service = 0.7350942708993005;
    msg.time_idle_ground = 0.7674714211226984;
    msg.time_idle_air = 0.08652641953208806;
    msg.time_idle_water = 0.27083657272367867;
    msg.time_idle_underwater = 0.58308635080649;
    msg.time_idle_unknown = 0.6321220241541522;
    msg.time_motor_ground = 0.2962681389123367;
    msg.time_motor_air = 0.08594530256215571;
    msg.time_motor_water = 0.2703050563248691;
    msg.time_motor_underwater = 0.12192969566612077;
    msg.time_motor_unknown = 0.547847019763751;
    msg.rpm_min = -18788;
    msg.rpm_max = -30564;
    msg.depth_max = 0.4460794783207709;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Tachograph #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Tachograph msg;
    msg.setTimeStamp(0.9614632873837189);
    msg.setSource(9997U);
    msg.setSourceEntity(149U);
    msg.setDestination(60575U);
    msg.setDestinationEntity(39U);
    msg.timestamp_last_service = 0.5155275720491331;
    msg.time_next_service = 0.5783703329203775;
    msg.time_motor_next_service = 0.09338814288101627;
    msg.time_idle_ground = 0.780305152555739;
    msg.time_idle_air = 0.05189302312141364;
    msg.time_idle_water = 0.07502291451568288;
    msg.time_idle_underwater = 0.08339795115553583;
    msg.time_idle_unknown = 0.8933384907268711;
    msg.time_motor_ground = 0.8299961618645255;
    msg.time_motor_air = 0.13505611811399165;
    msg.time_motor_water = 0.5028610422328226;
    msg.time_motor_underwater = 0.2203304658393478;
    msg.time_motor_unknown = 0.8243536343492182;
    msg.rpm_min = 1063;
    msg.rpm_max = -13766;
    msg.depth_max = 0.8212605537185628;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Tachograph #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Tachograph msg;
    msg.setTimeStamp(0.20996288808721075);
    msg.setSource(25413U);
    msg.setSourceEntity(210U);
    msg.setDestination(43022U);
    msg.setDestinationEntity(102U);
    msg.timestamp_last_service = 0.11008073308176314;
    msg.time_next_service = 0.279495745108719;
    msg.time_motor_next_service = 0.17949682626060193;
    msg.time_idle_ground = 0.4276871460820023;
    msg.time_idle_air = 0.7054407540170341;
    msg.time_idle_water = 0.9440768402335713;
    msg.time_idle_underwater = 0.21995496860831887;
    msg.time_idle_unknown = 0.20885676671887465;
    msg.time_motor_ground = 0.8638938767942349;
    msg.time_motor_air = 0.22522020524653552;
    msg.time_motor_water = 0.6227770569226265;
    msg.time_motor_underwater = 0.5733409596635446;
    msg.time_motor_unknown = 0.38250288832026835;
    msg.rpm_min = 6336;
    msg.rpm_max = -2632;
    msg.depth_max = 0.32272452921747596;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Tachograph #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ApmStatus msg;
    msg.setTimeStamp(0.7949493310301707);
    msg.setSource(53637U);
    msg.setSourceEntity(132U);
    msg.setDestination(62125U);
    msg.setDestinationEntity(2U);
    msg.severity = 19U;
    msg.text.assign("DZOWMUFICNINGBEDCHENWPJTAVCTSLWQZOGVBMWVUWNDYKUTLGGJYMXIHNXTDMUBEZMMOPLJGPELR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ApmStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ApmStatus msg;
    msg.setTimeStamp(0.7238143162223784);
    msg.setSource(9528U);
    msg.setSourceEntity(3U);
    msg.setDestination(38695U);
    msg.setDestinationEntity(60U);
    msg.severity = 7U;
    msg.text.assign("AXNAGSBNFATSHZRNSMTMGKQATILXXGRAICHWYXTQHKNCRZVDUAEASLJKHGVUPHMDOKLJSSETTPFWJYCBVHDFVEBCYOYAUYDDOOD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ApmStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ApmStatus msg;
    msg.setTimeStamp(0.023324985870797454);
    msg.setSource(37696U);
    msg.setSourceEntity(234U);
    msg.setDestination(54443U);
    msg.setDestinationEntity(94U);
    msg.severity = 251U;
    msg.text.assign("JTSIPFBOPYEULKZWBJOZYHJJCPEYHTOBHEYRMPZAXUKWBFGOPUVYBOVKPBCSHZDQJUYUEEQRNCLMIJQGFDPEXTUXZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ApmStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SadcReadings msg;
    msg.setTimeStamp(0.6352873376094748);
    msg.setSource(7397U);
    msg.setSourceEntity(227U);
    msg.setDestination(53822U);
    msg.setDestinationEntity(65U);
    msg.channel = 37;
    msg.value = 2033212935;
    msg.gain = 227U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SadcReadings #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SadcReadings msg;
    msg.setTimeStamp(0.18236272501854467);
    msg.setSource(9847U);
    msg.setSourceEntity(166U);
    msg.setDestination(53021U);
    msg.setDestinationEntity(237U);
    msg.channel = 89;
    msg.value = 1516461049;
    msg.gain = 48U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SadcReadings #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SadcReadings msg;
    msg.setTimeStamp(0.10504044095713017);
    msg.setSource(35193U);
    msg.setSourceEntity(74U);
    msg.setDestination(15032U);
    msg.setDestinationEntity(35U);
    msg.channel = 24;
    msg.value = 853744218;
    msg.gain = 179U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SadcReadings #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DmsDetection msg;
    msg.setTimeStamp(0.9619679942468045);
    msg.setSource(35382U);
    msg.setSourceEntity(55U);
    msg.setDestination(51284U);
    msg.setDestinationEntity(171U);
    msg.ch01 = 0.1641662424885968;
    msg.ch02 = 0.4362201141015001;
    msg.ch03 = 0.6957019953888111;
    msg.ch04 = 0.6443760035435895;
    msg.ch05 = 0.3035940191790326;
    msg.ch06 = 0.670682261013629;
    msg.ch07 = 0.8483132728547885;
    msg.ch08 = 0.8622181007871645;
    msg.ch09 = 0.9661579041562144;
    msg.ch10 = 0.12023300372251311;
    msg.ch11 = 0.33712339395172786;
    msg.ch12 = 0.3845419203015781;
    msg.ch13 = 0.8758271214355274;
    msg.ch14 = 0.5315917869803751;
    msg.ch15 = 0.5154109633264411;
    msg.ch16 = 0.6171996255907146;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DmsDetection #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DmsDetection msg;
    msg.setTimeStamp(0.7217946934434497);
    msg.setSource(36002U);
    msg.setSourceEntity(165U);
    msg.setDestination(29716U);
    msg.setDestinationEntity(205U);
    msg.ch01 = 0.019612274645805283;
    msg.ch02 = 0.9792446237307537;
    msg.ch03 = 0.3568307842817934;
    msg.ch04 = 0.11286798651925134;
    msg.ch05 = 0.7097215603610018;
    msg.ch06 = 0.695665204830828;
    msg.ch07 = 0.9343772928918931;
    msg.ch08 = 0.2435489297873381;
    msg.ch09 = 0.5176676237377763;
    msg.ch10 = 0.17285581876587586;
    msg.ch11 = 0.11962928966175412;
    msg.ch12 = 0.12785127947979436;
    msg.ch13 = 0.0807364965202294;
    msg.ch14 = 0.5522302321279858;
    msg.ch15 = 0.05143147219383659;
    msg.ch16 = 0.5585532392602321;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DmsDetection #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DmsDetection msg;
    msg.setTimeStamp(0.5914198446831561);
    msg.setSource(54866U);
    msg.setSourceEntity(3U);
    msg.setDestination(44345U);
    msg.setDestinationEntity(149U);
    msg.ch01 = 0.14954290514815138;
    msg.ch02 = 0.6861975351809517;
    msg.ch03 = 0.5700579877103147;
    msg.ch04 = 0.919071399167392;
    msg.ch05 = 0.845741602906922;
    msg.ch06 = 0.13488138010958572;
    msg.ch07 = 0.4649601635749103;
    msg.ch08 = 0.0010560723991152043;
    msg.ch09 = 0.004351363045814849;
    msg.ch10 = 0.2517835979992419;
    msg.ch11 = 0.9545902624610397;
    msg.ch12 = 0.5580360218503123;
    msg.ch13 = 0.43288666490971406;
    msg.ch14 = 0.16669077678479682;
    msg.ch15 = 0.4214776471340441;
    msg.ch16 = 0.8424430461387418;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DmsDetection #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HomePosition msg;
    msg.setTimeStamp(0.046740324633646524);
    msg.setSource(49824U);
    msg.setSourceEntity(138U);
    msg.setDestination(61435U);
    msg.setDestinationEntity(51U);
    msg.op = 137U;
    msg.lat = 0.5131906502077607;
    msg.lon = 0.5066200024057275;
    msg.height = 0.02471621660621659;
    msg.depth = 0.9027458092332308;
    msg.alt = 0.46023433621358745;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HomePosition #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HomePosition msg;
    msg.setTimeStamp(0.42002116833430525);
    msg.setSource(46809U);
    msg.setSourceEntity(159U);
    msg.setDestination(59150U);
    msg.setDestinationEntity(108U);
    msg.op = 80U;
    msg.lat = 0.06543258028165955;
    msg.lon = 0.510068382166749;
    msg.height = 0.8955278030696627;
    msg.depth = 0.6116959275651231;
    msg.alt = 0.2580448011319395;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HomePosition #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HomePosition msg;
    msg.setTimeStamp(0.5092598724395028);
    msg.setSource(58143U);
    msg.setSourceEntity(0U);
    msg.setDestination(25914U);
    msg.setDestinationEntity(88U);
    msg.op = 34U;
    msg.lat = 0.7585992865031302;
    msg.lon = 0.6742632107441281;
    msg.height = 0.3332550264599563;
    msg.depth = 0.15476497828834412;
    msg.alt = 0.32407291807415584;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HomePosition #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CurrentProfile msg;
    msg.setTimeStamp(0.027351239163309837);
    msg.setSource(12055U);
    msg.setSourceEntity(105U);
    msg.setDestination(4713U);
    msg.setDestinationEntity(32U);
    msg.nbeams = 219U;
    msg.ncells = 6U;
    msg.coord_sys = 87U;
    IMC::CurrentProfileCell tmp_msg_0;
    tmp_msg_0.cell_position = 0.24779011799152673;
    IMC::ADCPBeam tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.vel = 0.28243951708076886;
    tmp_tmp_msg_0_0.amp = 0.4574500779850833;
    tmp_tmp_msg_0_0.cor = 233U;
    tmp_msg_0.beams.push_back(tmp_tmp_msg_0_0);
    msg.profile.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CurrentProfile #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CurrentProfile msg;
    msg.setTimeStamp(0.06886819366102015);
    msg.setSource(757U);
    msg.setSourceEntity(115U);
    msg.setDestination(42975U);
    msg.setDestinationEntity(203U);
    msg.nbeams = 236U;
    msg.ncells = 193U;
    msg.coord_sys = 70U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CurrentProfile #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CurrentProfile msg;
    msg.setTimeStamp(0.29286033278499657);
    msg.setSource(14792U);
    msg.setSourceEntity(181U);
    msg.setDestination(20251U);
    msg.setDestinationEntity(162U);
    msg.nbeams = 120U;
    msg.ncells = 229U;
    msg.coord_sys = 212U;
    IMC::CurrentProfileCell tmp_msg_0;
    tmp_msg_0.cell_position = 0.18445146186823935;
    IMC::ADCPBeam tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.vel = 0.9189327386773194;
    tmp_tmp_msg_0_0.amp = 0.09418249032556936;
    tmp_tmp_msg_0_0.cor = 202U;
    tmp_msg_0.beams.push_back(tmp_tmp_msg_0_0);
    msg.profile.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CurrentProfile #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CurrentProfileCell msg;
    msg.setTimeStamp(0.04872139421248811);
    msg.setSource(42006U);
    msg.setSourceEntity(206U);
    msg.setDestination(15549U);
    msg.setDestinationEntity(196U);
    msg.cell_position = 0.7141232290958764;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CurrentProfileCell #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CurrentProfileCell msg;
    msg.setTimeStamp(0.9936030046067551);
    msg.setSource(28334U);
    msg.setSourceEntity(119U);
    msg.setDestination(12838U);
    msg.setDestinationEntity(179U);
    msg.cell_position = 0.9953094297561813;
    IMC::ADCPBeam tmp_msg_0;
    tmp_msg_0.vel = 0.17761044013160476;
    tmp_msg_0.amp = 0.48811370937362164;
    tmp_msg_0.cor = 229U;
    msg.beams.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CurrentProfileCell #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CurrentProfileCell msg;
    msg.setTimeStamp(0.05637652586038244);
    msg.setSource(64660U);
    msg.setSourceEntity(55U);
    msg.setDestination(17727U);
    msg.setDestinationEntity(152U);
    msg.cell_position = 0.44432138415405065;
    IMC::ADCPBeam tmp_msg_0;
    tmp_msg_0.vel = 0.8822088129145481;
    tmp_msg_0.amp = 0.27457883483878653;
    tmp_msg_0.cor = 1U;
    msg.beams.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CurrentProfileCell #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ADCPBeam msg;
    msg.setTimeStamp(0.22907404508758988);
    msg.setSource(55914U);
    msg.setSourceEntity(81U);
    msg.setDestination(58006U);
    msg.setDestinationEntity(111U);
    msg.vel = 0.32409904286595004;
    msg.amp = 0.7187011728304502;
    msg.cor = 115U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ADCPBeam #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ADCPBeam msg;
    msg.setTimeStamp(0.4555191854111741);
    msg.setSource(27337U);
    msg.setSourceEntity(12U);
    msg.setDestination(52215U);
    msg.setDestinationEntity(43U);
    msg.vel = 0.03414152867233056;
    msg.amp = 0.08330178827961854;
    msg.cor = 68U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ADCPBeam #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ADCPBeam msg;
    msg.setTimeStamp(0.6262628079930739);
    msg.setSource(53276U);
    msg.setSourceEntity(134U);
    msg.setDestination(13749U);
    msg.setDestinationEntity(159U);
    msg.vel = 0.894722340803265;
    msg.amp = 0.7425133282833252;
    msg.cor = 163U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ADCPBeam #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpioState msg;
    msg.setTimeStamp(0.32581051869894284);
    msg.setSource(38470U);
    msg.setSourceEntity(79U);
    msg.setDestination(14510U);
    msg.setDestinationEntity(62U);
    msg.name.assign("KFVWZYOLAVBKWSQOQUZUSWLDFSXWGEVJEORHKTNLHVZTQSVFJEAGNDQYWEVCLCNJITWOPXGZQSUTPLYFOSZYDXRECMJIGNXHDOWQKQGCPNIKEIMJEJXRQSLCTNYSBRFAKYRSGANMOXVCANIOLHDJRHV");
    msg.value = 195U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpioState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpioState msg;
    msg.setTimeStamp(0.44341205931115635);
    msg.setSource(62186U);
    msg.setSourceEntity(82U);
    msg.setDestination(34126U);
    msg.setDestinationEntity(180U);
    msg.name.assign("XEFAFKTHMWWSFXYMWOMKYQAPIABYWPUIUCRVGMSCNRQRALAGKDJJIMDUGLZQWLAZ");
    msg.value = 126U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpioState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpioState msg;
    msg.setTimeStamp(0.28757409912260246);
    msg.setSource(33353U);
    msg.setSourceEntity(106U);
    msg.setDestination(42540U);
    msg.setDestinationEntity(95U);
    msg.name.assign("NEQZKZVRMKINTTIUWAPBRANUYHFHBRCFVRJEHNBGCWTXLJRDGZKUCRNOYGIDZDLOOSERCPOAXSJKUYQPUWVMSCFZDTQSHFUPEXBVWGVKWMWEIDCFYPAGLXZBBL");
    msg.value = 249U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpioState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpioStateGet msg;
    msg.setTimeStamp(0.1495791727240905);
    msg.setSource(62662U);
    msg.setSourceEntity(53U);
    msg.setDestination(35832U);
    msg.setDestinationEntity(160U);
    msg.name.assign("CBJBJYQATIWXPIHWMFBENSWLPDVAHVINBDTKRYTJSEIEIOYMYZZRWOAVNNDRMAUOUEEXXQZHWKHSKYKZELKJBVLTVGQVCYFLLJGGPGTSFIUTQPCOWDTRAMHJVNGUPAPFODZGQAJOZWGCEUNDXMZTYDIYDBTQLEHKXUBSUVWRFRMFRQRCFJZSIMXQUZSHMCZNPLHECGXBRMPCCQOPTLSKKBEOAGNXSHUWGBQYFXVDLJYKOUNSHXJIKRMFPFWCA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpioStateGet #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpioStateGet msg;
    msg.setTimeStamp(0.8026845647896618);
    msg.setSource(36656U);
    msg.setSourceEntity(113U);
    msg.setDestination(45022U);
    msg.setDestinationEntity(225U);
    msg.name.assign("BDBDJIWXVTFQEJJXJUBOHMSINUABPPOAUMRXSVZQALXCMDKYPAPMPFRILKUJUQKKOZNXQKXNNWHWNQEZRLBVHPRZSSSJNGKVAPARUOTBEYKSZJMOEFDOTGDFCLTECTNSGYHEPCLOAI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpioStateGet #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpioStateGet msg;
    msg.setTimeStamp(0.3197069405299301);
    msg.setSource(18588U);
    msg.setSourceEntity(60U);
    msg.setDestination(45475U);
    msg.setDestinationEntity(229U);
    msg.name.assign("PJWFQPTKBIDEWJCBQEFUHMEYLTOVARZMJKNDVKTMTWDJGPTKSAAGSUADYNNJHWSSCTEHNIUPNBXAAOBVKTUEZODFBRMOPUIOOZBLRGQVNFHDUJGCTUSELVY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpioStateGet #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpioStateSet msg;
    msg.setTimeStamp(0.8454327715208241);
    msg.setSource(36895U);
    msg.setSourceEntity(53U);
    msg.setDestination(19499U);
    msg.setDestinationEntity(91U);
    msg.name.assign("RRUCGRFPHALTHWAACHGOUWKYKTGEDSTVYLEGESLMCKONUABXQBCCJGHBYZANYVZANPGSCNSOZXBPT");
    msg.value = 165U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpioStateSet #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpioStateSet msg;
    msg.setTimeStamp(0.5817726517556753);
    msg.setSource(31871U);
    msg.setSourceEntity(185U);
    msg.setDestination(30376U);
    msg.setDestinationEntity(171U);
    msg.name.assign("TJMFKLSCBZTZWBQYUWYJIFNAKOIXDVSYZDJOWZBEBKSKLPRPSFFXGIPMIHKCXEILQLBPOQAJPYOKDRGGWSGPBKZDTBHTXJCMMTNIVAMSOXGSLREJPQMNXPDLZRQOMZICGTHOUVZXSHTHD");
    msg.value = 71U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpioStateSet #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpioStateSet msg;
    msg.setTimeStamp(0.5622182046370673);
    msg.setSource(18196U);
    msg.setSourceEntity(211U);
    msg.setDestination(52113U);
    msg.setDestinationEntity(15U);
    msg.name.assign("JTSFTWENIBQCTETAYMCVOITGVXKRRPAGYRDTDQISVCPVMLIRQAFADYPQDFFZBVBJBKFJUYINZCYEWLZATCUOERGCSACIOOZGEGLQWYODXHBOIGHKTHVVFUSFNXMMRNYICJYBXVWDFBSIPASHOPLRIZOMHCOHUNHAFZXHEMGWUPAGXDGDQEDJKKKXQZWSSYKX");
    msg.value = 28U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpioStateSet #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ColoredDissolvedOrganicMatter msg;
    msg.setTimeStamp(0.645499479987767);
    msg.setSource(3719U);
    msg.setSourceEntity(157U);
    msg.setDestination(13260U);
    msg.setDestinationEntity(92U);
    msg.value = 0.5084637429188528;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ColoredDissolvedOrganicMatter #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ColoredDissolvedOrganicMatter msg;
    msg.setTimeStamp(0.7890687761258822);
    msg.setSource(46552U);
    msg.setSourceEntity(178U);
    msg.setDestination(56034U);
    msg.setDestinationEntity(220U);
    msg.value = 0.7337791048802799;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ColoredDissolvedOrganicMatter #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ColoredDissolvedOrganicMatter msg;
    msg.setTimeStamp(0.3189430315989751);
    msg.setSource(29569U);
    msg.setSourceEntity(42U);
    msg.setDestination(17060U);
    msg.setDestinationEntity(58U);
    msg.value = 0.9685989626979955;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ColoredDissolvedOrganicMatter #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FluorescentDissolvedOrganicMatter msg;
    msg.setTimeStamp(0.7270856858013269);
    msg.setSource(28005U);
    msg.setSourceEntity(86U);
    msg.setDestination(22332U);
    msg.setDestinationEntity(68U);
    msg.value = 0.8355670258910985;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FluorescentDissolvedOrganicMatter #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FluorescentDissolvedOrganicMatter msg;
    msg.setTimeStamp(0.32612314794188135);
    msg.setSource(22632U);
    msg.setSourceEntity(45U);
    msg.setDestination(8638U);
    msg.setDestinationEntity(225U);
    msg.value = 0.4751463901410713;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FluorescentDissolvedOrganicMatter #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FluorescentDissolvedOrganicMatter msg;
    msg.setTimeStamp(0.6966619315412194);
    msg.setSource(64778U);
    msg.setSourceEntity(123U);
    msg.setDestination(45211U);
    msg.setDestinationEntity(229U);
    msg.value = 0.6308097502705037;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FluorescentDissolvedOrganicMatter #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TotalMagIntensity msg;
    msg.setTimeStamp(0.2048157879361281);
    msg.setSource(17346U);
    msg.setSourceEntity(202U);
    msg.setDestination(42734U);
    msg.setDestinationEntity(117U);
    msg.value = 0.9295942742259284;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TotalMagIntensity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TotalMagIntensity msg;
    msg.setTimeStamp(0.8687475475471911);
    msg.setSource(51793U);
    msg.setSourceEntity(70U);
    msg.setDestination(56819U);
    msg.setDestinationEntity(38U);
    msg.value = 0.917227583218951;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TotalMagIntensity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TotalMagIntensity msg;
    msg.setTimeStamp(0.6399153299697099);
    msg.setSource(7624U);
    msg.setSourceEntity(48U);
    msg.setDestination(28098U);
    msg.setDestinationEntity(106U);
    msg.value = 0.6008246591058708;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TotalMagIntensity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommRestriction msg;
    msg.setTimeStamp(0.964495479104843);
    msg.setSource(30552U);
    msg.setSourceEntity(165U);
    msg.setDestination(63197U);
    msg.setDestinationEntity(39U);
    msg.restriction = 152U;
    msg.reason.assign("BALDPCVYJSPFQAXJRLWCIMWTNPXNTDKWOHGODHZAELHJDDKWBJWSRCBIGLEGZFMMHKRFHSKDSFKIGVGMQXLSVLZZXNKDQLQEEZBXBOMJMIBNYHAJUKNPIAPNPUPMLUSSJDGTDQTKBYTGQALAUS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommRestriction #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommRestriction msg;
    msg.setTimeStamp(0.09726005873316235);
    msg.setSource(16690U);
    msg.setSourceEntity(134U);
    msg.setDestination(19606U);
    msg.setDestinationEntity(0U);
    msg.restriction = 185U;
    msg.reason.assign("DSBIIJKQTOASLSUSRFSXIWIPMLBWFGXVYRYLRTCYKQETOWEPDQJMEIOMGRUDVVEWNOGBATRZPLCLOKKZZMTHRVIIMYLAOGHEXDMZNUQHVXEFVCRAYPINKAHVNCWJUUVTBFQSOZKPKRDBHAPJYGCVUZFTE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommRestriction #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommRestriction msg;
    msg.setTimeStamp(0.35599873596350595);
    msg.setSource(17973U);
    msg.setSourceEntity(141U);
    msg.setDestination(65517U);
    msg.setDestinationEntity(8U);
    msg.restriction = 220U;
    msg.reason.assign("XUPFTFIZZKPECUVDCFJQPSQMLJVOKMOWTVAWYCGCMINKSXBXZHBGEIAUDZURFIZHCJHHJXWYQRLDAKRAUQLDBVVESXISWBNPOHRBNVQSXXBHUVTHEOKNQCKIXWBO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommRestriction #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  return test.getReturnValue();
}
