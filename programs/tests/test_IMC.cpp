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
// IMC XML MD5: 4a28b3364826b77555ea15e7fef43c20                            *
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
    msg.setTimeStamp(0.3675934042571378);
    msg.setSource(10413U);
    msg.setSourceEntity(92U);
    msg.setDestination(45315U);
    msg.setDestinationEntity(15U);
    msg.state = 115U;
    msg.flags = 13U;
    msg.description.assign("BLCNMIDAYPLHYBFWMTWCAPQLMMGDFOXJVFJSZNYXYODXSPQWPNIIKCCOMGQJWQVAYNBMAEHHVUWWASFIRQLYPVFTAKUNIXHUYDUJJTTKTMOLCROZIQZDYEHLTBUSOGRPGSHEVRBZUEOBGXGEPDFVKWXSGWJVLORZNBPOHFDTFKVKEQUGQEQEMUQDIXXVYCCKACHTKLSXDHJMHJCRNUBXAPGNRIRJOWUSEEZJDKTTAIAZCIVFBK");

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
    msg.setTimeStamp(0.6544409642378655);
    msg.setSource(46296U);
    msg.setSourceEntity(104U);
    msg.setDestination(7451U);
    msg.setDestinationEntity(172U);
    msg.state = 192U;
    msg.flags = 232U;
    msg.description.assign("ZGGRNYUPAHTAORUYKJPACAMLXWPZLQSVBJHFJCYTKYPDDVRMGTASBJKMZHQDHMXOGAJNSSIPRUXWRKICUGAPBWBEKAVPGVRIFRMDFNAZTZIWIWIBWXOEDLUZUNRQLICFQCOYNEMXTYSXDYDBNPMEXIMGDOVYBAKIZVWWDTFOHVUYFQ");

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
    msg.setTimeStamp(0.5853811801053614);
    msg.setSource(37320U);
    msg.setSourceEntity(58U);
    msg.setDestination(33948U);
    msg.setDestinationEntity(212U);
    msg.state = 226U;
    msg.flags = 168U;
    msg.description.assign("MRCNHUIGBYALKYMOOALULQPHZJNSAKDHJAYAUQUNYSEHKZOHODXIVRXHZIUBPYLOFAXCIKLZEXIDNMNCMDVNABVVJTXXJGROFCISJVOGPBSEFNQOQZFYCDVQGETGTVIPJSMTMBDIQVKXKQSFCOLGEECLDWXQFQXXFEPRAZPRYCVZIHJHUEUNWPRGMRWDGJWTTBUFAQRMTBCECLVOFAWRZKSUNNUSGRHZ");

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
    msg.setTimeStamp(0.6651509893002238);
    msg.setSource(54519U);
    msg.setSourceEntity(69U);
    msg.setDestination(59093U);
    msg.setDestinationEntity(200U);

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
    msg.setTimeStamp(0.6599022223879947);
    msg.setSource(32464U);
    msg.setSourceEntity(231U);
    msg.setDestination(11174U);
    msg.setDestinationEntity(233U);

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
    msg.setTimeStamp(0.16425806299430779);
    msg.setSource(46844U);
    msg.setSourceEntity(119U);
    msg.setDestination(63187U);
    msg.setDestinationEntity(162U);

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
    msg.setTimeStamp(0.35625556599784547);
    msg.setSource(2076U);
    msg.setSourceEntity(29U);
    msg.setDestination(4006U);
    msg.setDestinationEntity(72U);
    msg.id = 175U;
    msg.label.assign("VHXRFUBAXELSLMGHRFPJWLRHHERJBSIRNCNQZUCIIKPEAJSGDTXPQVHLAGTQQWWVBUVIKTKXTSCPDPUNYOEQGDUTQOFMBTDZFOQQDJGMXXLTXNGILWABRBCKNAOILUEFMHHYWZMTYEKEDRYRHEDBGZZQOVMBFGEPUACIQOAMZSRSSNYGYXBFSNOVEZDSJGFOKYKNSKDYAMXUVPOFVICULYJUJNKJJVHR");
    msg.component.assign("TLMQYOPPQDYMMHIOEPRCZBDIAIXTELVZUBEYTUHOFECZXRWSMQKWHONDKUBOWGYYGPLVLRLZUKQXVMXNHNYCJYNOXZMFNJDPUXNQCLSPFOPBWFERHTLKHIQLPWGDCDOALVRKFXUS");
    msg.act_time = 37134U;
    msg.deact_time = 52978U;

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
    msg.setTimeStamp(0.737857694649714);
    msg.setSource(11523U);
    msg.setSourceEntity(170U);
    msg.setDestination(9529U);
    msg.setDestinationEntity(109U);
    msg.id = 212U;
    msg.label.assign("SIFGIREVJGROZZVGLPXWWNHBTCHSCNJHHNUKFWIABJOSSCZDQIDABIJMKJJO");
    msg.component.assign("XUWOWJBJCNUQXIYYMOCUVAOCQTCUGUGYPNVZYIASSLW");
    msg.act_time = 2072U;
    msg.deact_time = 18034U;

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
    msg.setTimeStamp(0.8212842659827697);
    msg.setSource(48169U);
    msg.setSourceEntity(94U);
    msg.setDestination(24219U);
    msg.setDestinationEntity(70U);
    msg.id = 72U;
    msg.label.assign("OXKICRPMMUIHSOFWHUXBQEAAWSFCBFQXVWRFKGQOZBGNEDOEKEMAOITQACMGHZVEYRTUBOROVDDZYQLSYADW");
    msg.component.assign("NLWXRTVBIYJDAGNITINEMFILIZHVZNXEUONUDMOUEVNXLMPFISBDWQDWSWLEHLUFZZIHACZYWGTAGJZXXQDRPKRWDKHSPTVRXDOELUBAULERUTYKDYCHFHSHPIJMOLMWCLWGPGOYSGJGINQZLTOBCTJKDETPRQPBOAVKEHYQSAXYKKMCCCIAFSKGSYTXCEZFROOAZFPJFN");
    msg.act_time = 30325U;
    msg.deact_time = 47718U;

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
    msg.setTimeStamp(0.8772867838649088);
    msg.setSource(38525U);
    msg.setSourceEntity(100U);
    msg.setDestination(12550U);
    msg.setDestinationEntity(121U);
    msg.id = 11U;

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
    msg.setTimeStamp(0.42149526870754916);
    msg.setSource(37664U);
    msg.setSourceEntity(102U);
    msg.setDestination(20485U);
    msg.setDestinationEntity(62U);
    msg.id = 188U;

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
    msg.setTimeStamp(0.19659712362280546);
    msg.setSource(43287U);
    msg.setSourceEntity(98U);
    msg.setDestination(40137U);
    msg.setDestinationEntity(181U);
    msg.id = 26U;

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
    msg.setTimeStamp(0.47174262016385027);
    msg.setSource(34545U);
    msg.setSourceEntity(33U);
    msg.setDestination(51676U);
    msg.setDestinationEntity(210U);
    msg.op = 54U;
    msg.list.assign("UACCKPLQRWVIIMWCKWSMKFTZQYZRWMNRRTFXRJXSNFFTOZIYUYHKQEDBUUGDDWELXHPGAGWCESOFNAOLUCIEGPTBPRGQQUZBCDPPWGZCAFVSRPOKILIYKDMVHAGCRNWBOZJ");

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
    msg.setTimeStamp(0.28870458234500773);
    msg.setSource(24593U);
    msg.setSourceEntity(38U);
    msg.setDestination(42097U);
    msg.setDestinationEntity(101U);
    msg.op = 195U;
    msg.list.assign("NOHBVMLARLYUZOPNGVZWNKAEYQSINKHDEEOSBIUQUGMAWABHRXMYORHCXETVPMFBUJDATBFCQWHKSNYCPTYISFVJCGMGNRVGPJKBAJPHENEKLFEDJYJYFYDGKUWSVVMRQLPFGUXVZLXHWRKUDBOVBXSQLZAJIBFVDDFYMHZTSRDHIGZGCWJNSQAXCOIZLPLITUTCPKNEWWQZMZOQWQTMOMCKKR");

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
    msg.setTimeStamp(0.22576193500795372);
    msg.setSource(17377U);
    msg.setSourceEntity(192U);
    msg.setDestination(5588U);
    msg.setDestinationEntity(25U);
    msg.op = 193U;
    msg.list.assign("EZGWINQWZPIIETARDMBTSNZVIRUBVCHFCCPWSNKBTNFOTPVCOSHXXGOQGLIRSLMDARQTPYHUOIIEMHG");

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
    msg.setTimeStamp(0.7070215662282727);
    msg.setSource(50194U);
    msg.setSourceEntity(175U);
    msg.setDestination(11034U);
    msg.setDestinationEntity(64U);
    msg.value = 243U;

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
    msg.setTimeStamp(0.0804198962796312);
    msg.setSource(52794U);
    msg.setSourceEntity(102U);
    msg.setDestination(28648U);
    msg.setDestinationEntity(4U);
    msg.value = 121U;

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
    msg.setTimeStamp(0.4768973456670239);
    msg.setSource(38563U);
    msg.setSourceEntity(212U);
    msg.setDestination(42368U);
    msg.setDestinationEntity(149U);
    msg.value = 6U;

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
    msg.setTimeStamp(0.6364391060534383);
    msg.setSource(63350U);
    msg.setSourceEntity(34U);
    msg.setDestination(54928U);
    msg.setDestinationEntity(206U);
    msg.consumer.assign("SYPSIAHTXSQYFENLOWALQYIGCPBMAEPOJWCHZDQZKDODUYDVUUBSZEZHEWEHEJHCRRLBDOUIKVPKKUTINNFAPALGODFTJDZTFYCIBXSEZMVMWPRMGDDRVSOCOFIOQOFIAWYVASFXSHCHYVGVDXPGTJZMYLYKBRX");
    msg.message_id = 8305U;

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
    msg.setTimeStamp(0.45308104923688763);
    msg.setSource(35053U);
    msg.setSourceEntity(154U);
    msg.setDestination(12724U);
    msg.setDestinationEntity(159U);
    msg.consumer.assign("YBWPCIUDNGEBUSB");
    msg.message_id = 10897U;

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
    msg.setTimeStamp(0.8169708514763242);
    msg.setSource(55846U);
    msg.setSourceEntity(253U);
    msg.setDestination(9731U);
    msg.setDestinationEntity(119U);
    msg.consumer.assign("PNUZTJCLHNJBXASDGXLWYOXDKJHQIMDTBNTIUYHJPJDYBRGAHUQRR");
    msg.message_id = 42390U;

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
    msg.setTimeStamp(0.8448970359223418);
    msg.setSource(35367U);
    msg.setSourceEntity(242U);
    msg.setDestination(48736U);
    msg.setDestinationEntity(150U);
    msg.type = 65U;

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
    msg.setTimeStamp(0.43050700968559097);
    msg.setSource(28863U);
    msg.setSourceEntity(162U);
    msg.setDestination(28480U);
    msg.setDestinationEntity(52U);
    msg.type = 77U;

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
    msg.setTimeStamp(0.24317821859973388);
    msg.setSource(48739U);
    msg.setSourceEntity(194U);
    msg.setDestination(19952U);
    msg.setDestinationEntity(182U);
    msg.type = 45U;

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
    msg.setTimeStamp(0.31938293433705855);
    msg.setSource(44397U);
    msg.setSourceEntity(80U);
    msg.setDestination(15592U);
    msg.setDestinationEntity(28U);
    msg.op = 180U;

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
    msg.setTimeStamp(0.868074583461199);
    msg.setSource(54128U);
    msg.setSourceEntity(184U);
    msg.setDestination(40765U);
    msg.setDestinationEntity(56U);
    msg.op = 52U;

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
    msg.setTimeStamp(0.2285450526321091);
    msg.setSource(44405U);
    msg.setSourceEntity(7U);
    msg.setDestination(39139U);
    msg.setDestinationEntity(26U);
    msg.op = 156U;

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
    msg.setTimeStamp(0.4199755755398167);
    msg.setSource(39912U);
    msg.setSourceEntity(118U);
    msg.setDestination(61847U);
    msg.setDestinationEntity(59U);
    msg.total_steps = 53U;
    msg.step_number = 108U;
    msg.step.assign("FVTYPBSRMOXAPQHFGUANYPLQSXTMOTVWFFJMKUBGYVWXLKSEOOJZHBIARTNLZMQDFZUCOBXUSQEMUWEMFURNIGRCEBDDEAYOVIQUOLZLSLK");
    msg.flags = 229U;

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
    msg.setTimeStamp(0.6407363895810535);
    msg.setSource(19906U);
    msg.setSourceEntity(127U);
    msg.setDestination(43797U);
    msg.setDestinationEntity(122U);
    msg.total_steps = 225U;
    msg.step_number = 155U;
    msg.step.assign("AWDPLEOEIQMYJDPYIESKPKNTKUVDXQZIEFYAGDZSRMTDJSZYJTWPFCYXYLJKBCKJTUBSSBCKOIRLVVBNNOTCCZLFFOHRDWAWFMCMYHRQRMYKVZLZEZJQAHINIUNEHVUOGBGHGTWPJAVRXJYCLAWQQVWHOOQSXNFWOQGYVKXIUZLEOPHHEGKIXTNPPWSQFQLZXIZXCAUBRUOFMGPAGJMGSUBFDGRFAKN");
    msg.flags = 182U;

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
    msg.setTimeStamp(0.4072240107398979);
    msg.setSource(18757U);
    msg.setSourceEntity(177U);
    msg.setDestination(16195U);
    msg.setDestinationEntity(83U);
    msg.total_steps = 101U;
    msg.step_number = 10U;
    msg.step.assign("KFUJHSDMLYSPKOZUMDXFVRPWZGVCVCIPAPHWZEGLYHIHXXPNJSQSXJQTVZBWFRLHMJLGCJHAVSYLJRPHVVDFAPYDQNEGDOZBATUEYXXOWLFOOTKURSZRNDPZDS");
    msg.flags = 108U;

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
    msg.setTimeStamp(0.8647155993822466);
    msg.setSource(46160U);
    msg.setSourceEntity(28U);
    msg.setDestination(23971U);
    msg.setDestinationEntity(189U);
    msg.state = 209U;
    msg.error.assign("VYXZEJFIGLTVGQCFROIEFHUUABUDDHJTKHALBAQAPYXYFVWBXXCCKLJWNUSNKRGWZTDGKULHG");

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
    msg.setTimeStamp(0.6757371540361566);
    msg.setSource(21499U);
    msg.setSourceEntity(114U);
    msg.setDestination(558U);
    msg.setDestinationEntity(155U);
    msg.state = 82U;
    msg.error.assign("QTPSXTFOZABTIOCYNUIVCRSJRENKKWZIVMSVUHAIJWFQMEZLGXCFONCQZKGTKBYVJYMAELCNZUGTUKSDDJFGANYPRIWHXYWEEJOMHHIQGBPNBOBPBELSXGXTHTQZ");

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
    msg.setTimeStamp(0.4081211144829924);
    msg.setSource(49730U);
    msg.setSourceEntity(228U);
    msg.setDestination(4244U);
    msg.setDestinationEntity(42U);
    msg.state = 230U;
    msg.error.assign("UKFJIBGLNEDZVLHHVSFURJOKOMYZUIQONYIGYKPPAUWIZQSPXRVAYCRCFXOFMQXAGEWMESGGKHJMTUHUFCZLDGTHBRHFPZLRRCWWDLLVZXMEAQFPQWNVUPQMDDBGDXEXIICEYQVDHYSCBNSQCPRDXJAJMXZGTSMOCWHNUZSAEXYICBUIALJIPYNOATVWHMYE");

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
    msg.setTimeStamp(0.3525070662744275);
    msg.setSource(44035U);
    msg.setSourceEntity(4U);
    msg.setDestination(44843U);
    msg.setDestinationEntity(87U);

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
    msg.setTimeStamp(0.1661647817989501);
    msg.setSource(64542U);
    msg.setSourceEntity(51U);
    msg.setDestination(4253U);
    msg.setDestinationEntity(55U);

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
    msg.setTimeStamp(0.260050606397629);
    msg.setSource(64467U);
    msg.setSourceEntity(22U);
    msg.setDestination(40058U);
    msg.setDestinationEntity(69U);

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
    msg.setTimeStamp(0.4035141306298087);
    msg.setSource(48358U);
    msg.setSourceEntity(223U);
    msg.setDestination(33581U);
    msg.setDestinationEntity(17U);
    msg.op = 83U;
    msg.speed_min = 0.6870514935512605;
    msg.speed_max = 0.5809207627954832;
    msg.long_accel = 0.5914178378045216;
    msg.alt_max_msl = 0.1453583035167425;
    msg.dive_fraction_max = 0.21119229601161027;
    msg.climb_fraction_max = 0.46272450887904926;
    msg.bank_max = 0.1395751522687978;
    msg.p_max = 0.8784343101878389;
    msg.pitch_min = 0.7728338271322427;
    msg.pitch_max = 0.47663415638728834;
    msg.q_max = 0.0187051306393885;
    msg.g_min = 0.2628585707968729;
    msg.g_max = 0.8755856209415942;
    msg.g_lat_max = 0.5352805482069468;
    msg.rpm_min = 0.308694399167203;
    msg.rpm_max = 0.43650269611633163;
    msg.rpm_rate_max = 0.19252300656783572;

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
    msg.setTimeStamp(0.1440074563674426);
    msg.setSource(38231U);
    msg.setSourceEntity(113U);
    msg.setDestination(58937U);
    msg.setDestinationEntity(98U);
    msg.op = 179U;
    msg.speed_min = 0.7576144762915682;
    msg.speed_max = 0.13469411581726154;
    msg.long_accel = 0.024424832169901323;
    msg.alt_max_msl = 0.6167647264346395;
    msg.dive_fraction_max = 0.09010772358834229;
    msg.climb_fraction_max = 0.6900772011773462;
    msg.bank_max = 0.7608505032296835;
    msg.p_max = 0.6123375035115249;
    msg.pitch_min = 0.0025385099585630844;
    msg.pitch_max = 0.10963794799874638;
    msg.q_max = 0.6673998286550644;
    msg.g_min = 0.15468122527395534;
    msg.g_max = 0.2418941921515244;
    msg.g_lat_max = 0.36916479343062314;
    msg.rpm_min = 0.8986949853163977;
    msg.rpm_max = 0.840314575618515;
    msg.rpm_rate_max = 0.03733725906246255;

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
    msg.setTimeStamp(0.9455554771935938);
    msg.setSource(50688U);
    msg.setSourceEntity(224U);
    msg.setDestination(41311U);
    msg.setDestinationEntity(68U);
    msg.op = 211U;
    msg.speed_min = 0.8056309695306821;
    msg.speed_max = 0.5318505460542863;
    msg.long_accel = 0.18481634566792338;
    msg.alt_max_msl = 0.032176751487032695;
    msg.dive_fraction_max = 0.3170472316262556;
    msg.climb_fraction_max = 0.3984114252296719;
    msg.bank_max = 0.1493610229696457;
    msg.p_max = 0.8512353986027422;
    msg.pitch_min = 0.01448739316724068;
    msg.pitch_max = 0.7474692143990159;
    msg.q_max = 0.9521960840398864;
    msg.g_min = 0.42015106997337803;
    msg.g_max = 0.7257570116976306;
    msg.g_lat_max = 0.9047581102245694;
    msg.rpm_min = 0.5400835911674783;
    msg.rpm_max = 0.17856066500134837;
    msg.rpm_rate_max = 0.8842614211628055;

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
    msg.setTimeStamp(0.029062904554917113);
    msg.setSource(27741U);
    msg.setSourceEntity(130U);
    msg.setDestination(16962U);
    msg.setDestinationEntity(10U);

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
    msg.setTimeStamp(0.6072200075074184);
    msg.setSource(35388U);
    msg.setSourceEntity(160U);
    msg.setDestination(59445U);
    msg.setDestinationEntity(209U);

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
    msg.setTimeStamp(0.35140472770368647);
    msg.setSource(45123U);
    msg.setSourceEntity(119U);
    msg.setDestination(54502U);
    msg.setDestinationEntity(40U);

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
    msg.setTimeStamp(0.9988668549877401);
    msg.setSource(34646U);
    msg.setSourceEntity(246U);
    msg.setDestination(39385U);
    msg.setDestinationEntity(40U);
    msg.lat = 0.5375102657443646;
    msg.lon = 0.861624372232682;
    msg.height = 0.46040221610969023;
    msg.x = 0.9417337968484857;
    msg.y = 0.34216756291713957;
    msg.z = 0.6211065101884587;
    msg.phi = 0.6207450495664605;
    msg.theta = 0.49141037772764684;
    msg.psi = 0.6191902682862102;
    msg.u = 0.8948897298373731;
    msg.v = 0.05981336986642094;
    msg.w = 0.9487674144879485;
    msg.p = 0.49932960496187095;
    msg.q = 0.7961708974057379;
    msg.r = 0.1964699624868762;
    msg.svx = 0.8051590671869295;
    msg.svy = 0.3713810378719573;
    msg.svz = 0.8557096688582512;

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
    msg.setTimeStamp(0.4393973089061105);
    msg.setSource(31418U);
    msg.setSourceEntity(145U);
    msg.setDestination(30624U);
    msg.setDestinationEntity(77U);
    msg.lat = 0.9332958577249882;
    msg.lon = 0.560818190161663;
    msg.height = 0.5186560086941409;
    msg.x = 0.8295938346517964;
    msg.y = 0.7837727133133071;
    msg.z = 0.8062955185281556;
    msg.phi = 0.09532605294703;
    msg.theta = 0.352003946883777;
    msg.psi = 0.7703752459736678;
    msg.u = 0.26264157264302535;
    msg.v = 0.5085911121611932;
    msg.w = 0.273389886431432;
    msg.p = 0.990963279441874;
    msg.q = 0.45309152547092113;
    msg.r = 0.2748989531204047;
    msg.svx = 0.778697255971634;
    msg.svy = 0.5901327473049892;
    msg.svz = 0.2567129450701442;

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
    msg.setTimeStamp(0.5867254678878335);
    msg.setSource(18389U);
    msg.setSourceEntity(234U);
    msg.setDestination(52131U);
    msg.setDestinationEntity(197U);
    msg.lat = 0.4110366506332237;
    msg.lon = 0.59158117692996;
    msg.height = 0.22809729061067208;
    msg.x = 0.5675483060608546;
    msg.y = 0.7603249857358331;
    msg.z = 0.31190204672045196;
    msg.phi = 0.27774219734229144;
    msg.theta = 0.18954996058202345;
    msg.psi = 0.9897139022245515;
    msg.u = 0.3029458197270072;
    msg.v = 0.8434173443465715;
    msg.w = 0.27030327388840414;
    msg.p = 0.07029381081536656;
    msg.q = 0.8020501369440484;
    msg.r = 0.5463514862770467;
    msg.svx = 0.8787004630161009;
    msg.svy = 0.25887742152781257;
    msg.svz = 0.8329819313762666;

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
    msg.setTimeStamp(0.0641983731151361);
    msg.setSource(23550U);
    msg.setSourceEntity(72U);
    msg.setDestination(21623U);
    msg.setDestinationEntity(99U);
    msg.op = 132U;
    msg.entities.assign("OLWBQONMRUPVKMXLHDLUPUFCZBBHQIIUEPGSQSGCORGINSMTUZTTHYDYUFTRYHRJPJFKXISVEAJKSHPZXQDDVHLHUZVKAAZLKTFGDFERYETMXJZKECQXJMWMVAQWFJNIPEOFFOEIPIKJANHSYLJRNQPCWGSLCZMOBRWCISIOYBJTVNMDQFKIXHMGBLE");

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
    msg.setTimeStamp(0.8598398003778734);
    msg.setSource(10355U);
    msg.setSourceEntity(47U);
    msg.setDestination(32140U);
    msg.setDestinationEntity(12U);
    msg.op = 144U;
    msg.entities.assign("TYGGUUEAOEJGVOWIOHQMAFKLCEFBAWWCZPRRUSXSXFQOJBZP");

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
    msg.setTimeStamp(0.5649929241503383);
    msg.setSource(32782U);
    msg.setSourceEntity(18U);
    msg.setDestination(48762U);
    msg.setDestinationEntity(151U);
    msg.op = 15U;
    msg.entities.assign("WMUCTWPAYHKYULQAOWCZRETIPOVVGAWRKERIGDYTGPTXEAUJXAXBUXNGSVUMILZLIEZNWXVMN");

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
    msg.setTimeStamp(0.4527566668156905);
    msg.setSource(17058U);
    msg.setSourceEntity(134U);
    msg.setDestination(55787U);
    msg.setDestinationEntity(107U);
    msg.type = 158U;
    msg.speed = 6592U;
    const signed char tmp_msg_0[] = {-106, 80, 94, -14, 112, -9, -1, -103, -50, -11, 98, -123, 92, -40, 97, 114, -77, -68, -123, 16, -116, -48, -115, 43, -32, 62, -124, -75, 46, 96, -9, 116, -1, -71, -93, 114, 125, -40, 18, -35, -57, 40, 120, 20, -75, 53, -77, 116, -51, -82, -82, 114, 103, 77, -52, -51, 89, 92, -94, -43, 38, -19, 69, -77, -47, -41, 75, -40, 90, 62, 19, 81, 32, 0, 0, 111, -123, -77, 16, -73, -34, 117, 79, 49, -35, 56, -120, 109, 60, 10, -21, -39, -20, -63, -32, 57, -98, -2, 95, -12, -13, 111, -6, -104, 70, -14, -115, 116, 34, -21, -12, -18, 66, -66, 83, -28, -74, -89, 38, -17, -76, 65, -16, 73, -77, 97, -97, -128, -11, -4, 94, -116, -118, -51, 111, 102, -93, -93, -54, -8, 78, -111, -38, 66, 45, -22, -35, -25, -109, 5, 5, 87, -81, 111, -70, -61, 108, -81, -111, -56, 78, 108, 84, -35, 58, 29, -28, -24, -63, -66, 112, 99, -54, -99, -21, 58, 113, -87, -99, -99, -23, 114, 11, -122, 11, 109, 84, 36, -92, -3, -94, -15, -26, -4, 20, -78, 40, 54, 108, -116, -2, 115, 73, -94, -11, 1, 106, 107, -2, -123, 86, -101, -105, -56, -125, 42, -112, 58, 14, -49, 76, -18, 108, 60, 80, -101, 83, 31, 26, 53, 39};
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
    msg.setTimeStamp(0.06543180431854789);
    msg.setSource(5643U);
    msg.setSourceEntity(245U);
    msg.setDestination(54514U);
    msg.setDestinationEntity(237U);
    msg.type = 152U;
    msg.speed = 19050U;
    const signed char tmp_msg_0[] = {-37, 10, -114, 126, 62, -112, 76, 9, -85, -122, 3, -55, -122, -35, 98, 30, 118, -82, 4, -39, 32, -89, 8, 12, 72, -23, 89, -71, -116, 45, 91, 85, -50, -21, 96, 79, -94, -84, 120, 40, -122, 51, 118, -44, -94, -123, 96, 28, -115, -104, -20, 84, 16, -31, -38, 42, 25, 107, 60, 18, 17, -101, -123, 88, -104, 19, -101, 26, -47, -93, -62, 113, 124, -104, 121, 62, -65, -50, -94, 68, 89, -123, -53, 44, -48};
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
    msg.setTimeStamp(0.2785021786144901);
    msg.setSource(22485U);
    msg.setSourceEntity(181U);
    msg.setDestination(13404U);
    msg.setDestinationEntity(193U);
    msg.type = 240U;
    msg.speed = 58712U;
    const signed char tmp_msg_0[] = {-21, -119, 30, 22, -80, 68, -82, -107, 92, -61, -70, -49, 86, 31, 81, 16, -39, -98, -8, 23, 54, 115, 14, -9, -9, -60, -94, 110, 123, -108, -117, -123, -70, 50, -12, -31, 66, 106, 56, -66, -38, 46, -127, -2, -122, 113, 57, -56, -25, -87, 20, -105, -106, -71, 30, 12, 53, -96, -124, 34, -122, 78, -64, 106, 3, 36, -28, 122, 57, 69, 82, -10, -5, -18, -85, -89, 31, 48, 20, 96, -30, 113, 65, -86, 73, -104, -19, 116, 61, 57, 35, 61, -23, 112, -76, -82, 23, -106, 123, -101, -73, -39, -122, 105, -49, -107, 45, -90, -21, 42, -50, -91, 25, -1, 122, -18, 12, 36, 45, -91, -90, -54, -85, 96, -121, 114, -41, 44, 102, 73, 31, 95, -99, 9, 111, 84, 83, -100, 17, 123, 69, -45, 35, -23, 24, -117, -16, -100, -43, 103, 110, -77, -4, 63, 18, -44, 55, 0, 120, 126, 102, -113, -114, -11, -127, 38, 78, 43, 73, 99, -60, 61, 113, 44, -119, -38, 69, 81, 71, -18, -52, -108, 105, 41, -126, 36, 111, -30, 94, -12, -105, 48, 0, 126, 90, -110, 110, 11};
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
    msg.setTimeStamp(0.11882431747190492);
    msg.setSource(51658U);
    msg.setSourceEntity(36U);
    msg.setDestination(41404U);
    msg.setDestinationEntity(214U);
    msg.op = 38U;
    msg.tas2acc_pgain = 0.7804595139985109;
    msg.bank2p_pgain = 0.9987500758803055;

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
    msg.setTimeStamp(0.8681377141272789);
    msg.setSource(6873U);
    msg.setSourceEntity(90U);
    msg.setDestination(2812U);
    msg.setDestinationEntity(70U);
    msg.op = 227U;
    msg.tas2acc_pgain = 0.1348765266735481;
    msg.bank2p_pgain = 0.5086572232036041;

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
    msg.setTimeStamp(0.7420169624274651);
    msg.setSource(21928U);
    msg.setSourceEntity(191U);
    msg.setDestination(62929U);
    msg.setDestinationEntity(194U);
    msg.op = 177U;
    msg.tas2acc_pgain = 0.9564624365075537;
    msg.bank2p_pgain = 0.18504314307944925;

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
    msg.setTimeStamp(0.049922882764012466);
    msg.setSource(36752U);
    msg.setSourceEntity(101U);
    msg.setDestination(57899U);
    msg.setDestinationEntity(179U);
    msg.available = 2894340560U;
    msg.value = 61U;

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
    msg.setTimeStamp(0.6385948009852529);
    msg.setSource(7285U);
    msg.setSourceEntity(236U);
    msg.setDestination(11096U);
    msg.setDestinationEntity(70U);
    msg.available = 4277263145U;
    msg.value = 205U;

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
    msg.setTimeStamp(0.603095990512192);
    msg.setSource(47502U);
    msg.setSourceEntity(12U);
    msg.setDestination(22969U);
    msg.setDestinationEntity(145U);
    msg.available = 320514170U;
    msg.value = 206U;

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
    msg.setTimeStamp(0.24925785168540804);
    msg.setSource(16555U);
    msg.setSourceEntity(249U);
    msg.setDestination(34275U);
    msg.setDestinationEntity(114U);
    msg.op = 82U;
    msg.snapshot.assign("RZPOVHLMTJNNGAIBRZNTLQDNOYAYWOEQCDUXTYKJKGEXCBPWVLHBNEHIPLPGDMONFQEDIMIDNRZXASACHCVGYTOIWAARKRTAAYZLSCDRTHNXTQCPKIZVJXBSMJHAZPPYKZWMZMSBYZQYGNOQZMSKSQPWKRWFWQOHOIUFDDRXWRQWJIQESCGPEGVXLKRBXULDSUVGHJLFVJBKULJEOFIWTUXUFO");
    IMC::GpsFixRtk tmp_msg_0;
    tmp_msg_0.validity = 53871U;
    tmp_msg_0.type = 81U;
    tmp_msg_0.tow = 3395511619U;
    tmp_msg_0.base_lat = 0.8451837251307854;
    tmp_msg_0.base_lon = 0.5492725398379563;
    tmp_msg_0.base_height = 0.5070450674215442;
    tmp_msg_0.n = 0.15487912456071484;
    tmp_msg_0.e = 0.09147321331317282;
    tmp_msg_0.d = 0.35448582489235136;
    tmp_msg_0.v_n = 0.4264698506874056;
    tmp_msg_0.v_e = 0.87337728703015;
    tmp_msg_0.v_d = 0.07238767419594372;
    tmp_msg_0.satellites = 187U;
    tmp_msg_0.iar_hyp = 19563U;
    tmp_msg_0.iar_ratio = 0.08157829718631437;
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
    msg.setTimeStamp(0.38914835579214124);
    msg.setSource(50191U);
    msg.setSourceEntity(192U);
    msg.setDestination(49204U);
    msg.setDestinationEntity(91U);
    msg.op = 106U;
    msg.snapshot.assign("XLADNHORNXZSPZQNDAUCSNIGHQTFWNJLESEUDOEVGNKDRWQFHQHJPPCHLWKTYEEEQYTGGWOB");
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.657863720914346;
    tmp_msg_0.y = 0.5942175666879183;
    tmp_msg_0.z = 0.07493693543290991;
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
    msg.setTimeStamp(0.43076221168012185);
    msg.setSource(32587U);
    msg.setSourceEntity(98U);
    msg.setDestination(47781U);
    msg.setDestinationEntity(213U);
    msg.op = 1U;
    msg.snapshot.assign("PYBYDSMTWROVTHYAJRGSMQHUBMIJQLQZXDUEBJKDCJIDCVWSWOZDNVHPOATAUJCAFOIUNPCJMFECIBYFBPVAQNKZFPORMAAMERTCHIZCCHLYRNYKTUIHXVKSRNGLSLFGXQERLMJWNI");
    IMC::ADCPBeam tmp_msg_0;
    tmp_msg_0.vel = 0.3706117341828684;
    tmp_msg_0.amp = 0.33818933186161093;
    tmp_msg_0.cor = 151U;
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
    msg.setTimeStamp(0.9862789591553196);
    msg.setSource(35331U);
    msg.setSourceEntity(26U);
    msg.setDestination(59502U);
    msg.setDestinationEntity(13U);
    msg.op = 250U;
    msg.name.assign("MFGKDQTKVILDEQVQGXBODAIZFNFLGKBCWIZXPIHCYUHESPALJDCZETXTQWEAUBQMVAUVFLMQUNSREIUUABKGOMZTHOZNVWLWDXUKTCDWEOBMPCEWTXPYEXTNTNRBJFRNAWYJSFNG");

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
    msg.setTimeStamp(0.02871390915489369);
    msg.setSource(11419U);
    msg.setSourceEntity(200U);
    msg.setDestination(1317U);
    msg.setDestinationEntity(12U);
    msg.op = 111U;
    msg.name.assign("JIZWQKGKWGPOKWUMYBZJAPRFDXBJIHSGBDFAHUQAKQSTMGIGETIPDZTMJXJHQPVOXRGWSFFBUEUOYNYXLFHQDMFBSKUFZWOVILPCNBRGWVAFOVMJXHADPSXSLNJPZFVOLATOCDYMDLHTTPIKKDEXLYQ");

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
    msg.setTimeStamp(0.04547587583075419);
    msg.setSource(61649U);
    msg.setSourceEntity(226U);
    msg.setDestination(44433U);
    msg.setDestinationEntity(102U);
    msg.op = 233U;
    msg.name.assign("OFYEUZPPNVHGSNONJJCU");

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
    msg.setTimeStamp(0.7050004194997428);
    msg.setSource(16926U);
    msg.setSourceEntity(123U);
    msg.setDestination(12791U);
    msg.setDestinationEntity(151U);
    msg.type = 33U;
    msg.htime = 0.4573262685679996;
    msg.context.assign("NKHQJOCLTM");
    msg.text.assign("KQCOOPZGJNUUVIMYDJRYKTRIOUONGPFELYKSQHCWCMFQPAEGFHJVTHVYTMHSNXLQBLYXIRGCMSWVQDWNWGZEXTBHOYAXRKWISIETLJPFZLZIUDELJFFVVOKOWBAAFASKHBSDDBGWZYIIZHFKVDPHVZYNTQZYDDNUUHBCXTQHDAWMBLSEXCJDSCARMUNQC");

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
    msg.setTimeStamp(0.9068812827421548);
    msg.setSource(43274U);
    msg.setSourceEntity(128U);
    msg.setDestination(35665U);
    msg.setDestinationEntity(50U);
    msg.type = 45U;
    msg.htime = 0.9615393668287103;
    msg.context.assign("BBACIZQUPJWTPHDCFFZNLMICZVCNKOIRGKYHVOAXUHLPCNQHSRVKSDLCFMVXPDZGAOFVMONUDQQIKIMZIXTATBFCDLXNMLVFMPHPYVXPRJVOORNQGEDOWTUPPBYMKJEBZWSKYOJ");
    msg.text.assign("HXLHEELGWJDAZMXPFNDSTDTHSPHWJZZACUJGAPMKEKVYLBBCHRAEMXAOXGOJITIZSPFRNGKQXQBELLWMDPNCVODEFYUXJNIIQYDFWUCBKNNPYSMHZLVTRCIEOUKGIUEDBRKNXHXVWBFZYABIEBWCKKWTHOYIGZNQMSNBOFRROLYXTRPFFMSTSGVUABVAQVRPYRJQQCFLJTIDTSFEDQDUJYXHAWPMSCNCYZRCGPSOGMZWHVQMZ");

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
    msg.setTimeStamp(0.9841498190797889);
    msg.setSource(63414U);
    msg.setSourceEntity(1U);
    msg.setDestination(13251U);
    msg.setDestinationEntity(233U);
    msg.type = 215U;
    msg.htime = 0.18858954935821148;
    msg.context.assign("PJNHXYMJUXSXEDCJMLWQC");
    msg.text.assign("NVOSOATDYOPSQHLTBCROALPWDGWIVRNLXXURENMEWEIGBVOCXMMYBJSWOKEYDHRPQFQPFZHQXKUHWVUWTUQTDHZNHRPFTBNKJKWPPDBCAJOGVVOZBILTIMQTCJLPZEINQXKAWEDVRRUMLXYFGIXRGABVGZQELKBXSFYIWPANSBYTCIYWCDJZAEMHXSCEDBCQUJMMY");

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
    msg.setTimeStamp(0.8644429950347876);
    msg.setSource(5459U);
    msg.setSourceEntity(62U);
    msg.setDestination(59796U);
    msg.setDestinationEntity(124U);
    msg.command = 41U;
    msg.htime = 0.8693991125671531;

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
    msg.setTimeStamp(0.5211840534468622);
    msg.setSource(9524U);
    msg.setSourceEntity(107U);
    msg.setDestination(10442U);
    msg.setDestinationEntity(236U);
    msg.command = 229U;
    msg.htime = 0.04341439380921541;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 53U;
    tmp_msg_0.htime = 0.08662303774517388;
    tmp_msg_0.context.assign("RFGTQWQGJASRBGETEYGIRNQDFVXZQVYFSZFMTLUXEDTNGUOLIPBXGVCAWMWDZDJNZXCIHDMJHSUYZHBTGJHZLLQBXVELYKDAPLKKINKSBSNUESACFIX");
    tmp_msg_0.text.assign("XBSVRUIUSHKWIDHNFWYQNMRXGGCROKVJINDNJCETFPMNBUTSHRRQGBKNQXFZQJMXQHJAZSZYVWEXGPTERTL");
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
    msg.setTimeStamp(0.582005224677852);
    msg.setSource(26140U);
    msg.setSourceEntity(133U);
    msg.setDestination(26503U);
    msg.setDestinationEntity(76U);
    msg.command = 79U;
    msg.htime = 0.75009516729006;

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
    msg.setTimeStamp(0.19798510456668417);
    msg.setSource(55059U);
    msg.setSourceEntity(60U);
    msg.setDestination(39435U);
    msg.setDestinationEntity(160U);
    msg.op = 31U;
    msg.file.assign("QPSXWJNKTLEPKLHGRYYRWUZKURCYDLKSBGWBYMUQQLWFADJZWEOJTOWBDHRTKFCMUHUBKTPXWAZMNYTVKPXEBJODJGYVXRSNUNHFAZTQECVURYIBKEMMQXXILACDZVZWFQXUNCTDOTYHIAVEGOOFBOPMJIQJOQSEXKIEBMQAAIHMCO");

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
    msg.setTimeStamp(0.9815848509592847);
    msg.setSource(47143U);
    msg.setSourceEntity(106U);
    msg.setDestination(64900U);
    msg.setDestinationEntity(126U);
    msg.op = 219U;
    msg.file.assign("NXGJOHGZUOCNWVHWHBFAXMXHMPODVVWNPOHAUZTARKOLHQAEHUPNZRCGKAFLFIECW");

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
    msg.setTimeStamp(0.8035940052592241);
    msg.setSource(24897U);
    msg.setSourceEntity(14U);
    msg.setDestination(52482U);
    msg.setDestinationEntity(64U);
    msg.op = 166U;
    msg.file.assign("MWZDQQTTAFVMJRHGLVIXSKYIKLTPYRHVWWOWDHBEDFNKFAZTIQVOYEGRIKELZZOHULRBWFOBNMPAFQRLJGMHRLVCASOBGYNJXFABOCCUMMUCTAVTCTBYMCNFNLSXGNEMJZSKZZSXRXEIZXFUWESUJMKKOHOHDIBYQEVRZQSYDPKENZQXUNTGLGFGYUXPJUEDVXLPHGJSJJAPUQPWQSBCPIYQTTNLB");

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
    msg.setTimeStamp(0.6679634675499327);
    msg.setSource(14197U);
    msg.setSourceEntity(27U);
    msg.setDestination(61544U);
    msg.setDestinationEntity(25U);
    msg.op = 236U;
    msg.clock = 0.011960489835784682;
    msg.tz = 27;

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
    msg.setTimeStamp(0.8737212307129077);
    msg.setSource(29500U);
    msg.setSourceEntity(50U);
    msg.setDestination(7875U);
    msg.setDestinationEntity(142U);
    msg.op = 138U;
    msg.clock = 0.617148243052541;
    msg.tz = -27;

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
    msg.setTimeStamp(0.48106804202156694);
    msg.setSource(59930U);
    msg.setSourceEntity(20U);
    msg.setDestination(46962U);
    msg.setDestinationEntity(220U);
    msg.op = 121U;
    msg.clock = 0.8174605007072885;
    msg.tz = 9;

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
    msg.setTimeStamp(0.48992328667640384);
    msg.setSource(58609U);
    msg.setSourceEntity(47U);
    msg.setDestination(42048U);
    msg.setDestinationEntity(57U);
    msg.conductivity = 0.5792003679602737;
    msg.temperature = 0.3943934116109242;
    msg.depth = 0.6898626975700461;

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
    msg.setTimeStamp(0.9553683068991733);
    msg.setSource(12847U);
    msg.setSourceEntity(149U);
    msg.setDestination(18715U);
    msg.setDestinationEntity(72U);
    msg.conductivity = 0.5333667862076534;
    msg.temperature = 0.8459478502569748;
    msg.depth = 0.8268659026899785;

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
    msg.setTimeStamp(0.024470325525526526);
    msg.setSource(3428U);
    msg.setSourceEntity(88U);
    msg.setDestination(57263U);
    msg.setDestinationEntity(153U);
    msg.conductivity = 0.013964954823094455;
    msg.temperature = 0.2499408857828157;
    msg.depth = 0.6242996062006857;

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
    msg.setTimeStamp(0.24462345129254237);
    msg.setSource(51144U);
    msg.setSourceEntity(251U);
    msg.setDestination(54469U);
    msg.setDestinationEntity(75U);
    msg.altitude = 0.7847638222120618;
    msg.roll = 21071U;
    msg.pitch = 29444U;
    msg.yaw = 34052U;
    msg.speed = 15799;

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
    msg.setTimeStamp(0.03412720366253219);
    msg.setSource(37156U);
    msg.setSourceEntity(243U);
    msg.setDestination(27822U);
    msg.setDestinationEntity(141U);
    msg.altitude = 0.003975770229483033;
    msg.roll = 39250U;
    msg.pitch = 57535U;
    msg.yaw = 63557U;
    msg.speed = 25970;

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
    msg.setTimeStamp(0.2940502809211044);
    msg.setSource(43693U);
    msg.setSourceEntity(141U);
    msg.setDestination(20545U);
    msg.setDestinationEntity(225U);
    msg.altitude = 0.5132278168125654;
    msg.roll = 58164U;
    msg.pitch = 17991U;
    msg.yaw = 27780U;
    msg.speed = -19182;

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
    msg.setTimeStamp(0.4278095334399823);
    msg.setSource(16276U);
    msg.setSourceEntity(196U);
    msg.setDestination(775U);
    msg.setDestinationEntity(148U);
    msg.altitude = 0.407851131057942;
    msg.width = 0.34062999126833693;
    msg.length = 0.4850128571361929;
    msg.bearing = 0.5452130765848577;
    msg.pxl = 4331;
    msg.encoding = 224U;
    const signed char tmp_msg_0[] = {-65, 65, 52, -82, 93, -80, 69, -74, -100, 11, 48, -18, 26, 102, 104, 35, 120, 13, 54, -99, -72, -117, -37, -89, -80, -29, -66, -107, 115, -113, 103, -111, -54, -26, 114, -78, -116, 100, -8, 98, 54, 18, 88, -63, 16, 43, -123, -120, -17, 10, -46, -57, -16, 51, -49, -123, -106, 64, 12, 46, -93, 96, 66, -89, 17, 63, -121, 89, -7, 112, 115, 79, 77, -82, -8, -124, 94, -124, -57, 111, 92, -71, 96, 73, -41, -89, -62, -126, 3, 6, 16, 18, -116, 2, -65, -119, 122, 68, -16, 26, 37, -15, 13, -71, 9, -11, -27, -126, 37, 29, -61, -115, 118, 62, 1, 6, 23, -97, -23, -127, 65, 50, -14, 112, -14, -94, -59, 68, -17, 16, 96, -29, -8, -56};
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
    msg.setTimeStamp(0.8310600025191482);
    msg.setSource(53186U);
    msg.setSourceEntity(41U);
    msg.setDestination(62513U);
    msg.setDestinationEntity(15U);
    msg.altitude = 0.9506962378060456;
    msg.width = 0.27611064037659816;
    msg.length = 0.6582000420727938;
    msg.bearing = 0.7940966322331497;
    msg.pxl = 23035;
    msg.encoding = 174U;
    const signed char tmp_msg_0[] = {86, 106, 9, 99, 12, 87, -96, 82, -61, 40, -6, 26, 78, -94, -101, -89, 109, -82, 119, 33, 63, -124, 70, 124, -84, -98, -55, 82, -54, -91, -21, 111, 58, 48, -6, 106, -95, 0, 57, 88, -57, 17, -100, 112, -44, 111, 51, -7, -110, -30, 33, -77, -21, 83, -9, -90, -75, -85, -59, -93, -15, 58, 18, -44, -77, -88, -36, -118, -66, -29, -27, -68, -50, -55, -63, 43, 38, -85, -39, 12, -104, 17, 106, 40, 52, 72, -98, 89, 40, 79, 62, -103, -53, 87, 12, -19, 5, 92, 17, 119, 35, 9, 41, 49, -119, -64, 31, -20, 39, -19, 73, 72, 38, 21, -99, -29, -20, 38, 8, -47, 32, 33, 13, -118, -89, -120, 14, -15, 62, -55, 107, 7, -8, -49, -70, 88, -67, 54, -120, -22, -36, 102, 93, 35, -17, -78, 56, -16, 90, 1, -118, -114, 24, 35, -53, -116, -11, 2, 94, -8};
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
    msg.setTimeStamp(0.28314663918265925);
    msg.setSource(65119U);
    msg.setSourceEntity(20U);
    msg.setDestination(22777U);
    msg.setDestinationEntity(83U);
    msg.altitude = 0.4267187998794745;
    msg.width = 0.4043375108966525;
    msg.length = 0.30714825668001755;
    msg.bearing = 0.5803206037112927;
    msg.pxl = -16143;
    msg.encoding = 105U;
    const signed char tmp_msg_0[] = {-71, 60, -31, 98, -7, 65, -93, 40, 71, -54, 83, -103, 6, -75, 69, -107, -38, 125, -105, 15, 24, -93, 98, -122, -30, -47, -73, -84, -103, 82, 94, -29, -65, -22, -126, -114, 25, 115, 80, 116, 11};
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
    msg.setTimeStamp(0.16230386790182083);
    msg.setSource(14919U);
    msg.setSourceEntity(185U);
    msg.setDestination(58139U);
    msg.setDestinationEntity(89U);
    msg.text.assign("RDZMFVZBEJLDVBMFLQYPANHCMJJQZXLFPHWANQOGHNWQRSXKJZIFJAKSKHUYWRZQULXDOGPCOYJPIGLCRTVXACZMZNVONJYDTWESEJNOIIMVMLRODGXTRWCUPMQOXASIGKIOLZYUPTHUAENCFIOHYBDBLEKIPZWSCEUTPSBIMYHXVGGWXFNYFRATXDTCHCETWUPDC");
    msg.type = 136U;

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
    msg.setTimeStamp(0.5307840749072258);
    msg.setSource(10346U);
    msg.setSourceEntity(118U);
    msg.setDestination(27217U);
    msg.setDestinationEntity(186U);
    msg.text.assign("UGOBYHMZAAMHADODIHNVYDFJEOFVQCKJSTGCOUZSKXHDBAEJKUULQXYWFKRBITXWJSZNIWHBRCHNGPSPCEMSZCWIQNFYMPRNYGKZSFRYIQETCIQBWLDKMWXESTIDBTJJLJGWOBFAZKJLLIVDGXXTGFKWVHPTLIAPCRXFABEPRKHFRLEYQAGURXOMHAYQEZDZNCQVQMOPOMYGUNGVRHTXENBVITFOC");
    msg.type = 84U;

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
    msg.setTimeStamp(0.5539172612791644);
    msg.setSource(11082U);
    msg.setSourceEntity(128U);
    msg.setDestination(30544U);
    msg.setDestinationEntity(91U);
    msg.text.assign("VIZHIIQOJUSMYZHXXUKBFHOGFXCFQKDDNLVLQVLXMOBTSQUAHVQRUDPAMNYXARCWJEYLLUPSBWGTMLWSZLDIAEKXHCEVSANKFMPYNBMJDZANITYQGPKWYCQCOZIEDQBZZHZYVIGUVCONKGXSSMRRKPSLBKERCOKEWGFMOPTAWNWDCMZIDBHJRYWBTJITRONMZEJGFEYWTUNVGFUISAKGGPCDOR");
    msg.type = 183U;

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
    msg.setTimeStamp(0.47161316545567056);
    msg.setSource(46875U);
    msg.setSourceEntity(241U);
    msg.setDestination(25030U);
    msg.setDestinationEntity(206U);
    msg.parameter = 185U;
    msg.numsamples = 141U;
    msg.lat = 0.866927051283693;
    msg.lon = 0.5490937512543066;

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
    msg.setTimeStamp(0.1638496577284354);
    msg.setSource(20438U);
    msg.setSourceEntity(161U);
    msg.setDestination(52075U);
    msg.setDestinationEntity(80U);
    msg.parameter = 244U;
    msg.numsamples = 60U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 54542U;
    tmp_msg_0.avg = 0.8423298887715823;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.8487593086965685;
    msg.lon = 0.7534158910021965;

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
    msg.setTimeStamp(0.6151773324969924);
    msg.setSource(42530U);
    msg.setSourceEntity(155U);
    msg.setDestination(21187U);
    msg.setDestinationEntity(179U);
    msg.parameter = 83U;
    msg.numsamples = 26U;
    msg.lat = 0.6911876841204618;
    msg.lon = 0.7369153842057489;

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
    msg.setTimeStamp(0.2452926614267018);
    msg.setSource(29946U);
    msg.setSourceEntity(38U);
    msg.setDestination(39426U);
    msg.setDestinationEntity(1U);
    msg.depth = 51988U;
    msg.avg = 0.0780711464216437;

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
    msg.setTimeStamp(0.09835331539417358);
    msg.setSource(8863U);
    msg.setSourceEntity(198U);
    msg.setDestination(42393U);
    msg.setDestinationEntity(52U);
    msg.depth = 62123U;
    msg.avg = 0.6521168654103747;

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
    msg.setTimeStamp(0.40721494308467787);
    msg.setSource(62986U);
    msg.setSourceEntity(55U);
    msg.setDestination(57099U);
    msg.setDestinationEntity(14U);
    msg.depth = 2343U;
    msg.avg = 0.006723569680511354;

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
    msg.setTimeStamp(0.09257785124976481);
    msg.setSource(40972U);
    msg.setSourceEntity(111U);
    msg.setDestination(23131U);
    msg.setDestinationEntity(244U);

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
    msg.setTimeStamp(0.7697401876783032);
    msg.setSource(49428U);
    msg.setSourceEntity(121U);
    msg.setDestination(62691U);
    msg.setDestinationEntity(190U);

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
    msg.setTimeStamp(0.6656666683705575);
    msg.setSource(30504U);
    msg.setSourceEntity(195U);
    msg.setDestination(6891U);
    msg.setDestinationEntity(63U);

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
    msg.setTimeStamp(0.735574767402215);
    msg.setSource(54001U);
    msg.setSourceEntity(195U);
    msg.setDestination(30561U);
    msg.setDestinationEntity(137U);
    msg.sys_name.assign("ZLBYMGENRUZHZUDWQNVCFBWDJSCEVTUROREGMIAAWLZUBIQRRMTUEMONYQTSMRRBDGKIHCKVLPEADNBHZXXIPRQPOIXLBSXKUDCXTEXDAKVEVPDEMFTYVHCPEYTJTMCKJOVZ");
    msg.sys_type = 193U;
    msg.owner = 3933U;
    msg.lat = 0.6575248216670133;
    msg.lon = 0.9855530250312325;
    msg.height = 0.24082925609621808;
    msg.services.assign("RJIMKJIVBGVXYUDLAXXTQRRUJCBBWMVFTNXYYVOMGWCBEDJEFAWUHUGVYBAYEMXQIYRQOOPIELSYGJPSPJLIOYEGLAMKQOKTTCLTJRDQCBERPVUNWZXHFXRBXTZDLZAANKHXBSASFISNQROJCKQNVGKLIALNOGZWZDUQCPMMAEPUKFUNNOFKWJQWTOKM");

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
    msg.setTimeStamp(0.6990752890263033);
    msg.setSource(33826U);
    msg.setSourceEntity(60U);
    msg.setDestination(34119U);
    msg.setDestinationEntity(115U);
    msg.sys_name.assign("TWJOIPUFKWEYNOSAEHXDFJWPRVCYCGZDFS");
    msg.sys_type = 152U;
    msg.owner = 32287U;
    msg.lat = 0.5707714717749832;
    msg.lon = 0.48645674552001006;
    msg.height = 0.3126527332397979;
    msg.services.assign("GDLPPBORXYFDQPVLYAEXKTKSXUZGFJGNEMAVZZYTKCOBHNASTZAHNTOWCVUSEJMWBVWMNCMFVKXHXALWVIURYKKYGSIEYLNUHCPHOTMDPNDAEYIBVCTWORJINFBPJCDKEIHWQRGYZJACZDLEWKCFBDOACAGPUDIWRFXWZICEOOBRJKARGUNENSLQMJVQTHZMXGYDJKMUPJQTSTUBRQPQSRUVHHLSNSESXFXZMVQFBMIFHLFG");

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
    msg.setTimeStamp(0.7674115406677732);
    msg.setSource(31108U);
    msg.setSourceEntity(235U);
    msg.setDestination(12078U);
    msg.setDestinationEntity(120U);
    msg.sys_name.assign("FCCDPPTHNPKWAGSWMSCDZCGOEJMIJAWRBSXUJZXRGYHOMTBFRGQHMTPPUZCKOWQNZFXKFLVTVWANPGWNJNULQKYRQ");
    msg.sys_type = 162U;
    msg.owner = 52323U;
    msg.lat = 0.7433910107560494;
    msg.lon = 0.28730982135373084;
    msg.height = 0.3842146268662382;
    msg.services.assign("MODXKWEKXSSAUJGDEFWYOVQNVLPGTZWYFLCWPFLRRIJGBAQCTIGXIEDVDABBAQHBPAEYFJADMBSVEENXSVZZQNEOZHYFTPXIXGOJCSFKBBQWVSIRYCWVIBCDDLLUQNYMWQHTPRHGKSLLZVEIQKRNGMBDGTJLWWZYTUZHXVNTDMRJPWZZONTNDUTPCCMIOAHESVUFREJZUKFSXMBGMNYKRUILOOMPHHUKJFJHAFA");

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
    msg.setTimeStamp(0.08043408619687809);
    msg.setSource(6604U);
    msg.setSourceEntity(47U);
    msg.setDestination(60263U);
    msg.setDestinationEntity(117U);
    msg.service.assign("LNTTRQLCGANTCSFHSNHBFJFPMUVZMIHKVSPJIPNTIMKKOQIJLXZFTLFNEOJUCMIYKRWBRDKXABYIADBJTUNZUAGHEHQDXRWRBAODVBVNEVTVHYAFUSJICYVQDWEFMZFKJQOTNXACZCWOPSCGAEWQKPYOGUWXDMEXSJWTWWPVISPJXFUZC");
    msg.service_type = 49U;

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
    msg.setTimeStamp(0.4310818924356714);
    msg.setSource(18315U);
    msg.setSourceEntity(244U);
    msg.setDestination(2961U);
    msg.setDestinationEntity(110U);
    msg.service.assign("OKXCNQKCEKQATDXSCPNUZMVZAGRYINSCTKRFYGNKDIBEJPEMKRTQBMMQRIPEORHESACMLUPWYXZFBQTXHDOJLHTENLDMBXSONMHBXAZHJFZWWJILWEUVZWYOUZAAQGSRCDKEMGKPODACVXGYLAENCAIHPFDXSRFVBFJFPKYRLGHCPWJSTQNKVGHVZOJY");
    msg.service_type = 84U;

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
    msg.setTimeStamp(0.2438083860133582);
    msg.setSource(26416U);
    msg.setSourceEntity(151U);
    msg.setDestination(15255U);
    msg.setDestinationEntity(236U);
    msg.service.assign("UNKCOMFQSMYRWCTVWWZVDTLDEZLMBFACDBXGDGUGLRNCRBNDVDSPJJWPWNTMSQERBARNTSOOVOQNJUPBHXAAMHHUPGARDSXFXQZA");
    msg.service_type = 46U;

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
    msg.setTimeStamp(0.7897832013519376);
    msg.setSource(40500U);
    msg.setSourceEntity(119U);
    msg.setDestination(56672U);
    msg.setDestinationEntity(139U);
    msg.value = 0.36730168250220196;

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
    msg.setTimeStamp(0.9717504153890558);
    msg.setSource(19324U);
    msg.setSourceEntity(86U);
    msg.setDestination(42043U);
    msg.setDestinationEntity(53U);
    msg.value = 0.07897047309382155;

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
    msg.setTimeStamp(0.7023695126773755);
    msg.setSource(63032U);
    msg.setSourceEntity(177U);
    msg.setDestination(24571U);
    msg.setDestinationEntity(58U);
    msg.value = 0.10849834410030512;

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
    msg.setTimeStamp(0.8823598005819694);
    msg.setSource(8360U);
    msg.setSourceEntity(173U);
    msg.setDestination(51959U);
    msg.setDestinationEntity(5U);
    msg.value = 0.982669820046003;

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
    msg.setTimeStamp(0.12401312501527673);
    msg.setSource(31828U);
    msg.setSourceEntity(175U);
    msg.setDestination(30727U);
    msg.setDestinationEntity(20U);
    msg.value = 0.13798159256589382;

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
    msg.setTimeStamp(0.06786324808517297);
    msg.setSource(55107U);
    msg.setSourceEntity(46U);
    msg.setDestination(21764U);
    msg.setDestinationEntity(72U);
    msg.value = 0.524506788350807;

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
    msg.setTimeStamp(0.9486568629841301);
    msg.setSource(21725U);
    msg.setSourceEntity(68U);
    msg.setDestination(37012U);
    msg.setDestinationEntity(186U);
    msg.value = 0.7478777886029245;

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
    msg.setTimeStamp(0.31306157234525156);
    msg.setSource(32034U);
    msg.setSourceEntity(168U);
    msg.setDestination(48258U);
    msg.setDestinationEntity(163U);
    msg.value = 0.7989812038443067;

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
    msg.setTimeStamp(0.6466858010653905);
    msg.setSource(26185U);
    msg.setSourceEntity(156U);
    msg.setDestination(26304U);
    msg.setDestinationEntity(181U);
    msg.value = 0.8430444485420756;

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
    msg.setTimeStamp(0.5882384429860558);
    msg.setSource(5426U);
    msg.setSourceEntity(46U);
    msg.setDestination(1876U);
    msg.setDestinationEntity(74U);
    msg.number.assign("QABHRFCXHJJFFFVRVMDLHHJYMTKRZTNELZMVEUEBUGWSWLJTIPHZFJGBQADIBOMAOAOCKGDRXNTADJEZQBTNXMKWJVWIENYCUIBKELUMLXEUS");
    msg.timeout = 64654U;
    msg.contents.assign("ZHUGJNPKIFZUKETUHALZUJLWZEHGORMKXIJCPWQDHRUXUNXBGCGLAXBYDS");

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
    msg.setTimeStamp(0.571529544097529);
    msg.setSource(1278U);
    msg.setSourceEntity(214U);
    msg.setDestination(32960U);
    msg.setDestinationEntity(159U);
    msg.number.assign("WVCXPFNOBBYKXAEIRUGETCGDMHWYFRQANFDZDSHWMBRYGGJJRABRZKPHLUVVYQOZWLQQPZHDAUHVXKNDXCTMZIPFYSWKCIQULFHKTSIKDNEEESBRZMXDNMLHWNJIHLMDZXLABCNLMWPLTZXOGNQGUXKURFVCIEJBH");
    msg.timeout = 20133U;
    msg.contents.assign("EXGQIHNGOELQZDWGTIATKULHEVAJMXQIMTMOUCOSPYONPMQJKYVPUXFCLVXVDVHFOCFUYGWTXDZDROPTWNRARKAZUMDBHUIDZBHKIYQEYZNFKCJMWRRB");

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
    msg.setTimeStamp(0.27154907836577413);
    msg.setSource(35232U);
    msg.setSourceEntity(4U);
    msg.setDestination(49712U);
    msg.setDestinationEntity(190U);
    msg.number.assign("SXMRVHECGLQIBLWJZSWCUIYYXGUDGFCMNBFYSLMRPHLWGWDUGQEMNZNWOLNNLXFDXXVSJCFAITSATLCMFIJRYJTPMTCAZAYQPEETQWUCHBRKPIXQBVCRZETPVINVGSJCOLMEIKJFBWVTQOQCHDWBHQYREPFDWGXZKEDYOFSEPIOXYUYBKUHNMNVPIRJUOG");
    msg.timeout = 33473U;
    msg.contents.assign("KBVBUQESFHROPHCWNRZHPOKOEHEZADKKAMISTDUXVXBFDIIHHAUFNWCNMJLIIDEDLSQBRSFVGX");

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
    msg.setTimeStamp(0.6427771445528784);
    msg.setSource(13887U);
    msg.setSourceEntity(248U);
    msg.setDestination(42809U);
    msg.setDestinationEntity(174U);
    msg.seq = 2208937777U;
    msg.destination.assign("UWHGNXJBQKIVDFBLOYFERZMTUDASJAEZEWGVYTVUMKLXKTKWNAYWVFIRYMUOPNIQRWSOJCDZPYPBOUYVGPKTQXLXDZVNGFUVBJNBVPHQJKJAQMKISNZ");
    msg.timeout = 50870U;
    const signed char tmp_msg_0[] = {120, -51, -76, -11, 99, 25, 35, 125, 22, 66, -96, 123, 101, -7, -48, -30, 2, -102, 6, 96, -51, -117, -84, -89, 100, -77, -53, -55, -68, 83, -42, 13, -42, 106, 96, -78, 117, -31, -125, 2, 54, -81, 123, 80, 56, 82, 40, -31, -91, 114, -53, -127, 13, 89, 92, 73, 62, -105, 112, -82, -79, -13, -88, 88, -90, -76, 52, 48, -38, -47, 51, 90, -54, 126, -98, 111, 83, -112, 78, -6, 90, -88, -50, -48, 41, -20, -37, -128, 108, 66, -34, 14, -90, 122, 98, -117, 45, -117, -98, 20, -65};
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
    msg.setTimeStamp(0.2160556199161382);
    msg.setSource(36904U);
    msg.setSourceEntity(29U);
    msg.setDestination(10906U);
    msg.setDestinationEntity(54U);
    msg.seq = 369006731U;
    msg.destination.assign("BJJOVJYEEASRGXFQWQYRUZDXDBUINOEHYBLFXFRUYSQUBOSIMKAMSODZFXHVVKMAXCLEVPFVZGKRJGGCQNCGXFFKKXMXTMBINJUOALZYTGHRLATEUPPHJHQZADMEVCDPGENTXWKMVJLOSPDHPNLYWQGKLHQVKWZILSCYHCNYTSOBTPZBIAKQXRISTDPGEERUWJQFRBIBBAINJKGARUEYTZCMVPCZ");
    msg.timeout = 45468U;
    const signed char tmp_msg_0[] = {-101, -52, 114, -6, -38, 100, 39, -125, 66, -128, -23, -50, 61, 0, -97, 117, 56, -79, 114, 106, -93, -45, -96, -125, 50, -8, 54, 25, 52, 88, 112, -92, -115, -127, 7, 106, 64, 60, 88, -115, -68, -93, 95, -117, 7, -17, -90, -32, 73, -37, -102, 8, -11, -82, 32, 88, -72, 9, 112, 20, 113, -28, 27, -83, 31, -14, -1, 16, 83, 124, -89, -69, 95, 76, 84, 118, 104, 76, 83, 68, 124, 76, -123, 79, -81, 37, -23, -56, -36, -78, -39, -86, -18, 14, -3, 59, 106, 105, 48, -67, 12, 88, -71, 104, 65, -54, 10, -117};
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
    msg.setTimeStamp(0.7230191166690844);
    msg.setSource(40448U);
    msg.setSourceEntity(170U);
    msg.setDestination(31763U);
    msg.setDestinationEntity(42U);
    msg.seq = 566452197U;
    msg.destination.assign("WYBCQXGPFFYRQQPCQAMSJNRQHCGGJBRQISPXXFOQOKBBZNZDPAKYYTKYODIKHMOUVNEJANBELJVBVGIMFUPSWKUIZTKXLUVCVITVGPXMAHAEXJTFASPSGEMVYDDJEXDWVURRSTRMNJBENDYYLLZLMJLITZEIOBZWDOACRWUGHHAKXSWKCYPLWSWRPCJRHISNIQQMRTHCGBQZFDSNKWUHOWDHPDLZ");
    msg.timeout = 64234U;
    const signed char tmp_msg_0[] = {38, 15, 20, -107, 10, 10, -18, 97, -114, -41, 81, -46, 70, -10, -118, -11, 2, 74, 53, -45, 63, 9, -39, 52, -54, 25, -119, -91, -22, 52, 80, 21, -49, 27, -102, 20, -72, -12, -44, -116, 76, 6, -63, -123, 67, -75, -58, -109, 87, -63, -52};
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
    msg.setTimeStamp(0.4741736259996425);
    msg.setSource(47838U);
    msg.setSourceEntity(48U);
    msg.setDestination(36567U);
    msg.setDestinationEntity(149U);
    msg.source.assign("ESTSMYCKRCPPIWAVRXQHAUYUIXKYHQSPSOLBVAMFRKNTOJPAAYNFFNQLHBLBHLMEZEGOJBAOSYIXGSABIZKTUTFNQRLVGTGZIPJR");
    const signed char tmp_msg_0[] = {-67, -2, 45, 121, 23, -23, 62, 121, -49, 102, -120, 83, 86, 0, 84, 94, -24, -35, 40, -49, 32, 30, 6, 89, -3, 96, -16, -84, -100, -4, -16, 72, 100, 105, -105, 37, -90, 105, 97, -6, -11, -63, 101, -59, -89, -70, 26, -13, 122, 76, 60, -38, 42, 27, 24, -116, 87, -15, -22, 49, 21, 121, 37, -39, -55, 106, 16, 76, 9, -119, -76, -73, 107, 55, -74, 40, -112, 58, -114, 89, -121, 106, 121, -9, 73, -78, -104, -17, 98, -19, -19, 15, -104, 75, -109, -85, -22, -48, -45, 113, -14, -95, -63, -72, 3, 61, 31, 25, -79, 89, 82, -106, -5, -26, -4, 123, -127, 115, 31, 96, -56, -32, 19, -8, -12, -80, -91, 47, -5, -107, 121, -8, -118, -116, 30, -60, -119, 40, -119, -29, -51, 123, -79, 85, -34, -56, 35, -61, -111};
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
    msg.setTimeStamp(0.3533705319087064);
    msg.setSource(16812U);
    msg.setSourceEntity(117U);
    msg.setDestination(25087U);
    msg.setDestinationEntity(154U);
    msg.source.assign("UAFCGYHWCHBPLOMSJNIYNFXWIVFKDEQMVGDLDTULEVXUXMCJENYSDEHLKHJTTIKGGZUNIFWVVPEQTBRSZUBXSUWAXTFPURHWBBUVGSMAOZKRQPDDPFKRXKNBQVHXTKLCZOHQGWFOVMYDKOEIFIMPJPSARHDFAMZCNA");
    const signed char tmp_msg_0[] = {9, 69, 69, -120, -61, -94, -1, -38, -9, -62, 116, -9, -54, 90, 14, -111, 27, -25, -9, -3, 107, -65, 43, 21, -56, 57, 62, 109, 101, 72, -49};
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
    msg.setTimeStamp(0.005699177761792074);
    msg.setSource(38646U);
    msg.setSourceEntity(97U);
    msg.setDestination(10008U);
    msg.setDestinationEntity(88U);
    msg.source.assign("WEYGLBCHZRSYDSNTLAHTBGWJOLUWYPTCVTZRBFMHNOQDAHCAEGUWGDNVYIQNKMIQHAVWQPLJXIECEQCKXSNFJZWIGUURFSFXVAKLZBDJDBFGSYFSPVKXJXIVQVMZDKWCMAQHRURHAPRXTPKEFHUGUKZSPHTDTUJBJRNPQPOJBKVCROZBQNYWSLOFEGLZMGINBOMCQYXCNUMGZSEPAFOAYTXIKEKITDYI");
    const signed char tmp_msg_0[] = {32, 80, 54, -104, -108, 87, -51, 65, 106, -12, 82, -8, 13, -128, -108, 12, 24, 83, 125, -87, 108, -85, 52, 80, 39, -47, -109, 99, 65, 16, 76, -56, 21, -39, -93, 52, 32, -12, 69, -47, 23, -104, 62, 63, 60, -97, -74, -105, -22, -78, 46, 6, -88, -98, -124, 28, -60, -105, 101, -44, 18, 122, -70, -13, 0, 23, 33, 91, -27, 38, -74, -104, 60, 7, -34, 72, 73, 79, 104, -7, -55, -60, -30, -2, -14, 93, 107, -60, 85, -75, 78, 36, -92, -96, -96, -58, 69, -113, -62, -84, -122, 11, -13, 71, -10, -86, -39, 43, 113, 10, -33, -118, -117, 64, 120, 75, 62, 99, 66, -39, 25, 100, -42, -11, -103, -82, 111, -1, 23, -27, 121, 80, 100, -98, -40, 97, -10, 124, -71, -110, -23, 99, 4, -59};
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
    msg.setTimeStamp(0.7250951153284536);
    msg.setSource(21390U);
    msg.setSourceEntity(3U);
    msg.setDestination(65230U);
    msg.setDestinationEntity(104U);
    msg.seq = 2838199914U;
    msg.state = 34U;
    msg.error.assign("VKRHOSINIXHLTWQGZGFORMCEWUJTXLFGJCOJCUAGTBLYMKGXATUDLOTUKTPMLDNZBPAQHFUMQKFEUFUGXMXDGUSAVJSJSJQWHOYPWXAPBVLRIKYZDYUVSQYVBZEPBHEMKTDQCNZIFCSGKOQVIYHOAAFHORBMZHGPXTLFKRFVJYSXDLNYRRJAHNJYWV");

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
    msg.setTimeStamp(0.09290017530779926);
    msg.setSource(60880U);
    msg.setSourceEntity(55U);
    msg.setDestination(9968U);
    msg.setDestinationEntity(71U);
    msg.seq = 917033851U;
    msg.state = 78U;
    msg.error.assign("ZWKCTTPOOLQQRLJLAVDIORDXHHD");

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
    msg.setTimeStamp(0.991369083144962);
    msg.setSource(49086U);
    msg.setSourceEntity(76U);
    msg.setDestination(35168U);
    msg.setDestinationEntity(111U);
    msg.seq = 3216612288U;
    msg.state = 205U;
    msg.error.assign("BMETUVAALQNWLSOUZEMVSUCJBLXLPHCDUQABGMZSGELWTQYYTOXGCUIABKGPHQXZQSNFXVHYXPUWIFHGFJNOLWNOSZBMTRXDBIWYJDJOVRIKIPZNAAHERHCHULKXCLNNMJGATUBPEQPIKPWSRDQVBSZRSFDKJDOGKOYJXCRRVKIFSNOPMUEANTMWQPOOVRRFJL");

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
    msg.setTimeStamp(0.7609159346482214);
    msg.setSource(9803U);
    msg.setSourceEntity(42U);
    msg.setDestination(47447U);
    msg.setDestinationEntity(92U);
    msg.origin.assign("IHYBDWHXPTYCZPGMQGEHBZJUUNNTSJMVJUXOZUZGEWAOTIUDAPLXXHQCMBQMBLRSNWNFJSTWTGCKXSDTEROFWKLWVJMWXTAETRGHLVLAZOESGSVOABGBDRZNYWFXXLSJIBQCSKMKPIHPQEYOFNOLQUDZFBUNVGCDAOUYRDUL");
    msg.text.assign("EKKXEHERGPENHNKNAAMEQUJRMULBLSCHZGDVOFIANUGVEPJPDWNWGGHFZWSKVINVMTXBBVUQUKWLQZSDMTTMOBAHSJRSULQWJTXGIYSBEJCNKCCIKVHWYNOXAEZLSUZJJTBXYPQVUZPTJOTJXLOTIIWRHAMQGFBXMRQDLIIDSFVYNMFSBKVDWPCDBFZTREZFYOKCMYYLASRGUFWDWMOQVQLHUIZOZPKHLHYCXRBY");

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
    msg.setTimeStamp(0.25772977349487725);
    msg.setSource(31503U);
    msg.setSourceEntity(254U);
    msg.setDestination(1938U);
    msg.setDestinationEntity(178U);
    msg.origin.assign("XVZIEAKVLTYUDYFKUOUHPKWWPACRGNPYUUALSLUQOBVRRWCWZGUAPFNHFFKRUYLBTQFHTAT");
    msg.text.assign("DGJQZSTXPGRFQMNXGGAUDJAONFZMIXTOWWQJKRSBXDRCMIZUEXBLFTQALEZRPVCHUAKHUQPNJZXOGOLVEDPDQSVCHWMMZRFRHPYMKDLWDWIACWKYYBSHVURNSBOJFOQYBWFSXAVJQPHGFJPENTCLVIGHRGFQBNOHWAZKCLSEVESUIXKAJVEVNHMTKBQHPMNPWBYYLLDOADTEBXCSPXUEJMURWKNYDTULGFZEKZYUTIG");

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
    msg.setTimeStamp(0.41987225947821794);
    msg.setSource(45748U);
    msg.setSourceEntity(3U);
    msg.setDestination(35640U);
    msg.setDestinationEntity(174U);
    msg.origin.assign("DBNSQYCMWCHBMQBJANQWJGALAIRKNEUOBYELYXVZCTLJPNJVAOUAZTISRZPZPPINGDSCHPFDCVXKWCFMKGDKAYXEVTJXTYAECHZPZHZKRLTMVKFMTWTBXDXULVMFQOFNVIJJFSAYERZRGNFCDPJCYZNBLORKKPIOWTKOGWEWROOHBEFMOWWABLQISLZUUXRGMBGDCSHPLKXSMDRSMQQUBNDAWQIESFYQDXHV");
    msg.text.assign("TITFAXMWXNJKMRRZSWKPZEEGFSCLRNBESBFXUTGLVIVKOBDVAYYBOFIMUKJKDKODZTOLDWUPHSUHBMCXFEHHOIRTQUQWUYZBHQICPNKACZOOVXJINTLGPOQVHBGSGVDYTYOQENYAJGPNTCZBCMAQZCGGUXARWH");

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
    msg.setTimeStamp(0.8186117688097154);
    msg.setSource(41393U);
    msg.setSourceEntity(70U);
    msg.setDestination(64642U);
    msg.setDestinationEntity(214U);
    msg.origin.assign("AYJFJNXJFHFZOKKMXIBWPJSYYRHCGDWANCEIVGKBUCBCJUUOJ");
    msg.htime = 0.4459248204657327;
    msg.lat = 0.011379704910626343;
    msg.lon = 0.24335901182337505;
    const signed char tmp_msg_0[] = {91, 44, 13, -126, -25, -125, 45, 5, -28, -113, -42, -74, 117, -36, 35, -56, 30, -23, -39, -7, -77, 35, 30, 89, -126, -125, 46, -44, 84, 122, -109, 50, 111, 35, 84, -28, -71, 20, -17, 4, 100, -91, -59, -70, -73, 106, 29, 102, 116, -60, -2, -113, 116, 84, -25, 16, -56, 93, -59, 31, 88, -85, 95, 101, -86, -15, -107, -25, 77, 23, 69, -27, -96, -54, 37, -116, 68, -24, -94, 123, -33, 76, -14, -32, -19, -108, 110, -61, 22, -90, -46, 100, 72, -97, -111, -16, 72, -66, 95, 24, -101, -13, 91, 57, -23, -45, 88, 75, 120, 74, 43, -68, 43, 99, 54, 22, -98, -67, -30, -93, -100, -44, 45, -98, -85, -62, 83, 68, 112, -74, -122, 55, 67, -115, -116, 79, 87, -84, -37, -99, 101, -120, -88, -55, -62, 16, -28, 66, 21, 122, -63, -4, -92, -87, -21, 54, -84, 2, 98, 24, 66, -38, 87, 113, 3, -68, -118, -10, 87, 32, 106, -79, 116, -122, 96, -81, -46, -99, 83, 26, 121, 123, 119, 40, 4, -106, 38, 34, -124, -19, -12, -55, 39, -43, 44, 93, -110, 27, 100, -18, -111, -103, -119, 108, 17, 26, -39, 89, -29, -78, 37, 123, 1, -122, 86, 110, -60, -40, -12, -107, -90, -110, 49, 57, -100, -83, 99, 87, 43, -16, -104, 86, 46, -22, 31, 47, -58, 114, 6};
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
    msg.setTimeStamp(0.5307647570171788);
    msg.setSource(16670U);
    msg.setSourceEntity(28U);
    msg.setDestination(25356U);
    msg.setDestinationEntity(166U);
    msg.origin.assign("LRBTQQPWBJOJHEAJNQPUVJIFCBVYGMGHDLUFHACNXNQIXQDEJBGVZUEVOXYKXZWUUTZBYMDOWASIOMGWWYFOXYCZPIFKTSVIKFLAFHRXIDCKNECLPPNWYBSTOTEIZKGTXXMOPSKDHMYMEFTNEQLWZWBIKOCRTBNUIQOCFKRWRBAYFHNMNQYSFCSGSZRLRAVJEPVHGAOSTBDJGTVPYIDNGCME");
    msg.htime = 0.06254880819531161;
    msg.lat = 0.8977242029754842;
    msg.lon = 0.38387210591122845;
    const signed char tmp_msg_0[] = {-91, 123, -53, 25, 104, -30, 98, 48, 101, -54, -42, -114, 106, -23, -15, -47, 109, -86, 77, 24, -38, -14, -55, -79, 69, -76, -84, 88, -68, 21, 25, 113, 62, -122, -13, 107, -1, -47, 27, 83, 69, 116, -12, -10, -71, 71, -114, -99, -36, 58, 125, -92, 106, -3, -31, 73, -27, 31, -51, 83, -10, 92, -78, 74, 12, -11, 19, -93, 125, -85, 77, 117, -103, -27, 53, 102, 38, 119, 6, -101, 122, 69, 126, -46, 96, -87, -43, -114, -28, 51, -116, -97, 52, 29, -30, 113, 82, -25, -80, 114, -85, 6, 20, -61, -109, -42, 72, -8, 46, -98, -93, 33, 5, -98, -116, 109, 53, -75, -85, -80, 37, 55, -97, 122, 0, -68, 79, -38, -117, 22, -38, -26, -4, -98, -84, 27, -95, 100, 125, 56, 116, 119, 99, 34, 64, -117, -30, -2, 42, 2, -58, 4, -38, 121, 119};
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
    msg.setTimeStamp(0.8786530361390441);
    msg.setSource(14726U);
    msg.setSourceEntity(83U);
    msg.setDestination(9508U);
    msg.setDestinationEntity(131U);
    msg.origin.assign("TAIBINHZOUMNLJPPIDSFDUIZZEJGHYWYXMYBQWBVROFGSTONKUOXQSFFWPTWYGMFBLRSLPOLXZEJHQOMUVDXHLPBMNCSONAFDBALBKLUKRSTDJDBXAAFJDRYVKLPYIVHOJIVRHJEUZHAZVRGRGJECCQQYXTQRETWOTMNECSGGIKPTXZLSTNMRZQYSQVFJBKCAGVKNKZWUUFQDPIIIXKVCVTMYHNGEMDC");
    msg.htime = 0.44707944145378054;
    msg.lat = 0.5804586644644059;
    msg.lon = 0.6766530710413599;
    const signed char tmp_msg_0[] = {68, -40, 2, -102, 0, 41, -119, -83, 118, -107, 26, -121, 67, 119, -28, 74, -3, 23, 81, 4, 23, -38, 93, 12, 42, -84, 83, -14, 63, -117, 82, -72, 107, 94, 96, 47, -70, 66, -119, 24, 60, -16, 107, 62, -36, 6, 33, -44, 91, -26, 119, -116, -92, 61, 111, 14, 89, -63, 115, 20, 33, -12, 100, 68, -5, 9, 110, 13, -78, -17, 89, -112, -31, -56, -122, -108, 91, 35, -11, 84, -28, -117, -68, -76, 48, -105, -99, -102, 118, 7, 121, 1, 16, 65, -82, 96, 105, 7, 19, -54, 113, 102, -3, 103, -47, 72, -107, -104, -123, -22, 14, 57, -18, -78, 4, -76, 112, -65, 79, 107, -14, 101, 64, 22, -17, 36, -70, -107, 32, 103, -19, -128, -94, 79, 105, 43, -117, -28, 5, 52, -21, 26, 114, 12, -62, -70, -85, -65, 53, 60, 49, -81, -49, 99, 86, 94, 55, -49, -94, -7, 112, -52, -29, 23, -84, -7, -53, 0, 17, 42, -25, 38, 88, -13, 83, -76, -25, 104, 14, -10, 56, 124, 109, -79, -114, -39, 114, -26, 26, 46};
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
    msg.setTimeStamp(0.47821242087115257);
    msg.setSource(9559U);
    msg.setSourceEntity(0U);
    msg.setDestination(52799U);
    msg.setDestinationEntity(115U);
    msg.req_id = 16715U;
    msg.ttl = 14158U;
    msg.destination.assign("WKPUGZBLGNTXSRXSHNBKCQFUEVMPOFUTJZWAYFHIPPHFQCXMRFOPBNYNSXGETKGMGHEYIWEGVANMTWZBDZYRAYUOWRPQBEQ");
    const signed char tmp_msg_0[] = {-16, -79, 113, -93, -77, 48, -114, 54, -114, -91, -30, -85, -93, 5, 26, 6, 115, 50, -84, -85, 108, 53, 43, 9, -101, 57, 81, 112, 70, -110, -116, 11, 38, 124, 122, -2, -11, 107, 37, 1, -34, 98, -33, -87, 72, 55, -71, -83, 44, 93, -110, -49, -119, -2, -100, 94, -97, -7, -62, 66, -41, 7, 78, 31, -126, -73, 104, -115, 55, 104, -106, 109, 4, 3, 8, -83, -123, 53, 123, -31, 82, 39, 50, 67, 117, -17, 100, 117, 56, 97, -43, 117, -43, -120, -14, -84, 28, -99, -47, 42, -122, -119, 94, -23, -37, 24, 46, -9, -48, 66, -79, -46, 55, 1, 84, -122, 0, 93, 80, 100, 113, -121, 15, -38, -30, 66, -86, -59, 126, -48, -4, 11, 37, -127, -84, 14, -68, -128, 5, 107, -108, 118, -37, -60, 63, 4, 53, 13, -119, 34, -85, -50, 71, -106, 47, 41, -122, -35, 93, -10, 31, 29, 16, 125, -23, -101, 110, -49, -2, 24, 34, 112, 53, 59, 26, -48, 72, -91, 103, 114, 45, -53, 70, -11, -101, -118, 22, -56, -69, -85, 107, -28, -113, 9, 55, 125, 5, 73, 34, -28, -107, -113, 37, -17, -109, 55, -125, 42, 89, 94, -81, 13, 36, 7, -58, 21, 0, 86, -96, -75, 21, 3, 40, 125, 69, 56, 1, -4, 26};
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
    msg.setTimeStamp(0.5766116783398543);
    msg.setSource(47853U);
    msg.setSourceEntity(15U);
    msg.setDestination(37702U);
    msg.setDestinationEntity(217U);
    msg.req_id = 27154U;
    msg.ttl = 28926U;
    msg.destination.assign("JRYRRYNOOEJKCYBQGHVLTCTKLGNKMQBXKONUXBSSTRAIEFSABMPYJZHMEAYGHFEUWVUJYDBVVCVJSHUPIDIVPEEEGVYAFWCXOKZSSPVUJRKKXGXLQXCTZDVCLASMAIAXCRPUAZFWUBOQOIBDRGLLFDNQIZELFWHFUAFMIXZLJFDCDKHNPQTOPXKYTMIVISZEDWEOSG");
    const signed char tmp_msg_0[] = {6, -31, -18, -128, 73, -95, -31, -28, 28, -95, -74, -117, -34, 78, -20, -40, 41, -75, 21, 124, -90, -47, -8, 15, -107, 116, -107, 115, -120, -73, -63, -14, -64, -46, -20, -52, -112, 21, 119, -102, 18, 118, 29, 107, 64, -86, 104, -92, 64, -85, 107, -32, 70, 75, -15, -18, 14, 51, -121, 49, 113, 110, -42, -101, -54, 104, -55, -125, -71, -29, 94, 34, 111, 119, 112, 34, 100, 104, 9, 42, 55, -50, -20, -94, 23, 113, -128, 67, 44, -54, -88, -32, -15, 51, -11, -87, -53, 61, -65, 90, -46, -121, 72, -36, -22, 45, 19, -121, -49, 58, -38, 107, -45, 38, 56, 104, -24, 49, 83, -47, -75, -126, 29, -37, -85, -120, 57, 86, 95, -101, -127, -123, 54, 120};
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
    msg.setTimeStamp(0.8868726218454186);
    msg.setSource(62917U);
    msg.setSourceEntity(208U);
    msg.setDestination(60593U);
    msg.setDestinationEntity(140U);
    msg.req_id = 8841U;
    msg.ttl = 227U;
    msg.destination.assign("LBUMBMGSLARKNITENNKFABBYNSPSTYYZISAZJQIZVWNMHEDXJOTUVDFJUVHLCTUQMPKHTYGJYHCUQKXQSKNIOCXLIORQDVUXPPAEAPWZHEJNFKGOJABXVZCVYJXLSEDFRPEISEKVGGRVFMZPWXEKHSYXNMPZWIAJJTVDFFSWWLHALJYGABOKNQGRGBHQDDFXYLWBPXRZMQWHBQZZIUSCKRIOCRAMEWM");
    const signed char tmp_msg_0[] = {-78, 75, -115, -75, 66, -51, 55, 61, -103, 111, 3, -35, -69, 31, -46, 12, -66, 63, 65, 13, 117, -82, 85, -73, 62, 113, 88, 15, 53, -91, -125, -86, -77, 104, 90, 60, 47, 93, -23, -21, -55, 53, -6, -84, -57, -105, 119, -45, 22, -5, -3, 39, -115, -70, -68, 126, 42, 76, 45, 126, 101, -72, -28, 40, 73, -4, -50, 66, 112, -113, -69, 83, -76, -22, -61, -29, 75, 65, 75, -54, -52, 21, 31, 63, -86, -13, -94, 80, 19, 120, 46, -89, -18, 122, 121, 89, -72, 48, 44, -28, 105, 6, -70, 64, 92, -127, 97, -10, 42, -117, 69, 126, 26, -74, 28, 0, -107, -99, -70, -55, -40, 88, 40, -105, -53, -11, 11, -97, -98, -77, -119, 42, 40, -88, 125, -64, 48, 36, 4, -62, -30, 112, 110, -103, -30, -14, 121, -104, -51, 74, 115, 116, 104, 45, -113, -111, 50, 77, 105, 8, -48, -18, -87, 16, -31, -19, 34, 33, -98, -93, 2, 76, 117, -58, 90, -61, 38, -120, 102, 23, 102, 90, -21, 20, 92, -76, -44, 7, -120, -82, -90, -118, -115, 3, -48, -77, 6, 110};
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
    msg.setTimeStamp(0.23049382721610612);
    msg.setSource(57272U);
    msg.setSourceEntity(12U);
    msg.setDestination(34889U);
    msg.setDestinationEntity(233U);
    msg.req_id = 8694U;
    msg.status = 142U;
    msg.text.assign("XPIXTWCDQJOFBDLORVJZEIXMRXBXMBDGHKKPFMFUYONDCADYHJKAVMVDNRJEASKUFNJFYFZDDGOTTCNTSSBBQ");

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
    msg.setTimeStamp(0.25318282525627955);
    msg.setSource(5785U);
    msg.setSourceEntity(180U);
    msg.setDestination(15616U);
    msg.setDestinationEntity(136U);
    msg.req_id = 24126U;
    msg.status = 235U;
    msg.text.assign("LHVMNPEOFIRGDHUSOAESKZLQZWFRSPEGPHCBX");

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
    msg.setTimeStamp(0.8963059226613275);
    msg.setSource(9375U);
    msg.setSourceEntity(74U);
    msg.setDestination(3040U);
    msg.setDestinationEntity(248U);
    msg.req_id = 30469U;
    msg.status = 234U;
    msg.text.assign("OUGAYFAMXSZBBWKLYUJIHRTRGXBSDTKZFIKQSKLDBNCYIKWVCAZQEMIGHHVDTVXKAPPMJNMFKYXERIUGAFTZLBGBDWMSMGHOTIWQQOJPAYCHBXJCRQUUXZFOSHGUMPVNFMORAJYJIRNREZBWQTPWJYYFLVVXNQ");

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
    msg.setTimeStamp(0.17613457896305862);
    msg.setSource(63580U);
    msg.setSourceEntity(94U);
    msg.setDestination(22337U);
    msg.setDestinationEntity(85U);
    msg.group_name.assign("CINRQYRYMLBDOH");
    msg.links = 1754122847U;

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
    msg.setTimeStamp(0.35217694093668495);
    msg.setSource(9607U);
    msg.setSourceEntity(217U);
    msg.setDestination(45295U);
    msg.setDestinationEntity(118U);
    msg.group_name.assign("EEBRMYVEKITOCQCCAHUMBAGDOPUBZDJGKTPEPOLIHSUGFRUJNYZLQEOSZOASXZBYBDTBQMX");
    msg.links = 3956117789U;

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
    msg.setTimeStamp(0.03545355991121113);
    msg.setSource(24986U);
    msg.setSourceEntity(215U);
    msg.setDestination(23657U);
    msg.setDestinationEntity(180U);
    msg.group_name.assign("AKICSFNERWTIGWNOYSAAVBYPMNAQV");
    msg.links = 957219131U;

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
    msg.setTimeStamp(0.528748980345275);
    msg.setSource(21281U);
    msg.setSourceEntity(85U);
    msg.setDestination(48125U);
    msg.setDestinationEntity(228U);
    msg.groupname.assign("BVRUFPCVIHDZOQYEYMXARFLFQBGEKQWYYKUZMGNGQGIFRAJVHANCFCTUAKKVDXTPBS");
    msg.action = 188U;
    msg.grouplist.assign("TLDHKUDEBIJOAWLUDRTXHUGKPOMLJZHMMKAGNAKCGBJBSGOLSWGVEZORVIDPRXQKAOOZVRNVQSHCYIIZVYPMEJQNZFCHLFWFLNESJAIRWRYMNFEFRFUTPQBVECHLXUMFBTCAKVWIOARRTDFLPHDUXDVIG");

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
    msg.setTimeStamp(0.9810122695998946);
    msg.setSource(15627U);
    msg.setSourceEntity(120U);
    msg.setDestination(54366U);
    msg.setDestinationEntity(132U);
    msg.groupname.assign("DGVRFNDUCQBECTHIKLNUKBCVTQWQJPQDJOHVECRAVLHAYYJAIXLEOCIPMWFEJZURFDVIUZKNWKGKCRCXPZJXQCMYYHMAGIPWZNYEMYNJSZMWCSKOSOHUJEGWDPQXXNYZDZDOJRLFNXDAWPNRCOGEFEAJSTTMZOMLYZEFVPRWTHSQIABUGOTUQSSXNMVBKWSVUOLSBE");
    msg.action = 0U;
    msg.grouplist.assign("RXIBJJDIGJFSVMQQTDGNVYGMBYRNYKKUZQSGLFMVBLKQTPDMKEUOXIXZZDAXIXSNVYGYYCYOHXIUEPVVOZSVLVGJZJDRCXZKRNEKALIMDDJRFSKLJUNTAXCLEWPBHWBEARWSOPIQTUXPCNJNAEAICFYMUVINLAFSLUWMOCKYFHEWPCGPWPBCLHFWFLFORTZKDHWOIZ");

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
    msg.setTimeStamp(0.1581253598718526);
    msg.setSource(59892U);
    msg.setSourceEntity(41U);
    msg.setDestination(56939U);
    msg.setDestinationEntity(208U);
    msg.groupname.assign("CLPHIFXYMYJINXNGHWJUVCXGAVRLCMXFPPPNQPKFSXPKEMDAGHRYUEWDQHUGTNHWIOFBMONYJYIHGVNJUKVKS");
    msg.action = 209U;
    msg.grouplist.assign("QXPSEQDGDKVICEFWMQGHUZPPHDASKZLN");

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
    msg.setTimeStamp(0.07145337686100584);
    msg.setSource(10499U);
    msg.setSourceEntity(71U);
    msg.setDestination(872U);
    msg.setDestinationEntity(187U);
    msg.value = 0.9590985470606473;
    msg.sys_src = 45244U;

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
    msg.setTimeStamp(0.654704473295929);
    msg.setSource(18563U);
    msg.setSourceEntity(44U);
    msg.setDestination(39199U);
    msg.setDestinationEntity(99U);
    msg.value = 0.2551432645754582;
    msg.sys_src = 36566U;

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
    msg.setTimeStamp(0.7070481155610341);
    msg.setSource(62078U);
    msg.setSourceEntity(208U);
    msg.setDestination(3637U);
    msg.setDestinationEntity(171U);
    msg.value = 0.226602258791455;
    msg.sys_src = 51924U;

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
    msg.setTimeStamp(0.8869235466319231);
    msg.setSource(39405U);
    msg.setSourceEntity(246U);
    msg.setDestination(7081U);
    msg.setDestinationEntity(137U);
    msg.value = 0.42667607387290385;
    msg.units = 138U;

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
    msg.setTimeStamp(0.7164610469028562);
    msg.setSource(30595U);
    msg.setSourceEntity(248U);
    msg.setDestination(4047U);
    msg.setDestinationEntity(221U);
    msg.value = 0.9099748392232797;
    msg.units = 66U;

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
    msg.setTimeStamp(0.8847522596608237);
    msg.setSource(6965U);
    msg.setSourceEntity(146U);
    msg.setDestination(13851U);
    msg.setDestinationEntity(226U);
    msg.value = 0.37232386906092063;
    msg.units = 217U;

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
    msg.setTimeStamp(0.026857767033153013);
    msg.setSource(33079U);
    msg.setSourceEntity(245U);
    msg.setDestination(25953U);
    msg.setDestinationEntity(206U);
    msg.base_lat = 0.11328091549473374;
    msg.base_lon = 0.26743419946748614;
    msg.base_time = 0.28764354658061897;
    IMC::HistoricSample tmp_msg_0;
    tmp_msg_0.sys_id = 63048U;
    tmp_msg_0.priority = 74;
    tmp_msg_0.x = 23222;
    tmp_msg_0.y = 6241;
    tmp_msg_0.z = 31651;
    tmp_msg_0.t = -28835;
    IMC::VehicleMedium tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.medium = 26U;
    tmp_msg_0.sample.set(tmp_tmp_msg_0_0);
    msg.data.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.034961065648757006);
    msg.setSource(2513U);
    msg.setSourceEntity(18U);
    msg.setDestination(26039U);
    msg.setDestinationEntity(209U);
    msg.base_lat = 0.8788580123617988;
    msg.base_lon = 0.8775950463411322;
    msg.base_time = 0.5167854690369057;
    IMC::HistoricSample tmp_msg_0;
    tmp_msg_0.sys_id = 28865U;
    tmp_msg_0.priority = -49;
    tmp_msg_0.x = -9177;
    tmp_msg_0.y = 19584;
    tmp_msg_0.z = -12493;
    tmp_msg_0.t = 23515;
    IMC::Pressure tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.7411043938487634;
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
    msg.setTimeStamp(0.3773304289454603);
    msg.setSource(9990U);
    msg.setSourceEntity(174U);
    msg.setDestination(34730U);
    msg.setDestinationEntity(199U);
    msg.base_lat = 0.06444698428493778;
    msg.base_lon = 0.06952449774476;
    msg.base_time = 0.32057970553775716;
    IMC::HistoricSample tmp_msg_0;
    tmp_msg_0.sys_id = 9020U;
    tmp_msg_0.priority = 64;
    tmp_msg_0.x = 14509;
    tmp_msg_0.y = 14545;
    tmp_msg_0.z = 6665;
    tmp_msg_0.t = -8647;
    IMC::Event tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.topic.assign("EAKHUNYAZUMPWIGKPRBAZEVWMEZMTKHYSRCPCFYEQECCRWROBOXJIQGATHJDXSPSYTAFVDMBVKTWLDMJLNNQFHXSQCZDMNLKEVUVBXHQTEOWERKGQAPYHACVLNLIFKVFJSQOQOUHZJNYMMIGBXTGOPIYR");
    tmp_tmp_msg_0_0.data.assign("LKUEMGSXLFJSDMCYJHXNGTITEDKVVMUHAVYGBLQWOCPKQRLFWHDNXNZIYWPOGOIURYGYVEVBOIAFWXSYZQMNQADUGMOXOHPTNSAZJNEAREFERTFKXPMSRTCIYITDFJLBKZBZNZCWPXMVFLBPCRBHKNASOBLURGKOKXBZMLHOQGUADJRRTDAGW");
    tmp_msg_0.sample.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.06319170701008148);
    msg.setSource(24994U);
    msg.setSourceEntity(180U);
    msg.setDestination(57812U);
    msg.setDestinationEntity(118U);
    msg.base_lat = 0.2106837962138579;
    msg.base_lon = 0.4804808469078009;
    msg.base_time = 0.09121840281637428;
    const signed char tmp_msg_0[] = {-18, -6, 108, -106, 115, 97, -13, 33, 24, -121, 19, -39, 17, -64, 1, -76, 82, 8, -39, 103, 9, -100, 96, -29, -128, 4, -38, 61, 15, 61, 77, -12, 22, -59, 47, 42, 53, -110, -58, -12, 30, -20, 80, 72, -37, -110, -111, 19, -87, -75, 88, -126, 94, -22, -89, 51, -23, 56, -101, -27, -77, 103, -53, -66, 62, 92, 32, 116, 104, -82, -95, 6, -27, -10, -44, 31, 50, -11, 25, 43, -37, 124, -55, -17, -90, -110, 122, -84, -105, 91, -51, -116, 118, -122, -72, 61, -89, -35, 6, 92, -102, 88, 78, -24, 103, -106, -82, -119, 0, -31, 30, -42, 100, -49, -57, -75, 20, 9, 90, 2, -15, 99, -71, -23, 35, 122, 106, 109, -108, 103, -93, 97, 9, -47, 40, 54, -2, -105, 62, 108, -14, -38, -113, 94, -2, 82, 67, 117, -6, 115, -73, -83, -123, 117, -55, -93, -29, 84, 80, 69, 43, -117, -77, 98, 25, -123, -44, 115, -39, -88, -62, 88, 49, -100, -71, -110, 98, -34, 96, -48, -16, -27, -71, 4, 4, 37, 16, 1, 64, -118, -120};
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
    msg.setTimeStamp(0.7180631189009757);
    msg.setSource(33237U);
    msg.setSourceEntity(83U);
    msg.setDestination(2814U);
    msg.setDestinationEntity(100U);
    msg.base_lat = 0.96753446072082;
    msg.base_lon = 0.4023983078968838;
    msg.base_time = 0.5140951307132049;
    const signed char tmp_msg_0[] = {45, -35, -108, 92, -25, -32, 62, 76, -11, 119, 63, 79, 23, 99, -100, 120, -61, 126, -40, -32, 59, 97, 18, 89, -24, 66, 99, -121, 123, -88, -97, 27, -74, -101, 84, -22, 31, -121, 124, 19, 39, -126, -95, 53, 89, 18, -29, -12, -22, -1, -1, -113, -15, 81, 11, 125, 48, -83, -79, 113, -72, 51, 68, 73, 21, -127, 6, -80, 119, -102, 43, -59, -36, 107, -114, -9, 82, -106, 97, 91, 46, 58, 106, 106, -49, -123, 84, 92, 106, 88, 4, 48, -84, 31, -27, 74, 69, -113, -12, -98, -125, -37, -28, -56, -109, -105, 33, 76, -59, 90, 13, -45, -75, -28, 83, -112, 21, 84, -41, 114, -85, 32, -126, -60, 105, 11, -23, 66, -80, 10, 16, -57, 49, 28, 30, -88, -35, 10, 116};
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
    msg.setTimeStamp(0.4377361127391777);
    msg.setSource(29312U);
    msg.setSourceEntity(157U);
    msg.setDestination(2473U);
    msg.setDestinationEntity(10U);
    msg.base_lat = 0.00039257716550344934;
    msg.base_lon = 0.9127803875737374;
    msg.base_time = 0.18962424377285736;
    const signed char tmp_msg_0[] = {77, 117, 94, -33, 87, 60, 107, 122, -3, 7, -30, 109, 97, 14, 22, 37, -47, 54, 109, -56, -86, -13, -113, 114, -59, -115, -19, 10, 107, 97, -127, 8, -122, -98, -28, 105, -27, 72, 23, 15, 71, -19, 71, -115, -44, -42, -93, -90, -39, -19, 32};
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
    msg.setTimeStamp(0.4606300381278171);
    msg.setSource(48937U);
    msg.setSourceEntity(64U);
    msg.setDestination(23470U);
    msg.setDestinationEntity(100U);
    msg.sys_id = 15657U;
    msg.priority = 122;
    msg.x = 3670;
    msg.y = 7367;
    msg.z = -11724;
    msg.t = 14447;
    IMC::PH tmp_msg_0;
    tmp_msg_0.value = 0.611848533932714;
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
    msg.setTimeStamp(0.11089665155941963);
    msg.setSource(8005U);
    msg.setSourceEntity(27U);
    msg.setDestination(42283U);
    msg.setDestinationEntity(193U);
    msg.sys_id = 62508U;
    msg.priority = 50;
    msg.x = -26670;
    msg.y = 5252;
    msg.z = 27428;
    msg.t = 9926;
    IMC::LblConfig tmp_msg_0;
    tmp_msg_0.op = 27U;
    IMC::LblBeacon tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.beacon.assign("ZXBBCIZLHOTGTKNTOFWJTYKDUUPQLUZKNCSSXMUMKRUVLYFSHVVXQSRJNGWBYODXGDWNAUVQOUKHCUBHINWWDLNJPRBHVPFQFYIDSMQFACYAVWXKDRAVJTXFOMETEREZXEJVQOWOZEFTZCCOE");
    tmp_tmp_msg_0_0.lat = 0.5930699407408193;
    tmp_tmp_msg_0_0.lon = 0.5876042922574107;
    tmp_tmp_msg_0_0.depth = 0.1867309140442116;
    tmp_tmp_msg_0_0.query_channel = 204U;
    tmp_tmp_msg_0_0.reply_channel = 29U;
    tmp_tmp_msg_0_0.transponder_delay = 148U;
    tmp_msg_0.beacons.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.21345217800702632);
    msg.setSource(43317U);
    msg.setSourceEntity(72U);
    msg.setDestination(24814U);
    msg.setDestinationEntity(241U);
    msg.sys_id = 4973U;
    msg.priority = 120;
    msg.x = -31833;
    msg.y = 23430;
    msg.z = -10751;
    msg.t = 27494;
    IMC::PlanDBInformation tmp_msg_0;
    tmp_msg_0.plan_id.assign("BSVPCLPOPMDDRIG");
    tmp_msg_0.plan_size = 34055U;
    tmp_msg_0.change_time = 0.13657902128718846;
    tmp_msg_0.change_sid = 12314U;
    tmp_msg_0.change_sname.assign("AVYHJXFNCYIHGIMXJORGYSTJKWSOZATQXNEB");
    const signed char tmp_tmp_msg_0_0[] = {94, 64, 46, -92, -51, 102, 81, -84, -123, -121, -30, -87, -94, -104, -18, -71, 2, 120, -97, 85, -44, 122, -112, 42, -98, 13, -54, -17, 8, -109, -60, 31, -40, 33, 0, 40, -95, -11, -47, 60, 38, 40, -116, -47, -103, 60, 117, -49, 86, -19, 62, -51, -87, -99, 51, -58, 126, -53, 78, -12, 65, 114, -72, 116, -11, 5, -66, 125, -5, -72, 101, -111, -23, -113, 28, 77, 62, -42, 14, -112, 28, 53, 54, 117, -20, -84, -114, 31, -80, -123, -38, 69, 116, 79, 48, -39, -34, 68, -85, 22, 13, -73, 29, 126, 99, -57, -89, 100, 69, 46, -29, -74, 122, 63, 15, -97, -108, 5, -119, 16, -13, 31, 45, -58, 69, -61, -16, -105, -19, 49, -40, 33, 50, 51, 88, -28, 37, -32, -55, 25, 91, -104, -123, -91, 33, 81, 105, -3, 106, 20, 20, -40, 5, 34, 72, -100, -117, -26, -87, 48, 32, -27, 4, -24, 41, -76, 64, -103, -66, -72, 42, 49, 70, 87, 109, -82, -47, 107, 124, -82, 11, -67, -110, 46, -113, -128, -112, 11, -10, -9, 75, -5, -74, 19, -68, 81, 91, -63, 45, -34, -65, -118, 100, 17, 117, -91, -108, 125, 122, -53, 121, 81, -88, 22, -21, -50, 91, 51, 82, -31, -35, 17, 51};
    tmp_msg_0.md5.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.2938116164726572);
    msg.setSource(22890U);
    msg.setSourceEntity(180U);
    msg.setDestination(32952U);
    msg.setDestinationEntity(78U);
    msg.req_id = 18760U;
    msg.type = 144U;
    msg.max_size = 6757U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.22636151185036724;
    tmp_msg_0.base_lon = 0.8173962647836589;
    tmp_msg_0.base_time = 0.9107097688778851;
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
    msg.setTimeStamp(0.6575989580174504);
    msg.setSource(11588U);
    msg.setSourceEntity(197U);
    msg.setDestination(39706U);
    msg.setDestinationEntity(213U);
    msg.req_id = 57608U;
    msg.type = 148U;
    msg.max_size = 45525U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.0989696183384613;
    tmp_msg_0.base_lon = 0.1981142033315526;
    tmp_msg_0.base_time = 0.4180438813875025;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 27511U;
    tmp_tmp_msg_0_0.priority = -13;
    tmp_tmp_msg_0_0.x = 3002;
    tmp_tmp_msg_0_0.y = -28008;
    tmp_tmp_msg_0_0.z = 24583;
    tmp_tmp_msg_0_0.t = 25406;
    IMC::FollowReference tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.control_src = 55870U;
    tmp_tmp_tmp_msg_0_0_0.control_ent = 116U;
    tmp_tmp_tmp_msg_0_0_0.timeout = 0.7438294723115374;
    tmp_tmp_tmp_msg_0_0_0.loiter_radius = 0.520842068566097;
    tmp_tmp_tmp_msg_0_0_0.altitude_interval = 0.48936924439672735;
    tmp_tmp_msg_0_0.sample.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.data.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.3722690488294883);
    msg.setSource(22723U);
    msg.setSourceEntity(39U);
    msg.setDestination(5964U);
    msg.setDestinationEntity(244U);
    msg.req_id = 22925U;
    msg.type = 9U;
    msg.max_size = 31131U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.8202834393901769;
    tmp_msg_0.base_lon = 0.16682950380976436;
    tmp_msg_0.base_time = 0.4946280880188154;
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
    msg.setTimeStamp(0.1841881957431868);
    msg.setSource(52479U);
    msg.setSourceEntity(173U);
    msg.setDestination(8952U);
    msg.setDestinationEntity(144U);
    msg.original_source = 1734U;
    msg.destination = 16573U;
    msg.timeout = 0.813135791039695;
    IMC::PopEntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("XTNGRGDQNHFOJZCZMLVCLOZFDDWHBVDXYFQEOBBNEWNNIKGXJPBHUKWGHULJTTXJZXOHIYSCAMXBZAWPWEDBYTMULESHFTDQMPKSGITABVCCDUISMYSAKRXPPRWOLFFAYJAPGFPCYVIRIQGMAHNOCRUJPBFRVVHTNAZYWQGJGEKNRLEMZCRPCOZKFYRNKLVOY");
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
    msg.setTimeStamp(0.6211404616990597);
    msg.setSource(55906U);
    msg.setSourceEntity(60U);
    msg.setDestination(6693U);
    msg.setDestinationEntity(53U);
    msg.original_source = 32161U;
    msg.destination = 46460U;
    msg.timeout = 0.2931873328078466;
    IMC::MsgList tmp_msg_0;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 63486U;
    tmp_tmp_msg_0_0.priority = -125;
    tmp_tmp_msg_0_0.x = 28864;
    tmp_tmp_msg_0_0.y = 23371;
    tmp_tmp_msg_0_0.z = 21637;
    tmp_tmp_msg_0_0.t = 17543;
    IMC::PowerChannelControl tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.name.assign("TWXAIAQSEMHESJMWCJWZHSIIETKJTELISRXUHQKDBO");
    tmp_tmp_tmp_msg_0_0_0.op = 215U;
    tmp_tmp_tmp_msg_0_0_0.sched_time = 0.5762626482338941;
    tmp_tmp_msg_0_0.sample.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.msgs.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.6585658897958815);
    msg.setSource(34501U);
    msg.setSourceEntity(241U);
    msg.setDestination(41272U);
    msg.setDestinationEntity(72U);
    msg.original_source = 41425U;
    msg.destination = 27777U;
    msg.timeout = 0.010337036704682001;
    IMC::AcousticRequest tmp_msg_0;
    tmp_msg_0.req_id = 38015U;
    tmp_msg_0.destination.assign("AAIOJZQEUFJMWLCWIBPKOZEPZQYKZGGDKKNJROBUGUYLXUZIGSXKOKRENIYQLOTSHDDIZLAJIGVCYIVODTDTGUFMHVHNLSSUHEWGTRCYCSKQQLZUASVVTLUOXQH");
    tmp_msg_0.timeout = 0.22017633800058822;
    tmp_msg_0.range = 0.9405215538166054;
    tmp_msg_0.type = 46U;
    IMC::StorageUsage tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.available = 4176432040U;
    tmp_tmp_msg_0_0.value = 177U;
    tmp_msg_0.msg.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.5730499184920858);
    msg.setSource(61368U);
    msg.setSourceEntity(242U);
    msg.setDestination(11334U);
    msg.setDestinationEntity(67U);
    msg.type = 224U;
    msg.comm_interface = 49234U;
    msg.model = 1905U;
    msg.list.assign("PCGXHQTGZAFIYNRTVSKPFJHILBKIOMKIEUVSCQUGKZAARLBUZFQIFYWVICOVRQHCXDEGUKUOWWMWVMRHBRMJOWLQOWCNHRPWFKPXZVKZFNLXEKMQCGIJGTCSAYLIEEFXLBUGJZFWOKSAJGBZPYKQYJRDTUCXNAQSPJTHTMYOMVBHLPJFTSEDLDDDEXRGWYUCNZBZX");

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
    msg.setTimeStamp(0.26259998713992994);
    msg.setSource(7284U);
    msg.setSourceEntity(23U);
    msg.setDestination(26459U);
    msg.setDestinationEntity(147U);
    msg.type = 64U;
    msg.comm_interface = 17529U;
    msg.model = 42643U;
    msg.list.assign("LRFZFREVPCNMZQTKSRSWBA");

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
    msg.setTimeStamp(0.43336502281656186);
    msg.setSource(34089U);
    msg.setSourceEntity(72U);
    msg.setDestination(43255U);
    msg.setDestinationEntity(101U);
    msg.type = 91U;
    msg.comm_interface = 16005U;
    msg.model = 12344U;
    msg.list.assign("MDBSKIJLCHYDTVXEQBYPAMNOQLHACHJTIBPMIFLUZYFEZRREUFLWBROPMSMVYVDYIKDUEZRSIOGAYWWHAQKXDPZSWHCTJEAZQKDVXJUFPC");

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
    msg.setTimeStamp(0.09654877651617144);
    msg.setSource(55734U);
    msg.setSourceEntity(18U);
    msg.setDestination(55602U);
    msg.setDestinationEntity(206U);
    msg.type = 252U;
    msg.req_id = 1205290339U;
    msg.ttl = 33294U;
    msg.code = 58U;
    msg.destination.assign("SMNTFWMUEBQHKGEJTSRLWKLJADHCYNGYBFSKMPQZCFZTAPNCXUAPOHSFVQIXYCVOZVFULXUECZROHDWRTTDNJSEWWJQTWPIPGDELDZBUGHUGWYUOEDCNNLRRAQNBRNAQXIHZQRQYVOYJEGPIMKGFUXZVGPJATDCTMMKMIDFEYFNMIWYJAXKBEIKPOLSHSJZYFUMJHLXW");
    msg.source.assign("KMLUMJGEJMAEWBMYEXJPQRLGOXHCTDBSPIADYITITSVAQJHDFPRZPRPZTIRVMNXJDVBLWXFLHOCHMTVYDQZPXG");
    msg.acknowledge = 101U;
    msg.status = 239U;
    const signed char tmp_msg_0[] = {-52, 93, 65, -59, -110, -25, 61, 117, -1, -28, 52, 13, -86, -75, 115, -70, -63, -97, 13, -8, -17, -67, 42, -93, 69, 43, 70, -29, 93, 47, 86, 104, -99, -38, 121, 56, -9, 56, -52, 106, -123, -32, 123, 56, -60, 31, 76, 56, -89, 13, -10, -123, 47, 117, 125, 55, 65, -104};
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
    msg.setTimeStamp(0.10765013507421373);
    msg.setSource(27953U);
    msg.setSourceEntity(154U);
    msg.setDestination(41883U);
    msg.setDestinationEntity(150U);
    msg.type = 58U;
    msg.req_id = 1501350127U;
    msg.ttl = 153U;
    msg.code = 29U;
    msg.destination.assign("VGJXCAEJPFQABIFQHBKVAUKHJMARBEXQJPIENWNYZCDJMIXUPFRMHVIYC");
    msg.source.assign("LDOQPKWDFAGVVCUHLMNLKKCOGFODJTHBFJHMDVOBUTSSMVUKYXNZLKJORH");
    msg.acknowledge = 51U;
    msg.status = 241U;
    const signed char tmp_msg_0[] = {-103, -13, 75, 28, -68, -25, -60, -86, 20, -64, -28, 74, 116, -13, -45, -26, -74, 77, -72, -62, -63, -115, -14, -44, -17, -7, -111, 74, -81, 117, 45, 38, -74, 28, -78, 57, 14, 76, 22, 69, -75, 22, 74, 65, -60, -77, 47, -117, 60, 4, 63, 113, -63, -26, 114, -77, -19, -76, 63, 22, -18, -113, 103, -83, -25, -18, 85, 2, -49, -52, -91, -124, 30, -76, -58, 16, 52, 4, -2, -107, -32, 72, 57, -94, -18, 124, 77, 101, -51, -52, -12, 25, 102, 7, 120, -84, -83, 7, -79, 12, 120, 45, 74, 33, -88, -126, 101, -13, 109, 2, -62, 52, 82, 41, -50, 81, -8, 29, -109, -128, 74, 6, -105, 34, -105, -41, 1, -24, 54, -76, 112, 117, -43, -40, -7, -73, -19, -117, -124, -5, 49, 90, -43, 23, 87, -47, 23, -109};
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
    msg.setTimeStamp(0.7524055041301362);
    msg.setSource(37907U);
    msg.setSourceEntity(240U);
    msg.setDestination(40517U);
    msg.setDestinationEntity(143U);
    msg.type = 203U;
    msg.req_id = 655286022U;
    msg.ttl = 29381U;
    msg.code = 45U;
    msg.destination.assign("ZWQJBCTTROWMPZFWUWKEMATSXTMEIYRVKXCJQULGDQKIQVCCOGHVIEKXAACFBB");
    msg.source.assign("BOIKFJAKKAHFOMIFXGQGWDIQUGFSHCFCDLTNJXZXLYKMPBRTVWPVUYPNIVUVNPKXSNBDRAZWSGRCCOENWCXSTVEDLQORHSYJBBXMALBVEVZUBNZNZDYJUGTGTKKYACEPHKZZSCZGJIJYVEXFNPQZTLQELIPRMFXCCOBALMMDHQPTAZHSVRYLEIU");
    msg.acknowledge = 143U;
    msg.status = 23U;
    const signed char tmp_msg_0[] = {79, 10, 96, -25, -44, -76, -29, 13, -117, -123, 86, 56, -127, 3, -46, -28, -128, -122, 26, -85, -70, 74, 59, -53, -127, 94, 49, -121};
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
    msg.setTimeStamp(0.2112756079109298);
    msg.setSource(36125U);
    msg.setSourceEntity(37U);
    msg.setDestination(12641U);
    msg.setDestinationEntity(159U);
    msg.id = 5U;
    msg.range = 0.5465568732207573;

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
    msg.setTimeStamp(0.3350640338085671);
    msg.setSource(291U);
    msg.setSourceEntity(171U);
    msg.setDestination(26664U);
    msg.setDestinationEntity(32U);
    msg.id = 160U;
    msg.range = 0.05567928460124916;

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
    msg.setTimeStamp(0.4603883357188191);
    msg.setSource(63711U);
    msg.setSourceEntity(191U);
    msg.setDestination(16996U);
    msg.setDestinationEntity(123U);
    msg.id = 186U;
    msg.range = 0.5424239187309087;

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
    msg.setTimeStamp(0.04143625160930431);
    msg.setSource(17636U);
    msg.setSourceEntity(42U);
    msg.setDestination(16612U);
    msg.setDestinationEntity(1U);
    msg.beacon.assign("KIEUERIHVZRGRBXUGTGSDTQAQRYGYUCPQKPCOJIRJVXXJIYAABFNWETMTAZVULPKWHQCRMRHBOGIHXVKJPBHBNLWUZJQXVZGQGYNJZVASIZMKSR");
    msg.lat = 0.017783381924774133;
    msg.lon = 0.8919485478813817;
    msg.depth = 0.058820264268055644;
    msg.query_channel = 64U;
    msg.reply_channel = 169U;
    msg.transponder_delay = 14U;

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
    msg.setTimeStamp(0.23718287505850844);
    msg.setSource(11253U);
    msg.setSourceEntity(195U);
    msg.setDestination(29347U);
    msg.setDestinationEntity(59U);
    msg.beacon.assign("YIDKALJXJGNKSAVECRVKCPIUXBRUPCBWHAGIKMSTBQPBTDHJFJSZHOHZIUPCLYFTROQNDGYSLJVSLOGALYFUETZXJNKWVFUWKWERGIRGCVYCNPZVMANELMISLYKOOCUMCZBQEPJZAFZWNBNTJSMXXHHTUOALNDFCSWKDOYGIWLHDLPTBRXEMGFMTERGMIYICRXYEBRIUXKMQNZWJNXQAJYBDBQTDHOAHGF");
    msg.lat = 0.5000151723645094;
    msg.lon = 0.34814104143040026;
    msg.depth = 0.22585684153918573;
    msg.query_channel = 83U;
    msg.reply_channel = 225U;
    msg.transponder_delay = 234U;

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
    msg.setTimeStamp(0.9650899580241299);
    msg.setSource(41203U);
    msg.setSourceEntity(98U);
    msg.setDestination(36000U);
    msg.setDestinationEntity(33U);
    msg.beacon.assign("DLYBENRAOVVIASMCYBAPKKYWXVMMODMFIRREWHHLUTMNLVCJGGOKKCBFWLGCZYRODHUPUOLUQITQNAZXLPTQSQHKYVFMWHCUZIWBGQAMVJVIJTAIRUGEVWIFAXETXXCHPGUBXABAZVZITQLOWKXQCSUDEBHAYZDLRMOYCXKKPJNPSJNDFKBSHMNTGJOZFSPUQEEYLFWCTXQJQJJSSOSPWYGRFXEJRNBHPIZRNGVODDRZPHNDZSYKT");
    msg.lat = 0.7930345969156842;
    msg.lon = 0.22750124430611351;
    msg.depth = 0.27791294828542445;
    msg.query_channel = 171U;
    msg.reply_channel = 119U;
    msg.transponder_delay = 24U;

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
    msg.setTimeStamp(0.6721328003273543);
    msg.setSource(14450U);
    msg.setSourceEntity(215U);
    msg.setDestination(28226U);
    msg.setDestinationEntity(213U);
    msg.op = 139U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("YSBORFLIFTIJUWSIBSBSKLILZVIDEXBJNZFPVQBKDWDVLDRCWAWRYTPEMXADOPYBYGXZHMLTNRPNJFLGJQMBHSHUNCXUVXHYXKGCIFNRTQDYSRAZCTDIPFELJLKUJATGGRDYNONDQ");
    tmp_msg_0.lat = 0.8863187366879106;
    tmp_msg_0.lon = 0.2818643512702045;
    tmp_msg_0.depth = 0.6190901796771481;
    tmp_msg_0.query_channel = 220U;
    tmp_msg_0.reply_channel = 174U;
    tmp_msg_0.transponder_delay = 110U;
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
    msg.setTimeStamp(0.06312277303894642);
    msg.setSource(41475U);
    msg.setSourceEntity(249U);
    msg.setDestination(60926U);
    msg.setDestinationEntity(204U);
    msg.op = 154U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("ANAVKFMLAVHNSMJIVLXHDRWEYBMXCASWDARKTFHUSWBHFOXRGPWVLOGYNKIMZLYJDZUNPYPJJOPIFZITEZHRTTQGCSKDODZGZFNPFSOHXHAWDYICAEJVKIWWHMRBOPFTLSQQGEPYYXJGJUGUMXXJNTUOQZDVFUQWACMPRIMRCMJBCEJQLBQBVXFCGNXHLDQUACZDGOI");
    tmp_msg_0.lat = 0.2641760246331464;
    tmp_msg_0.lon = 0.27385148447911956;
    tmp_msg_0.depth = 0.595797679034691;
    tmp_msg_0.query_channel = 100U;
    tmp_msg_0.reply_channel = 230U;
    tmp_msg_0.transponder_delay = 219U;
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
    msg.setTimeStamp(0.004028524855610782);
    msg.setSource(45902U);
    msg.setSourceEntity(238U);
    msg.setDestination(30651U);
    msg.setDestinationEntity(12U);
    msg.op = 233U;

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
    msg.setTimeStamp(0.9153627318269623);
    msg.setSource(28872U);
    msg.setSourceEntity(110U);
    msg.setDestination(30786U);
    msg.setDestinationEntity(190U);
    IMC::CoverArea tmp_msg_0;
    tmp_msg_0.lat = 0.993584973957557;
    tmp_msg_0.lon = 0.5944091232370015;
    tmp_msg_0.z = 0.35398439764813316;
    tmp_msg_0.z_units = 4U;
    tmp_msg_0.speed = 0.9183549511614482;
    tmp_msg_0.speed_units = 243U;
    tmp_msg_0.custom.assign("PTREIWQGBOCZBDGPJILYWHQNDFRBJSXEHISVVJLZWVGTELPJOPWCCDYCRSFNSTEFDHHUXEZJUQTDKJMEQJZVJZGUMFOEZOZPKPREMMSQNCSWZIVVGIXYYOFQPKNOHUBAXTEHAKWHVXBJSCMYAXUNNMABNQMUZMIPMNHRAXYOXMGUFDHYGCAAXTFCIKLL");
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
    msg.setTimeStamp(0.6401196781871809);
    msg.setSource(42654U);
    msg.setSourceEntity(149U);
    msg.setDestination(45032U);
    msg.setDestinationEntity(108U);
    IMC::CustomManeuver tmp_msg_0;
    tmp_msg_0.timeout = 21534U;
    tmp_msg_0.name.assign("EQCPHZYSTOKWEUBYHHCSBNQBF");
    tmp_msg_0.custom.assign("JKDGUHRESNQPQRUIDVOZNCEXYHXRLBTXNH");
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
    msg.setTimeStamp(0.5314508349133665);
    msg.setSource(52664U);
    msg.setSourceEntity(235U);
    msg.setDestination(44054U);
    msg.setDestinationEntity(49U);
    IMC::ScheduledGoto tmp_msg_0;
    tmp_msg_0.arrival_time = 0.711784450902707;
    tmp_msg_0.lat = 0.24770280107873766;
    tmp_msg_0.lon = 0.06762341885819878;
    tmp_msg_0.z = 0.04446689308507934;
    tmp_msg_0.z_units = 4U;
    tmp_msg_0.travel_z = 0.4925214198087785;
    tmp_msg_0.travel_z_units = 121U;
    tmp_msg_0.delayed = 249U;
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
    msg.setTimeStamp(0.37347425192022554);
    msg.setSource(55120U);
    msg.setSourceEntity(49U);
    msg.setDestination(12276U);
    msg.setDestinationEntity(120U);
    msg.lat = 0.11268594234961082;
    msg.lon = 0.912400328169175;
    msg.depth = 0.8309599638905354;
    msg.sentence.assign("RFRBAOYSABBHEXILPDIEHOKAWGKTXVTYKGS");
    msg.txtime = 0.284128739380478;
    msg.modem_type.assign("LISTIJDZPEKRIHRSKBBHFTAOYTCFPJERKOUJNILCABVXLMNJHYAXBFFDWQESZUEXXBLMDFFLXETMINNDHHTPDREWJSKANXIZMKGLKKYVLQBGOWQQVIFLLUCWSZCSVUHTDPVRFCLBJPRIMQENSOMMVZGUFOKWYPAGYVIAUZBQMNVWSPXUEKYTYQNOBAQZCRPAXIHWGGXMSWRNOYHAFCJHEJYWMHOZATDEQCSTGTPRGWCZUVKNBJQCGPZRDD");
    msg.sys_src.assign("TWJKZMDHIPVUYIUTBENYJVZUMLDZEPVBZTNSDYGEQRDAKWVTDRQKGYGPOFVKSSVNBMWXRAXMYPMKCYIGLFMJJUXDNOZGYFQASQLZDGVTOOCHDYOEOFRKSVAOLPAARSUXUECBUTGKJDVXIRHXKKRHBQLRXGWGQCHMSWQCYAPFIPTNIYWOWRQNTBBGZCBXRBSZMHWLMUTAJVIUNIAFEZFHJTPZLFSEE");
    msg.seq = 58975U;
    msg.sys_dst.assign("EDDDROGRQBOONWAQXRUWXERNZAPAWYZLHLBMESUDZDHSUOQOWYLYFBNQIVXNSJYHFVEMFAPFKDJKKNVOPLIMPCLZMBFJTZSDGUFJHCVRNTTKLYVSWENBZPQNMEGNDSWHVYKXSRQYEIWQPBVAITIPRUXIARUQZ");
    msg.flags = 207U;
    const signed char tmp_msg_0[] = {62, -49, -113, 122, 33, -121, -70, 109, -89, -15, -72, -110, 85, 10, 125, -34, 57, 81, 121, -87, 123, 102, 92, -16, -80, -15, -27, 91, 118, 92, 110, -123, 111, -54, 28, 111, 82, 1, -101, 44, -43, -33, -13, 45, 42, -42, -58, -117, -71, -99, 106, 47, -32, -74, 78, 47, 81, 119, 9, 41, -20, -112, 114, 119, -43, 5, 2, -122, -107, 106, -17, 76, -122, 7, -110, 50, 88, -121, 77, 96, -73, 90, 51, -9, -48, 120, -92, -52, -52, -100, -105, 98, 6};
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
    msg.setTimeStamp(0.42243975985955917);
    msg.setSource(6215U);
    msg.setSourceEntity(199U);
    msg.setDestination(57580U);
    msg.setDestinationEntity(223U);
    msg.lat = 0.3031745616711915;
    msg.lon = 0.4902032025829889;
    msg.depth = 0.9815407956627714;
    msg.sentence.assign("OCJXCSAQZWLGHCOTFBMHBUKQDFQNMEETPCRCELPQNCCSWGSKUJIORBUHQXEEBXARVYQKISEFZVKKDSXOMGUJYYHYXPGWTKAANPVXNZTURGMKNIVLVSSANZLFXBTWNPJODRDALZSJSMGDMYOWPEDGIVDURRBBEKRMCGHOXHHFWNBLDLQHQRZVVCKGAIACPAMJRYFOIBNNPKTUHJZYPIZBZAYFIWGUP");
    msg.txtime = 0.8811999014431997;
    msg.modem_type.assign("TZHZUZNGUEFINNVYRUQWACWLUULOOLEPWIUEWNVJKIXZAOLXZLDAWMDTBQHXTXTESWOPFOFNVMVDHOSBZRKPGGBXPBANSYXZGBQEHJHETJAAUMRDFAZFTRAWLIQJ");
    msg.sys_src.assign("TGQPMYVDIZJTQWVWDOGRZKAQFWETYXGSFLJLFIEYKQZAFGONBVMNXFHPOKDUJVKGCSTSJAPHXRDUHOHCBHIZAYNPQNJMAHOCEWZPTSUFXSINRLQATDYJLSOKHLZU");
    msg.seq = 3993U;
    msg.sys_dst.assign("RZGJQLFKKVNSCNEHOQOEOAIQOGNHCJPLJCMTUANATFRSDXNSXROODYUJMFHRRYIEQGMNGIVIUPCE");
    msg.flags = 51U;
    const signed char tmp_msg_0[] = {-38, 84, -10, -11, -26, -94, -39, -4, -24, -105, 70, 118, 73, 89, -45, -11, 36, 123, -91, 90, -124, -87, 27, 101, -8, 63, -33, -17, -70, 65, 121, 51, -65, 23, -6, 38, -76, -73, -9, 62, 63, -37, 57, -69, 102, -27, 20, -125, -3, 72, 35, 102, 51, 57, 105, 64, 51, 39, -101, -71, -102, 80, -93, 0, -7, 95, -75, 98, -57, -107, -15, -30, 37, -48, -50, -91, 37, 124};
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
    msg.setTimeStamp(0.0530841932535423);
    msg.setSource(145U);
    msg.setSourceEntity(138U);
    msg.setDestination(22763U);
    msg.setDestinationEntity(0U);
    msg.lat = 0.6198969928675492;
    msg.lon = 0.6232809429577718;
    msg.depth = 0.8735787890179525;
    msg.sentence.assign("KBBOQLNUJKILGJZESXEDOLZTCOLNPAPDIOTEAJKSBGCFRFZMPONQUAYJXXIFCBKJNQVCNVESRDIPGVFZYFFMLGFTDOCYGPTGVUNLRYTEVXPNVZJIIXWCZEKDPRLEUFWUHEHWHSHQZTPMBWQDZAIYSYRABABMOKWMRGS");
    msg.txtime = 0.36954896408730487;
    msg.modem_type.assign("HPBCQEVMHVDHBLTCIJKPQLDPGPQBCTPFDGNRBSCAOURZXSMCAINUCYQCWVTKONMIPHEBGBKOTVEUHDVQFIOPKYYXWKHAZXRDZLLRJGTWXJUNYZJEWSEJFIDHGXVKFIAMPAVYGADLJCRTJORZXUGDKSATGHNMNNKPOETYW");
    msg.sys_src.assign("ABLSELKSXRFCCFBNXLSRDJUUFOHSSVHEVNDBHJLKWRIZXETORLSACWTYQYZGDWXXYMQOWJHXVKPCBFGJPXGEGKKJJMHJVQKVCWLPRHSOZHZVUTUUFAPBOMIPVQVVCWSUGVCRDGMEDNGOCAAXJQNOTNCIRRIITYTBNZHMFYJCALEOESIDUQABKLPRQATTKZHZDSPMQDZNUQWGMIIXWLGNDMJOUFYBIQGMFN");
    msg.seq = 59392U;
    msg.sys_dst.assign("AIMYTFRCOBFDHLDGAGAMOAVMOXM");
    msg.flags = 176U;
    const signed char tmp_msg_0[] = {88, 43, -44, -49, 19, 60, -66, -116, -22, 97, 36, 7, -78, -73, -72, -103, 14, 37, -47, 60, -12, -38, -52, 118, -80, -76, 30, -111, 2, -75, 90, -120, 109, 64, -60, -114, -126, -49, 6, -71, -49, -100, -29, -114, -90, -56, 41, -83, 57, 56, -63, -40, -45, 61, 35, -35, 123, -18, -93, 77, -73, 75, 8, -68, 90, 16, 102, 114, -34, 88, -121, 67, 58, 26, 61, -22, -118, -61, 97, -114, -75, 126, 86, 25, -105, 108, -55, -32, 85, -85, -88, 66, 103, 34, 78, 1, 21, 92, 76, 41, 124, 23, -62, -118, -46, -40, 123, 72, 104, 23, -22, 77, -123, -47, 11, 77, 96, -34, -123, 26, -90, -63, -121, 121, -116, -98, -113, 4, -96};
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
    msg.setTimeStamp(0.7399320091097805);
    msg.setSource(2741U);
    msg.setSourceEntity(158U);
    msg.setDestination(58561U);
    msg.setDestinationEntity(9U);
    msg.op = 109U;
    msg.system.assign("GZOIUDBQJRPYRHTUFAFOKVDGZZBAVWUIQFTBOJSVRXCHXQKEMNFUIOMMBHCEZASYZBQXQHBIDSNFESBYSNCKLVANPTRGGYCLNKSAJVWDEHOFXTOBMKPZVWRXUJCPIIVYJYOFFYZVUWNHLVEREVPYXIADDLGLWMAWAUJULQMSUWQXLSLNNMRWKHRQBPQXGWWHPZMTUQEYJHSXGIENDPJCOCIJRLCPMFMBCKLGCYTA");
    msg.range = 0.307001463015403;
    IMC::ArmingState tmp_msg_0;
    tmp_msg_0.state = 187U;
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
    msg.setTimeStamp(0.7287472195717996);
    msg.setSource(27009U);
    msg.setSourceEntity(234U);
    msg.setDestination(55864U);
    msg.setDestinationEntity(100U);
    msg.op = 150U;
    msg.system.assign("XKJHDSGKSZAYWITGLLATNQBPFMGAOUUPQCAVYMGVCLHWJCWRGPSHXQDFXUOJXQAUOBYXTYGVFLSXNFQFOKHDSKNBRBZWIRMTCROILFMYKRYSEKUPUDHLJOWBNNKCEXZSBPRTNAJZBZPFTEBMALQTPUHMKMEIQBBTIADIGJIZKG");
    msg.range = 0.7318621183856605;
    IMC::CpuUsage tmp_msg_0;
    tmp_msg_0.value = 90U;
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
    msg.setTimeStamp(0.9474009572937511);
    msg.setSource(41259U);
    msg.setSourceEntity(206U);
    msg.setDestination(27094U);
    msg.setDestinationEntity(150U);
    msg.op = 118U;
    msg.system.assign("PZZABXQTFCTWGLHFGYROXHMXWIBYCMVG");
    msg.range = 0.5482952491331289;
    IMC::CompressedHistory tmp_msg_0;
    tmp_msg_0.base_lat = 0.8744829910128912;
    tmp_msg_0.base_lon = 0.10714116243422167;
    tmp_msg_0.base_time = 0.8808385263965103;
    const signed char tmp_tmp_msg_0_0[] = {55, -38, 10, 16, -76, -72, 74, -95, -69, -60, -64, 57, 95, 85, 111, 83, -55, 79, -61, 51, -67, -125, -9, -33, 93, 28, -108, -118, 60, -35, -128, 122, -25, 44, -61, -117, -52, -2, -102, -40, -2, -66, -63, 112, -89, 38, -35, -93, 13, -27, -45, -102, 29, -46, 39, 27, -86, -60, 64, -98, -70, 25, -115, -108, -88, -24, 114, 38, -117, 114, 57, 92, -75, -28, -37, -15, -42, -1, -81, -4, 58, 125, 118, -121, 39, -30, -95, 117, -20, -45, -91, -128, -80, 17, 69, 51, 28, -78, 123, -53, -125, 110, 12, -34, -34, -44, 110, 2, -106, 105, 103, -78, 53, 71, -76, 62, -1, -83, 124, -114, 46, -10, -107, -13, -94, 100, 87, 18, -100, 54, -116, -41, -53, 24, -50, -51, -41, 63, 27, 74, -94, -73, -74, 34, 91, 67, -75, -48, -119, 113, -47, 74, 116, -61, -23, 73, -19, 100, 109, -20, -10, 20, 11, -3, 26, -50, -72, 103, -29, 20, 116, 48, 94, -107, -13, -32, 25, -106, 124, -113, -102, -110, -79, -27, -50, -113, -89, -96, 33, -44, 76, -22, 74, -127, -126, -103, -62, -37, 5, 119, -28, -47, -96, 59, 24, -107, -55, -54, -13, 113, 33, -60, -1, 94, 93, -91, 82, -16, 100, 109, -45, 15, 117, -16, 19, 91, -56, 9, 98, -70, -86, 18, 117, 120, 72, -55, -52, -126, -10, 27, -73, -25, 46, -4, -99, -65, -117, -29, -18};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.8221501828753991);
    msg.setSource(51161U);
    msg.setSourceEntity(95U);
    msg.setDestination(19677U);
    msg.setDestinationEntity(66U);

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
    msg.setTimeStamp(0.4668987621727754);
    msg.setSource(34477U);
    msg.setSourceEntity(206U);
    msg.setDestination(43418U);
    msg.setDestinationEntity(226U);

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
    msg.setTimeStamp(0.3583348299775905);
    msg.setSource(37729U);
    msg.setSourceEntity(83U);
    msg.setDestination(9124U);
    msg.setDestinationEntity(132U);

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
    msg.setTimeStamp(0.9846683627994578);
    msg.setSource(34456U);
    msg.setSourceEntity(89U);
    msg.setDestination(9393U);
    msg.setDestinationEntity(196U);
    msg.list.assign("YDRYCXVSTZNYREQHUTQIFAYGPCNDQWKRGJIOSFIBOBNWVYCONKEVQZAUUJIGZMAZTAFGHHQJEOSVZELVJJSELMCMZXVWGZGSUCTLPBOXDIMOSXOCHPLLKDUDXPNFOPWAGQYTIMQJRDURVIYWXWOISKYXLMFMUNSDTOXJDFTGBKVHBCRWHLTAHJALMNADNDHINRPWSQXEPTBSNPRFTEFBIEEWKQXQUGRVHKUWGBMJCBHVFKE");

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
    msg.setTimeStamp(0.546292864024739);
    msg.setSource(42255U);
    msg.setSourceEntity(51U);
    msg.setDestination(18252U);
    msg.setDestinationEntity(152U);
    msg.list.assign("TFNGRYMCVFLKAZLXGZYFPCBBUYPZCOFXQOPJTRMVEIKLBE");

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
    msg.setTimeStamp(0.7479428948159689);
    msg.setSource(12763U);
    msg.setSourceEntity(70U);
    msg.setDestination(29011U);
    msg.setDestinationEntity(92U);
    msg.list.assign("PIHDSONSMRKDYPTQDMJFMZZSIMZQGOI");

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
    msg.setTimeStamp(0.5838620838552306);
    msg.setSource(50463U);
    msg.setSourceEntity(36U);
    msg.setDestination(31683U);
    msg.setDestinationEntity(172U);
    msg.peer.assign("OXVJCQPDMQIFJNYRELCWUSNJZWNQVUXFFFTMLCKDAFEPWBGPBOHYHITCVQLQYIOEAFAXSTUTUZXUTBEDBRMNZISWMWRAZNGSIHXITOFALPIJAMIVKHYBHSOVXPJTBCWAYKJKTUYRBIDQRLV");
    msg.rssi = 0.6722299905482473;
    msg.integrity = 62671U;

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
    msg.setTimeStamp(0.7809055352646046);
    msg.setSource(27864U);
    msg.setSourceEntity(205U);
    msg.setDestination(3156U);
    msg.setDestinationEntity(55U);
    msg.peer.assign("BVPTLBZXHSHKYZFZMCFNPCTJBTQJULFXIJKUPIBLYNJOSLCOODNQUXWDTUCEAVODVGPLPFAVQESTTPNTXOKNZCKDNQQWJVISSJHXUXQDPXRZUVILDDHHWSFFAYROZEFEJMSGHYYMMVTYAEJQMYWWMIRBIBHSIWHAGAKMRVUALSUEYYGDNWPLFGNAOJCEGXMCLTKGRYWZXZCRBAINDFRHAHEQTBRJIPKERMBOZBXQUGSZPKWOC");
    msg.rssi = 0.5809297147947748;
    msg.integrity = 17158U;

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
    msg.setTimeStamp(0.9563404769566252);
    msg.setSource(20659U);
    msg.setSourceEntity(228U);
    msg.setDestination(46147U);
    msg.setDestinationEntity(186U);
    msg.peer.assign("VSHWDRIPRLFJKABWKGMVNBFXGKUACASWRDTMYWXDOOQVFWTFNJPVYBELNDALJKGUYQXOCIOQNYVOSMYQIMBILJKYHPOLCE");
    msg.rssi = 0.8974880631047344;
    msg.integrity = 29789U;

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
    msg.setTimeStamp(0.8237934963155209);
    msg.setSource(48418U);
    msg.setSourceEntity(118U);
    msg.setDestination(833U);
    msg.setDestinationEntity(64U);
    msg.req_id = 16212U;
    msg.destination.assign("QYJPNTRRPEVWCNEQNDYKUVHJCPHOWDIFNKMBVUXQYVIFQHEPIAOBWTVEUSSQJOPGNSEKXGKVKDRFNMXKNRNFRQJDOUHSVOAYBHZGFFUJDUTTICVXRGBSOVTHL");
    msg.timeout = 0.5860736483202685;
    msg.range = 0.09185878867248953;
    msg.type = 103U;
    IMC::RhodamineDye tmp_msg_0;
    tmp_msg_0.value = 0.9723716274587683;
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
    msg.setTimeStamp(0.7704550169907051);
    msg.setSource(58806U);
    msg.setSourceEntity(241U);
    msg.setDestination(5265U);
    msg.setDestinationEntity(43U);
    msg.req_id = 37164U;
    msg.destination.assign("HTHPKNEMOBBLNVBYETPHXDZADVJKGZZWKZPMDDGWLHFAGYUNQXMZYRQESXRPRKFWWWYPWQRSLMAFLQQAXQUTRJWNNTEIDQTVZANSOHWOUVJOXUGLHZGUSKQSFOJVWGNFBCBUETCZNFIECKDGTBVIIHCEDFYAOALHPODIKXCEUMKAZPERXYBTIYKWFNGSUXZHICJCYRITLEUYHMQKISCPLMVOLSSPQMRRNJFJBPJVRMXMITDCJDFGCO");
    msg.timeout = 0.32877425381938263;
    msg.range = 0.4709912267186035;
    msg.type = 162U;
    IMC::Dislodge tmp_msg_0;
    tmp_msg_0.timeout = 54059U;
    tmp_msg_0.rpm = 0.6834295565934213;
    tmp_msg_0.direction = 57U;
    tmp_msg_0.custom.assign("IMVHXYYMBJAGGBIPGSWSKTDTRLGGITUUPSPMGRSOZAWXXDILMSAAOWJYEBEMVJJRBSHSMNZBWSTIZDCARUTDBWKSXPCM");
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
    msg.setTimeStamp(0.4891109921138943);
    msg.setSource(42070U);
    msg.setSourceEntity(192U);
    msg.setDestination(15241U);
    msg.setDestinationEntity(28U);
    msg.req_id = 33408U;
    msg.destination.assign("LGFYVOLEHNOGEWNBFAREDOAWYIYPEYHHBKNLPNWVIAVFYTGXSETCGDJDAUCTRPIMFBUVSDJZFJDUDQXIUTHBXMQRTVVCZQWMXHRCPNNMEKWROQRR");
    msg.timeout = 0.8510730252043196;
    msg.range = 0.6119535153803063;
    msg.type = 9U;
    IMC::Throttle tmp_msg_0;
    tmp_msg_0.value = 0.9566287755278376;
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
    msg.setTimeStamp(0.598667401730636);
    msg.setSource(18292U);
    msg.setSourceEntity(107U);
    msg.setDestination(38633U);
    msg.setDestinationEntity(98U);
    msg.req_id = 6191U;
    msg.type = 106U;
    msg.status = 99U;
    msg.info.assign("JBOAGLNWEYSLVRCLUUAUATWJJCCIFIBXZXFDORMNQFKKGVHIHKGDDSETIEMGLRUWYCFDLPCNSJMUPQYAFYYQZITKRVNIMNLW");
    msg.range = 0.07441354147915324;

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
    msg.setTimeStamp(0.7315846572391937);
    msg.setSource(42198U);
    msg.setSourceEntity(104U);
    msg.setDestination(43419U);
    msg.setDestinationEntity(143U);
    msg.req_id = 47745U;
    msg.type = 208U;
    msg.status = 221U;
    msg.info.assign("HEVKBDERMLCFCBABEPZIGQVTUPVEEINSIPOEMGHLSMCIRRIOFCXORPLAAKYCUMYRRZVUWVTNVGXAIIZDRYHPXRPWFDTDEYRKWXHEWQTXCIDHHLNBOWRWOGMKFJPFENNOKDOQHSLUCMXNFUHKWIFBMFTGDZOTQVUXKCNSZGGZQNDLGNUGQBB");
    msg.range = 0.18411755504738758;

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
    msg.setTimeStamp(0.4536907995699877);
    msg.setSource(32988U);
    msg.setSourceEntity(31U);
    msg.setDestination(23875U);
    msg.setDestinationEntity(227U);
    msg.req_id = 35261U;
    msg.type = 133U;
    msg.status = 86U;
    msg.info.assign("TZRJPIPFBNORXJQKERHUMPJXOXQDHYXYGAWTZUKGDFGPCUKBYNBBWDVOZHAYZHWJLEAVZSZDIUPSCKIZONQQTHKXOMAJYJLMHMCWMHXTDTLTYEQTMRPCLWGOJALRKNDRCNGXTFNQEZQZWRLRSEPGVIMQESAEILKHEWNETSGFKXVBFUGVFRHNVTPID");
    msg.range = 0.05690052582768457;

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
    msg.setTimeStamp(0.7511440475918363);
    msg.setSource(29014U);
    msg.setSourceEntity(31U);
    msg.setDestination(30103U);
    msg.setDestinationEntity(160U);
    msg.system.assign("DDEVPBNQBDRSUKYFFJXEGKFQQURVTISI");
    msg.op = 115U;

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
    msg.setTimeStamp(0.20806843651679896);
    msg.setSource(58466U);
    msg.setSourceEntity(150U);
    msg.setDestination(11802U);
    msg.setDestinationEntity(125U);
    msg.system.assign("GLHRZKBPSEQOMMVAMGQS");
    msg.op = 17U;

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
    msg.setTimeStamp(0.06983916539644441);
    msg.setSource(62160U);
    msg.setSourceEntity(201U);
    msg.setDestination(23171U);
    msg.setDestinationEntity(154U);
    msg.system.assign("PSQBLWNAGHDXCJYTXREYHEZPNUIYDMNEPHIBTGTXKVCVYBPSJCFSFAFTZOUALQWDMIZJRZIQUUYFYGAXQKBWHKVFMHGVVWHPLUIGELPYSCMRQCHUCFASFBUDEQRDKGCSMSOUYBCBLTJXJQDEWTPNFURZVKDIJBGELNHTKSJLTAZ");
    msg.op = 215U;

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
    msg.setTimeStamp(0.04333428869346123);
    msg.setSource(750U);
    msg.setSourceEntity(85U);
    msg.setDestination(11539U);
    msg.setDestinationEntity(55U);
    msg.value = -31513;

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
    msg.setTimeStamp(0.18998311941541846);
    msg.setSource(24838U);
    msg.setSourceEntity(2U);
    msg.setDestination(45878U);
    msg.setDestinationEntity(79U);
    msg.value = 8168;

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
    msg.setTimeStamp(0.3026899170290409);
    msg.setSource(30810U);
    msg.setSourceEntity(41U);
    msg.setDestination(13619U);
    msg.setDestinationEntity(209U);
    msg.value = -31622;

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
    msg.setTimeStamp(0.37819805048983957);
    msg.setSource(51024U);
    msg.setSourceEntity(229U);
    msg.setDestination(50827U);
    msg.setDestinationEntity(219U);
    msg.value = 0.894493115411199;

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
    msg.setTimeStamp(0.03714976603415787);
    msg.setSource(34860U);
    msg.setSourceEntity(11U);
    msg.setDestination(31053U);
    msg.setDestinationEntity(111U);
    msg.value = 0.8994554436241344;

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
    msg.setTimeStamp(0.06150858358423994);
    msg.setSource(60284U);
    msg.setSourceEntity(59U);
    msg.setDestination(17888U);
    msg.setDestinationEntity(65U);
    msg.value = 0.5270818816491547;

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
    msg.setTimeStamp(0.3692325700054676);
    msg.setSource(43306U);
    msg.setSourceEntity(112U);
    msg.setDestination(20206U);
    msg.setDestinationEntity(4U);
    msg.value = 0.5690741845091303;

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
    msg.setTimeStamp(0.5001924409108671);
    msg.setSource(23085U);
    msg.setSourceEntity(111U);
    msg.setDestination(44947U);
    msg.setDestinationEntity(51U);
    msg.value = 0.43147784769589603;

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
    msg.setTimeStamp(0.6626724544821518);
    msg.setSource(47621U);
    msg.setSourceEntity(149U);
    msg.setDestination(45507U);
    msg.setDestinationEntity(215U);
    msg.value = 0.6170231042256389;

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
    msg.setTimeStamp(0.1308585583209958);
    msg.setSource(5853U);
    msg.setSourceEntity(112U);
    msg.setDestination(6550U);
    msg.setDestinationEntity(192U);
    msg.validity = 2893U;
    msg.type = 175U;
    msg.utc_year = 30844U;
    msg.utc_month = 24U;
    msg.utc_day = 86U;
    msg.utc_time = 0.10302156220110525;
    msg.lat = 0.19749828659408486;
    msg.lon = 0.0315212495979712;
    msg.height = 0.6153234529381518;
    msg.satellites = 135U;
    msg.cog = 0.40957903675403684;
    msg.sog = 0.5792251451339913;
    msg.hdop = 0.21571559414506014;
    msg.vdop = 0.12782846215455668;
    msg.hacc = 0.5804555464515061;
    msg.vacc = 0.7384938084016057;

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
    msg.setTimeStamp(0.7884186402061821);
    msg.setSource(52052U);
    msg.setSourceEntity(137U);
    msg.setDestination(31394U);
    msg.setDestinationEntity(164U);
    msg.validity = 41614U;
    msg.type = 196U;
    msg.utc_year = 38614U;
    msg.utc_month = 254U;
    msg.utc_day = 149U;
    msg.utc_time = 0.12259866414991927;
    msg.lat = 0.30403469569515196;
    msg.lon = 0.7151945280705009;
    msg.height = 0.9531889651502198;
    msg.satellites = 14U;
    msg.cog = 0.5868828900793779;
    msg.sog = 0.784214751349745;
    msg.hdop = 0.21767344571362146;
    msg.vdop = 0.1366776471903861;
    msg.hacc = 0.5360937096177917;
    msg.vacc = 0.013804320579459683;

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
    msg.setTimeStamp(0.9597607722732204);
    msg.setSource(36544U);
    msg.setSourceEntity(85U);
    msg.setDestination(30819U);
    msg.setDestinationEntity(9U);
    msg.validity = 45155U;
    msg.type = 203U;
    msg.utc_year = 49311U;
    msg.utc_month = 79U;
    msg.utc_day = 230U;
    msg.utc_time = 0.43584539730325256;
    msg.lat = 0.46505519605363455;
    msg.lon = 0.7002404498539896;
    msg.height = 0.5087831347881838;
    msg.satellites = 213U;
    msg.cog = 0.003577753727909694;
    msg.sog = 0.171396723778651;
    msg.hdop = 0.8278168373533337;
    msg.vdop = 0.5623620130443333;
    msg.hacc = 0.5675829308478298;
    msg.vacc = 0.8681646163314797;

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
    msg.setTimeStamp(0.46276087738058136);
    msg.setSource(30183U);
    msg.setSourceEntity(30U);
    msg.setDestination(25088U);
    msg.setDestinationEntity(234U);
    msg.time = 0.5358415365951926;
    msg.phi = 0.6291376009685663;
    msg.theta = 0.16850966705527437;
    msg.psi = 0.6325395157747304;
    msg.psi_magnetic = 0.5061602551355048;

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
    msg.setTimeStamp(0.8606885061540901);
    msg.setSource(34873U);
    msg.setSourceEntity(203U);
    msg.setDestination(24042U);
    msg.setDestinationEntity(222U);
    msg.time = 0.46597212004581223;
    msg.phi = 0.35332179994703594;
    msg.theta = 0.47814862103451605;
    msg.psi = 0.4517796907860404;
    msg.psi_magnetic = 0.6992480370253931;

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
    msg.setTimeStamp(0.5674795870599639);
    msg.setSource(22243U);
    msg.setSourceEntity(79U);
    msg.setDestination(31207U);
    msg.setDestinationEntity(112U);
    msg.time = 0.9867310061939283;
    msg.phi = 0.48527865521881985;
    msg.theta = 0.5841030046881861;
    msg.psi = 0.7618498525820926;
    msg.psi_magnetic = 0.6496599643061934;

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
    msg.setTimeStamp(0.7584992378286102);
    msg.setSource(39470U);
    msg.setSourceEntity(183U);
    msg.setDestination(13481U);
    msg.setDestinationEntity(99U);
    msg.time = 0.31801013247731624;
    msg.x = 0.6480866639808811;
    msg.y = 0.4026457105995275;
    msg.z = 0.4808687587980057;
    msg.timestep = 0.29641840281626175;

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
    msg.setTimeStamp(0.7977479571911019);
    msg.setSource(2087U);
    msg.setSourceEntity(54U);
    msg.setDestination(44704U);
    msg.setDestinationEntity(100U);
    msg.time = 0.5856124317352288;
    msg.x = 0.9424135414451598;
    msg.y = 0.7397661017359071;
    msg.z = 0.7945942133202406;
    msg.timestep = 0.21356802249167384;

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
    msg.setTimeStamp(0.3835795497869391);
    msg.setSource(25517U);
    msg.setSourceEntity(11U);
    msg.setDestination(10155U);
    msg.setDestinationEntity(234U);
    msg.time = 0.1034381194982561;
    msg.x = 0.6036665448212342;
    msg.y = 0.33859082879118285;
    msg.z = 0.3879693351729485;
    msg.timestep = 0.03804856174406379;

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
    msg.setTimeStamp(0.8360186241426993);
    msg.setSource(9134U);
    msg.setSourceEntity(226U);
    msg.setDestination(36107U);
    msg.setDestinationEntity(20U);
    msg.time = 0.14010202627556312;
    msg.x = 0.593434763914137;
    msg.y = 0.843924613776062;
    msg.z = 0.23294247348123687;

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
    msg.setTimeStamp(0.9579195090353538);
    msg.setSource(30085U);
    msg.setSourceEntity(123U);
    msg.setDestination(31009U);
    msg.setDestinationEntity(33U);
    msg.time = 0.20243145143437502;
    msg.x = 0.6487559110892898;
    msg.y = 0.04832286636194938;
    msg.z = 0.9418413863621469;

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
    msg.setTimeStamp(0.9249476968007795);
    msg.setSource(23040U);
    msg.setSourceEntity(222U);
    msg.setDestination(54731U);
    msg.setDestinationEntity(198U);
    msg.time = 0.5312299216237543;
    msg.x = 0.16024697494167295;
    msg.y = 0.46794463821819676;
    msg.z = 0.7237762577826837;

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
    msg.setTimeStamp(0.005702366223584887);
    msg.setSource(43054U);
    msg.setSourceEntity(192U);
    msg.setDestination(52994U);
    msg.setDestinationEntity(122U);
    msg.time = 0.987245804493222;
    msg.x = 0.10810636960224518;
    msg.y = 0.5130351198432502;
    msg.z = 0.10889936902338859;

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
    msg.setTimeStamp(0.2883855133298783);
    msg.setSource(42883U);
    msg.setSourceEntity(60U);
    msg.setDestination(36765U);
    msg.setDestinationEntity(27U);
    msg.time = 0.09506874651136654;
    msg.x = 0.8292875952678084;
    msg.y = 0.6242400680520102;
    msg.z = 0.5357971454248207;

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
    msg.setTimeStamp(0.28163812236024377);
    msg.setSource(39554U);
    msg.setSourceEntity(145U);
    msg.setDestination(59208U);
    msg.setDestinationEntity(151U);
    msg.time = 0.8184473753796705;
    msg.x = 0.2855226195414564;
    msg.y = 0.730199588442707;
    msg.z = 0.33196790630873896;

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
    msg.setTimeStamp(0.5173754894916669);
    msg.setSource(3149U);
    msg.setSourceEntity(132U);
    msg.setDestination(42377U);
    msg.setDestinationEntity(179U);
    msg.time = 0.7970296285791283;
    msg.x = 0.5798965033296717;
    msg.y = 0.2883708851199115;
    msg.z = 0.2037014549144962;

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
    msg.setTimeStamp(0.4900569551324291);
    msg.setSource(19825U);
    msg.setSourceEntity(106U);
    msg.setDestination(11000U);
    msg.setDestinationEntity(137U);
    msg.time = 0.9814199274941293;
    msg.x = 0.36841455311904237;
    msg.y = 0.3477850937636129;
    msg.z = 0.5361387961132155;

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
    msg.setTimeStamp(0.8687356857607428);
    msg.setSource(53481U);
    msg.setSourceEntity(126U);
    msg.setDestination(10826U);
    msg.setDestinationEntity(94U);
    msg.time = 0.1434835191601861;
    msg.x = 0.7553518017956375;
    msg.y = 0.8628473449363967;
    msg.z = 0.673761781913047;

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
    msg.setTimeStamp(0.7817068138314504);
    msg.setSource(21771U);
    msg.setSourceEntity(219U);
    msg.setDestination(45623U);
    msg.setDestinationEntity(172U);
    msg.validity = 80U;
    msg.x = 0.7111038308631051;
    msg.y = 0.953804842042164;
    msg.z = 0.6739370591093772;

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
    msg.setTimeStamp(0.14112107127700402);
    msg.setSource(5402U);
    msg.setSourceEntity(11U);
    msg.setDestination(16846U);
    msg.setDestinationEntity(165U);
    msg.validity = 94U;
    msg.x = 0.17510084451218355;
    msg.y = 0.9165060794072817;
    msg.z = 0.049131577513970126;

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
    msg.setTimeStamp(0.6349606324460829);
    msg.setSource(26855U);
    msg.setSourceEntity(4U);
    msg.setDestination(23902U);
    msg.setDestinationEntity(216U);
    msg.validity = 101U;
    msg.x = 0.9493564806830008;
    msg.y = 0.21076799908595456;
    msg.z = 0.41643304430904204;

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
    msg.setTimeStamp(0.6733225259689154);
    msg.setSource(17938U);
    msg.setSourceEntity(170U);
    msg.setDestination(39460U);
    msg.setDestinationEntity(36U);
    msg.validity = 113U;
    msg.x = 0.33574144249575233;
    msg.y = 0.2664081054129426;
    msg.z = 0.6121977120756207;

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
    msg.setTimeStamp(0.5093393227786851);
    msg.setSource(31842U);
    msg.setSourceEntity(51U);
    msg.setDestination(43823U);
    msg.setDestinationEntity(191U);
    msg.validity = 234U;
    msg.x = 0.11036490877117833;
    msg.y = 0.9371287957787485;
    msg.z = 0.4311811797448786;

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
    msg.setTimeStamp(0.2762192100511529);
    msg.setSource(24296U);
    msg.setSourceEntity(146U);
    msg.setDestination(35675U);
    msg.setDestinationEntity(183U);
    msg.validity = 183U;
    msg.x = 0.24880765028101193;
    msg.y = 0.24829829298924633;
    msg.z = 0.15080875426164886;

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
    msg.setTimeStamp(0.27159489613972987);
    msg.setSource(7259U);
    msg.setSourceEntity(206U);
    msg.setDestination(42352U);
    msg.setDestinationEntity(102U);
    msg.time = 0.8321682032834349;
    msg.x = 0.9567724977299008;
    msg.y = 0.847124899047743;
    msg.z = 0.06167997571513817;

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
    msg.setTimeStamp(0.08360959828575154);
    msg.setSource(37432U);
    msg.setSourceEntity(196U);
    msg.setDestination(47969U);
    msg.setDestinationEntity(34U);
    msg.time = 0.6101571741373405;
    msg.x = 0.5655542738849767;
    msg.y = 0.7261921754551165;
    msg.z = 0.5837807260232691;

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
    msg.setTimeStamp(0.11384779904549314);
    msg.setSource(37219U);
    msg.setSourceEntity(238U);
    msg.setDestination(18974U);
    msg.setDestinationEntity(226U);
    msg.time = 0.7548147178520986;
    msg.x = 0.8425696808536741;
    msg.y = 0.2380179480602056;
    msg.z = 0.881198485344892;

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
    msg.setTimeStamp(0.7428067921289635);
    msg.setSource(21191U);
    msg.setSourceEntity(12U);
    msg.setDestination(1975U);
    msg.setDestinationEntity(185U);
    msg.validity = 18U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.6005658335478227;
    tmp_msg_0.y = 0.21395561771755256;
    tmp_msg_0.z = 0.860486633255697;
    tmp_msg_0.phi = 0.033982815812754086;
    tmp_msg_0.theta = 0.8023006029596949;
    tmp_msg_0.psi = 0.5627629808185107;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.0672104523000342;
    tmp_msg_1.beam_height = 0.14583275501767634;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.8254850834627991;

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
    msg.setTimeStamp(0.48312853192857697);
    msg.setSource(55868U);
    msg.setSourceEntity(171U);
    msg.setDestination(63071U);
    msg.setDestinationEntity(32U);
    msg.validity = 160U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.33767154087896467;
    tmp_msg_0.y = 0.9944783859674052;
    tmp_msg_0.z = 0.7403750704608086;
    tmp_msg_0.phi = 0.6203424661619636;
    tmp_msg_0.theta = 0.8865003777181711;
    tmp_msg_0.psi = 0.6017193431412163;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.34285105221657386;

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
    msg.setTimeStamp(0.6887471087622526);
    msg.setSource(62064U);
    msg.setSourceEntity(117U);
    msg.setDestination(7520U);
    msg.setDestinationEntity(212U);
    msg.validity = 13U;
    msg.value = 0.5976080236464174;

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
    msg.setTimeStamp(0.8127377526133192);
    msg.setSource(43169U);
    msg.setSourceEntity(217U);
    msg.setDestination(27674U);
    msg.setDestinationEntity(230U);
    msg.value = 0.045897476989138264;

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
    msg.setTimeStamp(0.11165250129843474);
    msg.setSource(34986U);
    msg.setSourceEntity(175U);
    msg.setDestination(7670U);
    msg.setDestinationEntity(79U);
    msg.value = 0.36251716366369213;

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
    msg.setTimeStamp(0.7375644847226486);
    msg.setSource(30512U);
    msg.setSourceEntity(0U);
    msg.setDestination(6734U);
    msg.setDestinationEntity(126U);
    msg.value = 0.38261193767626434;

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
    msg.setTimeStamp(0.2422643496042568);
    msg.setSource(37722U);
    msg.setSourceEntity(231U);
    msg.setDestination(59349U);
    msg.setDestinationEntity(81U);
    msg.value = 0.10842327383813755;

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
    msg.setTimeStamp(0.5996243014818025);
    msg.setSource(18195U);
    msg.setSourceEntity(172U);
    msg.setDestination(41275U);
    msg.setDestinationEntity(122U);
    msg.value = 0.1933335650235235;

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
    msg.setTimeStamp(0.17655241748203732);
    msg.setSource(42669U);
    msg.setSourceEntity(96U);
    msg.setDestination(6809U);
    msg.setDestinationEntity(242U);
    msg.value = 0.3674525214199339;

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
    msg.setTimeStamp(0.039904761871943584);
    msg.setSource(50656U);
    msg.setSourceEntity(230U);
    msg.setDestination(16207U);
    msg.setDestinationEntity(230U);
    msg.value = 0.6208388944871395;

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
    msg.setTimeStamp(0.40716101217893164);
    msg.setSource(2941U);
    msg.setSourceEntity(135U);
    msg.setDestination(18232U);
    msg.setDestinationEntity(77U);
    msg.value = 0.36762630263976726;

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
    msg.setTimeStamp(0.8564985745561451);
    msg.setSource(13755U);
    msg.setSourceEntity(8U);
    msg.setDestination(20584U);
    msg.setDestinationEntity(68U);
    msg.value = 0.7563027706754347;

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
    msg.setTimeStamp(0.6394057452328653);
    msg.setSource(2967U);
    msg.setSourceEntity(175U);
    msg.setDestination(27863U);
    msg.setDestinationEntity(160U);
    msg.value = 0.15143349022484087;

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
    msg.setTimeStamp(0.18751327285711916);
    msg.setSource(36596U);
    msg.setSourceEntity(194U);
    msg.setDestination(15563U);
    msg.setDestinationEntity(212U);
    msg.value = 0.04781584953822049;

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
    msg.setTimeStamp(0.4396230054154465);
    msg.setSource(26293U);
    msg.setSourceEntity(227U);
    msg.setDestination(7009U);
    msg.setDestinationEntity(71U);
    msg.value = 0.016711188325675197;

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
    msg.setTimeStamp(0.3773506007864833);
    msg.setSource(17078U);
    msg.setSourceEntity(60U);
    msg.setDestination(28347U);
    msg.setDestinationEntity(152U);
    msg.value = 0.28728000789502983;

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
    msg.setTimeStamp(0.7476507898846699);
    msg.setSource(50517U);
    msg.setSourceEntity(32U);
    msg.setDestination(33845U);
    msg.setDestinationEntity(229U);
    msg.value = 0.35479303692500463;

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
    msg.setTimeStamp(0.6272434673896706);
    msg.setSource(23373U);
    msg.setSourceEntity(192U);
    msg.setDestination(8180U);
    msg.setDestinationEntity(143U);
    msg.value = 0.8500837466020711;

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
    msg.setTimeStamp(0.3219419229434053);
    msg.setSource(12365U);
    msg.setSourceEntity(222U);
    msg.setDestination(40042U);
    msg.setDestinationEntity(124U);
    msg.value = 0.12574570345466018;

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
    msg.setTimeStamp(0.12783732778704648);
    msg.setSource(52759U);
    msg.setSourceEntity(27U);
    msg.setDestination(7585U);
    msg.setDestinationEntity(242U);
    msg.value = 0.4908889517149888;

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
    msg.setTimeStamp(0.554333077454002);
    msg.setSource(26360U);
    msg.setSourceEntity(92U);
    msg.setDestination(18095U);
    msg.setDestinationEntity(10U);
    msg.value = 0.8700184044164061;

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
    msg.setTimeStamp(0.0652996089886344);
    msg.setSource(41170U);
    msg.setSourceEntity(253U);
    msg.setDestination(22179U);
    msg.setDestinationEntity(81U);
    msg.value = 0.650533631013211;

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
    msg.setTimeStamp(0.4026272855973976);
    msg.setSource(63604U);
    msg.setSourceEntity(32U);
    msg.setDestination(57452U);
    msg.setDestinationEntity(79U);
    msg.value = 0.891865499679327;

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
    msg.setTimeStamp(0.4222616260753491);
    msg.setSource(43594U);
    msg.setSourceEntity(144U);
    msg.setDestination(45298U);
    msg.setDestinationEntity(22U);
    msg.value = 0.5425555794195249;

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
    msg.setTimeStamp(0.36773444661935584);
    msg.setSource(25248U);
    msg.setSourceEntity(250U);
    msg.setDestination(16474U);
    msg.setDestinationEntity(235U);
    msg.value = 0.008168101412871387;

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
    msg.setTimeStamp(0.7304392608624078);
    msg.setSource(30154U);
    msg.setSourceEntity(197U);
    msg.setDestination(61830U);
    msg.setDestinationEntity(22U);
    msg.value = 0.1487103922605637;

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
    msg.setTimeStamp(0.07947414418760679);
    msg.setSource(8289U);
    msg.setSourceEntity(15U);
    msg.setDestination(40631U);
    msg.setDestinationEntity(85U);
    msg.value = 0.18624761232467701;

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
    msg.setTimeStamp(0.19040761307339749);
    msg.setSource(51386U);
    msg.setSourceEntity(248U);
    msg.setDestination(57254U);
    msg.setDestinationEntity(171U);
    msg.direction = 0.016076283708263417;
    msg.speed = 0.20786965658980072;
    msg.turbulence = 0.45317249273216986;

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
    msg.setTimeStamp(0.06417428212873955);
    msg.setSource(51883U);
    msg.setSourceEntity(72U);
    msg.setDestination(65185U);
    msg.setDestinationEntity(131U);
    msg.direction = 0.4903354068784884;
    msg.speed = 0.13684946014451838;
    msg.turbulence = 0.20061303858289004;

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
    msg.setTimeStamp(0.9020023257481405);
    msg.setSource(64923U);
    msg.setSourceEntity(6U);
    msg.setDestination(2779U);
    msg.setDestinationEntity(232U);
    msg.direction = 0.9252447545046123;
    msg.speed = 0.9923069006445393;
    msg.turbulence = 0.5120862242890932;

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
    msg.setTimeStamp(0.160877911287162);
    msg.setSource(44016U);
    msg.setSourceEntity(69U);
    msg.setDestination(14398U);
    msg.setDestinationEntity(118U);
    msg.value = 0.4521252711147762;

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
    msg.setTimeStamp(0.39269987371378);
    msg.setSource(41091U);
    msg.setSourceEntity(152U);
    msg.setDestination(9867U);
    msg.setDestinationEntity(94U);
    msg.value = 0.16030472605775548;

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
    msg.setTimeStamp(0.5786828208017649);
    msg.setSource(3451U);
    msg.setSourceEntity(240U);
    msg.setDestination(46368U);
    msg.setDestinationEntity(40U);
    msg.value = 0.012016761778491536;

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
    msg.setTimeStamp(0.8625640557645935);
    msg.setSource(31051U);
    msg.setSourceEntity(108U);
    msg.setDestination(1225U);
    msg.setDestinationEntity(104U);
    msg.value.assign("ZNSJTXZTJKWNSYICUITIVXEQCMPDEWDXFKTFBYOAQSXHYCWBUMSFFTAFBYGHURTAQFJCJYMCVGQUZOONCMGRTPQRBTSUZARJUAYTBFTLSCQVMHPKLPUOLDRNAAZKQFNDJXMONHENKGUDBHISHRLGOEASGWKPWIEIEIZSMNNGJLGJC");

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
    msg.setTimeStamp(0.1509783178031151);
    msg.setSource(24734U);
    msg.setSourceEntity(106U);
    msg.setDestination(22048U);
    msg.setDestinationEntity(51U);
    msg.value.assign("APQLFCXEGWBDJWOBYPRTSXGJLGZHSJVNBLTJCUVLOHLAEIZKYPDXURMGQSEYGLQJCWKLRAZQRPSUSFIXKSIFAXEJJGOXYQNFXDTKDSQKBRKVNHXBYGMGNQHVUVYNIKWUMMDMEHZJTYFEGPFPEMPBZAPWOROJHROICKTAYWYVQGEPMTTCBZABSFQKDQSOFICDNUVXCMONFVZBEJRIDNPUWU");

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
    msg.setTimeStamp(0.25471036829867066);
    msg.setSource(60225U);
    msg.setSourceEntity(87U);
    msg.setDestination(46314U);
    msg.setDestinationEntity(97U);
    msg.value.assign("OGUSSYMXRUOKDVPWYDYWGQJCRVXSYTIMGGNQREGCLJUNQDBQHDMFWPFXYYOOECWKANDCSAGUHSEWUJXLLQD");

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
    msg.setTimeStamp(0.6555207101053296);
    msg.setSource(55883U);
    msg.setSourceEntity(53U);
    msg.setDestination(24364U);
    msg.setDestinationEntity(78U);
    const signed char tmp_msg_0[] = {-90, 52, -34, 93, 33, -112, 15, -69, 49, 83, 74, -79, -3, 98, 120, 31, -3, 1, 25, 3, -27, -116, -84, 76, 85, 99, -17, 87, 109, -50, 100, -102, -112, -11, 76, 43, -32, -75, -5, -95, -113, 45, -115, 114, 41, 96, -125, -88, -2, 29, -3, 16, 125, 29, 89, -15, -67, 51, 57, -54, -78, -69, -28, -118, 22, 10, 7, -88, 73, 111, 86, 111, 19, 86, -106, 70, 25, 38, 49, -20, 121, 111, -6, 118, 4, 69, 79, -81, 82, -69, 109, 70, 106, 58, 50, 103, -27, 22, 41, -106, 105, -98, 50, -82, 22, -36, 6, 11, -119, -75, 62, 12, 9, 14, 20, 75, 66, 59, 120, -17, -40};
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
    msg.setTimeStamp(0.04653336833923094);
    msg.setSource(17512U);
    msg.setSourceEntity(183U);
    msg.setDestination(4973U);
    msg.setDestinationEntity(193U);
    const signed char tmp_msg_0[] = {37, -125, -79, -42, 18, 6, -65, -76, -88, -50, -21, -74, 3, 110, 47, -63, -115, 71, 100, -71, 58, 55, 20, 3, 58, 105, 116, 21, 91, -32, 48, 29, 14, 15, -113, 42, 118, -83, -77, -123, 86, 20, 92, -41, -11, 80, -12, 94, -52, -108, 12, 53, -20, -40, -46, 107, 52, 60, 12, -70, 101, 76, -62, -42, -66, -25, -81, -52, 63, -68, -66, -10, -99, 52, 105, 1, -84, 11, -87, 30, 73, -111, 31, 114, 40, 36, -36, -127, 12, 39, -91, 38, -82, -106, 118, 70, 35, -69, -94, -72, 67, 59, 10, -62, 19, 88, -1, -87, -84, -3, 89, 39, -114, -75, 7, 106, -101, -127, -54, 101, 18, -115, 122, -36, 116, 97, 56, 19, -64, 23, -56, 32, -110, 50, 5, 1, 123, -65, -14, -66, -70, 9, -18, 96, 7, 35, -84, -78, -127, -31, -30, 96, 123, 47, -118, -26, -60, -89, 31, -28, -28, 61, 9, 45, 108, 6, -120, 47, -23, -11, 72, 63, -80, 74, 110, -29, 95, 13, -93, 11, -97};
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
    msg.setTimeStamp(0.6518652241009669);
    msg.setSource(61391U);
    msg.setSourceEntity(5U);
    msg.setDestination(5327U);
    msg.setDestinationEntity(134U);
    const signed char tmp_msg_0[] = {-51, 69, -102, 61, -102, -9, 45, -118, 105, 116, 13, 13, -82, -22, 91, -114, 83, -46, 68, -9, -113, 64, -3, -49, 118, -61, -124, 104, -33, 110, 69, 48, -32, -34, 79, 44, -26, -45, -99, 35, 58, 33, -88, 62, -13, -36, 36, -87, -61, 87, 41, 77, -101, 100, -96, -116, 91, -109, -74, 23, -64, 42, 48, 20, 13, 13, -44, 91, 87, 80, 96, 126, -10, -79, 108, 95, -67, 26, -69, 23, -89, -19, -72, 82, -48, -123, 78, -116, 53, -84, -25, -31, -38, 102, -37, 44, 39, 28, 94, -106, 84, -93, -91, -48, -124, -120, -67, 124, 47, -103, 107, -125, 12, 120, -4, -61, 70, -59, 61, 98, 84, -51, 68, 25, -105, -80, 7, -37, -63, -85, 19, 54, -66, -111, 55, 46, -12, 28, -121, -64, 91, -42, 112, 114, 23, 78, -23, -72, 1, 89, 116, -15, -25, 104, 14, 58, 3, 26, 44, 70, 72, -60, 91, -128, 83, 7, -105, 125, -122, 81, 77, 96, -50, -102, -57, 6, -35, 110, -99, -53, -34, 94, 21, 27, -40, 25, -98, 109, 67, 34, -113, -15, 66, -119, -124, -93, -71, 103, 39, 75, 118, 47, 89, 34, -67, -79, 43, -87, 84, -10, 55, -8, 75, -55, -103, 100, 110};
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
    msg.setTimeStamp(0.7360868806251644);
    msg.setSource(20341U);
    msg.setSourceEntity(124U);
    msg.setDestination(28592U);
    msg.setDestinationEntity(136U);
    msg.value = 0.7595065693962978;

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
    msg.setTimeStamp(0.3950595263133305);
    msg.setSource(43223U);
    msg.setSourceEntity(128U);
    msg.setDestination(7593U);
    msg.setDestinationEntity(36U);
    msg.value = 0.7432611443868924;

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
    msg.setTimeStamp(0.45391109594507506);
    msg.setSource(44895U);
    msg.setSourceEntity(254U);
    msg.setDestination(10325U);
    msg.setDestinationEntity(242U);
    msg.value = 0.5011912376234517;

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
    msg.setTimeStamp(0.8614609570506173);
    msg.setSource(53533U);
    msg.setSourceEntity(239U);
    msg.setDestination(22730U);
    msg.setDestinationEntity(65U);
    msg.type = 169U;
    msg.frequency = 1602590425U;
    msg.min_range = 30418U;
    msg.max_range = 50355U;
    msg.bits_per_point = 44U;
    msg.scale_factor = 0.576897688597583;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.054660730170791316;
    tmp_msg_0.beam_height = 0.9901784418373908;
    msg.beam_config.push_back(tmp_msg_0);
    const signed char tmp_msg_1[] = {42, -13, 12, 126, -5, -111, 11, 9, 21, -84, -22, 0, 67, -86, 85, -120, 61, -87, 58, -118, 112, 117, -49, 27, -106, -128, -121, 60, 11, -59, -72, 16, -3, 68, -53, 125, 96, -94, -26, -17, -53, -126, 93, -6, -85, -122, -102, 53, 13, -72, -70, -13, -94, -52, 79, -100, -90, -2, -126, -112, -21, 89, 76, 21, -46, -27, 7, -24, 80, -1, 67, -10, -106, 11, 56, -127, -3, -93, -100, 97, -54, 5, 5, 59, -40, 76, 110, -66, 109, -124, 106, 35, 31, 11, -39, 38, -60, 40, -18, 25, -2, 98, -93, 103, -67, -87, 90, 60, 126, -52, -30, 70, 59, -77, 16, -10, -14, -106, 112, -63, 38, 54, -110, -113, -59, 79, -63, 89, 24, -98, 82, 73, 72, 44, 48, -85, -26, 63, -4, -9, 120, -8, -44, -8, 104, 99, 46, -96, -41, -128, -25, 1, 79, 29, -69, -16, 94, 65, 51, -112, -34, 16, 124, 13, 11, -34, -120, 1, 82, 84, -11, -104, -8, 2, 55, -65, 82, 16, 9, -65};
    msg.data.assign(tmp_msg_1, tmp_msg_1 + sizeof(tmp_msg_1));

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
    msg.setTimeStamp(0.5611861518708839);
    msg.setSource(19182U);
    msg.setSourceEntity(253U);
    msg.setDestination(7014U);
    msg.setDestinationEntity(89U);
    msg.type = 34U;
    msg.frequency = 1094753804U;
    msg.min_range = 18939U;
    msg.max_range = 50338U;
    msg.bits_per_point = 64U;
    msg.scale_factor = 0.18900147529149303;
    const signed char tmp_msg_0[] = {-108, 39, -53, -59, -6, -105, 47, -57, -25, 117, 120, 44, 35, -58, -123, -81, 79, 72, 92, 97, -100, -85, -114, 104, 57, -49, -39, -58, -9, 104, 93, 72, -38, 112, -73, -121, -103, -114, 28, -121, -5, -75, -111, -86, -42, -117, -7, -31, 79, 71, 23, -13, -111, 36, 14, -123, -28, 11, -49, -27, 73, -62, 80, -88, -70, -53, -80, 64, -52, 35, -86, 107, -18, 50, 39, -114, 57, -48, 101, 69, -52, 29, -27, -113, -9, -30, 64, 126, -116, 102, 39, 109, 110, -27, -104, -40, -114, -119, -75, -18, -100, 95, -47, 49, 56, 118, -6, -88, 18, 18, -24, 99, 70, 23, 68, 119, 32, 115, 55, -17, 30, 119, 16, 43, 89, 42, -34, -84, 83, 50, -11, -6, -97, -105, -106, 31, -34, -87, 7, -71, -66, -105, 30, 62, -67, 23, -104, 50, 16, 86, 45, 12, 39, -40, 95, -6, 90, 111, -97, -36, 111, 32, 56, 69, -79, 90, -35, 26, -107, -81, 57, -26, 13, -84, 103, -101, -67, -55, 118, -93, 18, -99, -114, 38, -11, -14, 84, -48, 85, 30, -8, -2, 95, -92, 122, -70, -84, -44, -127, -89, -20, 94, 9, -16, 52, -95, -89, -103, 120, 84, -117, -21, 107, 117, -47, 50, -55, 44, 103, 75, 21, 75, 34, 4, -118, -43, 96, -2, -27, 40, 32, -116, -91, -83, -35, -11, -18, 117, 13, -47, -100, -118, -89, 116, -71, -95};
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
    msg.setTimeStamp(0.07999467868067645);
    msg.setSource(65103U);
    msg.setSourceEntity(250U);
    msg.setDestination(13080U);
    msg.setDestinationEntity(78U);
    msg.type = 246U;
    msg.frequency = 2560783413U;
    msg.min_range = 64300U;
    msg.max_range = 59680U;
    msg.bits_per_point = 106U;
    msg.scale_factor = 0.8187574960163309;
    const signed char tmp_msg_0[] = {-86, 110, -49, 124, -118, -64, 63, 62, 126, 55, -51, -99, -38, 15, 25, 49, 27, 28, -125, 47, -126, -59, -26, -85, -74, 11, -104, 108, 108, 98, 100, 13, -38, 56, -17, -98, 32, -42, 124, 69, -6, -53, -43, -15, -80, 76, 67, -11, -100, -24, 33, -125, 59, 89, -16, -5, 29, 98, -86, 28, -50, -54, -63, 90, -117, 71, -56, 60, -18, -51, 33, 95, 37, 123, -64, -45, 39, 50, 90, 105, -112, -35, 6, -51, -63, -68, 111, 73, -32, 67};
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
    msg.setTimeStamp(0.5704075643271738);
    msg.setSource(13782U);
    msg.setSourceEntity(73U);
    msg.setDestination(23365U);
    msg.setDestinationEntity(44U);

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
    msg.setTimeStamp(0.0907291919893981);
    msg.setSource(50474U);
    msg.setSourceEntity(159U);
    msg.setDestination(58968U);
    msg.setDestinationEntity(172U);

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
    msg.setTimeStamp(0.1383424550643908);
    msg.setSource(17771U);
    msg.setSourceEntity(122U);
    msg.setDestination(47990U);
    msg.setDestinationEntity(229U);

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
    msg.setTimeStamp(0.9656136692245526);
    msg.setSource(41019U);
    msg.setSourceEntity(220U);
    msg.setDestination(8555U);
    msg.setDestinationEntity(153U);
    msg.op = 193U;

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
    msg.setTimeStamp(0.9765654473393847);
    msg.setSource(4725U);
    msg.setSourceEntity(217U);
    msg.setDestination(30102U);
    msg.setDestinationEntity(80U);
    msg.op = 32U;

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
    msg.setTimeStamp(0.7536481472192285);
    msg.setSource(54739U);
    msg.setSourceEntity(210U);
    msg.setDestination(1700U);
    msg.setDestinationEntity(43U);
    msg.op = 55U;

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
    msg.setTimeStamp(0.5432544981121602);
    msg.setSource(33733U);
    msg.setSourceEntity(24U);
    msg.setDestination(28589U);
    msg.setDestinationEntity(169U);
    msg.value = 0.7683059814657369;
    msg.confidence = 0.27041055623466115;
    msg.opmodes.assign("FCAZFMLPHAFQGVRIQXQFOFHTEBJMOHTBFUCLFWWNKH");

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
    msg.setTimeStamp(0.8522286546699107);
    msg.setSource(38295U);
    msg.setSourceEntity(193U);
    msg.setDestination(58198U);
    msg.setDestinationEntity(227U);
    msg.value = 0.3020590690485042;
    msg.confidence = 0.262510455981544;
    msg.opmodes.assign("YNRUDJECPQKMIUZRMVKRPNPTMEZWFIFA");

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
    msg.setTimeStamp(0.6153225502229938);
    msg.setSource(13349U);
    msg.setSourceEntity(3U);
    msg.setDestination(14572U);
    msg.setDestinationEntity(85U);
    msg.value = 0.5502480251349163;
    msg.confidence = 0.6089876232506087;
    msg.opmodes.assign("MPMHDLTEFKMVPKOBIWNYIQRXKHMUWSWRCAUGWTEKCHYZLATJAUOHBSVKLZDAJ");

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
    msg.setTimeStamp(0.1705312753131245);
    msg.setSource(5908U);
    msg.setSourceEntity(121U);
    msg.setDestination(29987U);
    msg.setDestinationEntity(221U);
    msg.itow = 3244987756U;
    msg.lat = 0.11861942905434941;
    msg.lon = 0.5489873551319829;
    msg.height_ell = 0.9974572018462905;
    msg.height_sea = 0.10723348444728431;
    msg.hacc = 0.044888391215139656;
    msg.vacc = 0.9303277645481862;
    msg.vel_n = 0.6721903834474888;
    msg.vel_e = 0.36304605757923714;
    msg.vel_d = 0.2382541226586279;
    msg.speed = 0.9419598912210965;
    msg.gspeed = 0.2889009713933752;
    msg.heading = 0.6244679474887841;
    msg.sacc = 0.45420604995585945;
    msg.cacc = 0.6597797256019854;

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
    msg.setTimeStamp(0.22470518038749498);
    msg.setSource(43119U);
    msg.setSourceEntity(125U);
    msg.setDestination(50690U);
    msg.setDestinationEntity(23U);
    msg.itow = 1913864518U;
    msg.lat = 0.9971884318564446;
    msg.lon = 0.7519817206988579;
    msg.height_ell = 0.3537424827447758;
    msg.height_sea = 0.872496580502195;
    msg.hacc = 0.8330336039989205;
    msg.vacc = 0.14734072625298822;
    msg.vel_n = 0.16229928037404084;
    msg.vel_e = 0.8738481452896967;
    msg.vel_d = 0.47385166711310867;
    msg.speed = 0.026020188434512037;
    msg.gspeed = 0.04537636943216694;
    msg.heading = 0.5131922012158231;
    msg.sacc = 0.6413015726277385;
    msg.cacc = 0.5991713335889838;

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
    msg.setTimeStamp(0.25986820798488197);
    msg.setSource(19965U);
    msg.setSourceEntity(7U);
    msg.setDestination(38752U);
    msg.setDestinationEntity(83U);
    msg.itow = 3128933107U;
    msg.lat = 0.019782986108887624;
    msg.lon = 0.27339023903374415;
    msg.height_ell = 0.29978073441733877;
    msg.height_sea = 0.016002335340247864;
    msg.hacc = 0.06984885279482955;
    msg.vacc = 0.8190837190183194;
    msg.vel_n = 0.639925144806722;
    msg.vel_e = 0.5495995209505604;
    msg.vel_d = 0.9413631519061341;
    msg.speed = 0.4603171441226549;
    msg.gspeed = 0.33529369232230777;
    msg.heading = 0.14901105928978298;
    msg.sacc = 0.37225989548779614;
    msg.cacc = 0.48835636911166;

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
    msg.setTimeStamp(0.6736618968239495);
    msg.setSource(53489U);
    msg.setSourceEntity(136U);
    msg.setDestination(35867U);
    msg.setDestinationEntity(40U);
    msg.id = 220U;
    msg.value = 0.9673811785505333;

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
    msg.setTimeStamp(0.509647261865611);
    msg.setSource(28765U);
    msg.setSourceEntity(1U);
    msg.setDestination(36300U);
    msg.setDestinationEntity(140U);
    msg.id = 4U;
    msg.value = 0.016356331108854594;

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
    msg.setTimeStamp(0.34630393576997986);
    msg.setSource(14664U);
    msg.setSourceEntity(118U);
    msg.setDestination(26202U);
    msg.setDestinationEntity(234U);
    msg.id = 102U;
    msg.value = 0.3479355470099307;

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
    msg.setTimeStamp(0.20566562862247495);
    msg.setSource(8187U);
    msg.setSourceEntity(59U);
    msg.setDestination(4844U);
    msg.setDestinationEntity(249U);
    msg.x = 0.057664438433083776;
    msg.y = 0.20012092980439844;
    msg.z = 0.4931189422147484;
    msg.phi = 0.356298392027833;
    msg.theta = 0.08174759453778457;
    msg.psi = 0.7407223981628452;

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
    msg.setTimeStamp(0.6945874950497352);
    msg.setSource(10778U);
    msg.setSourceEntity(67U);
    msg.setDestination(50568U);
    msg.setDestinationEntity(241U);
    msg.x = 0.9556078698134273;
    msg.y = 0.14644635636198688;
    msg.z = 0.4192448682747919;
    msg.phi = 0.12653758731807907;
    msg.theta = 0.9912952488267723;
    msg.psi = 0.9896936291646803;

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
    msg.setTimeStamp(0.8634663658068872);
    msg.setSource(64955U);
    msg.setSourceEntity(74U);
    msg.setDestination(9712U);
    msg.setDestinationEntity(94U);
    msg.x = 0.8426995794056147;
    msg.y = 0.68227814535823;
    msg.z = 0.9441279585481671;
    msg.phi = 0.9275722232085293;
    msg.theta = 0.7306168384964352;
    msg.psi = 0.8638985668444691;

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
    msg.setTimeStamp(0.18675255847304106);
    msg.setSource(19949U);
    msg.setSourceEntity(20U);
    msg.setDestination(31119U);
    msg.setDestinationEntity(27U);
    msg.beam_width = 0.6508163213142729;
    msg.beam_height = 0.9334484335909392;

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
    msg.setTimeStamp(0.3749956504072638);
    msg.setSource(11503U);
    msg.setSourceEntity(104U);
    msg.setDestination(13975U);
    msg.setDestinationEntity(38U);
    msg.beam_width = 0.6224768630971037;
    msg.beam_height = 0.009800287724153645;

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
    msg.setTimeStamp(0.09972989106670482);
    msg.setSource(55554U);
    msg.setSourceEntity(227U);
    msg.setDestination(59491U);
    msg.setDestinationEntity(252U);
    msg.beam_width = 0.047262128926210845;
    msg.beam_height = 0.0253391457639931;

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
    msg.setTimeStamp(0.8521295318431482);
    msg.setSource(57488U);
    msg.setSourceEntity(95U);
    msg.setDestination(22796U);
    msg.setDestinationEntity(62U);
    msg.sane = 26U;

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
    msg.setTimeStamp(0.14225758462124638);
    msg.setSource(39153U);
    msg.setSourceEntity(76U);
    msg.setDestination(49902U);
    msg.setDestinationEntity(225U);
    msg.sane = 206U;

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
    msg.setTimeStamp(0.12820734891159535);
    msg.setSource(29125U);
    msg.setSourceEntity(105U);
    msg.setDestination(52283U);
    msg.setDestinationEntity(58U);
    msg.sane = 214U;

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
    msg.setTimeStamp(0.6397788298637388);
    msg.setSource(4011U);
    msg.setSourceEntity(193U);
    msg.setDestination(2591U);
    msg.setDestinationEntity(157U);
    msg.value = 0.5842996064727377;

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
    msg.setTimeStamp(0.7153530659663574);
    msg.setSource(28414U);
    msg.setSourceEntity(3U);
    msg.setDestination(51266U);
    msg.setDestinationEntity(171U);
    msg.value = 0.7624877546364561;

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
    msg.setTimeStamp(0.8822768870831716);
    msg.setSource(17597U);
    msg.setSourceEntity(175U);
    msg.setDestination(62735U);
    msg.setDestinationEntity(5U);
    msg.value = 0.19599506846475312;

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
    msg.setTimeStamp(0.5189366624115997);
    msg.setSource(40809U);
    msg.setSourceEntity(33U);
    msg.setDestination(35430U);
    msg.setDestinationEntity(15U);
    msg.value = 0.6631745928700392;

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
    msg.setTimeStamp(0.25984622086028086);
    msg.setSource(46999U);
    msg.setSourceEntity(252U);
    msg.setDestination(60808U);
    msg.setDestinationEntity(247U);
    msg.value = 0.1520544652975595;

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
    msg.setTimeStamp(0.8377049356266404);
    msg.setSource(47108U);
    msg.setSourceEntity(76U);
    msg.setDestination(65434U);
    msg.setDestinationEntity(52U);
    msg.value = 0.7215943140914415;

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
    msg.setTimeStamp(0.6207895571104213);
    msg.setSource(7319U);
    msg.setSourceEntity(187U);
    msg.setDestination(1295U);
    msg.setDestinationEntity(80U);
    msg.value = 0.4373796078394946;

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
    msg.setTimeStamp(0.7488183063866389);
    msg.setSource(31047U);
    msg.setSourceEntity(210U);
    msg.setDestination(28518U);
    msg.setDestinationEntity(21U);
    msg.value = 0.9168396230469937;

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
    msg.setTimeStamp(0.3119628042498429);
    msg.setSource(31538U);
    msg.setSourceEntity(207U);
    msg.setDestination(45634U);
    msg.setDestinationEntity(158U);
    msg.value = 0.6144723337337008;

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
    msg.setTimeStamp(0.7039565044588955);
    msg.setSource(44792U);
    msg.setSourceEntity(125U);
    msg.setDestination(8353U);
    msg.setDestinationEntity(87U);
    msg.value = 0.8334937084547519;

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
    msg.setTimeStamp(0.31472183722278113);
    msg.setSource(23284U);
    msg.setSourceEntity(121U);
    msg.setDestination(19431U);
    msg.setDestinationEntity(202U);
    msg.value = 0.12657500965412283;

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
    msg.setTimeStamp(0.26175750211710636);
    msg.setSource(43639U);
    msg.setSourceEntity(224U);
    msg.setDestination(33802U);
    msg.setDestinationEntity(75U);
    msg.value = 0.0444915499920171;

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
    msg.setTimeStamp(0.3554661722318945);
    msg.setSource(11605U);
    msg.setSourceEntity(35U);
    msg.setDestination(44370U);
    msg.setDestinationEntity(160U);
    msg.value = 0.20906052040785295;

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
    msg.setTimeStamp(0.9596133287400589);
    msg.setSource(20457U);
    msg.setSourceEntity(18U);
    msg.setDestination(19060U);
    msg.setDestinationEntity(179U);
    msg.value = 0.395876597681017;

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
    msg.setTimeStamp(0.18829081160385241);
    msg.setSource(64770U);
    msg.setSourceEntity(192U);
    msg.setDestination(13630U);
    msg.setDestinationEntity(75U);
    msg.value = 0.3019595393758039;

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
    msg.setTimeStamp(0.6368893736738679);
    msg.setSource(38082U);
    msg.setSourceEntity(138U);
    msg.setDestination(56608U);
    msg.setDestinationEntity(247U);
    msg.value = 0.668582696730616;

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
    msg.setTimeStamp(0.031976429749773994);
    msg.setSource(38959U);
    msg.setSourceEntity(135U);
    msg.setDestination(33650U);
    msg.setDestinationEntity(181U);
    msg.value = 0.2368711269218996;

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
    msg.setTimeStamp(0.7113103056417267);
    msg.setSource(23218U);
    msg.setSourceEntity(8U);
    msg.setDestination(9081U);
    msg.setDestinationEntity(209U);
    msg.value = 0.6861185795980042;

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
    msg.setTimeStamp(0.13953260431671421);
    msg.setSource(9320U);
    msg.setSourceEntity(182U);
    msg.setDestination(45480U);
    msg.setDestinationEntity(119U);
    msg.value = 0.6899110377705502;

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
    msg.setTimeStamp(0.7845704378518563);
    msg.setSource(19508U);
    msg.setSourceEntity(107U);
    msg.setDestination(51914U);
    msg.setDestinationEntity(131U);
    msg.value = 0.6013659433138973;

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
    msg.setTimeStamp(0.9615827590757353);
    msg.setSource(45564U);
    msg.setSourceEntity(24U);
    msg.setDestination(52986U);
    msg.setDestinationEntity(34U);
    msg.value = 0.8067753955119237;

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
    msg.setTimeStamp(0.9241581788382245);
    msg.setSource(38268U);
    msg.setSourceEntity(121U);
    msg.setDestination(36127U);
    msg.setDestinationEntity(181U);
    msg.value = 0.4579698698582073;

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
    msg.setTimeStamp(0.21939784256305928);
    msg.setSource(35719U);
    msg.setSourceEntity(102U);
    msg.setDestination(13200U);
    msg.setDestinationEntity(218U);
    msg.value = 0.19717182074656214;

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
    msg.setTimeStamp(0.6221196063197362);
    msg.setSource(6597U);
    msg.setSourceEntity(126U);
    msg.setDestination(39327U);
    msg.setDestinationEntity(8U);
    msg.value = 0.3002009893466181;

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
    msg.setTimeStamp(0.5569657996283414);
    msg.setSource(19613U);
    msg.setSourceEntity(234U);
    msg.setDestination(31288U);
    msg.setDestinationEntity(23U);
    msg.validity = 13071U;
    msg.type = 168U;
    msg.tow = 217550649U;
    msg.base_lat = 0.8382836035549761;
    msg.base_lon = 0.3818228777167313;
    msg.base_height = 0.30643449681792456;
    msg.n = 0.5814389537162772;
    msg.e = 0.45450909809717677;
    msg.d = 0.33357917227487865;
    msg.v_n = 0.3154662279390579;
    msg.v_e = 0.4189722864835662;
    msg.v_d = 0.10204025828905527;
    msg.satellites = 211U;
    msg.iar_hyp = 5983U;
    msg.iar_ratio = 0.04589162175392181;

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
    msg.setTimeStamp(0.22505362575900123);
    msg.setSource(23697U);
    msg.setSourceEntity(42U);
    msg.setDestination(17167U);
    msg.setDestinationEntity(63U);
    msg.validity = 7629U;
    msg.type = 140U;
    msg.tow = 1532031118U;
    msg.base_lat = 0.06466689717121432;
    msg.base_lon = 0.8339123982690235;
    msg.base_height = 0.0756336061451437;
    msg.n = 0.2560335910977518;
    msg.e = 0.2094610027021344;
    msg.d = 0.15491109282299376;
    msg.v_n = 0.8567219976539512;
    msg.v_e = 0.7109153615180962;
    msg.v_d = 0.02463509815300846;
    msg.satellites = 209U;
    msg.iar_hyp = 30919U;
    msg.iar_ratio = 0.09456180598156572;

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
    msg.setTimeStamp(0.6034222720733792);
    msg.setSource(26386U);
    msg.setSourceEntity(195U);
    msg.setDestination(50650U);
    msg.setDestinationEntity(171U);
    msg.validity = 9636U;
    msg.type = 101U;
    msg.tow = 1971897528U;
    msg.base_lat = 0.05113196460180591;
    msg.base_lon = 0.2865107074552704;
    msg.base_height = 0.9764154943147405;
    msg.n = 0.6197507378981015;
    msg.e = 0.8947704829021614;
    msg.d = 0.22475731927953202;
    msg.v_n = 0.24148285001469305;
    msg.v_e = 0.5705140328773509;
    msg.v_d = 0.3328275248008602;
    msg.satellites = 199U;
    msg.iar_hyp = 63178U;
    msg.iar_ratio = 0.357489971711618;

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
    msg.setTimeStamp(0.6950270008249749);
    msg.setSource(1983U);
    msg.setSourceEntity(26U);
    msg.setDestination(19187U);
    msg.setDestinationEntity(95U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.4884920118970443;
    tmp_msg_0.lon = 0.6341723343660121;
    tmp_msg_0.height = 0.18352737285541276;
    tmp_msg_0.x = 0.664775053707542;
    tmp_msg_0.y = 0.6567339040111386;
    tmp_msg_0.z = 0.11864805408003376;
    tmp_msg_0.phi = 0.2232497913897621;
    tmp_msg_0.theta = 0.29123047273609415;
    tmp_msg_0.psi = 0.11024891990378416;
    tmp_msg_0.u = 0.049409576714987136;
    tmp_msg_0.v = 0.70006183485872;
    tmp_msg_0.w = 0.7734926234868684;
    tmp_msg_0.vx = 0.13488601467262662;
    tmp_msg_0.vy = 0.8180250460710913;
    tmp_msg_0.vz = 0.45560588512865985;
    tmp_msg_0.p = 0.2094035157084968;
    tmp_msg_0.q = 0.7205415749750206;
    tmp_msg_0.r = 0.6796173610712146;
    tmp_msg_0.depth = 0.5600090105480829;
    tmp_msg_0.alt = 0.013255418600624402;
    msg.state.set(tmp_msg_0);
    msg.type = 169U;

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
    msg.setTimeStamp(0.13342461303226172);
    msg.setSource(24072U);
    msg.setSourceEntity(135U);
    msg.setDestination(29808U);
    msg.setDestinationEntity(144U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.23090250978864268;
    tmp_msg_0.lon = 0.19615522317797895;
    tmp_msg_0.height = 0.9957113618425176;
    tmp_msg_0.x = 0.24497127458213508;
    tmp_msg_0.y = 0.6552070878279612;
    tmp_msg_0.z = 0.36596071068291836;
    tmp_msg_0.phi = 0.567007616037903;
    tmp_msg_0.theta = 0.7818634506687715;
    tmp_msg_0.psi = 0.13194853288184327;
    tmp_msg_0.u = 0.7294227178590627;
    tmp_msg_0.v = 0.9044652413080533;
    tmp_msg_0.w = 0.20804717314456855;
    tmp_msg_0.vx = 0.04916967865086608;
    tmp_msg_0.vy = 0.6932745746338072;
    tmp_msg_0.vz = 0.7945275547324858;
    tmp_msg_0.p = 0.6704260023996247;
    tmp_msg_0.q = 0.674826918341111;
    tmp_msg_0.r = 0.68405477910408;
    tmp_msg_0.depth = 0.042223129283132654;
    tmp_msg_0.alt = 0.5948234593478341;
    msg.state.set(tmp_msg_0);
    msg.type = 143U;

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
    msg.setTimeStamp(0.02772994802293327);
    msg.setSource(46360U);
    msg.setSourceEntity(16U);
    msg.setDestination(62831U);
    msg.setDestinationEntity(216U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.5939113624145526;
    tmp_msg_0.lon = 0.05557369635561704;
    tmp_msg_0.height = 0.04904544119360721;
    tmp_msg_0.x = 0.4574518776709988;
    tmp_msg_0.y = 0.9924657855163787;
    tmp_msg_0.z = 0.8162328142309265;
    tmp_msg_0.phi = 0.5824387261339591;
    tmp_msg_0.theta = 0.5628285741137545;
    tmp_msg_0.psi = 0.4263693742223178;
    tmp_msg_0.u = 0.8207943128462143;
    tmp_msg_0.v = 0.4655812117735353;
    tmp_msg_0.w = 0.3677953433589065;
    tmp_msg_0.vx = 0.02742214539365706;
    tmp_msg_0.vy = 0.4635935760250487;
    tmp_msg_0.vz = 0.6878585963323829;
    tmp_msg_0.p = 0.2055395629711796;
    tmp_msg_0.q = 0.3675452661509332;
    tmp_msg_0.r = 0.7035740653164769;
    tmp_msg_0.depth = 0.6871091823752915;
    tmp_msg_0.alt = 0.8676208235485923;
    msg.state.set(tmp_msg_0);
    msg.type = 5U;

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
    msg.setTimeStamp(0.8484412219397228);
    msg.setSource(9651U);
    msg.setSourceEntity(42U);
    msg.setDestination(18957U);
    msg.setDestinationEntity(28U);
    msg.value = 0.19108769498829492;

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
    msg.setTimeStamp(0.9394487821347427);
    msg.setSource(11464U);
    msg.setSourceEntity(64U);
    msg.setDestination(54942U);
    msg.setDestinationEntity(7U);
    msg.value = 0.5910346624487783;

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
    msg.setTimeStamp(0.9977167645940187);
    msg.setSource(42615U);
    msg.setSourceEntity(24U);
    msg.setDestination(12920U);
    msg.setDestinationEntity(115U);
    msg.value = 0.6837098431739173;

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
    msg.setTimeStamp(0.18656184165094591);
    msg.setSource(50457U);
    msg.setSourceEntity(63U);
    msg.setDestination(13932U);
    msg.setDestinationEntity(215U);
    msg.value = 0.4679130194450827;

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
    msg.setTimeStamp(0.5443705063910956);
    msg.setSource(51977U);
    msg.setSourceEntity(160U);
    msg.setDestination(21304U);
    msg.setDestinationEntity(19U);
    msg.value = 0.41031695806205926;

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
    msg.setTimeStamp(0.8613384913195944);
    msg.setSource(14281U);
    msg.setSourceEntity(75U);
    msg.setDestination(55585U);
    msg.setDestinationEntity(81U);
    msg.value = 0.5016252547573434;

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
    msg.setTimeStamp(0.31859499082023424);
    msg.setSource(20986U);
    msg.setSourceEntity(119U);
    msg.setDestination(63833U);
    msg.setDestinationEntity(243U);
    msg.value = 0.46489523017182843;

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
    msg.setTimeStamp(0.7642981174820508);
    msg.setSource(32032U);
    msg.setSourceEntity(78U);
    msg.setDestination(16127U);
    msg.setDestinationEntity(237U);
    msg.value = 0.8315814868485303;

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
    msg.setTimeStamp(0.606237472401874);
    msg.setSource(57631U);
    msg.setSourceEntity(161U);
    msg.setDestination(25668U);
    msg.setDestinationEntity(135U);
    msg.value = 0.01302022515760426;

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
    msg.setTimeStamp(0.46061934138804306);
    msg.setSource(16436U);
    msg.setSourceEntity(179U);
    msg.setDestination(43152U);
    msg.setDestinationEntity(130U);
    msg.value = 0.8312451874212096;

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
    msg.setTimeStamp(0.5889821510746122);
    msg.setSource(18883U);
    msg.setSourceEntity(119U);
    msg.setDestination(28588U);
    msg.setDestinationEntity(223U);
    msg.value = 0.525820558231221;

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
    msg.setTimeStamp(0.889084639570276);
    msg.setSource(16667U);
    msg.setSourceEntity(64U);
    msg.setDestination(3589U);
    msg.setDestinationEntity(87U);
    msg.value = 0.8529257379887982;

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
    msg.setTimeStamp(0.34673839264007056);
    msg.setSource(49453U);
    msg.setSourceEntity(12U);
    msg.setDestination(55651U);
    msg.setDestinationEntity(157U);
    msg.value = 0.9688481811314158;

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
    msg.setTimeStamp(0.8743409489254871);
    msg.setSource(16605U);
    msg.setSourceEntity(22U);
    msg.setDestination(24580U);
    msg.setDestinationEntity(236U);
    msg.value = 0.8336120729239895;

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
    msg.setTimeStamp(0.659330559142764);
    msg.setSource(3099U);
    msg.setSourceEntity(174U);
    msg.setDestination(44523U);
    msg.setDestinationEntity(31U);
    msg.value = 0.5680564397243294;

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
    msg.setTimeStamp(0.33876162749488625);
    msg.setSource(36803U);
    msg.setSourceEntity(20U);
    msg.setDestination(58774U);
    msg.setDestinationEntity(93U);
    msg.id = 154U;
    msg.zoom = 82U;
    msg.action = 76U;

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
    msg.setTimeStamp(0.03808530864242987);
    msg.setSource(62792U);
    msg.setSourceEntity(215U);
    msg.setDestination(51913U);
    msg.setDestinationEntity(61U);
    msg.id = 190U;
    msg.zoom = 245U;
    msg.action = 65U;

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
    msg.setTimeStamp(0.9371741756914024);
    msg.setSource(33108U);
    msg.setSourceEntity(68U);
    msg.setDestination(17071U);
    msg.setDestinationEntity(22U);
    msg.id = 60U;
    msg.zoom = 155U;
    msg.action = 144U;

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
    msg.setTimeStamp(0.9129867455574786);
    msg.setSource(7882U);
    msg.setSourceEntity(84U);
    msg.setDestination(64364U);
    msg.setDestinationEntity(165U);
    msg.id = 22U;
    msg.value = 0.095504299887192;

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
    msg.setTimeStamp(0.7261219082741476);
    msg.setSource(41820U);
    msg.setSourceEntity(211U);
    msg.setDestination(722U);
    msg.setDestinationEntity(126U);
    msg.id = 111U;
    msg.value = 0.51971298895397;

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
    msg.setTimeStamp(0.561886871373524);
    msg.setSource(47344U);
    msg.setSourceEntity(60U);
    msg.setDestination(28438U);
    msg.setDestinationEntity(181U);
    msg.id = 207U;
    msg.value = 0.20007271100982993;

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
    msg.setTimeStamp(0.009166605785475679);
    msg.setSource(39467U);
    msg.setSourceEntity(15U);
    msg.setDestination(20099U);
    msg.setDestinationEntity(56U);
    msg.id = 188U;
    msg.value = 0.47521342897136243;

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
    msg.setTimeStamp(0.17855354246021127);
    msg.setSource(372U);
    msg.setSourceEntity(39U);
    msg.setDestination(502U);
    msg.setDestinationEntity(206U);
    msg.id = 151U;
    msg.value = 0.6748401867927343;

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
    msg.setTimeStamp(0.424953095052628);
    msg.setSource(724U);
    msg.setSourceEntity(105U);
    msg.setDestination(27587U);
    msg.setDestinationEntity(78U);
    msg.id = 254U;
    msg.value = 0.031315078591221956;

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
    msg.setTimeStamp(0.06762041884807513);
    msg.setSource(14815U);
    msg.setSourceEntity(197U);
    msg.setDestination(12762U);
    msg.setDestinationEntity(111U);
    msg.id = 157U;
    msg.angle = 0.36025616058611176;

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
    msg.setTimeStamp(0.3257764441514692);
    msg.setSource(37515U);
    msg.setSourceEntity(225U);
    msg.setDestination(20980U);
    msg.setDestinationEntity(10U);
    msg.id = 49U;
    msg.angle = 0.5881586343739702;

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
    msg.setTimeStamp(0.8717180561208956);
    msg.setSource(45404U);
    msg.setSourceEntity(14U);
    msg.setDestination(58464U);
    msg.setDestinationEntity(250U);
    msg.id = 237U;
    msg.angle = 0.6798710472727282;

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
    msg.setTimeStamp(0.874688168546289);
    msg.setSource(36441U);
    msg.setSourceEntity(23U);
    msg.setDestination(19114U);
    msg.setDestinationEntity(178U);
    msg.op = 23U;
    msg.actions.assign("FECUCTPLXGNFZZECEQGLVNGUSOQWCDPBGZOLOHITJYSIDPLHJJVIZUGRENWATZNTDGAKCZYCKMBYQWPBMQKIDKQYINBSATHPPSWJMFIKHCVOABYOAFBXZKXBJUFIHZRXUQRGDWXFYNGSTXCPHNVTMPIXXBVRADVAWLIFKRSQMCLEMUHEXNLLVDFDKORANNBVYDUJRJUIQORKYJFEGMHLRPWHSRAJ");

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
    msg.setTimeStamp(0.5480699542742897);
    msg.setSource(30996U);
    msg.setSourceEntity(172U);
    msg.setDestination(26443U);
    msg.setDestinationEntity(205U);
    msg.op = 58U;
    msg.actions.assign("NLXWSKXLOZFRPUZTGZCPOQOBZGDJAZWYYABRNAOFVWGRNJHUPIMQDVFYCTJXHTNJUCWQVKOJNWUYZIG");

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
    msg.setTimeStamp(0.729373786012346);
    msg.setSource(13130U);
    msg.setSourceEntity(154U);
    msg.setDestination(5223U);
    msg.setDestinationEntity(145U);
    msg.op = 210U;
    msg.actions.assign("AJMGHEMDKURQAEWFOENOPQBNLLDELTCCRHQYYEVBQZUXSOKZXTXUEWCXEPGBVGDKWASIXRRZQNSOSMEHTFQVYDPWIDMDBZJAWOFACTXJCRMWZDJKRWYMLJEIWGKZVJDNNJVVRCXTBULYIQPLFGLGPJNAUOHFULXNIPFIKRSVOHTZUHFDBDTSUHWZVCAJFOBZGIAYPKXTOCTIFHJLGVZ");

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
    msg.setTimeStamp(0.5641553463865202);
    msg.setSource(30110U);
    msg.setSourceEntity(164U);
    msg.setDestination(27928U);
    msg.setDestinationEntity(241U);
    msg.actions.assign("ZLFGVOVHKXKCOVMODPUIYTSANJKBBRSTOHSGEXHNEDNXHQCHZFGDKFUVDABRQMXOOLEPOQBUQXQQLJLUWIELRHFKDBDYSEUMGFJHWSYTWUZOZGMTWCXPQLWAAWBJPYXDYYQUIPCINATMRUTKLIKPORWYHZ");

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
    msg.setTimeStamp(0.24953408105598485);
    msg.setSource(45908U);
    msg.setSourceEntity(167U);
    msg.setDestination(59548U);
    msg.setDestinationEntity(191U);
    msg.actions.assign("WKHMQEOVQBUDXPFANPUHBAEVFNWGTREGYPHFTA");

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
    msg.setTimeStamp(0.8014946433505095);
    msg.setSource(47861U);
    msg.setSourceEntity(60U);
    msg.setDestination(6029U);
    msg.setDestinationEntity(188U);
    msg.actions.assign("OANZJULRVFLYBNNEDDDVMXGHICPSKLFUHSYQNDTNEVQYPFWOEGJVECMGEWEUYOHLFXQPTXKPDQHJOKLLJZOYUEI");

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
    msg.setTimeStamp(0.7478551689277195);
    msg.setSource(36985U);
    msg.setSourceEntity(89U);
    msg.setDestination(52326U);
    msg.setDestinationEntity(218U);
    msg.button = 66U;
    msg.value = 44U;

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
    msg.setTimeStamp(0.6483714662530531);
    msg.setSource(7716U);
    msg.setSourceEntity(11U);
    msg.setDestination(35434U);
    msg.setDestinationEntity(131U);
    msg.button = 41U;
    msg.value = 46U;

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
    msg.setTimeStamp(0.09855614640249688);
    msg.setSource(14822U);
    msg.setSourceEntity(162U);
    msg.setDestination(45159U);
    msg.setDestinationEntity(238U);
    msg.button = 205U;
    msg.value = 55U;

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
    msg.setTimeStamp(0.8935810886013779);
    msg.setSource(36709U);
    msg.setSourceEntity(237U);
    msg.setDestination(52466U);
    msg.setDestinationEntity(239U);
    msg.op = 209U;
    msg.text.assign("RRMFPZQMUCNSXWIHVFKRZXJWEDUFLYXPPVCWAAOBTDVNLRLEFXRTNZTIUXJGMWUOSYBYLEGTWCPLPOGGVZOJVBPXENUHKSHECHGBSKQRMMRIZPFQDXTFMWUGHYBZXEMOFAITDDSCIDQKKR");

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
    msg.setTimeStamp(0.4508795730268319);
    msg.setSource(39217U);
    msg.setSourceEntity(145U);
    msg.setDestination(57154U);
    msg.setDestinationEntity(0U);
    msg.op = 47U;
    msg.text.assign("OCKCALQAPRJZUWTQIUPNZLEFKXOZLTHKOLHWMTNCPHYHBVIRIMLXSQAOHECAZKBGIQXUERNELSPSJAGHFVKXYFPRMBFCEMZFPYVGVZLMUOPDJDXZEJKWIRTUPLYARCTUDXYHOBKKYTGLFTTYJQJMWUWFNJJVONVFWLUYNNGSHNICTZKZBRDDIFVQXBPJDWVWYR");

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
    msg.setTimeStamp(0.7294828724484071);
    msg.setSource(12300U);
    msg.setSourceEntity(8U);
    msg.setDestination(39675U);
    msg.setDestinationEntity(162U);
    msg.op = 14U;
    msg.text.assign("HYWGLXZAQXJAPCBOTDWFV");

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
    msg.setTimeStamp(0.9661264126753752);
    msg.setSource(4805U);
    msg.setSourceEntity(242U);
    msg.setDestination(1053U);
    msg.setDestinationEntity(121U);
    msg.op = 129U;
    msg.time_remain = 0.5333848470105307;
    msg.sched_time = 0.5965390085561327;

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
    msg.setTimeStamp(0.5433087393232591);
    msg.setSource(46070U);
    msg.setSourceEntity(212U);
    msg.setDestination(45576U);
    msg.setDestinationEntity(25U);
    msg.op = 61U;
    msg.time_remain = 0.5424911652715344;
    msg.sched_time = 0.9375848434154702;

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
    msg.setTimeStamp(0.9133762090970924);
    msg.setSource(23607U);
    msg.setSourceEntity(29U);
    msg.setDestination(24537U);
    msg.setDestinationEntity(144U);
    msg.op = 26U;
    msg.time_remain = 0.02550301084604778;
    msg.sched_time = 0.9893551277160533;

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
    msg.setTimeStamp(0.5447205343752825);
    msg.setSource(43842U);
    msg.setSourceEntity(80U);
    msg.setDestination(56755U);
    msg.setDestinationEntity(208U);
    msg.name.assign("FCVBTCNOSJDROVGZESFEQOADZKBJLZCLSMAHKKJEECNCYXNJIDYIQXYZVVDPDCABULYPDZAXNGTKDIHNVWFLSWVDFXZSJYUAKGGNWOHKGPEIJVZYHXNZSDRKKJHGCRUEKUBTTXFJBWMFULEGLSUBTMLNBNCHPROLSOIROGUQITQMWGWIXWMSDIVPYVOTUMSMANAZRMRWORQJEQBKCYEM");
    msg.op = 49U;
    msg.sched_time = 0.04070698383813165;

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
    msg.setTimeStamp(0.1853546617335312);
    msg.setSource(254U);
    msg.setSourceEntity(70U);
    msg.setDestination(9454U);
    msg.setDestinationEntity(155U);
    msg.name.assign("FVZADYIEGJQWOZDSBXHPOFDAACXFQSLWERBOXMHIHQYKEJADMHDO");
    msg.op = 96U;
    msg.sched_time = 0.6505686616302973;

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
    msg.setTimeStamp(0.062347905721836905);
    msg.setSource(34974U);
    msg.setSourceEntity(31U);
    msg.setDestination(16823U);
    msg.setDestinationEntity(254U);
    msg.name.assign("DYWOAAXNMTOBHIWKROURUCXGYVHZYWJBPTYSIDTGUXLSUGOEKZHQHMANSKQATT");
    msg.op = 47U;
    msg.sched_time = 0.015207881156575453;

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
    msg.setTimeStamp(0.6081355740372545);
    msg.setSource(8745U);
    msg.setSourceEntity(24U);
    msg.setDestination(56004U);
    msg.setDestinationEntity(40U);

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
    msg.setTimeStamp(0.9711676726154499);
    msg.setSource(56538U);
    msg.setSourceEntity(26U);
    msg.setDestination(21507U);
    msg.setDestinationEntity(195U);

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
    msg.setTimeStamp(0.41315383775112147);
    msg.setSource(42269U);
    msg.setSourceEntity(125U);
    msg.setDestination(24566U);
    msg.setDestinationEntity(3U);

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
    msg.setTimeStamp(0.5169487850495078);
    msg.setSource(555U);
    msg.setSourceEntity(218U);
    msg.setDestination(27781U);
    msg.setDestinationEntity(90U);
    msg.name.assign("CNNYUQJHWRISAYCQXOGYVYIBSDVAKOYRYLZUFDQZAUJLBVJNBDSQGIDMTTLUXEMHWRTIZUBOXXUUFHEYVJVSHRINKFDOZHXYEDEDQTMNIHIBPBFGUTCSZQRXKPWVAARYELZWQPSSZAEAXCKNUOKPS");
    msg.state = 173U;

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
    msg.setTimeStamp(0.987628384502117);
    msg.setSource(58844U);
    msg.setSourceEntity(17U);
    msg.setDestination(7033U);
    msg.setDestinationEntity(85U);
    msg.name.assign("QDUJRVXGUUBARGXTIGCJOEVQTFWALNETCZMOWROBDPPYVLOZCEFVRCQAXCSNJHDWZJYNIUBJVXCMMKHMKMXPMVNGTRKMVOUNZKDJZGYWKJTGAAURQQQYBLEQDPNTLOZBKRYGQHPSRDMALWFPMXPUVGZVNFOKOZZXCFOAELFIFIUTKGPRRLAYES");
    msg.state = 189U;

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
    msg.setTimeStamp(0.5267651220997);
    msg.setSource(20624U);
    msg.setSourceEntity(220U);
    msg.setDestination(45062U);
    msg.setDestinationEntity(115U);
    msg.name.assign("BDBFCXWQJHXRZUETJERJCNS");
    msg.state = 141U;

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
    msg.setTimeStamp(0.7588399252659639);
    msg.setSource(40273U);
    msg.setSourceEntity(233U);
    msg.setDestination(24723U);
    msg.setDestinationEntity(140U);
    msg.name.assign("XDTCYDOSSFEDZVZNTTLDRIXGRAAPIPKMWVUFDJMUJVFWCYEOWVKBALVPNGDZRKCCBMBYJG");
    msg.value = 36U;

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
    msg.setTimeStamp(0.6236542736724008);
    msg.setSource(33797U);
    msg.setSourceEntity(188U);
    msg.setDestination(49638U);
    msg.setDestinationEntity(175U);
    msg.name.assign("HMCETHZJSTVBNWZPZILCZG");
    msg.value = 147U;

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
    msg.setTimeStamp(0.16087280526559966);
    msg.setSource(7795U);
    msg.setSourceEntity(137U);
    msg.setDestination(51821U);
    msg.setDestinationEntity(221U);
    msg.name.assign("CRHAOUGOUDEQWWKEZYUZXRLCAVRYMCYEVSJBGERUPMGBYTLLOJNKKQUMLNLGBRPKISVFCJNQUDCNIKKZCHPNFBJIVPZZXDMOTOHDRYXCPCYARQFABOHZQPUNXPWGWITCQOSPBFVFAOSJFSWUZKJHVZHARSXXZHGDSOMEISDTTQOYMLBHEFEIVEWPNJXMFGUHLGPICTBXKYTKGFTJABASWIEVVYGDDSTQVMLYNADIN");
    msg.value = 232U;

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
    msg.setTimeStamp(0.45320932145613013);
    msg.setSource(1231U);
    msg.setSourceEntity(28U);
    msg.setDestination(64642U);
    msg.setDestinationEntity(242U);
    msg.name.assign("WDQJJQYVQLGYNPGNFZUBDDVYTOHKBALTOTPKQVXAWZHSQNEOBYYFLYNJTERKZQXYVJOPPFYZLSVFPCAJKGHVARDRMKWMDZXMGJGRSZPXKAWNBXKDJBXWVFFBSHYHLOUMKTVNZUCMCKGMNFIECOGHEBRWAOITCPSQMSSAVRRIMPTFTAIWBRALULXGSHUFSIRXNOHTLPDJSBMAEOC");

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
    msg.setTimeStamp(0.11501712236111916);
    msg.setSource(33535U);
    msg.setSourceEntity(107U);
    msg.setDestination(34339U);
    msg.setDestinationEntity(50U);
    msg.name.assign("EDHZKJDDUICBXXHHPUEPIKUZRZRHTVGOHGGMELTWQTAYQTTZECYVFCGVNPOLKMYHOZHJUMDPXCTIENSXNBODOWQTQVMMGHSFZWSNKRZUABKVPZXMLIEPDJKLXBIQVYBLHYWXQKQLALRERWKURSJNDCWRALQFIYSPEIAHAJSVLXMOSPCGAPLRVMJFBOYBGUGAWFFQAIFTXETSMNDYKMUOBBGTACZIRSNWXCBNIVJVYGROU");

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
    msg.setTimeStamp(0.5599686862852788);
    msg.setSource(9329U);
    msg.setSourceEntity(202U);
    msg.setDestination(33210U);
    msg.setDestinationEntity(174U);
    msg.name.assign("LAORTSDDRZSTESKFRKRLIZBRSGYHQGYVYUHMPVUTSJICTJFUMLAAMRLVQIMP");

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
    msg.setTimeStamp(0.3628342265246035);
    msg.setSource(11416U);
    msg.setSourceEntity(235U);
    msg.setDestination(54051U);
    msg.setDestinationEntity(46U);
    msg.name.assign("NVMGTPFBCESQWIOCGWVTOSLEKXIHQRKYHQZGEZAJMXCOYVVGRNGUMZNHTYJLSVQDXBPRYOMXYIUM");
    msg.value = 45U;

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
    msg.setTimeStamp(0.8756822284776906);
    msg.setSource(54069U);
    msg.setSourceEntity(37U);
    msg.setDestination(26585U);
    msg.setDestinationEntity(181U);
    msg.name.assign("LVLFCLGAKUUKINZCFMRSHXUIQJITJCPNRSNDWKHBYBGJHLDZNQZBEHBGSKPOYNHDPVMNGWAJPVZKMWZCYFXUEPBEFTWUXHXRIQHDVSKSCPCRJNAABAMDFEZFKDUWMIIJILZVVNTEUKIQZZYGBBTYPRYLOYHGGKTQFUBQDWLRHVMGOJWQGXLQLLVR");
    msg.value = 57U;

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
    msg.setTimeStamp(0.8546708129309276);
    msg.setSource(50550U);
    msg.setSourceEntity(19U);
    msg.setDestination(58585U);
    msg.setDestinationEntity(138U);
    msg.name.assign("PFSBRNVGTDYJXIFTQBAIXACBNNZIY");
    msg.value = 179U;

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
    msg.setTimeStamp(0.4991157299001986);
    msg.setSource(6219U);
    msg.setSourceEntity(142U);
    msg.setDestination(55433U);
    msg.setDestinationEntity(99U);
    msg.id = 134U;
    msg.period = 359592807U;
    msg.duty_cycle = 260432344U;

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
    msg.setTimeStamp(0.6564175441886277);
    msg.setSource(20177U);
    msg.setSourceEntity(95U);
    msg.setDestination(26939U);
    msg.setDestinationEntity(200U);
    msg.id = 134U;
    msg.period = 1034343868U;
    msg.duty_cycle = 1251420223U;

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
    msg.setTimeStamp(0.038158513073368705);
    msg.setSource(45781U);
    msg.setSourceEntity(40U);
    msg.setDestination(18915U);
    msg.setDestinationEntity(104U);
    msg.id = 114U;
    msg.period = 3157110323U;
    msg.duty_cycle = 2835635050U;

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
    msg.setTimeStamp(0.2360235296551093);
    msg.setSource(48650U);
    msg.setSourceEntity(143U);
    msg.setDestination(43378U);
    msg.setDestinationEntity(106U);
    msg.id = 180U;
    msg.period = 2943551904U;
    msg.duty_cycle = 748679956U;

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
    msg.setTimeStamp(0.44760357873545886);
    msg.setSource(29482U);
    msg.setSourceEntity(47U);
    msg.setDestination(31559U);
    msg.setDestinationEntity(48U);
    msg.id = 206U;
    msg.period = 4112281670U;
    msg.duty_cycle = 2658808782U;

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
    msg.setTimeStamp(0.19306823267004836);
    msg.setSource(44281U);
    msg.setSourceEntity(140U);
    msg.setDestination(17597U);
    msg.setDestinationEntity(71U);
    msg.id = 84U;
    msg.period = 4198948925U;
    msg.duty_cycle = 3170388128U;

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
    msg.setTimeStamp(0.9795692925187829);
    msg.setSource(61065U);
    msg.setSourceEntity(120U);
    msg.setDestination(18038U);
    msg.setDestinationEntity(146U);
    msg.lat = 0.3853311265765349;
    msg.lon = 0.859198467948408;
    msg.height = 0.2727056283649849;
    msg.x = 0.1428690568782467;
    msg.y = 0.227896004866046;
    msg.z = 0.6655362319306541;
    msg.phi = 0.3823299240708856;
    msg.theta = 0.06480502121339515;
    msg.psi = 0.8763040183755375;
    msg.u = 0.8191711180289333;
    msg.v = 0.5878739783238216;
    msg.w = 0.5183335043678081;
    msg.vx = 0.9746628075301978;
    msg.vy = 0.1920838955467714;
    msg.vz = 0.7859272657554733;
    msg.p = 0.28230768730733036;
    msg.q = 0.14114263856902087;
    msg.r = 0.7208069792730681;
    msg.depth = 0.5627938841444786;
    msg.alt = 0.6523859455996017;

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
    msg.setTimeStamp(0.7445673187880872);
    msg.setSource(54447U);
    msg.setSourceEntity(133U);
    msg.setDestination(36486U);
    msg.setDestinationEntity(40U);
    msg.lat = 0.5965399577119246;
    msg.lon = 0.7147272121771896;
    msg.height = 0.04696967743332092;
    msg.x = 0.18331165859349197;
    msg.y = 0.9265545349971448;
    msg.z = 0.8931818246697634;
    msg.phi = 0.8981748035698602;
    msg.theta = 0.1374711456217389;
    msg.psi = 0.8953153663343306;
    msg.u = 0.06030239783491376;
    msg.v = 0.05754605969968962;
    msg.w = 0.6889163253212989;
    msg.vx = 0.6722027835618628;
    msg.vy = 0.10341749962393743;
    msg.vz = 0.7564050435842316;
    msg.p = 0.034883414026561366;
    msg.q = 0.21066208172103174;
    msg.r = 0.038267699009578604;
    msg.depth = 0.5897705065273616;
    msg.alt = 0.12700820458377848;

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
    msg.setTimeStamp(0.14078611621300807);
    msg.setSource(61516U);
    msg.setSourceEntity(130U);
    msg.setDestination(30969U);
    msg.setDestinationEntity(222U);
    msg.lat = 0.26600015519299547;
    msg.lon = 0.0999168092298971;
    msg.height = 0.8725236993611404;
    msg.x = 0.404946451871933;
    msg.y = 0.8854968085396963;
    msg.z = 0.7770817426005959;
    msg.phi = 0.8740042695642121;
    msg.theta = 0.5578854345470695;
    msg.psi = 0.47683752886790476;
    msg.u = 0.5453219599317581;
    msg.v = 0.0007229845681659963;
    msg.w = 0.8799687702440833;
    msg.vx = 0.4155791950469412;
    msg.vy = 0.8741195140045465;
    msg.vz = 0.5507036640707766;
    msg.p = 0.8154739814065101;
    msg.q = 0.2458989761734669;
    msg.r = 0.9127408620698343;
    msg.depth = 0.1278949767592812;
    msg.alt = 0.6161284234667445;

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
    msg.setTimeStamp(0.8070440000532284);
    msg.setSource(5565U);
    msg.setSourceEntity(43U);
    msg.setDestination(1453U);
    msg.setDestinationEntity(9U);
    msg.x = 0.2881085258546813;
    msg.y = 0.09391564202775615;
    msg.z = 0.6549814704382755;

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
    msg.setTimeStamp(0.15927405707258468);
    msg.setSource(49597U);
    msg.setSourceEntity(97U);
    msg.setDestination(15052U);
    msg.setDestinationEntity(253U);
    msg.x = 0.33052764021368375;
    msg.y = 0.09998067709786751;
    msg.z = 0.30317167163373615;

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
    msg.setTimeStamp(0.22325934929069235);
    msg.setSource(48641U);
    msg.setSourceEntity(121U);
    msg.setDestination(7308U);
    msg.setDestinationEntity(143U);
    msg.x = 0.9156918736518811;
    msg.y = 0.6891849769129128;
    msg.z = 0.8780778945608737;

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
    msg.setTimeStamp(0.8226210554233157);
    msg.setSource(19666U);
    msg.setSourceEntity(10U);
    msg.setDestination(10279U);
    msg.setDestinationEntity(203U);
    msg.value = 0.009237111338708193;

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
    msg.setTimeStamp(0.17524166144046216);
    msg.setSource(54338U);
    msg.setSourceEntity(14U);
    msg.setDestination(30377U);
    msg.setDestinationEntity(15U);
    msg.value = 0.6078732140261648;

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
    msg.setTimeStamp(0.8130714482385958);
    msg.setSource(30410U);
    msg.setSourceEntity(104U);
    msg.setDestination(63322U);
    msg.setDestinationEntity(164U);
    msg.value = 0.26053887927999275;

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
    msg.setTimeStamp(0.8380923188590806);
    msg.setSource(56254U);
    msg.setSourceEntity(72U);
    msg.setDestination(45291U);
    msg.setDestinationEntity(82U);
    msg.value = 0.1881071425094779;

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
    msg.setTimeStamp(0.4528923407575055);
    msg.setSource(58296U);
    msg.setSourceEntity(40U);
    msg.setDestination(63988U);
    msg.setDestinationEntity(112U);
    msg.value = 0.7652859437299063;

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
    msg.setTimeStamp(0.2753597617829495);
    msg.setSource(44132U);
    msg.setSourceEntity(12U);
    msg.setDestination(44099U);
    msg.setDestinationEntity(168U);
    msg.value = 0.8483578819654527;

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
    msg.setTimeStamp(0.5099626089135364);
    msg.setSource(37642U);
    msg.setSourceEntity(50U);
    msg.setDestination(17496U);
    msg.setDestinationEntity(174U);
    msg.x = 0.2778483491462147;
    msg.y = 0.8095862040223331;
    msg.z = 0.8298214127534258;
    msg.phi = 0.620489632629084;
    msg.theta = 0.08329153063145467;
    msg.psi = 0.7929176230117639;
    msg.p = 0.4231958814062491;
    msg.q = 0.05265909672819047;
    msg.r = 0.0011770545765492635;
    msg.u = 0.5927519111072844;
    msg.v = 0.11440643626672509;
    msg.w = 0.19165569074249245;
    msg.bias_psi = 0.664762877962316;
    msg.bias_r = 0.8459122472304272;

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
    msg.setTimeStamp(0.8134195133547731);
    msg.setSource(9904U);
    msg.setSourceEntity(118U);
    msg.setDestination(59186U);
    msg.setDestinationEntity(135U);
    msg.x = 0.7296707877019631;
    msg.y = 0.9606584321543402;
    msg.z = 0.7889932135685931;
    msg.phi = 0.8101219502724617;
    msg.theta = 0.4068349024603687;
    msg.psi = 0.8409919690616854;
    msg.p = 0.6621620737333529;
    msg.q = 0.18004923369749404;
    msg.r = 0.071134603271782;
    msg.u = 0.055311186070271634;
    msg.v = 0.0941480555610914;
    msg.w = 0.27028826738271017;
    msg.bias_psi = 0.21583706113166667;
    msg.bias_r = 0.3239897944576141;

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
    msg.setTimeStamp(0.054761082669496974);
    msg.setSource(50449U);
    msg.setSourceEntity(207U);
    msg.setDestination(47368U);
    msg.setDestinationEntity(46U);
    msg.x = 0.1750945311796901;
    msg.y = 0.8374035565030465;
    msg.z = 0.2139941466394497;
    msg.phi = 0.7189148773242431;
    msg.theta = 0.8699618010016803;
    msg.psi = 0.4549320481396695;
    msg.p = 0.05698986054040778;
    msg.q = 0.3799640224098053;
    msg.r = 0.6429780039986057;
    msg.u = 0.8793048083611822;
    msg.v = 0.6559821779921682;
    msg.w = 0.14684185552173046;
    msg.bias_psi = 0.6172936458495427;
    msg.bias_r = 0.4595358882313241;

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
    msg.setTimeStamp(0.5727975799572856);
    msg.setSource(63870U);
    msg.setSourceEntity(191U);
    msg.setDestination(55975U);
    msg.setDestinationEntity(179U);
    msg.bias_psi = 0.1741470419771064;
    msg.bias_r = 0.003702781129930721;
    msg.cog = 0.837726489221889;
    msg.cyaw = 0.25685306190755164;
    msg.lbl_rej_level = 0.7766044548176945;
    msg.gps_rej_level = 0.18693069562912767;
    msg.custom_x = 0.9172947035295689;
    msg.custom_y = 0.7439926297152727;
    msg.custom_z = 0.2668026211424074;

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
    msg.setTimeStamp(0.9018435154710179);
    msg.setSource(26490U);
    msg.setSourceEntity(232U);
    msg.setDestination(59963U);
    msg.setDestinationEntity(55U);
    msg.bias_psi = 0.7148628606385314;
    msg.bias_r = 0.42973728728756955;
    msg.cog = 0.8714500044606674;
    msg.cyaw = 0.7275823539550349;
    msg.lbl_rej_level = 0.8810567143683546;
    msg.gps_rej_level = 0.862444918583893;
    msg.custom_x = 0.08655916423504562;
    msg.custom_y = 0.6854058750789527;
    msg.custom_z = 0.5581358460230013;

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
    msg.setTimeStamp(0.8747872862558608);
    msg.setSource(42643U);
    msg.setSourceEntity(227U);
    msg.setDestination(51819U);
    msg.setDestinationEntity(138U);
    msg.bias_psi = 0.966478917111469;
    msg.bias_r = 0.45578065223662334;
    msg.cog = 0.26468197305946795;
    msg.cyaw = 0.09421215582227815;
    msg.lbl_rej_level = 0.9302909392013968;
    msg.gps_rej_level = 0.42529209424067793;
    msg.custom_x = 0.28682429613368565;
    msg.custom_y = 0.15132379344386038;
    msg.custom_z = 0.09426215430498053;

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
    msg.setTimeStamp(0.8479545459371277);
    msg.setSource(12037U);
    msg.setSourceEntity(103U);
    msg.setDestination(36861U);
    msg.setDestinationEntity(63U);
    msg.utc_time = 0.5301344874413974;
    msg.reason = 246U;

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
    msg.setTimeStamp(0.7198861586733966);
    msg.setSource(33190U);
    msg.setSourceEntity(84U);
    msg.setDestination(37804U);
    msg.setDestinationEntity(218U);
    msg.utc_time = 0.9278368537853784;
    msg.reason = 237U;

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
    msg.setTimeStamp(0.8165151416203229);
    msg.setSource(49981U);
    msg.setSourceEntity(74U);
    msg.setDestination(64034U);
    msg.setDestinationEntity(96U);
    msg.utc_time = 0.23471428868949373;
    msg.reason = 62U;

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
    msg.setTimeStamp(0.5692881304631481);
    msg.setSource(39162U);
    msg.setSourceEntity(2U);
    msg.setDestination(19382U);
    msg.setDestinationEntity(229U);
    msg.id = 170U;
    msg.range = 0.818728088703458;
    msg.acceptance = 82U;

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
    msg.setTimeStamp(0.009855544613579736);
    msg.setSource(40359U);
    msg.setSourceEntity(127U);
    msg.setDestination(26241U);
    msg.setDestinationEntity(171U);
    msg.id = 133U;
    msg.range = 0.49190360065259187;
    msg.acceptance = 248U;

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
    msg.setTimeStamp(0.09781865983445825);
    msg.setSource(44437U);
    msg.setSourceEntity(146U);
    msg.setDestination(21865U);
    msg.setDestinationEntity(132U);
    msg.id = 171U;
    msg.range = 0.8826320475423468;
    msg.acceptance = 229U;

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
    msg.setTimeStamp(0.1122947899138027);
    msg.setSource(52375U);
    msg.setSourceEntity(217U);
    msg.setDestination(21618U);
    msg.setDestinationEntity(94U);
    msg.type = 141U;
    msg.reason = 248U;
    msg.value = 0.6306488886684816;
    msg.timestep = 0.8592026912801354;

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
    msg.setTimeStamp(0.47457928714314723);
    msg.setSource(50309U);
    msg.setSourceEntity(10U);
    msg.setDestination(50568U);
    msg.setDestinationEntity(228U);
    msg.type = 208U;
    msg.reason = 44U;
    msg.value = 0.6763168860063254;
    msg.timestep = 0.20163716477387694;

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
    msg.setTimeStamp(0.2690959565181008);
    msg.setSource(22794U);
    msg.setSourceEntity(29U);
    msg.setDestination(60401U);
    msg.setDestinationEntity(17U);
    msg.type = 8U;
    msg.reason = 114U;
    msg.value = 0.4658276193579616;
    msg.timestep = 0.976009513051679;

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
    msg.setTimeStamp(0.024409225920876354);
    msg.setSource(25773U);
    msg.setSourceEntity(41U);
    msg.setDestination(27197U);
    msg.setDestinationEntity(123U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("NEYAYALBZPKDNHAUHCVPUKSHIBAZYROSELFULXDTEDGFWVYOMWJUUSXONGTHXXIL");
    tmp_msg_0.lat = 0.7413052217055109;
    tmp_msg_0.lon = 0.36297510599375105;
    tmp_msg_0.depth = 0.8160949965835114;
    tmp_msg_0.query_channel = 54U;
    tmp_msg_0.reply_channel = 253U;
    tmp_msg_0.transponder_delay = 242U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.6615524589873097;
    msg.y = 0.002832484951041714;
    msg.var_x = 0.2178468542026889;
    msg.var_y = 0.7760746800193664;
    msg.distance = 0.7485994676598713;

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
    msg.setTimeStamp(0.1353869106940916);
    msg.setSource(46582U);
    msg.setSourceEntity(36U);
    msg.setDestination(31019U);
    msg.setDestinationEntity(169U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("NYPHRUZDMCYQWGBIRLUQEZGBOLOTRAZUJCTKOMIDIFVEWMFXLLVCGQYQTSRECFNZSJVHXCLJSCMFQKELSDZWXQWZNVHEKMUDXFAZWQWYDHBNOFJKISRMNPBJTZZACIJYKUDOUKONLDSRSTKBGVEXTXFBKIVOMSSJJBRNWVVQMPFUTPJNAHO");
    tmp_msg_0.lat = 0.46107239753819196;
    tmp_msg_0.lon = 0.14879628113430543;
    tmp_msg_0.depth = 0.9714800371730345;
    tmp_msg_0.query_channel = 203U;
    tmp_msg_0.reply_channel = 75U;
    tmp_msg_0.transponder_delay = 46U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.5880611597740902;
    msg.y = 0.09743909409697804;
    msg.var_x = 0.9043832138967003;
    msg.var_y = 0.2279822252995628;
    msg.distance = 0.536219120181258;

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
    msg.setTimeStamp(0.7236480785098195);
    msg.setSource(43253U);
    msg.setSourceEntity(46U);
    msg.setDestination(14591U);
    msg.setDestinationEntity(185U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("YAGSMZNNDZRUDFFVDZSQMKUTIRDLGTFWJTYMFHNBGPYTJWXCKZJUUAVQXUNEEZZDYJOFBBLHQRMCLNYFHSSWOELB");
    tmp_msg_0.lat = 0.3249212189159807;
    tmp_msg_0.lon = 0.8687933987209894;
    tmp_msg_0.depth = 0.6993941663605195;
    tmp_msg_0.query_channel = 97U;
    tmp_msg_0.reply_channel = 180U;
    tmp_msg_0.transponder_delay = 132U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.9974760486409251;
    msg.y = 0.8155714723849928;
    msg.var_x = 0.8684708263587299;
    msg.var_y = 0.8619730842805489;
    msg.distance = 0.04283837978388505;

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
    msg.setTimeStamp(0.4491436382419042);
    msg.setSource(49129U);
    msg.setSourceEntity(233U);
    msg.setDestination(63651U);
    msg.setDestinationEntity(85U);
    msg.state = 78U;

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
    msg.setTimeStamp(0.41918212580680003);
    msg.setSource(64270U);
    msg.setSourceEntity(216U);
    msg.setDestination(2399U);
    msg.setDestinationEntity(43U);
    msg.state = 207U;

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
    msg.setTimeStamp(0.6471672908909389);
    msg.setSource(26090U);
    msg.setSourceEntity(121U);
    msg.setDestination(11912U);
    msg.setDestinationEntity(110U);
    msg.state = 164U;

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
    msg.setTimeStamp(0.9796813436488622);
    msg.setSource(10493U);
    msg.setSourceEntity(229U);
    msg.setDestination(44468U);
    msg.setDestinationEntity(238U);
    msg.x = 0.544543505360463;
    msg.y = 0.08204173916374635;
    msg.z = 0.2446750132700498;

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
    msg.setTimeStamp(0.8710128395180228);
    msg.setSource(1862U);
    msg.setSourceEntity(20U);
    msg.setDestination(13497U);
    msg.setDestinationEntity(148U);
    msg.x = 0.6752498639891201;
    msg.y = 0.9916549214316658;
    msg.z = 0.41963625877345;

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
    msg.setTimeStamp(0.06580100188933735);
    msg.setSource(43915U);
    msg.setSourceEntity(143U);
    msg.setDestination(60216U);
    msg.setDestinationEntity(219U);
    msg.x = 0.05353851799660514;
    msg.y = 0.3346972167430693;
    msg.z = 0.7745215345309576;

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
    msg.setTimeStamp(0.4207135603957227);
    msg.setSource(41611U);
    msg.setSourceEntity(141U);
    msg.setDestination(50065U);
    msg.setDestinationEntity(6U);
    msg.va = 0.17114698319099997;
    msg.aoa = 0.8818456237970207;
    msg.ssa = 0.7445558287300882;

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
    msg.setTimeStamp(0.5059127643637411);
    msg.setSource(42907U);
    msg.setSourceEntity(166U);
    msg.setDestination(12676U);
    msg.setDestinationEntity(108U);
    msg.va = 0.7686706663428202;
    msg.aoa = 0.4590926216277893;
    msg.ssa = 0.6082081518888621;

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
    msg.setTimeStamp(0.8941648682499281);
    msg.setSource(56600U);
    msg.setSourceEntity(11U);
    msg.setDestination(54685U);
    msg.setDestinationEntity(194U);
    msg.va = 0.3958535309712996;
    msg.aoa = 0.32392625357555227;
    msg.ssa = 0.3956376999174479;

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
    msg.setTimeStamp(0.5412687980691776);
    msg.setSource(60769U);
    msg.setSourceEntity(212U);
    msg.setDestination(46953U);
    msg.setDestinationEntity(209U);
    msg.value = 0.8945371953084188;

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
    msg.setTimeStamp(0.49925624192076734);
    msg.setSource(4404U);
    msg.setSourceEntity(42U);
    msg.setDestination(35651U);
    msg.setDestinationEntity(192U);
    msg.value = 0.024571345736616346;

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
    msg.setTimeStamp(0.7132127122260231);
    msg.setSource(51083U);
    msg.setSourceEntity(61U);
    msg.setDestination(3997U);
    msg.setDestinationEntity(99U);
    msg.value = 0.655984213836688;

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
    msg.setTimeStamp(0.6457224386023313);
    msg.setSource(45181U);
    msg.setSourceEntity(141U);
    msg.setDestination(19967U);
    msg.setDestinationEntity(152U);
    msg.value = 0.1657206943774936;
    msg.z_units = 75U;

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
    msg.setTimeStamp(0.29646999343879044);
    msg.setSource(33039U);
    msg.setSourceEntity(101U);
    msg.setDestination(13181U);
    msg.setDestinationEntity(130U);
    msg.value = 0.7168143271112729;
    msg.z_units = 29U;

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
    msg.setTimeStamp(0.6451082816720671);
    msg.setSource(54122U);
    msg.setSourceEntity(214U);
    msg.setDestination(41053U);
    msg.setDestinationEntity(34U);
    msg.value = 0.2991536980744386;
    msg.z_units = 87U;

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
    msg.setTimeStamp(0.25496230271723297);
    msg.setSource(58251U);
    msg.setSourceEntity(206U);
    msg.setDestination(13070U);
    msg.setDestinationEntity(98U);
    msg.value = 0.5000162971020942;
    msg.speed_units = 176U;

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
    msg.setTimeStamp(0.8458851123624327);
    msg.setSource(45510U);
    msg.setSourceEntity(215U);
    msg.setDestination(44716U);
    msg.setDestinationEntity(26U);
    msg.value = 0.8565263234671576;
    msg.speed_units = 122U;

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
    msg.setTimeStamp(0.6891133409593034);
    msg.setSource(63470U);
    msg.setSourceEntity(220U);
    msg.setDestination(59845U);
    msg.setDestinationEntity(199U);
    msg.value = 0.1553532041897775;
    msg.speed_units = 71U;

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
    msg.setTimeStamp(0.5642704209440524);
    msg.setSource(52851U);
    msg.setSourceEntity(171U);
    msg.setDestination(41536U);
    msg.setDestinationEntity(179U);
    msg.value = 0.41037031210902664;

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
    msg.setTimeStamp(0.4738516208637027);
    msg.setSource(25997U);
    msg.setSourceEntity(125U);
    msg.setDestination(8271U);
    msg.setDestinationEntity(139U);
    msg.value = 0.7999035813492481;

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
    msg.setTimeStamp(0.18424953796509624);
    msg.setSource(10559U);
    msg.setSourceEntity(160U);
    msg.setDestination(59318U);
    msg.setDestinationEntity(15U);
    msg.value = 0.3002003162782729;

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
    msg.setTimeStamp(0.0388459736704051);
    msg.setSource(62699U);
    msg.setSourceEntity(118U);
    msg.setDestination(54714U);
    msg.setDestinationEntity(104U);
    msg.value = 0.8708493024047316;

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
    msg.setTimeStamp(0.08866776806415178);
    msg.setSource(56014U);
    msg.setSourceEntity(163U);
    msg.setDestination(21225U);
    msg.setDestinationEntity(244U);
    msg.value = 0.0256723062042582;

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
    msg.setTimeStamp(0.8692748925723428);
    msg.setSource(29355U);
    msg.setSourceEntity(192U);
    msg.setDestination(27751U);
    msg.setDestinationEntity(75U);
    msg.value = 0.5287861408654271;

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
    msg.setTimeStamp(0.9422515274777763);
    msg.setSource(52886U);
    msg.setSourceEntity(192U);
    msg.setDestination(61561U);
    msg.setDestinationEntity(61U);
    msg.value = 0.9163692509193018;

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
    msg.setTimeStamp(0.2082596614452159);
    msg.setSource(46689U);
    msg.setSourceEntity(162U);
    msg.setDestination(21937U);
    msg.setDestinationEntity(117U);
    msg.value = 0.4389850964400751;

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
    msg.setTimeStamp(0.7594475350954802);
    msg.setSource(44842U);
    msg.setSourceEntity(123U);
    msg.setDestination(50762U);
    msg.setDestinationEntity(94U);
    msg.value = 0.4113823453440688;

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
    msg.setTimeStamp(0.44898578697822966);
    msg.setSource(62802U);
    msg.setSourceEntity(207U);
    msg.setDestination(60875U);
    msg.setDestinationEntity(0U);
    msg.path_ref = 2421178780U;
    msg.start_lat = 0.6427754030102752;
    msg.start_lon = 0.8728443016079096;
    msg.start_z = 0.858173448039552;
    msg.start_z_units = 4U;
    msg.end_lat = 0.23325886875620438;
    msg.end_lon = 0.8802720389935036;
    msg.end_z = 0.6959844390979111;
    msg.end_z_units = 140U;
    msg.speed = 0.58765978791303;
    msg.speed_units = 11U;
    msg.lradius = 0.445518846531604;
    msg.flags = 77U;

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
    msg.setTimeStamp(0.22009312971525063);
    msg.setSource(14346U);
    msg.setSourceEntity(234U);
    msg.setDestination(2446U);
    msg.setDestinationEntity(119U);
    msg.path_ref = 2510835228U;
    msg.start_lat = 0.337935563159653;
    msg.start_lon = 0.494410657250113;
    msg.start_z = 0.4880166698179943;
    msg.start_z_units = 193U;
    msg.end_lat = 0.7921087885614061;
    msg.end_lon = 0.508722770042334;
    msg.end_z = 0.4798546343790604;
    msg.end_z_units = 150U;
    msg.speed = 0.8505871834134772;
    msg.speed_units = 136U;
    msg.lradius = 0.5069237942240418;
    msg.flags = 8U;

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
    msg.setTimeStamp(0.25535751956749064);
    msg.setSource(16122U);
    msg.setSourceEntity(49U);
    msg.setDestination(40686U);
    msg.setDestinationEntity(45U);
    msg.path_ref = 4113316996U;
    msg.start_lat = 0.6941374831277626;
    msg.start_lon = 0.12059524149719902;
    msg.start_z = 0.18633555852384442;
    msg.start_z_units = 37U;
    msg.end_lat = 0.3939170076750197;
    msg.end_lon = 0.7658227807798292;
    msg.end_z = 0.3669730012091521;
    msg.end_z_units = 138U;
    msg.speed = 0.9206727087510463;
    msg.speed_units = 139U;
    msg.lradius = 0.3654730757093311;
    msg.flags = 176U;

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
    msg.setTimeStamp(0.8419638428159442);
    msg.setSource(6134U);
    msg.setSourceEntity(135U);
    msg.setDestination(63455U);
    msg.setDestinationEntity(203U);
    msg.x = 0.917829651331559;
    msg.y = 0.9294433109363741;
    msg.z = 0.105335542266773;
    msg.k = 0.9218010634276169;
    msg.m = 0.39399232219349056;
    msg.n = 0.9662916766755375;
    msg.flags = 42U;

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
    msg.setTimeStamp(0.9467884020302796);
    msg.setSource(29561U);
    msg.setSourceEntity(22U);
    msg.setDestination(18587U);
    msg.setDestinationEntity(212U);
    msg.x = 0.8849089130512172;
    msg.y = 0.24699351510487444;
    msg.z = 0.2643377006409171;
    msg.k = 0.7821832089629067;
    msg.m = 0.9409183931897699;
    msg.n = 0.8474930459773803;
    msg.flags = 3U;

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
    msg.setTimeStamp(0.1426277684210644);
    msg.setSource(8071U);
    msg.setSourceEntity(127U);
    msg.setDestination(8140U);
    msg.setDestinationEntity(139U);
    msg.x = 0.7212489827341542;
    msg.y = 0.9124876746392506;
    msg.z = 0.2949380413259447;
    msg.k = 0.9918678282293822;
    msg.m = 0.9082698710773542;
    msg.n = 0.079224334524439;
    msg.flags = 65U;

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
    msg.setTimeStamp(0.910460492063071);
    msg.setSource(33570U);
    msg.setSourceEntity(74U);
    msg.setDestination(9253U);
    msg.setDestinationEntity(73U);
    msg.value = 0.21741117593597248;

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
    msg.setTimeStamp(0.7824314322200431);
    msg.setSource(11751U);
    msg.setSourceEntity(235U);
    msg.setDestination(35994U);
    msg.setDestinationEntity(188U);
    msg.value = 0.042722821852645976;

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
    msg.setTimeStamp(0.167145641546121);
    msg.setSource(7040U);
    msg.setSourceEntity(33U);
    msg.setDestination(8867U);
    msg.setDestinationEntity(39U);
    msg.value = 0.15200619014296524;

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
    msg.setTimeStamp(0.1782580939581636);
    msg.setSource(40398U);
    msg.setSourceEntity(104U);
    msg.setDestination(62649U);
    msg.setDestinationEntity(128U);
    msg.u = 0.0017903291020315848;
    msg.v = 0.3384796130516057;
    msg.w = 0.7286776611794619;
    msg.p = 0.11256500932419156;
    msg.q = 0.30086304317997226;
    msg.r = 0.328516919195595;
    msg.flags = 75U;

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
    msg.setTimeStamp(0.33221668676236116);
    msg.setSource(42515U);
    msg.setSourceEntity(26U);
    msg.setDestination(32435U);
    msg.setDestinationEntity(224U);
    msg.u = 0.6351056067316464;
    msg.v = 0.4422993837740491;
    msg.w = 0.4856604974873381;
    msg.p = 0.4679190282494897;
    msg.q = 0.3733832988256355;
    msg.r = 0.5459456731846783;
    msg.flags = 76U;

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
    msg.setTimeStamp(0.8007880370653183);
    msg.setSource(9070U);
    msg.setSourceEntity(250U);
    msg.setDestination(26681U);
    msg.setDestinationEntity(53U);
    msg.u = 0.6999154403239849;
    msg.v = 0.043005015315469186;
    msg.w = 0.2682903576106943;
    msg.p = 0.7214803351499935;
    msg.q = 0.00727563120793373;
    msg.r = 0.30734960936129574;
    msg.flags = 48U;

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
    msg.setTimeStamp(0.03690502118232464);
    msg.setSource(47867U);
    msg.setSourceEntity(157U);
    msg.setDestination(5193U);
    msg.setDestinationEntity(122U);
    msg.path_ref = 102355624U;
    msg.start_lat = 0.5495625581966298;
    msg.start_lon = 0.7910630778361518;
    msg.start_z = 0.4775156188385392;
    msg.start_z_units = 10U;
    msg.end_lat = 0.5903018968613976;
    msg.end_lon = 0.12416671963048198;
    msg.end_z = 0.9903534165144205;
    msg.end_z_units = 162U;
    msg.lradius = 0.5965870471557587;
    msg.flags = 222U;
    msg.x = 0.3668191174436293;
    msg.y = 0.14135414973022753;
    msg.z = 0.7113748148174928;
    msg.vx = 0.4972477031119118;
    msg.vy = 0.8645234304336524;
    msg.vz = 0.22359374482718108;
    msg.course_error = 0.28008171340001975;
    msg.eta = 30760U;

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
    msg.setTimeStamp(0.33218423137933306);
    msg.setSource(16127U);
    msg.setSourceEntity(24U);
    msg.setDestination(48374U);
    msg.setDestinationEntity(192U);
    msg.path_ref = 540489584U;
    msg.start_lat = 0.11671832106339353;
    msg.start_lon = 0.01258330266630403;
    msg.start_z = 0.02579452146879113;
    msg.start_z_units = 11U;
    msg.end_lat = 0.08277441555648934;
    msg.end_lon = 0.612103211172921;
    msg.end_z = 0.39214498851694557;
    msg.end_z_units = 59U;
    msg.lradius = 0.5028671224868214;
    msg.flags = 114U;
    msg.x = 0.38755749416909846;
    msg.y = 0.5520485552261076;
    msg.z = 0.5541828692204095;
    msg.vx = 0.7466813560470476;
    msg.vy = 0.14009566491416114;
    msg.vz = 0.6471937784568104;
    msg.course_error = 0.9437419412146761;
    msg.eta = 36829U;

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
    msg.setTimeStamp(0.4774002374730193);
    msg.setSource(61345U);
    msg.setSourceEntity(219U);
    msg.setDestination(62946U);
    msg.setDestinationEntity(243U);
    msg.path_ref = 3272128717U;
    msg.start_lat = 0.7732277246067302;
    msg.start_lon = 0.9542306956471418;
    msg.start_z = 0.7437947909282251;
    msg.start_z_units = 90U;
    msg.end_lat = 0.3703077758924873;
    msg.end_lon = 0.30522463725228843;
    msg.end_z = 0.9582174794318286;
    msg.end_z_units = 183U;
    msg.lradius = 0.14990579635388568;
    msg.flags = 59U;
    msg.x = 0.3760007543080771;
    msg.y = 0.4600567380318986;
    msg.z = 0.6844740885084766;
    msg.vx = 0.8873025580257805;
    msg.vy = 0.020454111250064688;
    msg.vz = 0.6109075647350409;
    msg.course_error = 0.4800139310341478;
    msg.eta = 18355U;

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
    msg.setTimeStamp(0.6123736995214017);
    msg.setSource(25236U);
    msg.setSourceEntity(138U);
    msg.setDestination(7206U);
    msg.setDestinationEntity(30U);
    msg.k = 0.19891326614667626;
    msg.m = 0.5408868815979608;
    msg.n = 0.9826527856471541;

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
    msg.setTimeStamp(0.06062428079898918);
    msg.setSource(54980U);
    msg.setSourceEntity(171U);
    msg.setDestination(54863U);
    msg.setDestinationEntity(195U);
    msg.k = 0.6980772755288374;
    msg.m = 0.9307256412456676;
    msg.n = 0.11001968119902639;

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
    msg.setTimeStamp(0.5722179794796585);
    msg.setSource(53442U);
    msg.setSourceEntity(136U);
    msg.setDestination(43338U);
    msg.setDestinationEntity(36U);
    msg.k = 0.439204703997053;
    msg.m = 0.08705089356375662;
    msg.n = 0.5621746383909096;

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
    msg.setTimeStamp(0.4303558423152223);
    msg.setSource(30622U);
    msg.setSourceEntity(32U);
    msg.setDestination(20611U);
    msg.setDestinationEntity(159U);
    msg.p = 0.727081385862097;
    msg.i = 0.9063420321212593;
    msg.d = 0.38246544253898684;
    msg.a = 0.2515067337948679;

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
    msg.setTimeStamp(0.014589238919442638);
    msg.setSource(38514U);
    msg.setSourceEntity(171U);
    msg.setDestination(35397U);
    msg.setDestinationEntity(29U);
    msg.p = 0.99617835894629;
    msg.i = 0.29137830879012216;
    msg.d = 0.2305483582796788;
    msg.a = 0.31040278824074197;

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
    msg.setTimeStamp(0.5173382202598644);
    msg.setSource(22917U);
    msg.setSourceEntity(41U);
    msg.setDestination(37006U);
    msg.setDestinationEntity(158U);
    msg.p = 0.6744357012251476;
    msg.i = 0.9110345116631411;
    msg.d = 0.05870072549481953;
    msg.a = 0.06946910919881566;

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
    msg.setTimeStamp(0.808461150742401);
    msg.setSource(59576U);
    msg.setSourceEntity(88U);
    msg.setDestination(57685U);
    msg.setDestinationEntity(200U);
    msg.op = 172U;

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
    msg.setTimeStamp(0.8118945050129799);
    msg.setSource(58495U);
    msg.setSourceEntity(168U);
    msg.setDestination(23043U);
    msg.setDestinationEntity(201U);
    msg.op = 10U;

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
    msg.setTimeStamp(0.30243864036815693);
    msg.setSource(2492U);
    msg.setSourceEntity(28U);
    msg.setDestination(38927U);
    msg.setDestinationEntity(80U);
    msg.op = 241U;

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
    msg.setTimeStamp(0.10646116494934665);
    msg.setSource(64176U);
    msg.setSourceEntity(152U);
    msg.setDestination(41613U);
    msg.setDestinationEntity(114U);
    msg.x = 0.23143023866552348;
    msg.y = 0.4933964144464291;
    msg.z = 0.045705609293493765;
    msg.vx = 0.688753724529241;
    msg.vy = 0.2904264319119566;
    msg.vz = 0.5162067461364469;
    msg.ax = 0.08564050963907544;
    msg.ay = 0.31903089692616127;
    msg.az = 0.3192645566682776;
    msg.flags = 58713U;

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
    msg.setTimeStamp(0.007028930611504669);
    msg.setSource(46102U);
    msg.setSourceEntity(53U);
    msg.setDestination(5878U);
    msg.setDestinationEntity(122U);
    msg.x = 0.025958909694640098;
    msg.y = 0.0685343019424407;
    msg.z = 0.7328572545734732;
    msg.vx = 0.5601432528379559;
    msg.vy = 0.2849919595629402;
    msg.vz = 0.5386374748739299;
    msg.ax = 0.36149758949079835;
    msg.ay = 0.9152140945750412;
    msg.az = 0.8757836686653836;
    msg.flags = 10006U;

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
    msg.setTimeStamp(0.35622746788094317);
    msg.setSource(27023U);
    msg.setSourceEntity(21U);
    msg.setDestination(54398U);
    msg.setDestinationEntity(247U);
    msg.x = 0.0946904846640011;
    msg.y = 0.39340528931349084;
    msg.z = 0.6452980999001812;
    msg.vx = 0.5721640653471786;
    msg.vy = 0.1571061500939147;
    msg.vz = 0.8207330492170064;
    msg.ax = 0.017283251821747503;
    msg.ay = 0.8856537002032957;
    msg.az = 0.8856522024815248;
    msg.flags = 28501U;

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
    msg.setTimeStamp(0.0070754627390815505);
    msg.setSource(4956U);
    msg.setSourceEntity(55U);
    msg.setDestination(6728U);
    msg.setDestinationEntity(125U);
    msg.value = 0.016521402651079375;

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
    msg.setTimeStamp(0.5669452167968865);
    msg.setSource(16806U);
    msg.setSourceEntity(221U);
    msg.setDestination(36704U);
    msg.setDestinationEntity(175U);
    msg.value = 0.7505320637815803;

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
    msg.setTimeStamp(0.18359071124158555);
    msg.setSource(33566U);
    msg.setSourceEntity(24U);
    msg.setDestination(57226U);
    msg.setDestinationEntity(95U);
    msg.value = 0.41416534539609096;

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
    msg.setTimeStamp(0.4568792713843822);
    msg.setSource(64496U);
    msg.setSourceEntity(58U);
    msg.setDestination(25119U);
    msg.setDestinationEntity(48U);
    msg.timeout = 31657U;
    msg.lat = 0.008725805702858636;
    msg.lon = 0.015183561419352731;
    msg.z = 0.49838509479149173;
    msg.z_units = 225U;
    msg.speed = 0.11667626437336576;
    msg.speed_units = 20U;
    msg.roll = 0.8474709366894261;
    msg.pitch = 0.13746904817001027;
    msg.yaw = 0.21574190934740645;
    msg.custom.assign("JZWKTRSREJQBPVQXDZLKHDSLWQUBIIBDGMNLXQHIUUJUVOQWFNKXEMEJLZFBMYEHJBITNGSYCJZYXRVCKDCHMBOQWUDFAKAMUHXTROPIINZCPVLVVENEIYRWPJAHOCHSXEOFGBGXXSMKS");

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
    msg.setTimeStamp(0.1066424327829254);
    msg.setSource(4508U);
    msg.setSourceEntity(100U);
    msg.setDestination(26956U);
    msg.setDestinationEntity(56U);
    msg.timeout = 7308U;
    msg.lat = 0.5099324658540344;
    msg.lon = 0.8173878812945969;
    msg.z = 0.43582279506862687;
    msg.z_units = 192U;
    msg.speed = 0.24325504201714254;
    msg.speed_units = 195U;
    msg.roll = 0.19757407036430297;
    msg.pitch = 0.18217362326521602;
    msg.yaw = 0.07651977333451132;
    msg.custom.assign("SCSLHKJDDFXNZJRTMULGUHJJEWRHVGRRZMZJDCIPQXTUEGYIYRMYJVMQEIDIPCLBAEEVHCJGVCTPDUOANYHTMNNBAFZHSTOTZXFHBEKQAIDGCSEIYJOJXSCWWOKGDEXWIWXEZSUBOCV");

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
    msg.setTimeStamp(0.8712737766091134);
    msg.setSource(4759U);
    msg.setSourceEntity(198U);
    msg.setDestination(58426U);
    msg.setDestinationEntity(12U);
    msg.timeout = 55570U;
    msg.lat = 0.0036798439514927894;
    msg.lon = 0.75932252926882;
    msg.z = 0.7205562315349576;
    msg.z_units = 89U;
    msg.speed = 0.14411724036584783;
    msg.speed_units = 22U;
    msg.roll = 0.9823814101284312;
    msg.pitch = 0.22182500444800657;
    msg.yaw = 0.9447927219480545;
    msg.custom.assign("JONWTSNLVTQEOHKCUJWUUOIIIGZMVALEQYMLKWAGGQAQIXVUTRDWCIHPRZIXMVHBSXZDXTZWELGEROCBAMHRSNWCYBBJFDYUISUNTNCFMUJZASWADJPRJJNSAMBLCCXDRPBL");

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
    msg.setTimeStamp(0.4289066397840513);
    msg.setSource(9793U);
    msg.setSourceEntity(25U);
    msg.setDestination(37117U);
    msg.setDestinationEntity(140U);
    msg.timeout = 32154U;
    msg.lat = 0.7289089924421536;
    msg.lon = 0.2374896100196796;
    msg.z = 0.5214960058049501;
    msg.z_units = 194U;
    msg.speed = 0.4045116603819856;
    msg.speed_units = 86U;
    msg.duration = 26966U;
    msg.radius = 0.17237732526868077;
    msg.flags = 190U;
    msg.custom.assign("ZVMMWXSCTJCBXZZAQHBLJHLTXPQCKINPNSRFUCZLRWDRTSPTLZCCBRPZBOMNDSTBFNYSHSDVRKKVEICWRIATTYIDEKGVLMTQVYMPBEXVFXXXBIZPAETKQGOLJMAOHRHAJESDLABOHAYFJWQHQODLDDQCLWGMOYHYXYVUDCXJUUOEMGEQGXBAIKUFPHPPSMQINAPJZIWBVUAWNFWUNGFYOGZWSVFYNEJGNIROKRDFITVCSQMKUJGRGUEKEWHJZY");

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
    msg.setTimeStamp(0.43156040505836746);
    msg.setSource(61463U);
    msg.setSourceEntity(77U);
    msg.setDestination(61628U);
    msg.setDestinationEntity(55U);
    msg.timeout = 15422U;
    msg.lat = 0.9753598889878432;
    msg.lon = 0.6834173556716743;
    msg.z = 0.21205515421848942;
    msg.z_units = 164U;
    msg.speed = 0.5430378340413802;
    msg.speed_units = 240U;
    msg.duration = 61920U;
    msg.radius = 0.8072245964032255;
    msg.flags = 66U;
    msg.custom.assign("IEYZGMAMVKZSGXYEDYONYQHUCEORFUFMWXGZKMRVAWHKLLMBRRBBXPNPGYZJOJLLOWXRKVINIJLIPUSQQPRPDTSECGMAHOWQLVSLRYIYXWQNRFLAEBUSKIPQQXGVJDJCDJCCETZIOBHHHOCADM");

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
    msg.setTimeStamp(0.002482082787875428);
    msg.setSource(20752U);
    msg.setSourceEntity(73U);
    msg.setDestination(1688U);
    msg.setDestinationEntity(35U);
    msg.timeout = 20048U;
    msg.lat = 0.45051124492847516;
    msg.lon = 0.2788411754446105;
    msg.z = 0.078903738233707;
    msg.z_units = 180U;
    msg.speed = 0.17922597437247623;
    msg.speed_units = 47U;
    msg.duration = 14008U;
    msg.radius = 0.5893344936193241;
    msg.flags = 104U;
    msg.custom.assign("NCUTMGAWNGYMYBUZRAOWMOSUYNVDALVKMSSDMTIXSVIFDCHFOEGRLPFYAHADQIRKUVKQRUEVVPYQPGAJTXTISHTVBOJMCIXVIFMEA");

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
    msg.setTimeStamp(0.7641187333678511);
    msg.setSource(16387U);
    msg.setSourceEntity(10U);
    msg.setDestination(9539U);
    msg.setDestinationEntity(245U);
    msg.custom.assign("VHLMAACZMUOZCEFWKNWAWXQMTEDOUFPSRYTGELQWFLHTUMJIJSBZANFOROMNOZWIBHJIMZGDJHVFMXTYDICXCTAQVMBEKLSEJNDDGVQYDHNNHKKFGABOMDRCPFYIPLXXWVAAJAMNYSKZIENHPSUPBWAIOUXZCQSEIXBCZYQDLGGPTTFOOSROYHGURZUBIVKQDVTLPRHSLYTJWVQUJREGRUEFKKVRDPVUWJYWPNPFCHXGCBCRI");

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
    msg.setTimeStamp(0.03783526434566864);
    msg.setSource(16199U);
    msg.setSourceEntity(89U);
    msg.setDestination(37139U);
    msg.setDestinationEntity(160U);
    msg.custom.assign("OXNQDTGHYKQOPXMGHAVFQCKNMLHVUDHYAMBAFTUNRXVWEZJQFPIPHJCWTXBUCYTLJIDPRBZWITXOTIKIPGIMQXMLYZSDJOICZRLAIILJUEERSZVHIWZDAQLRCESYGGADMOGUOBCBDOSQRSVSCKUNLUMFGPZLFRESTOHZKFRPHYZTEXDSVVUGLEURNDMNCRJEMXBZCEYDMJBPSKBHQWHF");

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
    msg.setTimeStamp(0.25794189968349657);
    msg.setSource(19887U);
    msg.setSourceEntity(89U);
    msg.setDestination(16255U);
    msg.setDestinationEntity(187U);
    msg.custom.assign("FHZRKGONPARSCBOPWUVZBTOIYFPBGCPVMXFTVHQDMSAONXQONDEYKTLGVZSDETHWCXXWXNYQEETSGLUZNLYADNJAOUPHSUASOFPRBXBWCJJIYSWGRINMMKFQYHMQKJTVHRRUKGDHFCCPZJMKTAWCXZID");

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
    msg.setTimeStamp(0.8845301116515034);
    msg.setSource(21065U);
    msg.setSourceEntity(170U);
    msg.setDestination(29964U);
    msg.setDestinationEntity(180U);
    msg.timeout = 32234U;
    msg.lat = 0.9046273484922234;
    msg.lon = 0.8473589524230051;
    msg.z = 0.444745495670256;
    msg.z_units = 137U;
    msg.duration = 1214U;
    msg.speed = 0.6143339689392526;
    msg.speed_units = 164U;
    msg.type = 44U;
    msg.radius = 0.8887668321738996;
    msg.length = 0.01840820685372091;
    msg.bearing = 0.4666431787367733;
    msg.direction = 32U;
    msg.custom.assign("IUJWITRCFTBSHFMXPYKFZHYZUJGRPXCQOFNKAKKXIITXIKUDIXLUSGBYQSDVMTWDGXSZEUWQNTHWKMZRNWUKWBAERWFGEEPFPJVRCIOZNAYSSTVEONYATOHLYOQMXPBHVGOCHBMTLRIIEGGJNQZDNQCQQBJBDHCPFLYMDELEKWBZKAJZVZKSVDXDMSBVMJNHTUHAVVSCYRHUQWRLOBTRPJCCZNPQFAAGJRFDUIOPAXLNSMLOCEF");

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
    msg.setTimeStamp(0.012468791837260462);
    msg.setSource(4684U);
    msg.setSourceEntity(60U);
    msg.setDestination(22268U);
    msg.setDestinationEntity(100U);
    msg.timeout = 32221U;
    msg.lat = 0.271313939381723;
    msg.lon = 0.09395822975805967;
    msg.z = 0.8202959592660287;
    msg.z_units = 196U;
    msg.duration = 3935U;
    msg.speed = 0.22603120382546038;
    msg.speed_units = 56U;
    msg.type = 165U;
    msg.radius = 0.5620396900220053;
    msg.length = 0.3463085354938904;
    msg.bearing = 0.6693609387970476;
    msg.direction = 26U;
    msg.custom.assign("VLUZHGZUSDZKIMUUOCEWROJJUREXVDSQGQRIXYNYYQVHETBQOHIBICLLIJOQARPWBRPBXHMYQBKWLAMFWDZFXDTMNVCYMWSEAYWYWNMHZCRBTYAKZIGZEVCKGOLOSPQSPNXISJLFIRUNTIVDQDJKGKXFWTBXWDHHCJFONSQYZEMCFPDXAKANCCBNLMJ");

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
    msg.setTimeStamp(0.4380866027196504);
    msg.setSource(31387U);
    msg.setSourceEntity(167U);
    msg.setDestination(46719U);
    msg.setDestinationEntity(171U);
    msg.timeout = 49898U;
    msg.lat = 0.6664402811738322;
    msg.lon = 0.6151808726699297;
    msg.z = 0.7801696759945748;
    msg.z_units = 138U;
    msg.duration = 26054U;
    msg.speed = 0.446788550751269;
    msg.speed_units = 138U;
    msg.type = 188U;
    msg.radius = 0.1586911366471978;
    msg.length = 0.42885992890215563;
    msg.bearing = 0.5616297356952051;
    msg.direction = 178U;
    msg.custom.assign("DHJIREMOTIDVDXAEBMNYDOUJEBEIRVXHUIQUIWTIECUWIKJAPMBHYJUFQHLSHZEMGYEJKNVGGHPGDFPXRACTENKTYTRMYKANVLWSDACTNPRHVPSDNGLOPABKQOPCNRBJLRXDGGDFTXZSCWMYXBWVRONGLQOQLWTKZCLSKLVKYESVKXICMLXQDPSGZITXKJBBCUOZZWOTU");

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
    msg.setTimeStamp(0.3882589670725074);
    msg.setSource(12884U);
    msg.setSourceEntity(87U);
    msg.setDestination(11975U);
    msg.setDestinationEntity(57U);
    msg.duration = 32058U;
    msg.custom.assign("XVHBTRPJFXFSFOEB");

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
    msg.setTimeStamp(0.6281536159502468);
    msg.setSource(64824U);
    msg.setSourceEntity(67U);
    msg.setDestination(53770U);
    msg.setDestinationEntity(42U);
    msg.duration = 62140U;
    msg.custom.assign("VHXVICIELSXVSAQJJRKMQOJQKGRESQZGPMWETVOWTSHDTHAZZJKHCJWXBDNLAKDWCNGCGAABYQDPCVFVQEQTEUUIXFRXZSSGMUNPRGARMZDLRM");

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
    msg.setTimeStamp(0.6770059364964957);
    msg.setSource(15816U);
    msg.setSourceEntity(23U);
    msg.setDestination(18571U);
    msg.setDestinationEntity(246U);
    msg.duration = 8925U;
    msg.custom.assign("IXEDXVEHMRVCHIFMTOXAHNTEZFOCGZBDHFIYYXVPCEEDBFNGCFSGJKLWLOYXGIQLIDOCPNP");

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
    msg.setTimeStamp(0.4960126398033097);
    msg.setSource(32626U);
    msg.setSourceEntity(38U);
    msg.setDestination(2206U);
    msg.setDestinationEntity(131U);
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.5521209175425206;
    msg.control.set(tmp_msg_0);
    msg.duration = 61968U;
    msg.custom.assign("VCIRIQXHEILWXKAMLHEBDSPIBTJSFLDOTFMZYEHUHVZNPYJNLRRKRUJMICGSGAIMBGSZUNXBQOPWTFEBWUYIICABNRHXKQJXCBLMGU");

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
    msg.setTimeStamp(0.3091752588636828);
    msg.setSource(21952U);
    msg.setSourceEntity(6U);
    msg.setDestination(10604U);
    msg.setDestinationEntity(46U);
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.09484019515261011;
    msg.control.set(tmp_msg_0);
    msg.duration = 60832U;
    msg.custom.assign("IFPJMKUDABCNKVIWWLFFQZJ");

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
    msg.setTimeStamp(0.6734549355164152);
    msg.setSource(61073U);
    msg.setSourceEntity(193U);
    msg.setDestination(38427U);
    msg.setDestinationEntity(39U);
    IMC::DesiredRoll tmp_msg_0;
    tmp_msg_0.value = 0.7389585293376792;
    msg.control.set(tmp_msg_0);
    msg.duration = 60288U;
    msg.custom.assign("LZJLJXFEHZXGXHZUJIYFYGWSYNLYLXTKLQVEYEABRHMAPOMZCELXVISOGNSHSUCRQDQXTIUEPRWNHD");

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
    msg.setTimeStamp(0.3591173350417357);
    msg.setSource(23887U);
    msg.setSourceEntity(63U);
    msg.setDestination(7535U);
    msg.setDestinationEntity(114U);
    msg.timeout = 34257U;
    msg.lat = 0.85770929728856;
    msg.lon = 0.8978054664655457;
    msg.z = 0.5235195537147921;
    msg.z_units = 190U;
    msg.speed = 0.07348703417289071;
    msg.speed_units = 51U;
    msg.bearing = 0.3831163752421567;
    msg.cross_angle = 0.3888749244143329;
    msg.width = 0.8727661823248594;
    msg.length = 0.8654924947516368;
    msg.hstep = 0.860935871780186;
    msg.coff = 232U;
    msg.alternation = 104U;
    msg.flags = 26U;
    msg.custom.assign("PBKNHJNGFPXKHPQJLSTKMRQQROLWJZSDUVSBHOQJKWLNEGPACVTJPDTKFDAMFYGMLOLMXWIITKRNACSCEPGVJRZQAEOWJEZXPNEHGPLDHXINDIHFDCZXXWVMIBOTFYEQCELBANPYQBISMYPJFXXALYOLYOVORRUMQGJKKXEUXHOOSVYQWWYGHTIZ");

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
    msg.setTimeStamp(0.43997198501666335);
    msg.setSource(30930U);
    msg.setSourceEntity(85U);
    msg.setDestination(12165U);
    msg.setDestinationEntity(71U);
    msg.timeout = 35274U;
    msg.lat = 0.2959917057855086;
    msg.lon = 0.35386070168987094;
    msg.z = 0.9558731398477741;
    msg.z_units = 179U;
    msg.speed = 0.19591442055755892;
    msg.speed_units = 90U;
    msg.bearing = 0.009486811283486274;
    msg.cross_angle = 0.7125859160301804;
    msg.width = 0.4262020898700105;
    msg.length = 0.12759463140267047;
    msg.hstep = 0.7269790524959241;
    msg.coff = 169U;
    msg.alternation = 120U;
    msg.flags = 237U;
    msg.custom.assign("HRPHUDXFNSMMSLSZKQGTOPVGJAFDTKERYNWSOMIIGGXEYBIFSQHDCREJKLUUVADJNKYN");

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
    msg.setTimeStamp(0.250370428452517);
    msg.setSource(25086U);
    msg.setSourceEntity(16U);
    msg.setDestination(29203U);
    msg.setDestinationEntity(143U);
    msg.timeout = 52945U;
    msg.lat = 0.7429945227148422;
    msg.lon = 0.6124901503828871;
    msg.z = 0.5223701017869722;
    msg.z_units = 200U;
    msg.speed = 0.14388136715100086;
    msg.speed_units = 156U;
    msg.bearing = 0.09277970198143382;
    msg.cross_angle = 0.36982954284062164;
    msg.width = 0.5873017346469753;
    msg.length = 0.8201152805627091;
    msg.hstep = 0.0704411813253174;
    msg.coff = 230U;
    msg.alternation = 154U;
    msg.flags = 90U;
    msg.custom.assign("TWUHYEVIWVNJCCCRSESJ");

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
    msg.setTimeStamp(0.5654762163987401);
    msg.setSource(52812U);
    msg.setSourceEntity(234U);
    msg.setDestination(23503U);
    msg.setDestinationEntity(106U);
    msg.timeout = 29243U;
    msg.lat = 0.23016645370929267;
    msg.lon = 0.0510065119821429;
    msg.z = 0.6056340729131466;
    msg.z_units = 25U;
    msg.speed = 0.6081823109910917;
    msg.speed_units = 216U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.34903494860417694;
    tmp_msg_0.y = 0.4646456571587875;
    tmp_msg_0.z = 0.7526892330026754;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("THRZUAFDOBANXEIBUOVBLRPMNFLAMIEEWHEM");

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
    msg.setTimeStamp(0.8832571617293524);
    msg.setSource(29516U);
    msg.setSourceEntity(48U);
    msg.setDestination(27268U);
    msg.setDestinationEntity(152U);
    msg.timeout = 22616U;
    msg.lat = 0.2512882401221148;
    msg.lon = 0.2611914458119865;
    msg.z = 0.021690508785912388;
    msg.z_units = 250U;
    msg.speed = 0.7473963340592465;
    msg.speed_units = 43U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.8420303273181067;
    tmp_msg_0.y = 0.4389246024954019;
    tmp_msg_0.z = 0.9339374149320138;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("UTLMMUYNOCSIKHQTMKMJJSHIZLWIVALCVQRJEBYTBASEGDAVRGGVBHUNFLLXMAYSGOSGKAROD");

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
    msg.setTimeStamp(0.27511794332262607);
    msg.setSource(35242U);
    msg.setSourceEntity(77U);
    msg.setDestination(49894U);
    msg.setDestinationEntity(84U);
    msg.timeout = 54802U;
    msg.lat = 0.8996210383350749;
    msg.lon = 0.8420432614160762;
    msg.z = 0.9597328910623868;
    msg.z_units = 78U;
    msg.speed = 0.6209480722152457;
    msg.speed_units = 228U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.9944496505362497;
    tmp_msg_0.y = 0.1359680481886395;
    tmp_msg_0.z = 0.5280160428481643;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("UALDBCAKJGWVEVIQEFIIIGUJQCTPJSSUMIVBLPSTNHPYMZWOYVJKYJNDPDFGAXESS");

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
    msg.setTimeStamp(0.5501669442850697);
    msg.setSource(8836U);
    msg.setSourceEntity(36U);
    msg.setDestination(4717U);
    msg.setDestinationEntity(70U);
    msg.x = 0.46195191736916064;
    msg.y = 0.4424435057056002;
    msg.z = 0.7175215695753488;

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
    msg.setTimeStamp(0.9973970732191987);
    msg.setSource(38806U);
    msg.setSourceEntity(254U);
    msg.setDestination(52814U);
    msg.setDestinationEntity(182U);
    msg.x = 0.5328046556278019;
    msg.y = 0.9475701710178447;
    msg.z = 0.3918602283402314;

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
    msg.setTimeStamp(0.15417119170459692);
    msg.setSource(11700U);
    msg.setSourceEntity(247U);
    msg.setDestination(47685U);
    msg.setDestinationEntity(107U);
    msg.x = 0.2031500410783893;
    msg.y = 0.8840569548975227;
    msg.z = 0.7477633464646237;

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
    msg.setTimeStamp(0.36143941316075345);
    msg.setSource(62918U);
    msg.setSourceEntity(80U);
    msg.setDestination(31825U);
    msg.setDestinationEntity(0U);
    msg.timeout = 35749U;
    msg.lat = 0.45353519848658985;
    msg.lon = 0.11236277296194885;
    msg.z = 0.8252360572979229;
    msg.z_units = 168U;
    msg.amplitude = 0.42289214100747863;
    msg.pitch = 0.33792606931252955;
    msg.speed = 0.2917081538719689;
    msg.speed_units = 174U;
    msg.custom.assign("BIVCTCRWRUOJBNLHIHPLWHQNZJUHFZDELSXPFTSVOQELDRHUCVXACXSRYBPXGOSSGZQAJZDCRMOFKKKOWGEEBVWTVXHVTXEAXIGNAGVWFUBVRTQVMHBWIMWCACNNPGESMKZYRDDMKAYYRGSDOMPXOYT");

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
    msg.setTimeStamp(0.37180361131337747);
    msg.setSource(16320U);
    msg.setSourceEntity(247U);
    msg.setDestination(29880U);
    msg.setDestinationEntity(88U);
    msg.timeout = 47758U;
    msg.lat = 0.15557825935512426;
    msg.lon = 0.8863536241057485;
    msg.z = 0.10529691481713177;
    msg.z_units = 164U;
    msg.amplitude = 0.026869246899880683;
    msg.pitch = 0.10384419205133888;
    msg.speed = 0.5431914293671383;
    msg.speed_units = 153U;
    msg.custom.assign("ZULAWDTSOUEUCSWLYNMPXOTPYRPXUKRQYVMNTECBXRHWHPGGRBWBRFKZEZTYHQPUJOYCPHPPSCJARUYXIZIAQJBUURZXBJLDHMIDLBFMIVBMGEMYFQFGSKSWDQDTOKAGVTGKZDSYSMA");

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
    msg.setTimeStamp(0.1961455584795868);
    msg.setSource(16844U);
    msg.setSourceEntity(147U);
    msg.setDestination(43948U);
    msg.setDestinationEntity(210U);
    msg.timeout = 52810U;
    msg.lat = 0.7061178213311141;
    msg.lon = 0.2249604760226649;
    msg.z = 0.5668319663922594;
    msg.z_units = 115U;
    msg.amplitude = 0.006058687797156126;
    msg.pitch = 0.6925533680862955;
    msg.speed = 0.9876270579077709;
    msg.speed_units = 5U;
    msg.custom.assign("RASRNOFVJGNUYJKDRHTBUHQXCVFJKNZUPUPZFKOQQSSETWDGYXCZBONMFQZDYMPHVPMAOAEXU");

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
    msg.setTimeStamp(0.09469557793573002);
    msg.setSource(14896U);
    msg.setSourceEntity(126U);
    msg.setDestination(5651U);
    msg.setDestinationEntity(95U);

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
    msg.setTimeStamp(0.5731173870519924);
    msg.setSource(48938U);
    msg.setSourceEntity(55U);
    msg.setDestination(24109U);
    msg.setDestinationEntity(188U);

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
    msg.setTimeStamp(0.9547823817973584);
    msg.setSource(20527U);
    msg.setSourceEntity(192U);
    msg.setDestination(10562U);
    msg.setDestinationEntity(109U);

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
    msg.setTimeStamp(0.560340354964596);
    msg.setSource(38989U);
    msg.setSourceEntity(239U);
    msg.setDestination(42953U);
    msg.setDestinationEntity(223U);
    msg.lat = 0.9750358670882384;
    msg.lon = 0.6295008971553387;
    msg.z = 0.9780092511446455;
    msg.z_units = 159U;
    msg.radius = 0.49090343694162863;
    msg.duration = 61298U;
    msg.speed = 0.45877467821635465;
    msg.speed_units = 129U;
    msg.custom.assign("SGDZSDLUMYGDWSOLVUEQUNDORQKEQNJZIXFYTTTILYRDKAMJNAHZXIKVHVFJATLQNYQJSBXIRWDNBOMIRCPNFOMLYGCVGLWBOTTSWTQPVOPNNKXVUCHIEYXHHCSGMKFYXGZARFNBMROJEFQAXSUFTXIPJIOVVBZHQKRTDPPHLOKRKHIPCOWAMAJEMUTCVSWDDJRAHYCULDN");

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
    msg.setTimeStamp(0.6973607740817925);
    msg.setSource(46451U);
    msg.setSourceEntity(136U);
    msg.setDestination(34485U);
    msg.setDestinationEntity(82U);
    msg.lat = 0.734716821055179;
    msg.lon = 0.6479458159976512;
    msg.z = 0.05903573882267732;
    msg.z_units = 85U;
    msg.radius = 0.8530964316103603;
    msg.duration = 37491U;
    msg.speed = 0.9320579744756202;
    msg.speed_units = 99U;
    msg.custom.assign("OKFZDYVXWFFACBXWCSIUYQOUIFXZNTMQAKWJVXHAKSSSRBYLJOHWFMAKJTVRQHMZDSOPIRUVBDCVNOZNFVIQLLISGLRLQWHLJNUUTCGEEYQVOGHLCPCEUKMNWYKFDPCAQCJOAGJGFPVTZBZXAZJGHMEXSVJRNMKNEUDBRQRPUGMKGPLNYBPPWGKBODOTLVYTMJIYTLUWMSPCNIDHHIBOAPX");

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
    msg.setTimeStamp(0.5070011812549063);
    msg.setSource(9276U);
    msg.setSourceEntity(16U);
    msg.setDestination(11391U);
    msg.setDestinationEntity(76U);
    msg.lat = 0.11889085760503548;
    msg.lon = 0.8206126078345373;
    msg.z = 0.26301165399711746;
    msg.z_units = 108U;
    msg.radius = 0.3142217456082992;
    msg.duration = 14019U;
    msg.speed = 0.9007153810523599;
    msg.speed_units = 123U;
    msg.custom.assign("XCHLTZFKISGTVXRLKYWBICBFIBBHWBKBAVXYTEUSYPTMZEAERGNUONJOKPRTUXWRXRAQOIHTFZHIEILCCFPXSRCOQQIZJQMGYVBHDWLVOGZEMFJZLNOHASWVYGGDLDNANJOYAOEPKYQDCURMVISMSDSBIGPCLPSMUKJKUGVNFLUEUAWKUMQJHLCNLVHAUAVQXNMEPMJJBEQPTCTFXWZWRYKZBHSDIDNRDPTFFFDPZ");

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
    msg.setTimeStamp(0.21441907515867709);
    msg.setSource(27900U);
    msg.setSourceEntity(53U);
    msg.setDestination(62612U);
    msg.setDestinationEntity(10U);
    msg.timeout = 41255U;
    msg.flags = 74U;
    msg.lat = 0.6727173942389324;
    msg.lon = 0.2996611216565075;
    msg.start_z = 0.5338506806891544;
    msg.start_z_units = 62U;
    msg.end_z = 0.4182466740023828;
    msg.end_z_units = 27U;
    msg.radius = 0.20438758656076794;
    msg.speed = 0.17148580933468693;
    msg.speed_units = 17U;
    msg.custom.assign("MQCMNKBMBRIKMZNCZMWXMYCLELZXOILPFEPOPPHOHLFYAAUIVVFJECSTDZTSPJQVRNAMRISQWEUFZABBIIQTAXHWWRUVHESJJACGDWPJUXXPKNHWRSDGVJOKWDQBSNIYDQZFUNLUBHUVGIQRQTJTBXJMLGUDDLSHERBAGVTEYMFQFHYLYHKZMCGGUB");

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
    msg.setTimeStamp(0.18547593435050735);
    msg.setSource(65101U);
    msg.setSourceEntity(21U);
    msg.setDestination(25141U);
    msg.setDestinationEntity(185U);
    msg.timeout = 59197U;
    msg.flags = 7U;
    msg.lat = 0.7148295435380152;
    msg.lon = 0.6777957244544366;
    msg.start_z = 0.289410354302272;
    msg.start_z_units = 162U;
    msg.end_z = 0.33963331104952;
    msg.end_z_units = 225U;
    msg.radius = 0.5227594932027857;
    msg.speed = 0.6842036234635175;
    msg.speed_units = 156U;
    msg.custom.assign("NQHJTGRIANZYSKWLBFXSEKEUBXCQCSVTVPFXOIDMHLXJKXJIRMGTJLWAATOKYSGCRTVOCFVQUKPUOIDKCITGLEVHUKXNMDJBUOOUPFCBAOMWVVFJQPTGWBECXWOSCHERQCDADNGAFVUAZUKWIHPHFSHGSPYBPDZTBZDMAMJY");

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
    msg.setTimeStamp(0.2285713809120371);
    msg.setSource(27389U);
    msg.setSourceEntity(45U);
    msg.setDestination(52309U);
    msg.setDestinationEntity(17U);
    msg.timeout = 45589U;
    msg.flags = 55U;
    msg.lat = 0.37062167842745086;
    msg.lon = 0.5129916041144419;
    msg.start_z = 0.5141608114806461;
    msg.start_z_units = 162U;
    msg.end_z = 0.39363579580357566;
    msg.end_z_units = 188U;
    msg.radius = 0.13374526298923495;
    msg.speed = 0.22645374955773656;
    msg.speed_units = 6U;
    msg.custom.assign("SABERELTDOFLNVQVGDJKPKAQHMATIMZPVPSAZWHMPASTUWOYGPHBIOWFXKPGOCQVCVMTMVKENBANK");

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
    msg.setTimeStamp(0.5652396403011791);
    msg.setSource(39091U);
    msg.setSourceEntity(132U);
    msg.setDestination(61434U);
    msg.setDestinationEntity(62U);
    msg.timeout = 9193U;
    msg.lat = 0.20058102845591907;
    msg.lon = 0.3799363725062981;
    msg.z = 0.14199217654652552;
    msg.z_units = 180U;
    msg.speed = 0.9048146127213691;
    msg.speed_units = 7U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.6904716633664245;
    tmp_msg_0.y = 0.17363237244407748;
    tmp_msg_0.z = 0.39613241762869555;
    tmp_msg_0.t = 0.37411339388538434;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("QXAIMRYWXSJUFRBQOSXWIQTHLMGSKPQCLHQHICAJNVTZBEUXNMXYAWXIUSJAWABRYGUUJVACSLKPDIDIKLUTFILLBSPSOZHEHCPRYDKMBJVXERSGCCRBWFWXNLVNDZUEVWMUWFHJXQGZPMLTPQEKQUZRDMZLGGTAEDYOHVRYCKMFLVEZAJGGMVVYDIOHTWCJJB");

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
    msg.setTimeStamp(0.6541767662642389);
    msg.setSource(37433U);
    msg.setSourceEntity(57U);
    msg.setDestination(43024U);
    msg.setDestinationEntity(130U);
    msg.timeout = 43587U;
    msg.lat = 0.48737937798632636;
    msg.lon = 0.5704342440234903;
    msg.z = 0.45279910141317603;
    msg.z_units = 252U;
    msg.speed = 0.34942071690694776;
    msg.speed_units = 133U;
    msg.custom.assign("VCEYEYGVKYFLHTEALUCQSQUIHXTTRPUCUFBNVYOFMYWDVXFHZJDIBDJNELMAGAGUGMVYVFFHEBIROZEPYHNKEFLBHKMUZMQKQCKBFRCL");

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
    msg.setTimeStamp(0.7143405183644722);
    msg.setSource(606U);
    msg.setSourceEntity(127U);
    msg.setDestination(32318U);
    msg.setDestinationEntity(227U);
    msg.timeout = 21910U;
    msg.lat = 0.824700685143655;
    msg.lon = 0.26742619163580694;
    msg.z = 0.6734549599356121;
    msg.z_units = 2U;
    msg.speed = 0.14566820575514516;
    msg.speed_units = 43U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.5016376883998541;
    tmp_msg_0.y = 0.3477317194716659;
    tmp_msg_0.z = 0.296870758530004;
    tmp_msg_0.t = 0.5792440355563009;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("ITQQQWADWOAZRQSXJVTSYQXLHDCUCUBTMWRPPNWAXHGVDHKFYMWGBEFVWMCYYYEKQVDTUARXNSXWHRYZCFOHDABZTHOBMQVCINPMONMVICSZPATVGHKNJXUZKBELTEIDJPBRFMNXMENVQYUBLRKWBJMGUTXIHXROUDNSUOJIRYXGCFALJSOELPS");

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
    msg.setTimeStamp(0.8296911908751121);
    msg.setSource(3625U);
    msg.setSourceEntity(126U);
    msg.setDestination(54075U);
    msg.setDestinationEntity(167U);
    msg.x = 0.29661835455350116;
    msg.y = 0.75340650133033;
    msg.z = 0.18471138661322584;
    msg.t = 0.033358683448221016;

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
    msg.setTimeStamp(0.36332983455313783);
    msg.setSource(58678U);
    msg.setSourceEntity(169U);
    msg.setDestination(11224U);
    msg.setDestinationEntity(225U);
    msg.x = 0.8216069073869159;
    msg.y = 0.5704568623048137;
    msg.z = 0.46536335690418495;
    msg.t = 0.7270210893431752;

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
    msg.setTimeStamp(0.9348658829804056);
    msg.setSource(24820U);
    msg.setSourceEntity(213U);
    msg.setDestination(10814U);
    msg.setDestinationEntity(43U);
    msg.x = 0.5789793011670573;
    msg.y = 0.7683407069621715;
    msg.z = 0.13884777041027918;
    msg.t = 0.9196578756875143;

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
    msg.setTimeStamp(0.502877379961989);
    msg.setSource(17247U);
    msg.setSourceEntity(72U);
    msg.setDestination(1242U);
    msg.setDestinationEntity(143U);
    msg.timeout = 61182U;
    msg.name.assign("GYKCTRYTVRROTOGCZCBUXSOKXEQNECNMWHLZTRDGJUBLBGMDLFIDFZAUUPHCNQCOBFYKZPBTQJUFIDSLCSMRYD");
    msg.custom.assign("JAHETYCHACZCYXJWSBALZPLXBCCVPVQUXJWFIGTKWJKPBKITRRVUIKQKDAUWWNOMSQBYYGCLLNQEHXGAZHUIUPVGEOXRVMSIFHRDOQUYXJMRTYHVFJEMLXMQEYUZYOXCAWRLCPJJKSNWFXWZEVDVAWBBNONDDSICTGDOPUBLGSOVZHMESKFQBPWNKRYSACZFMAKMDGIRGFBN");

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
    msg.setTimeStamp(0.11023275261156817);
    msg.setSource(48257U);
    msg.setSourceEntity(226U);
    msg.setDestination(5874U);
    msg.setDestinationEntity(64U);
    msg.timeout = 44073U;
    msg.name.assign("KPJPQOHREXNOZHZQQQGCCDGJSBSNMVDZYUUVKUYAQBHBPTMFNOITBVMWDBFJILNIMKZEQYLZNIK");
    msg.custom.assign("USFUVWVAFOSHISPCVMISFBTBORARHAWXHSICRBLDOUGCDNDNWTJFTVNHCUGPPDEYFVTJFCLPHMHLLKKROFBQEPQHJLKYXGSWYYCB");

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
    msg.setTimeStamp(0.7960706400676497);
    msg.setSource(15001U);
    msg.setSourceEntity(23U);
    msg.setDestination(43753U);
    msg.setDestinationEntity(72U);
    msg.timeout = 18120U;
    msg.name.assign("BPZDDLRLYPWZYPTWORFFFVYPKYOEDIHOQDCJREWHFEKLQRENQTZHAOQSUCAUQBZLEJVUXZNZUVDFMCJEBUPXINMWNOGCPUVLBCXNOFLNKGORCRXNDZKOCSHVFTSWXEQGUJBJVDJZTUDCXNBNKJTXHOKTGAQDIWKKECYTTIAHSADM");
    msg.custom.assign("ZBMPRBVUOIMMCXIXENLVSAITGGPQEVBRZUJHBWDCFXTAQBPKPWSIONBYWFVJXEGVDAMWAAUFOLZYPHYTLOVEZEDILEOKSZLDCSIMQGYMCOXMHDHSOTZCJQRWPAZUUVZWDKCCZHNWTNTYKOCJJJWEOYEPRYEEPHFWNQFTRHNMVXIUJFXJCLQFBSCWJLLFNX");

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
    msg.setTimeStamp(0.7210162686874877);
    msg.setSource(60607U);
    msg.setSourceEntity(22U);
    msg.setDestination(20129U);
    msg.setDestinationEntity(227U);
    msg.lat = 0.2744290217186053;
    msg.lon = 0.26957639551794144;
    msg.z = 0.40968463842097613;
    msg.z_units = 133U;
    msg.speed = 0.017405606538235974;
    msg.speed_units = 162U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 49160U;
    tmp_msg_0.off_x = 0.15517342568404535;
    tmp_msg_0.off_y = 0.1622486814562628;
    tmp_msg_0.off_z = 0.4647903160644401;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.0691802614530469;
    msg.custom.assign("PMADUESQBF");

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
    msg.setTimeStamp(0.38286466037395706);
    msg.setSource(46943U);
    msg.setSourceEntity(95U);
    msg.setDestination(21351U);
    msg.setDestinationEntity(171U);
    msg.lat = 0.9715939282966712;
    msg.lon = 0.850600791057951;
    msg.z = 0.7724169391845171;
    msg.z_units = 249U;
    msg.speed = 0.08353881361212423;
    msg.speed_units = 64U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.3929890255909123;
    tmp_msg_0.y = 0.32122471904818695;
    tmp_msg_0.z = 0.8801110926768104;
    tmp_msg_0.t = 0.5702362979353462;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 50468U;
    tmp_msg_1.off_x = 0.8729604064074383;
    tmp_msg_1.off_y = 0.40014096960184664;
    tmp_msg_1.off_z = 0.9261214034726744;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.05234754289935539;
    msg.custom.assign("XONLNSHZIKWDBSFWRYEHBVLPGOENDLQSKZVXCOZEQGFVLOJVYQNZUDKBZROMYMFFRKEEPCFQFJEGYCYPVMQRHB");

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
    msg.setTimeStamp(0.7714531518848597);
    msg.setSource(35547U);
    msg.setSourceEntity(72U);
    msg.setDestination(55442U);
    msg.setDestinationEntity(165U);
    msg.lat = 0.3102973864013241;
    msg.lon = 0.6465482020759521;
    msg.z = 0.6379598428521671;
    msg.z_units = 242U;
    msg.speed = 0.7373532629288103;
    msg.speed_units = 221U;
    msg.start_time = 0.9473307793270442;
    msg.custom.assign("GSHOPEJHYUVIGFUFHXTXRVYEPPHCWQASGMRALBMWIDTGUDVLHKEZJ");

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
    msg.setTimeStamp(0.27844086406199653);
    msg.setSource(13288U);
    msg.setSourceEntity(134U);
    msg.setDestination(62160U);
    msg.setDestinationEntity(112U);
    msg.vid = 28389U;
    msg.off_x = 0.2648998651147636;
    msg.off_y = 0.3686549693708646;
    msg.off_z = 0.9179246780720024;

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
    msg.setTimeStamp(0.6125700027306905);
    msg.setSource(23692U);
    msg.setSourceEntity(125U);
    msg.setDestination(61146U);
    msg.setDestinationEntity(98U);
    msg.vid = 14446U;
    msg.off_x = 0.08258564644470556;
    msg.off_y = 0.9119832558176313;
    msg.off_z = 0.21964590687708097;

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
    msg.setTimeStamp(0.4449146161903911);
    msg.setSource(63457U);
    msg.setSourceEntity(70U);
    msg.setDestination(12405U);
    msg.setDestinationEntity(172U);
    msg.vid = 64497U;
    msg.off_x = 0.00786899099415006;
    msg.off_y = 0.5269366500121211;
    msg.off_z = 0.7364114686594385;

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
    msg.setTimeStamp(0.35626641550112836);
    msg.setSource(25704U);
    msg.setSourceEntity(19U);
    msg.setDestination(25069U);
    msg.setDestinationEntity(1U);

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
    msg.setTimeStamp(0.5847673296261868);
    msg.setSource(4787U);
    msg.setSourceEntity(159U);
    msg.setDestination(36688U);
    msg.setDestinationEntity(231U);

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
    msg.setTimeStamp(0.042773822239019155);
    msg.setSource(62751U);
    msg.setSourceEntity(208U);
    msg.setDestination(65041U);
    msg.setDestinationEntity(133U);

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
    msg.setTimeStamp(0.03452827982539275);
    msg.setSource(20418U);
    msg.setSourceEntity(66U);
    msg.setDestination(57591U);
    msg.setDestinationEntity(120U);
    msg.mid = 48256U;

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
    msg.setTimeStamp(0.9652698110539539);
    msg.setSource(36966U);
    msg.setSourceEntity(17U);
    msg.setDestination(25207U);
    msg.setDestinationEntity(4U);
    msg.mid = 1169U;

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
    msg.setTimeStamp(0.9532495505424581);
    msg.setSource(53891U);
    msg.setSourceEntity(193U);
    msg.setDestination(30360U);
    msg.setDestinationEntity(117U);
    msg.mid = 61003U;

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
    msg.setTimeStamp(0.8021783985362932);
    msg.setSource(25492U);
    msg.setSourceEntity(82U);
    msg.setDestination(38931U);
    msg.setDestinationEntity(44U);
    msg.state = 248U;
    msg.eta = 11978U;
    msg.info.assign("NWLWQRRSLCCJPFATVSVSFKNTLGVAYSFIIQOMBLYDHIHSPESNVYCWNXASUCFKHIQOTUHQQJRXMXDBEXKBDKEGNPFZUISKXYACJTZHEPWJPYOJLISWGLCJLUEOUVOUGXCCWMMOKDZCGNJDVVOLGJHOPCFBIZDQGIRGXWJDBNRIKGDQHDZELEZMPMXEQOVRZZMH");

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
    msg.setTimeStamp(0.17265332762757069);
    msg.setSource(27869U);
    msg.setSourceEntity(207U);
    msg.setDestination(9070U);
    msg.setDestinationEntity(17U);
    msg.state = 100U;
    msg.eta = 31476U;
    msg.info.assign("TOHEBPEWINDHEKCSIWVKZVRUQVNTSTAWITGXHXLAEDWFFGQCKPDNZTTOUIVNJUIHNAQRAKCPCZCQCBKO");

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
    msg.setTimeStamp(0.151654684523587);
    msg.setSource(23171U);
    msg.setSourceEntity(139U);
    msg.setDestination(65276U);
    msg.setDestinationEntity(93U);
    msg.state = 148U;
    msg.eta = 7314U;
    msg.info.assign("UAGXCFQTCUKQOGDPMJOQRECJRXIHXWKUMWZRSTKCIUIGAADFRLVMLGVLYYLMRKQWAWZRTSBZLUPHDHOHGJOQKBDXFTADJYXYPBVSUAYOCZVRSDGLTXBDTIVPOCMABQKLGMCWNHVRUOMSECFIYNANKGENPXJSPISNIWHFYCQFFJPZWZBLEQPDRBCTNNEMNEUBIZWUVHMPSSAQYGMNSQONETEVXHVBOJI");

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
    msg.setTimeStamp(0.8662080591963244);
    msg.setSource(48744U);
    msg.setSourceEntity(166U);
    msg.setDestination(33685U);
    msg.setDestinationEntity(2U);
    msg.system = 30601U;
    msg.duration = 4223U;
    msg.speed = 0.48638742964769033;
    msg.speed_units = 168U;
    msg.x = 0.6352230827455672;
    msg.y = 0.8916157090797839;
    msg.z = 0.42836229461329234;
    msg.z_units = 28U;

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
    msg.setTimeStamp(0.35619868509658903);
    msg.setSource(20077U);
    msg.setSourceEntity(232U);
    msg.setDestination(57333U);
    msg.setDestinationEntity(64U);
    msg.system = 56664U;
    msg.duration = 4737U;
    msg.speed = 0.4354995077589805;
    msg.speed_units = 198U;
    msg.x = 0.04651912263215485;
    msg.y = 0.23603400235044747;
    msg.z = 0.5202792762362581;
    msg.z_units = 78U;

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
    msg.setTimeStamp(0.23405136705585639);
    msg.setSource(2112U);
    msg.setSourceEntity(9U);
    msg.setDestination(59832U);
    msg.setDestinationEntity(33U);
    msg.system = 44431U;
    msg.duration = 63385U;
    msg.speed = 0.7351392060982854;
    msg.speed_units = 183U;
    msg.x = 0.49650474717499704;
    msg.y = 0.4658138812574901;
    msg.z = 0.3770626622914012;
    msg.z_units = 172U;

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
    msg.setTimeStamp(0.7619038553523175);
    msg.setSource(27002U);
    msg.setSourceEntity(191U);
    msg.setDestination(57609U);
    msg.setDestinationEntity(172U);
    msg.lat = 0.36994042266218785;
    msg.lon = 0.8923809469519858;
    msg.speed = 0.45786218756090524;
    msg.speed_units = 100U;
    msg.duration = 58228U;
    msg.sys_a = 42376U;
    msg.sys_b = 5155U;
    msg.move_threshold = 0.5790179986292701;

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
    msg.setTimeStamp(0.5761145321230817);
    msg.setSource(61778U);
    msg.setSourceEntity(100U);
    msg.setDestination(33075U);
    msg.setDestinationEntity(112U);
    msg.lat = 0.15338082999698766;
    msg.lon = 0.7828746447347602;
    msg.speed = 0.6853311092157968;
    msg.speed_units = 29U;
    msg.duration = 33243U;
    msg.sys_a = 61697U;
    msg.sys_b = 43152U;
    msg.move_threshold = 0.9225237466654748;

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
    msg.setTimeStamp(0.6700385514670424);
    msg.setSource(37299U);
    msg.setSourceEntity(216U);
    msg.setDestination(42889U);
    msg.setDestinationEntity(102U);
    msg.lat = 0.498875080697058;
    msg.lon = 0.42387961401503804;
    msg.speed = 0.3634242929180683;
    msg.speed_units = 154U;
    msg.duration = 20349U;
    msg.sys_a = 5328U;
    msg.sys_b = 51119U;
    msg.move_threshold = 0.48504302336865746;

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
    msg.setTimeStamp(0.3790014104964017);
    msg.setSource(22551U);
    msg.setSourceEntity(179U);
    msg.setDestination(6838U);
    msg.setDestinationEntity(169U);
    msg.lat = 0.5314664461913061;
    msg.lon = 0.5865515913702177;
    msg.z = 0.6207003244482664;
    msg.z_units = 72U;
    msg.speed = 0.5458496226217351;
    msg.speed_units = 178U;
    msg.custom.assign("GVKEAXQAWQAJEQDDPATZIHTWSIVQDLTPBXNUZJGJHRPEFDQLXTLRNFUMYEMLHMAWUVJCWXTLQRNJUENEOUNMEPZOGZCWEFJBXGCHTGLKQGTICNIFYOZCZPRSMWDAFWXJMHPIPQVGMFQCAOZVDYTYFAQRUCXNYSMKSFYBIVHYSR");

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
    msg.setTimeStamp(0.6787163609187571);
    msg.setSource(41367U);
    msg.setSourceEntity(179U);
    msg.setDestination(37018U);
    msg.setDestinationEntity(84U);
    msg.lat = 0.07700930466156186;
    msg.lon = 0.38868607139162026;
    msg.z = 0.20529484223446437;
    msg.z_units = 33U;
    msg.speed = 0.5355493436202867;
    msg.speed_units = 191U;
    msg.custom.assign("JZXKSVYYMETYRJWUSBSABHFDYUYQQSSCTEAD");

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
    msg.setTimeStamp(0.9441161639964463);
    msg.setSource(51407U);
    msg.setSourceEntity(212U);
    msg.setDestination(19705U);
    msg.setDestinationEntity(32U);
    msg.lat = 0.5713957737249455;
    msg.lon = 0.11057376319317691;
    msg.z = 0.30149186399535977;
    msg.z_units = 216U;
    msg.speed = 0.08140964870325418;
    msg.speed_units = 91U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.8339996642872668;
    tmp_msg_0.lon = 0.3393503785635533;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("HKJHCAPCCBDLJMOWUQCTYPAFYIHDVMVXIRVEATFQZZPWDEXVQSXGJWOTEMKOZRFIHLDVSSIYENKVCZDMONSZOXVBWIIYQYSYMDEGMFHUOUWKOZCXBFNFZOFHKZABBJBGBPTXQADTCLRNMAJUOQERBEGUR");

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
    msg.setTimeStamp(0.22970467236303593);
    msg.setSource(62893U);
    msg.setSourceEntity(58U);
    msg.setDestination(40765U);
    msg.setDestinationEntity(157U);
    msg.lat = 0.5700488681633964;
    msg.lon = 0.8362399374107139;

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
    msg.setTimeStamp(0.12199548613371325);
    msg.setSource(45066U);
    msg.setSourceEntity(214U);
    msg.setDestination(34516U);
    msg.setDestinationEntity(178U);
    msg.lat = 0.08532893876259684;
    msg.lon = 0.44457488284743596;

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
    msg.setTimeStamp(0.9435351831557313);
    msg.setSource(15350U);
    msg.setSourceEntity(243U);
    msg.setDestination(54239U);
    msg.setDestinationEntity(181U);
    msg.lat = 0.06758206298400216;
    msg.lon = 0.07407582597727391;

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
    msg.setTimeStamp(0.3253731887009218);
    msg.setSource(52228U);
    msg.setSourceEntity(73U);
    msg.setDestination(64833U);
    msg.setDestinationEntity(168U);
    msg.timeout = 48281U;
    msg.lat = 0.7483945973339146;
    msg.lon = 0.548140254610999;
    msg.z = 0.5246574871787584;
    msg.z_units = 60U;
    msg.pitch = 0.9858017329315967;
    msg.amplitude = 0.35760822690731087;
    msg.duration = 49039U;
    msg.speed = 0.5006335425155574;
    msg.speed_units = 149U;
    msg.radius = 0.15978307398709513;
    msg.direction = 65U;
    msg.custom.assign("TTZZSWWLPZODTPSNMCDHY");

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
    msg.setTimeStamp(0.6899469514333367);
    msg.setSource(20403U);
    msg.setSourceEntity(181U);
    msg.setDestination(30646U);
    msg.setDestinationEntity(233U);
    msg.timeout = 26093U;
    msg.lat = 0.3868690263095569;
    msg.lon = 0.6326829493665278;
    msg.z = 0.9997571210749656;
    msg.z_units = 163U;
    msg.pitch = 0.08431853898682395;
    msg.amplitude = 0.1307056801350277;
    msg.duration = 61082U;
    msg.speed = 0.6288127268005744;
    msg.speed_units = 174U;
    msg.radius = 0.23330873097141702;
    msg.direction = 115U;
    msg.custom.assign("JTWHKAZLQXTLXVEKDWGCGMOFQZKWJOSYIMJNDGAXDYFMKDISDIBPOVYTTARRFOQVXTVGQLYITHLUFMYWEGRJNUPKRJHNCMVRHAPVXPYUSMVLLGDBRWSPBYUCHBPUADBIHQEKZZNESKLUBUEIWNWFCDSHJONMQGQVXPLRWSJSMYZMZUSEIABXAOQAYZHCGYDGAAJHKDRCFSPZOBRCEUVOLTEFCWFCNIJBQGMOXFVTPPXOCUX");

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
    msg.setTimeStamp(0.7557027320068062);
    msg.setSource(20484U);
    msg.setSourceEntity(31U);
    msg.setDestination(41988U);
    msg.setDestinationEntity(203U);
    msg.timeout = 19206U;
    msg.lat = 0.8116677175493754;
    msg.lon = 0.8538486533668458;
    msg.z = 0.77967429538411;
    msg.z_units = 146U;
    msg.pitch = 0.20566071325076818;
    msg.amplitude = 0.8490431415423154;
    msg.duration = 63049U;
    msg.speed = 0.7680708917563652;
    msg.speed_units = 42U;
    msg.radius = 0.8945490627058873;
    msg.direction = 239U;
    msg.custom.assign("GTCDOKTJKAAIEECWVKCXAQZKOUFCJNHWOEMYARMWIHFJDWQAUBXZOFBAPCASESYZPHHDISRUGGXWSVZMZKIPHZURTUNYKNUTIBNXJMZMVRWBOFQVGBFDWVTQGALXFCMELLOJPSCYMGKGYJXRSCPTEZWDESRVBDYNYPRRSYLZHLHPGJVFICBKTPGXQAYKBWUEWUVQJISLNENVJFIHUHGPXTUQNLTIMZROOY");

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
    msg.setTimeStamp(0.0707932705214035);
    msg.setSource(62075U);
    msg.setSourceEntity(23U);
    msg.setDestination(41676U);
    msg.setDestinationEntity(103U);
    msg.formation_name.assign("DJRZNWVXOVFGYTYWYEUUYIPSJXBIBAZDYXLWOQVWOGHAABRLNRARCGMGDTTKGURDSXPMCKYSZUEFNBHFHRDEOOLHFZGJCXTOZDRETFSUCBWALTJEHIKKBHD");
    msg.reference_frame = 195U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 13325U;
    tmp_msg_0.off_x = 0.11617052629715707;
    tmp_msg_0.off_y = 0.09458500059945851;
    tmp_msg_0.off_z = 0.7420241852217768;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("EZIUEEXMWQDYDIGLNKWAESHDRENZXODVLGJXWNJLWNFKRABJVYZUVWVAQSRMMMCRDMENSTOHTNLMFWTKOPHIXZFAISKYCEPKLIBSCZSAAQSVSLGPJGIXGBTOFBUYFCKESXVGQNJTBKQWRPVBHIPLCFXMDZZUOVPP");

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
    msg.setTimeStamp(0.42461941654948954);
    msg.setSource(3588U);
    msg.setSourceEntity(221U);
    msg.setDestination(53143U);
    msg.setDestinationEntity(224U);
    msg.formation_name.assign("ZQEACUTMLKOABRULZSW");
    msg.reference_frame = 175U;
    msg.custom.assign("CBSQDAMSCRWWDRMIXPMXMGNRFKBRSIJMXULFKJIKUUKNBIVTEFQOXUEJPA");

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
    msg.setTimeStamp(0.4900428727314199);
    msg.setSource(57347U);
    msg.setSourceEntity(77U);
    msg.setDestination(63409U);
    msg.setDestinationEntity(16U);
    msg.formation_name.assign("LMXDASOWPPKVXJAJQETWMGVIFHCMAQUGWNINOSCMDRHDSYMTXKGMBBTJSRPXDKOLHIASSTJXHZLFZUICOKWKHRPHUZOAGQFBDQJKYZNGFPJLFJGREQVYRFQWXIWDTONLQHVZCTINXRUMFJVEFMFPVOBOCINBGWERZRPKRCPAAPAUNSVNEYVHQWKODYXVLCTEUTCUGDHHLVOIRYBYYAFBBQKEJGBLUWIBQKCI");
    msg.reference_frame = 225U;
    msg.custom.assign("TUWUARMLFICSUIJPSSODGPBSEIFGLPXHAOUSHCBPOZECQYWJTTXWYSMHMNAQWCWLPKAANLACNDNEOKAPSGTKACNTDJUVOLESGZRLXYYEWQQQRCINQYKBRDRFBZRYODZBFDMFBOUVMTHWMRVXEFIJGXXSKLKLUHMIHXYCIKVAVQSWAKJKGQGMBQGEPDZFFEJJPZJZHOIGXELBNTPCXNDMNDYVFGIHYXNHROLZWW");

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
    msg.setTimeStamp(0.2813173039824858);
    msg.setSource(30259U);
    msg.setSourceEntity(44U);
    msg.setDestination(40497U);
    msg.setDestinationEntity(119U);
    msg.group_name.assign("PFBGMOOELMTMWWUYFAAIYHJHQKKRQHIEZKFUDISBSQCWSULAPNCJHUTZSRHSBVGWKBIJUMJQVQUIDWBWVTMFQDDIIJMFYQPJZXJDJXGVHJKOQNYNWGXCPOIPESACIJXHYEOZNWMXTZTLKNSDETHCDGPAPLUVOEBMTVRBHRLCAVCGPNSROGAOUMTKZ");
    msg.formation_name.assign("DJDVISITWADWNKZHMGWZATCJUKHYCQGYGLTSRBUUPWZJWIFOZGLKTMOFUUEESEOOEJDNAQPVSTAXVQFVLRNGUJITOZHCCKANBGULLEMNKVFAXYHWOZMTJPEBGYNLEMMPQBRVOVYSYDPNFKGIXWDGAOQCRZJVPPRSMRKZBLHJXIEUWHVCF");
    msg.plan_id.assign("YYFUHKXBKXBSYJRLQMFPCFJENQGPOSBIHUGSFPHMUQSTXCFJEGVOMNOTYCQFWTFSTJIRMAMLVENCMQLKXGLOTANVIGJYDQAOMPDXDUWEKNYITPSTYEBJWJVTLHMWIEDRBAYTJN");
    msg.description.assign("PZESCADKFHNZONFKSIMPTIXQGJIZTICLDEVAXKVGVQZRUQCZSDDREAHZBHQXDLVDNSCJGBVEAIIJLBEENCSJEVNHTRCXHPITOMOQOWORIBOULCSLTJUGCXKSXWGBUTFYEMRWVOPRWWJNNNHLHZUYQMEYJYEHGKRVQOOTWBZQBBMMYMNATK");
    msg.leader_speed = 0.88262344961374;
    msg.leader_bank_lim = 0.482095730159554;
    msg.pos_sim_err_lim = 0.530188026531059;
    msg.pos_sim_err_wrn = 0.030882545271263884;
    msg.pos_sim_err_timeout = 32422U;
    msg.converg_max = 0.6786342944160724;
    msg.converg_timeout = 46025U;
    msg.comms_timeout = 16217U;
    msg.turb_lim = 0.8402092038035348;
    msg.custom.assign("RPNHKDMKECVTYXBCOCPOAHSASBXFMJU");

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
    msg.setTimeStamp(0.20314965854210343);
    msg.setSource(34905U);
    msg.setSourceEntity(56U);
    msg.setDestination(1656U);
    msg.setDestinationEntity(88U);
    msg.group_name.assign("KIMHZVDJAZNAOOQWQEQUSCNDUSQSYCQMXWQLSXHDKLLZVVFIWQZGOLMNGKGBEVEBDGSTKHWAXIFURBYXXEVAPULEOOASLCRBTNZUKGJWHHEDYNRDLPTVSNDGJWNSCCKRIMWQOMRJAOF");
    msg.formation_name.assign("EQIPZLNOLLOGFNJMMCRWBBIQPDREDXZFJVUGBKPGPVDTWKGTNVSGHEBMHDTWOTQXBAPSEQMNUZWFRCWPFWSIZIOYABQYJSFZTDXSNOPOKOCPBZJKAXQQKDHA");
    msg.plan_id.assign("AZYKRVWODHTERFNZLABLNEWGQXJZLLLPZKHUYNQQIDSAXLJJGDHNMWRKCDOHNGRWLFMKXLVVEVHOBKPYLICUNHTHXEVDGTUKWOCXMBJWOUMTJRSGWETUGDBDPUANQCIAVLIZHBTYSPFQMBIKPUWBXTJFIKYFIQSSVECRYWZYEVRMYWGFFCKACUGMOGJUXMZPYABQTQXPPAJ");
    msg.description.assign("YAXDCFLGLUWCEMMWOPTFGVVXEUOAJJHWYQZDZOUGSUXZRZPHWDPTQOJDVEPAGWKJGXDWEOZBQGKDNXCPLSLSSMFIFACBHRSKBJYYICJYKVRHIAIHIMWYKVTSUBQMWNUFNZBVRBMEZOJYDQIPLJCREYPKCEOCXTXQBVSPIENXYQNFKQ");
    msg.leader_speed = 0.5833065017783862;
    msg.leader_bank_lim = 0.1744553078185408;
    msg.pos_sim_err_lim = 0.01182475635364355;
    msg.pos_sim_err_wrn = 0.8994486617358505;
    msg.pos_sim_err_timeout = 45728U;
    msg.converg_max = 0.6326668799138401;
    msg.converg_timeout = 46417U;
    msg.comms_timeout = 20225U;
    msg.turb_lim = 0.3136186326645132;
    msg.custom.assign("NMBOPKJGWKGRWFSHNTUIXEXZEZQMDRLWPHJQMRFSDTVOCJYYOYHQKCUTWUNGAEZXTTRWISGICBODOMXKSSVMGBLTVGQSHLVCEHUFSFNFIOMNJHSWPDRBFNIZAXWTJPVKYOKXAZEGYCXWBZBWHGAHOISJAUNVRCRUKOLXDWMDQVB");

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
    msg.setTimeStamp(0.9830150401940261);
    msg.setSource(3743U);
    msg.setSourceEntity(92U);
    msg.setDestination(36909U);
    msg.setDestinationEntity(38U);
    msg.group_name.assign("NZXDWWYALKYOZSSMHMATXIBPIMJYMYZSHUEXYBADGTSYONGWIGKVEFXASWUJAVYLCCDMFLNDIICTDXIY");
    msg.formation_name.assign("LQSACQMJYORVNKNKTJUGNMHQAGXYIVUNDIPLOIYSKQFRQEVFHPKFYRFPOUMZODJZCGWEXBZRLTGVGXOLSBWYZWDZWDBMUWKTUDMVECVMORWPIMWDASXHAPJEEBOULQCWBSFOKQA");
    msg.plan_id.assign("EEDQRITMYIDJEXTKBLYJFSYAKPFDGOXHAWTGAPGXIFTVISLCFEWHNVGUXHYWQRTOOOJVDLVSPRBN");
    msg.description.assign("MZZUADHMPEYNYIRWFCNQVFNLHADEMRGXCCZPJHSMEMDMUNNVDFYAVINYVYKCAGQOGLEDEZQPHRIDEBZTUTUHMMTEEXLWEGJFPAHULQJRTOFLBSHTXDJYQFQBKBFVSQXWZWIRS");
    msg.leader_speed = 0.8628142919195799;
    msg.leader_bank_lim = 0.08434726707318985;
    msg.pos_sim_err_lim = 0.36107052921206395;
    msg.pos_sim_err_wrn = 0.6621215368356669;
    msg.pos_sim_err_timeout = 56672U;
    msg.converg_max = 0.3149648878159075;
    msg.converg_timeout = 42322U;
    msg.comms_timeout = 26600U;
    msg.turb_lim = 0.6745752302240267;
    msg.custom.assign("HPMTZHVESBREQPTCFGVEHSGFLXFZFPNZTAOLUBNCXDQREBOTEPCTMOYIWOUXJGCEKXRLRCVOYBHTYSILFGOGFLSDANGVHZIIMRGHKPTHZPMJCQGBFOYMVBDXPSLERKKWMFUHCJSHVKUKNSJIVDYAXLDHULCWETWPZMWLDJQNOZIAJYMMBSQUAKIYDPSIAJNUQBNERAVAUVBWTXCDXKQVD");

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
    msg.setTimeStamp(0.4522855234340277);
    msg.setSource(3293U);
    msg.setSourceEntity(232U);
    msg.setDestination(1488U);
    msg.setDestinationEntity(25U);
    msg.control_src = 23026U;
    msg.control_ent = 12U;
    msg.timeout = 0.30581138958787035;
    msg.loiter_radius = 0.3241463322314869;
    msg.altitude_interval = 0.24584182881486516;

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
    msg.setTimeStamp(0.5015265478283745);
    msg.setSource(29706U);
    msg.setSourceEntity(209U);
    msg.setDestination(45517U);
    msg.setDestinationEntity(233U);
    msg.control_src = 40026U;
    msg.control_ent = 252U;
    msg.timeout = 0.6656010727428943;
    msg.loiter_radius = 0.7609039253486192;
    msg.altitude_interval = 0.19936716397270882;

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
    msg.setTimeStamp(0.5127314874404054);
    msg.setSource(45102U);
    msg.setSourceEntity(75U);
    msg.setDestination(58792U);
    msg.setDestinationEntity(110U);
    msg.control_src = 43081U;
    msg.control_ent = 230U;
    msg.timeout = 0.22139621756244854;
    msg.loiter_radius = 0.8763890762336156;
    msg.altitude_interval = 0.4775367903065565;

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
    msg.setTimeStamp(0.8194822170606363);
    msg.setSource(20543U);
    msg.setSourceEntity(185U);
    msg.setDestination(44533U);
    msg.setDestinationEntity(140U);
    msg.flags = 88U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.6355106468400873;
    tmp_msg_0.speed_units = 187U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.9149147689013033;
    tmp_msg_1.z_units = 233U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.006431984522261125;
    msg.lon = 0.4580953751773089;
    msg.radius = 0.5210914505393777;

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
    msg.setTimeStamp(0.1364495580737639);
    msg.setSource(50249U);
    msg.setSourceEntity(60U);
    msg.setDestination(12446U);
    msg.setDestinationEntity(72U);
    msg.flags = 0U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.8408376403494778;
    tmp_msg_0.speed_units = 141U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.866603531844328;
    tmp_msg_1.z_units = 167U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.8638818726853379;
    msg.lon = 0.47536576026539223;
    msg.radius = 0.40494672991763836;

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
    msg.setTimeStamp(0.47812045681393256);
    msg.setSource(48104U);
    msg.setSourceEntity(192U);
    msg.setDestination(41675U);
    msg.setDestinationEntity(209U);
    msg.flags = 165U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.9322675980638501;
    tmp_msg_0.speed_units = 59U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.4519631584853774;
    tmp_msg_1.z_units = 59U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.2112262392764468;
    msg.lon = 0.9066368730212289;
    msg.radius = 0.25682881923385925;

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
    msg.setTimeStamp(0.40443041356679166);
    msg.setSource(43983U);
    msg.setSourceEntity(142U);
    msg.setDestination(38140U);
    msg.setDestinationEntity(158U);
    msg.control_src = 44049U;
    msg.control_ent = 213U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 69U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.7490312580192768;
    tmp_tmp_msg_0_0.speed_units = 186U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.8526150152321875;
    tmp_tmp_msg_0_1.z_units = 232U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.3003040833047772;
    tmp_msg_0.lon = 0.7730236822163258;
    tmp_msg_0.radius = 0.18031986236169195;
    msg.reference.set(tmp_msg_0);
    msg.state = 41U;
    msg.proximity = 159U;

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
    msg.setTimeStamp(0.78681360983666);
    msg.setSource(43809U);
    msg.setSourceEntity(238U);
    msg.setDestination(62717U);
    msg.setDestinationEntity(26U);
    msg.control_src = 31816U;
    msg.control_ent = 248U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 209U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.8618250459697823;
    tmp_tmp_msg_0_0.speed_units = 89U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.19184227646357643;
    tmp_tmp_msg_0_1.z_units = 90U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.8697544130625927;
    tmp_msg_0.lon = 0.2072779354728671;
    tmp_msg_0.radius = 0.5945366508700315;
    msg.reference.set(tmp_msg_0);
    msg.state = 188U;
    msg.proximity = 97U;

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
    msg.setTimeStamp(0.18077386438960574);
    msg.setSource(60388U);
    msg.setSourceEntity(169U);
    msg.setDestination(58738U);
    msg.setDestinationEntity(2U);
    msg.control_src = 2974U;
    msg.control_ent = 58U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 205U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.1793185819261407;
    tmp_tmp_msg_0_0.speed_units = 172U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.10134005749469144;
    tmp_tmp_msg_0_1.z_units = 215U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.14558429046239751;
    tmp_msg_0.lon = 0.4114339751172623;
    tmp_msg_0.radius = 0.007267175541901594;
    msg.reference.set(tmp_msg_0);
    msg.state = 244U;
    msg.proximity = 142U;

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
    msg.setTimeStamp(0.8098565875213403);
    msg.setSource(51869U);
    msg.setSourceEntity(198U);
    msg.setDestination(17400U);
    msg.setDestinationEntity(75U);
    msg.ax_cmd = 0.4557273629871177;
    msg.ay_cmd = 0.7296677622930885;
    msg.az_cmd = 0.809220513424412;
    msg.ax_des = 0.537141885983309;
    msg.ay_des = 0.5381333279803939;
    msg.az_des = 0.9845434283551708;
    msg.virt_err_x = 0.021962372906826566;
    msg.virt_err_y = 0.737406669368802;
    msg.virt_err_z = 0.7217910000506754;
    msg.surf_fdbk_x = 0.9322017547214806;
    msg.surf_fdbk_y = 0.40554174434253476;
    msg.surf_fdbk_z = 0.3973647223733504;
    msg.surf_unkn_x = 0.006897369079026383;
    msg.surf_unkn_y = 0.9184913529943495;
    msg.surf_unkn_z = 0.33005595161415135;
    msg.ss_x = 0.2525861264369774;
    msg.ss_y = 0.5669915255066104;
    msg.ss_z = 0.7610224919799061;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("FRSEEGNVIDEQSYQZNFDYBJJMVHHAQVNENYOQFONMMZJGHRIWFXWFWKRFWGHXTEFWYARKCPNBSQLAPHCYOUILQHCSOQOYEUHBGIFHLQZUPJFNSDXBRYKGBWFAGKPODXVZPSDVBVJMCIXZTRVYDLV");
    tmp_msg_0.dist = 0.8859755317956037;
    tmp_msg_0.err = 0.719197686694563;
    tmp_msg_0.ctrl_imp = 0.8329256866893765;
    tmp_msg_0.rel_dir_x = 0.8542060468802394;
    tmp_msg_0.rel_dir_y = 0.46121579863691253;
    tmp_msg_0.rel_dir_z = 0.7257837046086982;
    tmp_msg_0.err_x = 0.746464192176896;
    tmp_msg_0.err_y = 0.016866146123450165;
    tmp_msg_0.err_z = 0.5525356378615378;
    tmp_msg_0.rf_err_x = 0.17359381908632854;
    tmp_msg_0.rf_err_y = 0.42970752526921585;
    tmp_msg_0.rf_err_z = 0.47313239137911534;
    tmp_msg_0.rf_err_vx = 0.6905981845820887;
    tmp_msg_0.rf_err_vy = 0.17436989192297148;
    tmp_msg_0.rf_err_vz = 0.7537410195252326;
    tmp_msg_0.ss_x = 0.5333877479694408;
    tmp_msg_0.ss_y = 0.3150444668075728;
    tmp_msg_0.ss_z = 0.8888842953970547;
    tmp_msg_0.virt_err_x = 0.5615005356417285;
    tmp_msg_0.virt_err_y = 0.1743739693612223;
    tmp_msg_0.virt_err_z = 0.051399825430720636;
    msg.rel_state.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.24457967265050307);
    msg.setSource(62725U);
    msg.setSourceEntity(98U);
    msg.setDestination(60997U);
    msg.setDestinationEntity(208U);
    msg.ax_cmd = 0.8923050945074421;
    msg.ay_cmd = 0.6202015910963349;
    msg.az_cmd = 0.20677047067594156;
    msg.ax_des = 0.41555805167292037;
    msg.ay_des = 0.8197355419515651;
    msg.az_des = 0.8212878909603185;
    msg.virt_err_x = 0.22972079529723533;
    msg.virt_err_y = 0.8925648386127675;
    msg.virt_err_z = 0.6256382298739027;
    msg.surf_fdbk_x = 0.29275321044670055;
    msg.surf_fdbk_y = 0.3019021404809098;
    msg.surf_fdbk_z = 0.43386645842988814;
    msg.surf_unkn_x = 0.7664761828427642;
    msg.surf_unkn_y = 0.6990475142594832;
    msg.surf_unkn_z = 0.5585801119326947;
    msg.ss_x = 0.29345113470898243;
    msg.ss_y = 0.7428173692455355;
    msg.ss_z = 0.8692521270175618;

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
    msg.setTimeStamp(0.9900257854531789);
    msg.setSource(3952U);
    msg.setSourceEntity(181U);
    msg.setDestination(48170U);
    msg.setDestinationEntity(65U);
    msg.ax_cmd = 0.12931692372578452;
    msg.ay_cmd = 0.1400074577583963;
    msg.az_cmd = 0.5685591221890013;
    msg.ax_des = 0.009984058350848257;
    msg.ay_des = 0.8178920142238706;
    msg.az_des = 0.9993355776458557;
    msg.virt_err_x = 0.6267023695330932;
    msg.virt_err_y = 0.9303470155708405;
    msg.virt_err_z = 0.5028781483555046;
    msg.surf_fdbk_x = 0.8301967925554355;
    msg.surf_fdbk_y = 0.9104825461175405;
    msg.surf_fdbk_z = 0.23308607170391926;
    msg.surf_unkn_x = 0.3918095928651497;
    msg.surf_unkn_y = 0.3206439904699351;
    msg.surf_unkn_z = 0.024949825415138904;
    msg.ss_x = 0.21567949213051496;
    msg.ss_y = 0.942021965684618;
    msg.ss_z = 0.8244912719980069;

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
    msg.setTimeStamp(0.47036127760538626);
    msg.setSource(17783U);
    msg.setSourceEntity(63U);
    msg.setDestination(32351U);
    msg.setDestinationEntity(91U);
    msg.s_id.assign("FHPENEHKSYNVHHRERNNDITTJAUZLHZEVCJBFTQGPDVIROQIXUMYTXRSHONHYOMMNBZWVOEKWMDVSECOTUTYXXDKEAFJFULYGBFRAPVBPLAWQDWMIYSHSGUCGVSLNBIOYPNGGNLMHZCKRASCJJIXZUOLXXCXYTVQWRWFZPRBKZXUMQSUJKEMEAGCCTRXUFUWNIJBZKIKESZOQYFWABPLKMJDHDTBVOGPJPKLATQ");
    msg.dist = 0.8791622356431503;
    msg.err = 0.3165064164177597;
    msg.ctrl_imp = 0.18112624449244508;
    msg.rel_dir_x = 0.5913692388135646;
    msg.rel_dir_y = 0.09872519512625777;
    msg.rel_dir_z = 0.4673063645760376;
    msg.err_x = 0.3086804276730103;
    msg.err_y = 0.41161252557369266;
    msg.err_z = 0.6799279135276011;
    msg.rf_err_x = 0.02901267662428142;
    msg.rf_err_y = 0.3385607623553947;
    msg.rf_err_z = 0.2637075528607855;
    msg.rf_err_vx = 0.08490865465988928;
    msg.rf_err_vy = 0.5019730104251093;
    msg.rf_err_vz = 0.5106972031477861;
    msg.ss_x = 0.039915117227548924;
    msg.ss_y = 0.032849941261622995;
    msg.ss_z = 0.3839156243245335;
    msg.virt_err_x = 0.07322541048311526;
    msg.virt_err_y = 0.035874367591693934;
    msg.virt_err_z = 0.5148084645687544;

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
    msg.setTimeStamp(0.43337553060088685);
    msg.setSource(43061U);
    msg.setSourceEntity(192U);
    msg.setDestination(60427U);
    msg.setDestinationEntity(187U);
    msg.s_id.assign("BYPVNBTAKDPCXLQSCOSUEJORZMSKWLAOCFNTPHAIXJCZKFHGAMUTHFKBZQTWAIYWZHMECMJQTRKNBNOAGFYRTUQXORUHQQSYYPOVWJDFICWV");
    msg.dist = 0.8415118513313271;
    msg.err = 0.19530580887201243;
    msg.ctrl_imp = 0.693774619215773;
    msg.rel_dir_x = 0.6646446378008513;
    msg.rel_dir_y = 0.6089754526563946;
    msg.rel_dir_z = 0.23150888326499963;
    msg.err_x = 0.7085316269085806;
    msg.err_y = 0.4461697146553518;
    msg.err_z = 0.4376017528531434;
    msg.rf_err_x = 0.6429152791327364;
    msg.rf_err_y = 0.7391431040075883;
    msg.rf_err_z = 0.43696691214423466;
    msg.rf_err_vx = 0.9669379823618384;
    msg.rf_err_vy = 0.4698330545448993;
    msg.rf_err_vz = 0.35468783901840184;
    msg.ss_x = 0.08556944656606424;
    msg.ss_y = 0.5731216032938932;
    msg.ss_z = 0.31509616861573886;
    msg.virt_err_x = 0.7191872100581844;
    msg.virt_err_y = 0.8214821693711374;
    msg.virt_err_z = 0.09930750447519432;

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
    msg.setTimeStamp(0.5355227829179293);
    msg.setSource(11530U);
    msg.setSourceEntity(164U);
    msg.setDestination(8080U);
    msg.setDestinationEntity(144U);
    msg.s_id.assign("PMLHEWRRKBNOVWRYSNJUXHEEVBQGGXMZVJVZBQVMFURHMPRYHCTEYFWAQBHNZUNPKFRXOUDJNHSEHYTKDDFVUEMGBQSQIHQYVKJOJQDTGUFOXPDZUXQTMXZDLACMCXNJLRBJDWVZTHLRGNYUUMPALJNNEOLHTLFOAAMATLPRJGLQIRZNBSJOMPKSSBFLGCVWKTAPQXEFYKDZIEXIOYFIDCOIBTKXICACGCIWGCWPBSCOUKWDWSIFEPKAVSS");
    msg.dist = 0.16443858842129366;
    msg.err = 0.8152870513902917;
    msg.ctrl_imp = 0.265446822467192;
    msg.rel_dir_x = 0.6854227109655631;
    msg.rel_dir_y = 0.32414876642408963;
    msg.rel_dir_z = 0.26935460337977957;
    msg.err_x = 0.911641562939677;
    msg.err_y = 0.4985149910794666;
    msg.err_z = 0.8419454582557064;
    msg.rf_err_x = 0.6988654361963534;
    msg.rf_err_y = 0.4096020336264916;
    msg.rf_err_z = 0.9396148247858854;
    msg.rf_err_vx = 0.38415210959898605;
    msg.rf_err_vy = 0.5833495591586726;
    msg.rf_err_vz = 0.681002117150339;
    msg.ss_x = 0.34987855229473064;
    msg.ss_y = 0.09454838754794936;
    msg.ss_z = 0.3766220164441376;
    msg.virt_err_x = 0.7255192665351211;
    msg.virt_err_y = 0.24827409730615058;
    msg.virt_err_z = 0.42305071925411464;

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
    msg.setTimeStamp(0.4057841483484965);
    msg.setSource(35724U);
    msg.setSourceEntity(112U);
    msg.setDestination(38919U);
    msg.setDestinationEntity(147U);
    msg.timeout = 60579U;
    msg.rpm = 0.758166844439953;
    msg.direction = 246U;
    msg.custom.assign("ATNIZGLAHTD");

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
    msg.setTimeStamp(0.9056281956611906);
    msg.setSource(17792U);
    msg.setSourceEntity(69U);
    msg.setDestination(10893U);
    msg.setDestinationEntity(139U);
    msg.timeout = 43824U;
    msg.rpm = 0.49970023635767824;
    msg.direction = 223U;
    msg.custom.assign("PPZFJRKHAPIBWABYGKQXMJTHXAMKGTPNEHIYDDSLJFNOQYCMTUZCXUYVZVJIPTDKWGIPLWDWTYFVINNWYJQ");

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
    msg.setTimeStamp(0.3696875675048388);
    msg.setSource(52737U);
    msg.setSourceEntity(140U);
    msg.setDestination(44829U);
    msg.setDestinationEntity(49U);
    msg.timeout = 58426U;
    msg.rpm = 0.40060317246723653;
    msg.direction = 74U;
    msg.custom.assign("IFAQGQKKJTFSPVMPUVTGGRNMCYZLNBVLKWSSMWOMGQZESPKARBWNYXLQHDYXITIKWZOBOEXXYTEPKQHJRIKBFLWODCWNCZYISUVVSRTMNADSYMJUSUJGJCPXOLVUSYAOYMVHABIJBIFQZKHWPGJCZBYFDLJAORWETHAHGGDTUNLMDOVHBHJXQUFNAKZPLZTURKWVDEHCYZ");

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
    msg.setTimeStamp(0.3688930824945963);
    msg.setSource(12525U);
    msg.setSourceEntity(52U);
    msg.setDestination(13139U);
    msg.setDestinationEntity(29U);
    msg.formation_name.assign("LYUJLBAMBHNQOQSGXFBKTBEHUJOVHGCOIFILXXWIMCDINGM");
    msg.type = 152U;
    msg.op = 198U;
    msg.group_name.assign("LXIRURJPFLNQYUXFCNFEANOQQXSLYTSPCCJOWEKRYWCZRBUSVNOHYZDXHCAZFHXNPPKZDMTBWKZSGXNAAULJTOVMI");
    msg.plan_id.assign("DUKITHNSUVSJKAFVBMRTRFFGXVOIWUBSJIQURXUTCENRYUIXZTEYYOOFPAKLNMKMJECUTOAKLQCNJIWVEHYCLGJNFLCBQOUFFLVSUQCT");
    msg.description.assign("UGXEHNUZCFIELFJBLTDPYOBEPOOJDDFJEKOQRMJVIPDUFBQWNNVWPVSMXJYLWMYPAVCXCHCRXQDCYXXPRLSQFRGTVUNJIVKOJWHVTCEHQYGZRGAISQLTBKGSKYKIUDNCFBVQRLKLKWWTBMOAPNSRFTDQEKFRFMPGYMYAMLGSAGIWVMIH");
    msg.reference_frame = 144U;
    msg.leader_bank_lim = 0.7208448654319746;
    msg.leader_speed_min = 0.19778209287215942;
    msg.leader_speed_max = 0.002404267414306993;
    msg.leader_alt_min = 0.8291040349649532;
    msg.leader_alt_max = 0.6695052258700998;
    msg.pos_sim_err_lim = 0.6641319419138693;
    msg.pos_sim_err_wrn = 0.5185208414176526;
    msg.pos_sim_err_timeout = 4809U;
    msg.converg_max = 0.09428022637017863;
    msg.converg_timeout = 9738U;
    msg.comms_timeout = 48159U;
    msg.turb_lim = 0.4539480482461564;
    msg.custom.assign("DWXKQCCSERCOKOXLTDHBBNJFBXSKGUVARMDFFMUQZLANIWVSHEWNFJQTJVXESAEJIERXPBHFXWRIGUVHYFQKOSMLIJTEPOIINVUHRJTLLSQMUKZONNPUBXDGPOJYYYVBQOMXXPOLCCTVWODAIVANJDSNITZCRZLHWGKZCKDTAGWZEZB");

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
    msg.setTimeStamp(0.846695797602642);
    msg.setSource(31541U);
    msg.setSourceEntity(196U);
    msg.setDestination(12373U);
    msg.setDestinationEntity(136U);
    msg.formation_name.assign("VJMDQSJNOUXCLAOMUXNJZAHSBQHYKCKVW");
    msg.type = 202U;
    msg.op = 33U;
    msg.group_name.assign("IRLDKDZLCIVZYQPQTBTLYEUYFEZHWUXAEJOOQRJCSWXMETMWSSBSSQSDYXAGJOOSXRKGDFRMKDMTQNMIDHVIJGUHQXV");
    msg.plan_id.assign("NARBRFPSIBLEQSKVXBDXLJJXQVJSRYFMUCTICVQ");
    msg.description.assign("YQIFGQMHPXZKVTEFDFGDPSJTWUDSEBQVUVEKJYEINROQWUKZROGCLFELAACSSVDDROFHDULUNZGZSMXJXYGIEZSAAAIMVTJIOTYWZMSLRKEGGFTBMMEARINAKOPGHPCYBWVCBYGIMVXJJNASBTDNISNFORRLYQZYCKQZYXQPTFRUNOWWTPQDCWCIIHLZXE");
    msg.reference_frame = 109U;
    msg.leader_bank_lim = 0.21957840107555393;
    msg.leader_speed_min = 0.03677052043341089;
    msg.leader_speed_max = 0.5937945452440226;
    msg.leader_alt_min = 0.42530108412853773;
    msg.leader_alt_max = 0.414332091015424;
    msg.pos_sim_err_lim = 0.2584025852309707;
    msg.pos_sim_err_wrn = 0.24561224325118636;
    msg.pos_sim_err_timeout = 20391U;
    msg.converg_max = 0.7869037824036251;
    msg.converg_timeout = 51013U;
    msg.comms_timeout = 59817U;
    msg.turb_lim = 0.04941236821280348;
    msg.custom.assign("RNEELMVXQPCXHQSINSYIFRVZYZHPKXETUZKTRMUWHMJPKYMDUGVHDAJNDOYQJHCUJJCLJPIGLERAXQBPXTMVWFVBJVMOCALAZCISRWBBBVLASHXOLSNIZAYPCNBSFWOFNSDLWRYLNTSNYRPZFYHJBFGEEXOP");

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
    msg.setTimeStamp(0.3163209894277015);
    msg.setSource(33166U);
    msg.setSourceEntity(206U);
    msg.setDestination(15602U);
    msg.setDestinationEntity(42U);
    msg.formation_name.assign("YBZEUGFZREKFXOCQBXMAHFKNOAJUXDCQWGGAOQLUIOSREAQUTDIZCEDNZSOKXTBINHEZPRYVNVUZHTZJYWPMELPVNPFHGHQAYZAWEJJVPRJTPMTCXSLLGHTINMUHKYIWROYHGCBCLRSYEDMRFWQPWLSGQTJLMTKLVBAYIPQVDSCWDXIAFIKTUCCRGKIIPSNQPTJMQYOWEDUORJJUHYXEABFGCKBDBN");
    msg.type = 118U;
    msg.op = 42U;
    msg.group_name.assign("QHGQDLORGWEDOZVJEVOWWRHHVLEPUPAMKHMGOAIRBJCYDZWWRAHTTBCANRCJTFYMLSAIIJYMEZUTXNVJGBEISLFISXWZSYNLCHHXQEBRVGUBDKOJKCBZDPVRETKIEYTBRFUAYDTODKKCMYARPWQNMFJOGQZUKHLXFNONDIPUFOUJDJFKDTFPLSSE");
    msg.plan_id.assign("OLJFENHEQJFTHAZTTJCKAVPKKARWSXPLETRNIYWDBDPIBJGVGLYDTQJUDOVAWXKNNRKBGZZOPRZELWTEBYKCSEDCPGUBMDXMVCPVCISBCKIOYUSMVWJJGRIFHLEQXNMMWGQSZTUOAKJKTMQYZYJMZLDLXVVXWJGYIWIIURSMV");
    msg.description.assign("EBAZTDUKCIONXMHLTUFPNWWQ");
    msg.reference_frame = 150U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 18090U;
    tmp_msg_0.off_x = 0.19626572845694357;
    tmp_msg_0.off_y = 0.30165494332301457;
    tmp_msg_0.off_z = 0.4875944634243574;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.8238662238535313;
    msg.leader_speed_min = 0.3187169550406268;
    msg.leader_speed_max = 0.0013074458866328964;
    msg.leader_alt_min = 0.22482276041874716;
    msg.leader_alt_max = 0.3714054566203713;
    msg.pos_sim_err_lim = 0.3902848878963009;
    msg.pos_sim_err_wrn = 0.4213414814323334;
    msg.pos_sim_err_timeout = 14560U;
    msg.converg_max = 0.15841245392907877;
    msg.converg_timeout = 4681U;
    msg.comms_timeout = 48427U;
    msg.turb_lim = 0.059762200839519;
    msg.custom.assign("MLMYCHGGUYLTTHZVKSVMPYSDPNRNJJJQGLTILCTJTLLMPWWZHBZLGGOSZKOMSSKLSIQWPNHITQVQXQJXGZKAMDOCVIPJUYSOTURNLYWGUUOUKXOWRRVNOBCRKJAHMKAPPWT");

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
    msg.setTimeStamp(0.7331240039650224);
    msg.setSource(45386U);
    msg.setSourceEntity(138U);
    msg.setDestination(35488U);
    msg.setDestinationEntity(89U);
    msg.timeout = 37407U;
    msg.lat = 0.2354585771520894;
    msg.lon = 0.8807104485779351;
    msg.z = 0.2949816198000821;
    msg.z_units = 225U;
    msg.speed = 0.8623679911540904;
    msg.speed_units = 153U;
    msg.custom.assign("EUWRRTUTAYHXJRDUOPFQVKNFAXZNWYTZXSUDECPJNVICUDEGEMFZBRJQJSIDUHPCHDLVBXBZZFQHMSQSIJIZKBSAAMFXBYTYFTBTGLJGNRZHLWLFHWQWNOYSESLNEOTAFLSQLNRXGXXOEOYVDGVJOOFPUZSPINCEPSYYQVIWICBJRKCJATUDFQRXORIKHGMHYCPKUV");

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
    msg.setTimeStamp(0.01168584860636901);
    msg.setSource(64725U);
    msg.setSourceEntity(155U);
    msg.setDestination(52298U);
    msg.setDestinationEntity(95U);
    msg.timeout = 47027U;
    msg.lat = 0.49788277201019915;
    msg.lon = 0.47985920842641117;
    msg.z = 0.37774230186062396;
    msg.z_units = 72U;
    msg.speed = 0.16646978973651505;
    msg.speed_units = 94U;
    msg.custom.assign("RCHPQPGUKBHCJHSNFIUOXSXXSYFVPJNUCRIKJJBKDUKCNPOBQVVZOLFSIDBPBOTWCQBSBEQMEUQAAXDXVOOTVRQPVLHSYQXMBEGAMENMYUKUDLKMHTWQGGKAXXYXUHMYWRNWZITPITDCFTIZLCRVFJGRJTAEGKTHDZIJCQPNJYLYMWGZWDFGHOAALDTSOOZVIEWKNQEZLPWVYDFJLFMLZBRETEGSNJUHARMPLUOVXGIBAMCW");

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
    msg.setTimeStamp(0.504365725758605);
    msg.setSource(61614U);
    msg.setSourceEntity(127U);
    msg.setDestination(35670U);
    msg.setDestinationEntity(98U);
    msg.timeout = 6832U;
    msg.lat = 0.45877265008194257;
    msg.lon = 0.5146178243587016;
    msg.z = 0.9709540742150932;
    msg.z_units = 186U;
    msg.speed = 0.7434935432076577;
    msg.speed_units = 97U;
    msg.custom.assign("ELKDVRNVNHHJITEVOFWACVVPJRJHDJUPRIADCMITAQIWSZDQFYENVYCFPOPSAXWSLOTZJKHFIMKRIRULPVNOQIKJFHGCUROCQLKEMWZPLUSTSWFOXHNUIPN");

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
    msg.setTimeStamp(0.07619770359036548);
    msg.setSource(43599U);
    msg.setSourceEntity(36U);
    msg.setDestination(4153U);
    msg.setDestinationEntity(212U);
    msg.timeout = 50101U;
    msg.lat = 0.5775202777853219;
    msg.lon = 0.5976190097326161;
    msg.z = 0.7833652726255109;
    msg.z_units = 67U;
    msg.speed = 0.3409636070514288;
    msg.speed_units = 36U;
    msg.custom.assign("CSDMLISSSVLGVTZLVUTKJEBWRPUSQPFPOJDKQEAXLDGZYUWZMEMQKHHXOVXKXHLBFCUCCUOGRKHXCPYMLTIETMQRWBOVFAIUSVYQVJFOFKINQOUZJWBDWTPNIZQVBLAEJGDKCFFYZQWHUGTSOAPUWHHJMPLXQBJAXCNIYJKNQKPYRTTFVWBFRMUAVCZRNRSENGTDMDXLIBTABAHZRXYJGOIGPMGOWOEEHLZIRCJZFANBYKCESHPNENDYG");

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
    msg.setTimeStamp(0.5446649667865633);
    msg.setSource(39065U);
    msg.setSourceEntity(189U);
    msg.setDestination(5481U);
    msg.setDestinationEntity(163U);
    msg.timeout = 49672U;
    msg.lat = 0.06774675252019491;
    msg.lon = 0.8256410823091787;
    msg.z = 0.623968636286179;
    msg.z_units = 14U;
    msg.speed = 0.7111412364920092;
    msg.speed_units = 203U;
    msg.custom.assign("ETQSHEGMFRJTRGQUXBAITQJHDJDPIRKZQKADGEYRVAILHYXIYXLCSPXQTDCBSVGNIKNRDNPRYEOBWEXPGBIOO");

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
    msg.setTimeStamp(0.6005218456793626);
    msg.setSource(5612U);
    msg.setSourceEntity(13U);
    msg.setDestination(8475U);
    msg.setDestinationEntity(132U);
    msg.timeout = 59320U;
    msg.lat = 0.07892315156425878;
    msg.lon = 0.07423492658899444;
    msg.z = 0.9643030729925447;
    msg.z_units = 139U;
    msg.speed = 0.8102643277601833;
    msg.speed_units = 143U;
    msg.custom.assign("GRSBQIUQDKYERKCVOEFOQKLASVGXFSOOBZCPHPYCIWJFDPIHNTRZZFHWRFBAOMIULWZPJYMMGGZWRKHFOGUNMRTXSYWNHLSSPKVNGBXZAXSCKJNIWKODHVXWDWSMYTCETAMKARSPXMGYTOI");

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
    msg.setTimeStamp(0.8981706968939505);
    msg.setSource(30533U);
    msg.setSourceEntity(2U);
    msg.setDestination(33979U);
    msg.setDestinationEntity(169U);
    msg.arrival_time = 0.3440590271223295;
    msg.lat = 0.1430584158551873;
    msg.lon = 0.7664903040968822;
    msg.z = 0.0951925850862817;
    msg.z_units = 143U;
    msg.travel_z = 0.1974278062561612;
    msg.travel_z_units = 28U;
    msg.delayed = 74U;

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
    msg.setTimeStamp(0.9552574413774634);
    msg.setSource(23571U);
    msg.setSourceEntity(65U);
    msg.setDestination(23136U);
    msg.setDestinationEntity(137U);
    msg.arrival_time = 0.7624485322529786;
    msg.lat = 0.024928986274923792;
    msg.lon = 0.6576932893466141;
    msg.z = 0.8542480112936222;
    msg.z_units = 160U;
    msg.travel_z = 0.6397948447743147;
    msg.travel_z_units = 101U;
    msg.delayed = 83U;

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
    msg.setTimeStamp(0.8079880460055112);
    msg.setSource(25817U);
    msg.setSourceEntity(80U);
    msg.setDestination(2303U);
    msg.setDestinationEntity(69U);
    msg.arrival_time = 0.44230058028225405;
    msg.lat = 0.8032614160946687;
    msg.lon = 0.7758985231569457;
    msg.z = 0.5659842692879129;
    msg.z_units = 168U;
    msg.travel_z = 0.5492795781354056;
    msg.travel_z_units = 77U;
    msg.delayed = 21U;

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
    msg.setTimeStamp(0.9337578455760193);
    msg.setSource(47700U);
    msg.setSourceEntity(116U);
    msg.setDestination(4946U);
    msg.setDestinationEntity(188U);
    msg.lat = 0.023907876169224296;
    msg.lon = 0.38112677969886855;
    msg.z = 0.6484506559390323;
    msg.z_units = 225U;
    msg.speed = 0.6749884712010642;
    msg.speed_units = 242U;
    msg.bearing = 0.4550638049677279;
    msg.cross_angle = 0.7669088597173933;
    msg.width = 0.09284532572917004;
    msg.length = 0.5776451715084971;
    msg.coff = 39U;
    msg.angaperture = 0.696454388906501;
    msg.range = 24364U;
    msg.overlap = 222U;
    msg.flags = 177U;
    msg.custom.assign("PPYSUJKAUQEYOQEFFTCBVRHDRCNKFSABJLEQCNXGHAIZHFFQAPNVJENXMRPSGRIXGYBKAHSIGVPOXUEGWOEVWMTHAZIMCODYGORSUXFSCIJXKWULYCENTVSMTDVPNGNARGBCHDQMAATQSBWMXOOBSDLWRXGJBQUNOZFOWPWHKEBKKBXFOBQHLRKJIYWPZFS");

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
    msg.setTimeStamp(0.5651315718175456);
    msg.setSource(3169U);
    msg.setSourceEntity(137U);
    msg.setDestination(26715U);
    msg.setDestinationEntity(214U);
    msg.lat = 0.6196625766611236;
    msg.lon = 0.8114500664870399;
    msg.z = 0.7268624044167886;
    msg.z_units = 87U;
    msg.speed = 0.6650308577170841;
    msg.speed_units = 139U;
    msg.bearing = 0.346789842327093;
    msg.cross_angle = 0.5946990636550612;
    msg.width = 0.18222163140286285;
    msg.length = 0.0583029359174605;
    msg.coff = 13U;
    msg.angaperture = 0.23433296436996776;
    msg.range = 15942U;
    msg.overlap = 90U;
    msg.flags = 171U;
    msg.custom.assign("RSUILPYDRZCEDOPINJYGQGVXQAYAYTL");

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
    msg.setTimeStamp(0.45304635575262975);
    msg.setSource(29721U);
    msg.setSourceEntity(95U);
    msg.setDestination(9757U);
    msg.setDestinationEntity(33U);
    msg.lat = 0.4704494344592488;
    msg.lon = 0.8321366176998808;
    msg.z = 0.6728731342423478;
    msg.z_units = 231U;
    msg.speed = 0.8792448990273036;
    msg.speed_units = 76U;
    msg.bearing = 0.18355563580923906;
    msg.cross_angle = 0.28798761442700593;
    msg.width = 0.21954259010150157;
    msg.length = 0.8910295137088717;
    msg.coff = 216U;
    msg.angaperture = 0.43781764114742494;
    msg.range = 10234U;
    msg.overlap = 4U;
    msg.flags = 43U;
    msg.custom.assign("GPJLHPABLUEOZZYSCSQQPEVJBTXCMIRFURFPYBXOHTAEQGIXMEMVUMMBEHRRVTWBNRURVUNOSNLQYFE");

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
    msg.setTimeStamp(0.10430316858630007);
    msg.setSource(48928U);
    msg.setSourceEntity(201U);
    msg.setDestination(29863U);
    msg.setDestinationEntity(213U);
    msg.timeout = 44825U;
    msg.lat = 0.7395429787734905;
    msg.lon = 0.8511850788275496;
    msg.z = 0.7722243023450611;
    msg.z_units = 126U;
    msg.speed = 0.8604037128633809;
    msg.speed_units = 235U;
    msg.syringe0 = 143U;
    msg.syringe1 = 186U;
    msg.syringe2 = 104U;
    msg.custom.assign("QVNJXKFGOPAUJQPFORXMORGJGIOZKTFMYZEPVUGTCBSYVRLBKKILBQDJEMTZDVCWHFUYNFTXOCRXYDNWXIYXFWEKYSLUHZOF");

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
    msg.setTimeStamp(0.3912339485033014);
    msg.setSource(12840U);
    msg.setSourceEntity(185U);
    msg.setDestination(1349U);
    msg.setDestinationEntity(116U);
    msg.timeout = 25495U;
    msg.lat = 0.9566568155050147;
    msg.lon = 0.9407945411722336;
    msg.z = 0.0031292855588335167;
    msg.z_units = 237U;
    msg.speed = 0.13210631866592248;
    msg.speed_units = 188U;
    msg.syringe0 = 85U;
    msg.syringe1 = 192U;
    msg.syringe2 = 38U;
    msg.custom.assign("ZFLYMQOIUKGDENTUAZDXTWZGJXWMGLDBEBQUYSGSGXKEZHUHDBFHPTYPAYTNNPJFREUMMVJINSZWIXJDFRMSSCHUXPVDNAFCYKAJSTOCICLSEBYVVPCUAQLQNPQRDMIPLLJWHPVOOPCOVRBJLNHLXWVNEMQJOKWVVXCITYQDBCFWOZREHHAEEMKBFKGXACWZEXAPOSR");

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
    msg.setTimeStamp(0.3316709856905161);
    msg.setSource(48899U);
    msg.setSourceEntity(174U);
    msg.setDestination(58912U);
    msg.setDestinationEntity(98U);
    msg.timeout = 40234U;
    msg.lat = 0.14363563238913646;
    msg.lon = 0.03183280753754103;
    msg.z = 0.6085892153340606;
    msg.z_units = 128U;
    msg.speed = 0.08220511879266224;
    msg.speed_units = 100U;
    msg.syringe0 = 103U;
    msg.syringe1 = 187U;
    msg.syringe2 = 125U;
    msg.custom.assign("MSBETVNBVALXRSZMBKVKMAPKYPVJZRAIVIAVNNYATBSLLMTXYMZMFQBJOCCEZIELVRXOVGFESOUGMOWGHKDKFFUHJLRUXWQIPGSYTGNNASVWETDHOBYXPHARHLHDZXHRIUNRTLDFCFDOYZJFJNXCFZPWJSILIMMYCCGUOLLWNBZMHCJDPCTDQFIPAOGWXQDKJEUGCKIOUCGQRDJOPYZQKTSPQQFXXQKPNQAWRUVNHTSBJBESIDGEY");

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
    msg.setTimeStamp(0.8556544109135105);
    msg.setSource(17951U);
    msg.setSourceEntity(242U);
    msg.setDestination(49293U);
    msg.setDestinationEntity(43U);

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
    msg.setTimeStamp(0.0372756663053212);
    msg.setSource(40408U);
    msg.setSourceEntity(71U);
    msg.setDestination(22805U);
    msg.setDestinationEntity(71U);

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
    msg.setTimeStamp(0.6904181888293831);
    msg.setSource(4258U);
    msg.setSourceEntity(97U);
    msg.setDestination(16907U);
    msg.setDestinationEntity(63U);

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
    msg.setTimeStamp(0.7658772324682245);
    msg.setSource(59801U);
    msg.setSourceEntity(102U);
    msg.setDestination(18280U);
    msg.setDestinationEntity(221U);
    msg.lat = 0.3883636172686099;
    msg.lon = 0.01874825429508542;
    msg.z = 0.5839249291989808;
    msg.z_units = 101U;
    msg.speed = 0.17880884607710545;
    msg.speed_units = 139U;
    msg.takeoff_pitch = 0.12670078472350932;
    msg.custom.assign("QLPRFITXYADSYEWJGPRFF");

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
    msg.setTimeStamp(0.6608866412612018);
    msg.setSource(38809U);
    msg.setSourceEntity(108U);
    msg.setDestination(36169U);
    msg.setDestinationEntity(188U);
    msg.lat = 0.8166557720788072;
    msg.lon = 0.9121348709660625;
    msg.z = 0.48196691171756467;
    msg.z_units = 148U;
    msg.speed = 0.2909708147011719;
    msg.speed_units = 210U;
    msg.takeoff_pitch = 0.9176966692109189;
    msg.custom.assign("ROGRCPDXCIYYCTHRPOFDLTKMGZOQCTQVSMMEVYPPMCXWYOQNOKRAYEIJABILHUUEWBZEXCSOJWQWORBHEJGVZFVCPLCHSFJEJYBTMZYZNPBQINBKUFWQSZDZYMIRHTTRXKRYISKSSEDFAUKVTXDNOAIFJFHWLDDABUUDJNJLQVCHBX");

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
    msg.setTimeStamp(0.9482218276417146);
    msg.setSource(48164U);
    msg.setSourceEntity(106U);
    msg.setDestination(7752U);
    msg.setDestinationEntity(251U);
    msg.lat = 0.06952157534401981;
    msg.lon = 0.7828480903190257;
    msg.z = 0.48345710007931386;
    msg.z_units = 70U;
    msg.speed = 0.6899173692892379;
    msg.speed_units = 50U;
    msg.takeoff_pitch = 0.9093979188965676;
    msg.custom.assign("GSBVRYPHZCHMSEXQOEWKRGVZNXYQWGCCRYJGRKLDZOQMJVJUAEFXLMVHMWDJXFXLLCVAUUOWEBBKGFCJONIFQYGUBNZLYTZPHWQNTIFOMTSIWRYYWDLBDRKMRCZPITXMOOG");

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
    msg.setTimeStamp(0.29299286372095457);
    msg.setSource(46819U);
    msg.setSourceEntity(140U);
    msg.setDestination(62439U);
    msg.setDestinationEntity(167U);
    msg.lat = 0.09435910884588117;
    msg.lon = 0.1104955257639666;
    msg.z = 0.8338448582473983;
    msg.z_units = 169U;
    msg.speed = 0.37587834683455457;
    msg.speed_units = 250U;
    msg.abort_z = 0.10562363225652993;
    msg.bearing = 0.37054965554946406;
    msg.glide_slope = 175U;
    msg.glide_slope_alt = 0.9175856780300016;
    msg.custom.assign("RTCOHABORBORVXGFQZBOCNGUFGUOEWTXLKPWZJVWGPDSATZRPNQNGIAEOQIVMCEPRGJYLTTWJUFHZARXFSGZSVNOUAKMJWXBDKLQCGLYQOWHHEIANCEKYPSJZXZTNLHEEDCOKFHSSUVTWIZMFRPBSLYBQMHHFPPM");

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
    msg.setTimeStamp(0.15454175583962382);
    msg.setSource(61362U);
    msg.setSourceEntity(49U);
    msg.setDestination(48623U);
    msg.setDestinationEntity(247U);
    msg.lat = 0.23812793523152032;
    msg.lon = 0.05423820627082898;
    msg.z = 0.49828920624196704;
    msg.z_units = 206U;
    msg.speed = 0.6067290385214242;
    msg.speed_units = 113U;
    msg.abort_z = 0.3828922325148135;
    msg.bearing = 0.0011785811478600694;
    msg.glide_slope = 68U;
    msg.glide_slope_alt = 0.761246710400615;
    msg.custom.assign("PDGQEYUNRBTQKPXXDPLPKSCZKSNZPWYVITTCCCYJAEULTYRBUGRBWGMNDJCWDJXQNSIGNHLXENMMFFIEAINWUIUWXXEVYZWJTHZGRLEVQWBZQILHXJUKXKVDZYSTXYUFSZOYOHONRPCPVOLHHEORCO");

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
    msg.setTimeStamp(0.6580812622463486);
    msg.setSource(61729U);
    msg.setSourceEntity(2U);
    msg.setDestination(7857U);
    msg.setDestinationEntity(160U);
    msg.lat = 0.6399100852020989;
    msg.lon = 0.16846514810348223;
    msg.z = 0.8949983449301747;
    msg.z_units = 100U;
    msg.speed = 0.6775530216960708;
    msg.speed_units = 215U;
    msg.abort_z = 0.4512615627751384;
    msg.bearing = 0.293987999813046;
    msg.glide_slope = 122U;
    msg.glide_slope_alt = 0.8906152517580825;
    msg.custom.assign("LIWWFSAAOLVIVYMUZPFQNOZEXKGVFKVNYCDGNRFHCMBCSOLPNAIDCNJLWVJMTYAWRMNYFMAHOPQBYNPBAJTOHNGDOZRANPDTUSTRNODZBHZURDKLSBQPRSYKVVTSQEELWUFFEXIJGKPEAZTIYIJBOIESYOUWVALCMIECVJPJBXQKHQYULKWMHUGUJOKQXAHBQFWXZUJMWSHETUXTXG");

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
    msg.setTimeStamp(0.010708456559808233);
    msg.setSource(592U);
    msg.setSourceEntity(225U);
    msg.setDestination(39552U);
    msg.setDestinationEntity(22U);
    msg.lat = 0.6222003140868987;
    msg.lon = 0.22597516567993214;
    msg.speed = 0.6676067645181412;
    msg.speed_units = 95U;
    msg.limits = 92U;
    msg.max_depth = 0.4342211409436654;
    msg.min_alt = 0.017094059378188087;
    msg.time_limit = 0.5737761334167898;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.17353874506015565;
    tmp_msg_0.lon = 0.2815964239961878;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("PVZKAJWHVTAHJGNCBDIKKNMKPTTTFQPRMEKCKVYWAYZFMXQSUJDTSDUICHDUQUMZINOYSCBKSNSBEUDV");
    msg.custom.assign("QBZWIYKTJHILULWJABIGUMXIJGRUHWNKNTCFXKMGMURQMUXNRLCNSVOWLPIEITXHVFYSVXMJGOBYJLAWVCTGBNJLLDVPDATRGZDSVZHZPYKEANWPZCFPBWIYCIWFPWDTVUSLTBKGGZHVYNMFDAWRQZFKARUMISOPHNBERXSPMCPDYXQAFQCQOTXVVOCRBXSEDDEJQKDLHGQNCZJOUBOOSAFERJUYYNSJMERHEAILOKOHHEAMEQZCDGXF");

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
    msg.setTimeStamp(0.7600492765752938);
    msg.setSource(29741U);
    msg.setSourceEntity(180U);
    msg.setDestination(35735U);
    msg.setDestinationEntity(38U);
    msg.lat = 0.26761279678135075;
    msg.lon = 0.301557114840852;
    msg.speed = 0.4760357669562194;
    msg.speed_units = 128U;
    msg.limits = 105U;
    msg.max_depth = 0.7821579825091716;
    msg.min_alt = 0.3172810659158056;
    msg.time_limit = 0.9771672688653178;
    msg.controller.assign("KSBSFDFALUYWGLHBOMEVAUVMMJHYPGDCEAHVDGMRWVHOVEJDFSIPOUQCMLBROZTOFHURLPJUDBQJAHNRIGRBXEAGQIBZXQNORFGINYJLDWYXIOQFTMLCCPACHCTXSCENSGWBAJHYQGXEIKZWHXRUNKKYALNSKZJCXPPNOUIFXVWYQTEPPZRMQKDRTSZNKQGYKTGWVIEYWXUVRDNVZPM");
    msg.custom.assign("DDVLPJCRHTBQIZTCACLERPEAUOSWJLUHANUVUQDWQJRLGOZQFWYEFGTXXCGAPSWLJMZJHNRUODWCZUKTSBLIHVIO");

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
    msg.setTimeStamp(0.44888290049322777);
    msg.setSource(44214U);
    msg.setSourceEntity(201U);
    msg.setDestination(25342U);
    msg.setDestinationEntity(107U);
    msg.lat = 0.9143879354739327;
    msg.lon = 0.5249525286469146;
    msg.speed = 0.24618084460040435;
    msg.speed_units = 4U;
    msg.limits = 234U;
    msg.max_depth = 0.4955899045920725;
    msg.min_alt = 0.5889726712313081;
    msg.time_limit = 0.6540798813054056;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.08883560437251514;
    tmp_msg_0.lon = 0.8202769161954456;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("THGEMXHXIUCWDQCONIWHIMMAMHENYGRBTANPSLNZUNVKJYBDKJJZBRWHOROMBOGOJCKFZBWEWXIZJJBRVWXPWLQUDTQBTOMQKGDJAQTZAVQOXXFSWCVMIYJXLENMADLSEUYAAGPFHVLTGNLXCEFEFQGABYJPRPUKCDUQBLYKDTHFDUCXHCVSFDLMPSISBSDSAVPPPRHOWXIARGTZKERFGIQLRJTUYQKFNCKUIWMYINOCYL");
    msg.custom.assign("JGDFCXHZWWSIUFCOARXPRQUXGLBMIIHZLBXDZNOXOVRWZONGLJCJAKXQOBSALPQURSABWCGGNXXUVPXJQNWAMAYRESDLMBOKDVSDTYPDQFQUPJTAEHBCYPUTNLIEWHEMTTPWVVSQFDTZRIKRDFEVKKYECGKUTTGLTMZSSAXWHSKCGUHBPNMFPYCQFVLZKGHEKJDNECUFQLRBEJEVHSJWJNIC");

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
    msg.setTimeStamp(0.7958921648970524);
    msg.setSource(44635U);
    msg.setSourceEntity(124U);
    msg.setDestination(56648U);
    msg.setDestinationEntity(0U);
    msg.target.assign("QZBPFCINDMBUQATRROHORVYIMWNOJWVCEDIAQNESKWFWVBJGGKTDALIAGIVQJEOLEBNZHTYDXROUQQNNPYHCSSGXCUDMFAWZSNGUTBJPSMUIQFOEUPXHFGMXMTTSIAZMEWNUAOAHQFLYYXLFTNAQYRWDBJVVWEXHGKZXFS");
    msg.max_speed = 0.5798605737188732;
    msg.speed_units = 235U;
    msg.lat = 0.04367994885319615;
    msg.lon = 0.06823688344861989;
    msg.z = 0.10509182402765538;
    msg.z_units = 69U;
    msg.custom.assign("HVIUSOQXGQJBSITNUOWRBTTICCESBKYRHWLQZNDCJMGLHQFKFIKFNBJCERKYHHHEAJPGRIDBBUWFZMAJAXKXAVNVPPRVOJVMMSZNAGOVOIDMOCWNEWPFSZLPMFOWMFPYUSALDZMXDLUSCHXTLTUYCVNFEWIAYCJKVQSAQRDGLIVRUBJJGYPXTFBZVKIQBPYXDEKWUZEMWQESUMHOKYTGCXIPWXELAGXFDQBTT");

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
    msg.setTimeStamp(0.5122668833887489);
    msg.setSource(9648U);
    msg.setSourceEntity(104U);
    msg.setDestination(25990U);
    msg.setDestinationEntity(122U);
    msg.target.assign("MUSCARHSBGRMPLPMFRYNITCGKEDCVSTCOHEVUKXYRGHLMWTDPOVFNTMIPZYAIDJHXETXAGRWSAQQGXGKXTUNFNZTCZLJJWGCKBXVLKIFZSCLEBCNENOIXDAIFMYGLHEFLLBJDBMZK");
    msg.max_speed = 0.4976315263038109;
    msg.speed_units = 172U;
    msg.lat = 0.9692018766284948;
    msg.lon = 0.1306420864773845;
    msg.z = 0.6718092888915869;
    msg.z_units = 127U;
    msg.custom.assign("VDZGPBQZACLLTSSAHZOLZTNRWSSXHSBKYNWCDQRJZEDDJYPAVFNAMJEWIOFZMOCSWLVWCQCVLSVIKNOMFXKKLBUEUEITGBPBQRTUFPUAVOMYUYJDJPAQYCJIFALUNOYSQCFGXHEOMXNPGFJGEBIHUHWRXHIXUUGAIWHZVQSNRXGJHPMMUPKDECXFRLNKGTNEATLXBQQFTBYSHKZODWJ");

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
    msg.setTimeStamp(0.4029461270157646);
    msg.setSource(3322U);
    msg.setSourceEntity(48U);
    msg.setDestination(48219U);
    msg.setDestinationEntity(244U);
    msg.target.assign("CYZULODDOLFWERXZALFKPPLPEBGDZE");
    msg.max_speed = 0.866143151571434;
    msg.speed_units = 218U;
    msg.lat = 0.36917101746099823;
    msg.lon = 0.028598033808122536;
    msg.z = 0.7849390428883852;
    msg.z_units = 41U;
    msg.custom.assign("NPHSIIVTIJHBCSAOGVCXGVTIMZXTDWCACDLSJHHXULYFYGCMPGYON");

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
    msg.setTimeStamp(0.15247229199426093);
    msg.setSource(34975U);
    msg.setSourceEntity(100U);
    msg.setDestination(62273U);
    msg.setDestinationEntity(56U);
    msg.timeout = 51227U;
    msg.lat = 0.10409479116765508;
    msg.lon = 0.6149333649642867;
    msg.speed = 0.15606521187603495;
    msg.speed_units = 133U;
    msg.custom.assign("QZPNBAFPJIJLGUVOTNATRPZIKDFSILMEAFSXENRLJWZERTSQFXNYDLU");

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
    msg.setTimeStamp(0.04649152079165819);
    msg.setSource(11391U);
    msg.setSourceEntity(73U);
    msg.setDestination(40188U);
    msg.setDestinationEntity(153U);
    msg.timeout = 23067U;
    msg.lat = 0.46860778733557784;
    msg.lon = 0.6125818553762836;
    msg.speed = 0.4116801888651922;
    msg.speed_units = 92U;
    msg.custom.assign("RGRDIIABUSQJHOTVQAJYMTEYJCRFZGSQIBDCVYTQETSHDVDSSYSOFUOUJRRHSLSKZWWVCKYRGBCAEMZKOZCIPXVVNWGKPQTFGJHBMCAYANULFDNEDTJORFHYMXZWZUCUSPAWVTUQLGPVBRFOYJDUPZDZABLNLECFRWXLNBIQXLFFJKZWHMXNOT");

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
    msg.setTimeStamp(0.939648397008391);
    msg.setSource(28474U);
    msg.setSourceEntity(121U);
    msg.setDestination(50959U);
    msg.setDestinationEntity(11U);
    msg.timeout = 10828U;
    msg.lat = 0.24671119496536276;
    msg.lon = 0.8634752051845921;
    msg.speed = 0.33820995140000876;
    msg.speed_units = 14U;
    msg.custom.assign("BDLISUIKWPCXTOJFGKTPZWSKXHMRCUSHENJYNTXURDCARGFBTJYHOOACMVZSDNICJVOWUUHAPFPZQIYGLSNTFUZHKKNQHPPBMHR");

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
    msg.setTimeStamp(0.6866116828812235);
    msg.setSource(9656U);
    msg.setSourceEntity(61U);
    msg.setDestination(25137U);
    msg.setDestinationEntity(87U);
    msg.lat = 0.9193262407523917;
    msg.lon = 0.7442341485948266;
    msg.z = 0.7316795646812907;
    msg.z_units = 157U;
    msg.radius = 0.4920505113573639;
    msg.duration = 45677U;
    msg.speed = 0.1289492917721089;
    msg.speed_units = 52U;
    msg.popup_period = 2092U;
    msg.popup_duration = 48571U;
    msg.flags = 249U;
    msg.custom.assign("ZVSBOBDHFHVPLKNCHNCRUVIMQKMDJDIIOQAWEGKXJPZKOBHAYARUHJTATBRWVCXQIRDPEZFWYLDLCRYAEENWBOEGXJXVPZTUSORUTCPMPZYUMQRZSNNTOWHWVIFUQFSQYSRWPUFVPRNXAUZMFBLOSNESAHLBHZBVKJJKWAGXXKPTCDOJGSWIGDLZMKEIMEYNCMQNTJBGSNIFCMFQXGXLYGCYADJMPOUKIIKURGYTLSDQAXFQBJ");

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
    msg.setTimeStamp(0.024942161609757485);
    msg.setSource(51515U);
    msg.setSourceEntity(228U);
    msg.setDestination(11803U);
    msg.setDestinationEntity(194U);
    msg.lat = 0.722295517231111;
    msg.lon = 0.9464466743703794;
    msg.z = 0.6927281430327862;
    msg.z_units = 237U;
    msg.radius = 0.736474831393449;
    msg.duration = 15665U;
    msg.speed = 0.5270661439011781;
    msg.speed_units = 134U;
    msg.popup_period = 4394U;
    msg.popup_duration = 50170U;
    msg.flags = 136U;
    msg.custom.assign("TZKYINVFNDWMEFCVRDHEVAFQQAVCMJFDDMGMROSBHBFFZHHQYLHQNOYSWUVVKMQWXTGWTTPCALWLSPTFKZIZNHNBHYNJPYGXEAEYMRTNKVQOIBWYEABRNNNASSMULUM");

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
    msg.setTimeStamp(0.8331813301139501);
    msg.setSource(23019U);
    msg.setSourceEntity(240U);
    msg.setDestination(30630U);
    msg.setDestinationEntity(89U);
    msg.lat = 0.2751669030151447;
    msg.lon = 0.11265267356649433;
    msg.z = 0.9353492687150976;
    msg.z_units = 37U;
    msg.radius = 0.18592921526801187;
    msg.duration = 3788U;
    msg.speed = 0.871963052265188;
    msg.speed_units = 8U;
    msg.popup_period = 34502U;
    msg.popup_duration = 40290U;
    msg.flags = 200U;
    msg.custom.assign("CLBEKURZGMXREAJDSIYQNGUHNVCWTIPLKEGFOYAKKHFY");

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
    msg.setTimeStamp(0.8982723720660911);
    msg.setSource(16934U);
    msg.setSourceEntity(17U);
    msg.setDestination(56840U);
    msg.setDestinationEntity(11U);

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
    msg.setTimeStamp(0.9051433603973187);
    msg.setSource(31753U);
    msg.setSourceEntity(97U);
    msg.setDestination(30027U);
    msg.setDestinationEntity(193U);

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
    msg.setTimeStamp(0.5265575470205249);
    msg.setSource(44145U);
    msg.setSourceEntity(100U);
    msg.setDestination(13797U);
    msg.setDestinationEntity(116U);

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
    msg.setTimeStamp(0.4607988917167045);
    msg.setSource(25022U);
    msg.setSourceEntity(213U);
    msg.setDestination(29923U);
    msg.setDestinationEntity(81U);
    msg.timeout = 16848U;
    msg.lat = 0.7191830249026258;
    msg.lon = 0.1844389852154812;
    msg.z = 0.654129615538901;
    msg.z_units = 25U;
    msg.speed = 0.7981821239855916;
    msg.speed_units = 178U;
    msg.bearing = 0.39983748428061483;
    msg.width = 0.42872794450380924;
    msg.direction = 70U;
    msg.custom.assign("BFYUZKLTMUCEVSBULRWFOPXUVIEZEFZDEMGPNSCDEBZAHCKQXJFIZYCXZPJTXVORABOCORBBQWVIG");

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
    msg.setTimeStamp(0.34593133655684594);
    msg.setSource(32051U);
    msg.setSourceEntity(110U);
    msg.setDestination(42908U);
    msg.setDestinationEntity(60U);
    msg.timeout = 46850U;
    msg.lat = 0.14787332680935872;
    msg.lon = 0.7130168022677242;
    msg.z = 0.9905208196147148;
    msg.z_units = 90U;
    msg.speed = 0.9069173763999455;
    msg.speed_units = 206U;
    msg.bearing = 0.8683176537554214;
    msg.width = 0.6015169254171461;
    msg.direction = 127U;
    msg.custom.assign("HCUAPKYHFMQQQKZTOKLPWSQGRHONMRHDZFCUGBPOOZCAZYNXODOEFDIMLJJZEZVDAAAVBXCUYJQNHQQHSQISNEGTGGDLYWXEMFCSPTICSBPXXUIWTBWRLIFICSBNTEYJANDAXASLKCOZWUYWYAKEOEIPDNPVTYFLPDAZDKIXVSDTKJKMXQBORITSFUHFJYWUPVJRNHMXCOQKIMEPVRB");

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
    msg.setTimeStamp(0.32652453271647175);
    msg.setSource(3601U);
    msg.setSourceEntity(152U);
    msg.setDestination(38663U);
    msg.setDestinationEntity(53U);
    msg.timeout = 39688U;
    msg.lat = 0.40889234389768025;
    msg.lon = 0.7211416574073879;
    msg.z = 0.4855966651613849;
    msg.z_units = 129U;
    msg.speed = 0.7425393092384077;
    msg.speed_units = 187U;
    msg.bearing = 0.3888018212086132;
    msg.width = 0.6753810307997106;
    msg.direction = 251U;
    msg.custom.assign("NSPAGCWWOHBQITRKXREYWSHUQDTPAJZZZLGFTAKFBKJCYRJJLFW");

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
    msg.setTimeStamp(0.5206011450898759);
    msg.setSource(40282U);
    msg.setSourceEntity(64U);
    msg.setDestination(32217U);
    msg.setDestinationEntity(47U);
    msg.op_mode = 93U;
    msg.error_count = 130U;
    msg.error_ents.assign("VAHPNFQXKXCBFYWWJBPLVXBHAGNPKHCXOCZTAR");
    msg.maneuver_type = 6975U;
    msg.maneuver_stime = 0.47883765645350085;
    msg.maneuver_eta = 17884U;
    msg.control_loops = 2668545699U;
    msg.flags = 42U;
    msg.last_error.assign("ZBLOWPHIISGVDBZIMLGIAPOJSXMHEAYLYRAYPVVLJRSTCQDSFYIVMUERJWNFCOBGFMD");
    msg.last_error_time = 0.7946670638181312;

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
    msg.setTimeStamp(0.6217153041001716);
    msg.setSource(51535U);
    msg.setSourceEntity(165U);
    msg.setDestination(47384U);
    msg.setDestinationEntity(154U);
    msg.op_mode = 177U;
    msg.error_count = 181U;
    msg.error_ents.assign("SVQDWBSEJONHIELAUBHWRUAUQFGNJMKKZCXEEPVXJPAIEPWGRPDPZEYHORRRTKNCOHLWTOUMDHKKNFAEJREHSCUYVCTKZXVOJSNPDJLNNQOIX");
    msg.maneuver_type = 6516U;
    msg.maneuver_stime = 0.6021912602140937;
    msg.maneuver_eta = 64740U;
    msg.control_loops = 2538075497U;
    msg.flags = 31U;
    msg.last_error.assign("HUICEFSDIWFBCGTCLBJCSDBSCIYZRRIAYTHGQWYOPWVSKRNJDRRAMHDDQKTYYXGPFGRPOPGWBYEJWAFKSUUXEQBFHNKPNJUBVOUZCDIJLUZODAHSHNZVHAMZYLCXUAWIKLBASMZTERYA");
    msg.last_error_time = 0.34985290137057456;

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
    msg.setTimeStamp(0.280293529096334);
    msg.setSource(22943U);
    msg.setSourceEntity(100U);
    msg.setDestination(5954U);
    msg.setDestinationEntity(222U);
    msg.op_mode = 126U;
    msg.error_count = 115U;
    msg.error_ents.assign("XKTQMNMQLFJRXVBSKIATHDXRCBMUHIEPGKGENXCCYXIXAWQTMJXNOBQQBAIKOUBAQCRREYI");
    msg.maneuver_type = 2135U;
    msg.maneuver_stime = 0.05684225225810824;
    msg.maneuver_eta = 60725U;
    msg.control_loops = 3244535081U;
    msg.flags = 47U;
    msg.last_error.assign("GGSQGQEELPHCREHIEZMFTSNQCFMOEQWQGOQBINJZSYXAWTBHXPKPJUVFTPAMBHXJKPDVYKJWXQUEDNIHNDKZBYVRYRLICTACOTUXMLZWAWUVVDOFGZYYGFGUNIIJHCVWASCSOEMM");
    msg.last_error_time = 0.2919445367224548;

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
    msg.setTimeStamp(0.9112090781677165);
    msg.setSource(54926U);
    msg.setSourceEntity(10U);
    msg.setDestination(11729U);
    msg.setDestinationEntity(158U);
    msg.type = 217U;
    msg.request_id = 13118U;
    msg.command = 107U;
    IMC::PopUp tmp_msg_0;
    tmp_msg_0.timeout = 28467U;
    tmp_msg_0.lat = 0.3604283112517489;
    tmp_msg_0.lon = 0.13077870538714076;
    tmp_msg_0.z = 0.7663450562564253;
    tmp_msg_0.z_units = 202U;
    tmp_msg_0.speed = 0.09163500939990266;
    tmp_msg_0.speed_units = 195U;
    tmp_msg_0.duration = 41133U;
    tmp_msg_0.radius = 0.9445713177670548;
    tmp_msg_0.flags = 197U;
    tmp_msg_0.custom.assign("IHAKVLRUSCUYBNLIZDQAAPLXLHXSOJXDPUXBXEZCTQANWFNMOVEHLMUYVEQXBKYQIJFUZAOLAMGJTSWDKAFLDJVJDZWMTRZIMUCPMBYMGWSFAIIUOYREYQCVRICILXCCZEQOVHSDNTKETHJMNHDIGVXOPJRGVKJVIHWVCQXBZBXRRCWYKKUOGTCNFSDHBBWQFRLWPFMA");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 25090U;
    msg.info.assign("YNTOWIDSIOYHEOTSXSQACLDUTJEFSLCTVABRJTUVZGOCJVWOMHWYXNNSMADAYYVYHEZLUDIZFXDEKNAGFZYNNQDKHUSXUKSRICSBXFICVGVMJGPEZPHRUHTLPGCFWEPBZBQTREOPPCVVFAKIFQPCAKLIMLBRV");

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
    msg.setTimeStamp(0.8847164567124374);
    msg.setSource(31098U);
    msg.setSourceEntity(97U);
    msg.setDestination(1775U);
    msg.setDestinationEntity(73U);
    msg.type = 14U;
    msg.request_id = 33434U;
    msg.command = 244U;
    IMC::Drop tmp_msg_0;
    tmp_msg_0.timeout = 15313U;
    tmp_msg_0.lat = 0.3096651334876419;
    tmp_msg_0.lon = 0.9735833997190195;
    tmp_msg_0.z = 0.3919697723904296;
    tmp_msg_0.z_units = 84U;
    tmp_msg_0.speed = 0.789343066362686;
    tmp_msg_0.speed_units = 128U;
    tmp_msg_0.custom.assign("VAHEPBZRCGCPESSXFTXMFZWBOFKIUAEMZTDVBRVKMESLPBZOXNDGWNUDPAOOFTPGCJXHJQCFXVLHCNZBXCXKMPQP");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 39820U;
    msg.info.assign("CDBAAKTHOJSAAYOZFPBAJCWHUCQQYPVQGBRSEQDPFBYCRBXLEBIILXWYMWUJEZGGZKDIYR");

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
    msg.setTimeStamp(0.19008740102782673);
    msg.setSource(12713U);
    msg.setSourceEntity(189U);
    msg.setDestination(46606U);
    msg.setDestinationEntity(20U);
    msg.type = 238U;
    msg.request_id = 10960U;
    msg.command = 155U;
    IMC::Teleoperation tmp_msg_0;
    tmp_msg_0.custom.assign("MBECVGNNJFUAXWMBHFZHSCLZFVINKKUYUTHDDKMEFJLTETVWRDEWHSASFIPHJLTNOLCSTXQQ");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 32878U;
    msg.info.assign("PPWXBNGSBPFYOKQRZUXNOLBSMGEFDAVRCAETANATHYLVDIRPHZJLYSMJGFXKWXHDUFMUJVLWDJPBTDQHKZCXJEHTRVUXCQWSUVEPEATFKETJLTVIHWPVMJQNOYONLMTUZSRFWUMCECGWSZQGJODLSXZKKGFK");

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
    msg.setTimeStamp(0.5696479145357629);
    msg.setSource(49645U);
    msg.setSourceEntity(139U);
    msg.setDestination(34243U);
    msg.setDestinationEntity(15U);
    msg.command = 79U;
    msg.entities.assign("XILMLCPOIURGUJHDFCNMTWHSOBEVBLEFTYPWHQDJQCRRTEYDGJARWHRHSKZEZMQQZDOFHJKFWMHUAKIVTIGAAUOXNX");

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
    msg.setTimeStamp(0.8394322066947861);
    msg.setSource(8239U);
    msg.setSourceEntity(169U);
    msg.setDestination(45759U);
    msg.setDestinationEntity(44U);
    msg.command = 33U;
    msg.entities.assign("LJFCBQDRZDWCWQFLXYIQRPFDAVTDASKDUCMKSJZYMGQVACUAHVLOXJGWMZUIKXGZXVEVJJHOIQOTARYEUFGYEREWNKLNRWZXELDWLPIOWQUDUOBHJNIHRZOUFDXPLMEOJCLBPIGY");

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
    msg.setTimeStamp(0.6606833664580511);
    msg.setSource(7700U);
    msg.setSourceEntity(22U);
    msg.setDestination(7780U);
    msg.setDestinationEntity(120U);
    msg.command = 135U;
    msg.entities.assign("IHQPOMIKEYZUYIPD");

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
    msg.setTimeStamp(0.031945521176601877);
    msg.setSource(29765U);
    msg.setSourceEntity(197U);
    msg.setDestination(662U);
    msg.setDestinationEntity(239U);
    msg.mcount = 45U;
    msg.mnames.assign("WKIMJJFKPVII");
    msg.ecount = 82U;
    msg.enames.assign("ZCYHLONMUHZVXLPAMZIVLBWMZNTDDHQXELLNSKNJAVVOAXIUJUJYVVZPVRZSTRSFASIQDMGJXXCQHTGHDRMEACJPASTPHBFHMQWELWGUIIYGNBQKZCYRTENIJPQPRFTFSJQQTNIVKDNVLBQUKERLVUKBFORWFSCKBXXYOGOCZULEJHUDPFLJDTOKYWDWOFDIYGUSIAXXAESWCYDCAOMWIBYMARTJ");
    msg.ccount = 229U;
    msg.cnames.assign("REGMTPYXXZGIINDTXOXBNPCZLIMGJMOADIUBTHVVQMHPCKKGFVHWBWHQQHCKENYRJOZLZUSAPYYNAKHODXDOSKUPDFZTCVVCSNHOEOUJMZWJYFVLYOXULUIFGRWKJPPFWGETPCZRLAGTLTNISXJBCEAMVRBBNWRMLMZFRZNDNSBSSISLBAHWBTBAIODQJMDEDKXQSVULEITEJYGDJHRQWHCJMRARWYUUIVFXCAPPYYUFVQAETZC");
    msg.last_error.assign("HXEOHJQIBBDDYOSYGKJLSYAGPZJJZYLZBRIWPVBZKZSXHLMDYTUUBMFDXKEXERCTYIDFSRSQKQKUAILMFLTBUGZDFOVVRPCUAAVXFDLWOBTKTPNNQMJCMCXQWSPPXBVGMIAXSHVCQEJPFVTRFHIRNVNUVDAWUWYGA");
    msg.last_error_time = 0.20706803955484476;

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
    msg.setTimeStamp(0.9901786019088551);
    msg.setSource(30353U);
    msg.setSourceEntity(235U);
    msg.setDestination(37246U);
    msg.setDestinationEntity(231U);
    msg.mcount = 117U;
    msg.mnames.assign("BMDJEWKFTXCOFGXHUVGIGGLJVPBHSZNFHQRKLADBIDGGDVFCVWAOPMSIXFQSJOPFPPRTTMTOYSXTEOQYADVGCXRYBABYMDWKNHJUWNEVTYJJYMUPNGBRXYMRAQNZJW");
    msg.ecount = 212U;
    msg.enames.assign("XNWUEIFYDKAKECLNSGYNVHPUXSKGVAMEJZBSTYDTLCQRKHEJDOWPPVQIORKFWRHYUXSLLZPNRWVSTESBAAHILPWHBMFRAJAXKRGGLUDZSONQJIVDZEJNBIXVQTUJVCFDJFTPOOQBIJDMNIOKGPCQWIZHXMKMCGMXONFRCZDNENAIGQDFMTYKPWWHKVLSYQABXYEBTQAZCLUZORYCXPGTQYFSJERSLMBC");
    msg.ccount = 71U;
    msg.cnames.assign("GKJRVGJHRARGZ");
    msg.last_error.assign("HZNYEMZGAEUKVKIMGDNYGSOSR");
    msg.last_error_time = 0.09318959232168633;

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
    msg.setTimeStamp(0.433972329645397);
    msg.setSource(63958U);
    msg.setSourceEntity(121U);
    msg.setDestination(33900U);
    msg.setDestinationEntity(121U);
    msg.mcount = 172U;
    msg.mnames.assign("GLSFNKANHGGVKMAWDKOHBWUJIQUBKIUSBGPFAFKIREXJZBYCEBAUWCYRTPSTIFXDZJKDQBQCYEHVYXIWRDTELSJSTYQOXIMZFPQHZOLOUSMLAIDFVCTHMRZQKNGRQPKXPNRFDUIXRNLTBSMPHXKLAGZW");
    msg.ecount = 61U;
    msg.enames.assign("CTNOXKVRVEQNRWBRVGQGHCKZZUCOSJWJNIDEUAFFSSQVYYKAJKTQYCEIMLAOFK");
    msg.ccount = 56U;
    msg.cnames.assign("NLFFNLEWSXDPMYOJLDCBTZZYMKZVTQSQRPKNDVWMLXIPQGDPVGGHAIFCZJRMQLWBKMKDKCKLRHNZYFPJTWAJLREJITZGIZCJXPXDOOMVCQCAXIHTYKIUYKCGSUOVTQWVLXBHTISAVIPFEAFTZ");
    msg.last_error.assign("MXPPLROSAQPAJGQURVTGDNPXZJCGKYVQYPUAMUPKXRTFJDWXELXBULBYAJZDLZV");
    msg.last_error_time = 0.8676863526842415;

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
    msg.setTimeStamp(0.5699911183579175);
    msg.setSource(24224U);
    msg.setSourceEntity(227U);
    msg.setDestination(14850U);
    msg.setDestinationEntity(232U);
    msg.mask = 118U;
    msg.max_depth = 0.19062736546726466;
    msg.min_altitude = 0.15384732110761834;
    msg.max_altitude = 0.14485392945688658;
    msg.min_speed = 0.37954412690617667;
    msg.max_speed = 0.5061157317060242;
    msg.max_vrate = 0.8946412862733831;
    msg.lat = 0.5053898676429355;
    msg.lon = 0.4214039891656043;
    msg.orientation = 0.5391790145835705;
    msg.width = 0.04259563186525117;
    msg.length = 0.8597923410611823;

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
    msg.setTimeStamp(0.383655729712684);
    msg.setSource(44763U);
    msg.setSourceEntity(52U);
    msg.setDestination(63778U);
    msg.setDestinationEntity(43U);
    msg.mask = 237U;
    msg.max_depth = 0.9516482507875386;
    msg.min_altitude = 0.9878933813807436;
    msg.max_altitude = 0.8029892401139209;
    msg.min_speed = 0.6872633752525009;
    msg.max_speed = 0.7152782169708088;
    msg.max_vrate = 0.8784854993926783;
    msg.lat = 0.14140173498429376;
    msg.lon = 0.1230337734433894;
    msg.orientation = 0.3291452799918404;
    msg.width = 0.8867068252866058;
    msg.length = 0.20615234584552078;

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
    msg.setTimeStamp(0.059143683635421884);
    msg.setSource(10185U);
    msg.setSourceEntity(87U);
    msg.setDestination(6278U);
    msg.setDestinationEntity(162U);
    msg.mask = 198U;
    msg.max_depth = 0.6886019992748548;
    msg.min_altitude = 0.72476516337103;
    msg.max_altitude = 0.03944661659388271;
    msg.min_speed = 0.2363127218746952;
    msg.max_speed = 0.016661561071572795;
    msg.max_vrate = 0.6474162052872113;
    msg.lat = 0.3018896463785925;
    msg.lon = 0.3243060808005265;
    msg.orientation = 0.08171370971612468;
    msg.width = 0.889594292733537;
    msg.length = 0.8660313885379107;

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
    msg.setTimeStamp(0.10113322744595143);
    msg.setSource(28636U);
    msg.setSourceEntity(157U);
    msg.setDestination(33133U);
    msg.setDestinationEntity(163U);

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
    msg.setTimeStamp(0.21877846265396783);
    msg.setSource(38015U);
    msg.setSourceEntity(134U);
    msg.setDestination(54748U);
    msg.setDestinationEntity(194U);

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
    msg.setTimeStamp(0.9706332308757936);
    msg.setSource(6026U);
    msg.setSourceEntity(181U);
    msg.setDestination(5814U);
    msg.setDestinationEntity(56U);

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
    msg.setTimeStamp(0.38303203649248563);
    msg.setSource(2528U);
    msg.setSourceEntity(122U);
    msg.setDestination(19061U);
    msg.setDestinationEntity(154U);
    msg.duration = 33817U;

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
    msg.setTimeStamp(0.47364648518541297);
    msg.setSource(49603U);
    msg.setSourceEntity(123U);
    msg.setDestination(7835U);
    msg.setDestinationEntity(151U);
    msg.duration = 47747U;

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
    msg.setTimeStamp(0.32759978709514337);
    msg.setSource(64820U);
    msg.setSourceEntity(142U);
    msg.setDestination(26624U);
    msg.setDestinationEntity(2U);
    msg.duration = 34846U;

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
    msg.setTimeStamp(0.07068822420847354);
    msg.setSource(62747U);
    msg.setSourceEntity(109U);
    msg.setDestination(58997U);
    msg.setDestinationEntity(101U);
    msg.enable = 205U;
    msg.mask = 1116230076U;
    msg.scope_ref = 3938078737U;

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
    msg.setTimeStamp(0.23244510359475778);
    msg.setSource(9900U);
    msg.setSourceEntity(76U);
    msg.setDestination(17261U);
    msg.setDestinationEntity(6U);
    msg.enable = 152U;
    msg.mask = 2097153973U;
    msg.scope_ref = 941957999U;

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
    msg.setTimeStamp(0.7419690907871912);
    msg.setSource(14073U);
    msg.setSourceEntity(2U);
    msg.setDestination(37739U);
    msg.setDestinationEntity(239U);
    msg.enable = 154U;
    msg.mask = 4045507592U;
    msg.scope_ref = 817018069U;

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
    msg.setTimeStamp(0.5104331414334128);
    msg.setSource(3334U);
    msg.setSourceEntity(139U);
    msg.setDestination(53983U);
    msg.setDestinationEntity(199U);
    msg.medium = 120U;

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
    msg.setTimeStamp(0.0579083345132968);
    msg.setSource(43621U);
    msg.setSourceEntity(17U);
    msg.setDestination(44585U);
    msg.setDestinationEntity(49U);
    msg.medium = 197U;

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
    msg.setTimeStamp(0.1352078310745075);
    msg.setSource(60978U);
    msg.setSourceEntity(217U);
    msg.setDestination(18803U);
    msg.setDestinationEntity(21U);
    msg.medium = 153U;

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
    msg.setTimeStamp(0.9718472299725472);
    msg.setSource(32861U);
    msg.setSourceEntity(172U);
    msg.setDestination(60926U);
    msg.setDestinationEntity(141U);
    msg.value = 0.029064027500201206;
    msg.type = 186U;

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
    msg.setTimeStamp(0.06999302465501689);
    msg.setSource(44367U);
    msg.setSourceEntity(75U);
    msg.setDestination(55132U);
    msg.setDestinationEntity(95U);
    msg.value = 0.5100670128714769;
    msg.type = 98U;

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
    msg.setTimeStamp(0.9240320206611766);
    msg.setSource(21316U);
    msg.setSourceEntity(42U);
    msg.setDestination(50575U);
    msg.setDestinationEntity(197U);
    msg.value = 0.7755963378646187;
    msg.type = 131U;

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
    msg.setTimeStamp(0.21260271116079132);
    msg.setSource(5054U);
    msg.setSourceEntity(174U);
    msg.setDestination(19911U);
    msg.setDestinationEntity(115U);
    msg.possimerr = 0.5090259710223444;
    msg.converg = 0.4413853317906995;
    msg.turbulence = 0.4128680713562618;
    msg.possimmon = 118U;
    msg.commmon = 23U;
    msg.convergmon = 127U;

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
    msg.setTimeStamp(0.266293556106837);
    msg.setSource(4714U);
    msg.setSourceEntity(248U);
    msg.setDestination(63273U);
    msg.setDestinationEntity(86U);
    msg.possimerr = 0.028829051313249865;
    msg.converg = 0.9818625944086501;
    msg.turbulence = 0.8436076104255555;
    msg.possimmon = 90U;
    msg.commmon = 109U;
    msg.convergmon = 151U;

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
    msg.setTimeStamp(0.5445441112863426);
    msg.setSource(36962U);
    msg.setSourceEntity(6U);
    msg.setDestination(12998U);
    msg.setDestinationEntity(132U);
    msg.possimerr = 0.960762625862931;
    msg.converg = 0.3012157254404403;
    msg.turbulence = 0.955786244429147;
    msg.possimmon = 84U;
    msg.commmon = 98U;
    msg.convergmon = 61U;

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
    msg.setTimeStamp(0.8752808177464665);
    msg.setSource(63622U);
    msg.setSourceEntity(244U);
    msg.setDestination(46036U);
    msg.setDestinationEntity(24U);
    msg.autonomy = 0U;
    msg.mode.assign("BBCONEZPZCZXBVFWXDXOTRADMTCSPHNJMGDGXLLAWYDLDWUOVYIADVNMAEPCBBHCIMQTAHFXKTEULCRFQASIUJKIDCINVGTSFNGRCNEZNTSVRPDPZLAWTFSPCVPRVHXBIIUKYWMX");

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
    msg.setTimeStamp(0.6314639684764072);
    msg.setSource(40654U);
    msg.setSourceEntity(21U);
    msg.setDestination(37440U);
    msg.setDestinationEntity(20U);
    msg.autonomy = 80U;
    msg.mode.assign("FGBFSPLDHZYKANYMBZHAUWCAMJWAGGAPODRLUEMTTJBIHYDXTSNHUORSPIVNTOGEVDKCRWAFWQMUKRKPLKPPIPZMVXYUWSENYFUMKTZDSHQUYZKBMNLO");

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
    msg.setTimeStamp(0.09331749384623311);
    msg.setSource(7991U);
    msg.setSourceEntity(99U);
    msg.setDestination(57882U);
    msg.setDestinationEntity(174U);
    msg.autonomy = 76U;
    msg.mode.assign("LWMBNHXDQWVQWJ");

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
    msg.setTimeStamp(0.7851957099554754);
    msg.setSource(10097U);
    msg.setSourceEntity(6U);
    msg.setDestination(50731U);
    msg.setDestinationEntity(190U);
    msg.type = 158U;
    msg.op = 2U;
    msg.possimerr = 0.08148830485864078;
    msg.converg = 0.5901098921603055;
    msg.turbulence = 0.2502577154132559;
    msg.possimmon = 7U;
    msg.commmon = 39U;
    msg.convergmon = 153U;

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
    msg.setTimeStamp(0.4930738120253163);
    msg.setSource(49927U);
    msg.setSourceEntity(224U);
    msg.setDestination(20298U);
    msg.setDestinationEntity(247U);
    msg.type = 65U;
    msg.op = 174U;
    msg.possimerr = 0.42339473412547635;
    msg.converg = 0.8588464109549389;
    msg.turbulence = 0.21590720676349473;
    msg.possimmon = 112U;
    msg.commmon = 65U;
    msg.convergmon = 79U;

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
    msg.setTimeStamp(0.9275836056346327);
    msg.setSource(35042U);
    msg.setSourceEntity(135U);
    msg.setDestination(34141U);
    msg.setDestinationEntity(106U);
    msg.type = 120U;
    msg.op = 232U;
    msg.possimerr = 0.14950855180522016;
    msg.converg = 0.8439603553335765;
    msg.turbulence = 0.4800710895839726;
    msg.possimmon = 31U;
    msg.commmon = 37U;
    msg.convergmon = 119U;

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
    msg.setTimeStamp(0.5153760757639818);
    msg.setSource(41480U);
    msg.setSourceEntity(159U);
    msg.setDestination(5039U);
    msg.setDestinationEntity(11U);
    msg.op = 187U;
    msg.comm_interface = 78U;
    msg.period = 7946U;
    msg.sys_dst.assign("ADUGCJILHNJJDHAZJRPMOSZF");

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
    msg.setTimeStamp(0.9040300087241613);
    msg.setSource(24719U);
    msg.setSourceEntity(52U);
    msg.setDestination(32889U);
    msg.setDestinationEntity(204U);
    msg.op = 219U;
    msg.comm_interface = 239U;
    msg.period = 13115U;
    msg.sys_dst.assign("PUUFKMCPOW");

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
    msg.setTimeStamp(0.26582994254174286);
    msg.setSource(3054U);
    msg.setSourceEntity(87U);
    msg.setDestination(44704U);
    msg.setDestinationEntity(216U);
    msg.op = 113U;
    msg.comm_interface = 47U;
    msg.period = 25154U;
    msg.sys_dst.assign("MZEOGPHUBWDCJQYIPJYXPKDJYZALIWRZOPIGXWQBFZASYHVOPNRGQFNFFWXLPMRGLJTSUVBRMFOEZCFACCLMSSWRCHHAYAEYXTILBPSAWTKLTIB");

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
    msg.setTimeStamp(0.9759258721923901);
    msg.setSource(36644U);
    msg.setSourceEntity(106U);
    msg.setDestination(26935U);
    msg.setDestinationEntity(221U);
    msg.stime = 1926184361U;
    msg.latitude = 0.3095905224936274;
    msg.longitude = 0.6121801945647936;
    msg.altitude = 6020U;
    msg.depth = 43109U;
    msg.heading = 8677U;
    msg.speed = -22914;
    msg.fuel = 107;
    msg.exec_state = -4;
    msg.plan_checksum = 38696U;

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
    msg.setTimeStamp(0.8699021721997682);
    msg.setSource(55873U);
    msg.setSourceEntity(244U);
    msg.setDestination(19819U);
    msg.setDestinationEntity(34U);
    msg.stime = 864805312U;
    msg.latitude = 0.6734602023090044;
    msg.longitude = 0.488652679247787;
    msg.altitude = 13549U;
    msg.depth = 18324U;
    msg.heading = 28031U;
    msg.speed = 19133;
    msg.fuel = 19;
    msg.exec_state = -19;
    msg.plan_checksum = 44023U;

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
    msg.setTimeStamp(0.27959604967738705);
    msg.setSource(50783U);
    msg.setSourceEntity(55U);
    msg.setDestination(27916U);
    msg.setDestinationEntity(141U);
    msg.stime = 4118884756U;
    msg.latitude = 0.41536691932171577;
    msg.longitude = 0.1500777649206445;
    msg.altitude = 64530U;
    msg.depth = 56502U;
    msg.heading = 57578U;
    msg.speed = 15712;
    msg.fuel = -23;
    msg.exec_state = 18;
    msg.plan_checksum = 7313U;

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
    msg.setTimeStamp(0.1974857970580325);
    msg.setSource(48654U);
    msg.setSourceEntity(196U);
    msg.setDestination(51833U);
    msg.setDestinationEntity(23U);
    msg.req_id = 39707U;
    msg.comm_mean = 209U;
    msg.destination.assign("QYQUKDYOCSEBPSZRBHMOCFUZWLJIACCTKGXJGTWGQPKZFKDSOGBFOSNVPRVGWLBNJOAYLKTQXGBDLWZUYNPNCSWXGEQAVNIFLSQVYCXJVMQPHKIRZUYEUMCOTIPSEAGOHHZYEPXIHTLBWCTVFAJQIHEOXT");
    msg.deadline = 0.19523706575230704;
    msg.range = 0.6725835081176275;
    msg.data_mode = 113U;
    IMC::RestartSystem tmp_msg_0;
    tmp_msg_0.type = 178U;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("XKYPCMKAURUUFYDVVYBJCYZNTIWJVXLPUIFJYSLTJREYGHCBZZYCPSLFGCTSXZUFVBZTBQCWYEOSVEIIKIXPW");
    const signed char tmp_msg_1[] = {58, -26, -47, -88, 71, 94, 8, 63, -3, 36, -89, 75, 110, -6, 75, -89, -55, -98, -120, -45, 42, 79, -9, 28, 9, 7, 27, -65, -127, 36, 121, 27, -32, -127, -13, 0, -26, 13, -23, 25, 75, -62, -127, 100, 123, -56, 53, -41, -50, 22, 114, -19, 35, 66};
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
    msg.setTimeStamp(0.6231339308405455);
    msg.setSource(6504U);
    msg.setSourceEntity(233U);
    msg.setDestination(20751U);
    msg.setDestinationEntity(253U);
    msg.req_id = 9843U;
    msg.comm_mean = 87U;
    msg.destination.assign("OJMTIWRCBSLWQRZMKSKJLXFBBGVTUZCZDFCIODRBAEITOOTARSYUHRDPGMZWKZGJHCJW");
    msg.deadline = 0.6704351832801672;
    msg.range = 0.4197697816561854;
    msg.data_mode = 126U;
    IMC::RemoteCommand tmp_msg_0;
    tmp_msg_0.original_source = 24779U;
    tmp_msg_0.destination = 38475U;
    tmp_msg_0.timeout = 0.9441937313685006;
    IMC::CommsRelay tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.4251202899643167;
    tmp_tmp_msg_0_0.lon = 0.8609579586843493;
    tmp_tmp_msg_0_0.speed = 0.5999066114271506;
    tmp_tmp_msg_0_0.speed_units = 100U;
    tmp_tmp_msg_0_0.duration = 5082U;
    tmp_tmp_msg_0_0.sys_a = 27488U;
    tmp_tmp_msg_0_0.sys_b = 27626U;
    tmp_tmp_msg_0_0.move_threshold = 0.4721150496096238;
    tmp_msg_0.cmd.set(tmp_tmp_msg_0_0);
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("SEKWVEWLFBWCBIHLKTADCAIRBUOMOFHMLSKHMGKUDHVFQCOOUMNEDMFNWHTGZZKEZIDFQRVVUYORTGRSFVNADICWJKVHOPXJFQFLDDGPNHEPQAPQRZEUPTIJDRXJAURJIGYABWFGXEWKHBDCDYLXZLSY");
    const signed char tmp_msg_1[] = {80, -80, -62, -39, -81, -52, 115, 35, -33, 61, -70, 109, 88, 76, -65, 3, -106, 93, -17, 111, -64, -10, -55, -63, 39, 71, -1, 3, -42, 84, -49, 42, -19, 94, -82, -123, 72, 6, 100, -48, 112, -56, 80, 43, -86, -10, -20, 57, -90, -23, -108, -45, 56, -72, -24, 72, 83, 34, -46, -109, -69, -74, -12, 83, -45, 7, -121, 69, -53, -45, 34, -72, 116, 0, 45, -106, -128, -22, 1, 67, -16, -75, 34, 26, -20, -87, -110, -5, 99, 24, -25, -42, -121, -31, 61, -117, -40, 40, -28, 99, -94, -104, 112, -3, 11, -55, 37, -37, 46, -107, -114, 12, 14, 37, -27, 41, 112, -42, -103, -66, 76, -55, 43, -14, -102, 87, 100, -84, 6, 120, -99, 19, -93, -46, -49, -21, 116, -67, 28, -5, 4, 43, 28, -108, -10, -34, 93, 13, 61, 79, 26, 100, -31, 125, -105, -124, -114, 52, 65, 119, 43, 93, -52, 115, -125, 63, -48, 29, 55, -65, 82};
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
    msg.setTimeStamp(0.02826825847658676);
    msg.setSource(10107U);
    msg.setSourceEntity(219U);
    msg.setDestination(46821U);
    msg.setDestinationEntity(97U);
    msg.req_id = 17348U;
    msg.comm_mean = 79U;
    msg.destination.assign("BAFWUAELGSSFOUUFCQUIBDXSTTKQSZNJDEHOBYDHMOFPLFWBGEAPLCNZCKBHUADFVCQTORWUJLBIGXSNCZSKVYODJYJIRCMHCKKTTNVWBIYMGEFKXDZRYIGANMHLAEWRMIZQDPFXVNBKRXMXLPTDLHFVOGAONCYPGFZJE");
    msg.deadline = 0.2502175272282888;
    msg.range = 0.03166968727001762;
    msg.data_mode = 33U;
    IMC::EntityState tmp_msg_0;
    tmp_msg_0.state = 252U;
    tmp_msg_0.flags = 215U;
    tmp_msg_0.description.assign("XVBZCJCAWPECAHTVHEIFCSMKNENOGQKUGKAIPKGQTWDMESEBFZSJRUJYWTXHOQFCKDTGHQIYZZGYANCXRDNZZRADSUPPWPLLAVWAITRTHSDRBYUFZWOEUFUVOLJNCWSYCVQUGXYABLQOBTEFPEMTWXSXLQXLKJZRZ");
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("ZDLGHDHYKQFCXJHBDMSCRUWIMEGZRIUFPOMAEFJNPZJJFKKWVPIWHBCAWYBJGKYVZUGAWOIFZRCWSSQWQZGNMWZOAKFDKANEMYLYNHBFXKXSVOHYPRJJRPQJ");
    const signed char tmp_msg_1[] = {-50, 69, 121, -52, -80, 64, -3, -82, 4, 8, -64, 60, 47, 58, -92, -58, -109, 81, -100, -44, -67, 99, 3, -82, -110, -122, -13, 2, 100, 15, 0, 70, -71, -65, -19, 99, -128, 114, -44, 113, -29, 123, -8, 56, 15, -69, -46, -107, 121, -94, 29, 92, 68, 107, -108, -77, -72, 113, 21, 13, 10, 6, 103, -122, 12, -113, -89, 119, 116, 7, -79, -51, -69, -93, 2, 3};
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
    msg.setTimeStamp(0.011531369345119225);
    msg.setSource(59944U);
    msg.setSourceEntity(110U);
    msg.setDestination(5576U);
    msg.setDestinationEntity(87U);
    msg.req_id = 48590U;
    msg.status = 190U;
    msg.range = 0.7166799241313769;
    msg.info.assign("RCJBQWDJVTBASLIFFQBPIPMKJXKOARERQRZDXAGQWPGYRDCYQZNFZIPYYOVADYRQNHTTIJTIMFSTUPBDYZUNSHLONXGEHCCPKLHJQLNHGDLEEULDBAWDGVVSCVIATGWMPTWZJGCEKLOHRFIWSKYSFRQVBVWUFKYNDWZXOZMMEKJYGHX");

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
    msg.setTimeStamp(0.5266369725437092);
    msg.setSource(26772U);
    msg.setSourceEntity(121U);
    msg.setDestination(20367U);
    msg.setDestinationEntity(235U);
    msg.req_id = 58821U;
    msg.status = 238U;
    msg.range = 0.1994491774710545;
    msg.info.assign("LGRZFEFCPAFUEKUTCFKCKHLEZJOQXQMGXASBBVGJUPJNMLKHRYAWPZXCXDMZKSQIITMCAMTPDHXVRBIAVINAWLDYIMSENBNLCJHUZDUUQVPYGDFXNEWTWVISOVIYSQJRIBAAEHBAWXKYPTRZRRPWNKPOCYEVXFOHBLYWTOZHJSIXNEAOTMJULNOCNQOHDMPNKHBCWFDRZXTBHKJUJYODQGZ");

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
    msg.setTimeStamp(0.6063078490999895);
    msg.setSource(16370U);
    msg.setSourceEntity(3U);
    msg.setDestination(42898U);
    msg.setDestinationEntity(10U);
    msg.req_id = 9124U;
    msg.status = 22U;
    msg.range = 0.815604894045881;
    msg.info.assign("QLPLJPPBAXZENPXLQRKUUSWWNSWVRAYXRPXHOTUYEFCOQOHGTZEMLGLTJYVIOTOCGZXVJCOITBJAHJUWUMZDWCDNJTSVOFBCHUIVBRSGNYWW");

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
    msg.setTimeStamp(0.15851832170704483);
    msg.setSource(62409U);
    msg.setSourceEntity(159U);
    msg.setDestination(56366U);
    msg.setDestinationEntity(85U);
    msg.req_id = 19526U;
    msg.destination.assign("JBREULWAYCPROWAPPHQOFWTXTFPYDFBQJMAZSDOAMHECVNRRENBEECVAFCMTKZJNGWYEFSSINCPIBBGTRE");
    msg.timeout = 0.8312441589123256;
    msg.sms_text.assign("LHZQDKYJTABSEVQTGCBMQOOOERRWLIAAGDYSYEKWWZYFMFPU");

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
    msg.setTimeStamp(0.3843258124722718);
    msg.setSource(12835U);
    msg.setSourceEntity(215U);
    msg.setDestination(42304U);
    msg.setDestinationEntity(158U);
    msg.req_id = 61785U;
    msg.destination.assign("MVODPSATNGXNQFIVITQUVNLHLGZMFTJWNHELQJXDXYKCFFTSIRGRZXOG");
    msg.timeout = 0.18338517339838;
    msg.sms_text.assign("VREMLQJKBGUZJGCZLXYXNLQGWQOVXIBFVWLPUJDCKDDFAOFOIEUPR");

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
    msg.setTimeStamp(0.7360011591103753);
    msg.setSource(43384U);
    msg.setSourceEntity(34U);
    msg.setDestination(38059U);
    msg.setDestinationEntity(160U);
    msg.req_id = 55184U;
    msg.destination.assign("BRIYAOBDHKLZIMHTFCJXRYVQXZHMCIVVOCUEUAJLPYPDWDEWFSZCRRTHAORCEQMQUBWVNLUAJOKVSLIRZEVMSLGEKKSZNYYCPZDQFUICHIFRZHTLBUTUJECDPBQXDWZHTRUNDQMWAKAJTHYMSJPOBEGVXQQDYGVPLOSOALNQF");
    msg.timeout = 0.7598794111589451;
    msg.sms_text.assign("WHYVQKTGWTOIIMAOJCXQSIDSVUMYJAOAPIMBNKOHNIXCWPSEFXFRZBCZVXPLMJQJPCTPZCRRTHTFYWDOWKEMKRAJQXAKRWGYTHJDHTDCGQYCAYOUEGBNXURZEWYDLLNQLOGBEIMZVNIIDHUSMLULNFUVEMIGGORURNPACRCBPLFQGRFXYVWTVBWPQPKAXJEZJZGSNNBTEBJFSAATBUQEYSMNEHGFHSKOIDBWLVULFDJHMKUPYZZSDD");

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
    msg.setTimeStamp(0.5912779864759151);
    msg.setSource(49426U);
    msg.setSourceEntity(191U);
    msg.setDestination(16433U);
    msg.setDestinationEntity(252U);
    msg.req_id = 41558U;
    msg.status = 103U;
    msg.info.assign("TUPIRELKJNJRPCUTPMWMTYBIJNSN");

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
    msg.setTimeStamp(0.7713239063409582);
    msg.setSource(61542U);
    msg.setSourceEntity(47U);
    msg.setDestination(45552U);
    msg.setDestinationEntity(111U);
    msg.req_id = 17098U;
    msg.status = 243U;
    msg.info.assign("HDOMVGIGLEBIKNETWFDOVSWDJVJGIALTHLSNFKNQZENYPLQUQTZIRIQCPFVXNGQEMPCASRTMYIUKIVWU");

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
    msg.setTimeStamp(0.5002984741399576);
    msg.setSource(28755U);
    msg.setSourceEntity(102U);
    msg.setDestination(58171U);
    msg.setDestinationEntity(68U);
    msg.req_id = 60411U;
    msg.status = 72U;
    msg.info.assign("UMUPLZPHBMRUSEZPITFJDBNQRXTIGKOIFQAANYSAJUGRPXTTBDVSCNZWEEVDHZCJFFRXJTQJBWJLAFEDPCFUIAECAY");

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
    msg.setTimeStamp(0.4971474802143274);
    msg.setSource(53871U);
    msg.setSourceEntity(24U);
    msg.setDestination(18440U);
    msg.setDestinationEntity(224U);
    msg.state = 147U;

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
    msg.setTimeStamp(0.13958755369489695);
    msg.setSource(39815U);
    msg.setSourceEntity(185U);
    msg.setDestination(36327U);
    msg.setDestinationEntity(147U);
    msg.state = 17U;

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
    msg.setTimeStamp(0.7864790662626251);
    msg.setSource(56271U);
    msg.setSourceEntity(50U);
    msg.setDestination(27342U);
    msg.setDestinationEntity(153U);
    msg.state = 179U;

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
    msg.setTimeStamp(0.3110289408169473);
    msg.setSource(21621U);
    msg.setSourceEntity(59U);
    msg.setDestination(39529U);
    msg.setDestinationEntity(35U);
    msg.state = 133U;

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
    msg.setTimeStamp(0.9894347923868039);
    msg.setSource(40618U);
    msg.setSourceEntity(126U);
    msg.setDestination(35440U);
    msg.setDestinationEntity(151U);
    msg.state = 9U;

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
    msg.setTimeStamp(0.9536208755474346);
    msg.setSource(19862U);
    msg.setSourceEntity(231U);
    msg.setDestination(55231U);
    msg.setDestinationEntity(118U);
    msg.state = 173U;

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
    msg.setTimeStamp(0.329868796279873);
    msg.setSource(20411U);
    msg.setSourceEntity(118U);
    msg.setDestination(14597U);
    msg.setDestinationEntity(160U);
    msg.req_id = 29393U;
    msg.destination.assign("EZNPXZMXRKEYXGPZQHILNTKYXWKISPDOMKNIRNTTFXBZCLPKUSFWIAYAORXBOMMLJOAXHHGKACIBSDLAFKWYBSQUJQRVQZWLHETPGDFBUTEVAUAQJDZISPGVNECXWZJQIOJUUBHZOVMLMAJWELDOPVSNKDCUIDHNOCFGOPZZYGVUTEWMNHVLAUIHTQMODYTBKCCGYYAVCHJJJVGSQRHTBGJSLNWBEIRSDECBRKVFCGTFRQMFRXREYUPMNY");
    msg.timeout = 0.016062094925214487;
    IMC::Teleoperation tmp_msg_0;
    tmp_msg_0.custom.assign("DFJHJPZODLLFCCTGSJRZAYFMERFJXXMVIXAEMIQFZFMUSDPMKNPUQOAHDRBQJIOLHQKNYRCGKSHVHZYSNVQJAOKXCLXAPVUYKYCECZBOSLMEJGXBULARHNKRWZYDCINDQDXLZJFSWPOWZSKUEWNAKEQXNTNURIRYGWVDXILKDSBOTFWVCTQGUPQFULOMNPBWBVFBBEMINSGTHQBGLMPIRZTDV");
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
    msg.setTimeStamp(0.8740601529791314);
    msg.setSource(35232U);
    msg.setSourceEntity(107U);
    msg.setDestination(56836U);
    msg.setDestinationEntity(165U);
    msg.req_id = 35882U;
    msg.destination.assign("FMIHSVPRFWUGRUJAIHZXWZJDDJBJQWYUQILHBBHUYRYAPCOGCPNYOYGGKZQKMPTXVOCQATRFOFLDTGSHRJXUYORSSOQHBRXAWTGUXMFSMIIKUNXKSCLANWAFTSMQKZVVLDAETEMQTJ");
    msg.timeout = 0.06275835984130751;
    IMC::SessionKeepAlive tmp_msg_0;
    tmp_msg_0.sessid = 1988617582U;
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
    msg.setTimeStamp(0.35041390592338595);
    msg.setSource(49289U);
    msg.setSourceEntity(2U);
    msg.setDestination(25987U);
    msg.setDestinationEntity(30U);
    msg.req_id = 55761U;
    msg.destination.assign("ZDURTKZFWOGRTFTSJNYKSGHXPIKDVPSEZJHLCWINMGEXCGWAEWIBAKPVOQPFDZDUFHEDCFDVLDAMGOYZBWRWCQTKANCELPTBFMJULEPXJHFMHQXTNRXSBDBYNXSRQVOEOBPLQTJNUOYSYKSSZNZUFIVEBIMFNIUMRKFIL");
    msg.timeout = 0.6082268210624665;
    IMC::Force tmp_msg_0;
    tmp_msg_0.value = 0.1726575748861624;
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
    msg.setTimeStamp(0.17248947758839428);
    msg.setSource(30778U);
    msg.setSourceEntity(98U);
    msg.setDestination(14455U);
    msg.setDestinationEntity(235U);
    msg.req_id = 23414U;
    msg.status = 129U;
    msg.info.assign("OHOJUHCMZDPQEZFVWNKPTPBKERFLNGXPWCRDZUWUIHDNMJWLHUXWPNNSDZBHAQYXRSFTEZQSMQSGEYGEPYHXOIKQAMITCPWIGSGYVUDVWDUOIRCMQLIQMIIBHGTAZMBWAEUPKBYJZNOMADHTUAJSMNQGTOXRKVF");

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
    msg.setTimeStamp(0.05988171770507389);
    msg.setSource(62494U);
    msg.setSourceEntity(228U);
    msg.setDestination(10913U);
    msg.setDestinationEntity(239U);
    msg.req_id = 22791U;
    msg.status = 157U;
    msg.info.assign("NYRDZADCKURHWEZLZTYIEYODWXZWBGSHLPCCQIDJXJWEOFYNRJTEPMNBBABMOFOPEWMPMHFDZHWVPIQSQWWKHSXAMETNVEFMJOHJNFARCFMYWIEASAJ");

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
    msg.setTimeStamp(0.5690789904484002);
    msg.setSource(12263U);
    msg.setSourceEntity(62U);
    msg.setDestination(62239U);
    msg.setDestinationEntity(37U);
    msg.req_id = 58276U;
    msg.status = 226U;
    msg.info.assign("ITXIITNQIRCHLPHLUXMCGXOKKJBBQOJKCRATXRDVUUQJCPRAIBNJALOIHSLYGYQOSEXLBGAZUDRKDULXYAFZUHCATCMYEWRBGWQTSQNBWTPGGULJOPT");

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
    msg.setTimeStamp(0.1879637019310575);
    msg.setSource(46321U);
    msg.setSourceEntity(42U);
    msg.setDestination(1276U);
    msg.setDestinationEntity(75U);
    msg.req_id = 35961U;
    msg.destination.assign("POKNXZTNCPTMEQOOMJRHDWNBGCLILHNSSZFYGXJQNGEWJQKXBHKMXAHZHAIGFGMMVDGPYAFHXEVCHN");
    msg.ttl = 44547U;
    msg.type = 101U;
    IMC::WindSpeed tmp_msg_0;
    tmp_msg_0.direction = 0.9509726111921063;
    tmp_msg_0.speed = 0.8084651119651276;
    tmp_msg_0.turbulence = 0.8479284906044939;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("ONPRKUKNWCBJWWKFKPNQACTLTAZBRVMJMDSGODEHPCRUZNXLIILRSVAVIURZSASGDFSYZMBVCCTNVUHBNEMVPGEXTFEKAFNONOQYDVJDBGYHJEXXLHCBXGAWUKMRDEFWGQSWDLADPRHLIUCZQONMDLWIUPVQJTUBELMZXSOAMVHXJYVPCSEXOTTBFHOICKIQGQCMDJSXRJJTZZPEFYYSXRQRAOWQENHPGJHFITTK");
    const signed char tmp_msg_1[] = {44, 120, 111, -96, 28, -58, -35, 17, -80, 68, -45, 19, 11, -91, 20, -127, -76, -94, 119, 124, -4, 106, -105, 52, -101, -120, 109, 122, -2, -51, -128, -22, 79, -106, 91, 68, 34, 93, -12, -100, -63, 42, 40, 60, 104, 27, 30, 60, 103};
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
    msg.setTimeStamp(0.8659912407228801);
    msg.setSource(26388U);
    msg.setSourceEntity(187U);
    msg.setDestination(1153U);
    msg.setDestinationEntity(39U);
    msg.req_id = 44486U;
    msg.destination.assign("NGDAFXZRAJAEDPNCLMWFZXIIIEUTBCQUZBPLMPFKPNOPQTQXDIGSBJSYDJZNDHEAGANNQDMFLZTDHKNXBYMYXGKGRUWEWRWUQOIYHEORWSWQHZELK");
    msg.ttl = 60522U;
    msg.type = 86U;
    IMC::SessionKeepAlive tmp_msg_0;
    tmp_msg_0.sessid = 3110002184U;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("IHPKWBNZKBHLRGCDRSQGTMLCFJKCPHJXCDHGOKSUXOWAEIITVDJNKHMUFKPUINVUVOQBNDAMUNXCRBTPADXHFYYBOQMEDLQPGAHTTOZSXSLAXWRSYZURQVYCSMRNEUOERSODKYABKVLVWYSLEAZJCERMTGFIEQFBANEBPZOMFDAQGZAHLXCVRZJVMQHJWIIZGYCMTPJWTGNYQTEWXZYSHKLJISUDFXPENZGBTVBQLKIGL");
    const signed char tmp_msg_1[] = {17, 97, -127, 72, -43, 42, -123, 52, -90, 26, 63, 45, -42, -66, 124, -62, 29, -13, -106, 117, -55, -27, 84, 7, 24, -88, 108, -115, 109, 22, 71, 85, 79, -106, 111, -46, 29, 66, 50, 8, -96, -79, 122, -13};
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
    msg.setTimeStamp(0.1189069919280139);
    msg.setSource(31536U);
    msg.setSourceEntity(126U);
    msg.setDestination(11273U);
    msg.setDestinationEntity(36U);
    msg.req_id = 51245U;
    msg.destination.assign("TMFBSWAHSQCTLPEKQRKSMQKXOHLVVTRZXPEJAIXOBUURNLKQTETIEAPFETUXUXGNGQFRPCCSKZHZHVMHGOZMAGIYAJDZLRJFAZUYCFQBNOPSHUCIFYRDWBPWWDHTFNROEKIELVLVRMJATYWJUCBWKDYIYOUOJDJLHSYJBXQAVWKBYGHNPKEZTG");
    msg.ttl = 61617U;
    msg.type = 246U;
    IMC::DesiredLinearState tmp_msg_0;
    tmp_msg_0.x = 0.15953522494122885;
    tmp_msg_0.y = 0.7498704105964126;
    tmp_msg_0.z = 0.6826659884744463;
    tmp_msg_0.vx = 0.540615541507253;
    tmp_msg_0.vy = 0.39284610985444446;
    tmp_msg_0.vz = 0.19646716919101004;
    tmp_msg_0.ax = 0.8729776889240441;
    tmp_msg_0.ay = 0.592190945692476;
    tmp_msg_0.az = 0.5269612784336878;
    tmp_msg_0.flags = 51811U;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("OPOGAYIBUNJQQGLSJMANFNFYEKQEQIMNAKYQIGTPKJBTSYDYATXTKKVOLWXDBPLTWMUVDSLFUKMNLVBBCYVUZUIUHWVNFCGUKZHURXENVOSZLPFEGLARJNRTPYZDGHMBKWVJRDHBOJPGKQZLSHRFHHLH");
    const signed char tmp_msg_1[] = {63, 44, -84, -88, 57, 32, -22, 0, -39, -52, -106, 119, -91, -45, -14, 57, 1, -50, 32, -124, -109, 56, -87, -115, -128, 62, -75, 14, -106, 18, -16, -31, 85, -44, -120, 58, -28, -58, 24, -128, 102, -45, 19, -101, 7, 108, 40, 27, 36, 104, 123, -70, 21, -117, 120, 51, -91, 67, -49, 126, -15, -44, 123, 109, 65, -19, 77, -120, -13, 4, -41, -10, 53, 94, -55, -33, 14, 13, 55, 41, 100, -60, -13, 76, -96, 121, 77, 47, -128, 6, 6, -82, 43, -10, 108, 33, 108, -95, -53, -84, 75, -61, 45, -51, 18, -52, 28, -119, -67, -99, -92, -64, -82, -60, 96, 110, 7, -113, -85};
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
    msg.setTimeStamp(0.38052402138720354);
    msg.setSource(35966U);
    msg.setSourceEntity(199U);
    msg.setDestination(54519U);
    msg.setDestinationEntity(169U);
    msg.req_id = 7630U;
    msg.status = 194U;
    msg.info.assign("MSFWIIHGPPYVWSWBQCSFWLGWAGEBHZUFNYEMTMJSRECZKKOYNZCHNIXUNY");

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
    msg.setTimeStamp(0.6866457887050897);
    msg.setSource(13495U);
    msg.setSourceEntity(60U);
    msg.setDestination(58830U);
    msg.setDestinationEntity(123U);
    msg.req_id = 955U;
    msg.status = 57U;
    msg.info.assign("FSDAHZRUECIMCYRXLHUBWQZGHFRHRFZQUJZVMIOLILDWW");

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
    msg.setTimeStamp(0.6452355191276333);
    msg.setSource(35198U);
    msg.setSourceEntity(223U);
    msg.setDestination(4199U);
    msg.setDestinationEntity(3U);
    msg.req_id = 42275U;
    msg.status = 129U;
    msg.info.assign("ALMBYWUYYXBIGRBZQMPVIULGMWV");

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
    msg.setTimeStamp(0.9998085885795415);
    msg.setSource(26524U);
    msg.setSourceEntity(24U);
    msg.setDestination(28614U);
    msg.setDestinationEntity(147U);
    msg.name.assign("IHLCNAIZRZVVU");
    msg.report_time = 0.5120600161821579;
    msg.medium = 82U;
    msg.lat = 0.9643995956396922;
    msg.lon = 0.47058362745323157;
    msg.depth = 0.9210091188296106;
    msg.alt = 0.9685722221470943;
    msg.sog = 0.246105929335372;
    msg.cog = 0.7061404411367506;
    IMC::FormationParameters tmp_msg_0;
    tmp_msg_0.formation_name.assign("JMAANMZDWVRUTGERUGEMPHUCBVPMIEGAOMOSZIA");
    tmp_msg_0.reference_frame = 170U;
    IMC::VehicleFormationParticipant tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.vid = 35050U;
    tmp_tmp_msg_0_0.off_x = 0.404482222779056;
    tmp_tmp_msg_0_0.off_y = 0.29247961284319635;
    tmp_tmp_msg_0_0.off_z = 0.8521998279828275;
    tmp_msg_0.participants.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("TXZBLERZAPGDRBXJPGTMJSKGLNQBALOIFQTAWHKLKVTSAQTECLJCYICUMFUCYUUGLCHOVOVIOCXBUQWSWGYWGMEOQEMQNYFUFBASWNHXLUPIMTZHEDYNDYSCZORXHWLNDNTSXICKMPJVHOBNDPIWIBXZSQZETFHGBVZTTJ");
    msg.msgs.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.8656943383714556);
    msg.setSource(16130U);
    msg.setSourceEntity(174U);
    msg.setDestination(3277U);
    msg.setDestinationEntity(65U);
    msg.name.assign("QMDRXSCLZPWRLPITSAULZFWZCCCNXEJVSVYIXUSSIKPPZFWUVWFGAXDWLBMLYOLWFVMFDBMPFMIXYQYDOXQQAJVHHSABNZCOHNHULMZ");
    msg.report_time = 0.1662646105739115;
    msg.medium = 51U;
    msg.lat = 0.7639501977676805;
    msg.lon = 0.7793728137960568;
    msg.depth = 0.3572605388188588;
    msg.alt = 0.8187008636293077;
    msg.sog = 0.6373691519623839;
    msg.cog = 0.5747696276347058;

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
    msg.setTimeStamp(0.6719323205129454);
    msg.setSource(20244U);
    msg.setSourceEntity(196U);
    msg.setDestination(32701U);
    msg.setDestinationEntity(124U);
    msg.name.assign("TEYQVQSNRAVPTQDYYWHGAIIQDGFUDHUDTKERHJRTMNFQMIVZCOUGCGJTUUUKPYELKUMOQREGWMUFXLSSOAOAYWHKFKGEMGYWWPXTJFECWQYCLKMMNPRKWYAKPMJOIZPHLFC");
    msg.report_time = 0.10013164199027014;
    msg.medium = 49U;
    msg.lat = 0.5088869514621166;
    msg.lon = 0.4931750217219608;
    msg.depth = 0.4481303172429304;
    msg.alt = 0.29251657646538964;
    msg.sog = 0.1486747356112088;
    msg.cog = 0.13465698067197662;
    IMC::PlanGeneration tmp_msg_0;
    tmp_msg_0.cmd = 62U;
    tmp_msg_0.op = 67U;
    tmp_msg_0.plan_id.assign("MGAJNWCZBBJOOMKULBNCMRNREVQCNIBZSIRLPHGLPTEVTQQLSNVLAVVRKXJTPNAWTUKISSPBFGQNITMZPEAVVDWUQHXI");
    tmp_msg_0.params.assign("VKBVNKLNRKUEAKCOFUIUCWYKARCOLZAIXLLKWBPDBBOFRXULQAKPJIWFXYJTOYDBWRCYUQXBOTIDFJQNXPFEWNDGYHRVTLREJKXAANTSTUMCYSZOSZIPAHVBOGMBVMADJKDABZUGCFEHGZMZXEFHWEHSSUESZAIHMJLFXMFIVYJGZTNR");
    msg.msgs.push_back(tmp_msg_0);

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
    IMC::SatelliteRx msg;
    msg.setTimeStamp(0.6457613413664904);
    msg.setSource(22607U);
    msg.setSourceEntity(153U);
    msg.setDestination(30406U);
    msg.setDestinationEntity(152U);
    msg.origin.assign("UGQAZSIYEMAKWLZATOZOGWPDPIHELOFBYJMNVUZLDTKDTQODGIXNGFXZRKBFVMJCDFJOTSSGKIOWPFEKXUUJIHYGHUHCJLSVBWASWGBJRIGQKJUHCNLTQWWAJWXZVXLRAOBIBYMQRXDSPERVNRZTDNEPQTAUKQEXYAMHMCAFDTCQNFHZNVKOYXXULKLHBTLYRBJZCOHMVCODUNYGNVAYSYMFPCBSGKVDVSZXRQFIPSJI");
    msg.htime = 0.28976206264631565;
    msg.lat = 0.8263839873633989;
    msg.lon = 0.49516099620546894;
    const signed char tmp_msg_0[] = {24, 40, -21, -79, -72, -55, -44, 0, 117, 46, -56, 113, 29, 96, 102, -84, 66, 12, -122, -75, -80, 41, 67, 31, 113, -40, 31, 64, 94, -69, 1, 26, 63, 69, 115, -114, 1, 101, -98, 17, 61, -84, -4, -11, 43, 39, -123, -126, -8, -116, -33, -65, -63, 90, 95, 3, 94, 69, -72, 34, 63, -124, -53, -111, -113, 8, 26, 60, -18, 68, -1, -22, -66, 44, 30, 116, 0, 50, -64, -98, -41, -110, 23, 38, -30, -84, 123, 61, 27, 58, -37, 11, -74, 121, -99, 115, -42, 93, 80, -62, 15, -5, -81, -50, -96, 29, 18, -99, -40, 13, -7, -86, -40, 43, 35, -49, -71, 39, -29, -21, 79, -104, -77, -118, 62, -93, 16, 46, -5, 88, 29, 17, 121, -71, 123, -45, 58, 97, 100, -8, 1, -36, -15, -85, -51, 30, 29, -90, -65, -34, 100, 39, 24, -100, -23, 44, -8, 110, 78, -126, -127, -117, 43, 24, -105, -48, 54, 85, 92, -22, -49, 102, -80, -116, 105, -113, 26, -32, -123, -54, -91, 47, -95, 11, 55, -12, 84, 58, -33, 77, 86, 5, -109, -117, 115, -87, -43, 19, 68, -60, -110, 35, -71, 78, 72, -25, 105, 38, 22, -118, -13, 47, 96, 19, 110, 112, 41, -90, -97, 88, -86, 50, -86, -79, -16, 42, 18, -71};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SatelliteRx #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SatelliteRx msg;
    msg.setTimeStamp(0.34079363879549285);
    msg.setSource(48335U);
    msg.setSourceEntity(192U);
    msg.setDestination(7102U);
    msg.setDestinationEntity(215U);
    msg.origin.assign("HQLRMPJVGXOYUKESPZEKSXWZCDVJUYOJRBNLBBKSSAQYCCMCWLVTLDZHWPTGEQZSVDACSWPTMCKHQXHIKDMYGIOETBYHFJINOQMORXRYAENRCZGTLLPLWIPDGJSQIQWHFNTMHUOVWIAMKJYMFYBEPJNVGDXJNVYHGVALQDRIRQAPZMPOOHENSAGEZSRRBKTAMUNCFVAAJFRUXXKBUIFUSWBXUDBVDYLEHUKJKFGXQTCTO");
    msg.htime = 0.5987499384540194;
    msg.lat = 0.4885480647017435;
    msg.lon = 0.6086491673985662;
    const signed char tmp_msg_0[] = {-25, -37, 102, 117, -64, 118, 91, 94, 25, 69, -75, -46, 50, -67, 126, 114, 11, 16, -8, 42, 99, 22, -111, 20, -36, 14, -40, -8, -14, 105, -53, -39, 43, -57, 48, -63, -116, 71, -59, -123, -67, -91, -27, -34, -62, 105, -89, -62, 38, -108, 57, 69, -120, -8, 16, 115, -32, -34, -56, 52, 76, -60, -53, 57, -1, -112};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SatelliteRx #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SatelliteRx msg;
    msg.setTimeStamp(0.2246441213146112);
    msg.setSource(61773U);
    msg.setSourceEntity(250U);
    msg.setDestination(45167U);
    msg.setDestinationEntity(159U);
    msg.origin.assign("KSKQZTBZCARCNDRIZQYNINEEVNCHHXHAAKCGJMYFTQDXISOYUF");
    msg.htime = 0.40179150721626;
    msg.lat = 0.28050146494968387;
    msg.lon = 0.034036104855494353;
    const signed char tmp_msg_0[] = {-1, 35, -121, 44, -47, 123, -37, -8, -31, 112, 11, -118, -89, -48, 17, -15, -83, -37, -60, 37, -56, 45, -95, 26, 47, -88, 115, -48, -20, -98, -122, 41, 126, -33, -56, 10, -79, -125, 59, -76, -69, -27, 65, -10, 49, 74, -27, -21, -52, -116};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SatelliteRx #2", msg == *msg_d);
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
    msg.setTimeStamp(0.9073968527634215);
    msg.setSource(19516U);
    msg.setSourceEntity(203U);
    msg.setDestination(8290U);
    msg.setDestinationEntity(51U);

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
    msg.setTimeStamp(0.809644331282778);
    msg.setSource(39762U);
    msg.setSourceEntity(181U);
    msg.setDestination(53657U);
    msg.setDestinationEntity(232U);

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
    msg.setTimeStamp(0.7059429882763655);
    msg.setSource(41227U);
    msg.setSourceEntity(74U);
    msg.setDestination(33336U);
    msg.setDestinationEntity(168U);

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
    msg.setTimeStamp(0.03408313618626735);
    msg.setSource(4210U);
    msg.setSourceEntity(114U);
    msg.setDestination(4752U);
    msg.setDestinationEntity(96U);
    msg.plan_id.assign("VYWUHUNPKEVFIDXXBFFIJKNQWOCSZHXZILIGJJMBZMWZNELYTQDCRLHOBVJIKYSIMASENSATPGBYVHWFTMPULIKHEURVDANUZAHCPFQGJEIIUPWCZQW");
    msg.description.assign("OSTWTCJZDNDNVOFCAJJAKXLDTZUAOCBRWPZAUMKIJADHQEHVEKLLCIGRB");
    msg.vnamespace.assign("NEBXZSNQLQPZLGVBNECAFSDZJFWFHLQLUSLGJJMVNICCRVMAYA");
    msg.start_man_id.assign("BHRUDHMPVDARSTJVPWXCDIYHUYFQNWRMZKSLDQULLPGVBRBIHCZFGQOPYJQODKHOCDOJCZHPACEIFPK");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("DQIDUOEKUVFSKTNDSMXOYAHSSZBQNPLYTHGGGGZLRDNFZLHGGHWAXNHQFTIWAAJBWNIRLXZETOEJRBBPYXUKCFVVGXU");
    IMC::Dislodge tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 18475U;
    tmp_tmp_msg_0_0.rpm = 0.15456362741577256;
    tmp_tmp_msg_0_0.direction = 133U;
    tmp_tmp_msg_0_0.custom.assign("ECNONERFONFALSTYKYOPQALIHDXTGGRZGNRUHLULCGGMENWJTKPCCBLDAAFIIDHYNBWMXHOUXVODMVTQXMNIYSUTGRUODBVVIUVAQEQNOZWQBLZSEKMFSZPVFXTLJVMXSFPHOKJHJUSZLNWWIVSOACAXFJPFKVACRBPCCIJBHKXBWQFVUPTHDDMEZXFQQWLACLBRGWSJPNHPJBYBUKDJMXZMZZKKWTTGYIGR");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::FineOil tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.7530347522788843;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_1);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::TCPRequest tmp_msg_1;
    tmp_msg_1.req_id = 41698U;
    tmp_msg_1.destination.assign("YGYEUTVSQXXKDIAXEKWNBCSGMSPUZOVERPXWKMVAHJOHNZYGIGKMHAPWJJKKARWSRQHMYVFXWXTAFNHFGTUKZOCENVHDBQWPPDPKTOYNZZYFRPRMJFUQLFGLDDOWNMMQBXERCHVPYUWDBQCJJFICTOSHLSMCSINDLTJNYMIIRZQUAQJAUH");
    tmp_msg_1.timeout = 0.7571562253847913;
    IMC::Turbidity tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.value = 0.823676853616415;
    tmp_msg_1.msg_data.set(tmp_tmp_msg_1_0);
    msg.start_actions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.7887798074998007);
    msg.setSource(54963U);
    msg.setSourceEntity(28U);
    msg.setDestination(28023U);
    msg.setDestinationEntity(15U);
    msg.plan_id.assign("HEIODVCWQKNMHAKUYBZYDUCVKIXLLKMGGFPJYVRZMSKDESEOYRJZABGBNVNBIFJPMCJMEQPADRQABYEZBUBCITQNASJWKBGOWSNUKYRPLEIYRVQZODUVAOFQAMGFTXKLMFPMSMHIZTRO");
    msg.description.assign("QBLPINMLOLMAFZACOEMZNHXXMFBQROKEQEVQUNOWTDGHFDSUKOOJPJFOYKAUOACSDEVWFXXKHBGUCIMIVVQRCGAYINNGQZTNPLWZBZVORVJZGSINDFRPTPRXBJISTYXGLOMUSCTSQYYHAWXDEDETCRZDQLVUPWCCZBRIWXIWZKAGTFJYG");
    msg.vnamespace.assign("EXHUSEYWJVKQPQAZMFXJYZPKLWKORGISJSRPQYQAACPLWZYDCAPTNGPMUROKMGLJBHSMDBUFJKEVNHJBFOGGCDXIAFXSCDROKRVLESMFHTZUTXROUMBLEKUYHUVDPGAGROTNTBATWEPCYIWLDJKIDHIHSAYFXNBNRJSQILMYSEHMKCNABPQGVXENIDMHFXLOBSZWQZJFVIXCT");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("GHUJCIINBWJXFHCRAQKCKHMAIXUHCTRIIQTSAPLFZEXGVAHWSYQLRQOSELPOJMKLFNNRRBHULXFEEMAWBUKJKDEKAZDEBZPKHIDNCSEEVXLVBUWUZDIQIWCJQVSCFCFTOWHYOXSOMVWJVOFTCWGYTRJYJFYIAZDBJZPIDBAMPZOMSSGXPUTELGYPLZMVRONAWNMGOURPVKNGYYMTOXNT");
    tmp_msg_0.value.assign("DXMWBTCJRGEXACYJWFKDZBTZXVYIXNJGLLRJTXCISNLAMGORLACHYTEHBUKSYSWSUBQVNTPLYFEICBBLWAKLBYEUJOGZAVQHPZZGBZNXVHKJFXAGTONMIXCWUGIQMVOIIRPCBTWTYOFMRTSLQDYDZRSDUHFHENMXMFUJSNJKRRCPPDKQGGQUCYBGEUKJVH");
    tmp_msg_0.type = 16U;
    tmp_msg_0.access = 58U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("RWZJCNRIHSHSGJZSFAKLXMVZJNJYPRQFNXLIDULAVPOJJWBCKLECRTMGYBYGAMTWTVYIZHDXSQWJPTDUMLKOLWKXIUNBAYDPXYBEEFMVCKXZLRHNPAUMSZC");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("HWHVDEUUTPBSMRFWLSWYUUXQSSZDQITWMVFZWKJEOQGDKTHVTWBTCORIRARBKNBXHKFRHPXESDLDPQWLTCSOTKUNQFCCAYYTYRFNXMMOEWRZNQCYNQVMIUEUERZBMLVAGAZVSVOZDNBHPJHNXDXOPAJZEGTJFOCHKKVQHYFPBILIPLGBFXQXQFXYCAZOVOJBJLALRKBMDJRXJDGJDESEZPKNN");
    IMC::PopUp tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.timeout = 35539U;
    tmp_tmp_msg_1_0.lat = 0.9709304378586086;
    tmp_tmp_msg_1_0.lon = 0.14144837312111602;
    tmp_tmp_msg_1_0.z = 0.38937992694823054;
    tmp_tmp_msg_1_0.z_units = 59U;
    tmp_tmp_msg_1_0.speed = 0.7812084653862165;
    tmp_tmp_msg_1_0.speed_units = 58U;
    tmp_tmp_msg_1_0.duration = 3457U;
    tmp_tmp_msg_1_0.radius = 0.3069950889891606;
    tmp_tmp_msg_1_0.flags = 227U;
    tmp_tmp_msg_1_0.custom.assign("JAJBWUYAKBBX");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::DissolvedOxygen tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.value = 0.6857247158258424;
    tmp_msg_1.start_actions.push_back(tmp_tmp_msg_1_1);
    IMC::CreateSession tmp_tmp_msg_1_2;
    tmp_tmp_msg_1_2.timeout = 1809051537U;
    tmp_msg_1.end_actions.push_back(tmp_tmp_msg_1_2);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::PlanTransition tmp_msg_2;
    tmp_msg_2.source_man.assign("ZOFJPGMDHZNCOGQJZCUTWTHJNGHTWFTEOBWNLXRMGBKANXJEXZCYQTANASJJYQPMIRYKYTPWLXDPIWFTQFRLHYSEZMGUIEPHXSODQRPOFINRLDISUQBKNMQUVOKZBROKWEMJTHVKCFUSGJSGMGEBUBABAXXRIIWLAURCHPAMCOVVEGKPLIZFIVXSMDXHOWNYFAEJOVWBXMZHFDLUBCAVQLKYELZY");
    tmp_msg_2.dest_man.assign("XWTRVABTIMDONWIVTNIUOUSZUJHKJYXEMEHMQREVSDKCQCAYKNCQARCUCYGKVPESCRGNODZRNOKWPBFVZACALJDBTUOSPFUVIASWHMRJOXWXERFSDMLDUNYJDMXYAYPNGJTPYWOMDSKZWVQXZLFMQIJWE");
    tmp_msg_2.conditions.assign("KKEYLOELQKCPTMOOAQYORIQRNNWIMLOSMPBZHTMEDJODGAAQKEWYILNZGRKHFWBCIRWPXYGFHQXCUQBHJHDECZJAMWJJYMMWSIONVNASWQDWRXNZDETNULLCXAGHPYGDBCDVSDTZARSJAVRVKATYICZTIGYVJKPCUZGZPADUFTUBUL");
    msg.transitions.push_back(tmp_msg_2);

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
    msg.setTimeStamp(0.7717486537754373);
    msg.setSource(46091U);
    msg.setSourceEntity(56U);
    msg.setDestination(51110U);
    msg.setDestinationEntity(162U);
    msg.plan_id.assign("NVLCMIWDGFHRQMLGLZJJTWRFJHTRCFQHQPBWFSTQIABMIGUJYIBPYRKULXKZEPCUXMVGNHMHNUOCWXVQEBAHFPNYMVYCUBKSENEQHQIWDRLWSYGWFMVAAHEKKPBTJSHKEAHMUANRIZOOGPGBASJUVFOTDPLPOVLJVSAOPTUCIXSEYZDOZZKNQXSICBAEJKINZWWBQRVCWMYLMEJLXDVOZKYAJDQBUGZRTSPYORGCR");
    msg.description.assign("TZSVFWEMMDVYYCHHSBWGKGDGNIZRXXQIMKBZCJGWHWFXHVNJNQFIFWQXKUFLYZPXCBUAVAEWABKEGUSLTGSRUNHZLQDMMJLDHJRKVDCALRTPITTMOTZXPVBREGPYLKQRSRNPZNAPHUGLYFIJSNUHXJNJIMOLNVKTFEOEWWMPOXRMXSOCZCQSDNYCUOUID");
    msg.vnamespace.assign("QAYLCJPMGOQ");
    msg.start_man_id.assign("PKSIFVEWRZGYREZAOPTCFWLZTQPAESUMLXYMDRSCWMBRZLSYMGRWHEKPHNMLKOTWNBTWQQTAJGNWUAZNKOVROTBDICGHTXBQILTCFYDKCFEXMXVHZQHUKWYLYQSOXGGVXEUSILSSKGQJDNPBVDVCQPIUXGYLUJUATSQRYADMJHPFKFBLNBUJBWAVVNSDXKPBTUNOZKUBCYQJMFOIECMPGXCOAIEIEDA");
    IMC::PlanTransition tmp_msg_0;
    tmp_msg_0.source_man.assign("XNFKTMOFEJAPIFRFLQQKWCVZXCDRMTAWDRGHNNZUDJTUXYRGKQXOVYTZXNKQZFZKOXAPPJSYDOJKIMHNSFXDPWWLIRDGVFIWMAWUEGMRUCOIBBYKSJWOHGBZNRCXYJYFDEZGCTPUORFPIAUEPDBTIULZSUGVOCOMO");
    tmp_msg_0.dest_man.assign("FBBAKXKZFABAC");
    tmp_msg_0.conditions.assign("GGUHHGVVQTILBTMXBOIJQHAYORKASWNZDCPBNYMYZAKNNUQSHDDGSKJSQDQWAXPLGAOZMJKEPXHERTGMSPQMDXYVEOAKXIVXWHKDEHGFLQYSCOJLFBTSEUFOMWUBYPPLAXGINZKVTEDYHFZMPTSORSOWFGTTQVOBRCYIZJFUCNLYFLNSKBNQBPZDD");
    IMC::DevDataText tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value.assign("LEMJQHXBZXIKHFWPFUZSZSNEHMIXNWKDDBCWEKHQURYDLTCXGDVVRSMURLNZGNOISUQBAYIVAEFGYGPCPOZXWHQSIAWSFNYMAPCLBVIUANOHKGVFCGPYUMJVTBOMLZVETYYPNODXOHDECLDKDGGPVCKGXVEZQCQOJJIIRTTTVBDHOUAFLWZUQZNPGI");
    tmp_msg_0.actions.push_back(tmp_tmp_msg_0_0);
    msg.transitions.push_back(tmp_msg_0);
    IMC::FuelLevel tmp_msg_1;
    tmp_msg_1.value = 0.8292431126925437;
    tmp_msg_1.confidence = 0.3872440922736359;
    tmp_msg_1.opmodes.assign("QMYHCDJNKWHTQWDHYMOGCTXXIJDEQBBBWWLYPMZQQWLYZRRGOFYYFHHOGXOYAUJTLRSGLZMALUCNIFWUNTFSFOPSETZBEOCFLPMSTEEYUDIOQXCSWPWNQFJWIRRGZIAJCEBBEHGAFYYNJDUJHVORRVXZKEVNUNLTI");
    msg.start_actions.push_back(tmp_msg_1);
    IMC::GetWorldCoordinates tmp_msg_2;
    tmp_msg_2.tracking = 247U;
    tmp_msg_2.lat = 0.4221494769932892;
    tmp_msg_2.lon = 0.11372589751561712;
    tmp_msg_2.x = 0.14815095120006128;
    tmp_msg_2.y = 0.6879536855501113;
    tmp_msg_2.z = 0.35750644534759146;
    msg.end_actions.push_back(tmp_msg_2);

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
    msg.setTimeStamp(0.6003929934474428);
    msg.setSource(33520U);
    msg.setSourceEntity(209U);
    msg.setDestination(25542U);
    msg.setDestinationEntity(253U);
    msg.maneuver_id.assign("NCZUYTWUSDNGWJWHNKDTMTRBLSMIDATLDPLACHDNIWPPRYMZKZYQOJGHBQEBIFAAUZUQRRUXLXXUIQAMIKIKQKKFFOWGWZKAYCGDNHYUQHOQBFOJHALYLIVCFHGWSEUOZOYVSJBEMMCOWBSVRVJRXZIJCESWCANJPFGEPZXWXNPDVONTDLMBXDNXJEIBFQIPG");
    IMC::Drop tmp_msg_0;
    tmp_msg_0.timeout = 8520U;
    tmp_msg_0.lat = 0.32253008692070084;
    tmp_msg_0.lon = 0.4979749947198584;
    tmp_msg_0.z = 0.6617288281656367;
    tmp_msg_0.z_units = 65U;
    tmp_msg_0.speed = 0.345287870661943;
    tmp_msg_0.speed_units = 165U;
    tmp_msg_0.custom.assign("PRZKINICDJESNMCBWTOCGZAVVBDHSKHAHYNJQ");
    msg.data.set(tmp_msg_0);
    IMC::PopUp tmp_msg_1;
    tmp_msg_1.timeout = 52552U;
    tmp_msg_1.lat = 0.33626765188981544;
    tmp_msg_1.lon = 0.35343074851322476;
    tmp_msg_1.z = 0.16357247194788016;
    tmp_msg_1.z_units = 227U;
    tmp_msg_1.speed = 0.23467549963351664;
    tmp_msg_1.speed_units = 1U;
    tmp_msg_1.duration = 22686U;
    tmp_msg_1.radius = 0.11656139269638577;
    tmp_msg_1.flags = 50U;
    tmp_msg_1.custom.assign("WEWNZIZCZYMBEYXLPKYBVUMWYUWVFQAZRXLTKWGCRJQCWTSZLJHSIIBTZYPKQIHRFSCBNVJNOFLIRVKALPFXQMACMEFYYNTMFXDPIOQIBXVNAMXAUSXKJUGOQQELNMJTCZNGXJMSDBOFIDKFKPVCSXKHOUGGHNHU");
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
    msg.setTimeStamp(0.11362167405538959);
    msg.setSource(43918U);
    msg.setSourceEntity(252U);
    msg.setDestination(58249U);
    msg.setDestinationEntity(190U);
    msg.maneuver_id.assign("XHNLRQXQFYIPUHJGMAUENXDJOQECGQKFIXJTLRAWCBZOGSKLHISYCYSVARWTRBHUCDRAOQMYFMCAJVPBBHPKPWMTAUTGBQZHPMOXXVCEUDKOVNTKUPHOMROWBUYLKBDPDKEZSEXZMFIHSNTPNDOIBVVXZFEVFFBQTKVLIWCGUXWEOZLPFDZGFRNKUGYZEJLQJHXQKAANFJYNLWBCVRVRSWGMSEIIDYZMOTQRTGAPJDDSUSCWHTELN");
    IMC::VehicleFormation tmp_msg_0;
    tmp_msg_0.lat = 0.525592303262289;
    tmp_msg_0.lon = 0.7227146420935089;
    tmp_msg_0.z = 0.4142157064823787;
    tmp_msg_0.z_units = 184U;
    tmp_msg_0.speed = 0.9400014869151748;
    tmp_msg_0.speed_units = 115U;
    IMC::TrajectoryPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.5916493771187495;
    tmp_tmp_msg_0_0.y = 0.3730246919758252;
    tmp_tmp_msg_0_0.z = 0.25547710934898893;
    tmp_tmp_msg_0_0.t = 0.5871435106367066;
    tmp_msg_0.points.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_time = 0.4693062058619071;
    tmp_msg_0.custom.assign("GVXOSGDYLIVMUBZDMBJAPUYFLHTNBIPEUFCTEGXEAQNMMIXXEOTDAWTJNPVSSFJPQLZPTOZRKXZTNPGHKGFDVMBEAEYTYZYWXKWAFMVZCBJWIJANFURFZSWQLAPCMUQDQHNSQISVMMMIFPQPLFJWBIQJEWSDNCTHUKHHDJYUVBRLYIDHEUXRJLGOKZHROGSSXAWRHCURI");
    msg.data.set(tmp_msg_0);
    IMC::RemoteActionsRequest tmp_msg_1;
    tmp_msg_1.op = 1U;
    tmp_msg_1.actions.assign("SPYYFUDXZADNJEZJETMNDQFJPXQQPOH");
    msg.end_actions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.9982797803318365);
    msg.setSource(1156U);
    msg.setSourceEntity(156U);
    msg.setDestination(29765U);
    msg.setDestinationEntity(176U);
    msg.maneuver_id.assign("JUPUEHMFXMSYZPRWBKXXQFVANJWAKREHVXYSCCUVINKTOTHESPZULZUWZRQIZFKUSXSXWQDIMRCCNZKYUDGMKLFZHYQR");
    IMC::Elevator tmp_msg_0;
    tmp_msg_0.timeout = 59309U;
    tmp_msg_0.flags = 85U;
    tmp_msg_0.lat = 0.4248597004306408;
    tmp_msg_0.lon = 0.1950710795314099;
    tmp_msg_0.start_z = 0.9405750550176163;
    tmp_msg_0.start_z_units = 69U;
    tmp_msg_0.end_z = 0.6232357009765273;
    tmp_msg_0.end_z_units = 149U;
    tmp_msg_0.radius = 0.6220483097750934;
    tmp_msg_0.speed = 0.4139770616906505;
    tmp_msg_0.speed_units = 207U;
    tmp_msg_0.custom.assign("KSNZFYTPQUIRDZGAPUTBBSSCQGKFIZGHWKGSMNARNTFNVJYPGVITWSDKOWWWOEZSZAAVWJTESQDL");
    msg.data.set(tmp_msg_0);
    IMC::LblConfig tmp_msg_1;
    tmp_msg_1.op = 17U;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::LogBookControl tmp_msg_2;
    tmp_msg_2.command = 94U;
    tmp_msg_2.htime = 0.1950357400596714;
    IMC::LogBookEntry tmp_tmp_msg_2_0;
    tmp_tmp_msg_2_0.type = 27U;
    tmp_tmp_msg_2_0.htime = 0.8791736509671042;
    tmp_tmp_msg_2_0.context.assign("PYETEFJXBWZRENDTNMGQYGMFPOBJRSNIEZTFSARJCVXZKWYHPXLRMAZTXPGUCCIOAQFUYTOWGQEWTAHOLBAYNKVLUIYSDHQOPVYAH");
    tmp_tmp_msg_2_0.text.assign("MSBZRFRLVKLAQJMKXBRPVHEUBNACFYMZWTCLVUHUGNCRLJZLDNGXWRGSJSWBIVWINPUIOINDRQZQAIAUUMZQATZVWGUHGYELXKWTYXVTMQAGDDOESRDCSASNNSRVWQXPELQOKMOWHZLXYPVSXMZDBUFJQWEWTJJFDKYTVOPKIYZEOHKAJXDEYCEVXYGJKTUTFSTBPGZAQHEPPFRNJFDKDLNBHYCCHKPOCQEAOBBSMXLFHNCIMMYIPGBCIFIJ");
    tmp_msg_2.msg.push_back(tmp_tmp_msg_2_0);
    msg.end_actions.push_back(tmp_msg_2);

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
    msg.setTimeStamp(0.07388025731053338);
    msg.setSource(11874U);
    msg.setSourceEntity(167U);
    msg.setDestination(11101U);
    msg.setDestinationEntity(116U);
    msg.source_man.assign("JSULZWTMMQAPRAIWTTOLNMEYZFWGJHTSSLNYMGIUPZDJSPIKICOFLDKBWXRVEWJDFESKAXADJFOOCMBTYMKEKRZUCXQKFTCLBHISYVCNIVBENKUJURDXH");
    msg.dest_man.assign("AKMUVNNGAMPYDWOZYTIYBZYSDHIQRPHNBIXRJEVFSXCWNBHIENURPPQJBRDUJHAYZQWKNTMRFCYKUVELJIMARUDTFKXZLZJLLAGFDXXMSWEKVGSEEOGHBCQHGXWGAAPVCFPWQTCMBLREILVEXH");
    msg.conditions.assign("ZOTSVCFLRSHYORSBVMRWQXBQGEMDRKXNKCYUJOQZRMHJBIJYHZAXNGWNKYDUZGWNLCSBZAPXQAGPMVWRGPIFEPHOCLPKYNLWLIHGQYDBGZKQABTTNILJDAUTYZSCSNKXIRJMSXGVHKWSUJEZWSUBIHNHAUICEXCMUAPFOFAVTPMOPZGQEHANFRWUDBEEF");

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
    msg.setTimeStamp(0.8377793204022701);
    msg.setSource(63558U);
    msg.setSourceEntity(194U);
    msg.setDestination(16158U);
    msg.setDestinationEntity(156U);
    msg.source_man.assign("QBXFIXCEYGBIERVJTBTUEBHIMGWKYTZJUWNECKVGGYKODXZRQOADFYQNJRQUHGGPWOXHZQTHMKQBMULVAWDJQOQMAKV");
    msg.dest_man.assign("RQVGLJEHCUJPPSSFEDUNUMFLOQHWOFBDNKDEIXEPUZWGMEXCBHXQRXAKPMNINNOTKZBUTAWHKRGQBHJRVNCPFWTZVOSACKZQVKIUYLSETKBKAWRYZLQXWDMDNMAICIFTTYAVERGJBODCYZLPBHLLACGFWJJZQGAIRYIVRPTMPCHPIXWIHHBELXVGNOYFQAYOVUFDUOYJJTJFXUPDVDGYEQFCGYZMEMDCTRSSSXJKSSLWKHOMWBNLQ");
    msg.conditions.assign("NRRGITFLXISZXHIHMTDALDWFKSEWRNNPUSAVYGVDMYJMFUGQNQEFJOGZZLPXRACKZKZZSNHUYGBQDGAGTNKJOBZZJRCHHITBHVYNMLGVLZCOSOBUUFWRKRDEVDSQETLJFQTRLIQCMJHEYCHNKDHEBDCEBVEQPXQPFXPNIMANZGUVMLJXKBVUPYPTXOSBQCKOJAMXJVAL");
    IMC::SoiState tmp_msg_0;
    tmp_msg_0.state = 63U;
    tmp_msg_0.plan_id = 52132U;
    tmp_msg_0.wpt_id = 158U;
    tmp_msg_0.settings_chk = 2912U;
    msg.actions.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.7085196924047157);
    msg.setSource(56903U);
    msg.setSourceEntity(77U);
    msg.setDestination(63534U);
    msg.setDestinationEntity(148U);
    msg.source_man.assign("WJFKDLZNNBYZRTXZKWCZMHVDUDYSPFBSTYMGFNVTJOQYHJGBKUTDGJCSSNWHOKCYQQOVSUUEFOGBDUAQLWPYESTOKKURRLEGICEAHVEQPNNUQDCPABIKJIBMIMFCTVVBXSDAHPLXFMNCCWROAGVEKQFXRFEWZJUYTELOIDQKSWPXLNIAHAGITGQHISBWXWEJVAPXAMXSOMUZRRFRFOZXBHMAV");
    msg.dest_man.assign("NTCNOPJSBEAKFOLFGGSKKNUICGMBBMZYQOUCVNHWWJFDYFOEXTPURNLOGLABRYCMKQQAAGZXRZEJETNKZUHLSYKYRCIPODIQKXELTMUAPVJHAYQEIHHBBFHBPJQOELRDVKTSGCSGAFCMUYOIFWHHXNGDAUFYMLVRUIDWVEXFYWPWDBWVYCJHSRSTF");
    msg.conditions.assign("PTNSCFWYHWNHPCZAZLJEEARNTOFBUDJFZEYWDJUAMMQIKVNCVAZIROKFUWCVXULNWAFSNCNKUBPHMSEMXGAUTGDOUFXNWHSGHHKHPIOAQRPJNMTJAMZRBCVHVWDBDDHGTLQLWBPYRXSKPMXXQPOOYOZLXBNLRQJSZEGIBFKIEDGXZSVYDTFIIKQUDWVPYFGCJIEALLBTIUQMERXTVQVWYMCGYUSKXBQODMBSJKFIOG");
    IMC::CompressedHistory tmp_msg_0;
    tmp_msg_0.base_lat = 0.5696017579984759;
    tmp_msg_0.base_lon = 0.6162013462013055;
    tmp_msg_0.base_time = 0.6134609786042499;
    const signed char tmp_tmp_msg_0_0[] = {95, 118, -98, 3, -61, 125, 52, 78, -62, 3, -19, 55, 60, -26, 119, -128, 114, 88, -125, -27, 82, 19, 54, -123, 102, -21, 28, 109, -108, -16, -99, 76, -96, -65, 63, -90, -12, 116, -4, 87, 100, -62, 20, 51, -72, -72, 61, 103, -82, 17, 120, -91, -34, -31, -37, -9, 38, -109, -53, -20, -89, 53, -65, -88, -100, -124, -19, -59, 47, -49, -95, -120, 51, -29, -58, 50, 72, 51, -50, 100, 122, 96, 94, -82, 126, 3, -82, -86, -26, 24, 125, 68, 83, -63, 86, -33, -124, 86, 120, 53, -20, 110, -46, 48, 25, -117, 106, -53, -5, 11, 23, -89, -21, 78, -98, 110, -98, 46, 1, 41, 21, 46, 104, 67, 55, -72, 70, -78, -39, -7, -57, -107, -48, 18, -2, -119, -31, -35, -87, -41, -75, 116};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.3779027975656428);
    msg.setSource(41924U);
    msg.setSourceEntity(203U);
    msg.setDestination(59699U);
    msg.setDestinationEntity(243U);
    msg.command = 48U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("KKOUAXOZZHMPHITMKDOQCIQBSPDJKBWPKFWYAVSHPJNNHHBADFNROPVCJISZMXMZDEPESXEKMTRXSALVOVHCXTGFAVLFWQJEMYTYKRWBXRMWQUECDRMWRPJCZRUIUCAUTLFJEYHRLDFONXGKNODRRWBSYOVFHIJNEGSHIZBLZOAQEQBAPGTLQGXVLBVWUDDBEAQVFIUTCUQMCYYWZYKIQUNPIXCTDJGEGMIYTHLLGWNZOLGKNSCVXZPYFNUT");
    tmp_msg_0.description.assign("ESPTUWFDKVYIUFBYTCJKCQISQVVSYOJNOFTLQAADGHLPTMOIYZUECRHPCKGHXLIAVVJFZGVUBRPBKROOCXDXMJFYXHDWWGEEMEBADNNZRJLDQMEYZSFJNWCOYIFTRZDKMUPTRLMXBHZGPWLPXYMNIFEKLSRPYSWSMQUSFJAQVYUNLCWAQAAXVHAHGSAZDLNWJPRERMUETBBQHDOZGFTRPXEGBTQIKLKNBSIQZGUOCUWXHMXZBODOI");
    tmp_msg_0.vnamespace.assign("CGUTRBZVXTBKDSNSAHKJJXQTFZVHSIVRAYWVMMGFHLBACTSYISQNAUOXUREACEJFJWHMUZOURYKDDWEXXXGLJEBK");
    tmp_msg_0.start_man_id.assign("MNHXRVSVYAUNZUVJCYDRGZEYTPJMLYLPXILXDSXIKHPHECZFBWGUZWLFARHDJHOSIEVFUXQJTQCLOSJUZOMIBXIOVODGPZYOLEDBMYQBWBQGOKEALPXNVENTTAMQZQKVRILNCGMEBYTRMUCERQBWKAWXRDNGREJWFOAGFYKDPCXHHQ");
    IMC::SmsRequest tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.req_id = 60746U;
    tmp_tmp_msg_0_0.destination.assign("NQZOPFGBCDBIGMSKLXANLNAPWSAWYRHQYKZOBUGLXFPIPEYMKBWJIOTDUACMULLSVBYQEKJLLQUCBIFHVXQEUNJWXDNJZAMRYLGHJPVIOOWWOFRMVPPCQFFFJMKDTNBXJZXTVQEELGMVUWHXDBUOOCKAS");
    tmp_tmp_msg_0_0.timeout = 0.23645464075882205;
    tmp_tmp_msg_0_0.sms_text.assign("YXWHSZSGBPGYULKEDIJZMUMBORNSOCGWKNFHJWCKJOMFRNRZTBXTVCHCFUUYMAHBBJXPAIQFDMSJTZEIIJPBGSAFDPZYOXPVTRZCBQLICPDWRVLQXELPGSQYKTVCMWFDFUHAYMYDRBPUEPZDZUPHKKIAQEZAHNHDJVRWIYJTWUETKXNOIFTKLYLUS");
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.9427698304373935);
    msg.setSource(59269U);
    msg.setSourceEntity(225U);
    msg.setDestination(64596U);
    msg.setDestinationEntity(185U);
    msg.command = 209U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("LKKPQHEJAHNIGAXDDQQMXIJMJDERWZOPIJWUNQUCGAUIWXMRUHAKPGMIXOCKVZKFJJIZCTNRPYQPKTTJGFMCXZLBDSTSWMNWTYGBXBPVOTXCWBIFPSFBUZSIQUKEGKRASVGQTXGNJWMJKAORABSRMLAHVC");
    tmp_msg_0.description.assign("RIUSZATLKSXOUHQEFVKIXFMPLMDGREICQTICPDZYIGPTLVZMJHFGIMZJGPAECVJJNOYAMRFUXZADHDWXVHESHNBWTKLVUPKLOYWGUZBTCSCUXUAKNKDFYRIWQQSTYTXPOLWNBJANYEBLSAQLVWHJYWIBPOHSVGCVAUQQZMKPXXOJRAKUGCJHYKOEVQDFLAXMEDCHEYMRMNFBIIZLTDNXWWGCYRMJSSEEPGNBUFZTZSTOQWRFBKJQ");
    tmp_msg_0.vnamespace.assign("LJVGBSXLOJIXUEKUZFDMSDEGIPXITZLZMIJUZCBBDMPEDZPYYPXSNJGOFEQCTPLCITODQTRVEALIHHNROGOHLQYKSBARZGDXC");
    tmp_msg_0.start_man_id.assign("CKPRZKHSRTXGZTFZSYWEVPXRWROSKGGEVRVXVHCKAECEYNQICGWWVBNOIMANGUQCTWAIBJIFZQLELTGJFQDIYASLFRTGZZBLLDJQKBFKZRMXWNFTFLHJMSLY");
    IMC::HistoricSonarData tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.altitude = 0.39706982173698246;
    tmp_tmp_msg_0_0.width = 0.7690029145208367;
    tmp_tmp_msg_0_0.length = 0.5991600404421953;
    tmp_tmp_msg_0_0.bearing = 0.5221627523750798;
    tmp_tmp_msg_0_0.pxl = 7291;
    tmp_tmp_msg_0_0.encoding = 128U;
    const signed char tmp_tmp_tmp_msg_0_0_0[] = {-65, -57, 113, 41, 46, 121, 7, -94, -19, 81, 19, -60, 38, -68, 48, 28, 68, -34, -126, 43, 44, -112, 78, -35, -125, 105, 74, 25, 20, -104, -3, 42, -99, 109, -31, 3, 102, 15, -98, -56, 126, -53, -44, -31, -78, 54, -52, 87, 103, 57, -49, 39, 10, 82, -51, 34, -86, -25, 62, 118, 109, 54, 64, 38, -12, 75, -98, -16, 94, -115, -70, -33, -113, 44, -31, 47, 1, 109, 77, 44, 82, 18, -57, -23, 48, -111, 4};
    tmp_tmp_msg_0_0.sonar_data.assign(tmp_tmp_tmp_msg_0_0_0, tmp_tmp_tmp_msg_0_0_0 + sizeof(tmp_tmp_tmp_msg_0_0_0));
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
    msg.setTimeStamp(0.48149902760266283);
    msg.setSource(64203U);
    msg.setSourceEntity(51U);
    msg.setDestination(52929U);
    msg.setDestinationEntity(220U);
    msg.command = 111U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("BFYDDIIAHZGLMMKXCSNTREYPQJHSFZDRLJTSIDSKCQRF");
    tmp_msg_0.description.assign("RULZWAUKJCCELAXMGQBSKHOTVUEIQJHYSDTNGOJTEWMEIWIPUSENYBPHVYZRSWF");
    tmp_msg_0.vnamespace.assign("IARNXUVTJHFZTZSHFWDIUOYDMJISMWTFEWDMLENHQOPSJQXBBUTGDRCWCMGKGRLVQTDREBOPUVVTIGELFOERQOXNMQPZIZOHHCJPRYMMVCGIHAHXPVCWEVXVALTHIYFFXOCRISLJTUWJGGZYOKCWKXTKDNEIWNCCKNXMUPBBVWSKW");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("LHLJNSWRZDM");
    tmp_tmp_msg_0_0.value.assign("HPYXLYVUYZTIBVXUFHGOEMBGDBTSFKKXURFAIJWRSZXWWNHLTQRDYCRKDITWGFLXXYCEKIQSJQJ");
    tmp_tmp_msg_0_0.type = 199U;
    tmp_tmp_msg_0_0.access = 13U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("WUENITRJDBAOTDBXYHIBRSOPGSUHECFIGLFGUSOGPHVQFYGGHSVZLLNDTZHBNDMWNYLTDRQIRZZKYXMPLZPKDUZARGLMWLWDQTUWIRPTVBVVBKZJRCGVQAJQBLERVOUGXEAIIIHPOEASFVCTEJVFFBHCZYPASKFUKLOUJFNYQIWXHQNQSAVSDEIJAFCWOXYMLADOTCZCTSCSCJNGFMHEKEQDJYKNWW");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("XJUYXGRTZXSGAVZCOVPXDOHHATTPSLPMFNMKIBQQAGAVWMUXOEDSDKXXMQXMROYGE");
    IMC::Alignment tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.timeout = 63329U;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.5130995313567518;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.7979711969548655;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.6563522195645712;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 106U;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("TSRMKWCRAPUGPAAWFFLTGCDMBWNBIUVMLSXAMSILZOLQTLEPARTVYDRBNZLQPUMKHYLVYEWSXEJUJKSMCUQTGAPGIKQOOGVNSVFQUGZVOOENWGXYHBTDEZPISLNHNCJLBRFXORHCJEQZIXBAEYDTUMHQVMQKWYKVRPZTDTWQTUAEBNDSDIKFFQPSCCCGPZOVXVCROJNHXKPUXWJXEMXFHHCZRDOYJFI");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::WindSpeed tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.direction = 0.8805373236039815;
    tmp_tmp_tmp_msg_0_1_1.speed = 0.10843486919817436;
    tmp_tmp_tmp_msg_0_1_1.turbulence = 0.8043091621657015;
    tmp_tmp_msg_0_1.end_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::PlanTransition tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.source_man.assign("KXAYJGRZDWFGMWISDSFLJZPBBDUMQIEDEALWZPSZANUVPIVUBAKALZTESRTHSQUOKPCBEISZCNGGRJFSDPOVYWWNWTOUYGBYLUNEPCENMQZMIILNQGWXKIVBVXUKLQOKWGMROQEAXMCGQDKHZGXELJATPDPTYLZHAHJIOKXSOERNSOFQVCBBHVHCDC");
    tmp_tmp_msg_0_2.dest_man.assign("HHLZSYDTKJTMOXZMDIALKWPXXBVGWWJAHJCOCDJYRRULSAVDNPMVYPUPNETMBDNPBGCIWRWQCWNKPOELWIEVGEDVZIFPGYBEUDCZCQJJBABECHXKLOXCYTHLLIKCVYKVPSUYOTNZVMNDMPHAOTFKIQ");
    tmp_tmp_msg_0_2.conditions.assign("BCUPLMXVJMJVDLWJZCMDKLHBLCDHQFSUS");
    IMC::SessionKeepAlive tmp_tmp_tmp_msg_0_2_0;
    tmp_tmp_tmp_msg_0_2_0.sessid = 1964664463U;
    tmp_tmp_msg_0_2.actions.push_back(tmp_tmp_tmp_msg_0_2_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_2);
    IMC::HomePosition tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.op = 220U;
    tmp_tmp_msg_0_3.lat = 0.2734774528497935;
    tmp_tmp_msg_0_3.lon = 0.5973626750366204;
    tmp_tmp_msg_0_3.height = 0.23554594602625667;
    tmp_tmp_msg_0_3.depth = 0.5484185012012741;
    tmp_tmp_msg_0_3.alt = 0.11291696456571154;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_3);
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
    msg.setTimeStamp(0.9813981814259011);
    msg.setSource(10674U);
    msg.setSourceEntity(252U);
    msg.setDestination(5528U);
    msg.setDestinationEntity(114U);
    msg.state = 91U;
    msg.plan_id.assign("LVBXEDQLMONIXSLHDUQGHWJNLREHPZAFSRJIAGWWUQUKJGKHHPBHTJWQUXZEVTSTLSEXEMNFMZENLXVOYSGZPFACEDAARCYNJCOWLYBDNGTRCEHPFCUXPTGRSQRDXMLOTXPIWONNVLBGVUYWZVTEIAABIODYVUFCQMMQTDSZJKYDDUJFTTPYOQWRISCBFGKXQAIIZMWSYN");
    msg.comm_level = 87U;

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
    msg.setTimeStamp(0.898626162866424);
    msg.setSource(44744U);
    msg.setSourceEntity(227U);
    msg.setDestination(43968U);
    msg.setDestinationEntity(56U);
    msg.state = 243U;
    msg.plan_id.assign("VMEFRCZKOSVTDQAZWUGCSP");
    msg.comm_level = 230U;

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
    msg.setTimeStamp(0.8205182997470842);
    msg.setSource(22105U);
    msg.setSourceEntity(146U);
    msg.setDestination(53055U);
    msg.setDestinationEntity(185U);
    msg.state = 137U;
    msg.plan_id.assign("LHUTGICRVGRGYXQHLMBTMXLBYZICWVRPCHCZTIZENASWU");
    msg.comm_level = 239U;

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
    msg.setTimeStamp(0.12227647094844252);
    msg.setSource(18013U);
    msg.setSourceEntity(6U);
    msg.setDestination(40453U);
    msg.setDestinationEntity(45U);
    msg.type = 163U;
    msg.op = 107U;
    msg.request_id = 17207U;
    msg.plan_id.assign("POKANYQVYMQKQVXBPQYMDMLXPSFYECAZUHFMUDLHSOWZYLQEAGPBDWUSHAIYEFKZTOBVRCNTJDQXFYJIWNZWFNLBJJMJLQPDRFIJRUIARECOWHENPONKAPSWSGHNDTXZAEUTLJYEKKZDJGKXIXKJUGIDGPOLNREHGZHAWMXHTTLWVBOVIJLUVVCEMVRMTCOSRVKFMWSIDGAIFWBSKFRTZNCBS");
    IMC::Teleoperation tmp_msg_0;
    tmp_msg_0.custom.assign("TYYIEZMGVFKGOYCTRPJQBWRXINXEJBJECISBDGZJUECQOJNKBQRUZPFLWAHXEXWECYVNXFVS");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("BGSARQXVOAAPDHTEJOCMDDBARYFPVUATSYCBIONVUEGXUTHXBGSPWFGFUTXNSBQNKTYGKQFTDQYBJZLHNIUPUPAZLVIPJEQXZU");

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
    msg.setTimeStamp(0.8555425250479889);
    msg.setSource(10596U);
    msg.setSourceEntity(130U);
    msg.setDestination(29689U);
    msg.setDestinationEntity(26U);
    msg.type = 33U;
    msg.op = 95U;
    msg.request_id = 19252U;
    msg.plan_id.assign("QOZDAWTPVXTHGGIZQUFYAEZILECEHEIIVJUEFFQKKUNLDJPAZHIAWXHWVCNNPSMRSYWPGPCDYFOKFAVGXUHLYDAAFLISGZBCMCIYXJWSFNDHELHZLZXVAXDJSUWBLBOTMLKSQYTJRKOJRQQBVUJXVXGRVKFQJWUBBOWMZOLYSUF");
    IMC::VehicleOperationalLimits tmp_msg_0;
    tmp_msg_0.op = 23U;
    tmp_msg_0.speed_min = 0.9310895231146298;
    tmp_msg_0.speed_max = 0.6038813015728092;
    tmp_msg_0.long_accel = 0.9934172740032737;
    tmp_msg_0.alt_max_msl = 0.24188861232521908;
    tmp_msg_0.dive_fraction_max = 0.8583288744912115;
    tmp_msg_0.climb_fraction_max = 0.8899144644758112;
    tmp_msg_0.bank_max = 0.14747213783638136;
    tmp_msg_0.p_max = 0.2643357785164421;
    tmp_msg_0.pitch_min = 0.3326051041949136;
    tmp_msg_0.pitch_max = 0.726164866769043;
    tmp_msg_0.q_max = 0.26146580170900846;
    tmp_msg_0.g_min = 0.040939756483555745;
    tmp_msg_0.g_max = 0.05901610914309696;
    tmp_msg_0.g_lat_max = 0.5132070438275054;
    tmp_msg_0.rpm_min = 0.33995202310309836;
    tmp_msg_0.rpm_max = 0.038334818160627004;
    tmp_msg_0.rpm_rate_max = 0.6191350677604859;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("DZNFTGXEODKRKVPKYYDKEWHTDJICJUEXHHOIFSVBPTVLJBPOLDPCNQYIXGPIQGQQFA");

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
    msg.setTimeStamp(0.38865492365804577);
    msg.setSource(14628U);
    msg.setSourceEntity(149U);
    msg.setDestination(50991U);
    msg.setDestinationEntity(199U);
    msg.type = 188U;
    msg.op = 99U;
    msg.request_id = 22335U;
    msg.plan_id.assign("ZEISKSQMQNF");
    IMC::Loiter tmp_msg_0;
    tmp_msg_0.timeout = 13880U;
    tmp_msg_0.lat = 0.22262477435441053;
    tmp_msg_0.lon = 0.04878845772097273;
    tmp_msg_0.z = 0.5220755679487292;
    tmp_msg_0.z_units = 36U;
    tmp_msg_0.duration = 22922U;
    tmp_msg_0.speed = 0.7886508012792866;
    tmp_msg_0.speed_units = 83U;
    tmp_msg_0.type = 129U;
    tmp_msg_0.radius = 0.39987343717884094;
    tmp_msg_0.length = 0.7434130590219423;
    tmp_msg_0.bearing = 0.9989267645194864;
    tmp_msg_0.direction = 77U;
    tmp_msg_0.custom.assign("PWXQLHJOLGWGVN");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("ETIJZZDYQUAERGXNHBGVPOLAYGQXACOBAFSKZMPYG");

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
    msg.setTimeStamp(0.5597128819256533);
    msg.setSource(27405U);
    msg.setSourceEntity(81U);
    msg.setDestination(52101U);
    msg.setDestinationEntity(19U);
    msg.plan_count = 17493U;
    msg.plan_size = 3307753375U;
    msg.change_time = 0.38740459142868033;
    msg.change_sid = 59097U;
    msg.change_sname.assign("CKYXSNNZCYBRVXNEVJULHXPWVTMLSWWZJOPLBKFCJCQWUQHKNMDNXWIFLFQHUUEDAIPDISWTVDQUPROCYSHOEGWCZRYCBMPGJGFSYBAOAEPYK");
    const signed char tmp_msg_0[] = {-58, 126, -34, -34, -22, -14, -118, -56, -97, -123, 32, 65, 105, 85, 13, -99, -2, 25, 53, -39, 30, 16, -89, 97, 80, -97, -16, -35, 123, -111, 59, -109, -24, -30, -103, -85, -93, -9, -90, -56};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("QOSOYZUAEVGLYMCAJBJDFKNAUIDPDLMIDEODLLPZTJSAVPQAKCVAFHMAKAGIZVVOFSAHHQFUQDIQTQWJQOREYCZLHYRJRLYETOSGHMVSKQYVGIKRNPZLOZCNPRVDWKHTIZBEUXSNQXSUTYBEEAXDCECPHLZWWTQIWBSMCHWMFJLBMGUZJRLNGXXXFHRHCJFTMINDIBUGTWOKVVCEPNZSSIKPUMBRKXJWXXBMTRBTYFKDX");
    tmp_msg_1.plan_size = 59602U;
    tmp_msg_1.change_time = 0.48388883363687185;
    tmp_msg_1.change_sid = 43968U;
    tmp_msg_1.change_sname.assign("SPUNRKBFMUVOOFVADUVTSNBFZJQTRWITNMRNOYGAMKIMCWPSKUAJVQJDGCFTVWSYXAIWOEKPXQLTNAWDLYIVGOQCIUOYWYJWEGNCGGXAQUCGUOBIENSOPTMJQHJKZWJQEGORNSVVGXMLLMTLHJSVTLJCQDZHULAUDWEERRREMIBHFCBHCODPZKPXXFZDQXTEKHLPYJYNPGEFUIBAIC");
    const signed char tmp_tmp_msg_1_0[] = {63, 95, 93, 108, 32, -71, -111, 83, 6, -39, -12, 33, -110, -124, -40, 116, -34, -96, 99, -109, 9, 101, 112, -19, 97, 91, 63, -24, -3, 100, 10, 40, 41, -45, -62, 9, -6, -117, 41, 122, -65, 86, 94, 47, 0, 1, 34, 122, 18, 27, 96, -21, -28, -26, 123, 75, -72, -71, 55, -84, 52, -113, 98, -91, -52, 18, 18, -50, -66, -77, 45, 77, -81, 96, 52, 22, -81, 65, -89, 109, 58, -123, -82, 40, -94, -80, -41, -121, 94, 57, 63, -85, -58, 84, -89, 49, -84, 92, 89, 59, 83, 51, -124, -69, -4, -35, -24, -106, -76, 51, -44, -113, 92, 29, 82, 72, 88, 102, -33, -49, 53, -88, 69, 41, -61, -114, -109, 106, 125, 71, -112, 125, -63, -73, -73, 77, -24, -1, -9, 92, 111, -52, -40, 36, -114, -50, -44, -113, -50, -119, -9, 49, -26, -70, -84, 1, 123, 88, 53, -20, 122, 12, -107, 43, -32, -88, 42, 60, 30, -89, -90, 114, 90, -78, -2, 22, 73, 48, -75, 39, 101, -61, -72, -105, 62, 7, 44, 91, 19, -96, 95, 41, 26, 64, 86, 102, -7, 36, 125, -39, 94};
    tmp_msg_1.md5.assign(tmp_tmp_msg_1_0, tmp_tmp_msg_1_0 + sizeof(tmp_tmp_msg_1_0));
    msg.plans_info.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.3218815068904005);
    msg.setSource(882U);
    msg.setSourceEntity(134U);
    msg.setDestination(61412U);
    msg.setDestinationEntity(168U);
    msg.plan_count = 1941U;
    msg.plan_size = 2554830777U;
    msg.change_time = 0.13919918655910657;
    msg.change_sid = 52068U;
    msg.change_sname.assign("NTFPVHCNBYQP");
    const signed char tmp_msg_0[] = {22, -124, -63, -4, 13, -81, 109, 55, -72, 102, 54, -20, -124, 28, -108, 61, -66, -54, 102, 20, 107, 34, 111, -115, -13, 15, 4, -121, 101, 7, -50, -119, -86, 46, -72, -55, 68, -78, 67, -18, 73, -75, -74, 11, -66, 55, -65, -20, 58, -89, -62, -51, -67, 100, 44, 88, -93, -128, 32, -56, 85, -74, 76, -72, 91, 8, 24, 24, -53, 74, -24, 40, -73, 61, 82, -107, 82, 16, 95, -96, -18, 101, -119, 77, -65, 65, 97, -105, -23, 110, 122, -63, 79, -101, -94, -47, 55, -5, 120, -83, 72, 117, -118, 51, 34, -93, -52, -15, 47, -38, -50, -81, -6, -110, -101, -14, 53, -97, 71, -30, 69, 20, 114, -47, -123, -55, 67, -58, -55, 92};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("QJGRIWCXKJWDLPXTBNFMQMATUTIDZRAORIEYHJZMXECMGMDOPSMIRAOHCYEGLTTELAAKQWJVZZWONOKCULZAWSGRDLJOWVNYRSCBYJWBVKOFDGWIXOKXCMYTTADFWIUJKYQBBCNNZFFQIXKFPXBJSGTVQUVFEEQDMVPNQUJPEKGCPZRX");
    tmp_msg_1.plan_size = 52227U;
    tmp_msg_1.change_time = 0.21536187509834137;
    tmp_msg_1.change_sid = 7829U;
    tmp_msg_1.change_sname.assign("CIFZMSHWSNSFLCDLFVKAJHZJBVZZGRXCEKYJZATSMTQEXNXMXLFOBHBVJMYMDXEKFCJCSIRPIEMTNOHVWVRDRZXRGOXWLARIJHSTTZYNNAQCTSBAPEKCOGHGHCVVUIPWEXFYOYKRIDJPANRUPQDFGZRUQGQIDONLJBBPMLVYDOKUKUJEBEZRTSFCMNOQLAATNIJDDHYLVXBL");
    const signed char tmp_tmp_msg_1_0[] = {115, -23, -58, 90, 23, 50, -42, 33, -58, 2, -13, 45, -97, -75, -44, 34, 62, -122, -107, -9, -45, -68, 50, 26, -82, -102, 51, 36, -78, 16, 40, 86, 55, -14, -65, 79, 60, -121, -40, 43, -78, -4, -97, 83, -66, -47, -90, -90, 109, -37};
    tmp_msg_1.md5.assign(tmp_tmp_msg_1_0, tmp_tmp_msg_1_0 + sizeof(tmp_tmp_msg_1_0));
    msg.plans_info.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.7091668989173585);
    msg.setSource(27057U);
    msg.setSourceEntity(5U);
    msg.setDestination(29595U);
    msg.setDestinationEntity(30U);
    msg.plan_count = 22278U;
    msg.plan_size = 7071153U;
    msg.change_time = 0.4768780783948052;
    msg.change_sid = 63921U;
    msg.change_sname.assign("CMCVRMUZLAOJIROMBAEEKRPYWCTBAIMHRCMPPIMXFIMXGBJHVIKZEFKWOEFNJAJEUYPGHXBNPFQLYIVXQTURSDWOZJLDUJYLGEUQFXD");
    const signed char tmp_msg_0[] = {-71, -45, -92, -53, 26, 110, 57, -53, -98, -123, 83, 114, -52};
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
    msg.setTimeStamp(0.3675167852880089);
    msg.setSource(44116U);
    msg.setSourceEntity(219U);
    msg.setDestination(50520U);
    msg.setDestinationEntity(221U);
    msg.plan_id.assign("RREPBCWDXYJRXNTPZMTOMHUHJYLYRGEKHSKLUCTUZXEQMFSNXEQORWDOVIIYGKMGDVLKNYTOSAVEQFILETEULGAFZPBGCQNGJMAZDLUBVCQGOODLJRBFAOANAWXFJSOFBCRNYPBZQHMXSGIKSZLRZMTUVYAFWSLBQUDZZWSRQIRCMJQVUUXNQBKAPHYWPVSTIEVIWEDKU");
    msg.plan_size = 65371U;
    msg.change_time = 0.4734299139889193;
    msg.change_sid = 25744U;
    msg.change_sname.assign("TBQAFPHKUVNKCYOCNNYVXPZPVTGRMSNDFVCRKDAXWEEZXLUVG");
    const signed char tmp_msg_0[] = {73, -110, -78, 26, -31, -64, 74, 62, -50, -29, 17, -14, -126, 56, -97, -26, 31, -108, -2, 44, -17, 80, 46, -101, -80, -90, 45, -127, 13, 18, -33, 17, 76, 78, 40, 9, 27, -76, 60, -1, 11, 98, 75, 10, 118, 78, 119, -121, 0, -16, -84, 88, -37, 76, 20, 57, 1, -123, -90, -91, -74, 64, 6, -61, 40, 106, 52, 86, -113, 59, -34, -49, 41, 2, -108, -54, -49, 28, -115, -30, -65, 12, -108, 70, -85, 68, -43, -20, 116, -29, 121, 35, -126, 94, 96, -11, -13, 70, 53, 83, 43, 48, 28, -13, 51, -49, 101, -105, 41, -126, 125, -55, 111, -18, -46, -17, -49, 41, -78, 113, -68, 27, -65, -77, 61, 56, 35, 3, -61, 36, 31, -71, 57, 4, 105, 115, -55, -42, -84, -60, -85, 74, 15, 85, -29, -118, -126, -127, -116, -15, -25, -118, -53, 114, -80, 88, 95, -111, 78, 16, -100, -81, 47, 75, 89, -45, -29, 15, 119, 24, 8, -9, 75, 26, 9, -54, -46, -30, 72, 23, 88, 17, 101, 101, -24, 82, 78, -60, 99, 85, 108};
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
    msg.setTimeStamp(0.8640036282173791);
    msg.setSource(12458U);
    msg.setSourceEntity(46U);
    msg.setDestination(28330U);
    msg.setDestinationEntity(119U);
    msg.plan_id.assign("BSZVAKANYQPHNNXERBJAWEZACTMKVJXSLJFKNYNFFMAVPZIUWIJTOENIT");
    msg.plan_size = 41677U;
    msg.change_time = 0.8908995602699088;
    msg.change_sid = 16678U;
    msg.change_sname.assign("CQTKEZQHYEEFJAAXTDPTWSBQMOJZEANVDHBKLCCBPKSHGXRKVGMVSUFPMOFWYPJXOLBZXUNMNRFKHXHATDLKCUTFBPNYEAKRUAOGXYCFVGSVFHQJJPIIZUEZVPNCSCQDIWLNGSPKVAIKLNLUCWEZOWQIOCOM");
    const signed char tmp_msg_0[] = {96, 88, 60, -43, -99, 35, 46, 8, 13, 86, -89, 58, -38, -84, 49, -19, -77, -23, 72, 109, -38, 65, 121, 82, -80, -124, -36, -51, -28, -4, 68, 59, -42, 117, 88, -120, 25, 118, -97, 30, -99, 24, -92, -92, 65, -111, -76, -31, 68, 33, 53, 81, -103, 41, -85, 94, 3, 36, -47, 19, -58, -94, -116, 57, -21, -120, 44, -4, 112, -77, 66, 118, -127, 73, 69, 48, -123, 117, -26, -68, 32, 73, -49, 102, 86, -16, -65, -46, -28, -9, 38, -90, -52, 92, -99, -8, 23, 102, -92, 90, -6, 30, 87, -94, 120, 98, 85, -27, 106, -36, 119, -19, 49, -45, 122, 24, -123, 55};
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
    msg.setTimeStamp(0.20125516267131027);
    msg.setSource(19205U);
    msg.setSourceEntity(60U);
    msg.setDestination(27729U);
    msg.setDestinationEntity(147U);
    msg.plan_id.assign("OZNCJJDOIIWAVBXBTHPSALTKSBPCPVANJUTCLUZLXYGCRPKSHSQIUMWDQNZCVNZFRSCNFN");
    msg.plan_size = 39688U;
    msg.change_time = 0.8176202728915924;
    msg.change_sid = 52306U;
    msg.change_sname.assign("CMADHUNJEQKELSGLESADCFSDPHGYDOQRVNNPVYUIJPTJMJBHVBAZQXXLTLZISGYLJPIKGMYBFTMWJYWRDVZLWZJKQRHWKMFFOGGIZXRKGTUCMPODOXESURKNCDUWPZOEKLHYIMVVHBWYUNOAMFQFJHVXFWRXEEKTICLAYRBBTCTNZGSUZCTXJDVKMBDFRCLCSDHFGWFOAMSAPOPWCYPXQNPIIUHUHZEYWJBTIVQBUQLNEA");
    const signed char tmp_msg_0[] = {70, 8, 32, 18, 123, 90, 75, 19, -45, 43, -101, 26, -37, 69, 40, 41, -44, 44, -63, 96, 110, 111, 42, 65, 18, 94, -80, -25, -124, -110, 122, -128, 60, 76, 19, 106, 101, -10, 76, -108, 60, -114, 63, -14, -59, 3, 44, -100, -39, 30, 126, -108, -84, -94, 63, -110, -125, -53, -123, -110, -65, -91, -123, 122, -21, -101, 76, 22, -35, 19, -82, 67, -107, 45, -71, -4, 64, 72, 39, -88, 41, -128, -104, -128, -103, -64, 45, 27, 97, 28, -83, 58, -71, 109, 45, -82, -5, -28, 2, -107, 114, 116, -78, -49, -79, 24, 63, -57, -9, 42, -124, -124, 104, -18, 44, 33, -98, -34, 107, -34, -18, -82, 1, -23, -23, -108, 87, -85, 2, -39, 15, -90, 96, -63, -28, -50, 103, -36, 73, -37, 39, 71, -10, 75, -100, 91, -9, 69, -112, -42, -22, -37, -30, 117, -74, 57, -125, -32, -2, -83, 53, -105, 57, 55, 119, 64, 78, 1, 57, 86, -109, -29, -89, -103, 55, 73, 96, -19, -43, 84, 2, 13, 87, -49, 64, -25, -62, -72, 84, 6, -65, -60, 111, 16};
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
    msg.setTimeStamp(0.9257342285810637);
    msg.setSource(31074U);
    msg.setSourceEntity(7U);
    msg.setDestination(3271U);
    msg.setDestinationEntity(16U);
    msg.type = 151U;
    msg.op = 126U;
    msg.request_id = 4337U;
    msg.plan_id.assign("QSUFCBVFGNHNJDCXURYSISOBXDFWOMAKDTWKAKWFIKYICHRZHLQQGYPYLFTRUFOTCVUUDSAVQTFOWWZUPTPVMMGJLKEQVZMXNEJGRSSJOUHYHSALWYCCQJMKHUEX");
    msg.flags = 53365U;
    IMC::Salinity tmp_msg_0;
    tmp_msg_0.value = 0.8981919026043064;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("TTAMNZVMUIKPLNHRMPADXFBWGZIPKUVTORJZGVHZQCWONXWXZWOOJTXYLTQKQLECGBBCPZULXUYYRHDYSWYYBKLKDIYQKMVNHNGBZVJHPRBSIJTMCQFOAXWCGVUOHJULFGKWFVENZUPEEPSEAXOOJUAPEMJMZJUIFHEQMDRJEZWQDMLDCIQTOGTSXIRGNBYEBFSA");

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
    msg.setTimeStamp(0.7644388833217309);
    msg.setSource(11909U);
    msg.setSourceEntity(181U);
    msg.setDestination(27840U);
    msg.setDestinationEntity(50U);
    msg.type = 12U;
    msg.op = 48U;
    msg.request_id = 52630U;
    msg.plan_id.assign("FUGOMZITFMAHUQPOZVHSYZWNSGTEJVMSENXWFTCKHDHDDUXWBBVQXZYZIALLLOLRJCOGVWFSGDCCZFDCCLRBDDRQIUIMDVPFSWNOUXFYKYFQGCBJZJPXLNYHJLEQTKFYMTWKEXKBATNHMNPKJPMEZRGLOPLWUNBMUUKESXNPFGIK");
    msg.flags = 58398U;
    IMC::CameraZoom tmp_msg_0;
    tmp_msg_0.id = 240U;
    tmp_msg_0.zoom = 4U;
    tmp_msg_0.action = 116U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("WADDGFIMCQFOYDMVHLNGWEEYMHADRPXSSRIQRUBMJZXNPXLIUODLTYHYEJSITWMZAFTQQAPRABERZKUZFSNLLKOSOFMXCVPFJGXSIIUXDWY");

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
    msg.setTimeStamp(0.7659217297734663);
    msg.setSource(37394U);
    msg.setSourceEntity(32U);
    msg.setDestination(1440U);
    msg.setDestinationEntity(53U);
    msg.type = 125U;
    msg.op = 187U;
    msg.request_id = 58205U;
    msg.plan_id.assign("ONKGYJIRUQHFCBBOUBUODAHWGVDXBYRBDNKLQOYUFCGGIPNUREFJENNXWZQAGEKDYIVXAKLRKQOLXXMRIYPLCGSCATUDMSZSOTVYCLEALZAYZWZZTXPHAPQWRJJTMSWTUHNFRRNHDMZQEIFZFGZIUHCWVEJHSKOXEJBCOJPDWBTKTNCSCWSTGVVDGVSIPPYFBFHOAAKVMVMLVIQKBXCZDMQJPJDOXNEULYPE");
    msg.flags = 18039U;
    IMC::CameraZoom tmp_msg_0;
    tmp_msg_0.id = 93U;
    tmp_msg_0.zoom = 239U;
    tmp_msg_0.action = 85U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("QKCLLTCNQKPANIDZLMGFJNWRYAAUQMOEWZPHXUWNBPODYTACKXPBEKTOOTSYHVBWDISRLCGOQ");

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
    msg.setTimeStamp(0.07081513024988173);
    msg.setSource(11045U);
    msg.setSourceEntity(203U);
    msg.setDestination(50587U);
    msg.setDestinationEntity(108U);
    msg.state = 15U;
    msg.plan_id.assign("UFLKJENQWXOOSIQBXEMQMWGHOLOLRUWSJGEEAVBN");
    msg.plan_eta = -982417729;
    msg.plan_progress = 0.6878661209335992;
    msg.man_id.assign("ODUXOTGMBILSECBJNFYYZVHVFUVTYWZIMNWXOCICIBFDMPKVCEOYMJGOPEQLZWQXRMMNMXRHQPXJBDQXXAEJWSEDKTAHPTNLADGIZKGHYLOYQVEULUEVC");
    msg.man_type = 65495U;
    msg.man_eta = -836396284;
    msg.last_outcome = 234U;

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
    msg.setTimeStamp(0.6228469713093823);
    msg.setSource(9160U);
    msg.setSourceEntity(224U);
    msg.setDestination(23767U);
    msg.setDestinationEntity(30U);
    msg.state = 63U;
    msg.plan_id.assign("HYPWVPXTAWFMCG");
    msg.plan_eta = 293892566;
    msg.plan_progress = 0.4829634916289627;
    msg.man_id.assign("ATBFWGJMHEERXKPAEUCDYPVJUPPYZLVZRSHCXKZZTYGO");
    msg.man_type = 45709U;
    msg.man_eta = 642650620;
    msg.last_outcome = 141U;

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
    msg.setTimeStamp(0.3864502603156823);
    msg.setSource(57203U);
    msg.setSourceEntity(230U);
    msg.setDestination(22274U);
    msg.setDestinationEntity(244U);
    msg.state = 17U;
    msg.plan_id.assign("UEADSQTMBEGX");
    msg.plan_eta = -1162581767;
    msg.plan_progress = 0.8552305255253954;
    msg.man_id.assign("ZFVFGIKERXSVUMSENIYQYXOFGPOLPTKHZFRLJDSLFAKNTSAMAADEEIUPJYGOFQJJOBOKOUCTMHCADTCVGTXUHXMGLIQZAITMPLWW");
    msg.man_type = 49913U;
    msg.man_eta = -821645285;
    msg.last_outcome = 60U;

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
    msg.setTimeStamp(0.19304181429063727);
    msg.setSource(30672U);
    msg.setSourceEntity(89U);
    msg.setDestination(44079U);
    msg.setDestinationEntity(224U);
    msg.name.assign("QQLOMUJRTKPVSAXAOKWOYHXEJMTPLMGHYUXUKFRCNYRPFGSBQNZQGZWAPFBCWJJGDYEHWLKEFJHQVWRUCJZUHJNZXJEEAVIDHSTIDPYYRQVGYWCORCLMWELORTSSECOLDCENSQEFKEKNBGSPADLOWIWLBQOTIDJNVZCAGMPYMNXZBBNFMXRFUTTKFZ");
    msg.value.assign("JIIRGNKOXKJRSSKFQPWCNXZHWTPXRWQFBLEBYLLUMOMJFXIIMEESCCZJTFETXLIJFONPCOQZHVQERHSORRMDSDAXNCDUWPSZZXAUADVOIIADICOYNYYCWSOGGNKJVUMJHTHKZHFACQAUUEBHGWYHWBYOEBVQNTHPFNSRALIXKEPKPBPZDSVNUGRMLBVGVSCFRJUDPUCGALYQGZOMZYARYBLLLVQTPMKQWZEMIQB");
    msg.type = 110U;
    msg.access = 224U;

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
    msg.setTimeStamp(0.6871132747883183);
    msg.setSource(24102U);
    msg.setSourceEntity(119U);
    msg.setDestination(34719U);
    msg.setDestinationEntity(109U);
    msg.name.assign("TRONHJXVNSXXNLPYOBATAYEIRSJXIVMKLDYCWBOQLMLQUNTDHUOMTGBCLAIEZFKZMKGQNHFCZQKUWKNHMKOXISSGPIDWKRBWGBGGKALGQPNTRYVVEDUDJFATHVEHJSFQAUUYEQIYYLYWYRAEBWONUHZURAWSTWCCSFSJPJGVFXQZIMBZCURLYBDAMVJTHXODTOARVEBIEJGMHWMIRJHPZSSXVCZDZC");
    msg.value.assign("PGNSQKJZSBNIOCAMCBTPWQKJGESFFNITAKSUXOTKPQWXVKXIGYKULHTNMDQZCIPTHXPTFMCRVLOXNYHSTRGODLRTRTDIBBJSNHLGHRLSYGBNAZPSJWYOBAPUIOWXDYXHUFSDMAKQYVNYYNZUOEFXDMGLHRJVENRJKDVWAJZFABEPKILEUCYJWEFZZQREDTAHFGMLDQMRVIAPWBCQ");
    msg.type = 5U;
    msg.access = 229U;

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
    msg.setTimeStamp(0.8703955313662234);
    msg.setSource(33523U);
    msg.setSourceEntity(160U);
    msg.setDestination(10659U);
    msg.setDestinationEntity(121U);
    msg.name.assign("UCKUJHNJWVXQEMDWZXAOOWTNZMIIJTLKPTYIXRMEPMBBRCOGTOINEDXVLJARBHSYWUPORPFWXEYSZNCLMKTPUBAKJYUDCFUPSFOXNBDVBZBJWROGVFFXEW");
    msg.value.assign("HMCVGXISAVSBZUKPEMFZHJC");
    msg.type = 119U;
    msg.access = 221U;

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
    msg.setTimeStamp(0.8109721394837852);
    msg.setSource(39107U);
    msg.setSourceEntity(92U);
    msg.setDestination(63845U);
    msg.setDestinationEntity(105U);
    msg.cmd = 225U;
    msg.op = 73U;
    msg.plan_id.assign("OVPLGLGUUBDXPBBLCUHFATDYTQVLGLXNWNIOJOVFRGMGIAPJHKWNQXIJVWDTDIAFWRMDXOZZFTXLYYPBEYXIEJVQPBPJCOVKSCTCQAJDNTOIBZNAWAASUDYNLWHHREDUZRRETQMZRUXGLZIBMWBMXRINKYFCJFFVZOWGUEIKHQFEKHMKKQMAQTKMUBRSCEGSCUTYSUAWJ");
    msg.params.assign("NMGNPOBCYCKJXASWEZHNMSWYEIPYXHFQCEFTUEBOGNTUMBCNZGNVITJSIWIQGPKKJUZDGQWFTXQTUJMCLACXBOUADYDXADQLOFIOBTZMRYJRWPPQJHRYVLKAHOSXGWCNSFGUZHOLSRMMKZQSIESJATHXDELVFGMYXBRHV");

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
    msg.setTimeStamp(0.03980486219604318);
    msg.setSource(11558U);
    msg.setSourceEntity(213U);
    msg.setDestination(32030U);
    msg.setDestinationEntity(134U);
    msg.cmd = 152U;
    msg.op = 229U;
    msg.plan_id.assign("UMNYDWLQPJODGUYGEOJXLTKACLNDKQYGGSTJOVECOLNZPQFYBOAYCDVTAPFCTUIFPVECOGBLIJYTRZZVUAPAEGIXAZQBS");
    msg.params.assign("ATHERPTDTXMCDDEWRHYZIBGSLLIBCPQTTYUCYMYZTALGSMCIOWQMQBINVXLEAPPFWQSAHVFJBIKNWQWENYVZXRCFNXWEXQLDDFHRDPKYWIMNHFRZGDUBBUIHZJYBUSTBZRQCADPVAXGNQMPIIVKWKNXBCGJKARQHNPJVGSVCJOGTFLORJJIVBECSMHKGWMUNSZZUXRPJUFLEMSZLOMFOGTXKKGYUWLHRK");

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
    msg.setTimeStamp(0.9002459138090046);
    msg.setSource(12254U);
    msg.setSourceEntity(205U);
    msg.setDestination(7734U);
    msg.setDestinationEntity(189U);
    msg.cmd = 57U;
    msg.op = 26U;
    msg.plan_id.assign("BOKEVBHAXQYWLJGYVRITINUJXCTTRAUYKIQRWWTANQVWGDIKUPSXYYQFKSTYFBPUDBTZNHHABAXEOHZLQDMCOAGZVCEVLPZNRPZGLJZORZPVCAZRSENEIJKXFIQWNPVDJNLKWBFBSY");
    msg.params.assign("VYWPLNKPVHZXIZNLQIDZMRCQJEPVXDHESLAQFMMEITZDFMRVHUKIYJVYPYXWNBEDUVNAALCKQATXTKRUSKRAJCINOZZSGDSEEDADTBQOFNXOWJTQABHPHXXFFQIKJEACJVLQMMBYJZNLGISUDPRIUCRRFUKFVHBGWYUHTYWFOWWSOZSXTEBRGKGGVTOECHBJRBPDYQVOZYUMMHPOFLB");

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
    msg.setTimeStamp(0.9590508190452964);
    msg.setSource(50250U);
    msg.setSourceEntity(64U);
    msg.setDestination(12173U);
    msg.setDestinationEntity(100U);
    msg.group_name.assign("HMINFDHXISADVURRHKPJMHIXTQJLFEGJHROWEUPCPPVASKINXBYHVEUMFCBHZBMQBWEPCAL");
    msg.op = 8U;
    msg.lat = 0.5503760913616296;
    msg.lon = 0.8999220923078088;
    msg.height = 0.2616909686996135;
    msg.x = 0.9390354138725207;
    msg.y = 0.46058935935552325;
    msg.z = 0.8720538325347622;
    msg.phi = 0.5172880361640485;
    msg.theta = 0.8459173967302341;
    msg.psi = 0.4703940909913952;
    msg.vx = 0.288585722988967;
    msg.vy = 0.4478272827222517;
    msg.vz = 0.7908627865575357;
    msg.p = 0.25942247318759115;
    msg.q = 0.26076325499869557;
    msg.r = 0.6666807363232357;
    msg.svx = 0.1812919588900327;
    msg.svy = 0.35441826884797534;
    msg.svz = 0.21082859556639577;

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
    msg.setTimeStamp(0.6099501449617792);
    msg.setSource(38600U);
    msg.setSourceEntity(147U);
    msg.setDestination(17343U);
    msg.setDestinationEntity(32U);
    msg.group_name.assign("QQKOTLJQCMQPCJLUUSTJXOENNQUTECARSVJXBRGDXFKJCGRZINNUKHZSZYMBFPIKDUALOIWQWVHRYGYDYBHPMQNBSKOSWDUTWTVIZWAZQFGCHPAVHDMZVPBQOHXVXRYANBNFVJHEIEBJHFFLSRUMYWOOCWAXUYOCKECDWGMLTKMYSIKLDCILZPJWFAEGBIAVTVSSENZGEMPFPBLWZURSXBGNNEVDZDKPOKDFRTGARPGXTTHRLXIMJYICLOXY");
    msg.op = 100U;
    msg.lat = 0.29508914324805424;
    msg.lon = 0.04851105250996046;
    msg.height = 0.5362342390347054;
    msg.x = 0.6831851776369037;
    msg.y = 0.009574338060643894;
    msg.z = 0.2605215780944594;
    msg.phi = 0.5654106563888912;
    msg.theta = 0.4629782532569715;
    msg.psi = 0.5228923070582537;
    msg.vx = 0.6363750679634261;
    msg.vy = 0.9205014894688842;
    msg.vz = 0.6801492833365282;
    msg.p = 0.8218872418878586;
    msg.q = 0.5487383307263614;
    msg.r = 0.6385617244717944;
    msg.svx = 0.5683329020190069;
    msg.svy = 0.6694184454614791;
    msg.svz = 0.7102138849268879;

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
    msg.setTimeStamp(0.38525133822820345);
    msg.setSource(35117U);
    msg.setSourceEntity(73U);
    msg.setDestination(7517U);
    msg.setDestinationEntity(171U);
    msg.group_name.assign("HSPYMZVOKDGKUCVMMKJOIMPQLYWJF");
    msg.op = 133U;
    msg.lat = 0.4802424411197661;
    msg.lon = 0.8649247598460027;
    msg.height = 0.07629528076969383;
    msg.x = 0.7219864960272205;
    msg.y = 0.9484797813380995;
    msg.z = 0.23292415071526207;
    msg.phi = 0.6044388776929063;
    msg.theta = 0.458408937612108;
    msg.psi = 0.7081955134200943;
    msg.vx = 0.49332365574683823;
    msg.vy = 0.7643234102690218;
    msg.vz = 0.9770095152714263;
    msg.p = 0.525915862344401;
    msg.q = 0.792046381123293;
    msg.r = 0.23939926710556547;
    msg.svx = 0.1567374248398079;
    msg.svy = 0.497495266290216;
    msg.svz = 0.832349157152599;

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
    msg.setTimeStamp(0.3084698309376456);
    msg.setSource(45805U);
    msg.setSourceEntity(184U);
    msg.setDestination(17761U);
    msg.setDestinationEntity(67U);
    msg.plan_id.assign("AETHLWLBYTWDQRLPHDSSXQDKWYLFTGPIGFJGIPFDQPPIOEEYLZXJMJULMTIOUYPLNBNFYBWQIOBZYYWMVVBHUEOXFITMISHCDSAONMKUDFVGXXRRREHTEZTLHQBPKASNADHPNLNDULJCZTJCQBKFUYKPXURUXFCORRCNHMP");
    msg.type = 179U;
    msg.properties = 217U;
    msg.durations.assign("NQGSDISPQXEFINPYKWTIMHCCLWSGKIZYHDUDOXBMUCFXKMMQENUHEYFZWBPTBEZYSERNAJOAKZWBERHOMHSCV");
    msg.distances.assign("TNSAODPLQPQEYKYSQQUYNBDFCWXBKMJWKSELDYTICEVCSPROKMHEOUMSXJIUGTHWTITTHLNRDRBNJKWKBOHXJXGWZA");
    msg.actions.assign("EYMGDENNHXZXRQGGXCMTUOZASWLNKPCTCTJONAOYCPKKAMIVKPPLBLUUGTYSGSKTXWKEUJTCYVNWRBQMNDBZYTQDRMHZBJALBOFPDEULQZQCFNZMDOHSJOWAGJUOVEMYLDAFSEQOHFJMYIAQYXVXJBGJKIIVHDDVZHYAWGKWSZPDRLR");
    msg.fuel.assign("TIYVQZOKGAJGWJQNELXRUFCDJTETGSGILCDTVQMWOPMBVCFOAEKCZIPEAXN");

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
    msg.setTimeStamp(0.6041352102327616);
    msg.setSource(21745U);
    msg.setSourceEntity(76U);
    msg.setDestination(56177U);
    msg.setDestinationEntity(182U);
    msg.plan_id.assign("GVHTBEZTBDDAAUPWBOWSUCGOMIJVEFRIMHRNQIUOIVQDKXFSIUBNTGFQRFKNRCWUUPRPYPELFLEZVMNGKCKPOPUFYCEYFYZJVWXKDVGXOLFQLMAKQXKDUDCOSWHFJ");
    msg.type = 240U;
    msg.properties = 229U;
    msg.durations.assign("FGTBRWKIAZOLQH");
    msg.distances.assign("FLHASUUZLEZPWCNESKDUBCNFSWVWJHKOQOTRRVZ");
    msg.actions.assign("ZPROZOUDGTWBBJZYHDTFBAZFWBQEIMOYHYRVWSDUPOELAAYEKGSYQIYEURJFXANTADCNRKAUCZUNYQPVXJLUBPSQZHSQOBXWRDLJXWHCYRCFKZEMBRNNGOKHHXHPRPOLMJTMRSFGZNYVQ");
    msg.fuel.assign("OQLHSCVXWWQRJTMRSBGZIBWNVPDSVEJLKEZFRHNLWAFSYDBTXMBRGRNGWTAOUDOJCAOQBGYAETRQOCIAYQOPZZLBAIJKWKTMKVDSHGIYCAUNDEBFHIQPRPDZGFIYMGPWVZSMRKLPIZEONNRUENCDFQPCHKWUXQVUVYHXTCGYUGKEIJTOVYASBMXZSPJRUWTAFKEPHDCBUXXDITQZECLMYHMAVLFLSXZBKPUJF");

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
    msg.setTimeStamp(0.26034606322377996);
    msg.setSource(57623U);
    msg.setSourceEntity(27U);
    msg.setDestination(57476U);
    msg.setDestinationEntity(166U);
    msg.plan_id.assign("TFKLVDRENHWDJZNGGNXGLJTUCEEJBIFUKREFUPSYDCQYVWLW");
    msg.type = 9U;
    msg.properties = 120U;
    msg.durations.assign("EVLKCJXPFBPGFHLWYDEPVGFYHIQEQLIHNLCFNNUPT");
    msg.distances.assign("QXWWTEHSOSUZRIHVMISYWBBTEHUHVVEMZLRTHQZUWGIPVKOIAORGSJLJYYPIQTNPPDDCTEFZAJTBDFXAODEMRRVUFEAOYKEGGLZMYPCCQZM");
    msg.actions.assign("RUJXDUYBNIPBMIOFLVKBVSGDQYECUNPKRFGXHPRJTT");
    msg.fuel.assign("SIUJYKEGSFENFYFQBFHQZMWPVRHLEPJJAOAJJOXD");

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
    msg.setTimeStamp(0.5230017299745382);
    msg.setSource(38870U);
    msg.setSourceEntity(10U);
    msg.setDestination(55251U);
    msg.setDestinationEntity(43U);
    msg.lat = 0.2890939492427683;
    msg.lon = 0.8261638208348124;
    msg.depth = 0.03058902204871783;
    msg.roll = 0.9599675274739363;
    msg.pitch = 0.6893958698211172;
    msg.yaw = 0.3204587880622637;
    msg.rcp_time = 0.7057806268005501;
    msg.sid.assign("YPTVALIQXTGEZIPVULWETCEUOKBJAWISWRTYKCDEPUUXPQJFTSYCLSGVMFHWTRXVLHFIWTOZWJSNEXRJYKUOXOXACGJIORASYJVPBRPQXNDEGNFINYBR");
    msg.s_type = 49U;

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
    msg.setTimeStamp(0.7458677491814013);
    msg.setSource(32932U);
    msg.setSourceEntity(118U);
    msg.setDestination(21382U);
    msg.setDestinationEntity(50U);
    msg.lat = 0.4776909015890616;
    msg.lon = 0.976026200052703;
    msg.depth = 0.35480730762277046;
    msg.roll = 0.6995118142500429;
    msg.pitch = 0.09710780643966022;
    msg.yaw = 0.41214892660788804;
    msg.rcp_time = 0.06870650038398884;
    msg.sid.assign("QLYYTUBKDFUYCCHIRSJNANTMCPXDIIDWKBTRWSAPTCFGISVZFVWHRPTEUZPXFZHAWNXOTWITYKGEZPWXVXBLYFKDMUVIZRBCKVJJANSVOMOCCNEUKEEJQGYQSCJYH");
    msg.s_type = 201U;

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
    msg.setTimeStamp(0.7477953631730414);
    msg.setSource(29436U);
    msg.setSourceEntity(4U);
    msg.setDestination(32217U);
    msg.setDestinationEntity(85U);
    msg.lat = 0.26803999180762517;
    msg.lon = 0.34054420750821146;
    msg.depth = 0.49262055513572167;
    msg.roll = 0.4945953476100665;
    msg.pitch = 0.966702534647892;
    msg.yaw = 0.7717298423072192;
    msg.rcp_time = 0.8552938303729317;
    msg.sid.assign("UXZFARUQLWVETOHAJQUPHVRAFRKCIINRDXWSAZHZZXKTUSUSKCYAKQTEEDIBGKGHWZXNMRBLWF");
    msg.s_type = 198U;

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
    msg.setTimeStamp(0.5242397119836244);
    msg.setSource(51547U);
    msg.setSourceEntity(186U);
    msg.setDestination(45340U);
    msg.setDestinationEntity(43U);
    msg.id.assign("XFSIYNMPTZSFJMMFQFGPUWJKXOVNQVAQCODERSJNSDKGDEPPEASYZYAJRRKAZGHUIBZEDZPXDVENAJLDXNKUYGYZEXGIWCUCQDRTZGCVSAZMWBEJCUVRYWGMBSUIBGNHBKAFLKCHIJCYXOMTLYMPJOIDFOMLTMGPOHDIVWZGAUQVWRFAALLSWBHOPLPLLXXHEWPBNTHQIOVYTYTJH");
    msg.sensor_class.assign("AVSGUUGPQBRWPIEGNABJZLWHIAYKRISYYFD");
    msg.lat = 0.4808076975245066;
    msg.lon = 0.5799933648323254;
    msg.alt = 0.8002621851463909;
    msg.heading = 0.2927060232200748;
    msg.data.assign("RBMZGJQWLNT");

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
    msg.setTimeStamp(0.5357856667784926);
    msg.setSource(16364U);
    msg.setSourceEntity(135U);
    msg.setDestination(59954U);
    msg.setDestinationEntity(181U);
    msg.id.assign("RLEHEFKEOIUHDOXHBHUTELMDOZOANUPTYLIFIWHHSVXBOAXWLRZYC");
    msg.sensor_class.assign("UDEJIDJBOSDXGJIYIAWYXRPGCBLUAVSMFLRLKTNWFJIMQYNUGRZSPZGNOQOVUDCQXZLKWWKLKEGNMNZCVLRAOXSUHYOVFGBINTTXKGWWQGMMYDNSZYSJPWKYNFLTOAQCLMWDCDECCLVNRJHHIMSVIDIOQUPFDKSBBZFX");
    msg.lat = 0.8884578606392988;
    msg.lon = 0.5724339811294135;
    msg.alt = 0.49613433032215626;
    msg.heading = 0.7469247854281089;
    msg.data.assign("GKAJXHKZIECAOEVYWTTKVYSCRJMWYAUKLUGJDBQNWNQMVOIHQISODGNQZNITHYCEXZIJCIFRZRDUZAGDTGNJXKXTCHCZYPBDIPQQIPKGLPYAVWLHNSDPRMWEYYGJBZJXLSWFCMUBMTEIUIFEFMWNAHWBBTOEPGSQRKSATLZDSOZQLWNEFXRAVYLOXFDXFRYPS");

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
    msg.setTimeStamp(0.4459372825287312);
    msg.setSource(24867U);
    msg.setSourceEntity(191U);
    msg.setDestination(22758U);
    msg.setDestinationEntity(210U);
    msg.id.assign("QMBVIJMSNICTEKPKXFFTWMFHQBZTGZECPJBHIWRXMMSBSGRMLDJWYWFLNGTHFXFSBRZCIZHXOAKKYDYNNWZJWXPEVVSHQOALTUCDZIDYOPUJIUDYQAHMSARGHBXEKQEVXBORSCQUFLCJI");
    msg.sensor_class.assign("XUHBYNNAQYUKMBZMXNRFAKUZLXWGCEPBFLZHLTDRMPHIDPQYSGUTISRSKKNFAMFXDZEMUUSDQRVVSMMHBPLPCXCELCZMCOEMQLAQIIZWGFTYTIJSDEADYWGFQYKAHGWEORRJASHPQOPYEOVNTHICZOPZPITQDVWBVSLJYKXRUKYDRIWDOGBTWJBBXTTAFCGRIHZBFKEAURUPOJSQTGQNNCOKJILYXAKCJWBOXJWJVLGGFZHONSEVUVLH");
    msg.lat = 0.43146534865967645;
    msg.lon = 0.32186313937745104;
    msg.alt = 0.23140084956715523;
    msg.heading = 0.8741908898113924;
    msg.data.assign("WWCQOSNGPFHRVRZJVLIXWUHWJKJJLMECCEZUYRYQVXWNNJFCIPHHFLDNGCFBNZXWSKV");

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
    msg.setTimeStamp(0.5605294248679183);
    msg.setSource(20933U);
    msg.setSourceEntity(50U);
    msg.setDestination(25657U);
    msg.setDestinationEntity(129U);
    msg.id.assign("LKJUMXIEJAAZZDVQOAQVIXOFGRTDCUVRVYVAQNHJOWSBTJLSNYRHDWEEZJDSUVNBWPGNEQGJYOHADIZXWGCMQSKYFIHBCVFPQODUBHXLYHPLUHCXECALPMWKXXLXUIGTGKPFTXRSZCGHOYLULVQMKNGACGVQWAIJPGFRSWEQMVRZM");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("PKRQVEHTZJCQVJWOPXXWGRQTQBPHHNGTUKRLYZAWAVMRQZGIBAPPAMVXRNBCUJETURNPLVZV");
    tmp_msg_0.feature_type = 40U;
    tmp_msg_0.rgb_red = 116U;
    tmp_msg_0.rgb_green = 179U;
    tmp_msg_0.rgb_blue = 149U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.8932843418596833;
    tmp_tmp_msg_0_0.lon = 0.641381365762996;
    tmp_tmp_msg_0_0.alt = 0.6031827552755951;
    tmp_msg_0.feature.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.7780187816170234);
    msg.setSource(7529U);
    msg.setSourceEntity(188U);
    msg.setDestination(38880U);
    msg.setDestinationEntity(191U);
    msg.id.assign("SWMTBTGIREHAOOQXBMCDNVBHKDFKVXZLGVDEPIWLSAOPPLFMFVKZQDLRCENPTIWFJUZDZBHDKMCIIVYBBTJPFGOUYPMRWDSNAQNLYFUJKOTSZRFUOOFWRDUBALNJRBLPKQWQYVMVJTRCK");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("XAAABSPHAAVDQCFRWSGHZCAMHEITLLLUWTRCKKLYJWJEUNMNXBDQTHKGVMSXSURYUKEZGNWEUHBNSFVYSJEVPZMWKZGWNGTIUKOTLDWFXKJQVYVKDHTPPMHGBOXZOFUGLFPGRPUIXAVSIQWXIBDIJMGYQFQCVO");
    tmp_msg_0.feature_type = 195U;
    tmp_msg_0.rgb_red = 173U;
    tmp_msg_0.rgb_green = 87U;
    tmp_msg_0.rgb_blue = 247U;
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
    msg.setTimeStamp(0.3729413870346834);
    msg.setSource(41668U);
    msg.setSourceEntity(16U);
    msg.setDestination(35921U);
    msg.setDestinationEntity(55U);
    msg.id.assign("PHSKBZLAHHTFXRJDOXRQEYEDRSOAKBDNMIEBMIXQLXNCCKRUIPKYUKEXBQOLXUQPZABWWVVWNWPGXQOJPCBDFGOLLTODDYMGZBISPIMCGYOYRAVUUKYVMHSJGQHWWDMFUGCNALOSNHLUVJIIQZWKACNAKFJSFLRREVIZJDXBZVOJTVYAECHHRBMYHXIZJGPEGPGLVUQLXVAYDTTZEMTTASPFHQSTJKKFFWFRSNNESNNYOJBGZUWFQMMDRCCCUT");

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
    msg.setTimeStamp(0.1881975059820421);
    msg.setSource(27320U);
    msg.setSourceEntity(17U);
    msg.setDestination(54676U);
    msg.setDestinationEntity(195U);
    msg.id.assign("QDRXIKHFEOAXAMOVDVXJCMROHTJGYVEZHSAYBLQFVDIEGCGBCJHYHZXKNBREVUAGNFOMZEUAYGPW");
    msg.feature_type = 242U;
    msg.rgb_red = 70U;
    msg.rgb_green = 226U;
    msg.rgb_blue = 123U;

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
    msg.setTimeStamp(0.09129274583114733);
    msg.setSource(57111U);
    msg.setSourceEntity(119U);
    msg.setDestination(11022U);
    msg.setDestinationEntity(205U);
    msg.id.assign("XGAVXSZPCOMLVSMWAPIWNRIYDMTFHKKOMWTEWGGACCNSPRYLZNFFFEKLGEWOIVFBAPJPAMZZMCBHCJEHYG");
    msg.feature_type = 251U;
    msg.rgb_red = 162U;
    msg.rgb_green = 188U;
    msg.rgb_blue = 29U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.680061315155207;
    tmp_msg_0.lon = 0.559717860294137;
    tmp_msg_0.alt = 0.7597697570452454;
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
    msg.setTimeStamp(0.4955430190037934);
    msg.setSource(51445U);
    msg.setSourceEntity(201U);
    msg.setDestination(1390U);
    msg.setDestinationEntity(191U);
    msg.id.assign("TZHTSOELZUYCIIFSWCMBQLVEBVFVPMJRUVXCXNGYAOTFPVGVELUFHBCMJIUSJGMXCJPZWDJNPYXGEEZPAKPERUVXRLPEKFYLOPVONRGWOZMQOLKCYHZFVRIXLTONHQDRHGDCSLQNEWBBQXUKUTCSAWJDUESNAJYFHXRIHBABWNGIKWFTFKDMJKBCIRZYQYSPKORYOSHMFJQDEXNIAZLOZTDINSMYKQWUPZTBWQ");
    msg.feature_type = 102U;
    msg.rgb_red = 227U;
    msg.rgb_green = 156U;
    msg.rgb_blue = 131U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.9739947399832;
    tmp_msg_0.lon = 0.6015908773124558;
    tmp_msg_0.alt = 0.5682837135348272;
    msg.feature.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.4490751416254726);
    msg.setSource(7425U);
    msg.setSourceEntity(217U);
    msg.setDestination(24741U);
    msg.setDestinationEntity(160U);
    msg.lat = 0.3248345257695092;
    msg.lon = 0.830734010090179;
    msg.alt = 0.9536155721352354;

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
    msg.setTimeStamp(0.4077042614823956);
    msg.setSource(32594U);
    msg.setSourceEntity(113U);
    msg.setDestination(29261U);
    msg.setDestinationEntity(233U);
    msg.lat = 0.5140449549323286;
    msg.lon = 0.8462118865998303;
    msg.alt = 0.7503832558356109;

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
    msg.setTimeStamp(0.7280929862903133);
    msg.setSource(5641U);
    msg.setSourceEntity(212U);
    msg.setDestination(49690U);
    msg.setDestinationEntity(196U);
    msg.lat = 0.22340443740383298;
    msg.lon = 0.6588623430234469;
    msg.alt = 0.1833508496336178;

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
    msg.setTimeStamp(0.4435106053936475);
    msg.setSource(32067U);
    msg.setSourceEntity(24U);
    msg.setDestination(24991U);
    msg.setDestinationEntity(54U);
    msg.type = 13U;
    msg.id.assign("IHUOAXHUWSQKXXDRPHOEGASRMLCXRLQWSFAZFLJCUKMXHUKORQDRHADTUYPBNOFRBGNNSIQIIIGBDGYYMJDBXWTQBSZVRTJQVFJDENZPCFVTEESJB");
    IMC::Acceleration tmp_msg_0;
    tmp_msg_0.time = 0.07957676056005591;
    tmp_msg_0.x = 0.09221119598565142;
    tmp_msg_0.y = 0.5324902980830729;
    tmp_msg_0.z = 0.5117175962897312;
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
    msg.setTimeStamp(0.4876741590088449);
    msg.setSource(8658U);
    msg.setSourceEntity(15U);
    msg.setDestination(47634U);
    msg.setDestinationEntity(118U);
    msg.type = 199U;
    msg.id.assign("LPKTHUJDLOQWHINHUVJTGKIIZZOZQGNPCFYNBXLTXXFPVUBCGJCBJMUACIKIESTBOUQBODHEQMWQNWJDPKVAJLEKIFKPFGNRYBKBPTNGTELUESMMXYVXVTZSSOPCDQKPSEZGXAJNCBDSFZRWQUXHXGAMWECRVYYMSHGQURFEHKWNXYCAWHDFWSLVQFDKMGTVYFRAJLDULORIZPWCIBXL");
    IMC::DesiredLinearState tmp_msg_0;
    tmp_msg_0.x = 0.07835647898157494;
    tmp_msg_0.y = 0.9243010069297917;
    tmp_msg_0.z = 0.4739287784860683;
    tmp_msg_0.vx = 0.780145088651593;
    tmp_msg_0.vy = 0.4513521291716961;
    tmp_msg_0.vz = 0.4167441227339913;
    tmp_msg_0.ax = 0.6365948050973569;
    tmp_msg_0.ay = 0.30718186176395157;
    tmp_msg_0.az = 0.561151204413213;
    tmp_msg_0.flags = 4852U;
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
    msg.setTimeStamp(0.2969801260401189);
    msg.setSource(21443U);
    msg.setSourceEntity(93U);
    msg.setDestination(34274U);
    msg.setDestinationEntity(3U);
    msg.type = 24U;
    msg.id.assign("UWOOPWPTOAJTJYBZOVGWOHAMAUCELJPFYVIPXRXWCZJIXHUZDXAWBRKCXONKKQLDXYQYNEHLOZYDARVNCXIOYJRARHEEXSLZWEGSIUMQQKNGLLJYNMITBNFAQSDJPGBEKNVMDLFULGUCQSFMEPVEHRJUVTZJERBLFFSWNUGFHMZTKTHBSHZSHBJGIFWDVVXAPDSURZQHBYBGMXCYGTFASCPIIVPNECRUQSQZOMAKKFYDGLTKBKDQDCMROW");
    IMC::Salinity tmp_msg_0;
    tmp_msg_0.value = 0.6752494481597247;
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
    msg.setTimeStamp(0.8752723183227035);
    msg.setSource(3386U);
    msg.setSourceEntity(245U);
    msg.setDestination(36633U);
    msg.setDestinationEntity(87U);
    msg.localname.assign("JUXHFWQEDKGTFCAAOPZWE");

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
    msg.setTimeStamp(0.16548103734585218);
    msg.setSource(2143U);
    msg.setSourceEntity(207U);
    msg.setDestination(21811U);
    msg.setDestinationEntity(249U);
    msg.localname.assign("EOGZRLTIAYFCZPJNKMKOEWDLHDAIJALNQTWNJTGEWOVIBAPSCLEXDDFYDMYBJPVXRKQNHZEXQYUTDPMVOPRVMFAANYULCCMHZGSTCXUDTKFFUVTHHONQIDIZMR");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("NKBGYWIQNSTNKYDPSMTWRAYFFREDOPVKLVSPXWVBCLZGIIGDEPREPBDQFPFVUSNIYGACTMMNWHEKLUPQFGJPOJXNERCCYUOUZIEMKTOBIQRSVIAWSDHULFOQDSRDZAARRWXFTCWQLKOHIGUVFHOVDSVQJXQXHXVUGQCXUKAQTJ");
    tmp_msg_0.sys_type = 92U;
    tmp_msg_0.owner = 44653U;
    tmp_msg_0.lat = 0.8686847128361391;
    tmp_msg_0.lon = 0.6171572481883614;
    tmp_msg_0.height = 0.7860304868498181;
    tmp_msg_0.services.assign("IPNYQRDSHXROFZEBOWPAUJIGNDCTROETLJRIOJSXZHRYDEUNMTKLIXRKTDTNMXGVXCZYECHOYNDOQ");
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
    msg.setTimeStamp(0.08278569827034021);
    msg.setSource(20108U);
    msg.setSourceEntity(62U);
    msg.setDestination(60540U);
    msg.setDestinationEntity(128U);
    msg.localname.assign("DERTIXMGQJVGLKQYOSUVWCMKZDXYWACKXRVFSEZLBIYASQNFZGDNBYOWLHHDDLJRUQJSGUCGXAFLPEMENHVVIOJARVIVUMMBOSLWNHOXKHEUJDBFHZTMRMUQNEAZLMDZPAQBQTBZQKPINYXTFHTFUJYJCSIPSJOOPRRSZTPBSOEDGGIFXYFRCRWTMHEGJTTFCNLVZLYGPNLYKEAEOWJMUIKIFHWVATDRVIUSQOWGCANCDKHKBBZCNPBQCUXXPW");

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
    msg.setTimeStamp(0.5688718703749304);
    msg.setSource(63842U);
    msg.setSourceEntity(181U);
    msg.setDestination(30887U);
    msg.setDestinationEntity(114U);
    msg.timeline.assign("PLWUGKICJDXMWHVFHPQKESAFVPYIGPCYRJENGERSDLSCGOWKGQHOLOEDCJGLIVSXJFVZQDJXNYIVIRONDOHOUYQLTUBCFALTQWXSLBKUBZEHBKPUTJNTIFOMNGPMJNEFMZCHNCDRAHMEXSIRXLISKSPXQDBYTLXAPESVHVURDGAUKYLHFNQPYTGMEAIAPWUAQVZEDRROCBATFBMZFKXJMTCTIWSJKMJCRAOZXMNVZYQRZZY");
    msg.predicate.assign("MKYECEZHCRXFNKGUWTTJKGXFHGFEPZFQAKAQRGPXWZYUVHQTOJROBOWUFHYDQDYAGYBTHSRPBSKUIWJAGLLOCXVNDTXGMVOWLISQASXLSMTPIVBGYQFIZLUIYCDCEJILOMMVKDSLHDPEJWBF");
    msg.attributes.assign("FOKHWPPVNMAHVQTZPBNYCSE");

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
    msg.setTimeStamp(0.4951483809574294);
    msg.setSource(9256U);
    msg.setSourceEntity(154U);
    msg.setDestination(7598U);
    msg.setDestinationEntity(134U);
    msg.timeline.assign("TDTOURVDUCRHUVWFPSKYWZQHZNCYIHVECAHBXWLYUAHASLSUTRENPKDQBUQYSHWQEZOSWGTTQFJFFYJKPEQBXOADFZOKJCIPBYMFVRDWCIMFOZLMYJJNPSLVEDRIJRUGGIILZPGKZAMRXJNXKFLCNXOMIBVKXMDEBFSTNMVHYFJXCJCKLRPWIGXTAQPGHUTALRBMOQOGGEKWIJQCV");
    msg.predicate.assign("CWXRXLHHCBGFZIICCYXQKIIVKKTTWOIOHMASZZXAMVEVGBIYDPACTGHUYDEFSVUEVZYCMSZUWTJFQVNPEDKDTJNLOQUEIWEBANWDDKOSAMXNJBRRNXOHKXZHOBUMZDHMHYYQYFPGKRUYHFGRWUL");
    msg.attributes.assign("EQOMVSPKIOMSJFOEOREDPIHUAFRZXBHOWUKSGDRCWSNDITWAZNGJLMIEQNEGBCOMFIPYXLTKGBYHISYBKLXQLJDIDGZMGHEDYVUPLKYHJCEUROW");

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
    msg.setTimeStamp(0.5712487887121699);
    msg.setSource(22376U);
    msg.setSourceEntity(184U);
    msg.setDestination(46413U);
    msg.setDestinationEntity(234U);
    msg.timeline.assign("QRIWCBGGXEDXSLUXOFSUTHWSYVEENALUZEONKJPSDYNOGOLOCKAGDQQZYVCPYNLBVDJXAGCRLAYPHZSABEMQSQYBICLSQFDZXOMYUHFCDTRBMAPYOT");
    msg.predicate.assign("FPTMGBXYWITEXZXVBRXMWLOBXFCISBIWMRDUJNDUGOJQDBQYBIVIVKCGZJMEWDLLXCPWSSHDZSIINFUZCVNMFMKTNLPAYLYUWWUVSZTIOOFRQJNEVLNKALWACSSPDZOFSAXQRGYIHGBJWNYCZGJAZRARBNPPO");
    msg.attributes.assign("FZRALDZTATKYSLNONGMOLSDDEUQVOZZKKUILQFRZGNBTETVUELMFEJFENFTXNBRCWCJBXDWHRBGWQXALUIWOMKPQGKYNDQOJECCCHWBPBATZHGHYIJZMVHJXSIBPJMUSQHQFADXMHYWC");

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
    msg.setTimeStamp(0.08172623219582742);
    msg.setSource(40072U);
    msg.setSourceEntity(63U);
    msg.setDestination(34985U);
    msg.setDestinationEntity(104U);
    msg.command = 150U;
    msg.goal_id.assign("QGNWNDUUBCFIQRKODASGFJTXIJCXIRRSHPTDIKGFBBZDIZWVZJIJNTH");
    msg.goal_xml.assign("KLBMINSHOSGIMIUXZAXXYSRVBAKPQXJECBGWECVBKFMFVMVXBJUARCYDTXNPXHRRCHRQQYYYSHEGWOBSNLTEHYWHVFDRMZZDOAOXWOOMKOKJWSRFYNUHZLDGCCSAOMLUIPMGLDBQPICEOCAJDUJFYVVXZTGBFCHVPGDYDQNPYKEMLZEJFHWTLZWCVQQFKSQJDLSSETAIPAZRLIWNBLDTINPBRGMWWGUF");

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
    msg.setTimeStamp(0.2064898053327171);
    msg.setSource(55915U);
    msg.setSourceEntity(43U);
    msg.setDestination(6772U);
    msg.setDestinationEntity(177U);
    msg.command = 235U;
    msg.goal_id.assign("FIPMDGKSPONHOCNJISWNZJSDDEBWSXHAMCUPGJTWKYSQUJZJQZDJGELAPTNYCVEZHUKGYXULIWROLKMTZBQEUDDSSPVFXRGXQUENNSGTARNOCAXVOUYGMCQWYVQERPZFLFDANAHAUZOIDCPMEYNWOSTBAHGYZXLBYRVHEBFRVVKYDTL");
    msg.goal_xml.assign("EOQYIVOMSRPWUUKJZGSQUPBDVRKRLJHDSEIXJPQZOVKXRPLQTYMRDMIBWBMZKCMHICACUFLSXJZDUWQJRGHEXCLEEVIQBADCHINFKGBBRG");

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
    msg.setTimeStamp(0.6972766692006571);
    msg.setSource(34114U);
    msg.setSourceEntity(107U);
    msg.setDestination(27713U);
    msg.setDestinationEntity(66U);
    msg.command = 58U;
    msg.goal_id.assign("IHFGPTJZQSQOVUDLPQGNOCMFPEYUEKHWRZXJFRDXWAGPHREGKDOCLKZVFRYINOBJLTBCNGMIAAWSCMOXNUVQKOBAXTOKEZSDURFDSOAQXHBNTAVCXSB");
    msg.goal_xml.assign("NKLWRUTLPRETTSEVQGSIQVWXFDAGECRKAARSCJIQVLMHVZEXDGIAHKYDKZOWUOJEXOBBYWJRYEYUZ");

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
    msg.setTimeStamp(0.20716964158282059);
    msg.setSource(9728U);
    msg.setSourceEntity(204U);
    msg.setDestination(60608U);
    msg.setDestinationEntity(166U);
    msg.op = 18U;
    msg.goal_id.assign("UAOIRGCXELBAYERDDEETPCRLHKMWEQXXPSBZDISN");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("TRNBEULLQKLNIIXTKZXWRSLSICPLFIBYEJRCKMFQRMWDJAVTUTXDCJHOVPMSPMXBWZXGIWJOKWNCHDQWBCDFARPKTPDYGIWUHKDCGB");
    tmp_msg_0.predicate.assign("TWWKOEFLTYHDUCRALCGAINKMLCPDFHGVGVZXSJSWPJMVMKYPBXFNIIUNXGUSQBMMISCLSSNECBVBQYJESAUWKEMOEYVTKXNIXNUFOCZELAJBBETKAAOAHZCDWMZTVBQPLFZJDCQPXRWGHZYHUYAIZKKJUTBBXRGFRULCQPMDOYPJAMWZOIVDRFXVPNKCHJBSPQLSINHLTZVKHQMFPJEEDYNXTIGRDG");
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
    msg.setTimeStamp(0.8091212062569897);
    msg.setSource(25691U);
    msg.setSourceEntity(28U);
    msg.setDestination(19180U);
    msg.setDestinationEntity(215U);
    msg.op = 46U;
    msg.goal_id.assign("UJZGQCHYPKYUVLUWOUADRYLXVZVLWWJHCMBGLFDBSTVGREIFCRKFUKHSNWOYG");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("AJQJOMBUWSIMEIFXRKIWDSOIXQUJIXYTMKNNTTMMKPJLOFWLRJRDBUONVWQUAVODZQYAPJAVRPCYZSGACOMUBQTACIUJOUVYHWDLESWILPHAGXTXEXGIHZRWCEIKTNDBFFKNGXEZTRCKCTDACCEZQSTZNKSECEKDBGRVVRBSPBGNLXVURHJTPHSYHUYVQFOSHKELMLSGYUPFPIPLEYN");
    tmp_msg_0.predicate.assign("CMQJORHUETPRUWQNUXBKTVBVKJHNCGISDFTQDZIEMFBOUTTPKSHCQIRUPHGLAESNHGLBZKUYPLEASTFFXSFDLMFGTMCCNWBEKSAMINGZR");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("JODQVTUZJIVUZDKFAEF");
    tmp_tmp_msg_0_0.attr_type = 203U;
    tmp_tmp_msg_0_0.min.assign("NZNVAFLNKOYUKADHXQOVHUJTWLFIBTVFFCLUCZXE");
    tmp_tmp_msg_0_0.max.assign("ZSKMQYEGRDXIYHKZUFVILPZNPXBPTUAZXMLFQNCMAVWCSKTOHNZBWUDLOLMCEOTWWTQYKUGMBEJYWPGFJJCGKOYUHLBQKXERWYKIGRASYFSVSDVHQHAOHFTSCKGZPHHFVRSQNPUNTKFVRPDBBOGRWNNRQWTBAJLPOEXCRVJYRAJEUC");
    tmp_msg_0.attributes.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.017522420493167767);
    msg.setSource(62312U);
    msg.setSourceEntity(107U);
    msg.setDestination(38273U);
    msg.setDestinationEntity(54U);
    msg.op = 148U;
    msg.goal_id.assign("XQUBFTUWTDBTYXVLCCLRVMZOIYBYJOTDFEHBDCOCDKDLPYENRFFRIPBEHJQOPJLWNNUSYLXKQHNAIJSGAPRZRNURIBLEYQMIGPGXIWHVQHZLUJJYICBNZHUAJGAOTDATAKMQCVSWTMNAUWEEQMOSVKXKWYQWDLTIYXPRFCSKVGACGXHSSHSMVMKGZRATRZGXFJBDOFHQKVUUGLNBWQC");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("QXHZIHKYCWJYENZRRYOMVFRTGMIVSANDXXIPOGTTKVUKAVLBOFTUOHCEYSKJZOPUSMRSBMJVQMHUAKIMPXKBQENFXLBECMJRTIHCXF");
    tmp_msg_0.predicate.assign("UQJWBPXBVIUMCDTESBOOSDSHDHZYGUCHFDALJPNSZTXOVIKCMFKEALCEJOSLPTLYGQRDXYVPEMZKMXVOQDTJCLYAPVMRBRRHJKHGGGHQWWLWRODCLONURUNAKBIHFURFUCVNZFRSZE");
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
    msg.setTimeStamp(0.10461473807674848);
    msg.setSource(38038U);
    msg.setSourceEntity(187U);
    msg.setDestination(21975U);
    msg.setDestinationEntity(12U);
    msg.name.assign("PRFHOBWXEJOJXUPGTTKZTQPYOIXDQNMFSGUSMLHLRMAPPOHZWLSXLWSQQDFNZBYDVULCMMGFSIWLJVVNISGRRVKORGUFSITYPYVCDQTAEYDGT");
    msg.attr_type = 73U;
    msg.min.assign("VNPMGUUDKIVXXDHPMZYSCPCUOIQTDOEPPRLGURTHANBKCJBDPODVYTNAWUNGTSLWMPEDMOLZHCZYCYSB");
    msg.max.assign("YLPUDYRNXTACDT");

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
    msg.setTimeStamp(0.619389125167263);
    msg.setSource(4926U);
    msg.setSourceEntity(41U);
    msg.setDestination(44471U);
    msg.setDestinationEntity(207U);
    msg.name.assign("TYOTKQFHOEUTSZOWDO");
    msg.attr_type = 143U;
    msg.min.assign("VHLNMLGFOKBNUGILYYMRGUCIWTCUNFCYRIFTZQEPZFIWHADWEQWGAXHB");
    msg.max.assign("LTUXSXMHKEIODOERCCJUVGAOEFUIIEVVDAPOITGUXBXPVUPPXIXNPZCJGSOCEHDYTAHZVYWMZSJQXTQWDNRWMBPJKPGSBYLTFJBUMPMXEXCLRINYLVYKUEAGSRAKMWOWQMNQDGFZNHDWUVMSYFGLTNSKHHSHNHVELVTKQYCQHALFDAENFDOCMARZJTWRLCBQBMPNROFYQLVUWWPWDKLUJSFJOJAKRDY");

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
    msg.setTimeStamp(0.3783554805003059);
    msg.setSource(17795U);
    msg.setSourceEntity(24U);
    msg.setDestination(59596U);
    msg.setDestinationEntity(150U);
    msg.name.assign("NOKTOMFMDGQARIOFVUQJXVBCIVCFQVCJMUHKTEYQDCMELHKFNAESXIZDOBGOCCGZPHXMYLISBLMGPSWPWQBNUPNOXRKNUVVPWJXAFAZAIUZUGDWNTHEMIBTDSGSFHFFTJPXKPCDZLBDAIAQRWNREASBDSDW");
    msg.attr_type = 56U;
    msg.min.assign("OXGSHIRKFKQXTAIUFPMNXBTZHYCUKPCOBPRNLZCYZKQEUDCFJXAAZHTJHDLZWVSFIGAGTHIQHLBLPGUZCUFJNPSAGDUZHFNWWGMRDQIDRJNSKJUBEPOUNAAQMDDDHYZGYCMTBUTWBYSJQNBABNMOVKOEYZLEESTY");
    msg.max.assign("WYKWZYQCFQCJZSVUCIGBHMRJXXEZLRXOURXMOLWOGYZEWPBPNDFQOSWXLIBUSNJXGJFZIOPKTBYTREJOCBVVZTKLLTEYODWATDGNCIKNUHAAYYXTNUHNEDQOUJFDGXXSSFOZZSWBUSDVMPIMQGAAEIKVTRZITSAYIMRMLEHPJPRJGPUBMLWHXETPBJURHKCDPIHFIQKQGWKMMVMCKFNCLANO");

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
    msg.setTimeStamp(0.49459573307792704);
    msg.setSource(56215U);
    msg.setSourceEntity(54U);
    msg.setDestination(23206U);
    msg.setDestinationEntity(2U);
    msg.timeline.assign("UKXTXMDIIKLRKMUSLMFXOTCVKFWAGJNSBEWATTYEYGLTONINBFZGMHYZEWUOZPJVZTTFHQXKPAMFNNFILWDHOSPQSXGDPRQSBJBNHAHRXGQKJBAXOIVKANYSCBSWJPLPCPBYIEFEWMGUJAQLWIQQRLMDBVKY");
    msg.predicate.assign("BARZJKHOSRBYPQJESOLZJNCXIQWDKHQZUAPZTMLXWLPATINOPWPWXVYLPYMEVUIIYULCOHAYEVVFBVCRNTUMKBMGERYBMKQRDVLYLGFL");

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
    msg.setTimeStamp(0.2898969583309393);
    msg.setSource(62656U);
    msg.setSourceEntity(126U);
    msg.setDestination(17789U);
    msg.setDestinationEntity(234U);
    msg.timeline.assign("CSKIYXQNGCMHCHEETKXGEFYYRVCOAWKJHMKWEQHYCKKXPAGRZBTWPQVUZQDJLJPHEJIDNEYVTCNADUVDUYFGBPHQLYTGTPTMLMPTBBJSSZDZXGXXSWABYOJLMBLASUXQQLZCWIAPNVAJNQJFPXIPD");
    msg.predicate.assign("PCFIPCVFYHAFTKVZXMSTXMEQGODJLKDSAVYTWJMIFRGZZRWJTPNCUMKQBBWZYUWBOHKLQWSWHBMPKYNAIPALEJTXJJDOKG");

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
    msg.setTimeStamp(0.6433487981554505);
    msg.setSource(60098U);
    msg.setSourceEntity(254U);
    msg.setDestination(16847U);
    msg.setDestinationEntity(174U);
    msg.timeline.assign("HQVMEAMZUBTDOPBWKNAKCZBHOFLXVMARGRLAZRJIHOHTBIZSRWFRTUBDRCIRXPIJDPOZVSPDTOJSUQMGZMHDFQAMJDFKMMTFWPULVNHSCCBMAYTFPQWSSPTVEUEZKNGVSEGLRIIHSFEWQNNONPYAJXKQDWXUIHOEYKMBFLYQYGZZGBUYHPBTXFUWKWTQTGNYCHYKNGLPEJYJACWXGKOCQIVCJBSAVAYQVXXUDIXICLREE");
    msg.predicate.assign("NYXULJWPNQYQRGVLBICDVYPEORFOXCIXISXIVOUCWCQLTGJJJWRKETAACLDHEEZXHDEZAPYUBBWLBOQXTXEFCTLFVWKSXHFLS");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("KMACPSCHXOJYJBFCWUIFZXTHVXEHXWTTJTPQKFKRAROWLWRPZCOKYSMDALUHGAEQPOCVRIOFDTQUGNQSLSBVZDVBLYVTMEJXNIQEGHALAWIBYNLNAPPVMSFIKRUCRFIHUKORGOIKWIGHVEDJBPXYADYWIPVLLMCEBFVDSZZYNZQDMGBHJMBKJMDEWHBKONUXGYXZXNKFAMGIOUQDZHJFJCTELJGYCWQUSCSEVWRENBRSZNXFZPDP");
    tmp_msg_0.attr_type = 233U;
    tmp_msg_0.min.assign("RMJVQUAJDTFETPLVAHIQATWFVVCOWPEOHZTBVIGHAUTNLSBMRGQHEHKNOPJMJB");
    tmp_msg_0.max.assign("OLFZOOSMGQWWZAQWCHSLEVLQRYEJSLJPBQRJUXVMRZVTIBCIOBEHTEHKDMBKGSIKZWKQTADCENSDIHLYPXIGDOEFNHWGYJDAUEQCFDYXNDVUTCLAYBIKTAFASFXNVOKTPGEVCTEIKSAZGZMUNXQCGXOSOOGHGMJUQHAJ");
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
    msg.setTimeStamp(0.7757184164052826);
    msg.setSource(62866U);
    msg.setSourceEntity(116U);
    msg.setDestination(6137U);
    msg.setDestinationEntity(74U);
    msg.reactor.assign("ASUXMRMEGBZWIJAFHK");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("DHFZSFSECXNEZQHKTSRSYJFRGDCCFVXGDKXHSRBLTQYLWRIJYMCUHGZLUUDBJCVIKTIXOEKASH");
    tmp_msg_0.predicate.assign("WJZDYIIEYKYXBTJORAETRCONIHGDZAHEZQXEAMNTPSNVDXFXKTWDHLPFVICQASIWHCRQABWGQLSIBMKAUMKQGXNGQUJBZSMCNDENNYKSWYPUSMFXDBEPOLKOTTUIPGRTRRYWUVWDMQJVZJUJPCAFVMCBQXLZYDHGROWBZLTGEGFPUDHXUNY");
    msg.tokens.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.484429910052939);
    msg.setSource(1491U);
    msg.setSourceEntity(208U);
    msg.setDestination(43640U);
    msg.setDestinationEntity(142U);
    msg.reactor.assign("UDCROZTGYPSUQIJQWAHYWLINBWHLVJIYPBRYJQGAHPNXXGWVJSPAKIHAROJSVXMTYAUEIDCLGKDZNXYXVCQFRZULUZKMXXTAIEMMCDGKOQHYRBGNQPDIGOCEWNDSYBDTSFZFYOVRRCEIFUFOWVSTYOMNENMTUFKEZIRTFAHKOELDBJDQCJLENZUATO");

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
    msg.setTimeStamp(0.3873358700163909);
    msg.setSource(58701U);
    msg.setSourceEntity(69U);
    msg.setDestination(8968U);
    msg.setDestinationEntity(121U);
    msg.reactor.assign("MNOFFPLLSAKYVCATAZCEOBXEGOMLRDXAMMDIWBOQGGEJGZVBYXHFWCMWIUKKOVPPTIZJPQRZTNEH");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("BDSHKQZTBMDFRFNQGBYNEHUUOZKTVKLIPHRJTYAZDKNMBETIVBLFZQTVIWYGZBGPAXCQ");
    tmp_msg_0.predicate.assign("QHAYTLVMYNGCKGLKSKEWSVAJTTZMZIIRPODNUEZFJOUSNLHTYTLZKXMRLDYXCFFEBGDIYDCSRDANFEZJPDFSBWDMGMVMAGYOUTWQKLWLKHEQVHIJRYPIRPGJURABPCEIKLQYTVPHIATQFWQSXUSSJHUXSIXEZPNGPWGV");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("XZQUQDSFCCWOQQZSLDLIMKFYPJIIFLWSRSQHMTAWTAPZDUDEEBEFBBAFYLZYXNVPZASZUDEUJJFLHGBVTIGYNWJOCFOFKERHISUJBPRNXUVDEBTDOIKGKTNUWMKURULHEQQTVURPCWCLXRLPWZJGBSVDJWGOIICGVIEFVVHPHOTCKTJXDENCDAFAL");
    tmp_tmp_msg_0_0.attr_type = 154U;
    tmp_tmp_msg_0_0.min.assign("FZEJHQWXOKYFRRLFRZBTFACLWETLCOSJCTWIOPWPZMKXKGOUAAYZJYIWSJKPNRJOEREHVGPWGSUQNPLBXEMZDLFMDNVQQTYARIFUCBUKTEWSGDWQIYYMVNMHKAVU");
    tmp_tmp_msg_0_0.max.assign("HHWWMURDMOCFZGKCNKWEVLJVZHZRDSOPCYUEBTUEQQABQHUSOCOLDWAUNPEKSMKPNICFLMEVOFLIDCKOFAVSKGKNIVXZOKTLAHFMEPFDWAQGEMMUNNBFJFFMNXKJIIMOBQBYVANSIQPXZTSGAJVAXCVBTIUIRTSSRWVCMPJCWCELKRRRPGDSQXXJLZDTDHGNWB");
    tmp_msg_0.attributes.push_back(tmp_tmp_msg_0_0);
    msg.tokens.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.3465528627243599);
    msg.setSource(16737U);
    msg.setSourceEntity(218U);
    msg.setDestination(20996U);
    msg.setDestinationEntity(122U);
    msg.topic.assign("XSEJSPKVMCRIWANSWYFJOXTNVDJBREAMNMTZYRCEAVYPKLJTOXGLGZLKCMWFYAQDVAYCMCTSGBTHCXZEUHNRRZHTVMDWGJKXWQQDBGSODDHEINFPXWGOOYGMQUANOSSXPLLRUYBEJFOFPBEUBIHKGKMKQNNYKTSNJZ");
    msg.data.assign("DSCEXATUGJSZNVUPENWLBXSLNROERCQHBAIOJOOMZWRKIWQGFJEODQRVGPWOHISISNUCZBJXKDQV");

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
    msg.setTimeStamp(0.5950579722331012);
    msg.setSource(50148U);
    msg.setSourceEntity(133U);
    msg.setDestination(28509U);
    msg.setDestinationEntity(204U);
    msg.topic.assign("OVMZRYDIABXUMMYGSPNQCKVQWAOMYDDEGSQLKHTMIPHJGWPXGZABZDRKDPHVDJZDNCEWCKZTULGVSDVSYJJGFUFCVSLIZFHTRROHDYLXMCHUKKCOVWNOFTJAOETAYLCWTYOMBNGBMVJIGASIQHQWRDAXFAZPFZPBEIFPTYYFPULRXHALPNBHQELJUKFBWKTTVZBIQNKEUTBEBINOJYNGLRSJHQPMGXEVICNCRAXXW");
    msg.data.assign("THYMAKHZFJPXRGTELKLTRCPUFCDWVWJVXLFSEPGTNR");

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
    msg.setTimeStamp(0.29871890694137804);
    msg.setSource(21256U);
    msg.setSourceEntity(69U);
    msg.setDestination(37071U);
    msg.setDestinationEntity(172U);
    msg.topic.assign("IUODBGHKSJHXERGRCYKONVBMAXZNOUGFAFFEGFUOWUB");
    msg.data.assign("IMXMAQDIIIRGWVNDTPUBRBBPGFLAHTWCWDAKFWWJHYPODISWERHQZIFRKLEHLGVWDYBPTNZCZJZFDXSRHYMHBLGGTRGIJOSBS");

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
    msg.setTimeStamp(0.31454000072718113);
    msg.setSource(9358U);
    msg.setSourceEntity(29U);
    msg.setDestination(33572U);
    msg.setDestinationEntity(90U);
    msg.frameid = 235U;
    const signed char tmp_msg_0[] = {-125, 30, -61, 68, 7, 65, -6, 72, -49, 29, 6, -11, -99, -79, -105, -57, 24, -105, 40, 15, -126, -12, 1, -6, -77, 42, 49, -111, 115, 16, 93, 33, 79, 97, -6, -20, -69, 23, -51};
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
    msg.setTimeStamp(0.9971440584754943);
    msg.setSource(47578U);
    msg.setSourceEntity(160U);
    msg.setDestination(21787U);
    msg.setDestinationEntity(107U);
    msg.frameid = 68U;
    const signed char tmp_msg_0[] = {-23, 35, 83, -39, 25, 4, -22, 57, -87, 37, -127, 20, -76, -40, 23, -26, 57, -8, 66, 38, 32, 19, 108, -108, 28, -17, -82, 44, -19, -73, -13, -90, 40, 113, -50, 46, 17, 107, 20, -106, 47, -5, -94, 24, -78, -106, 69, -57, 73, 33, -90, -102, -15, 59, 55, 126, 51, -75, 25, 79, 115, 85, 82, 113, -22, 1, 124, 109, -18, 43, -118, 58, 43, -34, -97, -5, 120, -16, 49, -49, -22, 122, 41, -93, 43, -106, -38, -87, -49, -90, 97, -34, -3, 73, -55, -99, -73, 41, -61, 90, -80, -21, 36, 32, -98, 100, 67, -98, -98, 119, 7, 75, -101, 36, 16, 23, 83, -36, 15, -40, -87, -109, 24, -7, -88, 7, 115, -117, 98, -107, 33, -90, -20, 57, -50, -102, -82, -95, 97, 117, 15, 125, 88, -71, -12, 0, -61, 36, 24, 24, -43, -98, 22, -34, -17, 72, 100, 6, 115, -120, -5, 29, 34, -65, 90, 82};
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
    msg.setTimeStamp(0.640241603587253);
    msg.setSource(58614U);
    msg.setSourceEntity(147U);
    msg.setDestination(45934U);
    msg.setDestinationEntity(11U);
    msg.frameid = 93U;
    const signed char tmp_msg_0[] = {-18, 90, -42, -11, 74, -17, 40, 44, -109, 69, -107, 78, -43, 109, 98, 27, 37, -36, -31, -30, -91, -60, -95, 49, -23, 120, 112, -102, -32, -27, -18, 5, 54, -82, 38, 105, -38, -41, -91, 60, 68, 125, 110, 72, -57, 25, 46, -57, 71, 98, 50, 12, -5, -55, 94, 68, -128, -113, 44, 125, -101, -89, -58, -106, -65, 16, -93, -109, 59, 98, -47, -1, 13, 115, -23, -36, 80, -111, -75, 108, 99, -19, 88, 49, -84, -54, -20, -88, -94, 3, -43, 18, -33, -31, -22, -3, -125, -94, 7, 38, -108, 112, -86, 21, -108, -125, 81, 76, -68, 71, -96, 61, 126, -33, 120, 89, -123, 122, 19, -104, 111, 47, 37, 38, -21, 71, 113, 108, 86, 115, 13, -16, -54, -101, -95, 111, -70, 10};
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
    msg.setTimeStamp(0.4173439124547358);
    msg.setSource(12080U);
    msg.setSourceEntity(56U);
    msg.setDestination(9997U);
    msg.setDestinationEntity(225U);
    msg.fps = 176U;
    msg.quality = 157U;
    msg.reps = 126U;
    msg.tsize = 141U;

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
    msg.setTimeStamp(0.5362602019533055);
    msg.setSource(52325U);
    msg.setSourceEntity(63U);
    msg.setDestination(32429U);
    msg.setDestinationEntity(245U);
    msg.fps = 108U;
    msg.quality = 58U;
    msg.reps = 108U;
    msg.tsize = 10U;

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
    msg.setTimeStamp(0.6775235494327502);
    msg.setSource(57045U);
    msg.setSourceEntity(17U);
    msg.setDestination(43485U);
    msg.setDestinationEntity(139U);
    msg.fps = 233U;
    msg.quality = 36U;
    msg.reps = 13U;
    msg.tsize = 134U;

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
    msg.setTimeStamp(0.8111867059013437);
    msg.setSource(41269U);
    msg.setSourceEntity(29U);
    msg.setDestination(10271U);
    msg.setDestinationEntity(220U);
    msg.lat = 0.9915966158107296;
    msg.lon = 0.8142606961823767;
    msg.depth = 72U;
    msg.speed = 0.3533188848470936;
    msg.psi = 0.2848144631444103;

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
    msg.setTimeStamp(0.6511672257283783);
    msg.setSource(13628U);
    msg.setSourceEntity(96U);
    msg.setDestination(31409U);
    msg.setDestinationEntity(187U);
    msg.lat = 0.42871224563654997;
    msg.lon = 0.4765741977812069;
    msg.depth = 95U;
    msg.speed = 0.024724285381443;
    msg.psi = 0.0457243205681408;

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
    msg.setTimeStamp(0.3959546996821285);
    msg.setSource(55819U);
    msg.setSourceEntity(13U);
    msg.setDestination(60958U);
    msg.setDestinationEntity(174U);
    msg.lat = 0.41545811133465094;
    msg.lon = 0.3672920556178194;
    msg.depth = 0U;
    msg.speed = 0.8361254028945349;
    msg.psi = 0.2914771092642251;

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
    msg.setTimeStamp(0.8527531641293046);
    msg.setSource(45354U);
    msg.setSourceEntity(66U);
    msg.setDestination(24916U);
    msg.setDestinationEntity(107U);
    msg.label.assign("PVWQKUGEEDVOIXYNEBMTBFTAFDROHVCRMLSLYCCANBCUSPEWVJDROAHOPNLZ");
    msg.lat = 0.8143336303748887;
    msg.lon = 0.33528480361127155;
    msg.z = 0.8206332834307685;
    msg.z_units = 180U;
    msg.cog = 0.6552654999566512;
    msg.sog = 0.44823023708105847;

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
    msg.setTimeStamp(0.7310815687551613);
    msg.setSource(37762U);
    msg.setSourceEntity(20U);
    msg.setDestination(63843U);
    msg.setDestinationEntity(198U);
    msg.label.assign("OHUNJKUUARLNNAEMDFFNZOPUFMEYAKNAORHPNCEHTIFOOKDOMZLSSMWNCGEPUWQVMKFUULTISNEHIMQMOJUSKMDYVGXSAWWWDGSNFYJJCQGIGBKQVRTZVYAFIFUSPCHVTWRDLJYIYXKCXMDZCXSEOLBKTBXY");
    msg.lat = 0.8444055909118666;
    msg.lon = 0.10289964884442926;
    msg.z = 0.8111295380417535;
    msg.z_units = 246U;
    msg.cog = 0.16949557621686062;
    msg.sog = 0.5371577103545193;

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
    msg.setTimeStamp(0.5498617555140758);
    msg.setSource(48254U);
    msg.setSourceEntity(158U);
    msg.setDestination(57125U);
    msg.setDestinationEntity(32U);
    msg.label.assign("TLBCGXOGLFIGHVSMPBSPJMYUWKVMYTNUIUIBVPWYGUGFAKMQCOLNGPERVTQXRBAXTDBVXPVHAZHIJFDZNOTDTWIIYPJBWRJOCZANXBQVMFWKEMLEHUQWABZZITH");
    msg.lat = 0.15744791445804773;
    msg.lon = 0.09586878544831012;
    msg.z = 0.7451445196435943;
    msg.z_units = 133U;
    msg.cog = 0.5282249926156388;
    msg.sog = 0.10195484981415759;

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
    msg.setTimeStamp(0.1194008509625275);
    msg.setSource(26604U);
    msg.setSourceEntity(156U);
    msg.setDestination(38875U);
    msg.setDestinationEntity(146U);
    msg.name.assign("MXGLHTFAMJOXVTQGKHDDILOGCZPZIXHEKBYIBNDCTYFSUOYHIOWNBYRSOBUAIHFB");
    msg.value.assign("SRXDOFWLTTXBMJYEEPAWFKNDVPFUCKBEGCFTQHMLSJNCLPDRFBPIIVKLHCDOOUEQGJJOMHRDJEDXOIHTIPMUVLRYVRXHTIZTDPDBVMWSFXYXVXBZRUUIZSODXOGJQMALGRRNZWJKGAKMOAOBYSWHSQIVCLPZAIKGQRWTELTETZKYDCKUPINALLK");

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
    msg.setTimeStamp(0.37852934371213065);
    msg.setSource(16218U);
    msg.setSourceEntity(49U);
    msg.setDestination(2421U);
    msg.setDestinationEntity(243U);
    msg.name.assign("PKTSIPCDYVKMTAFBJOXJSSCEODXNGFWVFDNTGVLGQJSBIYDMQWHKFLXUJIPWLZAI");
    msg.value.assign("VPHDQWIIPMEHHJIFYSDBMOFRZZSKLLEFDUBVXJXLCBJVZUOG");

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
    msg.setTimeStamp(0.6605107247529345);
    msg.setSource(15633U);
    msg.setSourceEntity(3U);
    msg.setDestination(33502U);
    msg.setDestinationEntity(123U);
    msg.name.assign("CFKXNFBZQPJXSGVYPVNWEWSOSUJFXEPYZZZJTLOGEQQWYRRPQKRUKUHCQIFSXCHXWZAKBPWRYVGSVCAUBCRTNBNJXAXBRAYAELZMMFZTHLBPDJAGDEQSVFITIHPIMLFJBSLCUDBCXWIMSJDGGRQJURLLTUKOFWENOAXLWASLOKKKZEBUDIPDYOOCIVWALGIQNHQYPBODNUNTPDWUNTGCMTONGOMYEI");
    msg.value.assign("VQBFAZNXKNDKFLIIACU");

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
    msg.setTimeStamp(0.8401368988160404);
    msg.setSource(42863U);
    msg.setSourceEntity(240U);
    msg.setDestination(30461U);
    msg.setDestinationEntity(16U);
    msg.name.assign("ZUVLEJNKCBGIELDVXAZYXICNNVUJTMPQMRIKDWRQYVZVOVWVCMXUFSJXMJPWMEDQFOAYBUHHSMONRPHJRQGLTNDTKIUCSHDEAAKPPBUTBGARGWCYMGQZEAXHLXJNNQZZBUUXBTDNGKJSQGGBHNCOAESILKYZXCKAHTUHBUJSFYERSZRGAXLPVWKFERFTDJFPIWMFIMSFPIXTRDSCNLWYWFYTIYPGKLOVOPWIHESOHZD");

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
    msg.setTimeStamp(0.5996718790008916);
    msg.setSource(8246U);
    msg.setSourceEntity(86U);
    msg.setDestination(23257U);
    msg.setDestinationEntity(82U);
    msg.name.assign("EFTCPRWNBZJEEWLSBIWUPDYLPUEIFULDPWMHTQRCAJVSUTSUYXOLSPUSRBRBKZTGYXNOHMRDEKILUAZYQNAGMNPAHBJVKNQUITGMHZDIVBISWCXJBPNKXGNJFTVZXKBVGNCGQIKJQJOCBGFQLISYAHKIQZMHJGXDVZUI");

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
    msg.setTimeStamp(0.7368439554907348);
    msg.setSource(30874U);
    msg.setSourceEntity(59U);
    msg.setDestination(6128U);
    msg.setDestinationEntity(231U);
    msg.name.assign("BXCZKOEFQHWYOIVDSUGUNHYOAMBZRGWYYZZLVWDWKGQIRSMVEOPLAIXAXYAELNGJJDWQBIILTKMRBCHSTSFFEPVCZVPVNPLOKWUNSABHHKVYDJNZXGMIBEQZCBBTUSRXFPKTLMWZEQOFAJLUDHDNJXFUINHUJDUUAPQIRRZGTFCMXQQZLISWMGNMJNTEJCRGHCKORPCVKJAGSCQCSFSPGKPWLUHYEE");

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
    msg.setTimeStamp(0.30769652758077226);
    msg.setSource(34986U);
    msg.setSourceEntity(91U);
    msg.setDestination(37743U);
    msg.setDestinationEntity(79U);
    msg.name.assign("LTSFCXKXRXBONYMXXNEBIJIASBKLOHHAPBTJDUKMSRFEWWJBJMDNVMYGJNKUSDTIMPGHPIQLVUGATREWJWGPNWEVSVO");
    msg.visibility.assign("VKMQXWLAFPEBFIRVZRNJYXYNSUBOUJYNPILSPTLOACQEIQMGFJGGHVLLONDTUNNTEVACIHTOPPAREDMFRXZYMRBSKQZADDHZFMOQDFFCXPBOHUKKWUMOVCIKZAKXATIQYWMQVXPCEOLDSDWWGERZKGEBJQMXKCVWAJUHPMCYYJWWF");
    msg.scope.assign("TFCZFQVOOTSLVVFLPIISCIYXWTWNLFQXEDSLADPDJSAFIHTLHHWJ");

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
    msg.setTimeStamp(0.8854631357245208);
    msg.setSource(22581U);
    msg.setSourceEntity(96U);
    msg.setDestination(40455U);
    msg.setDestinationEntity(221U);
    msg.name.assign("NKHIVBEJIYAAWUINMIFKCUTJJVKYUYOPBWBWXWZCNRKFNQVPMQZXEAVLLNQTASJBMGDIDQANCNSRSTMBPQKZMMSJHJRHWBCEMPIMERITFUDSHACHWTNHSXONFXEWZEYRPOOXVBOYQAVPTNIROMDROYLEJMACJVTVDSHDHWGBFELPLGOFTKGGIZOGFXPZXJHOFTDGUCVWUWCLGYFZSLCSZFPJYURZDURCYEGSL");
    msg.visibility.assign("JNBIGLCTRNWFSQLCJPQLAZKHLWDZDOWBITWZTONQDFDOIFJKYXAUGFMXFDHQKNEZHJBFUKWIPSRXONLEUEZGPHKNHAWOPMEKWASTOGLUWMJVJSHDGDPVZDGYVRKHTXERCHFUMJNTPTUDGKEABMCZXXTHBIMYJBQPSPCQSCIOVVRVEXAJAIWBQUXZQMEIRAIKSPHSEBYTJGLXVY");
    msg.scope.assign("SZCLSGZKWLHHOAYWJEBJYYYXWBRUWUXRVWBENGUKJCPFVQMCIQIPEJGBUIRGTPIBDEVBMHQFRQOQPPGNYEGTITPMSABABBRXOZFHSDVLFGMGV");

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
    msg.setTimeStamp(0.11297610547897607);
    msg.setSource(14307U);
    msg.setSourceEntity(170U);
    msg.setDestination(63731U);
    msg.setDestinationEntity(129U);
    msg.name.assign("YLJXLBDHDKTTLKPB");
    msg.visibility.assign("TGKWTNGZOAENMSWOPTBHHQHJDEWVVPLFRMFGAJRVRZBHTPQGTUJXPLKYYTRSNIMOCGZQNZQLGYWXKZCBBXHYMKRSQA");
    msg.scope.assign("ZZDONHLZCHZQGDFYFMXEPSTOYVBCFVUEXUUWMNAQARTQVAFEIYZPRXXFAHMZCOROGMPSTROFHPBJSYBULDYLYTBGPNCWAUQABNYJSCZCWVLFCSOEGGEVJDCISCDPYTEZ");

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
    msg.setTimeStamp(0.9630699678408735);
    msg.setSource(39386U);
    msg.setSourceEntity(29U);
    msg.setDestination(16810U);
    msg.setDestinationEntity(59U);
    msg.name.assign("SAUWDUYGVWMLCULWYPJVHAPMAESBQHLRZIQKGPVIYQNSUHRNHYQXJP");

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
    msg.setTimeStamp(0.4272330349617339);
    msg.setSource(24371U);
    msg.setSourceEntity(244U);
    msg.setDestination(6624U);
    msg.setDestinationEntity(102U);
    msg.name.assign("ESIUBHQHZARVETDTYIYTUMZZEUSTNSGUFJVAWQHKWAFTVSCOKGTBDXPWKFUDEZJFVUMNECPQYLCQRDBYGQGDMMYPDMBFYONHLNBXPJQBAUYFQILOGOWTBOGEOXCS");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("CYSHVOISLWCFUUMUSGBDERYTKNWBZLLZAHPPUGQTPFTKPQWYCKPXJDKZHVVJSDOTSGDBRLNZQPGFKKDJDYFRIMHDAJLBOOBLHACXRSYGFYTUOEFVXMJRZMJG");
    tmp_msg_0.value.assign("FHSWHQMWYEUGPJGEUBDWOORLOUNMIUCKKFZYMBUDVNJEQTYBEYGVFTXWACDSFBKHREVRAFPRUYVLXPRFKDKOVMSLCMFOJPBKGQYAUTJAE");
    msg.params.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.009883832869629239);
    msg.setSource(39389U);
    msg.setSourceEntity(254U);
    msg.setDestination(63986U);
    msg.setDestinationEntity(60U);
    msg.name.assign("PXBBEWYCVIGDVRJZSIGXRAYSCHIT");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("KOBPQIJUXMUUDPFHVOEJOGMUOTICRKIQXCPVTNORVGXACUIHLREYLAXVWSB");
    tmp_msg_0.value.assign("LIGGNYNXFOLJLZCYROQIGXGPWATSKKYTSNMHBMGKYTAVLWCBGUQUDEPIHRYTBVPPQFHZMKVPSOWOUDPWJBUPXRYAMWFMFOBBVFNUBFGSHOXQLIVAPHDASZORERRPRLMSVILMZSTLCABXYIUYMCHWKFHZWQLPMNEENJIIYZANKHTIZKBVFXFVJN");
    msg.params.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.5619325206939264);
    msg.setSource(14634U);
    msg.setSourceEntity(220U);
    msg.setDestination(64648U);
    msg.setDestinationEntity(91U);
    msg.name.assign("ZJCXNDUVQRIDLSOIMXXRDZPVLHYATFLZWLYBSFBMCJAJJVPEFWWEMOZLVGFJLHWAPPJNZKKDTFZCMDVMUVCXGHGDOXQMUSTHGRIFJVWQUBTYYRPKPTFURUBQCONIULQCMWWDCAAKYNSFMQJDAXPWYEEHYQGCKT");

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
    msg.setTimeStamp(0.5726169170187603);
    msg.setSource(38732U);
    msg.setSourceEntity(40U);
    msg.setDestination(499U);
    msg.setDestinationEntity(27U);
    msg.name.assign("SKNGAUWUIMKHOAEBJKDOFLFMDLJXNIPRVERWOFHVX");

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
    msg.setTimeStamp(0.5169818299194086);
    msg.setSource(47520U);
    msg.setSourceEntity(83U);
    msg.setDestination(63530U);
    msg.setDestinationEntity(135U);
    msg.name.assign("KGZSFOXAKNQCCSZFNTCPJARWNMPFTDZCEWXYJQXPPORHIDJIGHRJVOMCFQDUDSLAFOBHKUWDAZDZSXTSSRGVOSIUKQPNTDVXABRYHIGNGVLYWAKEEWOLHGZKWCNZUIUWIJIFYOBLRGLWEQOVYQGYUTXJRPJZDRKAPRXTMYEZFJQCBTCMGINMVMQBEAYUNBBBHUYDFMQPTHLRPU");

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
    msg.setTimeStamp(0.5176422003656551);
    msg.setSource(8259U);
    msg.setSourceEntity(117U);
    msg.setDestination(31907U);
    msg.setDestinationEntity(204U);
    msg.timeout = 109849470U;

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
    msg.setTimeStamp(0.5030789191519378);
    msg.setSource(56610U);
    msg.setSourceEntity(134U);
    msg.setDestination(65022U);
    msg.setDestinationEntity(238U);
    msg.timeout = 62744818U;

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
    msg.setTimeStamp(0.7200349542720687);
    msg.setSource(57774U);
    msg.setSourceEntity(114U);
    msg.setDestination(42339U);
    msg.setDestinationEntity(102U);
    msg.timeout = 1693053564U;

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
    msg.setTimeStamp(0.08559699104687535);
    msg.setSource(59742U);
    msg.setSourceEntity(74U);
    msg.setDestination(48454U);
    msg.setDestinationEntity(253U);
    msg.sessid = 1850182258U;

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
    msg.setTimeStamp(0.5872946715599893);
    msg.setSource(64893U);
    msg.setSourceEntity(12U);
    msg.setDestination(24777U);
    msg.setDestinationEntity(93U);
    msg.sessid = 2676725878U;

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
    msg.setTimeStamp(0.7148193785787403);
    msg.setSource(2789U);
    msg.setSourceEntity(11U);
    msg.setDestination(25126U);
    msg.setDestinationEntity(222U);
    msg.sessid = 4171292724U;

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
    msg.setTimeStamp(0.09290506771134754);
    msg.setSource(5909U);
    msg.setSourceEntity(93U);
    msg.setDestination(28830U);
    msg.setDestinationEntity(18U);
    msg.sessid = 1603110372U;
    msg.messages.assign("YWCHFNRPQBOHZRXTQJRLPGEJAOX");

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
    msg.setTimeStamp(0.3949907389389177);
    msg.setSource(52006U);
    msg.setSourceEntity(176U);
    msg.setDestination(28253U);
    msg.setDestinationEntity(240U);
    msg.sessid = 660895782U;
    msg.messages.assign("OQRTIIUNOVCVAZPKEJMBKYAUUBZIBDSHFGIGPXMOMKPQBIRNRUYBQONVTFGWAPGCGZUMWLXCINXVBEVPSCUQLGZR");

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
    msg.setTimeStamp(0.2529574058292573);
    msg.setSource(13282U);
    msg.setSourceEntity(168U);
    msg.setDestination(45547U);
    msg.setDestinationEntity(167U);
    msg.sessid = 3915319197U;
    msg.messages.assign("CCPTEKHXYLXOEMLLIIFGVEGDCNORCSFEEFDDAZLOOMQENVTRBWAHZLHPBSFQOKUSW");

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
    msg.setTimeStamp(0.7636855188411649);
    msg.setSource(2514U);
    msg.setSourceEntity(254U);
    msg.setDestination(25009U);
    msg.setDestinationEntity(99U);
    msg.sessid = 1712864513U;

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
    msg.setTimeStamp(0.28801499361395655);
    msg.setSource(45207U);
    msg.setSourceEntity(117U);
    msg.setDestination(14762U);
    msg.setDestinationEntity(98U);
    msg.sessid = 4237718582U;

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
    msg.setTimeStamp(0.4560644787417186);
    msg.setSource(6683U);
    msg.setSourceEntity(165U);
    msg.setDestination(32897U);
    msg.setDestinationEntity(139U);
    msg.sessid = 2589001602U;

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
    msg.setTimeStamp(0.6792694109905821);
    msg.setSource(18402U);
    msg.setSourceEntity(73U);
    msg.setDestination(58861U);
    msg.setDestinationEntity(228U);
    msg.sessid = 1477630323U;
    msg.status = 19U;

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
    msg.setTimeStamp(0.5622957386919762);
    msg.setSource(43091U);
    msg.setSourceEntity(39U);
    msg.setDestination(20870U);
    msg.setDestinationEntity(161U);
    msg.sessid = 3160793582U;
    msg.status = 230U;

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
    msg.setTimeStamp(0.2382056893248955);
    msg.setSource(55605U);
    msg.setSourceEntity(144U);
    msg.setDestination(46147U);
    msg.setDestinationEntity(200U);
    msg.sessid = 3720122723U;
    msg.status = 252U;

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
    msg.setTimeStamp(0.21311632443371897);
    msg.setSource(49866U);
    msg.setSourceEntity(62U);
    msg.setDestination(22036U);
    msg.setDestinationEntity(169U);
    msg.name.assign("JPUARFGGBLYECIVAWSMLBROWKPVQIPKZLMRJRTGMRGONLFHDYLKVNVWXLAWUGBKCJJJPTPXHFSFPJTOISKFVJBEHBTZWUGHIAZSAPQYUSWSSRZYEJYMBCQPVKTQSYSDWGCCNCZHDZNHIGARI");

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
    msg.setTimeStamp(0.26853909192094794);
    msg.setSource(14251U);
    msg.setSourceEntity(249U);
    msg.setDestination(16140U);
    msg.setDestinationEntity(230U);
    msg.name.assign("KLMTIVGYDWYFOXEJWPGXCAWFOVAAEJQLRXWXZLXUZEPASXKJESCT");

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
    msg.setTimeStamp(0.5128519858212713);
    msg.setSource(60164U);
    msg.setSourceEntity(213U);
    msg.setDestination(9418U);
    msg.setDestinationEntity(111U);
    msg.name.assign("NTCYXBZDACNYFUVMGQFOLUEYRIOWWOXNSLHJISREWSYQMWPNXKQQHRMSKJKXEJPOZMVPLAZAJAQGMURSKTCDHZDLIFDYKGWCTISHIQTBNOEQXAUPQMCJJ");

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
    msg.setTimeStamp(0.5331350076769368);
    msg.setSource(23542U);
    msg.setSourceEntity(253U);
    msg.setDestination(60848U);
    msg.setDestinationEntity(10U);
    msg.name.assign("ECMRCLQTSWGTAAQSWIMXFFFOVVCWYHJJFIBKOGKV");

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
    msg.setTimeStamp(0.04491289056178449);
    msg.setSource(3165U);
    msg.setSourceEntity(210U);
    msg.setDestination(34193U);
    msg.setDestinationEntity(36U);
    msg.name.assign("FVSQTJNYTYWVTUS");

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
    msg.setTimeStamp(0.15105066980118464);
    msg.setSource(33168U);
    msg.setSourceEntity(116U);
    msg.setDestination(21727U);
    msg.setDestinationEntity(127U);
    msg.name.assign("IIIYHYZIRSFOQWXWBJSVEJDVTPCQASCHGJONBDXVUSXNXHMDBAFRVEBBNVWIXVWKCLMOIOOOWYTSHFEMCMWKRDGPUYTHNUCJJCNLQJTREKGZSPQYENNQ");

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
    msg.setTimeStamp(0.92304606724602);
    msg.setSource(48406U);
    msg.setSourceEntity(235U);
    msg.setDestination(23834U);
    msg.setDestinationEntity(124U);
    msg.type = 82U;
    msg.error.assign("FQDNSIFRLVST");

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
    msg.setTimeStamp(0.3710049722637564);
    msg.setSource(32355U);
    msg.setSourceEntity(80U);
    msg.setDestination(18843U);
    msg.setDestinationEntity(183U);
    msg.type = 225U;
    msg.error.assign("CJYZHLGFLKCOEBBAIXHMDVWRGPGECVJXSNAU");

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
    msg.setTimeStamp(0.5054543208223274);
    msg.setSource(16156U);
    msg.setSourceEntity(205U);
    msg.setDestination(53545U);
    msg.setDestinationEntity(203U);
    msg.type = 107U;
    msg.error.assign("DTBCWVGYATZFAKKPWECASFYMZPJJKOXHNXEPNWLSZSDORYNTEVVYORCMDBWCIQXQRUIHQBFGGYUYJFTLJLLODQMAZFOANBSJONTKCKILUTWGVHSVUXMHLQSLORMBEMMDPFPUQRUWAYIDRSJWKPZZBFVPTQGQCKJ");

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
    msg.setTimeStamp(0.218828901787131);
    msg.setSource(18417U);
    msg.setSourceEntity(79U);
    msg.setDestination(63559U);
    msg.setDestinationEntity(33U);
    msg.seq = 53413U;
    msg.sys_dst.assign("XBITLHLXEQYAIUUXDHAXPMJFRLDKXZVIAIWWNRKCGYGRSTXPGIIDPNRHSIUBCWAWSNBXEEROFOVFBMNLMFOGAPZLMISHTOUDULQSNEGZERZOEHHHXOKUCNTBUMDINVDVTQQQCSQTFPRHFRCNPBCYWGTYZJWPMLZKLWOJQHCTWR");
    msg.flags = 213U;
    const signed char tmp_msg_0[] = {-4, 72, -112, -111, 13, 54, -119, -29, -34, 4, 108, -84, -20, 96, 27, 38, -41, 86, -67, -80, 56, 47, -49, -126, 23, -52, 55, 76, -121, 45, -64, 92, -120, -39, 67, 91, 63, -28, 26, -127, -21, 92, -7, -69, -26, -13, 88, -43, -64, -108, 22, 104, 27, -115, -52, -9, -4, -123, -19, -109, 0, -128, 82, -54, -64, 17, 89, -88, -105, -119, 86, -35, 38, 63, -68, -33, 67, -109, -53, 56, -60, -78, -109, -99, -101, 55, -13, -118, 106, -4, 123, -109, 83, -70, -46, -31, 105, 57, -79, -69, 90, 91, -26, -123, 55, -63, -106, 86, -107, -47, -113, -21, -111, -12, 64, 125, 58, -103, -119, 31, 59, -94, 22, 63};
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
    msg.setTimeStamp(0.6734093532897936);
    msg.setSource(10007U);
    msg.setSourceEntity(66U);
    msg.setDestination(27176U);
    msg.setDestinationEntity(182U);
    msg.seq = 13247U;
    msg.sys_dst.assign("WSWVRTPLJUAJTALMHQTVNCCLKEWEGXSKVWSEGGAGUPDWLGHKHGIFDSNCWIAZQJSXICBUFYAMCDFRMDSMLKIYNRWFIXSKTETRGFIATZHRBMOUXYSUJVNXYCXMEOBOIIRWJMTBQPPMNJHKHGOQVNPJBYFRWXEAZBOMIPGLOWYQPSNRKZCSGUTOFQAVHHBVMDAQOHANQLDOZ");
    msg.flags = 171U;
    const signed char tmp_msg_0[] = {-20, -37, 35, -124, 102, -60, 51, 14, 17, 121, 37, -37, 9, 69, -82, -74, -99, 60, 46, -43, -98, 74, 121, -95, -122, -12, 18, -26, -93, -98, 77, -46, 70, 33, -13, 51, -76, -3, 62, -91, -49, -19, 123, 39, 65, -109, -98, 120, 7, 33, -81, -73, -40, -115, -126, 113, 80, 63, 13, -105, 104, -37, -74, -92, 70, 70, 75, -50, -90, 122, -82, -116, 69, 72, -93, 107, -80, -44, 41, -106, 12, -52, 46, 87, -39, 27, -31, 18, 7, -79, -48, -22, 124, 114, -75, -53, -112, -74, -104, -52, 107, 12, -80, -15, 52, -100, -55, -15, 24, -118, -59, 56, -108, 75, 74, 21, -76, -50, 18, 51, -8, -98, 113, -106, -83, -11, -112, -29, -114, -25, -33, 113, -36, 67, -31, 47, 42, 89, 75, -33, -83, 87, 76, -89, -78, 37, 39, 125, 49, 83, -63, -87, -64, 68, 119, -63, -43, 22, -88, -106, 113, 2, 69, 17, -6, 55, -49, 11, 54, 84, -115, 118, -127, -77, -103, 26, 71, 104, -9, -126, 41, 26, -84, -103, 49, 124, -54, 86, -11, 122, 124, 120, 82, -115, 88, 67, 19, -82};
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
    msg.setTimeStamp(0.5867422072244983);
    msg.setSource(1784U);
    msg.setSourceEntity(76U);
    msg.setDestination(39378U);
    msg.setDestinationEntity(251U);
    msg.seq = 10048U;
    msg.sys_dst.assign("LNWNRZSIKSVCZYHGGMEXPWZXTETMTZTNVROXSORROW");
    msg.flags = 229U;
    const signed char tmp_msg_0[] = {126, 58, -21, 98, 34, 101, 70, 23, 109, 61, -50, -88, -102, 106, -2, -77, -25, 96, 26, 104, -15, -23, -23, 92, -33, -11, -66, -112, 53, -110, -31, -105, -118, -103, -37, 28, -48, 38, 35, -125, 13, 67, 35, -34, -7, -13, -124, -52, -81, 5, -18, -126, -54, -86, -32, 40, 19, 82, 119, -42, -76, -65, -106, 107, -32, 31, 69, -11, 36, 117, -120, -116, 84, -104, -34, 8, 101, -59, 115, 60, 52, 29, -17, 121, 106, -69, 7, 38, 13, -77, 73, 37, 81, -62, 19, -63, 23, -77, -65, 20, -79, -69, -52, -86, -124, -99, -2, 56, -3, -74, -23, 76, -20, 24, -25, 119, -92, -66, 5, -17, 79, -65, 75, 97, 108, 57, 82, -16, 23, -32, -49, 17, -128, -90, 50, 43, 100, -127, 108, 10, -12, -105, 35, 19, -33, -128, -81, -48, 44, 0, -4, 93, -116, -100, -48, 56, -43, 111, -55, 94, 19, -119, 56, -31, -70, 20, -106, 117, -72, 87, -6, -110, -103, 56, 89, 4, -52, -48, 117, -84, -33, -16, -61};
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
    msg.setTimeStamp(0.7373991034170119);
    msg.setSource(36646U);
    msg.setSourceEntity(60U);
    msg.setDestination(61573U);
    msg.setDestinationEntity(55U);
    msg.sys_src.assign("TAMNWNPBARJESGCNMVODNSFJRKTCXDUYXBOECLIVZARFIVEIK");
    msg.sys_dst.assign("QSDDVUITECFMPPNQHVRTRQGMKURHZUQOCKDTQHVRBQRWAFIHLDWAAXPTZCSKOZXKIVFVLCXGSZAUNWHMRNLXQWWDYHIKIYDIJLPYYFYXGRKMBOIAPUYVEOWGJBKQIHJTWSGGASCZJPEYGRJEMTCMDQFZLUTZWPAEBPXIOQAXYFHKDCENNMMDVLAEKWVJNLFTJNVBRCHYYAHBEBEMEFLBUPUKFPLRSWNXGDFNTSOOTVJZCBSO");
    msg.flags = 187U;
    const signed char tmp_msg_0[] = {37, 101, 111, 64, 5, -105, -26, 93, -73, 126, 126, -95, 18, -32, -69, 80, -79, 40, 97, 47, -52, 107, 93, -29, -16, 32, -19, 94, 114, 29, 7, 123, 108, 28, 118, 51, 66, 66, 41, -35, 105, -14, -101, 39, 96, 122, 61, 89, 38, -18, 79, -36, 75, 28, 96, -85, 6, -118, 27, 114, 59, -66, -57, -31, -80, 20, -72, 49, 98, 89, 123, -126, -4, 111, 21, 53, -106, 100, -47, -95, -1, -104, -24, -34, -115, -83, 99, -93, -2, -60, -88, -82, 40, 103, 78, 39, -46, 19, -14, -23, 45, -119, -100, 49, 33, 45, 12, 117, -58, -11, -114, -21, -19, -95, -56, 118, -11, -12, -112, -20, -113, 20, -49, -113, 68, -9, -84, -58, -2, 8, 66, 46, 109, 71, 55, -40, -24, -80, 50, -105, 81, -8, 108, -66, -56, 83, -55, 11, 126, 94, 25, 47, -40, -51, 111, -24, 7, 22, -34, 115, 123, -118, -11, -114, 77, 59, 102, -64, -74, 20, -57, 83, -88, -87, -55, -119, -28, -124, 64, -5, 59, 6, -22, 121, 8, -70, -74, -108, 14, 89, 50, 43, -79, -113, -100, 42, 75, 19, 8, 88, 88, 116, 89, -22, 21, 115, -33, -122, -31, -47, -75, 112, 56, 51, -68, 108, 58, -13, -9, 21, 98, -88, -9, 41, 54, 24, -91, 114, -13, 81, 80, 10, -95, -105, -4, -101, 107, 3, -76, 0, 4, 99, 58};
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
    msg.setTimeStamp(0.4484284495945561);
    msg.setSource(54855U);
    msg.setSourceEntity(152U);
    msg.setDestination(64352U);
    msg.setDestinationEntity(124U);
    msg.sys_src.assign("LIRGXOVWIGWNGNFHHQVRRIBQJKVAJEGJFIHSJQPFCBGUXZ");
    msg.sys_dst.assign("IKXJGEBIEJLPSUKSMDJXQYTHHZIQMSEOQKLWCINRBNZPJOZWPNFOGSOMXTWCTPJFDZGDNAPIXYQQMZSZDNLLEPVUCUBPONOHOBFBGNFKIXPGHDZWEZEMWRDWLUJFXCQXMRLKWTRUSGGXVA");
    msg.flags = 139U;
    const signed char tmp_msg_0[] = {124, 21, -118, 60, -58, -116, 6, 78, -77, 84, -92, 63, 38, -13, 112, -91, 57, -42, -117, -54, 1, -79, 86, 71, -38, -72, 42, 93, 63, -39, 94, 8, 77, -65, -13, -66, -48, 92, -10, 34, 29, 125, -116, 3, 88, -99, -83, -106, -122, -63, 73, 96, -59, 28, -45, 9, 98, 5, -7, -111, 107, -81, -108, -127, 44, 79, 7, 45, 84, -72, 39, -93, 99, -88, -123, 75, -41, -50, -72, -36, -2, -74, -113, 123, -20, 94, 75, -13, 57, -26, 57, 66, 41, 56, 21, 0, -93, 43, 75, -10, 80, 83, -41, 97, -94, 36, 24, -8, -49, 64, -99, -65, -125, -26, 68, -112, -113, -57, 73, -86, -30, 124, 104, -100, -122, -13, -5, -126, 39, -18, 46, -117, -19, 71, -83, 89, -110, -113, 11, 123, -48, -74, 120, -45, 114, -78, -28, 39, 6, 83, -51, 121, 39, 61, -45, 74, 71, -118, -114, -68, -74, -34, -51, 31, -55, 100, 31, -72, -98, -57, 2, 44, -83, 97, 119, -60, -86, -81, 96, -128, 16, -113, -97, 85, 24, -9, -118, 40, -125, 71, 84, 57, 113, -81, -27, -46, -59, 44, -115, 14, -40, 37, -42, 39, 68, 126, -20, 54, -40, -32, -88, -27, 26, 119, 56, 68, -115, 59, -126};
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
    msg.setTimeStamp(0.348392465329071);
    msg.setSource(54243U);
    msg.setSourceEntity(38U);
    msg.setDestination(41620U);
    msg.setDestinationEntity(179U);
    msg.sys_src.assign("TCPNLSQIWTPINYYOOUSFYUQZGGXZYIVVFIQJJFZACRAFKAVSNWQMVOVAEMQFRUCLSXAJYHLZMWWTVOAYRWCULGBDKRHFFTDOWVPOULFJHNDXMPHEKCDJQKXGXDMZKCBNIBACSWBGGEBYVJNFKWAURQWRHMHERCRYXMTZEGOIXHNJFMZJG");
    msg.sys_dst.assign("JINCEHOVVFNAWUAWTNDMSIOEDVBAHFGJEGCBCBHNSPAGBNMFUEACISSLCMGBGDMJABYTWKFBBWDSRJZYORWZWQEHYNRTRBPLRQXJNCCYZLLUXZLWGOXQBUHKVKPPFAKOZIIUQXXFUKTZXSIDSERFHZVFLSUGXRNXFNDQAOOHWKQLIDCPVYOYKCZYTYVURWXEFYVQPDDHKLEJZTIJZPEUYSRMKITKAHHJVCSVTQOTPRWGDQLMUMOPQ");
    msg.flags = 79U;
    const signed char tmp_msg_0[] = {-87, 102, 69, 40, 82, 0, -34, -32, -14, -56, -75, 61, 97, 12, 0, -111, 123, 49, 48, 102, 109, 110, 26, 39, -98, -16, -26, -113, -2, 64, -11, 79, 113, -62, 30, 90, 78, 73, 26, 119, -41, -78, 56, -51, -103, 28, 62, 112, 109, -88, -21, -117, 9, 44, 8, -75, 73, 19, -110, 69, 60, -36, 41, 48, -19, -122, -82, 78, 74, 6, -106, -28, -19, -31, -91, -119, 16, 68, -84, 8, -13, -36, 54, -24};
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
    msg.setTimeStamp(0.8189723264730818);
    msg.setSource(63613U);
    msg.setSourceEntity(112U);
    msg.setDestination(42974U);
    msg.setDestinationEntity(121U);
    msg.seq = 50251U;
    msg.value = 106U;
    msg.error.assign("KKUTLTYMVPTHNTDREBOWAJETWLEWTJVJVXSEIJYGKMMOVGFNCDKKAGSBOCNFGQOFBPSUZHNXXBSLGXOUHPMDRZJYSAOKQRTXIQWZHICJAAWSTUZQQLAAHPPFETSMAMQOHUXZUJADENKCBPVYHZWYTKFGFRFVIDSLX");

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
    msg.setTimeStamp(0.5898402365648177);
    msg.setSource(13853U);
    msg.setSourceEntity(249U);
    msg.setDestination(57399U);
    msg.setDestinationEntity(40U);
    msg.seq = 43724U;
    msg.value = 141U;
    msg.error.assign("JPJMOKTWQSGXRYJUSCGPJRNDKQLSQPAWLSOGSFJVCNEHVAUCTOIWKORUNOIJAPLFELQHQSQFDAWBFMZLKWSEMMVYESTTQMIHZBEACRFRGTLBHRTOUZDTDGKHXZREYIIXMMCCKNYOLZVPPEDDKHNIUYANFFOFBJUUXBGPWHUBIYZWVJOCRJXCTXAGH");

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
    msg.setTimeStamp(0.7043449174847153);
    msg.setSource(20793U);
    msg.setSourceEntity(204U);
    msg.setDestination(12767U);
    msg.setDestinationEntity(9U);
    msg.seq = 31709U;
    msg.value = 44U;
    msg.error.assign("ZKVWVSVFVXUSTBJXFOZQHRKQCXLYZASJDARYWFUEZ");

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
    msg.setTimeStamp(0.9955387638453691);
    msg.setSource(13497U);
    msg.setSourceEntity(101U);
    msg.setDestination(19854U);
    msg.setDestinationEntity(60U);
    msg.seq = 44825U;
    msg.sys.assign("VOKPZFBPLJHNFTQHTZZSDEFRAEAMKLKOWGQIXUYVWYYXRUHMHOGNTQSZVJAPCDUGDGJNOUNERJVYHFQUZXYFBEOFBGTYOAQCGRSWQSWKGWPSLCGACLCYESWKIDRXNWPPZISNNXERJPFBOZQOYVLZAABAIIILJVAZTDJMURYEUMCXFUXXVWDMNEF");
    msg.value = 0.03299413029734222;

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
    msg.setTimeStamp(0.362283168711484);
    msg.setSource(25284U);
    msg.setSourceEntity(202U);
    msg.setDestination(12736U);
    msg.setDestinationEntity(151U);
    msg.seq = 41615U;
    msg.sys.assign("NIREIFCIZRTENKXLFHXOBMUGQLOLIWEDIWTETVWYHPFWNZRLSABUSCQWINABPTVDSJUBKOWWONEZABNPPFQOYLNLSTXHMCAXRGJTVMTU");
    msg.value = 0.7997374263979599;

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
    msg.setTimeStamp(0.4971021876357897);
    msg.setSource(53641U);
    msg.setSourceEntity(65U);
    msg.setDestination(26957U);
    msg.setDestinationEntity(161U);
    msg.seq = 4321U;
    msg.sys.assign("YQWNTACOHLDPBSAGWGMCUZONQLZPMRIEDYXJXBKANFCNSPBJNFQJQVQQAUZEYESUVBLNDUKBLAPLSRRFSFUIHARODXJMHZOXKWPVDBYQUBCWDSCEABCHXGUMRLTOZFYQQPBPCNHOFREJCXCX");
    msg.value = 0.577840718907135;

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
    msg.setTimeStamp(0.5063346640681661);
    msg.setSource(26008U);
    msg.setSourceEntity(6U);
    msg.setDestination(63242U);
    msg.setDestinationEntity(179U);
    msg.seq = 3346U;
    msg.sys_dst.assign("ETVZRGWSLYWFXZMFUBEIEKXRTCFLNYROMBFSRDMOJMCBQPMYRHKIJDXMPVNAIKCQEKOYWCDEQSSHLLGNBUYGTENPIETYOEXDAZLGMKQHFFHFUJ");
    msg.timeout = 0.6148567249315936;

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
    msg.setTimeStamp(0.33517255706884874);
    msg.setSource(48538U);
    msg.setSourceEntity(90U);
    msg.setDestination(46341U);
    msg.setDestinationEntity(14U);
    msg.seq = 14199U;
    msg.sys_dst.assign("DFRLIOWPTNPHAJLNAUOXIMUWUBEEJCPVORDVVKCGMVHLCXLJFFYMQFHSTIQSWRTPNPEUJFKDWBHXAZEABOJCATGSQVUNLEDLDODMRZSRYZYBEOIAMQBFYUKAYYWRMSAYNIKGQCITHVUDDYHCUDTVKRABNVLXWZZEKWPTBSTSNMSRPXSQTPCNXRXFOIWRNQKLIGE");
    msg.timeout = 0.07730939150367333;

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
    msg.setTimeStamp(0.4796493543376865);
    msg.setSource(58924U);
    msg.setSourceEntity(111U);
    msg.setDestination(33634U);
    msg.setDestinationEntity(25U);
    msg.seq = 2750U;
    msg.sys_dst.assign("POPAPAAMAGTOIQZHNSIYMGXOTNCHSOPU");
    msg.timeout = 0.9975287946730659;

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
    msg.setTimeStamp(0.19730619021793938);
    msg.setSource(42858U);
    msg.setSourceEntity(63U);
    msg.setDestination(35320U);
    msg.setDestinationEntity(143U);
    msg.action = 251U;
    msg.longain = 0.3985730603153498;
    msg.latgain = 0.8016254270172822;
    msg.bondthick = 3745458950U;
    msg.leadgain = 0.5654669247337542;
    msg.deconflgain = 0.4242611700274185;

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
    msg.setTimeStamp(0.33574969302655744);
    msg.setSource(54417U);
    msg.setSourceEntity(6U);
    msg.setDestination(39874U);
    msg.setDestinationEntity(239U);
    msg.action = 206U;
    msg.longain = 0.3926581462868939;
    msg.latgain = 0.27681523005456665;
    msg.bondthick = 1823498709U;
    msg.leadgain = 0.8729786501509835;
    msg.deconflgain = 0.08230984525782503;

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
    msg.setTimeStamp(0.3194139694456889);
    msg.setSource(55826U);
    msg.setSourceEntity(214U);
    msg.setDestination(12517U);
    msg.setDestinationEntity(120U);
    msg.action = 124U;
    msg.longain = 0.9367033215248746;
    msg.latgain = 0.3649535910630167;
    msg.bondthick = 318139042U;
    msg.leadgain = 0.6747809155587908;
    msg.deconflgain = 0.803359354819199;

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
    msg.setTimeStamp(0.10113728859769111);
    msg.setSource(19538U);
    msg.setSourceEntity(65U);
    msg.setDestination(40953U);
    msg.setDestinationEntity(127U);
    msg.err_mean = 0.9246633196207348;
    msg.dist_min_abs = 0.5306573294075302;
    msg.dist_min_mean = 0.12889238032694028;

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
    msg.setTimeStamp(0.7857584022288924);
    msg.setSource(47121U);
    msg.setSourceEntity(224U);
    msg.setDestination(20558U);
    msg.setDestinationEntity(74U);
    msg.err_mean = 0.004204275581390471;
    msg.dist_min_abs = 0.6377362364590564;
    msg.dist_min_mean = 0.3377165400315699;

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
    msg.setTimeStamp(0.9172834994546417);
    msg.setSource(11494U);
    msg.setSourceEntity(98U);
    msg.setDestination(59857U);
    msg.setDestinationEntity(215U);
    msg.err_mean = 0.2506616721007642;
    msg.dist_min_abs = 0.585259204033008;
    msg.dist_min_mean = 0.3223327967622458;

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
    msg.setTimeStamp(0.3130043827656135);
    msg.setSource(39417U);
    msg.setSourceEntity(188U);
    msg.setDestination(3750U);
    msg.setDestinationEntity(60U);
    msg.action = 73U;
    msg.lon_gain = 0.9692987510323363;
    msg.lat_gain = 0.03893513839020468;
    msg.bond_thick = 0.5515326401114937;
    msg.lead_gain = 0.37574707556502407;
    msg.deconfl_gain = 0.9591518603858421;
    msg.accel_switch_gain = 0.22694518838499433;
    msg.safe_dist = 0.37969245040312294;
    msg.deconflict_offset = 0.8149868369190726;
    msg.accel_safe_margin = 0.08037219643187465;
    msg.accel_lim_x = 0.6583359610533045;

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
    msg.setTimeStamp(0.7698296632724964);
    msg.setSource(55817U);
    msg.setSourceEntity(209U);
    msg.setDestination(22370U);
    msg.setDestinationEntity(148U);
    msg.action = 32U;
    msg.lon_gain = 0.003424215216642823;
    msg.lat_gain = 0.20744117443224397;
    msg.bond_thick = 0.6369313705895023;
    msg.lead_gain = 0.7798785658714239;
    msg.deconfl_gain = 0.3688589341974259;
    msg.accel_switch_gain = 0.2874724922838675;
    msg.safe_dist = 0.6347515831560614;
    msg.deconflict_offset = 0.23414297903666903;
    msg.accel_safe_margin = 0.8611641953605044;
    msg.accel_lim_x = 0.19467310435657015;

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
    msg.setTimeStamp(0.33511446825660585);
    msg.setSource(34142U);
    msg.setSourceEntity(219U);
    msg.setDestination(62534U);
    msg.setDestinationEntity(49U);
    msg.action = 93U;
    msg.lon_gain = 0.8076146691618283;
    msg.lat_gain = 0.09086202969970836;
    msg.bond_thick = 0.7459603510220547;
    msg.lead_gain = 0.3056290977789565;
    msg.deconfl_gain = 0.2578399004801135;
    msg.accel_switch_gain = 0.008089295878012104;
    msg.safe_dist = 0.5373135482491407;
    msg.deconflict_offset = 0.7110437834911895;
    msg.accel_safe_margin = 0.021421370436764176;
    msg.accel_lim_x = 0.9361702250108164;

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
    msg.setTimeStamp(0.20766207338593812);
    msg.setSource(29184U);
    msg.setSourceEntity(110U);
    msg.setDestination(42286U);
    msg.setDestinationEntity(98U);
    msg.type = 160U;
    msg.op = 183U;
    msg.err_mean = 0.5336176394047838;
    msg.dist_min_abs = 0.2284735130353095;
    msg.dist_min_mean = 0.5668075764798511;
    msg.roll_rate_mean = 0.679544176269983;
    msg.time = 0.09200348649299273;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 68U;
    tmp_msg_0.lon_gain = 0.6166859658641257;
    tmp_msg_0.lat_gain = 0.7753428099456389;
    tmp_msg_0.bond_thick = 0.8423129312905736;
    tmp_msg_0.lead_gain = 0.5995197239156238;
    tmp_msg_0.deconfl_gain = 0.9692403614132296;
    tmp_msg_0.accel_switch_gain = 0.5098163789472426;
    tmp_msg_0.safe_dist = 0.19683626362065398;
    tmp_msg_0.deconflict_offset = 0.804266651536647;
    tmp_msg_0.accel_safe_margin = 0.969478238172938;
    tmp_msg_0.accel_lim_x = 0.29650013657816476;
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
    msg.setTimeStamp(0.391440930859717);
    msg.setSource(30275U);
    msg.setSourceEntity(116U);
    msg.setDestination(10424U);
    msg.setDestinationEntity(135U);
    msg.type = 214U;
    msg.op = 253U;
    msg.err_mean = 0.7797526543802719;
    msg.dist_min_abs = 0.42067644660057724;
    msg.dist_min_mean = 0.8668916752614589;
    msg.roll_rate_mean = 0.45788508475426704;
    msg.time = 0.6291526747658078;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 176U;
    tmp_msg_0.lon_gain = 0.35263542161605144;
    tmp_msg_0.lat_gain = 0.08172346954622334;
    tmp_msg_0.bond_thick = 0.22491571285839485;
    tmp_msg_0.lead_gain = 0.7265529072827774;
    tmp_msg_0.deconfl_gain = 0.22048141414600575;
    tmp_msg_0.accel_switch_gain = 0.9222504114974911;
    tmp_msg_0.safe_dist = 0.9932006695484604;
    tmp_msg_0.deconflict_offset = 0.6728929568583041;
    tmp_msg_0.accel_safe_margin = 0.306696357587653;
    tmp_msg_0.accel_lim_x = 0.744997847219863;
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
    msg.setTimeStamp(0.9419626651903946);
    msg.setSource(23859U);
    msg.setSourceEntity(15U);
    msg.setDestination(64550U);
    msg.setDestinationEntity(233U);
    msg.type = 203U;
    msg.op = 36U;
    msg.err_mean = 0.7899621561279757;
    msg.dist_min_abs = 0.08033999807386327;
    msg.dist_min_mean = 0.5036473264264012;
    msg.roll_rate_mean = 0.4800300703113639;
    msg.time = 0.42367331414453335;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 64U;
    tmp_msg_0.lon_gain = 0.5259459985037811;
    tmp_msg_0.lat_gain = 0.5425881469230825;
    tmp_msg_0.bond_thick = 0.4856973566233874;
    tmp_msg_0.lead_gain = 0.8773835907105177;
    tmp_msg_0.deconfl_gain = 0.829084157898464;
    tmp_msg_0.accel_switch_gain = 0.7382677939350594;
    tmp_msg_0.safe_dist = 0.665905200759773;
    tmp_msg_0.deconflict_offset = 0.5590083219415392;
    tmp_msg_0.accel_safe_margin = 0.5933597610894139;
    tmp_msg_0.accel_lim_x = 0.21825881228089616;
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
    msg.setTimeStamp(0.9287953726953674);
    msg.setSource(41041U);
    msg.setSourceEntity(123U);
    msg.setDestination(42679U);
    msg.setDestinationEntity(8U);
    msg.lat = 0.19154678822302917;
    msg.lon = 0.6903625190612246;
    msg.eta = 661315073U;
    msg.duration = 36998U;

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
    msg.setTimeStamp(0.7752943495815745);
    msg.setSource(57008U);
    msg.setSourceEntity(118U);
    msg.setDestination(65387U);
    msg.setDestinationEntity(135U);
    msg.lat = 0.40369402288438294;
    msg.lon = 0.8792944102126713;
    msg.eta = 1854014808U;
    msg.duration = 59976U;

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
    msg.setTimeStamp(0.5542417984963821);
    msg.setSource(1915U);
    msg.setSourceEntity(67U);
    msg.setDestination(19949U);
    msg.setDestinationEntity(14U);
    msg.lat = 0.8010165039511338;
    msg.lon = 0.13951707523739243;
    msg.eta = 4245971249U;
    msg.duration = 39983U;

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
    msg.setTimeStamp(0.0667466489754811);
    msg.setSource(31042U);
    msg.setSourceEntity(117U);
    msg.setDestination(16963U);
    msg.setDestinationEntity(237U);
    msg.plan_id = 27732U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.41307170007959704;
    tmp_msg_0.lon = 0.14314278383665435;
    tmp_msg_0.eta = 3170857265U;
    tmp_msg_0.duration = 57081U;
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
    msg.setTimeStamp(0.8702900939854381);
    msg.setSource(15735U);
    msg.setSourceEntity(5U);
    msg.setDestination(22580U);
    msg.setDestinationEntity(123U);
    msg.plan_id = 64706U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.31422289302943485;
    tmp_msg_0.lon = 0.6387419343450516;
    tmp_msg_0.eta = 948276578U;
    tmp_msg_0.duration = 6056U;
    msg.waypoints.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.11106735081864416);
    msg.setSource(55019U);
    msg.setSourceEntity(114U);
    msg.setDestination(22910U);
    msg.setDestinationEntity(89U);
    msg.plan_id = 58788U;

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
    msg.setTimeStamp(0.7574241061320892);
    msg.setSource(6195U);
    msg.setSourceEntity(225U);
    msg.setDestination(23695U);
    msg.setDestinationEntity(197U);
    msg.type = 198U;
    msg.command = 173U;
    msg.settings.assign("AZZYZOAXCFVFDRKNBPRCEZIJOWDSZAMQYKIBYXEHSSMDYXQRJKVLYKLANLDJJWEFQDNJKGTHCWYXIIHOPTEOIDYQBFQZSGOLJPRMTLLFXUQGVFECTTPJEXZZOFQHKSWUANUPOUCWCGGNHVOWLRWIHHSTIVTWAUHHRADHJPJEXUVKYFLBBGUUMQVLKTCCIEMSARCBDAWRRIBFMAGKNG");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 62615U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.4343692113037443;
    tmp_tmp_msg_0_0.lon = 0.3789328631298434;
    tmp_tmp_msg_0_0.eta = 3382476544U;
    tmp_tmp_msg_0_0.duration = 25457U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("QNXTSNUALECJJHBEWGVSPVYPDVAEWRHUHPXIQAKZZGKYDOK");

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
    msg.setTimeStamp(0.5314062236302707);
    msg.setSource(10519U);
    msg.setSourceEntity(200U);
    msg.setDestination(48080U);
    msg.setDestinationEntity(210U);
    msg.type = 113U;
    msg.command = 248U;
    msg.settings.assign("GICNORVEJRLMPGLMIWELZTUSNZJJLOUWKHAQVYUQKBIGNEHSUFBOPURNRHCNDOFMAXMZTBEAWXPIMNXLYKRZKZNLQKIGYWQYVIWQKJHSOPJFIMDLTVOHVGRSKXGJDBAPFEZPTOBOTJZMYYEESFKARUSTMTUXKTKUHVWXVNBNSPUZQTAGAFPWCDCCIYDWYDIYZWVLQOCGFVHQJPAIMDQFESHUJBLANXRBFGXOFLAQJCZEYWHCRCVDDSBM");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 35310U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("CPHPJGDNPTLFNZGGCTHVAEZKGDZVGVIBOYFHEPNUBXOMKYQUFVLNCDZFTZQAYMBPJSERSJHJOQYAEPIYGQQIQHEKRMRCKXKIGMBNOCKTIIMJHQSOAZEWZKFYMNWXYNTBQLHDSVRPJACFOFHHNVEOWESQTRJDXKXGULJWNBSCPXDC");

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
    msg.setTimeStamp(0.3409457128247426);
    msg.setSource(2154U);
    msg.setSourceEntity(23U);
    msg.setDestination(39307U);
    msg.setDestinationEntity(131U);
    msg.type = 173U;
    msg.command = 8U;
    msg.settings.assign("XDSDGMSRWXBODJLMVNEPUMTKAKPKWTHKPCYJUQUFAKGYMLAXUIXBTIOCTLYORFBZNHIQOJIEHTJZVNQFXUSUCIEEWZLHIROZSOCBSLUNRINDSNIPYOMJJWRXPMVFNWDD");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 45420U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.6431524880583847;
    tmp_tmp_msg_0_0.lon = 0.5474227180563613;
    tmp_tmp_msg_0_0.eta = 3773173868U;
    tmp_tmp_msg_0_0.duration = 60755U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("FZZSEDJGKOIBCNVUDQQCVVIGOATVBKACNPRSALFSIOTWBQENPRSLCCLSQRTJNRNDRXYIXZHLYXVRBB");

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
    msg.setTimeStamp(0.7196119866036259);
    msg.setSource(17937U);
    msg.setSourceEntity(237U);
    msg.setDestination(13225U);
    msg.setDestinationEntity(115U);
    msg.state = 36U;
    msg.plan_id = 55039U;
    msg.wpt_id = 91U;
    msg.settings_chk = 16401U;

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
    msg.setTimeStamp(0.3787143783146515);
    msg.setSource(58569U);
    msg.setSourceEntity(195U);
    msg.setDestination(19207U);
    msg.setDestinationEntity(39U);
    msg.state = 40U;
    msg.plan_id = 47486U;
    msg.wpt_id = 147U;
    msg.settings_chk = 39005U;

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
    msg.setTimeStamp(0.5698917187129966);
    msg.setSource(4251U);
    msg.setSourceEntity(160U);
    msg.setDestination(20028U);
    msg.setDestinationEntity(203U);
    msg.state = 130U;
    msg.plan_id = 7869U;
    msg.wpt_id = 38U;
    msg.settings_chk = 42696U;

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
    msg.setTimeStamp(0.13930032584580065);
    msg.setSource(37103U);
    msg.setSourceEntity(142U);
    msg.setDestination(52203U);
    msg.setDestinationEntity(243U);
    msg.uid = 0U;
    msg.frag_number = 226U;
    msg.num_frags = 230U;
    const signed char tmp_msg_0[] = {-97, -47, -43, 59, -67, 72, -117, 43, -105, -115, 112, 107, 44, 125, 11, 13, 57, -83, -3, -86, -44, 62, 112, -118, 14, 56, 97, 8, -13, 47, -42, 57, -25, -62, 68, 79, 86, -72, 95, -11, -121, -49, -104, -61, -126, -4, -5, 101, -122, -95, 99, -122, -6, -4, -33, -115, -24, -120, 23, -11, 20, -6, 77, 37, -43, 89, 85, -3, 31, -30, 122, -41, -18, 1, -107, 77, 121, 62, -87, 96, 95, -116, 53, 67, -113, -37, 59, -124, -26, -106, 16, -68, 26, 28, 119, 94, 23, -105, -110, 19, -104, 10, -121, 34, -77, 95, 13, 92, -55, -31, 82, -95, 7, 57, -108, -45, -39, 12, 119, 75, -110, -59, 62, 78, -32, 78, -35, 11, 85, 70, -10, -25, -121, -99, -98, -126, -121, -10, -108, 36, 90, -23, 43, -5, -26, 96, 74, -107, 107, -73, 76, -4, 47, 71, -61, 107, 11, -78, 41, 120, -56, -49, -97, -82, -55, 93, 88, -84, 5, 27, -67, -26, -109, 76, 85, -41, 97, -76, -34, 61, 13, -41};
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
    msg.setTimeStamp(0.5857871033407508);
    msg.setSource(3977U);
    msg.setSourceEntity(125U);
    msg.setDestination(3654U);
    msg.setDestinationEntity(233U);
    msg.uid = 251U;
    msg.frag_number = 116U;
    msg.num_frags = 103U;
    const signed char tmp_msg_0[] = {-73, -16, -114, 13, -72, -21, 119, -65, 104, 109, 66, -43, 3, 53, -18, 104, 17, 95, -63, 16, 104, -92, -93, -17, 118, -113, -61, -19, -22, -25, 58, -4, -66, -86, -100, -11, -67, 22, 27, -24};
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
    msg.setTimeStamp(0.3029583208941996);
    msg.setSource(49700U);
    msg.setSourceEntity(21U);
    msg.setDestination(15824U);
    msg.setDestinationEntity(229U);
    msg.uid = 38U;
    msg.frag_number = 134U;
    msg.num_frags = 82U;
    const signed char tmp_msg_0[] = {-52, -23, -3, -106, 87, -6, 10, 32, 32, 31, 1, -23, -54, 50, 50, 16, 47, -64, 111, 62, -22, 0, 103, 41, 78, -23, 104, -33, 53, -33, -96, 54, 118, -123, -45, 81, -37, -116, -34, 40, -77, -23, 111, -100, 38, 125, -88, -7, -47, 120, 86, 80, 116, -29, 105, -124, 23, 62, -31, -51, -78, -77, 77, -79, -78, 123, -45, -29, -85, -104, 47, 12, 71, -14, 103, -26, 15, -77, -48, 47, 79, 103, -58, -72, 45, -73, -72, -82, 100, -68, -98, 20, 34, -7, -84, -91, 5, -84, 102, 49, 105, 98, 10, 26, -43, -82, 40, -87, 35, 13, -34, -29, -50, -128, 14, 29, 38, -45, -121, -6, 15, 48, -9, -32, -65, 28, 122, 121, 65, -41, -110, -97, 100, 50, -105, 34, -87, 111, 105, -22, 84, -73, -107, 22, 26, -33, 18, 65, 103, 42, 66, -108, -10, 11, 103, -125, 104, 48, 118, 61, -61, 118, 11, 3, 66, 80, -90, 110, 110, 49, -116, 125, -1, -121, -121, -103, 24, 92, 123, 72, -41, -86, -20, 67, 8, 88, 45, -92, -24, 11, 59, 113, -119, 44, 49, 64, 117, -37, 72};
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
    msg.setTimeStamp(0.34200342299796704);
    msg.setSource(48569U);
    msg.setSourceEntity(209U);
    msg.setDestination(40869U);
    msg.setDestinationEntity(31U);
    msg.content_type.assign("PBNMUNEBFSIDYOCEILTBQYGRPNWPWOYBNNNTIZDJWJQQWTWJCFTYIUHKCURYXMCXODPUHBDOBGZYYXWJSSXMKZXAFQPHGYZVXARSECUWEZBSEVXXITHQHURLIDHJAMUVEDLSDADLVCBPAEHLYAHOSJCREPWSVASRFZZNQMTNAKIBHKTATRLOWDFLAEBCPMFGNOFQDMVEJMUYFMILCISOZGWMJZKZHLQQUGRQPUF");
    const signed char tmp_msg_0[] = {-94, -121, -35, -52, 95, 92, 123, -49, -23, -87, 64, 93, 29, -60, 76, 34, -45, 118, -96, -37, -30, 21, -101, -107, 9, -72, 66, -66, 2, 25, -92, 32, -3, -51, -5, -117, -85, -85, 123, -106, 35, 96, 90, 93, -110, -123, -107, -121, -22, 23, -61, 84, 88, 40, -94, -51, -104, -2, -105, -18, 35, -120, 112, 78, -55, 122, 44, 11, -103, -18, 42, 124, -24, 90, 100, 64, -8, 75, -40, 23, -20, -15, 19, 66, 118, -3, 61, -95, 6, 5, 61, -92, 58, 124, -124, -32, 16, -110, -114, -8, 44, 3, -51, -76, -91, 49, 20, 110, 80, -128, -17, -21, 45, -81, 57, 109, -66, 117, 50, 44, -11, 106, -117, -70, 82, -43, -87, 90, -38, -62, 19, -55, -34, -24, -56, 47, 2, 87, -66, -12, -64, -93, -48, -120, 23, 121, -45, 95, 92, 19, 106, 96, -122, 108, -114, 108, -76, 72, 122, -101, -7, 48, 14};
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
    msg.setTimeStamp(0.17974988261633407);
    msg.setSource(30776U);
    msg.setSourceEntity(81U);
    msg.setDestination(39043U);
    msg.setDestinationEntity(117U);
    msg.content_type.assign("ETPEGHTHJMCWHUDRHOXPGMLIZEWNLFGHCCRNSNDKXDLLPAADWDYLJVFSCMLXLCVYEAHRGSYIUHTLMQWJUENJOVTGPOFDHUUEQWOBIBUCISQDQKVENJVZJCUJLBINPGXAVPNKESKQTKMCFHGKRFNZIIZUP");
    const signed char tmp_msg_0[] = {-52, -81, 62, -63, 121, 1, -18, -43, 36, 9, 43, -78, 93, 61, 42, -44, -81, 16, -108, 58, 116, 92, -17, 42, 34, 59, 96, -37, -118, 23, 71, 121, 24, 29, -70, 88, 38, -99, -127, -8, 63, -35, 54, -28, 113, -53, -98, -22, 22, -96, -118, 48, 115, 68, 106, 74, 65, 117, -69, -52, -65, 32, 86, -44, 61, 10, 87, -98, 30, 27, 82, 27, -32, -14, 27, -12, 75, -88, 1, -13, 26, 73, -109, -30, -88, -43, 83, 63, 117, 102, -58, -59, 14, -27, 5, -29, -62, 113, -19, 63, -112, 99, -29, 11, 70, -68, 95, 99, -28, 53, -78, 86, 78, 61, 74, 112, -31, -84, -37, 61, 107, -17, -61, -9, 19, 24, 20, 84, 73, 106, -52, -7, -70, -84, 75, -58, 59, 76, 38, -2, 44, 77, 64, -87, 60, 71, -11, 74, -121, -104, -58, -51, 85, -67, -35, 50, 48, 17, -112, -31, 77, 1, -21, -12, 25, -41, -41, 101, -105, 10, -55, -118, 99, 29, 26, -121, -103, -42, 37, 115, 67, -122, -31, -68, 29, -88, -93, 0, -74, 54, -24, 122, 43, -31, 32, 13, 52, -113, -72, 26, -65, -94, 121, -83, 8, -90, -121, -29, 88, 57, -77, 62, -82, 47, 85, -34, -31, 102, 21, 17, -35, -25, -43, -41, 100, 92, -90, 87, -12, 18, 109, -19, -17, 116, 82, 45, 26, -118, 35, -68, -29, 43, -99, 97, -101, -61, -91, -27, -56, -128, 108, 12, 47, 1};
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
    msg.setTimeStamp(0.2878548904103556);
    msg.setSource(11661U);
    msg.setSourceEntity(55U);
    msg.setDestination(52910U);
    msg.setDestinationEntity(85U);
    msg.content_type.assign("JLQBTROCIFMWZPUJYVGSLBIXDFOKMLKUPTMINDHZLTIHEJMRVCEGVQZERDCMSIVBQQBGHORNNRXADKVNMJWFWXGLFHTTX");
    const signed char tmp_msg_0[] = {113, -66, 85, 17, -117, -52, -118, 120, 103, 21, 118, 45, 65, 113, 7, 9, -69, 45, -88, 84, 98, 123, -53, -41, 21, -110, 13, 70, 81, 30, -96, 103, 33, -87, 46, -115, 19, -99, 0, 106, 77, 100, -21, -13, -124, -61, -110, 32, 40, 114, -127, 5, 2, -85, 17, 82, 83, 12, 32, -80, -28, 21, 77, -42, 126, 49, 116, 83, -106, 104, -70, -124, -72, 32, 103, -79, 4, -81, -47, 115, -55, 78, 40, -29, -64, 36, 105, 89, -52, -86, 112, -43, 35, -77, -56, -70, 122, 23, 42, 4, 77, 84, 66, 41, -91, 78, 25, 85, 98, 2, 68, -36, 56, -53, -43, -44, -10, -51, -63, -4, -125, 114, -2, 50, -1, 29, 5, 119, 91, -25, 22, -110, -94, -114, -48, -65, 97, 46, -90, -20, -105, -9, 75, 112, -115, 106, -38, 17, 34, 42, -77, 8, 89, -105, 122, -40, 110, -92, -86, -36, 75, 55, 17, 12};
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
    msg.setTimeStamp(0.39004312445856115);
    msg.setSource(32783U);
    msg.setSourceEntity(150U);
    msg.setDestination(7802U);
    msg.setDestinationEntity(181U);

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
    msg.setTimeStamp(0.7240213886914532);
    msg.setSource(16085U);
    msg.setSourceEntity(252U);
    msg.setDestination(5260U);
    msg.setDestinationEntity(2U);

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
    msg.setTimeStamp(0.16096263744484995);
    msg.setSource(41679U);
    msg.setSourceEntity(176U);
    msg.setDestination(64861U);
    msg.setDestinationEntity(19U);

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
    msg.setTimeStamp(0.33422760838684085);
    msg.setSource(54105U);
    msg.setSourceEntity(189U);
    msg.setDestination(23108U);
    msg.setDestinationEntity(3U);
    msg.target = 27708U;
    msg.bearing = 0.47607595882175235;
    msg.elevation = 0.5607147293399677;

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
    msg.setTimeStamp(0.8631201034238161);
    msg.setSource(1240U);
    msg.setSourceEntity(48U);
    msg.setDestination(52335U);
    msg.setDestinationEntity(184U);
    msg.target = 31829U;
    msg.bearing = 0.8973306733745628;
    msg.elevation = 0.5481207266552217;

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
    msg.setTimeStamp(0.012950457388403835);
    msg.setSource(59343U);
    msg.setSourceEntity(169U);
    msg.setDestination(33384U);
    msg.setDestinationEntity(230U);
    msg.target = 43960U;
    msg.bearing = 0.8209776829628823;
    msg.elevation = 0.9230891163090219;

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
    msg.setTimeStamp(0.16500141306253635);
    msg.setSource(61188U);
    msg.setSourceEntity(164U);
    msg.setDestination(35870U);
    msg.setDestinationEntity(192U);
    msg.target = 27915U;
    msg.x = 0.36645870301050276;
    msg.y = 0.3577902230653168;
    msg.z = 0.2767706454511166;

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
    msg.setTimeStamp(0.7220113339640767);
    msg.setSource(31445U);
    msg.setSourceEntity(254U);
    msg.setDestination(30900U);
    msg.setDestinationEntity(139U);
    msg.target = 7445U;
    msg.x = 0.3804605286427669;
    msg.y = 0.22509705313903428;
    msg.z = 0.4434582411231883;

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
    msg.setTimeStamp(0.004506469030489235);
    msg.setSource(25453U);
    msg.setSourceEntity(222U);
    msg.setDestination(55307U);
    msg.setDestinationEntity(115U);
    msg.target = 56445U;
    msg.x = 0.9871587147259675;
    msg.y = 0.703978294380057;
    msg.z = 0.8355058341149528;

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
    msg.setTimeStamp(0.4359652676922492);
    msg.setSource(34199U);
    msg.setSourceEntity(34U);
    msg.setDestination(27789U);
    msg.setDestinationEntity(189U);
    msg.target = 16988U;
    msg.lat = 0.1569887909918708;
    msg.lon = 0.6252716068638356;
    msg.z_units = 67U;
    msg.z = 0.9395527572773832;

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
    msg.setTimeStamp(0.7458913537371191);
    msg.setSource(31213U);
    msg.setSourceEntity(5U);
    msg.setDestination(28882U);
    msg.setDestinationEntity(104U);
    msg.target = 11515U;
    msg.lat = 0.10144873855747882;
    msg.lon = 0.310993643153889;
    msg.z_units = 195U;
    msg.z = 0.6717538943101252;

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
    msg.setTimeStamp(0.9600283384566513);
    msg.setSource(42238U);
    msg.setSourceEntity(131U);
    msg.setDestination(29168U);
    msg.setDestinationEntity(195U);
    msg.target = 30951U;
    msg.lat = 0.012819193477643043;
    msg.lon = 0.9002350037231721;
    msg.z_units = 102U;
    msg.z = 0.35311228262194183;

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
    msg.setTimeStamp(0.4854723727194886);
    msg.setSource(39347U);
    msg.setSourceEntity(42U);
    msg.setDestination(47380U);
    msg.setDestinationEntity(86U);
    msg.locale.assign("SNFRRBWVISMUZLLWXHMYCZCSKBWWXLXZHMAVWCWFLXHGYXQSFOKBSUMJXGSUYZPJQTBJFWWIZAGWYDZQCYTLKOETVMKIHQQNENEYANAVAYPOVBLZGHMELBRBSDFXTMDFXGCTTGXUOYTEVAKNQQNSOCQJHIDVFFYEJIZLHJITAUJTNUOBEEDYPDGAERMFOVMZKDNPDPSERZJBQQKPIOASURAFUKGINNLHUCHVRRRJGTXPPRIPVLOCHBDMC");
    const signed char tmp_msg_0[] = {116, -38, 85, -20, 79, -76, 108, 64, -87, 58, -8, -80, 77, -54, -87, 86, 17, -95, 114, -3, -119, 69, -64, 30, 82, -85, -102, 29, -117, -9, -71, -15, 5, 82, 42, 40, 52, -4, 101, 59, -98, 115, -61, 24, -48, 77, 100, -88, 82, -45, -77, 19, -115, 48, -18, -11, 39, -45, -43, -55, -127, 11, -125, 40, 44, -97, 95, -70, -38, -62, 59, 109, 15, -111, -116, -67, 25, -110, 100, -74, 53, 35, 117, 90, 120, 13, -47, -38, 9, -94, -4, 21, 12, 112, -46, -82, -32, -86, 66, -101, 20, -125, 29, 55, 5, 57, -86, 22, 90, 108, 113, 73, -85, -74, 33, -95, -69, 100, -122, 62, 28, 8, -116, -125, 82, 29, -25, -100, 55, -119, 57, 114, 55, -79, 11, 6, 73, -42, -89, -101, -66, 24, 57, 52, 99, -56, 82, -57, 72, -37, -47, 69, 91, -80, 7, 90, 5, 2, -11, 26, -55, -109, -18, -35, -17, 79, -106, 92, -16};
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
    msg.setTimeStamp(0.9036196543429653);
    msg.setSource(64483U);
    msg.setSourceEntity(194U);
    msg.setDestination(2981U);
    msg.setDestinationEntity(118U);
    msg.locale.assign("FBKWRMNJYYADIJYZSOKMCVQZBCAQVTJCFUZJAIWPCHKPDEEYEJKYIBFNNKXXTVZHGDULOSSLWYQRQTVZERPH");
    const signed char tmp_msg_0[] = {89, 81, -33, -26, -25, 74, -105, 69, -119, 122, -75, -105, -14, -25, -106, 74, -96, -59, 38, 57, 108, 88, -100, -120, 99, -107, -99, 108, -62, -46, 110, -34, -9, 54, -102, 5, 63, -66, -80, -45, 12, -117, 120, -26, -71, -50, 68, -39, 29, 111, -101, 126, 13, 21, -12, 56, 126, -48, 66, 66, -62, 116, 104, -16, -7, 76, 75, 124, -6, -12, -89, -69, 20, -20, -92, 45, -59, -39, 93, 31, -78, 100, 89, -13, 109, 103, 89, 102, -11, -38, 82, 24, -1, -126, 78, -73, 13, 33, -90, -55, -33, 11, 101, 90, -98, -46, -63, -62, 116, -121, -52, 56, -62, 82, 63};
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
    msg.setTimeStamp(0.29874623638365416);
    msg.setSource(64735U);
    msg.setSourceEntity(224U);
    msg.setDestination(44491U);
    msg.setDestinationEntity(212U);
    msg.locale.assign("FONTJWVKWEFMDKHHBSANBGTQKUFPFZUTEIISCOTTJPFMFOYORDQISNFLSYBQNPQQEGHDGUOXLDNVAVXYXKBUSXAZOPPDWNDBJYGMVQZYSRXFCCVWEQJKICZHCKMZQGCUOGAMSIBVLCXHMJDJATQUDHEYYANYBUIDRHZLGOPUCZZAOPPWZJFXKWLRHWTLXSIKETPIGLRCKBDGBH");
    const signed char tmp_msg_0[] = {-17, -31, 41, -37, 31, 43, 38, -78, 30, 66, -84, 120, -22, -126, 63, -97, -101, -109, 59, -93, 18, 63, -77, -124, -121, -92, -45, 11, 32, -103, 61, 18, 66, -105, 21, 122, -8, -127, -88, -63, 109, -24, 15, -94, 99, -114, 22, 25, 76, 24, 124, 126, 86, 77, 124, 102, -61, -92, 55, -122, 10, 85, -40, -111, 124, 41, -113, 119, 80, -98, -109, -125, 88, -16, 81, 32, 95, -108, -74, 27, -109, -80, 8, -119, 26, -89, -1, 22, -17, 78, 64, 18, 29, -11, 45, 85, 67, 19, 105, -113, -72, -107, 3, -20, 39, -50, 44, 55, -46, 117, -103, -44, -105, -48, 83, 71, 91, -56, 111, 92, 56, -64, -57, 33, 30, 59, 97, 115, 82, 60, 18, 44, 122, 87, -86, 83, 105, -90, -9, -77, -59, -67, -56, -54, -111, -111, 115, -8, 60, -88, 83, 55, 112, -120, -34, -31, 102, -107, 14, 100, -89, 105, 29, 3, 80, 116, -15, 73, 28, -12, -91, 23, -8, -112, 35, 101, 55, -120, -25, -128, 111, -77, -87, -98, -1, -50, 21, 100, 66, -105, 80, 57, -63, -78, -86, -89, -53, 69, 46, 84, 65, -7, -108, -9, -76, 46, 84, 105, 6, 113, -1, -86, 38, 45, -6, -124, 13, -124, 88, 118, 126, 78, 76, 71, -36, 25, 40, -81, -60, 59, 118, 73, -70, -20, 0, -116, 70, 91, -95, -60, 10, -87, 41, 19, -7, 50, -57, 68, 50, 18, 3};
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
    msg.setTimeStamp(0.6532561146232544);
    msg.setSource(30059U);
    msg.setSourceEntity(20U);
    msg.setDestination(23510U);
    msg.setDestinationEntity(200U);

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
    msg.setTimeStamp(0.23917603258118803);
    msg.setSource(37059U);
    msg.setSourceEntity(134U);
    msg.setDestination(36044U);
    msg.setDestinationEntity(107U);

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
    msg.setTimeStamp(0.7441140572663221);
    msg.setSource(32403U);
    msg.setSourceEntity(111U);
    msg.setDestination(2047U);
    msg.setDestinationEntity(111U);

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
    msg.setTimeStamp(0.7204900101123151);
    msg.setSource(14505U);
    msg.setSourceEntity(114U);
    msg.setDestination(2744U);
    msg.setDestinationEntity(14U);
    msg.camid = 31U;
    msg.x = 34776U;
    msg.y = 38229U;

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
    msg.setTimeStamp(0.1766305377604115);
    msg.setSource(31406U);
    msg.setSourceEntity(2U);
    msg.setDestination(39045U);
    msg.setDestinationEntity(207U);
    msg.camid = 9U;
    msg.x = 34808U;
    msg.y = 4608U;

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
    msg.setTimeStamp(0.8793774600654487);
    msg.setSource(5806U);
    msg.setSourceEntity(53U);
    msg.setDestination(50303U);
    msg.setDestinationEntity(161U);
    msg.camid = 132U;
    msg.x = 15649U;
    msg.y = 1640U;

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
    msg.setTimeStamp(0.13348423670894283);
    msg.setSource(62766U);
    msg.setSourceEntity(228U);
    msg.setDestination(43446U);
    msg.setDestinationEntity(73U);
    msg.camid = 253U;
    msg.x = 44940U;
    msg.y = 47093U;

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
    msg.setTimeStamp(0.49875924311482056);
    msg.setSource(52265U);
    msg.setSourceEntity(63U);
    msg.setDestination(12589U);
    msg.setDestinationEntity(108U);
    msg.camid = 110U;
    msg.x = 28115U;
    msg.y = 65486U;

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
    msg.setTimeStamp(0.9779311403345257);
    msg.setSource(50124U);
    msg.setSourceEntity(109U);
    msg.setDestination(26774U);
    msg.setDestinationEntity(148U);
    msg.camid = 77U;
    msg.x = 61847U;
    msg.y = 25683U;

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
    msg.setTimeStamp(0.6808463757575175);
    msg.setSource(20309U);
    msg.setSourceEntity(26U);
    msg.setDestination(61329U);
    msg.setDestinationEntity(164U);
    msg.tracking = 167U;
    msg.lat = 0.8551147432998246;
    msg.lon = 0.12828372963087398;
    msg.x = 0.3882585734811337;
    msg.y = 0.648297337100197;
    msg.z = 0.46739451839726065;

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
    msg.setTimeStamp(0.7663860289777791);
    msg.setSource(32477U);
    msg.setSourceEntity(77U);
    msg.setDestination(55411U);
    msg.setDestinationEntity(35U);
    msg.tracking = 75U;
    msg.lat = 0.48675863259073393;
    msg.lon = 0.13714273215176365;
    msg.x = 0.9446472339663553;
    msg.y = 0.27233083705277394;
    msg.z = 0.68644330623982;

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
    msg.setTimeStamp(0.797433325541777);
    msg.setSource(50270U);
    msg.setSourceEntity(115U);
    msg.setDestination(62473U);
    msg.setDestinationEntity(27U);
    msg.tracking = 184U;
    msg.lat = 0.7123223605045919;
    msg.lon = 0.40218346969644925;
    msg.x = 0.08798108141305228;
    msg.y = 0.5371702117925047;
    msg.z = 0.2645479300974576;

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
    msg.setTimeStamp(0.21274372070879521);
    msg.setSource(54693U);
    msg.setSourceEntity(77U);
    msg.setDestination(42072U);
    msg.setDestinationEntity(4U);
    msg.target.assign("PNSEUAGDBTANVGXLDXYTOSTWELEKRCRMSFKLUMHWAMGOAKQKNEPXBJJWEDLQKBDHRTHFYKOZFUWSMGTEBARGNRJXCMLVYWEFCBHJXPDVNOXDSSRALIQUBGTTVYYZDECQIXRCUFTZOKJCRFNIHY");
    msg.lbearing = 0.8080437415328192;
    msg.lelevation = 0.8893233620066652;
    msg.bearing = 0.09000084596591695;
    msg.elevation = 0.5531246111873653;
    msg.phi = 0.8589632931479083;
    msg.theta = 0.629695342056735;
    msg.psi = 0.11218149257401733;
    msg.accuracy = 0.528630440195907;

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
    msg.setTimeStamp(0.2327615329199162);
    msg.setSource(37732U);
    msg.setSourceEntity(169U);
    msg.setDestination(2727U);
    msg.setDestinationEntity(143U);
    msg.target.assign("UDHSAJZQRZSUCBNZADWEFCEJLKAHZXOHISOMYVEBENYBIHKGVPSHTUEMPBQGFTVLCLRPGUCCDJEDXEXJBMJKANFMAFIFIWDDJLGGPJURLSVCTDRGYMIQZQQVCUIWYHNKOEZKWFOLXKLRMHZYXABXOHLAHZTKVGEXTYNBDYQFJRMLZUJWXRUKTFNQCSUSKPQOPMQFASYIYTPADIXDNOKYRXOWOIONTBTGRGVSIPAFVPVWQRSENLGMJVZBC");
    msg.lbearing = 0.4251052327325019;
    msg.lelevation = 0.03861930908724731;
    msg.bearing = 0.0631433087656117;
    msg.elevation = 0.7958894635599206;
    msg.phi = 0.006893716460077082;
    msg.theta = 0.8352891023505841;
    msg.psi = 0.34442434900161756;
    msg.accuracy = 0.5280207330233145;

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
    msg.setTimeStamp(0.5728508169050105);
    msg.setSource(27664U);
    msg.setSourceEntity(95U);
    msg.setDestination(49930U);
    msg.setDestinationEntity(25U);
    msg.target.assign("LITPXCFPNLATUENDHRQBJNICAGCGLOZZPNNXCMOXDGOXTUKZE");
    msg.lbearing = 0.19434524229162187;
    msg.lelevation = 0.2864937390230504;
    msg.bearing = 0.406055935119628;
    msg.elevation = 0.5954411343191756;
    msg.phi = 0.6237537885672862;
    msg.theta = 0.1286061006753263;
    msg.psi = 0.23960022826085692;
    msg.accuracy = 0.21256845205494157;

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
    msg.setTimeStamp(0.33811263950583037);
    msg.setSource(16422U);
    msg.setSourceEntity(99U);
    msg.setDestination(63116U);
    msg.setDestinationEntity(29U);
    msg.target.assign("CUXPPLVEIMQWFMOBGLVIZAVBXZUFUFTTRTUOHKJNZYNVLEPBWKOKJYEAHSEQIHVEDOZKUAXMAYIONBRXVPNLBDRIUHEDQQODSVMDSKSFHCEMSIJDZKLANDEJGPOYCIHGBEGYAKFTQDTHJVJUSYYJKPQREKZUYXRYPOMVNFZTRRFCALWAFWCCDCLSWSUBXDGKTBNMWZAMXTTNYGBJCOWCFNXGSGZ");
    msg.x = 0.1517938232797139;
    msg.y = 0.4860846767614163;
    msg.z = 0.27640580119297786;
    msg.n = 0.975647522216036;
    msg.e = 0.7736281308130464;
    msg.d = 0.4362154371030308;
    msg.phi = 0.21685878222459087;
    msg.theta = 0.8836355677078883;
    msg.psi = 0.612266387396933;
    msg.accuracy = 0.3532844100443836;

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
    msg.setTimeStamp(0.34360125306029143);
    msg.setSource(53135U);
    msg.setSourceEntity(212U);
    msg.setDestination(12316U);
    msg.setDestinationEntity(62U);
    msg.target.assign("QYVJHXFYXHLGCIPLKJSPICDKTRUZGJMAQKRNIXJYACBONFVZHALGQUJDTWFYUIKRJFNEGOGHZGL");
    msg.x = 0.11410972127649888;
    msg.y = 0.6932707082164912;
    msg.z = 0.5282024280185387;
    msg.n = 0.5682294747703615;
    msg.e = 0.1459521025661661;
    msg.d = 0.8860965131287404;
    msg.phi = 0.7880405869866868;
    msg.theta = 0.8983509355513557;
    msg.psi = 0.9759491963731212;
    msg.accuracy = 0.5640690105074343;

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
    msg.setTimeStamp(0.47419373909572726);
    msg.setSource(42840U);
    msg.setSourceEntity(39U);
    msg.setDestination(36944U);
    msg.setDestinationEntity(9U);
    msg.target.assign("YXTLKDKIFJDVQNEIBYPDXJQ");
    msg.x = 0.7484546242722557;
    msg.y = 0.6559894065260821;
    msg.z = 0.7256430888836192;
    msg.n = 0.7484306167565088;
    msg.e = 0.7502111687089812;
    msg.d = 0.3183685108038047;
    msg.phi = 0.5559455127144894;
    msg.theta = 0.09086929287686318;
    msg.psi = 0.30194213540605264;
    msg.accuracy = 0.5879654938955226;

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
    msg.setTimeStamp(0.9375338005929107);
    msg.setSource(47537U);
    msg.setSourceEntity(118U);
    msg.setDestination(8444U);
    msg.setDestinationEntity(95U);
    msg.target.assign("SBRLMOIVZKLAONHYEUOGKGEADMMUWJMZRIYTLHPFENDZHMSRREVXHYKPJGURTGATERRYXSZFUCHOBKPEL");
    msg.lat = 0.5888798304269376;
    msg.lon = 0.710542187628713;
    msg.z_units = 191U;
    msg.z = 0.4599551040614164;
    msg.accuracy = 0.27603523137136765;

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
    msg.setTimeStamp(0.47190122440311355);
    msg.setSource(31386U);
    msg.setSourceEntity(108U);
    msg.setDestination(54224U);
    msg.setDestinationEntity(185U);
    msg.target.assign("DQEAADBGCDNYKOPWDFCZHKAJKMYMBUUVZIVQVJRKWMSGMSVAKSLMBPGVHPGTQECCWFILCYOFXUFAXQLJUNIKTPNHVGDAQTHXTQOBJGNEFTUU");
    msg.lat = 0.10319001093785718;
    msg.lon = 0.209149411396643;
    msg.z_units = 251U;
    msg.z = 0.14990042731084274;
    msg.accuracy = 0.6621874791856112;

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
    msg.setTimeStamp(0.8833297810952373);
    msg.setSource(25169U);
    msg.setSourceEntity(69U);
    msg.setDestination(11286U);
    msg.setDestinationEntity(19U);
    msg.target.assign("MTYGCYFDYPQBKVMGBWIFFFETBTRVRPZMQNHERIXZJUCYLWHOOPBUGPAIXAVHEAKTUPZFJZMCKNUSKLAHIYVOUTIFGCQJBHSLXHBKQSLFAEUQRKJDWNOHZQUMTYMTADLXIUGVQTMCBNWHDRCXPGJEBJVKSZWGHLQENSOZDVDWWJFIHYBSSECVJGPMMRFBRLXNWKYUDQDJ");
    msg.lat = 0.34097923449190837;
    msg.lon = 0.496886951109888;
    msg.z_units = 24U;
    msg.z = 0.046404422586267646;
    msg.accuracy = 0.8359578379799004;

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
    msg.setTimeStamp(0.26002505747759697);
    msg.setSource(61017U);
    msg.setSourceEntity(142U);
    msg.setDestination(61105U);
    msg.setDestinationEntity(207U);
    msg.name.assign("CYLGITSGFEQWNYGREXOMJBDLDJXCNXDFHCTESRAQFPXHRYJVPSHKUVNIKLCSCMBASYOVFXODEKLVJIUZZPYDVWRTCQRJZITPSYSHUFQAMYKQ");
    msg.lat = 0.5889352607721833;
    msg.lon = 0.8165637500217243;
    msg.z = 0.5707284891303164;
    msg.z_units = 162U;

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
    msg.setTimeStamp(0.4741025163429836);
    msg.setSource(11234U);
    msg.setSourceEntity(97U);
    msg.setDestination(22797U);
    msg.setDestinationEntity(226U);
    msg.name.assign("AREAQWOLELXPRKFCLYMQVCYUNNTFGMZTGVJEXPSQXASRWLYBTZWQLSEWORBAHWTDNODSCFSDQYTONVTCBBUEVXMDYYFHQDPECASYUFBHDTZNHHCPHZYOZIAMNZCWGVBVDUIRDKDJESXMACTPJGAJHIUOXWGVDBXJWMEVNOGIKJPWROHJZIIBAKLUPVQRULQVHPLMGKIKYSZSGFPKJLFIROKZ");
    msg.lat = 0.23418867775262164;
    msg.lon = 0.2635444776343455;
    msg.z = 0.8641357780880857;
    msg.z_units = 192U;

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
    msg.setTimeStamp(0.9642169466089752);
    msg.setSource(28500U);
    msg.setSourceEntity(216U);
    msg.setDestination(15082U);
    msg.setDestinationEntity(113U);
    msg.name.assign("RESFRDHSKYNPRPECOSKVFUXLNOPYEZWQPUCJMWGOBGVRPZFOJXTLJXZAMAOJDNVMMCMKEJNXHXMRXACTAYQKFWZMGYQNQJWRADISHROWUHBEDXFYVLIJTDSDNGAVBZXGBGUIKYFGPSPXCYHZRCRGQFSEKWQAKEANJBOBDNBYUBEQDVPUZQIPIULUTTYLLLMCSBMTNUVTQDW");
    msg.lat = 0.6648212893222404;
    msg.lon = 0.2741586253216861;
    msg.z = 0.5866310078857075;
    msg.z_units = 112U;

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
    msg.setTimeStamp(0.4638260596407493);
    msg.setSource(56010U);
    msg.setSourceEntity(21U);
    msg.setDestination(57433U);
    msg.setDestinationEntity(111U);
    msg.op = 95U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("CXIPBHMDHPGZNCIORCVPBGWEPKTESQJOHISQMQOVAUEQRTEMIGUPYTVSUCJFHMXAGIYZDHLAWWWNUOXLLCDDDINIEXCXJQEXMOOMAQNWKRKYBFQUAYVPRTADLLAOFLDKCKJZAXEUDTZLK");
    tmp_msg_0.lat = 0.48740322412508985;
    tmp_msg_0.lon = 0.560424471999669;
    tmp_msg_0.z = 0.4900797899320408;
    tmp_msg_0.z_units = 111U;
    msg.modems.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.7388654945279588);
    msg.setSource(17782U);
    msg.setSourceEntity(93U);
    msg.setDestination(56136U);
    msg.setDestinationEntity(0U);
    msg.op = 243U;

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
    msg.setTimeStamp(0.48916509363632077);
    msg.setSource(53938U);
    msg.setSourceEntity(171U);
    msg.setDestination(34486U);
    msg.setDestinationEntity(156U);
    msg.op = 129U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("BXDYOQYEWLMMSNDJNHRKXHQUDJTPAJUQWIYLBGVSYWPWKFAWERDZGXCLIHEBECEBGSRUGDYKXAOKFETFZHGZLUCTNNJQVKVPCOKTULFQWWJJZWVCUYQMOOJDOTPMHQFMPXPCFBQMXIMSVTZAPJNYNPRVGUFKHAIRMNUGORWJFZG");
    tmp_msg_0.lat = 0.20656637760639862;
    tmp_msg_0.lon = 0.890753552443246;
    tmp_msg_0.z = 0.2705284017702253;
    tmp_msg_0.z_units = 56U;
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
    msg.setTimeStamp(0.15058130694114225);
    msg.setSource(12748U);
    msg.setSourceEntity(236U);
    msg.setDestination(18426U);
    msg.setDestinationEntity(249U);
    msg.value = 0.40419170208737376;
    msg.type = 39U;

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
    msg.setTimeStamp(0.432863537723283);
    msg.setSource(48070U);
    msg.setSourceEntity(32U);
    msg.setDestination(41522U);
    msg.setDestinationEntity(43U);
    msg.value = 0.14288063412756224;
    msg.type = 206U;

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
    msg.setTimeStamp(0.1491618343528497);
    msg.setSource(12272U);
    msg.setSourceEntity(31U);
    msg.setDestination(7591U);
    msg.setDestinationEntity(155U);
    msg.value = 0.0035600534801377703;
    msg.type = 74U;

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
    msg.setTimeStamp(0.4329837885664033);
    msg.setSource(498U);
    msg.setSourceEntity(31U);
    msg.setDestination(36152U);
    msg.setDestinationEntity(53U);
    msg.value = 0.5521997244283302;

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
    msg.setTimeStamp(0.19428161446350167);
    msg.setSource(20921U);
    msg.setSourceEntity(232U);
    msg.setDestination(11870U);
    msg.setDestinationEntity(188U);
    msg.value = 0.6108578552005205;

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
    msg.setTimeStamp(0.5621862476410905);
    msg.setSource(40921U);
    msg.setSourceEntity(204U);
    msg.setDestination(62447U);
    msg.setDestinationEntity(241U);
    msg.value = 0.5331124983150823;

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
    msg.setTimeStamp(0.23041806423917965);
    msg.setSource(17891U);
    msg.setSourceEntity(175U);
    msg.setDestination(40390U);
    msg.setDestinationEntity(179U);
    msg.timestamp_last_service = 0.3856693414784105;
    msg.time_next_service = 0.4940158496594119;
    msg.time_motor_next_service = 0.37418093286950793;
    msg.time_idle_ground = 0.3533881608082461;
    msg.time_idle_air = 0.2785579196950104;
    msg.time_idle_water = 0.9720051018135601;
    msg.time_idle_underwater = 0.9676071775101607;
    msg.time_idle_unknown = 0.6027596698395821;
    msg.time_motor_ground = 0.10975875531649593;
    msg.time_motor_air = 0.8537724530829646;
    msg.time_motor_water = 0.6794738675137034;
    msg.time_motor_underwater = 0.18058126827434506;
    msg.time_motor_unknown = 0.25103088840323695;
    msg.rpm_min = -2256;
    msg.rpm_max = 22995;
    msg.depth_max = 0.4072466636720722;

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
    msg.setTimeStamp(0.16810153509682568);
    msg.setSource(1029U);
    msg.setSourceEntity(237U);
    msg.setDestination(55466U);
    msg.setDestinationEntity(204U);
    msg.timestamp_last_service = 0.7884091473042542;
    msg.time_next_service = 0.6793609373107808;
    msg.time_motor_next_service = 0.38467274952915487;
    msg.time_idle_ground = 0.7796302613430433;
    msg.time_idle_air = 0.03389430461077947;
    msg.time_idle_water = 0.7178119103966552;
    msg.time_idle_underwater = 0.7779812150477086;
    msg.time_idle_unknown = 0.24100943411468667;
    msg.time_motor_ground = 0.9589423897754685;
    msg.time_motor_air = 0.3279512360843768;
    msg.time_motor_water = 0.5159118103102491;
    msg.time_motor_underwater = 0.46983616514845117;
    msg.time_motor_unknown = 0.030255676296894296;
    msg.rpm_min = -28194;
    msg.rpm_max = -25380;
    msg.depth_max = 0.07251789778985429;

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
    msg.setTimeStamp(0.5337694843757579);
    msg.setSource(32099U);
    msg.setSourceEntity(158U);
    msg.setDestination(36170U);
    msg.setDestinationEntity(34U);
    msg.timestamp_last_service = 0.9410130378052073;
    msg.time_next_service = 0.8732898588620275;
    msg.time_motor_next_service = 0.07096417875400685;
    msg.time_idle_ground = 0.30551897391098426;
    msg.time_idle_air = 0.8744781933511886;
    msg.time_idle_water = 0.2629699613218708;
    msg.time_idle_underwater = 0.9346913947726668;
    msg.time_idle_unknown = 0.6377156936538325;
    msg.time_motor_ground = 0.4848926224282042;
    msg.time_motor_air = 0.3804085875676607;
    msg.time_motor_water = 0.789092127475672;
    msg.time_motor_underwater = 0.5610272054798856;
    msg.time_motor_unknown = 0.848900745723022;
    msg.rpm_min = -23034;
    msg.rpm_max = -28456;
    msg.depth_max = 0.5152121796873432;

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
    msg.setTimeStamp(0.245269731667365);
    msg.setSource(38451U);
    msg.setSourceEntity(66U);
    msg.setDestination(13656U);
    msg.setDestinationEntity(145U);
    msg.severity = 49U;
    msg.text.assign("YVZTOPCMCAQIOBXWZJUCBXIHHUFFROOFVFDXVQNHQTKHTQSILSJBINQNULWEEGXZIJMMPYXSGOVQPHXAQOPAJOUYFMLMTLZGZAHUAEYRGDMFPEGRAMY");

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
    msg.setTimeStamp(0.1055647435033068);
    msg.setSource(25846U);
    msg.setSourceEntity(36U);
    msg.setDestination(26801U);
    msg.setDestinationEntity(46U);
    msg.severity = 162U;
    msg.text.assign("DDEAUCXDPTJQNFZJDTQRXXJRTRHQBFJULZTQHMTRBNFAAABIWPVIHUMUHYPZMWUSOMPJZRXGCWBABKHVGLBIYKYLWFNASQXSFKOFZLGLWNSJPBUNVVL");

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
    msg.setTimeStamp(0.9675846195800394);
    msg.setSource(45696U);
    msg.setSourceEntity(92U);
    msg.setDestination(26199U);
    msg.setDestinationEntity(165U);
    msg.severity = 33U;
    msg.text.assign("PDAYHZOMJKGXWDOFKIUFHCUGCOUDKVLSKIHYREJEIHXBNVZFFVACQQDCOSKFIGMZNRTCYEJXP");

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
    msg.setTimeStamp(0.9396662156000667);
    msg.setSource(24716U);
    msg.setSourceEntity(65U);
    msg.setDestination(19592U);
    msg.setDestinationEntity(64U);
    msg.channel = -59;
    msg.value = -258642117;
    msg.gain = 34U;

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
    msg.setTimeStamp(0.32527815100786783);
    msg.setSource(40706U);
    msg.setSourceEntity(185U);
    msg.setDestination(40038U);
    msg.setDestinationEntity(198U);
    msg.channel = -70;
    msg.value = 345952564;
    msg.gain = 8U;

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
    msg.setTimeStamp(0.5100815740719532);
    msg.setSource(49764U);
    msg.setSourceEntity(27U);
    msg.setDestination(35581U);
    msg.setDestinationEntity(106U);
    msg.channel = -2;
    msg.value = 800953900;
    msg.gain = 164U;

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
    msg.setTimeStamp(0.5234047754759655);
    msg.setSource(15291U);
    msg.setSourceEntity(61U);
    msg.setDestination(9297U);
    msg.setDestinationEntity(12U);
    msg.ch01 = 0.48038704810808663;
    msg.ch02 = 0.02566707679189706;
    msg.ch03 = 0.5856200460205828;
    msg.ch04 = 0.3284272211005498;
    msg.ch05 = 0.21354006592564345;
    msg.ch06 = 0.9095558000029625;
    msg.ch07 = 0.5728063086998889;
    msg.ch08 = 0.6603018551550474;
    msg.ch09 = 0.0028279116320364395;
    msg.ch10 = 0.3133914609146362;
    msg.ch11 = 0.9062617169180526;
    msg.ch12 = 0.14978982085548953;
    msg.ch13 = 0.21458298722059732;
    msg.ch14 = 0.916846347615099;
    msg.ch15 = 0.8132948833003656;
    msg.ch16 = 0.3304056635063094;

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
    msg.setTimeStamp(0.1891013851896658);
    msg.setSource(36039U);
    msg.setSourceEntity(150U);
    msg.setDestination(49382U);
    msg.setDestinationEntity(199U);
    msg.ch01 = 0.5317497515014787;
    msg.ch02 = 0.4814622338914236;
    msg.ch03 = 0.1936469108875638;
    msg.ch04 = 0.5193874161472085;
    msg.ch05 = 0.7315923956440488;
    msg.ch06 = 0.021126989315220945;
    msg.ch07 = 0.07848679806094228;
    msg.ch08 = 0.2637309055034054;
    msg.ch09 = 0.9409420433035546;
    msg.ch10 = 0.8069614218666676;
    msg.ch11 = 0.0052815688793055315;
    msg.ch12 = 0.618334586640593;
    msg.ch13 = 0.3905187570286106;
    msg.ch14 = 0.8838115619703546;
    msg.ch15 = 0.03459355510292206;
    msg.ch16 = 0.22694341465989054;

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
    msg.setTimeStamp(0.39078267171081027);
    msg.setSource(13197U);
    msg.setSourceEntity(46U);
    msg.setDestination(1692U);
    msg.setDestinationEntity(143U);
    msg.ch01 = 0.6868221759655296;
    msg.ch02 = 0.8720651595620699;
    msg.ch03 = 0.6871609308767789;
    msg.ch04 = 0.2249543485078227;
    msg.ch05 = 0.3371433353683658;
    msg.ch06 = 0.871207991271163;
    msg.ch07 = 0.48241459634345296;
    msg.ch08 = 0.9364852620428963;
    msg.ch09 = 0.3352940634207643;
    msg.ch10 = 0.051095282218096005;
    msg.ch11 = 0.18876595583626155;
    msg.ch12 = 0.4267257102996973;
    msg.ch13 = 0.856908908441815;
    msg.ch14 = 0.844760694105108;
    msg.ch15 = 0.3517248844974805;
    msg.ch16 = 0.8034264058475826;

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
    msg.setTimeStamp(0.32942082394677197);
    msg.setSource(38441U);
    msg.setSourceEntity(198U);
    msg.setDestination(11707U);
    msg.setDestinationEntity(45U);
    msg.op = 178U;
    msg.lat = 0.9752157056455324;
    msg.lon = 0.9955890388580945;
    msg.height = 0.3270058725950903;
    msg.depth = 0.8751290503926824;
    msg.alt = 0.9341790991868182;

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
    msg.setTimeStamp(0.39329665630323873);
    msg.setSource(12762U);
    msg.setSourceEntity(119U);
    msg.setDestination(20997U);
    msg.setDestinationEntity(215U);
    msg.op = 120U;
    msg.lat = 0.26372886052417266;
    msg.lon = 0.6456595951527943;
    msg.height = 0.8221170645382035;
    msg.depth = 0.8378296302934054;
    msg.alt = 0.8462710122422441;

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
    msg.setTimeStamp(0.8649283861906968);
    msg.setSource(14844U);
    msg.setSourceEntity(215U);
    msg.setDestination(6533U);
    msg.setDestinationEntity(69U);
    msg.op = 92U;
    msg.lat = 0.9352498368126503;
    msg.lon = 0.1498092350368837;
    msg.height = 0.7709376209319752;
    msg.depth = 0.13931741650038276;
    msg.alt = 0.6519727427144911;

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
    msg.setTimeStamp(0.37453234432431004);
    msg.setSource(19173U);
    msg.setSourceEntity(51U);
    msg.setDestination(47184U);
    msg.setDestinationEntity(30U);
    msg.nbeams = 228U;
    msg.ncells = 245U;
    msg.coord_sys = 90U;

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
    msg.setTimeStamp(0.48876176213349465);
    msg.setSource(26277U);
    msg.setSourceEntity(157U);
    msg.setDestination(1297U);
    msg.setDestinationEntity(105U);
    msg.nbeams = 18U;
    msg.ncells = 230U;
    msg.coord_sys = 243U;

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
    msg.setTimeStamp(0.4683090470383875);
    msg.setSource(56291U);
    msg.setSourceEntity(153U);
    msg.setDestination(25959U);
    msg.setDestinationEntity(224U);
    msg.nbeams = 19U;
    msg.ncells = 173U;
    msg.coord_sys = 252U;
    IMC::CurrentProfileCell tmp_msg_0;
    tmp_msg_0.cell_position = 0.5915121391222382;
    IMC::ADCPBeam tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.vel = 0.726805064862483;
    tmp_tmp_msg_0_0.amp = 0.5870811621519776;
    tmp_tmp_msg_0_0.cor = 136U;
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
    msg.setTimeStamp(0.5803456611092657);
    msg.setSource(31162U);
    msg.setSourceEntity(207U);
    msg.setDestination(14003U);
    msg.setDestinationEntity(230U);
    msg.cell_position = 0.30693648359603753;

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
    msg.setTimeStamp(0.2730915012582049);
    msg.setSource(4064U);
    msg.setSourceEntity(188U);
    msg.setDestination(8951U);
    msg.setDestinationEntity(112U);
    msg.cell_position = 0.5187980971335393;
    IMC::ADCPBeam tmp_msg_0;
    tmp_msg_0.vel = 0.10498735908418988;
    tmp_msg_0.amp = 0.0427549356756558;
    tmp_msg_0.cor = 115U;
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
    msg.setTimeStamp(0.675250197729086);
    msg.setSource(9913U);
    msg.setSourceEntity(183U);
    msg.setDestination(37874U);
    msg.setDestinationEntity(132U);
    msg.cell_position = 0.9553212945432142;
    IMC::ADCPBeam tmp_msg_0;
    tmp_msg_0.vel = 0.5040994518877725;
    tmp_msg_0.amp = 0.9312129946927422;
    tmp_msg_0.cor = 251U;
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
    msg.setTimeStamp(0.8383028373655803);
    msg.setSource(33067U);
    msg.setSourceEntity(74U);
    msg.setDestination(30595U);
    msg.setDestinationEntity(137U);
    msg.vel = 0.4398191754904893;
    msg.amp = 0.5249645698937269;
    msg.cor = 158U;

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
    msg.setTimeStamp(0.9421452785278284);
    msg.setSource(37558U);
    msg.setSourceEntity(19U);
    msg.setDestination(41619U);
    msg.setDestinationEntity(190U);
    msg.vel = 0.35307305280063195;
    msg.amp = 0.4273735706689258;
    msg.cor = 217U;

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
    msg.setTimeStamp(0.307014544258861);
    msg.setSource(15388U);
    msg.setSourceEntity(197U);
    msg.setDestination(36215U);
    msg.setDestinationEntity(29U);
    msg.vel = 0.741660081674374;
    msg.amp = 0.5702630984467152;
    msg.cor = 88U;

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
    msg.setTimeStamp(0.6929089077464056);
    msg.setSource(39705U);
    msg.setSourceEntity(152U);
    msg.setDestination(34024U);
    msg.setDestinationEntity(162U);
    msg.name.assign("NRGYTFYKKKZDAUVUQYTERVSWNIWCMLXMKKMPCWPDFCQLFBXTYOBMLGEVJCMNHADEOYNAMDBIFTCQQCFSDFFKJGPAUCTILWABPRVHEXQRRGFOQBNPSFOEEQIULNMWWROZQKLUGAGWCQVZPNNDVDEBKYROLAHZGRDZJJTOSOUZWZRVHZFJVUXGSKRMIOVDYWASJXDKISTEBIPYXTAVLYIJHHJSZBXJOTPH");
    msg.value = 144U;

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
    msg.setTimeStamp(0.05147465652850691);
    msg.setSource(39640U);
    msg.setSourceEntity(158U);
    msg.setDestination(63597U);
    msg.setDestinationEntity(32U);
    msg.name.assign("TARWPLHGKVAXTDSFV");
    msg.value = 74U;

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
    msg.setTimeStamp(0.8528731793915085);
    msg.setSource(19984U);
    msg.setSourceEntity(201U);
    msg.setDestination(60026U);
    msg.setDestinationEntity(53U);
    msg.name.assign("BFWBHKOBRNSXHGQIGAMHFPDYFJKWDUWITAKTUGMLGXKVGVCACZDNUCEZDSURIYNTCQMAATOWSDVLRXBATAMEYBWTHLEANWYJQXGEYJJUOKFZPTFQHNZSJYCQRAVLSEXDKTLABLBRPOFUIROXPKJOWHQKNIVQNLNMPVUVPMVGFZCGZCQXMWDYDWMRHJHQHOLPXLEUDGPMNOOZJZUYBXS");
    msg.value = 78U;

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
    msg.setTimeStamp(0.9656062084690769);
    msg.setSource(62305U);
    msg.setSourceEntity(161U);
    msg.setDestination(14705U);
    msg.setDestinationEntity(144U);
    msg.name.assign("CMJLZXFKLNENHOXHUYPFWXYXOTPLODVJEERYLINZQSQIHLARIFWSXLPQJKXVPGO");

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
    msg.setTimeStamp(0.22581528936626205);
    msg.setSource(19093U);
    msg.setSourceEntity(242U);
    msg.setDestination(56081U);
    msg.setDestinationEntity(74U);
    msg.name.assign("QRIMWHIZHCVWWKWKYGFMOJVQCFDZFZNASXQYCPYHGNTIDMQZQPEUBKAIPQYGNCPKPOZAGGEAOLYBUPWZDCYBEFJZXLBSWBRJGPIQNUUFVAXLJHDZTDKNLMCAGRSCUEEAHLJROPSU");

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
    msg.setTimeStamp(0.8133986436922835);
    msg.setSource(34654U);
    msg.setSourceEntity(64U);
    msg.setDestination(22360U);
    msg.setDestinationEntity(12U);
    msg.name.assign("CAJKKDRZJKRPYJHXOTQUGXWJXBOKXDAHLCUVGSINGPJSJXLQVZWITONCFUDZDZGTGMWYRWSPZFARZBUSMBYPLPMSLZV");

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
    msg.setTimeStamp(0.8939425619484946);
    msg.setSource(12376U);
    msg.setSourceEntity(44U);
    msg.setDestination(17960U);
    msg.setDestinationEntity(31U);
    msg.name.assign("RBVEXIKPAIPOHDJXPSFEHYTBLFIP");
    msg.value = 248U;

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
    msg.setTimeStamp(0.9015582118713968);
    msg.setSource(3987U);
    msg.setSourceEntity(251U);
    msg.setDestination(18525U);
    msg.setDestinationEntity(229U);
    msg.name.assign("KEEKQMGYZCCIBZHVFIGZZHSEYWVTUELPYRDTIACEBQFZGUWJLINOEWRALAWXLYTKFSCHVLQPNUDURUHMSJTULSZXAOQKFKSPWFOQOUWTXFIVJPOQAYOHBPJXHVFYIAKWKSUICJDDTEBBCCG");
    msg.value = 242U;

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
    msg.setTimeStamp(0.6168885233670168);
    msg.setSource(16905U);
    msg.setSourceEntity(115U);
    msg.setDestination(29127U);
    msg.setDestinationEntity(216U);
    msg.name.assign("XIAKZOKOMQVDKNQHANZXXAWFQTTDBNSEKOISUANLIJXAVFKPJXTHDEIVQCNFSINOAPIRGDUXJLELPLMVSYTHCWUTDPKPOAQF");
    msg.value = 208U;

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
    msg.setTimeStamp(0.2686961636416305);
    msg.setSource(10240U);
    msg.setSourceEntity(183U);
    msg.setDestination(26075U);
    msg.setDestinationEntity(163U);
    msg.value = 0.23808655374724552;

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
    msg.setTimeStamp(0.6068651008626621);
    msg.setSource(32260U);
    msg.setSourceEntity(102U);
    msg.setDestination(48676U);
    msg.setDestinationEntity(150U);
    msg.value = 0.7363815691905615;

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
    msg.setTimeStamp(0.9944492156962416);
    msg.setSource(65338U);
    msg.setSourceEntity(227U);
    msg.setDestination(27608U);
    msg.setDestinationEntity(139U);
    msg.value = 0.18867754610924115;

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
    msg.setTimeStamp(0.4004698520886466);
    msg.setSource(40197U);
    msg.setSourceEntity(134U);
    msg.setDestination(59629U);
    msg.setDestinationEntity(161U);
    msg.value = 0.59997602925996;

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
    msg.setTimeStamp(0.7762274475580303);
    msg.setSource(37122U);
    msg.setSourceEntity(17U);
    msg.setDestination(10724U);
    msg.setDestinationEntity(72U);
    msg.value = 0.2415579570532913;

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
    msg.setTimeStamp(0.30136727546343245);
    msg.setSource(55732U);
    msg.setSourceEntity(151U);
    msg.setDestination(38687U);
    msg.setDestinationEntity(206U);
    msg.value = 0.9406539486225307;

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
    msg.setTimeStamp(0.06118744324326342);
    msg.setSource(22290U);
    msg.setSourceEntity(68U);
    msg.setDestination(43442U);
    msg.setDestinationEntity(171U);
    msg.value = 0.256493635668805;

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
    msg.setTimeStamp(0.3555961286786279);
    msg.setSource(56391U);
    msg.setSourceEntity(49U);
    msg.setDestination(11224U);
    msg.setDestinationEntity(100U);
    msg.value = 0.9668006825230883;

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
    msg.setTimeStamp(0.8212794022510709);
    msg.setSource(9723U);
    msg.setSourceEntity(96U);
    msg.setDestination(43319U);
    msg.setDestinationEntity(153U);
    msg.value = 0.5148303724169389;

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
    msg.setTimeStamp(0.8563391772994546);
    msg.setSource(44612U);
    msg.setSourceEntity(101U);
    msg.setDestination(32281U);
    msg.setDestinationEntity(103U);
    msg.restriction = 183U;
    msg.reason.assign("YPBAFEAZLBPKPYBMWTIFPR");

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
    msg.setTimeStamp(0.8133669686733516);
    msg.setSource(24549U);
    msg.setSourceEntity(20U);
    msg.setDestination(64060U);
    msg.setDestinationEntity(71U);
    msg.restriction = 95U;
    msg.reason.assign("SUOLOZXFENRLMIMWQOSSZBGGTWDZWXNNVBNWAXVDLLVWWLJSTMNURALMUEANEYQRPTSDZMSVVGBQAMTJUABITDPPKHCSXDFIGVBRWZMMCUKUBHKEBAKYBYIPPDJIGUFFICJCOOWBCCCNJIPQKYYEQYACHKGDTMZUTAJGVIVKNQHHZEGLQ");

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
    msg.setTimeStamp(0.3850113944161785);
    msg.setSource(3936U);
    msg.setSourceEntity(46U);
    msg.setDestination(16587U);
    msg.setDestinationEntity(147U);
    msg.restriction = 217U;
    msg.reason.assign("ZKBILPGGXIYUVAITYJWQQYIWMZCJXOZPNDAHZEYQKMFBOQHDOEQCKJCFTCXPWIRICQVVWOYGHLEJMERIGTBBRKOYQKLVNUNHYARPZKOEZXEHFMSTTFJKANXMBVNHJANVBECPPCAUXKCYSZECGFSSYDPRJKBOFUBGFLAAMNSKSHQUFZ");

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
