//***************************************************************************
// Copyright 2007-2023 Universidade do Porto - Faculdade de Engenharia      *
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
// IMC XML MD5: 762ef830be415e1c3e6f5b429829f51a                            *
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
    msg.setTimeStamp(0.04237170957086556);
    msg.setSource(41675U);
    msg.setSourceEntity(128U);
    msg.setDestination(35053U);
    msg.setDestinationEntity(79U);
    msg.state = 216U;
    msg.flags = 134U;
    msg.description.assign("RCSCOXNGLQEJISUAXJDRVNVVEFXLEBTOETURLMIFNOUQBGVTBIZCBHCOUQBKBRVHQXVEOPGGSAHUYQVAWNLJODPPKPTEFFCFOY");

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
    msg.setTimeStamp(0.6705496113993864);
    msg.setSource(2224U);
    msg.setSourceEntity(157U);
    msg.setDestination(17951U);
    msg.setDestinationEntity(15U);
    msg.state = 145U;
    msg.flags = 86U;
    msg.description.assign("PPJSXOHFSCLREGCPROWHUAEERNBUIYHQVHJQEMNIRUCNXCFHPMUGKOLVIRKXKMVULMJQDCSKBIQFBUNZRBTKYFOGXKGX");

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
    msg.setTimeStamp(0.3827980130071832);
    msg.setSource(52028U);
    msg.setSourceEntity(239U);
    msg.setDestination(18228U);
    msg.setDestinationEntity(230U);
    msg.state = 59U;
    msg.flags = 226U;
    msg.description.assign("KJSVODSKYDHZHSDM");

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
    msg.setTimeStamp(0.5764806477824183);
    msg.setSource(50230U);
    msg.setSourceEntity(86U);
    msg.setDestination(28906U);
    msg.setDestinationEntity(136U);

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
    msg.setTimeStamp(0.06410077741862807);
    msg.setSource(5553U);
    msg.setSourceEntity(194U);
    msg.setDestination(55996U);
    msg.setDestinationEntity(70U);

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
    msg.setTimeStamp(0.6431763448248923);
    msg.setSource(27694U);
    msg.setSourceEntity(186U);
    msg.setDestination(49058U);
    msg.setDestinationEntity(251U);

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
    msg.setTimeStamp(0.9274201694145998);
    msg.setSource(51020U);
    msg.setSourceEntity(186U);
    msg.setDestination(13620U);
    msg.setDestinationEntity(21U);
    msg.id = 1U;
    msg.label.assign("GZPGEXKUQBRIQOCXNVHVDFTGQKENDELISMUZXCCHDHYGKVWTWPEUFGRATGBHYWDILIMUKCPKJILVYXAXUFHABTAEOXHSORIYWXVQPTOR");
    msg.component.assign("WARVERUZDIOQRVRMKMUMDVFGMWOKEXPNOFHZMRUXEAMPPNYKEKTOAJJNNMIXJJATMQYOXBYMNFOQGIUYBEFXRWGTLHEZPLKYKXFQCGZHXJDYQPWDGRQSTZIZUZHXALSFLSQCANERXBHQBPLCSTUSDSTKIEHCOTLCVFHUFWVVIRDKXSCCAAJZANTNOLWOJPYSFHBBHZBFBNVGWEYCQUEINLTVGJUDKPWGLSISIJBDAUVMPYJVD");
    msg.act_time = 46526U;
    msg.deact_time = 39350U;

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
    msg.setTimeStamp(0.8149385739876445);
    msg.setSource(340U);
    msg.setSourceEntity(238U);
    msg.setDestination(26054U);
    msg.setDestinationEntity(179U);
    msg.id = 223U;
    msg.label.assign("GDTZUPBVMZPNUJLXDPZTMLIVFGHEQVTSLOIKCHKOSILRNFNDHLJYXPONFRCWCBQBNJNKPCGPJLFRQAVAOKYUWAQGWXIHBIUODNYEFZKFPQUU");
    msg.component.assign("DQDHOZPNQXKVDKXRGKNPRKDJRFIWCAEGQCQJKPCXXVMEDIGPKEAKJNRZQMTUBCFWMUJQDEATHKNLKATAMHSWUXANYFURLFYRLBU");
    msg.act_time = 25436U;
    msg.deact_time = 63760U;

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
    msg.setTimeStamp(0.06912442436048272);
    msg.setSource(46229U);
    msg.setSourceEntity(50U);
    msg.setDestination(20914U);
    msg.setDestinationEntity(208U);
    msg.id = 174U;
    msg.label.assign("OGLBMBELYUPDNSHHMNJKSGBFVG");
    msg.component.assign("SGUDQZPBWYVYFGEMIMQCODXUHXTAWDSO");
    msg.act_time = 10142U;
    msg.deact_time = 64643U;

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
    msg.setTimeStamp(0.5233405259849592);
    msg.setSource(45737U);
    msg.setSourceEntity(176U);
    msg.setDestination(26959U);
    msg.setDestinationEntity(88U);
    msg.id = 187U;

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
    msg.setTimeStamp(0.013966531576623087);
    msg.setSource(22583U);
    msg.setSourceEntity(80U);
    msg.setDestination(40864U);
    msg.setDestinationEntity(107U);
    msg.id = 141U;

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
    msg.setTimeStamp(0.09851564060170348);
    msg.setSource(56729U);
    msg.setSourceEntity(205U);
    msg.setDestination(32295U);
    msg.setDestinationEntity(236U);
    msg.id = 41U;

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
    msg.setTimeStamp(0.7671592334037958);
    msg.setSource(61622U);
    msg.setSourceEntity(141U);
    msg.setDestination(26434U);
    msg.setDestinationEntity(206U);
    msg.op = 130U;
    msg.list.assign("CDOXMAPYAJEEZFGTRYNOQOWZKMNPZERXSNSZMURNPBNFQGUECYADAODLPKRLWZLTHYNDHRTSFAISYTWHREUOBTUXKFJWVFHZJVLBLLONSUPIJGCWPAHQDFYWXPGMBMQSVICGWSVCZQKBBTFVXDDXVKTJIV");

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
    msg.setTimeStamp(0.5699236831877701);
    msg.setSource(15638U);
    msg.setSourceEntity(214U);
    msg.setDestination(18844U);
    msg.setDestinationEntity(162U);
    msg.op = 77U;
    msg.list.assign("CHMIBMSTGRVOLGMTKVKDQAWMIBXHMPHKCIGYDABQQRFUTEUJSWRVVYNWKXARAEFTLZVEXOEOKFWZUDJHLBEPHDFOCPXOAFIKOYJYXGCNJLSGJCEMMPSUGCZZFAINDEILWNCYTHBQXPVYCJPZUSDEQUYPOCPJW");

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
    msg.setTimeStamp(0.5747025279447039);
    msg.setSource(26061U);
    msg.setSourceEntity(212U);
    msg.setDestination(1678U);
    msg.setDestinationEntity(211U);
    msg.op = 226U;
    msg.list.assign("QYVTOJWMDPYPIVNPQTXTRBZLDMPKUPVTPYUEL");

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
    msg.setTimeStamp(0.2233054272865349);
    msg.setSource(40593U);
    msg.setSourceEntity(186U);
    msg.setDestination(41196U);
    msg.setDestinationEntity(215U);
    msg.value = 180U;

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
    msg.setTimeStamp(0.1753814119609558);
    msg.setSource(34088U);
    msg.setSourceEntity(61U);
    msg.setDestination(23168U);
    msg.setDestinationEntity(211U);
    msg.value = 204U;

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
    msg.setTimeStamp(0.21342132917833123);
    msg.setSource(24214U);
    msg.setSourceEntity(111U);
    msg.setDestination(27339U);
    msg.setDestinationEntity(59U);
    msg.value = 12U;

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
    msg.setTimeStamp(0.5788590581644724);
    msg.setSource(44809U);
    msg.setSourceEntity(189U);
    msg.setDestination(18952U);
    msg.setDestinationEntity(77U);
    msg.consumer.assign("GPDDXCGMGBVCNEFNDPZTNTMCUKESHCMIOUALROOYARGYVDFFCXPIMXACZYAUXSXFQASMVXAWDUSZYYKWRLIQRLGVKIAQTMHEGJLIHZDRONYTLHURYVVTKUZGWJRDJEKSIYPTPHJRRGFAKSSWQIETZFHLTJNKCRSUCOOMHBNTEXMEPMQZZWFUADBLVEZDKINHCTLPCWXPUOILBJNQDNOZ");
    msg.message_id = 3644U;

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
    msg.setTimeStamp(0.5603988614105001);
    msg.setSource(47739U);
    msg.setSourceEntity(34U);
    msg.setDestination(1566U);
    msg.setDestinationEntity(172U);
    msg.consumer.assign("POPFBNKWWOGKIKACNIMRDJCIQJRNDTVYFLXXMBLXEMYZLBCGHOJCUOXMJYUTBZTIVOQGKAFPGCXJKSOTESJURSQTUGQPUMFJIRSUUBWHVZQWEB");
    msg.message_id = 50256U;

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
    msg.setTimeStamp(0.31514062424045153);
    msg.setSource(1733U);
    msg.setSourceEntity(241U);
    msg.setDestination(41002U);
    msg.setDestinationEntity(144U);
    msg.consumer.assign("NUMUMYPUPFXXOEVVQWUISGFYEBXSNCUMRODJVZJREJLFMCOKBRDVPNCHAFOTGIHJGEIYZCB");
    msg.message_id = 2068U;

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
    msg.setTimeStamp(0.375666669558544);
    msg.setSource(49766U);
    msg.setSourceEntity(19U);
    msg.setDestination(57003U);
    msg.setDestinationEntity(107U);
    msg.type = 204U;

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
    msg.setTimeStamp(0.787862796728659);
    msg.setSource(14310U);
    msg.setSourceEntity(4U);
    msg.setDestination(12044U);
    msg.setDestinationEntity(201U);
    msg.type = 117U;

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
    msg.setTimeStamp(0.08517541991150335);
    msg.setSource(39366U);
    msg.setSourceEntity(241U);
    msg.setDestination(12838U);
    msg.setDestinationEntity(75U);
    msg.type = 120U;

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
    msg.setTimeStamp(0.1915038343997585);
    msg.setSource(31619U);
    msg.setSourceEntity(0U);
    msg.setDestination(64287U);
    msg.setDestinationEntity(114U);
    msg.op = 197U;

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
    msg.setTimeStamp(0.7484984833564383);
    msg.setSource(42538U);
    msg.setSourceEntity(169U);
    msg.setDestination(30947U);
    msg.setDestinationEntity(153U);
    msg.op = 4U;

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
    msg.setTimeStamp(0.538769434777433);
    msg.setSource(9261U);
    msg.setSourceEntity(206U);
    msg.setDestination(50624U);
    msg.setDestinationEntity(182U);
    msg.op = 32U;

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
    msg.setTimeStamp(0.6079909733651608);
    msg.setSource(55039U);
    msg.setSourceEntity(210U);
    msg.setDestination(16626U);
    msg.setDestinationEntity(178U);
    msg.total_steps = 46U;
    msg.step_number = 228U;
    msg.step.assign("YISVYLHFMKNEZXRKMIVKLIBWYRSHUFNUGFDSCDLGQMGVOEAYTYXFZHXLKAGSOMNJDQCANJWBJLLAXPDJZOCJUZPOVIOIXPYZSKHXOTDTBWQWUQGNBZMNFSMOCLSRDNHGQTLZJSPXNAIIALGPEAVDKVXUPESYYYWRKHNVVFRCQIZABEUOMBFPUZVWJHEHR");
    msg.flags = 163U;

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
    msg.setTimeStamp(0.8233578982583485);
    msg.setSource(21884U);
    msg.setSourceEntity(22U);
    msg.setDestination(64890U);
    msg.setDestinationEntity(214U);
    msg.total_steps = 159U;
    msg.step_number = 82U;
    msg.step.assign("SJCTNZXMXBHABCHUCFPIJFEVMTGKBOEL");
    msg.flags = 192U;

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
    msg.setTimeStamp(0.3638505169533178);
    msg.setSource(12067U);
    msg.setSourceEntity(226U);
    msg.setDestination(10216U);
    msg.setDestinationEntity(145U);
    msg.total_steps = 105U;
    msg.step_number = 121U;
    msg.step.assign("DMKHYZHAUKWOZJHMCCAUTXLAZHZGFILZGKQGXPECPLXJCAKPHJWPDJCNBHUAOBQTGNEWLIFVAQSBVQWQYKNJXXQUZZNONFMXMRIMYKZJYYZROARESXVSMEDFSNPBEMFWYJPTUSTJBKMIFIIPDQGLLJGWFVLNUDACLTDEEVCTIZHKTAGTTFNPDHRLOCKBQRCFQAHOOVGIDTBSMRDESSYCEIROHUWNGRMIXDRQB");
    msg.flags = 28U;

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
    msg.setTimeStamp(0.310108250946467);
    msg.setSource(20219U);
    msg.setSourceEntity(24U);
    msg.setDestination(57925U);
    msg.setDestinationEntity(191U);
    msg.state = 223U;
    msg.error.assign("UIEKKWKFNMJOTRYXFCOWBRDWUIFCBTLSOIGMVDWPJCQUJKINHGILVSGMLVYQXXSKBVLLFOPUECKEJUCAAHAHULBVURZMWBQPMRRFRWTFNSFWKAYWMNTNDWHZQTMRAQBIZVGSPWPRKPONZZD");

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
    msg.setTimeStamp(0.7470697186695611);
    msg.setSource(2893U);
    msg.setSourceEntity(202U);
    msg.setDestination(10636U);
    msg.setDestinationEntity(111U);
    msg.state = 92U;
    msg.error.assign("LCHXRUEICQMGWGRLGZNXKYFPITVTUOJRAIXFNTAYJZHFKAVKFLVHXLDPAGEIKBQKKETDITUNWYVDOMLKBYCHLZVDEAWWSMPMNAZDMZOGJUTRYGJLFCTDSROBUZTEFBLRCXQIUNWJNIMAFWNTBNOHDDYC");

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
    msg.setTimeStamp(0.7878131519516061);
    msg.setSource(3617U);
    msg.setSourceEntity(241U);
    msg.setDestination(17818U);
    msg.setDestinationEntity(251U);
    msg.state = 106U;
    msg.error.assign("OCACSZYBNIIUVSPSXYXZIFOJMABWIESIKYEJBXREMMAOUSRGRIEBANL");

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
    msg.setTimeStamp(0.08196760674905135);
    msg.setSource(59680U);
    msg.setSourceEntity(236U);
    msg.setDestination(3761U);
    msg.setDestinationEntity(229U);

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
    msg.setTimeStamp(0.5906005503622261);
    msg.setSource(25968U);
    msg.setSourceEntity(14U);
    msg.setDestination(49764U);
    msg.setDestinationEntity(143U);

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
    msg.setTimeStamp(0.19570443907997503);
    msg.setSource(12740U);
    msg.setSourceEntity(87U);
    msg.setDestination(46505U);
    msg.setDestinationEntity(98U);

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
    msg.setTimeStamp(0.9288048488692335);
    msg.setSource(32883U);
    msg.setSourceEntity(171U);
    msg.setDestination(44263U);
    msg.setDestinationEntity(232U);
    msg.op = 161U;
    msg.speed_min = 0.9346902326819813;
    msg.speed_max = 0.9257509818009801;
    msg.long_accel = 0.6891616604664194;
    msg.alt_max_msl = 0.6685310922309887;
    msg.dive_fraction_max = 0.22751280738661062;
    msg.climb_fraction_max = 0.8721925106311269;
    msg.bank_max = 0.7406008126621645;
    msg.p_max = 0.8343871170434384;
    msg.pitch_min = 0.05116740691869437;
    msg.pitch_max = 0.8514395931382733;
    msg.q_max = 0.11219722952855282;
    msg.g_min = 0.9190480910253553;
    msg.g_max = 0.16092510686809003;
    msg.g_lat_max = 0.31461769964890407;
    msg.rpm_min = 0.02349465324224287;
    msg.rpm_max = 0.9233864263261278;
    msg.rpm_rate_max = 0.01279508828848086;

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
    msg.setTimeStamp(0.17147942899209656);
    msg.setSource(42624U);
    msg.setSourceEntity(4U);
    msg.setDestination(8561U);
    msg.setDestinationEntity(37U);
    msg.op = 199U;
    msg.speed_min = 0.7565410289686053;
    msg.speed_max = 0.962070518784031;
    msg.long_accel = 0.626574102252613;
    msg.alt_max_msl = 0.3792905601005756;
    msg.dive_fraction_max = 0.3150776467353541;
    msg.climb_fraction_max = 0.9698473953814374;
    msg.bank_max = 0.8046079590495425;
    msg.p_max = 0.5559862273682397;
    msg.pitch_min = 0.8420505845879678;
    msg.pitch_max = 0.8319898866060377;
    msg.q_max = 0.23794729070787535;
    msg.g_min = 0.506350394940592;
    msg.g_max = 0.21774866308187746;
    msg.g_lat_max = 0.06709534172533893;
    msg.rpm_min = 0.6132148558596152;
    msg.rpm_max = 0.250749663066855;
    msg.rpm_rate_max = 0.3368225779366012;

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
    msg.setTimeStamp(0.2425889099418419);
    msg.setSource(64701U);
    msg.setSourceEntity(206U);
    msg.setDestination(23111U);
    msg.setDestinationEntity(134U);
    msg.op = 92U;
    msg.speed_min = 0.45882890009476063;
    msg.speed_max = 0.062065065479258386;
    msg.long_accel = 0.4497041894433781;
    msg.alt_max_msl = 0.5632052544620997;
    msg.dive_fraction_max = 0.7125325078398039;
    msg.climb_fraction_max = 0.35878541950069476;
    msg.bank_max = 0.32348485784610925;
    msg.p_max = 0.6112410853993778;
    msg.pitch_min = 0.13473147706877642;
    msg.pitch_max = 0.6380099096047466;
    msg.q_max = 0.6456364864076584;
    msg.g_min = 0.39497945484253616;
    msg.g_max = 0.9032801939322028;
    msg.g_lat_max = 0.8915771717387927;
    msg.rpm_min = 0.055441352349284156;
    msg.rpm_max = 0.2378300601659511;
    msg.rpm_rate_max = 0.7348254015291519;

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
    msg.setTimeStamp(0.03857727669914324);
    msg.setSource(52654U);
    msg.setSourceEntity(184U);
    msg.setDestination(47614U);
    msg.setDestinationEntity(149U);
    IMC::DmsDetection tmp_msg_0;
    tmp_msg_0.ch01 = 0.055587998003263195;
    tmp_msg_0.ch02 = 0.5637335680771013;
    tmp_msg_0.ch03 = 0.6039747939752207;
    tmp_msg_0.ch04 = 0.938324791274226;
    tmp_msg_0.ch05 = 0.038802322637847775;
    tmp_msg_0.ch06 = 0.9455212472261812;
    tmp_msg_0.ch07 = 0.45711183046951087;
    tmp_msg_0.ch08 = 0.7077225551086878;
    tmp_msg_0.ch09 = 0.6997988877438531;
    tmp_msg_0.ch10 = 0.5239468776898771;
    tmp_msg_0.ch11 = 0.18930956201365567;
    tmp_msg_0.ch12 = 0.782653544011167;
    tmp_msg_0.ch13 = 0.13476205089415583;
    tmp_msg_0.ch14 = 0.3247376406488953;
    tmp_msg_0.ch15 = 0.29314288827864743;
    tmp_msg_0.ch16 = 0.6699553590212862;
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
    msg.setTimeStamp(0.5574092627546009);
    msg.setSource(16844U);
    msg.setSourceEntity(116U);
    msg.setDestination(12989U);
    msg.setDestinationEntity(143U);
    IMC::AcousticStatus tmp_msg_0;
    tmp_msg_0.req_id = 59340U;
    tmp_msg_0.type = 81U;
    tmp_msg_0.status = 183U;
    tmp_msg_0.info.assign("KUUPCTAKQJUYRCNFWCTABTZNSEYBNICXVIJDNGODIRXIQVFDEQWBUMNJXHVNZJKLPZKCKIGFZUQFBVLMCIHHCBHAMCQASWKJAXFKORGYPRRJZSPEPJVVTQKYFZMMBBYNMZVYYOZKVNAQSPPALEEMDNTSWXXHDUTWORGFYL");
    tmp_msg_0.range = 0.8671451054532214;
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
    msg.setTimeStamp(0.3127130190652414);
    msg.setSource(57252U);
    msg.setSourceEntity(228U);
    msg.setDestination(17293U);
    msg.setDestinationEntity(97U);

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
    msg.setTimeStamp(0.8894202477289331);
    msg.setSource(3564U);
    msg.setSourceEntity(70U);
    msg.setDestination(3913U);
    msg.setDestinationEntity(69U);
    msg.lat = 0.5888798338747163;
    msg.lon = 0.11430634198289735;
    msg.height = 0.001817005453039866;
    msg.x = 0.4826251248342277;
    msg.y = 0.31666946361033443;
    msg.z = 0.9509387554385118;
    msg.phi = 0.38325790792663084;
    msg.theta = 0.8766108059196757;
    msg.psi = 0.8839297273761795;
    msg.u = 0.38236237804930506;
    msg.v = 0.05215818352620849;
    msg.w = 0.26405378554875636;
    msg.p = 0.5685774857117764;
    msg.q = 0.11697248520041814;
    msg.r = 0.37778401623435753;
    msg.svx = 0.9297176195170819;
    msg.svy = 0.24112073557598146;
    msg.svz = 0.8468567990580949;

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
    msg.setTimeStamp(0.04764875416485537);
    msg.setSource(46164U);
    msg.setSourceEntity(147U);
    msg.setDestination(46886U);
    msg.setDestinationEntity(76U);
    msg.lat = 0.2649562187021842;
    msg.lon = 0.8859988603291127;
    msg.height = 0.08095679513612863;
    msg.x = 0.49695098435831053;
    msg.y = 0.6146231890184318;
    msg.z = 0.41747825830678864;
    msg.phi = 0.8706145864428805;
    msg.theta = 0.7645653274263104;
    msg.psi = 0.23094272479032674;
    msg.u = 0.6285737135140536;
    msg.v = 0.9774681559780372;
    msg.w = 0.362583747770836;
    msg.p = 0.22640878844102208;
    msg.q = 0.4326792647059836;
    msg.r = 0.8355208235516816;
    msg.svx = 0.15367692779513709;
    msg.svy = 0.5168346169742887;
    msg.svz = 0.9970951625322126;

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
    msg.setTimeStamp(0.8701932523357996);
    msg.setSource(39132U);
    msg.setSourceEntity(30U);
    msg.setDestination(11726U);
    msg.setDestinationEntity(124U);
    msg.lat = 0.40882141258483473;
    msg.lon = 0.326654761712455;
    msg.height = 0.6112680945824734;
    msg.x = 0.014970838130675568;
    msg.y = 0.8927520253224264;
    msg.z = 0.3335476125469623;
    msg.phi = 0.21853616335454618;
    msg.theta = 0.94273010393153;
    msg.psi = 0.5678555657775483;
    msg.u = 0.8664904104409661;
    msg.v = 0.032257410705296974;
    msg.w = 0.7805493744208543;
    msg.p = 0.11739878116953939;
    msg.q = 0.3946210105921041;
    msg.r = 0.9532188936661355;
    msg.svx = 0.37338511297874843;
    msg.svy = 0.6067907590797141;
    msg.svz = 0.16628276552233967;

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
    msg.setTimeStamp(0.2848003361319027);
    msg.setSource(26432U);
    msg.setSourceEntity(69U);
    msg.setDestination(42563U);
    msg.setDestinationEntity(208U);
    msg.op = 194U;
    msg.entities.assign("RKDVHQLYMBXBMALQEWROGIRLKMYBBMMARQGIQTIJUZPXQKTSSSZYRZDVJNZUPMVHLEBHHCWIWWELMFXSHVJWPTD");

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
    msg.setTimeStamp(0.9346666040467458);
    msg.setSource(31289U);
    msg.setSourceEntity(90U);
    msg.setDestination(28291U);
    msg.setDestinationEntity(121U);
    msg.op = 57U;
    msg.entities.assign("RXUNLWEIVXIKKJNBBAOVJUGZUUWOKLKVT");

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
    msg.setTimeStamp(0.27004441676206237);
    msg.setSource(24315U);
    msg.setSourceEntity(144U);
    msg.setDestination(14513U);
    msg.setDestinationEntity(34U);
    msg.op = 46U;
    msg.entities.assign("ZOMVMPPCCQRLHNXQEYVJJHYXOQWOMQJVRQKRVESBRSGPJDLPAGCMMPQHNRVAXOPNUUGTGCYLBSDZATDDFWMCSGYBBVKNOUSNYNFIDGHIJIJVDVIWEDYLSLLWFPYMHVNCWQAEVJTEKSZRAZEFZFHAZTXADALFTSBCHXINMGUIKCQORQGTTBEOLTIYPOEMQHBISKOIINRU");

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
    msg.setTimeStamp(0.040181471472612085);
    msg.setSource(43375U);
    msg.setSourceEntity(0U);
    msg.setDestination(28778U);
    msg.setDestinationEntity(181U);
    msg.type = 67U;
    msg.speed = 18079U;
    const signed char tmp_msg_0[] = {-96, -109, -21, 100, 122, 74, 41, 62, 100, -23, -40, 1, 92, 68, -36, -118, -21, 62, -96, 14, -66, 65, 108, 60, 68, -50, 65, -115, -109, -123, 125, -23, 66, 46, -114, 72, 84, 60, -44, 56, -45, -49, -93, -32, -2, -118, 23, -8, -46, -91, -85, 108, -122, -122, 111, -107, -42, 73, -117, -110, 3, -106, 94, -4, -46, -33, -91, -61, 89, -104, -66, -10, -26, 1, 50, 20, -22, -20, 56, -47, -127, -79, -50, 101, -82, -119, 21, 16, -81, -16, -85, -3, -28, 126, -17, -91, -14, -50, -102, 90, 76, 73, 50, 119, 73, 123, 32, -18, -99, 62, -9, 101, 97, -11, 51, 122, -17, 90, -122, -46, -113, 126, -60, -108, 93, -125, -87, 100, 113, -71, -27, -104, -7, 23, -124, -45, -108, 35, 1, 46, 56, 95, -25, -45, 41, 112, 7, 53, 70, -39, 119, -120, 48, 42, 16, 38, -34, -13, 93, -85, -66, 58, 11, 16, 24, 43, 15, 93, -55, 105, -14, 72, 46, -39, -126, -112, -68, -68, -65, 105, 74, 43, 31, 30, -118, 110, -93, -57, 10, 110, -9, -96, 122};
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
    msg.setTimeStamp(0.09631347102561749);
    msg.setSource(39163U);
    msg.setSourceEntity(36U);
    msg.setDestination(11022U);
    msg.setDestinationEntity(83U);
    msg.type = 182U;
    msg.speed = 64035U;
    const signed char tmp_msg_0[] = {-83, -21, -106, 122, 28, 117, 97, -8, 120, 9, 85, 30, 62, -40, -17, 79, -113, -55, 122, 77, -73, 20, -112, -62, 123, -74, 75, -22, -105, 93, 90, -25, -113, 13, -124, -12, 102, -86, 67, -4, -46, 111, -62, -26, 44, 39, -13, -43, 40, 17, 95, 108, -119, 110, 13, 60, 67, -19, -11, 88, 34, 62, -41, -66, 59, 7, -94, 72, 80, -38, 12, -21, -44, -123, -66, 122, 116, -98, -24, -102, 101, -116, 13, -12, 42, 18, -55, 13, -17, 119, -127, -29, -19, -76, 126, 126, 7, -30, 45, 1, 118, 16, 19, 26, -20, -51, 101, 32, 7, -100, -71, -10, 44, 118, -16, -98, -37, 18, -95, -31, 12, -4, -108, -127};
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
    msg.setTimeStamp(0.16585581663645266);
    msg.setSource(15335U);
    msg.setSourceEntity(109U);
    msg.setDestination(34400U);
    msg.setDestinationEntity(201U);
    msg.type = 5U;
    msg.speed = 56039U;
    const signed char tmp_msg_0[] = {-105, 104, -48, 26, -101, 126, -105, 31, 6, 51, 76, -6, -69, 95, 106, -15, 78, 44, -87, -81, -81, -44, -115, -101, 78, 74, -14, -105, -91, 111, 117, 35, 24, -43, 123, 58, 122, -93, -43, 27, 17, -3, 86, -20, 117, 30, 7, -83, -47, -17, -127, -34, -61, -88, 37, 87, -12, -104, -124, 102, 19, -120, -18, -2, -31, 27, 103, -42, -15, -6, 17, 64, 98, 89, 35, -109, 78, 79, 77, -40, 71, -124, -92, 54, -62, -124, 120, -107, -124, 104, 62, 66, -110, 43, -69, 112, 47, 16, -90, 110, 107, -4, 6, 23, 108, 46, 49, 60, 121, -102, 120, -63, -76, 89, -66, -79, -90, 91, 68, 102, 101, 104, -46, 115, 34, -118, -1, 9, -7, -13, 122, 90, 47, -76, 11, 47, 96, -111, -55, 28, -34, 102, 36, 75, 118, -75, -112, 18, -33, 119, 55, -41};
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
    msg.setTimeStamp(0.4172852302254413);
    msg.setSource(27209U);
    msg.setSourceEntity(36U);
    msg.setDestination(52415U);
    msg.setDestinationEntity(239U);
    msg.op = 141U;
    msg.tas2acc_pgain = 0.7257974387003291;
    msg.bank2p_pgain = 0.2621303848898905;

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
    msg.setTimeStamp(0.6319642873259025);
    msg.setSource(45856U);
    msg.setSourceEntity(84U);
    msg.setDestination(17882U);
    msg.setDestinationEntity(156U);
    msg.op = 9U;
    msg.tas2acc_pgain = 0.48039584304547756;
    msg.bank2p_pgain = 0.5938071214000842;

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
    msg.setTimeStamp(0.47201517664750925);
    msg.setSource(57422U);
    msg.setSourceEntity(31U);
    msg.setDestination(58924U);
    msg.setDestinationEntity(236U);
    msg.op = 217U;
    msg.tas2acc_pgain = 0.831717877044329;
    msg.bank2p_pgain = 0.5813773073660994;

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
    msg.setTimeStamp(0.19729283741496784);
    msg.setSource(49386U);
    msg.setSourceEntity(142U);
    msg.setDestination(58580U);
    msg.setDestinationEntity(218U);
    msg.available = 2145153628U;
    msg.value = 216U;

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
    msg.setTimeStamp(0.7414748441052843);
    msg.setSource(39073U);
    msg.setSourceEntity(33U);
    msg.setDestination(21547U);
    msg.setDestinationEntity(184U);
    msg.available = 3075029079U;
    msg.value = 107U;

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
    msg.setTimeStamp(0.46591998416908453);
    msg.setSource(63221U);
    msg.setSourceEntity(184U);
    msg.setDestination(2739U);
    msg.setDestinationEntity(230U);
    msg.available = 1470749137U;
    msg.value = 143U;

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
    msg.setTimeStamp(0.2638854578105466);
    msg.setSource(17731U);
    msg.setSourceEntity(170U);
    msg.setDestination(38064U);
    msg.setDestinationEntity(124U);
    msg.op = 129U;
    msg.snapshot.assign("YGPUZGSINKVHEJJXVEMJSTLRKNCSLIZXLWDNULDUTKAJLKJNEOVHUYBTBOFIRMLPVJGAROETOCFOHFIFDEQLGCKCXUNPBWAQSRDECSIOGHYITUOQSFWBMJZWQRRYVNDTIAHCQSPVERPXTXTPKKNRZUPGAYXNQBVBKSNCAFYGOZEGEHODJPMGUQTULJBJHY");
    IMC::RemoteActions tmp_msg_0;
    tmp_msg_0.actions.assign("FTPBDCWRRASSXZWGSGTCGZVQWQVBMHEETSHMFVYAYVAIVKCAPNOQSBKKXRAQJNFPDUJLLDOZYMXJJIPLENTELGVOEDHLEMFKBUUPEFEYJCQQJJLBIOWZXTJRMKWFXP");
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
    msg.setTimeStamp(0.7006145450876687);
    msg.setSource(24600U);
    msg.setSourceEntity(80U);
    msg.setDestination(37803U);
    msg.setDestinationEntity(152U);
    msg.op = 182U;
    msg.snapshot.assign("LMALVEDEHMMVZXFVMCJDMKQFQBDILDERKGMAAUECVQLYKYNAJYQIERASAWEKWHPPKZXUYGATBOTCXSJUBLKZYCHUYKYT");
    IMC::DissolvedOxygen tmp_msg_0;
    tmp_msg_0.value = 0.7233956503457457;
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
    msg.setTimeStamp(0.8621295943561023);
    msg.setSource(33687U);
    msg.setSourceEntity(121U);
    msg.setDestination(30225U);
    msg.setDestinationEntity(133U);
    msg.op = 150U;
    msg.snapshot.assign("ZOJPGAAYGLHIVVZWOMQOBWSWWHTBSSJNTLLTMFWMHXCPWTPPXBYNJPUQDVMRGGIWKVYTQEXSHUSEFTTFXTQULRMAYYURQEJVACJRFVHGZZRKASAPQOHXKLEULRCUQSAWBNKCIRFKOCCJEMRXGLIUHQAV");
    IMC::LblConfig tmp_msg_0;
    tmp_msg_0.op = 134U;
    IMC::LblBeacon tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.beacon.assign("HBTYQCUWGOHWAK");
    tmp_tmp_msg_0_0.lat = 0.9946325803339365;
    tmp_tmp_msg_0_0.lon = 0.2702997342066371;
    tmp_tmp_msg_0_0.depth = 0.29831453090896953;
    tmp_tmp_msg_0_0.query_channel = 34U;
    tmp_tmp_msg_0_0.reply_channel = 49U;
    tmp_tmp_msg_0_0.transponder_delay = 229U;
    tmp_msg_0.beacons.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.5976323854053618);
    msg.setSource(25744U);
    msg.setSourceEntity(68U);
    msg.setDestination(38687U);
    msg.setDestinationEntity(227U);
    msg.op = 25U;
    msg.name.assign("IKHTFSDGKQGRBVBPRDNZWYALNIJT");

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
    msg.setTimeStamp(0.586460701618063);
    msg.setSource(79U);
    msg.setSourceEntity(215U);
    msg.setDestination(41854U);
    msg.setDestinationEntity(28U);
    msg.op = 14U;
    msg.name.assign("KMYCHKWAXBNSGQCCSQBLIRBFKTRDPMRZGYDNWGYVZYUOEWWMCCHFABLDFWWOKVAZDTYJVNOIVPWMFYPZZSKINLQUAGJPLHAIUG");

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
    msg.setTimeStamp(0.41633603003884967);
    msg.setSource(40660U);
    msg.setSourceEntity(0U);
    msg.setDestination(61961U);
    msg.setDestinationEntity(10U);
    msg.op = 68U;
    msg.name.assign("VPTEDPRFQCNSUCZQYMNIAWGDOVYZWOREXLMLQMYFLDFLNLDFDQQKGFVPEOJBAMLVAROGKBEHGGMNYJAVCDFHGZMKJUAENAXUXXRI");

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
    msg.setTimeStamp(0.13543985221943855);
    msg.setSource(35590U);
    msg.setSourceEntity(184U);
    msg.setDestination(46733U);
    msg.setDestinationEntity(169U);
    msg.type = 160U;
    msg.htime = 0.24665333366477404;
    msg.context.assign("VEEUTGKVVMCZKPMRFUUKJESVSBQWRLWMNOYXMBATTVQCAZTPIXWQ");
    msg.text.assign("MNWCVAQCRNOGENPOOUYYFULLPCDPSEZVEJSQQXVYCARZGVCGKZWEGMTYLDTZYOXRXJJMEOXFKLLUXNBUTDDQYXBEZJWALJJAVEFKSHRKDJTUBTUKOVEZDTOGGRKVLDOHXFWPHCIANAKGWXIZBVFFTFZBSSIBGALBYIWWQIJNQQRIQIHSPVOQHIVBNGSTHUAUMWSUYPFUMAZLTPHRRDIHRNXCO");

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
    msg.setTimeStamp(0.1849617939036302);
    msg.setSource(22448U);
    msg.setSourceEntity(69U);
    msg.setDestination(1472U);
    msg.setDestinationEntity(6U);
    msg.type = 190U;
    msg.htime = 0.7389672917931779;
    msg.context.assign("GDXWGMJKQLTMJPERDYMGLZVHVTCJCRZXQAEUIOXXPUFQCNISPJ");
    msg.text.assign("AYRPMTOBBLZMTYZXNWKBYGPQJSPAEGOYIRWKJZCDFHCCSMVIDWNBVJONKQVNHHGBQXMQLSLUHYKFXPVHRSDXFRIGELEAIEEQCOFHNAOXNBRSWYXZELPTGKABWUYGATHJXCJFWUDIRKLWEUDDKYJXKSQUOGQCPODTHFFLPJWMLRITTMKHRVUOZFZMYCWMCSRGDUSJYXQFKLCQPZUEUTBTSBVVIHPDITAXDIRZG");

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
    msg.setTimeStamp(0.9148962234110491);
    msg.setSource(21070U);
    msg.setSourceEntity(88U);
    msg.setDestination(61319U);
    msg.setDestinationEntity(67U);
    msg.type = 14U;
    msg.htime = 0.4196731206311388;
    msg.context.assign("JZVKNITRYPDNNPSKZUFMMDJXALXQHSHDOVFXBD");
    msg.text.assign("FROHJFWGVPIKVKUYPMGXWNAPROGTOYBHTSKQQVMGRZNREGFZSBNDWWQQADSYJDGHYQZSHAQLYRAMDOXTZJBMCLERJNPEBJIFLPSJKDMMDOFBPEOHCVKIKCOLGSTQIIEUCNVNNBEWMJYIWJUBCLXCHJHIYDWAKE");

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
    msg.setTimeStamp(0.3863801787662685);
    msg.setSource(34382U);
    msg.setSourceEntity(192U);
    msg.setDestination(1557U);
    msg.setDestinationEntity(122U);
    msg.command = 69U;
    msg.htime = 0.7613788614467266;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 132U;
    tmp_msg_0.htime = 0.2855730848905095;
    tmp_msg_0.context.assign("YURWRPNUZMKAADCJFXMSDVUJMECYFSKFOMVTKVGZOTYFRPZWCTPGILCOIZG");
    tmp_msg_0.text.assign("JQKTSJXYSUHPXHJXWAPYBELNVNFARPIFVRGLKMRBOSEMRWCDNFJIRTZKOYCOSAOMJHGSXNDBPLUULQHGZDCMAWQPAPZFOARIDBKKEWNSHSTFWINNFQVBUNYUIAQYWZQXJZUPUBRCEDJDQTBXKYLEWNPVOXILXLSPXXTCAAGAUTERSZTEFOPMBKUWGIOIHDNQOGTVCLMHDGCVVEBYZJGZBVCITRWYTLDMSRQMJDOCZKCGLYHQZFJHF");
    msg.msg.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.043737241914575176);
    msg.setSource(48905U);
    msg.setSourceEntity(95U);
    msg.setDestination(12068U);
    msg.setDestinationEntity(2U);
    msg.command = 60U;
    msg.htime = 0.13223295383943123;

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
    msg.setTimeStamp(0.254232702417144);
    msg.setSource(27715U);
    msg.setSourceEntity(210U);
    msg.setDestination(7839U);
    msg.setDestinationEntity(137U);
    msg.command = 114U;
    msg.htime = 0.16591405193752373;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 112U;
    tmp_msg_0.htime = 0.041066149291595244;
    tmp_msg_0.context.assign("VTIVOKGFEZUYDHDGCXBLVRSKPMNDSWBKYGYDICLMHADYSOANHYRQEAZRUOYJCINOXASMXEWVWEQEDETEIYRHMACQIDMQXOJZRGZKSOWKQFPIFPOLTR");
    tmp_msg_0.text.assign("JCRRYVXAKJBTECDGPVRZBVEPDFNSCOHLDMIPHIRPXNAZKSLSVUHGSLIYAQXPZOJCVOMZIJHPWQYKUNQZOSGGFJNZWFIADRKUSNCDNUYKBJMXSVWBPPZLOIOWLPRBEYHJBHMXFOECBTULMZLTZINGRYMEHMKTCKEGJVFXDQTKNXAEITHJYBSAXEVMAGDUNGAWSDYFTWVRMIAWLOQTIKPHNHAXRTFERCBZQULCLXWUSEWF");
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
    msg.setTimeStamp(0.35160434485179015);
    msg.setSource(63093U);
    msg.setSourceEntity(48U);
    msg.setDestination(60688U);
    msg.setDestinationEntity(225U);
    msg.op = 178U;
    msg.file.assign("EAHNLBBRAUODRSKLYYHRIUNAQVEOVWOGZEHCSUWFRMBUVKENCLITGP");

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
    msg.setTimeStamp(0.3657320763486712);
    msg.setSource(28212U);
    msg.setSourceEntity(121U);
    msg.setDestination(60024U);
    msg.setDestinationEntity(44U);
    msg.op = 94U;
    msg.file.assign("VNSXCKECPILBUNAOJGJJWWAYELUWRCHDZPTYMVFXBUULJTANIJMSDZQ");

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
    msg.setTimeStamp(0.007027457154154759);
    msg.setSource(4587U);
    msg.setSourceEntity(146U);
    msg.setDestination(38625U);
    msg.setDestinationEntity(63U);
    msg.op = 244U;
    msg.file.assign("SJXNVHCKZPDHZFIKRBAYGDBVXSJHDDQOCEANWROTZTCBTLMJBULCWEMWIIUWRAMUIGVZPIFSPQHJRJNGZQTXLYSGLWXOKZWGUTNRDHPFEFOLUCYNPMOTXOHVBU");

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
    msg.setTimeStamp(0.5339785816295376);
    msg.setSource(51360U);
    msg.setSourceEntity(167U);
    msg.setDestination(34797U);
    msg.setDestinationEntity(20U);
    msg.op = 83U;
    msg.clock = 0.9847862339744182;
    msg.tz = -36;

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
    msg.setTimeStamp(0.752183751903516);
    msg.setSource(8314U);
    msg.setSourceEntity(206U);
    msg.setDestination(54939U);
    msg.setDestinationEntity(42U);
    msg.op = 131U;
    msg.clock = 0.38727104232772935;
    msg.tz = 16;

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
    msg.setTimeStamp(0.6161498762369617);
    msg.setSource(17929U);
    msg.setSourceEntity(122U);
    msg.setDestination(61988U);
    msg.setDestinationEntity(29U);
    msg.op = 225U;
    msg.clock = 0.5799390254120839;
    msg.tz = 67;

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
    msg.setTimeStamp(0.8330320175438505);
    msg.setSource(29457U);
    msg.setSourceEntity(83U);
    msg.setDestination(48628U);
    msg.setDestinationEntity(63U);
    msg.conductivity = 0.770058466986418;
    msg.temperature = 0.5095943940179569;
    msg.depth = 0.7282038159546318;

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
    msg.setTimeStamp(0.668803974767494);
    msg.setSource(53355U);
    msg.setSourceEntity(39U);
    msg.setDestination(835U);
    msg.setDestinationEntity(218U);
    msg.conductivity = 0.33691607531464784;
    msg.temperature = 0.9960494891044454;
    msg.depth = 0.08984221680452287;

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
    msg.setTimeStamp(0.3324278227980262);
    msg.setSource(20011U);
    msg.setSourceEntity(63U);
    msg.setDestination(63470U);
    msg.setDestinationEntity(93U);
    msg.conductivity = 0.0013384956138559057;
    msg.temperature = 0.21841777961452857;
    msg.depth = 0.7685633061636882;

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
    msg.setTimeStamp(0.7668067850300148);
    msg.setSource(11214U);
    msg.setSourceEntity(152U);
    msg.setDestination(12987U);
    msg.setDestinationEntity(239U);
    msg.altitude = 0.23200508083771565;
    msg.roll = 17828U;
    msg.pitch = 30252U;
    msg.yaw = 14753U;
    msg.speed = -14445;

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
    msg.setTimeStamp(0.9986309238493151);
    msg.setSource(44200U);
    msg.setSourceEntity(183U);
    msg.setDestination(8844U);
    msg.setDestinationEntity(92U);
    msg.altitude = 0.3493300107737708;
    msg.roll = 21849U;
    msg.pitch = 60848U;
    msg.yaw = 55281U;
    msg.speed = -25460;

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
    msg.setTimeStamp(0.554589978193444);
    msg.setSource(60174U);
    msg.setSourceEntity(19U);
    msg.setDestination(39682U);
    msg.setDestinationEntity(123U);
    msg.altitude = 0.08551797306173714;
    msg.roll = 46002U;
    msg.pitch = 48734U;
    msg.yaw = 18826U;
    msg.speed = 11082;

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
    msg.setTimeStamp(0.9040673688056113);
    msg.setSource(3319U);
    msg.setSourceEntity(162U);
    msg.setDestination(33395U);
    msg.setDestinationEntity(3U);
    msg.altitude = 0.42020751346239815;
    msg.width = 0.9365962719128076;
    msg.length = 0.19527871582732415;
    msg.bearing = 0.273670713486697;
    msg.pxl = -23500;
    msg.encoding = 219U;
    const signed char tmp_msg_0[] = {5, -117, 53, -36, 110, 66, 47, -2, 67, 64, -1, 105, 21, -9, 20, 0, 80, 95, 32, -28, 104, -126, -121, -30, 30, 53, -38, 64, 75, -4, -120, -89, 93, -84, -10, 83, -30, -104, 1, -94, 99, 34, 71, -39, 80, 7, 55, 95, -94, -120, 48, 37, 96, -101};
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
    msg.setTimeStamp(0.6682609792804258);
    msg.setSource(26092U);
    msg.setSourceEntity(246U);
    msg.setDestination(39516U);
    msg.setDestinationEntity(24U);
    msg.altitude = 0.773341978230121;
    msg.width = 0.2477601942823474;
    msg.length = 0.45502424443874845;
    msg.bearing = 0.18986215018214714;
    msg.pxl = 15700;
    msg.encoding = 186U;
    const signed char tmp_msg_0[] = {9, 104, 42, 124, 83, -11, -28, -33, -66, -33, 118, -15, -21, 72, -32, 57, -46, -36, -114, 25, -127, 124, -102, -10, -35, 5, -50, 72, -105, -47, -4, -50, 38, -20, -97, 53, -57, 55, -96, -81, -94, 72, -26, -25, 6, 73, 105, -78, -4, 15, -118, 13, 58, -43, -3, -122, -66, 23, 62, 74, -69, 121, -1, -94, 65, -25, 22, 77, 41, -27, 32, -128, 62, -85, -47, 116, -37, -6, 43, 87, 32, -18, -15, 97, 52, 112, -47, 108, 63, -8, -27, 32, 69, -79, -101, -72, 43, 111, -80, 49, -58};
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
    msg.setTimeStamp(0.041740627996049495);
    msg.setSource(53636U);
    msg.setSourceEntity(249U);
    msg.setDestination(51150U);
    msg.setDestinationEntity(231U);
    msg.altitude = 0.8579626170876758;
    msg.width = 0.821416149242485;
    msg.length = 0.5676674291399093;
    msg.bearing = 0.27909164761691474;
    msg.pxl = 8565;
    msg.encoding = 66U;
    const signed char tmp_msg_0[] = {-18, -89, -102, -35, 8, -45, -93, 122, -52, 12, -81, -76, 31, 44, 7, 102, -76, 64, -47, -103, 93, 59, -6, -8, -108, -86, 100, -102, 20, 43, -62, 34, 28, -56, 33, -40, 14, 45, 43, -114, 16, -25, 54, -8, -40, 120, 5, -62, 31, 71, -50, -72, 81, -111, 86, -24, -69, 95, 112, -46, -68, 58, -55, 29, 10, 113, 66, 92, -3, -5, 96, 105, 37, -43, -109, 56, 4, 85, 8, -122, 15, -78, 123, 53, -10, -82, -96, 0, 42, 40, 95, -4, -45, -14, 38, -119, 3, -117, 77, 85, -85, 16, -22, 88, -122, -70, -15, 75, -106, 115, -85, -3, 22, 10, 61, 122, 24, 4, -128, -6, -110, -46, -22, 113, -48, 13, 94, -8, -106, 21, 58, -121, 104, -99, -39, -65, 58, 26, -100, -99, -16, 123, 124, 3};
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
    msg.setTimeStamp(0.5707800873597025);
    msg.setSource(5454U);
    msg.setSourceEntity(24U);
    msg.setDestination(29881U);
    msg.setDestinationEntity(54U);
    msg.text.assign("YEMDPZBAXOPHCXFAEUMXEJXRALNJGTDRKIUEBVZLBMSBMORVHAGIKCNUVIYPMLJTELXQVKWHEDFAGWNVARRVQESDWKQEQALUTFUSEDLDCQWTJJVNUWPGGMFFNVINNCHHQQHZYXEYJPCZ");
    msg.type = 106U;

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
    msg.setTimeStamp(0.5140042512989722);
    msg.setSource(49476U);
    msg.setSourceEntity(133U);
    msg.setDestination(65258U);
    msg.setDestinationEntity(139U);
    msg.text.assign("SKKTFLKBUDGQLBOGIXZDSBRLJHZVNUVXXIRFTIDWINQMOERNJLRFEXUELJUIICOCQKWYKTNXARBVSJVTASFMOYNYXYPSKAGRVOLWTLQPDSJFZQBOQQIVWLSHHNE");
    msg.type = 173U;

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
    msg.setTimeStamp(0.6430387186933348);
    msg.setSource(18728U);
    msg.setSourceEntity(45U);
    msg.setDestination(1289U);
    msg.setDestinationEntity(142U);
    msg.text.assign("GFYHRDWBPJNWNWVABLWNGTETOBJTNUUPSGLARVZFZHSMUWCTHFKNUFBSTXDXFNLKBQHTBCXMUQVPRYEXXPKLOIZJOYXCIOWASIGXCRLETYIKXZCOVEFXRBOJGVIFFRRIPSLYJOYDVAUVQMN");
    msg.type = 52U;

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
    msg.setTimeStamp(0.15717326309585267);
    msg.setSource(2815U);
    msg.setSourceEntity(26U);
    msg.setDestination(60765U);
    msg.setDestinationEntity(122U);
    msg.parameter = 134U;
    msg.numsamples = 17U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 44187U;
    tmp_msg_0.avg = 0.4192069466238294;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.1984647643119205;
    msg.lon = 0.4509696706584079;

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
    msg.setTimeStamp(0.3135950712966399);
    msg.setSource(18814U);
    msg.setSourceEntity(12U);
    msg.setDestination(40558U);
    msg.setDestinationEntity(78U);
    msg.parameter = 29U;
    msg.numsamples = 143U;
    msg.lat = 0.867512457736224;
    msg.lon = 0.21367011440821104;

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
    msg.setTimeStamp(0.7658254844954704);
    msg.setSource(12449U);
    msg.setSourceEntity(59U);
    msg.setDestination(27407U);
    msg.setDestinationEntity(242U);
    msg.parameter = 40U;
    msg.numsamples = 138U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 12941U;
    tmp_msg_0.avg = 0.7175030426070544;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.9298239428066528;
    msg.lon = 0.6618618282769863;

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
    msg.setTimeStamp(0.4387139233265528);
    msg.setSource(48200U);
    msg.setSourceEntity(34U);
    msg.setDestination(14104U);
    msg.setDestinationEntity(166U);
    msg.depth = 58351U;
    msg.avg = 0.5234924827648076;

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
    msg.setTimeStamp(0.7561422192772737);
    msg.setSource(1090U);
    msg.setSourceEntity(237U);
    msg.setDestination(12679U);
    msg.setDestinationEntity(227U);
    msg.depth = 31093U;
    msg.avg = 0.5082968907261715;

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
    msg.setTimeStamp(0.17346646016645217);
    msg.setSource(63471U);
    msg.setSourceEntity(129U);
    msg.setDestination(50903U);
    msg.setDestinationEntity(232U);
    msg.depth = 22016U;
    msg.avg = 0.05833477753407312;

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
    msg.setTimeStamp(0.8964423840616558);
    msg.setSource(46345U);
    msg.setSourceEntity(60U);
    msg.setDestination(59251U);
    msg.setDestinationEntity(75U);

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
    msg.setTimeStamp(0.9888809046722417);
    msg.setSource(30413U);
    msg.setSourceEntity(82U);
    msg.setDestination(12130U);
    msg.setDestinationEntity(43U);

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
    msg.setTimeStamp(0.41551369956589224);
    msg.setSource(57651U);
    msg.setSourceEntity(198U);
    msg.setDestination(48037U);
    msg.setDestinationEntity(136U);

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
    msg.setTimeStamp(0.07809717823203821);
    msg.setSource(63746U);
    msg.setSourceEntity(148U);
    msg.setDestination(10431U);
    msg.setDestinationEntity(185U);
    msg.sys_name.assign("HBARHQUYBIGOUBZXVJCFVXBTMJGURRNVYXSFDSZMHRCECYOXIUAWFLAEFJIZGKEYMPWLTIINKGDSXFADPOOKOEOQZRHXDOUNTYJUFWXCLKMKTEIXCNDIPMLWTWAWGXDVPPSBECKDWGYUASHYONONVUNDLQQRLWBEGBHMVRPTGXELJFFEB");
    msg.sys_type = 114U;
    msg.owner = 23179U;
    msg.lat = 0.5855778085975408;
    msg.lon = 0.9636720514787424;
    msg.height = 0.20286742056188523;
    msg.services.assign("REDGRLHSFWPOZDDVZSIUVKOQCUJHEKAULMWRVKWTRXHWSPUKQKDDZYVSNLNHXYUKCIIAIQNOVCEJXAZZXGVJBOBLGJTOMSCTNXUYRPQVFORMXDRYIPTGJMHKVNMYFVFPBTGZQHGBWEXPK");

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
    msg.setTimeStamp(0.8201666372811832);
    msg.setSource(18100U);
    msg.setSourceEntity(118U);
    msg.setDestination(48936U);
    msg.setDestinationEntity(70U);
    msg.sys_name.assign("NVMZYPZTEQCCIPUVUEMSEDQYVZZVXOEXTANCXZEDWYLXMPRKZBOTIQSDLDNKXRVHDDLRQCKSNUAMWLSFHWAARWNSAIOGXBWTJQHGJLOSTLMQCTGHDXCBVNEUBWCYZAHAWCWUHGFPVLHSPQTJTYLPFXFRVFABQPJNBY");
    msg.sys_type = 83U;
    msg.owner = 26757U;
    msg.lat = 0.41091356465496076;
    msg.lon = 0.3117231079892515;
    msg.height = 0.5170772187885289;
    msg.services.assign("ALHHVBIIAPIAFWVHRSXPYSUOPVGVCOJMGHYCRVFDMVQBOSRDLMIZEFB");

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
    msg.setTimeStamp(0.13369368182547736);
    msg.setSource(36737U);
    msg.setSourceEntity(167U);
    msg.setDestination(39523U);
    msg.setDestinationEntity(220U);
    msg.sys_name.assign("GJOEJVQHQNBVSKVWNIRGJKBYDLEJHJBXHUSKDNSZQZUZCYTAZTVEMHAKITNSLJZJCGMFJXHILWRYRWUAUKQSVDGFSAHRGEWBLPECWWFPCOHMYCDAOSFOIQJ");
    msg.sys_type = 163U;
    msg.owner = 60276U;
    msg.lat = 0.9858638983597701;
    msg.lon = 0.7756831720714554;
    msg.height = 0.3193301327406973;
    msg.services.assign("GYNPGFLKUOFHGISUFCJEWZWTIDHLPNBDIHLPRPBAFEKCIFGNHIIAOGYJZUHDEBXIMOYVSCNSFCJHUCSBVDEYWPQWYXLKQDRLOSJKWTPBMBUFKZFZWSIGEXENXQSVWKVZXQKEPYRNIGGHVOMVUJRJCYUZAJEHRLQIWDLONBRXTNAWRJTDYGBNLAR");

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
    msg.setTimeStamp(0.41105711023477487);
    msg.setSource(43252U);
    msg.setSourceEntity(171U);
    msg.setDestination(680U);
    msg.setDestinationEntity(229U);
    msg.service.assign("MTXFUPZZKAYCYYGNXVVTADBFHEOVQQNGPMLMEUSLTSIDGUDKHEYCGKRRWCLVLLWSYBWBIHBWAPDIVFCNMHODOEOPCVJTTZNFPNYXKGBGSRXJIHOXALLFHUGUJNPQMJEAWJHFQDPSEKXBVKNIWMROQJDRGKGAENYVZLTZUAUZJIYMRZCCZKEOCDUFTNJUIQSTSSZWBPLIOXHWIEDTWNRRMBEKXWYHUPFO");
    msg.service_type = 58U;

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
    msg.setTimeStamp(0.620906948521851);
    msg.setSource(57550U);
    msg.setSourceEntity(89U);
    msg.setDestination(25749U);
    msg.setDestinationEntity(74U);
    msg.service.assign("JANECDFAELDUZQKXGNAQNBZRZFVOBPVWJEBZWITXGHUPZRGSKHGONYLCRFMBRWVBCWQGAVMZOGUKJHIIIRQWOHMLCCBPEHRNBY");
    msg.service_type = 142U;

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
    msg.setTimeStamp(0.3190584194787509);
    msg.setSource(52641U);
    msg.setSourceEntity(54U);
    msg.setDestination(10223U);
    msg.setDestinationEntity(153U);
    msg.service.assign("FAOWLNXKNAZYWFLCYGZMVBBOYLHAEVTZUXQBDKWBUHXHQVZFFWGETPRBCRZFOKSATTRYKVMPNPDDONQPIWGDFYPKDCXNKIRTDUOEIRJQCFTPYYCJKMCEUSPJGVHIVKEAYNUIGBPYSXLSSMJQJGIRLXVJRUILILZXICNFDIOXABVVZHULEDBMNWJAWNJAGMMTFDOVOYWAZSHQHENCKPSRTJEUWQGSEQTOJFL");
    msg.service_type = 114U;

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
    msg.setTimeStamp(0.10433013926663304);
    msg.setSource(59964U);
    msg.setSourceEntity(23U);
    msg.setDestination(24696U);
    msg.setDestinationEntity(79U);
    msg.value = 0.56454579360327;

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
    msg.setTimeStamp(0.47648564218496026);
    msg.setSource(58772U);
    msg.setSourceEntity(73U);
    msg.setDestination(46636U);
    msg.setDestinationEntity(254U);
    msg.value = 0.9371876128807427;

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
    msg.setTimeStamp(0.15299049499149198);
    msg.setSource(8753U);
    msg.setSourceEntity(248U);
    msg.setDestination(56297U);
    msg.setDestinationEntity(165U);
    msg.value = 0.6498239654046847;

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
    msg.setTimeStamp(0.10759110303122477);
    msg.setSource(56447U);
    msg.setSourceEntity(12U);
    msg.setDestination(44813U);
    msg.setDestinationEntity(144U);
    msg.value = 0.7774323623889624;

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
    msg.setTimeStamp(0.1887887788760182);
    msg.setSource(46002U);
    msg.setSourceEntity(57U);
    msg.setDestination(60869U);
    msg.setDestinationEntity(183U);
    msg.value = 0.016678473274162386;

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
    msg.setTimeStamp(0.48478533557875503);
    msg.setSource(61480U);
    msg.setSourceEntity(238U);
    msg.setDestination(60665U);
    msg.setDestinationEntity(4U);
    msg.value = 0.9779960320329311;

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
    msg.setTimeStamp(0.9497122170363721);
    msg.setSource(57370U);
    msg.setSourceEntity(80U);
    msg.setDestination(7317U);
    msg.setDestinationEntity(214U);
    msg.value = 0.3463525358140862;

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
    msg.setTimeStamp(0.008844649898320456);
    msg.setSource(55198U);
    msg.setSourceEntity(107U);
    msg.setDestination(4775U);
    msg.setDestinationEntity(185U);
    msg.value = 0.9200678891819098;

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
    msg.setTimeStamp(0.035980813146679);
    msg.setSource(18043U);
    msg.setSourceEntity(67U);
    msg.setDestination(40101U);
    msg.setDestinationEntity(202U);
    msg.value = 0.6753945878688679;

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
    msg.setTimeStamp(0.9925988107989764);
    msg.setSource(49732U);
    msg.setSourceEntity(252U);
    msg.setDestination(3112U);
    msg.setDestinationEntity(189U);
    msg.number.assign("LEKRROICNFYVLEFJZEASJZBCB");
    msg.timeout = 22916U;
    msg.contents.assign("PXBDREOJIGBQAYWQGWJXNCYWRCUPXAYCYGLPEYBUUOFVHBUQVJTFJESLUYWZJFZXFZGRZWQTQSDAGSYHQGMEOOQDOMUNSNBBKMZRUEKLALTXIMVKKGCKCXVFKLEHVHFTJHBQNCIMLFISDTHPOHATAUDSCXDTWGNQXJSNARVLKOGZNRYWHXPDUWKZNCARENIKAFMBXMMERPLLRROPMIBYSDPLNKUVVECP");

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
    msg.setTimeStamp(0.04734274657673243);
    msg.setSource(23261U);
    msg.setSourceEntity(15U);
    msg.setDestination(3900U);
    msg.setDestinationEntity(62U);
    msg.number.assign("EQNSHFYQRHGKZEAOBRKMGWGRYYXUXXWSLBTWQROIQTCAXNMXNJIHGTYIBRMTHBZUGVULUVDEOBZJHMJFKTDLFOPVBQQTNJJQHAKKDXFYNMFITK");
    msg.timeout = 43795U;
    msg.contents.assign("XCBFRDHYEDJNQUAQTRBGUKENSPMTLQMGEIWELWDOCJYKENCBVKOWLZFEZXMYMKHRVLBGZBHTUBHZWZBQQAVQMGRYMGYAXJANZJOSVWXFTBUWZOVQCUJWDDHXPKICOQXKXGEHGESAKSNTJORPGDPTCMVHSIVI");

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
    msg.setTimeStamp(0.18342574873001039);
    msg.setSource(33538U);
    msg.setSourceEntity(136U);
    msg.setDestination(28396U);
    msg.setDestinationEntity(183U);
    msg.number.assign("PODESMHHKDILJJTHSHT");
    msg.timeout = 44644U;
    msg.contents.assign("CAFCELQVWUBDBGOCYREKXAHNSYBVZEWIZVJULDUMNCXALFWRPAJMNHBYKTDSXJFIWSUHVQJTGXPKPFFORSHPKUGMLAEFSBTNVRAZJIYEQGWXODOCWMNJEVJDYMAQZYSZZQIOZEWKJDMIWPDDTUVLSRSYYV");

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
    msg.setTimeStamp(0.9241106615184138);
    msg.setSource(28940U);
    msg.setSourceEntity(220U);
    msg.setDestination(34269U);
    msg.setDestinationEntity(184U);
    msg.seq = 232278819U;
    msg.destination.assign("WZVDBBHMGDHGXYOJXIIPRNDLSKOURMHYKAAIYTZKFKJFYXFFQTASYHPRFIXFVIPVQTGETEZJTWOKNJMJSOIGKIMEQVOBZULSNWNUQLDB");
    msg.timeout = 38274U;
    const signed char tmp_msg_0[] = {-123, 85, -124, 82, -51, 48, -7, -101, -91, -116, 53, 93, 94, 78, 107, -13, 0, 68, 57, -108, -25, 61, 15, 39, -43, 59, -45, 105, -107, 4, -72, -74, -119, 42, 34, -26, 14, -87, -96, 67, 118, -61, 111, -34, -3, -82, -74, 28, -80, 62, -69, -5, 67, 122, -118, -68, -49, -112, -56, -16, 60, 42, -94, 66, -99, -8, 101, -25, -112, -114, -22, -86, 19, -105, -114, 78, 72, -15, 66, -35, -90, 9, -48, 71, 33, -102, -36, 38, 6, -45, 47, -22, 48, -115, -13, -76, -68, 92, -16, -9};
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
    msg.setTimeStamp(0.5573914616184598);
    msg.setSource(18784U);
    msg.setSourceEntity(196U);
    msg.setDestination(47138U);
    msg.setDestinationEntity(40U);
    msg.seq = 6096912U;
    msg.destination.assign("OYGXWMSLPSDAHZEYSPDXUJYGNLLQTJKDNFUGGQYYQMMRNCZLXKBXQBZOKKVLKDAQSROQ");
    msg.timeout = 13941U;
    const signed char tmp_msg_0[] = {54, 102, -50, 30, -11, 59, 6, 64, -17, 54, 98, 8, 125, -48, -117, 75, -126, 20, -76, 5, 102, -41, -2, 65, -127, 11, 126, -90, 97, -116, 62};
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
    msg.setTimeStamp(0.6722414791824476);
    msg.setSource(1880U);
    msg.setSourceEntity(25U);
    msg.setDestination(24635U);
    msg.setDestinationEntity(22U);
    msg.seq = 268127541U;
    msg.destination.assign("REQHSHVHNQYMWFFEQYXXYPZCFEEGXNGNKZHMRCNVVUSBHTKBVDSJSASTBPJJAUMVILYOAMLNTKXOLFZPZYFGUAEODWONTUZDJXFTIOGIKRCOGBVUXYFABWEVCIKTGJYKDQTDAZCAIIKFMSHPXQQBFVXTKDMLGJQIWHUJZDNSRYIYJUCKOPNWHNTELLULQMRYJDPRWNSIZPDRQWIRCFMO");
    msg.timeout = 30116U;
    const signed char tmp_msg_0[] = {-117, -44, -114, -116, 11, 67, -61, 70, 95, -46, -12, -81, 29, 97, -80, -49, -2, 125, 33, -99, -48, 87, 102, 56};
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
    msg.setTimeStamp(0.17975552414156393);
    msg.setSource(25954U);
    msg.setSourceEntity(83U);
    msg.setDestination(24606U);
    msg.setDestinationEntity(72U);
    msg.source.assign("EYDVVVTVURXDPECQVCTUOCYJIFKBOILHIBLAPUBUWZFIXGWFT");
    const signed char tmp_msg_0[] = {-65, -35, -34, 72, -107, 12, 105, 63, -2, 43, -53, -121, -74, -64, 12, -86, -121, -74, -20, -33, -49, 119, -81, 65, -64, -70, -58, 58, 27, -116, -87, -96, -49, -79, -100, 83, -78, 123, 30, -103, -36, -12, 2};
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
    msg.setTimeStamp(0.3316640901435176);
    msg.setSource(15576U);
    msg.setSourceEntity(185U);
    msg.setDestination(53140U);
    msg.setDestinationEntity(225U);
    msg.source.assign("NENGXBXDPGRIMWEEHNLTOCXOIZXYWEFECQAHOASWPQBUGIWTYTLDRRQBWKSHMKOFTEBGMNRAPQUBTMELJUDFQUXSASKXUFDVGZXVQCJTBKZVFSUJDZIVPLHNGJBEIGZDJTXQPDMMSGAHCBULVKJSAKQVHCPSNRLCFGDWMHRUZZYLOESYAHJQNJW");
    const signed char tmp_msg_0[] = {61, 80, -78, 91, 100, 111, 0, 19, 105, -95, 25, 0, 36, 62, -63, 36, 21, -62, 122, 106, 91, 37, -73, 107, 17, -106, -16, -61, -123, 125, -68, 0, 21, 97, -96, -82, 3, -27, -38, 0, 112, -112, -116, 38, -95, -94, 85, 83, -125, -4, -32, 5, 24, 115, -55, 61, 18, 53, 13, 7, -5, -11, 68, 125, 93, 31, 35, -120, -21, -81, 65, 57, 102, 104, 80, 97, -117, 78, -76, -66, 18, -39, 125, 118, -91, 29, -99, 102, -99, 26, 48, 54, 33, 46, 20, 111, 70, 122, 120, 55, 126, -16, -85, 79, 94, -126, -37, 80, -30, 52, -52, -2, 34, -2, -76, -72, -57, -77, 101, -122, -122, -18, -75, 114, 34, -70, -115, -63, -2, 33, 73, 107, -33, -20, 94, -66, -86, -32, -125, -122, -7, -55, 14, 31, -24, -85, 38, 17, 72, 109, 72, 122, 114, -34, -31, -93, 11, 81, -74, 119, 72, 66, -60, -115, 12, 90, 79, -45, -84, 113, -54, 45, 21, -5, -90, 18, -30, 10, 23, -124, 63, 70, -89, 87, 100, -77, 24, 83, -111, 106, 116, 37, -100, -115, -13, 67};
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
    msg.setTimeStamp(0.38220627184954836);
    msg.setSource(19291U);
    msg.setSourceEntity(252U);
    msg.setDestination(59699U);
    msg.setDestinationEntity(100U);
    msg.source.assign("AVHPJATIPYQABEEHLENLHMYSBYQRDGFDTRVFIXSGBFGHDSWPVMUBLPBEXZAIDPQSLMJSGXVXWJPAJFAGRCVBXYOFZVNKOCKLZFZNKMFGNYECUROFEDUBEWWOMCLUWHPHQJTJWICUHRMTYKONCDXNHJAUBVXXTNGMCSUARCXGMMWBGIESFYOIZBTQTUDKNANDSKZYZWFALLEIGJQHHPCDUKVJVKPWQKCYTSZN");
    const signed char tmp_msg_0[] = {-4, 80, -66, 35, -67, 117, -37, -8, 62, 120, -88, -99, 27, -97, 69, -1, 57, 73, -38, 126, -42, 28, -59, -4, -28, 18, 63, -39, -70, 55, 117, -27, 27, -104, 89, -50, -45, -121, 79, 63, -37, -22, 51, -116, 46, 49, -117, -38, -8, -63, -82, 72, -33, 31, -34, 46};
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
    msg.setTimeStamp(0.22904788435108814);
    msg.setSource(5781U);
    msg.setSourceEntity(75U);
    msg.setDestination(49506U);
    msg.setDestinationEntity(158U);
    msg.seq = 3008812512U;
    msg.state = 97U;
    msg.error.assign("QKTVLLYSOSVSPIKRYRZMNIRHCFILUXCUWFMIRVYQDFFALUDKGTXGWCXHFWKRKBBSQWGOGNXKOQPXUJFXKQEAFRCKCWEATGGGREKEXODBPTMDJVNSYCJPULKHGXUPRDSIHAUFBMBQZWTSENWGZYOEJLXMTVROPFQQVIBOZNWHYSNPDEAJFMJSVLCQJOWGIVLAWCBJPMOAZAXOZDMTIUIYZHPDEUYHPBHZJLTYAMZHDNBANVE");

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
    msg.setTimeStamp(0.052069756334127804);
    msg.setSource(62932U);
    msg.setSourceEntity(194U);
    msg.setDestination(50149U);
    msg.setDestinationEntity(10U);
    msg.seq = 2036930931U;
    msg.state = 192U;
    msg.error.assign("BFTVUBMJZBPMRAFHHKLTSVEHKRODLRBUIPXKTSTVMJZWFYHXSYSJBCPTPRGYZVCAVBUUDWXRGNINAWACTJDKDKZVWKUUQSOSNFYIDKQNBYVOGEAOUHELRTVMTOZZMAAJSOSGDPJGIJFZNUMWLRFWNOQRV");

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
    msg.setTimeStamp(0.9528992961977428);
    msg.setSource(53110U);
    msg.setSourceEntity(41U);
    msg.setDestination(20434U);
    msg.setDestinationEntity(218U);
    msg.seq = 2306656445U;
    msg.state = 40U;
    msg.error.assign("CPNQITZYNUI");

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
    msg.setTimeStamp(0.02415470425486066);
    msg.setSource(11512U);
    msg.setSourceEntity(103U);
    msg.setDestination(2074U);
    msg.setDestinationEntity(3U);
    msg.origin.assign("YESVVCNBLWVTLBGZANVAUTDXPZRZXRMHFPSJHWADZXUQOPIYAGEFWLSHVLBOHCXKUCBUDHMTPRKKARTXHJGGEIIEDM");
    msg.text.assign("NMOPASEQRGMZGOYNSRRUQJBJDUIPKYXYZPZYVETKAGWIVJFNPFJXDMJWHDNCICSMIBGRQSXPJATKWJBUKALWRAQMGEQYOICLYSLMYSEMGIITVEJHRHWAEDLPWVXGRDCOLKM");

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
    msg.setTimeStamp(0.44862419450371993);
    msg.setSource(49503U);
    msg.setSourceEntity(31U);
    msg.setDestination(54748U);
    msg.setDestinationEntity(175U);
    msg.origin.assign("WYHBRXCAGTAZEVXJIQMOAMOYRXQGEREHNZWDSBUOXPQNGLPRBHCSDIBEKLCMZUVQLFVXYDFIKMZKGXKBGUHYDNUJFSSHESRMQESUTPZYHADGOWVUAKYNOIGOPPGKPTJHBQTMXWKCCWNBL");
    msg.text.assign("NSIXZWQPSVKZQOODWIDWTFBJHEHFGDOHFIDBMZTIUMOVPNCUFOSKXHRJIHKETFUOMYUNUCEWKE");

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
    msg.setTimeStamp(0.23014033578092719);
    msg.setSource(26781U);
    msg.setSourceEntity(205U);
    msg.setDestination(251U);
    msg.setDestinationEntity(190U);
    msg.origin.assign("DVJSGHXXMTMTFEJBOSFWDWGLIRIZPKCKZOISENBZJUNDZTUWGXHDFVABPLJXVFMMPORTLVIZZNPMCOYLNTQVMSAQNTDXFJIBQIYYJDLWGUSPUWWWYVHSRFCEDQDRHZOGPIFKGGLIPNIYEJUBRLBMSRUHLBALOVQWZUJQCSRIBCFMOFPFXNMJTURSRKEAKQGDQXHKLHYVEMSHACTCZCYXQDOPOKVNEWQKRWTTAACCBHK");
    msg.text.assign("XEQWWJRBVZKKCORTCITGMHQULRXSGWNBFCLTVSBMGEMYQMDUKKHGNNSFIOPOTZPEUOMYBQQXHYVYWIUFBXFAPYXPENFATDBXOZKWJZEQRBYTENADMGPLLPCIPQVCRHJYUGDIGERIGKEWODTQQYZLWHCBXPLR");

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
    msg.setTimeStamp(0.8891995904163318);
    msg.setSource(39024U);
    msg.setSourceEntity(157U);
    msg.setDestination(12766U);
    msg.setDestinationEntity(203U);
    msg.origin.assign("LCPTYNYHOAOTULSWGPD");
    msg.htime = 0.4597855706461975;
    msg.lat = 0.18599348318218878;
    msg.lon = 0.5911786283238165;
    const signed char tmp_msg_0[] = {118, -67, -46, 26, 33, 96, 59, -108, 81, 26, -49, 77, -89, 115, -27, -100, -57, 31, 30, 32, 42, 53, -47, 60, -11, 20, 71, 76, 108, -30, -108, 89, 78, -56, -118, -81, 35, 79, -65, -21, 97, -62, 111, 76, 18, -39, 39, 65, 92, -11, 41, -64, -89, -42, -83, -32, 97, -47, -61, -13, 36, 16, -107, 71, -39, -98, -38, 107, 39, 80, -7, -82, 124, 71, -86};
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
    msg.setTimeStamp(0.7529953644946812);
    msg.setSource(57204U);
    msg.setSourceEntity(122U);
    msg.setDestination(27419U);
    msg.setDestinationEntity(9U);
    msg.origin.assign("SMYIXQYZUGXIVTFHMHLSAIKBHGFEKPEQMECBTPXCEFDRQADOGYKUKYIDZOPSLLT");
    msg.htime = 0.40905227871444316;
    msg.lat = 0.04198669400761246;
    msg.lon = 0.9791559061343694;
    const signed char tmp_msg_0[] = {-126, 117, 54, -26, -10, -87, -61, 40, -38, -60, -128, -33, 106, -120, 78, -3, -40, 7, 105, 39, -74, 60, 119, 25};
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
    msg.setTimeStamp(0.08023375197656724);
    msg.setSource(16578U);
    msg.setSourceEntity(144U);
    msg.setDestination(4872U);
    msg.setDestinationEntity(96U);
    msg.origin.assign("HPPTWDZCXYQWZOTAYVHBKVGYCDMGMKXFINQIPKTAYYZXRIJHTXLHIBAUNUETHIJPWNCGVJCYSGXWKXCSJHIFYBPBUEFIBSYDTZAMMRSTGLXKRFINYVELZKJHNCZHKRUUSLPVEJEGBLXGOOBFPAQOAKEJMWDQEUHAVYMSJWLTPUOINLFRG");
    msg.htime = 0.22323536816153522;
    msg.lat = 0.8914401492087634;
    msg.lon = 0.41349127144899667;
    const signed char tmp_msg_0[] = {50, -53, 77, -42, 118, -50, -75, 80, 101, -85, -62, 89, 9, 39, -103, -109, -28, 111, -45, -25, 9, -67, -16, -28, 42};
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
    msg.setTimeStamp(0.015885419625129682);
    msg.setSource(29692U);
    msg.setSourceEntity(137U);
    msg.setDestination(59911U);
    msg.setDestinationEntity(161U);
    msg.req_id = 42748U;
    msg.ttl = 12752U;
    msg.destination.assign("TQWCNSGUSISBZHWLIAYNVOIUGRHVRDHLSKLBZLKFYO");
    const signed char tmp_msg_0[] = {57, -66, -91, 23, 3, 71, 0, -87, 126, 61, 122, -78, 89, -124, -53, -40, 107, 63, -30, 52, -73, 103, -103, -18, -7, -3, -88, 5, 112, 0, -104, -6, -122, -96, -45, -38, -17, 75, -74, 0, 79, -85, 88, -86, -97, 20, -90, -89, -23, -83, 78, -112, -73, -14, -97, -10, -48, 51, -25, -65, -3, 124, 20, 111, 67, 61, 75, 99, 124, 33, 80, -8, 90, -95, -128, 32, -67, -61, 38, 107, 9, 62, 110, -24, -114, -29, 21, -109, -18, -85, -118, -64, -28, 32, 60, 2, -53};
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
    msg.setTimeStamp(0.9212318185557887);
    msg.setSource(60408U);
    msg.setSourceEntity(207U);
    msg.setDestination(65221U);
    msg.setDestinationEntity(66U);
    msg.req_id = 4947U;
    msg.ttl = 59069U;
    msg.destination.assign("PVTFEDPALXQKGRHYTYEEMEJGHLPJCSWWZTQWSANAHTRROBPIGPIWCXXLDTMZOZYBHAULSAMGQMZGGOQFIOSFLHOJQBEERVNNNUKBJBDXLTCMNVXHSCZTZIUDVRTBZKUOQUGQCYLATZSZFSKYIVYDD");
    const signed char tmp_msg_0[] = {35, -78, 48, -113, 33, -4, 10, -97, 2, 76, -111, 91, -45, 104, 18, -35, 61, 70, -95, -59, 120, -97, 93, -8, 41, 7, 2, -85, -84, -122, -12, -66, -81, 0, -89, -47, 120, -94, 47, -94, -22, 42, -28, -119, 50, -29, -70, 11, -61, 77, -98, 1, 65, 108, 71, 33, -105, 11, -29, -29, -66, 0, -95, 107, 91, 30, -35, 72, -76, 121, -68, -125, -126, 56, -34, -122, -16, -10, -3, -56, -58, 52, -10, 48, -105, 10, -4, -83, -95, -120, 34, 65, 30, -81, 11, 86, -18, 121, -12, -109, -44, 34, -93, -63, 73, -67, -22, -76, -5, -22, 58, -95, 121, 17, 46, 16, 0};
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
    msg.setTimeStamp(0.9040249383218134);
    msg.setSource(19595U);
    msg.setSourceEntity(186U);
    msg.setDestination(62277U);
    msg.setDestinationEntity(212U);
    msg.req_id = 40U;
    msg.ttl = 1656U;
    msg.destination.assign("SPUAGUGFKOLPJWSUWKVNTFSZRFEMAMQRYCPWZZDVEGHHFVVYLNNGHAERIMTDAVEBPSQLYZWFVJJVLJIUZQCMIOTTIXTPIXWCKFKAVWXKNILOPQDEHWQSTFANTESSBYEFXCLISDHCJEGZYBGUHUCOLAUXMXVDJKSNMXIRKNYYUVLTGUCMJDNYKDBTRU");
    const signed char tmp_msg_0[] = {-106, 82, -6, 124, 78, -107, 79, 107, -34, 92, 17, 89, 35, -7, -70, -126, -5, 60, -109, -32, -124, 39, 37, 9, 76, 98, -17, 12, 14, -69, -88, -1, -29, -21, 75, -93, 28, -51, 60, -50, 8, 121, -25, -56, 48, 56, -21, -23, -68, -25, -68, -71, -40, -17, -124, 57, 103, -48, -34, -17, -119, 48, 22, 0, 80, 14, 92, -109, 29, -121, -62, -21, -113, 107, -42, 122, -23, 126, 111, 26, 8, -99, 24, 62, 115, -94, 115, 49, -66, 57, 15, 79, 61, 52, 12, 12, -115, -46, -60, 71, -83, 114, -36, -51, -46, -40, 44, -40, 54, -102, -32, 107, -46, 48, 119, 100, 42, 42, -16, -114, -69, 50, -17, -102, 11, 92, 67, 122, 45, -5, -50, -53, 1, 17, -91, -22, -121, 29, -80, -44, -72, 82, 5, 81, 19, -99, 102, 75, 10, -26, 28, -21, -19, -67, -45, -23, 125, 116, 32, -118, -104, 22, -62, 77, -6, 13, 48, -65, -89, -22, -121, 10, 68, 77, -114, -112, 10, -27, 36, 54, 36, 20, 87, 117, 73, -99, -36, -86, 9};
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
    msg.setTimeStamp(0.5367410325170423);
    msg.setSource(30U);
    msg.setSourceEntity(18U);
    msg.setDestination(33585U);
    msg.setDestinationEntity(141U);
    msg.req_id = 26301U;
    msg.status = 172U;
    msg.text.assign("IFYPSKEFBESUVCFCJTMQZITPQWZNYQNKATXMGUQWTFNUDEBRRPKWUUSQBIC");

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
    msg.setTimeStamp(0.38225749744406223);
    msg.setSource(20978U);
    msg.setSourceEntity(223U);
    msg.setDestination(62443U);
    msg.setDestinationEntity(106U);
    msg.req_id = 53908U;
    msg.status = 120U;
    msg.text.assign("TJEQFXLYAQDJIKEVHAUNUHWKXATUGDUINEPOJIYBVYZGDEQSCXONTGQLBBBMFMRUTXYHRSBISHGBOPMQCJNVWWZOUFZHRQKWEIMCZDZCAVKOAOVBUVTTPDTGNCNLKQZMCENQMAYP");

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
    msg.setTimeStamp(0.5404262759079848);
    msg.setSource(58506U);
    msg.setSourceEntity(119U);
    msg.setDestination(11277U);
    msg.setDestinationEntity(183U);
    msg.req_id = 13546U;
    msg.status = 130U;
    msg.text.assign("PIYCQZDVYTFNFWVIKUKPHHCDDUKETXWWIJMVXHGWJRETOYQBGCLWIXOSFHLXNQQKBZOFAJTMHJVALCQLDHMRDESLOLCCUGMSEXBRXDPYAFEZHMHYKYTIAOWRAKVKPUNZPWFKTBSAYEWJXFSEJXBDTPIBQOEOSOPBUGZDCPOUIPQOBRZVMTRXTURNKQELSZLSAAXCRNQGPQYKMMYIELYFMSBVTJMAJIJFDGHBLFRUGJZGDZW");

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
    msg.setTimeStamp(0.7286008525640465);
    msg.setSource(22560U);
    msg.setSourceEntity(140U);
    msg.setDestination(15704U);
    msg.setDestinationEntity(4U);
    msg.group_name.assign("QCNOAYJSZARLEBYQFYWAIIBKOWULLJESBIRMOWTXYIFNXHDKUDLXXDBMSMVYSWTCLGROTWYOGWZXGMYJVUWAKJBKTNBJDIYFILHRBERTCZSQTPHTLOFUCCFZRVELOZTPPHSRNGTMNVQMAFGPKAFANOTBXIHCSUAVAIVRPLZKOSQVCXWQIGPWBHQPZUPNZSESDKZMHXPUHWVVGDUDVFNJEFEHJKMQJJIZRRGEDF");
    msg.links = 3596465888U;

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
    msg.setTimeStamp(0.9279588733884696);
    msg.setSource(58797U);
    msg.setSourceEntity(14U);
    msg.setDestination(29278U);
    msg.setDestinationEntity(187U);
    msg.group_name.assign("WRBTKRWYVYKJNVZZKXZLNGXTEAOCVWMABGJOLRWMVHPYQXSRXZBIKWJDGNXFLDLBOSDOEIJVSRBNLDIXXIMFETUDNPQTONVSQUDFUPSSJBFHWFETGOVQWIFSHFVSARCYKCRTGAGNYBGPMSHILMPYJCLPWEWOOFJIKQLCIJFTHBEEPZVQKYDZNMNWJPCNAP");
    msg.links = 3414849200U;

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
    msg.setTimeStamp(0.18368228568485623);
    msg.setSource(60230U);
    msg.setSourceEntity(95U);
    msg.setDestination(58489U);
    msg.setDestinationEntity(140U);
    msg.group_name.assign("ZKCXFOHOMPUZHWCCGQSGKXIBWXBVIYRDRFRHTDUUEBGQOMJOXFIMVNRYKFUJP");
    msg.links = 3846925454U;

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
    msg.setTimeStamp(0.5465656973959961);
    msg.setSource(41075U);
    msg.setSourceEntity(217U);
    msg.setDestination(16525U);
    msg.setDestinationEntity(209U);
    msg.groupname.assign("BVSWMJEOUIZQNVAMLHRSHFNDRBDDGYPXBSUZJDCVPKWLPKXKFYFUUVGLAEZCGPSYHPWJKPZMBBXBAQCGRAAKZMHFFXRXGQEHAQCIWEUYPBBERVJXULQOITSGGTLYIAZUFSEITMNPEHWDXAZFTIWQRYBJPFRIRSTLSOHMAQOJCJMANOIZEZTCOFDYDLVVOLNEYKKXOWJDCNVPYGHDRIV");
    msg.action = 170U;
    msg.grouplist.assign("LJHEIDQAAORORCKLCWNGPDQIYPYDXAUWUMYTEXKNXUVFFNVTAISDVYLAUEUUPVLFUDFQAFCFWSECVQSJOXIBSTHOEFZRJBLZWNHCQWDMMBKNLDIJHJHTGMTVPFKBERWSOWTBGGZHPANOZCWXOAHLRKBOJ");

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
    msg.setTimeStamp(0.8079111766773992);
    msg.setSource(33328U);
    msg.setSourceEntity(242U);
    msg.setDestination(15017U);
    msg.setDestinationEntity(66U);
    msg.groupname.assign("GTPAPHNJFLJFRQUFREONRZZBLNDCJGHKXAIKAMQEFWMAYFHXXQYKKFHRQSGBVZXMXVTEVJRDIWIVIMXEOTFCVMGXEYJPPNMBDDLQTMPZUBHMDNICUAFQONIKSECGQOFAPYCUOOVGVYOPWKMILVWUMEUBBTAGTYLLSSXJNCWYDNTABICECFWHDDAYJZUOBCURSVDRSWQPZLZHGTGKBJEDSLYKYSEHCQRITWZIROKPRLUUAXHX");
    msg.action = 95U;
    msg.grouplist.assign("MIXVBMNTEHYSGZCIGGNBJEBYIOHXSXTEUMCTYKKHPKTFJPUEDYCRBDZP");

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
    msg.setTimeStamp(0.5661076335251894);
    msg.setSource(49388U);
    msg.setSourceEntity(238U);
    msg.setDestination(20510U);
    msg.setDestinationEntity(144U);
    msg.groupname.assign("DKRZLVPVGGMTKRTEHGYJPWJXGQNKPFAXDDTDMFIRSMOEQMUZUPRPCZSEEFVHWBDCMGYOEDZWLYEXYOVVMIUKOHICPKYYMUOIUGA");
    msg.action = 19U;
    msg.grouplist.assign("YMLTXGLSGYADTEYRAATHZYXQFWQDECOCVDIMNGZJDYDXBOGCHZYILZAVTMFQWUCCVCLNBSXUKTJMCMXINENIVEJRKNUPRGJPZBHMWSNPQZYVWEORPKAAATWPHVRZUFGTHUGPWHBHCXLWQXQPTSBJKSTARFOOZJLBSDFHWIVPGAXSJJKMNRKVOYTUFONZSCPIIBQQFUWEQUDYGMI");

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
    msg.setTimeStamp(0.7502664492692749);
    msg.setSource(23154U);
    msg.setSourceEntity(172U);
    msg.setDestination(42434U);
    msg.setDestinationEntity(104U);
    msg.value = 0.38714168265651716;
    msg.sys_src = 28228U;

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
    msg.setTimeStamp(0.38943311280668214);
    msg.setSource(8203U);
    msg.setSourceEntity(38U);
    msg.setDestination(62122U);
    msg.setDestinationEntity(149U);
    msg.value = 0.6553790799351406;
    msg.sys_src = 58989U;

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
    msg.setTimeStamp(0.5003526209830228);
    msg.setSource(63714U);
    msg.setSourceEntity(83U);
    msg.setDestination(14101U);
    msg.setDestinationEntity(110U);
    msg.value = 0.9231632554292949;
    msg.sys_src = 16326U;

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
    msg.setTimeStamp(0.9895539332925029);
    msg.setSource(56749U);
    msg.setSourceEntity(74U);
    msg.setDestination(37939U);
    msg.setDestinationEntity(42U);
    msg.value = 0.89523304356441;
    msg.units = 13U;

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
    msg.setTimeStamp(0.43856000587967736);
    msg.setSource(23476U);
    msg.setSourceEntity(163U);
    msg.setDestination(50248U);
    msg.setDestinationEntity(183U);
    msg.value = 0.030247057124290988;
    msg.units = 12U;

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
    msg.setTimeStamp(0.8818539064137264);
    msg.setSource(46055U);
    msg.setSourceEntity(197U);
    msg.setDestination(14950U);
    msg.setDestinationEntity(219U);
    msg.value = 0.776166480894728;
    msg.units = 33U;

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
    msg.setTimeStamp(0.11326158397868469);
    msg.setSource(24221U);
    msg.setSourceEntity(45U);
    msg.setDestination(9824U);
    msg.setDestinationEntity(106U);
    msg.base_lat = 0.23072132083777275;
    msg.base_lon = 0.9095809827948248;
    msg.base_time = 0.24834959055685524;
    IMC::HistoricSample tmp_msg_0;
    tmp_msg_0.sys_id = 38253U;
    tmp_msg_0.priority = 57;
    tmp_msg_0.x = 1;
    tmp_msg_0.y = 19616;
    tmp_msg_0.z = 13182;
    tmp_msg_0.t = 12727;
    IMC::EstimatedStreamVelocity tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.10334331323284807;
    tmp_tmp_msg_0_0.y = 0.8016048520899671;
    tmp_tmp_msg_0_0.z = 0.9578145497060169;
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
    msg.setTimeStamp(0.3358021488301659);
    msg.setSource(1152U);
    msg.setSourceEntity(149U);
    msg.setDestination(62082U);
    msg.setDestinationEntity(99U);
    msg.base_lat = 0.5457889235407232;
    msg.base_lon = 0.3116536958813416;
    msg.base_time = 0.8051016021259408;

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
    msg.setTimeStamp(0.11605363349041664);
    msg.setSource(4945U);
    msg.setSourceEntity(174U);
    msg.setDestination(13360U);
    msg.setDestinationEntity(236U);
    msg.base_lat = 0.7070884592751846;
    msg.base_lon = 0.28966086076463515;
    msg.base_time = 0.9097924521196397;

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
    msg.setTimeStamp(0.8056529433597394);
    msg.setSource(65034U);
    msg.setSourceEntity(88U);
    msg.setDestination(45830U);
    msg.setDestinationEntity(77U);
    msg.base_lat = 0.9628686575429584;
    msg.base_lon = 0.053375359635609465;
    msg.base_time = 0.0932261007909766;
    const signed char tmp_msg_0[] = {27, 20, 104, 36, 30, 37, -23, 78, 28, -87, 107, -114, -65, 17, -28, 89, 76, 67, 10, 64, 67, -122, 80, 73, 125, -6, -117, 98, 47, 103, 82, -107, 76, 126, 30, 63, -54, 60, 53, 69, -94, -33, 115, -117, -89, -122, -39, -20, -68, -3, 119, 61, 17, 125, 73, -16, -44, -39, -120, 114, 123, 19, 71, -84, 54, -75, 47, -42, 35, -62, -17, -2, 81, -79, -128, 87, -106, 22, 123, 38, -90, 105, -123, -18, 101, -51, -55, -74, 109, 16, 33, -9, 120, -33, -56, -71, 81, -7, -103, 0, 84, 91, 47, -42, 63, 10, 24, -82, 88, -119, -98, -59, 86, 91, -124, -29, 13, -9, 15, -36, 113, -108, -121, 85, 3, 34, 9, 70, -79, -119, 30, 52, 116, -68, -4, -123, 51, 29, -66, -97, 110, 122, 55, -29, 33, 32, -33, -71, -66, -50, 41, -15, 47, -121, 60};
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
    msg.setTimeStamp(0.10359663682749232);
    msg.setSource(51392U);
    msg.setSourceEntity(150U);
    msg.setDestination(52525U);
    msg.setDestinationEntity(10U);
    msg.base_lat = 0.7341880693940723;
    msg.base_lon = 0.19032854646646136;
    msg.base_time = 0.6826148813472022;
    const signed char tmp_msg_0[] = {68, 78, 110, -128, -71, 27, -3, 57, 76, -40, -69, -51, -5, -9, -29, 91, 31, 31, 73, 97, -29, -107, 15, -73, 75, -25, 57, 50, -24, 46, 47, -40, -87, 104, -65, -64, 36, -31, 8, -23, -113, 53, 44, 65, -86, 38, -33, 11, 90, 93, -42, -53, 51, -104, 17, 80, 99, 29, 27, 50, 25, -81, -49, -1, 86, -2, -17, 109, 7, -20, 71, -48, -79, 93, 36, -18, -19, -85, 118, -90, 68, -96, -4, -26, -106, -115, 107, 125, 51, 94, 104, -10, 49, 33, -91, -86, -69, 112, -96, -69, 65, -62, -122, 88, -62, 84, 7, 35, 23, -5, 24, -26, 8, 55, -60, 79, -84, -87, 84, 8, -110, -87, 114, 92, 6, -41, -56, 64, 36, 92, 122, -115, 12, 12, -107, -67, -39, -12, 96, 35, -52, -87, -5, -44, -61, -122, -83, 32, 16, 88, 60, 89, 122, -81, -3, 60, 68, 34, 35, 2, -17, 30, -93, -33, -85, -8, -121, -77, -21, 110, 121, 106, -30, -22, 82, 47, -92, 37, -28, 123, 21, 104, -54, 11, -93};
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
    msg.setTimeStamp(0.995739586009185);
    msg.setSource(13627U);
    msg.setSourceEntity(189U);
    msg.setDestination(6289U);
    msg.setDestinationEntity(62U);
    msg.base_lat = 0.3790847823220874;
    msg.base_lon = 0.2316588071382054;
    msg.base_time = 0.8219027283907805;
    const signed char tmp_msg_0[] = {48, -69, 90, -7, 68, 99, 39, -34, -75, 26, 12, 39, 43, 60, -8, -115, -5, 32, -8, 96, -119, 79, 31, 41, -36, -72, 113, -114, 61, 44, 108, 85, 83, -58, 6, -115, 33, -24, 66, 89, 63, 110, -101, -10, 104, 28, -7, 67, -38, 126, 29, 40, -12, 18, 105, -99, -123, 36, -7, -111, -74, -13, 45, -124, -114, 67, 4, 49, 75, -75, -125, 3, -33, -100, 103, 107, 27, 99, 81, 58, -126, 50, -79, 123, 71, 1, 83, -1, 77, 113, -13, 32, -41, 25, 93, 37, -111, -8, 125, -83, 101, 126, -39, -64, -37, -82, -36, -29, 50, 68, 74, 78, 28, -125, 97, 73, 122, 103, 124, -33};
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
    msg.setTimeStamp(0.3158201055045433);
    msg.setSource(17675U);
    msg.setSourceEntity(243U);
    msg.setDestination(28850U);
    msg.setDestinationEntity(236U);
    msg.sys_id = 54586U;
    msg.priority = 37;
    msg.x = 25875;
    msg.y = 1441;
    msg.z = -22705;
    msg.t = -11452;
    IMC::UamRxFrame tmp_msg_0;
    tmp_msg_0.sys_src.assign("SJDUOLRMPEMZBV");
    tmp_msg_0.sys_dst.assign("QQBLOZHXZDDBPEDSVGRUIWNHABOWRNSGDAXVEXTEXSOBGZSCIAJYCMCBAZUTOIQOHIWGIBQCSKTXMGJUDZIKJINEJUMAXCYVKRFKKULJVHDBLFSEKRRFZMWSOOPCBMVPHYXMXBJUTAAFFALSAFEWGYMHFDFWYIMMZWVVKGQOLHPATFYI");
    tmp_msg_0.flags = 176U;
    const signed char tmp_tmp_msg_0_0[] = {83, -71, -32, -22, 18, -71, -8, 2, 83, -117, -79, -40, -34, 3, 102, -80, -99, 38, -35, 34, 54, 110, -14, 11, 46, 47, -104, -102, 64, 81, -48, 45, 60, -59, -97, 45, -97, -101, 63, 50, 80, -11, -21, -123, -27, 76, -73, 101, -92, 32, -118, -20, -106, 94, 105, 14, 24, -29, 25, 46, 99, -73, -55, -102, -66, -93, 27, -12, -29, -106, 12, -92, -17, 58, -105, -87, 45, 18, -36, -64, 31, 126, 7, -46, -60, -17, -29, -95, 37, 17, -65, 52, 58, 96, 29, 122, -81, 5, -125, 117, -107, -128, -119, -66, 67, -118, -32, -24, 47, 113, -6, -51, 50, -62, -62, 8, -108, -126, 69, 9, -31, 80, -96, -73, 17, -100, 16, -80, 51, 62, -105, -103, 63, 32, 90, 103, 124, 88, -125, -87, 2, -100, -23, 16, 107, -5, -122, -78, -104, -45, -70, 106, -81, -110, 37, 17, 116, -9, 62, 111, -54, -79, 99, 83, -28, 86, 2, -20, 63, 87, 101, 78, -6, -99, 68, -8, -25, 84, -26, 66, 15, 52, 66, 87, 123, 99, 99, 15};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.11767206626553317);
    msg.setSource(29331U);
    msg.setSourceEntity(87U);
    msg.setDestination(3399U);
    msg.setDestinationEntity(12U);
    msg.sys_id = 23546U;
    msg.priority = -61;
    msg.x = 7749;
    msg.y = -21093;
    msg.z = 7237;
    msg.t = -15356;
    IMC::GpsFixRejection tmp_msg_0;
    tmp_msg_0.utc_time = 0.5588987886480734;
    tmp_msg_0.reason = 210U;
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
    msg.setTimeStamp(0.844895616588267);
    msg.setSource(31601U);
    msg.setSourceEntity(235U);
    msg.setDestination(53970U);
    msg.setDestinationEntity(64U);
    msg.sys_id = 2748U;
    msg.priority = -97;
    msg.x = 18446;
    msg.y = 30605;
    msg.z = -31051;
    msg.t = 30394;
    IMC::LblConfig tmp_msg_0;
    tmp_msg_0.op = 71U;
    IMC::LblBeacon tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.beacon.assign("EWIKRMWTFQSKGMAFTYUEUIIFINSPHZVAGHQATTLGJAUCTNNJRFJOLJOAXCAVUKZKVWLZEUJYDKASXZMDRSHGHSBPWWOVE");
    tmp_tmp_msg_0_0.lat = 0.9822544173868939;
    tmp_tmp_msg_0_0.lon = 0.804989050209897;
    tmp_tmp_msg_0_0.depth = 0.025881149820209504;
    tmp_tmp_msg_0_0.query_channel = 176U;
    tmp_tmp_msg_0_0.reply_channel = 183U;
    tmp_tmp_msg_0_0.transponder_delay = 242U;
    tmp_msg_0.beacons.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.4333754179487387);
    msg.setSource(40636U);
    msg.setSourceEntity(254U);
    msg.setDestination(17081U);
    msg.setDestinationEntity(233U);
    msg.req_id = 40870U;
    msg.type = 69U;
    msg.max_size = 6984U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.44337383540450226;
    tmp_msg_0.base_lon = 0.9166539471317819;
    tmp_msg_0.base_time = 0.4423708029300297;
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
    msg.setTimeStamp(0.9929682990841984);
    msg.setSource(36582U);
    msg.setSourceEntity(42U);
    msg.setDestination(17141U);
    msg.setDestinationEntity(124U);
    msg.req_id = 34283U;
    msg.type = 170U;
    msg.max_size = 34470U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.47481376235381423;
    tmp_msg_0.base_lon = 0.14772713352047395;
    tmp_msg_0.base_time = 0.19752965794340094;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 27363U;
    tmp_tmp_msg_0_0.priority = 72;
    tmp_tmp_msg_0_0.x = -3390;
    tmp_tmp_msg_0_0.y = -11256;
    tmp_tmp_msg_0_0.z = 6494;
    tmp_tmp_msg_0_0.t = 8778;
    IMC::Turbidity tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.value = 0.5812261340022619;
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
    msg.setTimeStamp(0.6361838185046972);
    msg.setSource(45291U);
    msg.setSourceEntity(104U);
    msg.setDestination(31338U);
    msg.setDestinationEntity(31U);
    msg.req_id = 56438U;
    msg.type = 195U;
    msg.max_size = 16147U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.29953000775949834;
    tmp_msg_0.base_lon = 0.7679950547788694;
    tmp_msg_0.base_time = 0.01565094593422167;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 44384U;
    tmp_tmp_msg_0_0.priority = 79;
    tmp_tmp_msg_0_0.x = 27626;
    tmp_tmp_msg_0_0.y = 4508;
    tmp_tmp_msg_0_0.z = 9184;
    tmp_tmp_msg_0_0.t = 22670;
    IMC::RSSI tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.value = 0.7425505403164845;
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
    msg.setTimeStamp(0.7421473803741199);
    msg.setSource(59987U);
    msg.setSourceEntity(114U);
    msg.setDestination(53288U);
    msg.setDestinationEntity(26U);
    msg.original_source = 44330U;
    msg.destination = 48239U;
    msg.timeout = 0.15496317759398592;
    IMC::SmsRx tmp_msg_0;
    tmp_msg_0.source.assign("GTGLXCNTZXHRDKZWNFNEEBTDHIERBEPDJHCGMDZDCMYAHLFXKUWWEZAXFNTBLNZQBZGZGVCPPSCIORXVCPKHKSVBLXAIATVFLLQMFBPGTSFKYCRTQIWXUXMSLRQIEOVOBYKPSCYOMHCISEODUDOXDAMUYJNRGNJKYSIISJYQJEGQVWOIRBEPMDYTYFBVKDUVHFFPGRQVG");
    const signed char tmp_tmp_msg_0_0[] = {107, 114, 11, -17, -54, 60, 124, -100, 11, -112, -116, -111, 10, 111, 106, -94, 109, -113, -60, 3, -77, 80, -125, 111, -28, -70, 10, 105, -98, -72, -8, 69, 60, 109, 9, 49, -121, -56, 17, 63, 48, -5, -113, -28, -80, 10, 38, -39, 97, -59, -81, -11, 113, 47, -110, -75, 34, 4, 50, -90, -99, -48, -102, 96, -113, 56, -51, 97, -47, 90, -11, -123, 112, 70, -44, -107, -120, 61, 101, -37, -5, -92, -106, 13, 48, -121, 34, 16, -74, 109, -92, 25, 109, -88, 50, 94, -13, -51, -120, -116, 72, -84, 122, 78, -101, -59, -108, 36, 49, 95, -86, 49, -76, 43, 73, 12, -19, 70, -28, 54, 28, 92, -1, -99, -17, 36, -44, 91, -77, 112, -15, 28, 76, -46, 82, 49, 32, -121, -7, 125, 86, 33, -42, 51, 93, 65, -49, 51, -128, -6, -70, 74, 14, 61, 90, -110, 62, 47, -50, 45, 18, 63, 86, -110, 108, -121, 117, 105, -6, -124, -100, -104, 72, -70, -66, 109, -9, -37, -9, 30, -23};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.9088319111371915);
    msg.setSource(19191U);
    msg.setSourceEntity(195U);
    msg.setDestination(19970U);
    msg.setDestinationEntity(150U);
    msg.original_source = 40770U;
    msg.destination = 55457U;
    msg.timeout = 0.14897112686319103;
    IMC::PlanControlState tmp_msg_0;
    tmp_msg_0.state = 23U;
    tmp_msg_0.plan_id.assign("AYNHQTXAOWJZOMDTUYHAAXBEQQQXOWKETJIFJTFPIMVUKIRYUEJXSIMZNTRGJVVDYFLN");
    tmp_msg_0.plan_eta = -863340721;
    tmp_msg_0.plan_progress = 0.5024259933050259;
    tmp_msg_0.man_id.assign("MTUZNYWBPYEADQMRFDLTRPNRBGPMXYRSWFCDVIBEIWWBHEFUZURTBAVDYUEETJWYKCJGWCOHTJAAQYLFGLQMXXIYPKCQHVODNAAZMPQFXAQNTLIFZLKCXSYETMGALFUCAWBTJVURKYCWBVXZUDISOKLQONOZPZPMKJXVIHNSZRRFSYEEDVJSBGICQNHDHRGFKTXGPONLOGLHJOWNBK");
    tmp_msg_0.man_type = 56995U;
    tmp_msg_0.man_eta = -538305122;
    tmp_msg_0.last_outcome = 16U;
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
    msg.setTimeStamp(0.7613798300035903);
    msg.setSource(60640U);
    msg.setSourceEntity(196U);
    msg.setDestination(51137U);
    msg.setDestinationEntity(204U);
    msg.original_source = 33675U;
    msg.destination = 58967U;
    msg.timeout = 0.9479170638535624;
    IMC::FollowSystem tmp_msg_0;
    tmp_msg_0.system = 8901U;
    tmp_msg_0.duration = 39251U;
    tmp_msg_0.speed = 0.120941807433818;
    tmp_msg_0.speed_units = 0U;
    tmp_msg_0.x = 0.040440966806312706;
    tmp_msg_0.y = 0.375472943094731;
    tmp_msg_0.z = 0.2300944276944109;
    tmp_msg_0.z_units = 227U;
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
    msg.setTimeStamp(0.7817500196659497);
    msg.setSource(2457U);
    msg.setSourceEntity(11U);
    msg.setDestination(18812U);
    msg.setDestinationEntity(6U);
    msg.type = 163U;
    msg.comm_interface = 23621U;
    msg.model = 30316U;
    msg.list.assign("LVYTTUMFMDBQVAFNHKZGEAHSHOMPKPXKAFDXTVDVZRBRUIBNXBDCJPNOTDCCVXHEKWISWEQCHQAPJKTSRAGMKBORXGRZLVFCLDICOISYXGZIITIVFXKNUEVNHAKYDEYJSGNAPDHZXTQBRFQRGFDXAUMTELYZNMLBBLYDAEFQROYGNUZVOJXBBHTWSJNQUQMOGCWMFQHWWUQ");

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
    msg.setTimeStamp(0.5469488141537819);
    msg.setSource(39570U);
    msg.setSourceEntity(160U);
    msg.setDestination(36456U);
    msg.setDestinationEntity(42U);
    msg.type = 221U;
    msg.comm_interface = 51110U;
    msg.model = 3647U;
    msg.list.assign("VIVPODORUQPZXDZMBYPXQAWSNZUIBTTWWTQUGMPEUMGIBIQYGNPVRCEXHRARFGFOWRCDNUSCRAGLBPQMXLSFGMBCZYBKHDXDSVHTLYSDMZTQORHVYBOQYGDHTYWYJ");

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
    msg.setTimeStamp(0.16436771288499064);
    msg.setSource(25251U);
    msg.setSourceEntity(12U);
    msg.setDestination(6573U);
    msg.setDestinationEntity(252U);
    msg.type = 165U;
    msg.comm_interface = 60950U;
    msg.model = 26530U;
    msg.list.assign("PPHWWESWLVUINJEDSDBQWGLYXGIOKMDYERCWOACURGQYQLEFBFEB");

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
    msg.setTimeStamp(0.38441970828227157);
    msg.setSource(10824U);
    msg.setSourceEntity(81U);
    msg.setDestination(56369U);
    msg.setDestinationEntity(132U);
    msg.type = 110U;
    msg.req_id = 796898655U;
    msg.ttl = 15558U;
    msg.code = 149U;
    msg.destination.assign("LLRAMUUOVHMUTDFQDOBJZTSUABFAUIZ");
    msg.source.assign("TIDBKFJBTHNCHSRJDJKSMTJQNPXPBCBKOZIKYXTQUFKEUHYMOPMGDCYTDGQPXPKILMXWCNBXZZLBDVGDZRUVYZG");
    msg.acknowledge = 80U;
    msg.status = 176U;
    const signed char tmp_msg_0[] = {-76, -2, -43, 59, 116, -120, 56, -63, -119, 86, 26, -116, 84, 33, 3, -73, -4, -34, -6, 34, -56, -100, 83, 61, 98, -42, 116, 33, 23, 9, 97, -80, 5, -113, -2, -70, -8, 91, -124, -92, 19, -40, 68, 84, 90, 54, -48, -57, -33, -5, 62, 100, -20, 46, 15, 120, -80, -50, -42, -22, -88, -127, 23, -104, -109, -9, -52, 33, -128, -87, -109, -43, -111, -17, -30, -12, -108, 53, 21, -85, 22, -74, 46, -120, -92, 18, 26, -126, -39, -94, -100, 54, -77, 61};
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
    msg.setTimeStamp(0.5189319167021362);
    msg.setSource(45793U);
    msg.setSourceEntity(95U);
    msg.setDestination(6644U);
    msg.setDestinationEntity(91U);
    msg.type = 253U;
    msg.req_id = 3255394759U;
    msg.ttl = 5292U;
    msg.code = 47U;
    msg.destination.assign("ACGTNZGRCCQJMUBCTFEEQR");
    msg.source.assign("PMYHWOOSJPDNJPXGZIINYUOWNPYESWQCTPUEKYXAFSAGGTKYCELIXQPMRCOWVEZIAKXGRAWDBMZZEOMIARGYZDSWLJRFXMGGCUHBXXJNSTVDIHKGIASPZHGFRJRDSMHAHCTVBVVLHNDFHCCJMVVQWFAXXKSFTUWTVYRUMHLCOQO");
    msg.acknowledge = 68U;
    msg.status = 111U;
    const signed char tmp_msg_0[] = {-50, 12, 111, 123, 50, 77, -105, 0, 28, 35, 51, 86, -18, -9, 91, -112, -57, 36, -57, 82, 15, 13, -43, -111, 62, -1, -49, 65, -106, -110, 3, 84, 80, -25, 77, 115, -32, 6, -3, 27, -1, -104, 95, -3, 38, -124, -24, 8, -35, -118, -40, -96, -36, 104, 112, 102, 8, 63, 37, 53, -111, -50, -35, -42, 123, 53, 37, -102, 42, -124, -57, -79, 112, 95, -29, -98, -108, -108, 73, -64, 61, -43, -105, 5, -112, 124, 26, -111, -59, 102, -64, -50, 57, -30, -119, -78, 49, -99, -78, -85, -27, -68, -98, -120, 32, -25, 111, -102, 23, -78, -109, -75, -24, 56, -53, -82, -58, 17, -7, -1, -109, 87, 48, -118, 90, -69, -71, 34, 74, -32, 74, -54, 122, 16, 66, 31, -92, -54, 102, 83, 36, -24, 78, -45, -93, -46, -101, 12, -95, 124, -57, 23, 86, -13, 40, 28, 11, -27, 86, -13, 96, 118, -111, -18, 41, -69, -29, 0, 72, 69, 1, -78, 40, 124, 126, 119, -104, 95, 86, 53, -20, -80, 36, -107, 99, 32, 46, -53, -41, 11, 103, -93};
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
    msg.setTimeStamp(0.7544237687460963);
    msg.setSource(5498U);
    msg.setSourceEntity(143U);
    msg.setDestination(17409U);
    msg.setDestinationEntity(242U);
    msg.type = 109U;
    msg.req_id = 793477217U;
    msg.ttl = 7432U;
    msg.code = 222U;
    msg.destination.assign("DHOZVPSADWQFVGRAMXDBDVLIWAZLLKODREVXQKRCZGUFIFCWJQRPUBBXAHIKIDYFSYUIAUCZTOEBWXCGQMFXNHSDJTOHWKDCYTG");
    msg.source.assign("QAERYUVSIONCHPEKCBSZFPWNTPREGFMGORFLXLQCVWIYWYAFLFNXVWGOMFMTEUOVSLCGPVSUMSIDJQZQPDTPVDUBYHZMAOSBNWNWRDIGIP");
    msg.acknowledge = 241U;
    msg.status = 240U;
    const signed char tmp_msg_0[] = {-108, 48, -62, -110, 2, 44, 35, 20, 100, 38, -51, -63, -84, 109, -37, 63, -116, -43, -105, 32, -84, 51, 31, 121, -99, 94, 63, -18, 123, 44, 0, 68, -6, -75, 18, 89, -91, -5, 39, 52, -78, 2, 106, 55, 38, 26, -31, 11, -3, 60, -118, -1, 84, -39, 113, 18, -76, -116, 40, -124, -48, 99, 98, 100, 92, -47, 29, 44, -60, 51, 59, 96, -92, 96, 104, 41, -84, -92, 53, -45, -88, 47, 52, -124, 55, -18, -10, 59, -65, 120, -27, -34, 74, -77, 92, 72};
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
    msg.setTimeStamp(0.08933076804814433);
    msg.setSource(11382U);
    msg.setSourceEntity(82U);
    msg.setDestination(11678U);
    msg.setDestinationEntity(45U);
    msg.id = 85U;
    msg.range = 0.9221009153841947;

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
    msg.setTimeStamp(0.9323691464083943);
    msg.setSource(45680U);
    msg.setSourceEntity(21U);
    msg.setDestination(56428U);
    msg.setDestinationEntity(82U);
    msg.id = 31U;
    msg.range = 0.9264558748572206;

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
    msg.setTimeStamp(0.21027515014997866);
    msg.setSource(51567U);
    msg.setSourceEntity(83U);
    msg.setDestination(41133U);
    msg.setDestinationEntity(214U);
    msg.id = 114U;
    msg.range = 0.6871443426982536;

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
    msg.setTimeStamp(0.700710905201063);
    msg.setSource(27215U);
    msg.setSourceEntity(122U);
    msg.setDestination(43734U);
    msg.setDestinationEntity(226U);
    msg.beacon.assign("PMRDQACBUKQTXWKQGVGXCBKCKOALBGUVYXLNZYUMHSVTLMJYERCTQZABYGPNNWOIJGSOLPNEYVVDBWLHPHEGLKJWYDFFVWCAZOIZSBQKNZLIRSDHQXMWFGHCIIUAONTSJAZETTHEWEXMBUOJBCOGSFIYJRBQZVUXUKZRRNTJZNVJSAXJYERAQKDRXCED");
    msg.lat = 0.8079123537054441;
    msg.lon = 0.5388070103645585;
    msg.depth = 0.7210685481147081;
    msg.query_channel = 238U;
    msg.reply_channel = 122U;
    msg.transponder_delay = 139U;

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
    msg.setTimeStamp(0.9911726491233662);
    msg.setSource(6355U);
    msg.setSourceEntity(122U);
    msg.setDestination(49681U);
    msg.setDestinationEntity(23U);
    msg.beacon.assign("SONYAUURXFHRLXXBEEUGVJBMWIHNHUVKOQZMSQTAJAYGDFFNQQBKJUZTFKPDAVNXOZJNJJKRMRPGYYLUZETXBYFMXEYCSWDXZULVNVRMDRZCZUQYNOEJLKWAVOHECGGSBQQWSAOBEZGTBMFJCNGJRIFVPYCAKISVDYUHOTVDNKKIWRILWMIHLLDLYKJPGIAQCMF");
    msg.lat = 0.9317044958065361;
    msg.lon = 0.9756871393572296;
    msg.depth = 0.5330097362807497;
    msg.query_channel = 23U;
    msg.reply_channel = 130U;
    msg.transponder_delay = 103U;

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
    msg.setTimeStamp(0.8587339725465224);
    msg.setSource(15453U);
    msg.setSourceEntity(148U);
    msg.setDestination(7777U);
    msg.setDestinationEntity(239U);
    msg.beacon.assign("ZIZHEYBKZXBHTIQOCXUNCPAHROYFJGAQDTWXXFZIXPVCFXRMGWIDLKIGRYHTGBYUYYNZUAPLCQRIYIGWJJSFMPEFEEWOCNVHSRKDIQSNBDQVNRWMEXCNLCUDQKUODNJLOOMPAQYKHTUTSZWOUPTMQAHZTAFJSPKFSNLVRBHUSMBYFKZIOLTJWZSEWCVERJABGUKPSGDVUGLFSQMEDMEHCXLA");
    msg.lat = 0.6374898654988421;
    msg.lon = 0.4695917551800247;
    msg.depth = 0.9562824530048996;
    msg.query_channel = 102U;
    msg.reply_channel = 223U;
    msg.transponder_delay = 175U;

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
    msg.setTimeStamp(0.07910703390142326);
    msg.setSource(26229U);
    msg.setSourceEntity(22U);
    msg.setDestination(59863U);
    msg.setDestinationEntity(247U);
    msg.op = 118U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("NVBCECCLQJVGPFPMDYSBSBPNEFZQCDXIJIOVYNIPSJCEFEMNMBRZMIBPWIROZDQRWHNHHTJLXFJGPFVPAEZUSAUUV");
    tmp_msg_0.lat = 0.9350529110418072;
    tmp_msg_0.lon = 0.6655629424807163;
    tmp_msg_0.depth = 0.2560738090350265;
    tmp_msg_0.query_channel = 54U;
    tmp_msg_0.reply_channel = 179U;
    tmp_msg_0.transponder_delay = 184U;
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
    msg.setTimeStamp(0.2413839822023396);
    msg.setSource(11964U);
    msg.setSourceEntity(240U);
    msg.setDestination(42982U);
    msg.setDestinationEntity(185U);
    msg.op = 185U;

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
    msg.setTimeStamp(0.15093446513664743);
    msg.setSource(60301U);
    msg.setSourceEntity(86U);
    msg.setDestination(49645U);
    msg.setDestinationEntity(155U);
    msg.op = 76U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("YCSCHFDAZJSEGVVTJILEYCDOBJGSQFVNYHGAESUCKXQWRZMJKRERTBWSLWDKVBSRCIPINCPBPOFWASRTYVHNHOQBSXVKZRXLHIJMA");
    tmp_msg_0.lat = 0.22281874636324095;
    tmp_msg_0.lon = 0.993856155068856;
    tmp_msg_0.depth = 0.4857212431245985;
    tmp_msg_0.query_channel = 102U;
    tmp_msg_0.reply_channel = 176U;
    tmp_msg_0.transponder_delay = 25U;
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
    msg.setTimeStamp(0.3991616076941137);
    msg.setSource(39333U);
    msg.setSourceEntity(103U);
    msg.setDestination(59267U);
    msg.setDestinationEntity(51U);
    IMC::TrexObservation tmp_msg_0;
    tmp_msg_0.timeline.assign("HMGHSBNYJAFUATIOZBTRD");
    tmp_msg_0.predicate.assign("INKBIUHQREGNLBSRODDZNWPAIZCSGYQBSSFHBCHQIBQALDGXYQXHFVNYCWJJDDWEYOCDUFWJNARZQHEVFRVSZFTKMMJ");
    tmp_msg_0.attributes.assign("PLFBTHWBQAUOEALQIANDYMDWZAJLXQNORIXNPAUVJXVINAGTKTCVUGYPZWUWOKFHSJHSMWIJPRZMTCOXTYEJWKBCSBMESHMUJDFFXYKLKPBSWGBHAQHRQKTVQVWSLIZXGDYEMQKIMEGPUSNOCTFYDCNEQHKUPWZXFUOGMXXNHCJRRHSJYDGVDNOWRZILZUSRBTDCGFFVOORLYYZQNZPMXNZVSCIFBPHERLLEABIGAMDETEDRCI");
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
    msg.setTimeStamp(0.552745158306588);
    msg.setSource(51357U);
    msg.setSourceEntity(174U);
    msg.setDestination(22259U);
    msg.setDestinationEntity(251U);
    IMC::TeleoperationDone tmp_msg_0;
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
    msg.setTimeStamp(0.8877127807396242);
    msg.setSource(44073U);
    msg.setSourceEntity(145U);
    msg.setDestination(58959U);
    msg.setDestinationEntity(122U);
    IMC::RemoteState tmp_msg_0;
    tmp_msg_0.lat = 0.6841689753916557;
    tmp_msg_0.lon = 0.5951206359850051;
    tmp_msg_0.depth = 0U;
    tmp_msg_0.speed = 0.4575467634275048;
    tmp_msg_0.psi = 0.10281223047672794;
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
    msg.setTimeStamp(0.33849654523580186);
    msg.setSource(47588U);
    msg.setSourceEntity(95U);
    msg.setDestination(55849U);
    msg.setDestinationEntity(82U);
    msg.lat = 0.4235439760067712;
    msg.lon = 0.6406993724929869;
    msg.depth = 0.11339263416366563;
    msg.sentence.assign("SESFJTBQSJBOATQUZEBXXCUHTXPMDOOJWUQAMVWAOVORNGQHCDUGEYMPULTVEINNLYHHURXUNVYPHVFFFRTQCDKWDCJJGADFECSMCPWXEFIAWQG");
    msg.txtime = 0.4797403555867398;
    msg.modem_type.assign("DUDURWOSMQPYGDGWCWONSBFAVTXGHEXBJTMBNGOVITABKMSXZPEGJDNIJPLOPCAANTDTWYQZYVJSOQUZMVHPQBZAQITLNUHUVOACZFUEWKFGZRCRNSQMONCLWNOWTMFRBKILXIJAAHRXSJJQWXUFVNXQSHRENDGHMCMKHYTXKPKZTSRQERGKJVUFDZRLMDEEGLYYAHEDYZOFVBWEKKBLLIRCHYPIEJSJ");
    msg.sys_src.assign("LIELQMOPEHYDEYXLDDGBBLQLSJQUETKZCKWEXFFINMUHSIZTOXGAUQPAKMOQOYDRAKDWCPJMUFYNHVTMDEYAGNVZHRPLUAVWTOCVMHTWQMMBGXOBUFPIWODXSUHWIEMZFPYEIGKXWRLCJCTAHRLGZQPOJPZJOXUYFTDNJRBSVBSLSX");
    msg.seq = 16818U;
    msg.sys_dst.assign("WTMBPLOEKDEDQENSLYKZXUICAJTQCHKBAFTIKSVHJMZENOIMAQCVFRWYCVIRPBULNUWDHLPNNARDJMXGLYJUKIQVBNKESFBBXIOCUDUEFGXAPSYQCDMGFCHKSYRQYFDTQZZRUYMSAIXBTFVVKIXAPNJLWQBUGSTGMOFYSOGUQZJIZNWGDHMEWHAKFHAN");
    msg.flags = 223U;
    const signed char tmp_msg_0[] = {-8, -20, 112, 79, 24, -96, 78, -78, 19, 72, -91, -86, 17, 23, 63, -4, -112, 36, 97, -53, 120, 34, 30, -41, -43, 50, -24, 107, -53, -87, -25, 18, -71, -97, 97, 75, -38, -17, 56, -80, -54, 74, 96, 105, 80, 86, 108, -23, -96, 64, 73, 122, 10, 53, 124, -112, 103, 112, 35, -7, -41, -96, 78, -39, 80, 48, 77, 104, -86, 55, -94, 22, -114, -1, -66, 79, 55, 96, -1, -126, 56, 22, 54, -42, 103, -56, 69, 52, -60, 8, -90, 22, 97, 78, -8, -54, -33, -110, 69, -74, 21, -63, 92, 126, 67, -72, 78, 15, -2, -18, 15, -49, 93, 13, -85, -3, 69, -114, 110, 104, 100, 97, -67, 19, -55, -81, 87, 13, 77, -16, -101};
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
    msg.setTimeStamp(0.990451303157988);
    msg.setSource(6272U);
    msg.setSourceEntity(197U);
    msg.setDestination(53830U);
    msg.setDestinationEntity(17U);
    msg.lat = 0.14632134467185465;
    msg.lon = 0.4980435991396469;
    msg.depth = 0.19401325874938624;
    msg.sentence.assign("QKYMDVLEROJZCLNMTDROSBFCRYHFWGKETDRZOEAGQHOLIKFUVFHFPJRVJYDLIPJNGZKFNZVRXRXNKDIEBBGZUBEQDXUTEMMRFOJSLTWWWXARGTPYWOPASZZRILXZTWIVGMBIIWYQNXDCODHLLCMLJSCPPANMQBNXXESYUITYOJBAASHZGSQCAQNXTOKUBJGPJGNWTSJKQBCVUMMPHUFQYGHVCWTFYCHZHXYSNFKPIIDBMUH");
    msg.txtime = 0.4342717658573453;
    msg.modem_type.assign("KEIPSECEHHSJMOLZYDZUCNOLVOUUWEDFUXVVXAVTYOPOANTBGYFCDNTGRZXANDFRKGTWWWZWAZTHCRBEUYPXQLRHBALLCYJKPOKBDK");
    msg.sys_src.assign("HDCSXWEJITMKE");
    msg.seq = 11123U;
    msg.sys_dst.assign("HADPXCTJUZZOLSYEKXPKFHPUMVJWQSZVJCEHLSNIWRPOXGBFASYIKNDKYTQXDOAMGFISEDFWYBUGQXBMNVCDAMMIBEGVCOLCEIAQPBHWEGJDIETO");
    msg.flags = 230U;
    const signed char tmp_msg_0[] = {-12, 37, -17, -111, -73, 17, 98, -102, -56, 28, -114, -108, -9, -49, 115, 10, 96, -120, 86, -41, -120, -107, -9, 80, 93, 68, -104, -77, -98, -73, 90, 26, -32, 33, -31, 113, -110, -101, 84, -97, -63, 38, 64, 126, 10, -108, 26, 12, 96, -41, -42, -45, -91, -45, 19, -34, -1, -11, -79, 32, -13, -36, -75, 126, -103, 0, 68, -102, -97, -15, 91, 36, 28, 63, 34, -121, -88, -109, -57, -120, 82, 63, -47, -121, -17, 10, 73, 40, -74, 49, -52, -12, -20, -55, 9, 12, 7, -114, 13, 42, 100, -14, -79, 18};
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
    msg.setTimeStamp(0.5060953566200543);
    msg.setSource(56835U);
    msg.setSourceEntity(74U);
    msg.setDestination(9258U);
    msg.setDestinationEntity(34U);
    msg.lat = 0.11122406721021805;
    msg.lon = 0.8917940376426624;
    msg.depth = 0.931528875455995;
    msg.sentence.assign("CFPILUUKRRLPOKAROSJXFJMWEUUQHCYIZBNZQGPSFZUHNIDWPDVALBQKXEVYNJASKJHPDYCNBCRLTDXZFLBYPAKCUVEXMFTGRMJYDVNPWOAUEIQZVZFWTKAJWWDDOMIKYVBSYGQALKJSOHOAHLCZOQSOYHGTPBAXMZTINDMNPGLXNRWICVJUIYMIWXTQMGGNBVSFQRGOEDSFQHWDRKEYHHOTXBZUXEGSN");
    msg.txtime = 0.7886746760481145;
    msg.modem_type.assign("CRFMXLMRKQKTOUWGVVIJJWLETPGULAZANWIBHCTYQOVPATHEPEOJYBYVYDZOIJSHMZOHKKFDJSBNHHNCHWPLDNRNYVYSRTEJOAGVBGXQCGNWCKALLTRSPSJBBHMGJZMMUKUJKXWSTXRYPICGIEPFLXTZIWDAQFEGMLDYZPOOCAYXUFQBSQCVWTQYCUJSBMCXZ");
    msg.sys_src.assign("XDYBDVIZHIMHTDAFBROSONUOKNACBOKLZXQTGBHGJKGCTKBCPPFZCZXQSMRTNLHGIUFQSBGFEQGIYDYEVOWFCVQSKEJDFQFETHJUMYINJSAJ");
    msg.seq = 16505U;
    msg.sys_dst.assign("JWHQLUXUBNAMKOJKBCKQUCSQLFXOBWOTMI");
    msg.flags = 137U;
    const signed char tmp_msg_0[] = {-104, -91, 64, 16, 73, -52, 120, 45, 94, 17, -4, 7, 102, -52, 67, -109, -59, -11, 74, 62, -36, 103, 8, -24, 19, 50, -46, -63, 114, 86, -87, 90, -100, 30, -53, 24, -119, 43, -71, 120, -66, 70, -73, 107, 102, -92, -15, 80, -122, 46, 34, 15, -47, -78, -103, -21, -69, 32, 58, -112, 76, -81, -118, -94, -36, 94, -74, 95, -84, -66, 52, -65, 90, -103, -111, 48, 106, -31, -92, 63, 33, 89, -34, 25, 101, -67};
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
    msg.setTimeStamp(0.11600061165513031);
    msg.setSource(35083U);
    msg.setSourceEntity(93U);
    msg.setDestination(42983U);
    msg.setDestinationEntity(122U);
    msg.op = 254U;
    msg.system.assign("ZGAILIMJFLFMZOZXCAYROGXHTKHSZFQKMGDJCVBJYCETZLVECRHPOQECYEDVIPIHHNBMNBGILTRLDVQEOLMFHJWEFTNIOUNLUSWUTIUVZUDMNADHPIWUKIKGGXBDMQJYBCGJRZROJ");
    msg.range = 0.8684523948653428;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.6988411614945287;
    tmp_msg_0.y = 0.3503753070100202;
    tmp_msg_0.z = 0.9839911950921517;
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
    msg.setTimeStamp(0.22921497778815547);
    msg.setSource(27863U);
    msg.setSourceEntity(75U);
    msg.setDestination(44722U);
    msg.setDestinationEntity(227U);
    msg.op = 148U;
    msg.system.assign("EHWJXFJURELQGYIBIZWXWCDBLCHXNGYCTJHKYPVDKJEOSHKTKRXHNQZGVPMQQVBXBU");
    msg.range = 0.6685545231241005;
    IMC::ReportedState tmp_msg_0;
    tmp_msg_0.lat = 0.8448293055392064;
    tmp_msg_0.lon = 0.6715361739125821;
    tmp_msg_0.depth = 0.8287355707628888;
    tmp_msg_0.roll = 0.7568943665739593;
    tmp_msg_0.pitch = 0.9371734233278594;
    tmp_msg_0.yaw = 0.5341825587235441;
    tmp_msg_0.rcp_time = 0.8525422139734582;
    tmp_msg_0.sid.assign("WRUDPXISAEVXCLZYACREKMFJPYQHTKYYNTNOMRVHFBNIEFBYBZ");
    tmp_msg_0.s_type = 13U;
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
    msg.setTimeStamp(0.7330428904690109);
    msg.setSource(4232U);
    msg.setSourceEntity(106U);
    msg.setDestination(35818U);
    msg.setDestinationEntity(33U);
    msg.op = 155U;
    msg.system.assign("QUZDPQTPXTEXBQDGKBNBRNMWENACHLWLMWUMIDMKNAWVJVOILGFQZEKHAIVUNTZLOMSXYECDTWCEGPJORMEVYEQFHLYRVDKIFPICHFWGJDTTQHHWBSYKJFSRTKSJCDOZPWUYMKRFLASBBYHZFEISBARFOAXSUQOTAWGLAEDKVVSHIRSCJXNPUZJZUXFLJEYJBWQLPHSMRRCINPDQTVNYGQDFUOBPCPZOAV");
    msg.range = 0.9764069990477057;
    IMC::CrudeOil tmp_msg_0;
    tmp_msg_0.value = 0.797880465028542;
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
    msg.setTimeStamp(0.6442592959122877);
    msg.setSource(24232U);
    msg.setSourceEntity(10U);
    msg.setDestination(53413U);
    msg.setDestinationEntity(169U);

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
    msg.setTimeStamp(0.7124148703572801);
    msg.setSource(21348U);
    msg.setSourceEntity(219U);
    msg.setDestination(47829U);
    msg.setDestinationEntity(169U);

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
    msg.setTimeStamp(0.6092875620905815);
    msg.setSource(38425U);
    msg.setSourceEntity(186U);
    msg.setDestination(59730U);
    msg.setDestinationEntity(86U);

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
    msg.setTimeStamp(0.42469787900823164);
    msg.setSource(17873U);
    msg.setSourceEntity(35U);
    msg.setDestination(37125U);
    msg.setDestinationEntity(115U);
    msg.list.assign("UJYVJCIWIUTFEOFMFNOAHBQTLFMFNJFXGXRPUMASTMIYHPAQGWUJIRONJTCGCUSLBKYYZLKZOASRNEEILGEPXBDBMPLPGXMM");

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
    msg.setTimeStamp(0.3367904359126985);
    msg.setSource(6335U);
    msg.setSourceEntity(211U);
    msg.setDestination(48187U);
    msg.setDestinationEntity(22U);
    msg.list.assign("MIYZOFTQYFWXOJPERDWFNSUSRZMOXSBXZRLOXNPXSSYLHFKMPLHERFDKDLVPSQMJSVPQGZOHYMWDUAXVCKIFVIQWUKRUQUCALJIPGAAUDNSNMEKIZWTJJRVYHRJOYVPHVAIBMJNTTTJGBGEUZGSYUDCDGOXEBXIPQGCJLFKQKB");

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
    msg.setTimeStamp(0.2752099604388275);
    msg.setSource(15036U);
    msg.setSourceEntity(44U);
    msg.setDestination(44018U);
    msg.setDestinationEntity(177U);
    msg.list.assign("AUXHQXCSGJUZUGGCGVIYWROXHWQOAIHNQDJOSGDFZXBHLBHRHWRELSMEFZNYKASCXFUDPORJCRPVVNWCDLALXGUOKTXIJAVVKFOMKNCTRWYDDEZMIEXFWATSVSQITWHLOFBVWXVBGACYAZLYDJDAQNNJOISMGCGBESQKDF");

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
    msg.setTimeStamp(0.1190527418001307);
    msg.setSource(57922U);
    msg.setSourceEntity(229U);
    msg.setDestination(40546U);
    msg.setDestinationEntity(18U);
    msg.peer.assign("YPQUWVYYPPCBZUQUHHDMLSRGJPVWNIYPWWEMHQSBYNEBBGJCUSYEKNROHGLTXEIOXUVGZRPOTDSBMDOODAGWCYUXKOFRTXVAFKHHFJQGSLTVRSZWUJVRZWUPPEFCNYSMRUTXSDMJNKZZHDIZDINBYEJC");
    msg.rssi = 0.5082429515968582;
    msg.integrity = 36774U;

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
    msg.setTimeStamp(0.8383957668345257);
    msg.setSource(36085U);
    msg.setSourceEntity(203U);
    msg.setDestination(18690U);
    msg.setDestinationEntity(63U);
    msg.peer.assign("IGSYWKCMNQNGDSCSJLHKNZGVHJQZYAEXECDNCQJONWKUAOWSRAHYWYNGKYBJXVEFWIIPRDMJPYGDPR");
    msg.rssi = 0.6074182113112128;
    msg.integrity = 60444U;

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
    msg.setTimeStamp(0.7340187654942306);
    msg.setSource(33398U);
    msg.setSourceEntity(210U);
    msg.setDestination(50825U);
    msg.setDestinationEntity(194U);
    msg.peer.assign("IRMMJTTYKMZEGLWEJTZLBQCAOVWWCXEPKNLDJVJIPDSRNSJYPBRUYEMFMCOCQDGIFVJFDKWDENUERFTQWDALZRMHQVHOOOKGOBAISRDDAWCNAYXZWBXSGIWNBUVYJLZLKA");
    msg.rssi = 0.025027572665782483;
    msg.integrity = 2337U;

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
    msg.setTimeStamp(0.9086789809507263);
    msg.setSource(57667U);
    msg.setSourceEntity(65U);
    msg.setDestination(26230U);
    msg.setDestinationEntity(153U);
    msg.req_id = 10962U;
    msg.destination.assign("IYLUIGIMYWCGRHFZZKTMSHQBVKTAFUCOJOYANLEEFWXXISHLPDFEUVZMWMFGABMZWNWNEVIOLTTMDR");
    msg.timeout = 0.29412806131761027;
    msg.range = 0.8069343555792522;
    msg.type = 74U;
    IMC::TextMessage tmp_msg_0;
    tmp_msg_0.origin.assign("RSYTIJBMWSQKEGAYSVBPQUNUMQWXBUET");
    tmp_msg_0.text.assign("KSQNQLDLSPGYMIPTLRRDSQAOUPBERSQTLXJHDASCUELXBCF");
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
    msg.setTimeStamp(0.7852774848966331);
    msg.setSource(14961U);
    msg.setSourceEntity(56U);
    msg.setDestination(32538U);
    msg.setDestinationEntity(111U);
    msg.req_id = 58069U;
    msg.destination.assign("GYDRHSLXJOVHHANPEYJOAFCKHSLMWBNRZBBQNLETZKOWUNSDVRLRFUVEFZEADTGGHYRAJLTUWYCSXOGLIEGUFCYUVWVYFSFQBKBNZVXMXMZDQKVKDCJQPDYSMMGSWMCJIMCAFCTPUIMNDJPUKQNBHXTPXMABNCEVUARQILMGZQZPAYLRWQTCTOWKBLOESGXZXNAPOZOY");
    msg.timeout = 0.7100114836897531;
    msg.range = 0.6160477074920013;
    msg.type = 146U;
    IMC::AlignmentState tmp_msg_0;
    tmp_msg_0.state = 120U;
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
    msg.setTimeStamp(0.9564691554399241);
    msg.setSource(6063U);
    msg.setSourceEntity(182U);
    msg.setDestination(10904U);
    msg.setDestinationEntity(28U);
    msg.req_id = 35534U;
    msg.destination.assign("IZKAYPHJLWDQKSKRXTICEAUYYMOECBTCDHIBKAOOGJTCLTCYRLOMJYJLSHCXHGOZSXGQGEZRJZBRKZHNMAXBNUIEEBVZPBLNRFAOVCXWNRKHQQULITSWTOMWXGUUMJSZPXLFTATFDOTRQXSJSGNADYDQOHLJRUDGEVDFDYYALBNZFSMGIVXEVLQCHM");
    msg.timeout = 0.33506836315448485;
    msg.range = 0.16045887475056564;
    msg.type = 179U;
    IMC::Chlorophyll tmp_msg_0;
    tmp_msg_0.value = 0.46525142019199883;
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
    msg.setTimeStamp(0.8351667146792358);
    msg.setSource(22493U);
    msg.setSourceEntity(109U);
    msg.setDestination(20059U);
    msg.setDestinationEntity(221U);
    msg.req_id = 46661U;
    msg.type = 32U;
    msg.status = 159U;
    msg.info.assign("KQIPWAQRZUDMADEJYNBYRYPUVENNCRJVDTJCDSDBHFSFTEEZYUDYWTFOMTIZPKITVGBLNNAHEGNTOFLZRHUFCCKGWZFVROEBJBMCPCFLXABGQDXIBRIQICMMTJVIUQSKKVZWWZUVIHLRETMSXDQGSPAYMLXXCQOVGQHHNUTZMKLTPYJCPJJZJHBHDGEISYXKALN");
    msg.range = 0.9138420363904515;

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
    msg.setTimeStamp(0.4291152599384418);
    msg.setSource(20374U);
    msg.setSourceEntity(252U);
    msg.setDestination(44011U);
    msg.setDestinationEntity(123U);
    msg.req_id = 12876U;
    msg.type = 203U;
    msg.status = 134U;
    msg.info.assign("DGWSVWPNKNSWRGDCJLOYQTEJRTEDZSKTTGBXHPKGQPVAICADETIUQXJURBOSJPOBOYRWFFZCNLKFTOUCCWLHSQXDUY");
    msg.range = 0.9093093580950158;

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
    msg.setTimeStamp(0.606466019160369);
    msg.setSource(1821U);
    msg.setSourceEntity(72U);
    msg.setDestination(30412U);
    msg.setDestinationEntity(39U);
    msg.req_id = 14779U;
    msg.type = 170U;
    msg.status = 229U;
    msg.info.assign("BKDUACBCFQPBOHHIJYIWUZGMCWYVBWQRXMOPIMPOVYOSASBSSGHUFQHKGERJIMTWDJSERUYJWPYEGBRRIRNVMNTJLSGLT");
    msg.range = 0.3724735421083739;

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
    msg.setTimeStamp(0.28859559588026884);
    msg.setSource(31017U);
    msg.setSourceEntity(3U);
    msg.setDestination(55047U);
    msg.setDestinationEntity(158U);
    msg.system.assign("LZERHWANYPWTBUQDELBRPJCESLDBJULAIHBPGPOHEZTLHNVSTZHQQSSJKTWHXKTXWHIBOCOVJDJCIVW");
    msg.op = 2U;

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
    msg.setTimeStamp(0.14103362462705493);
    msg.setSource(61567U);
    msg.setSourceEntity(48U);
    msg.setDestination(54312U);
    msg.setDestinationEntity(183U);
    msg.system.assign("NAZCUBPNBSSFFTDWUOGTCOGAUTIXLOUANYJCJPKPAQJNAEHCCQBSNLJPRLIBZMKH");
    msg.op = 165U;

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
    msg.setTimeStamp(0.9009895600856697);
    msg.setSource(47001U);
    msg.setSourceEntity(1U);
    msg.setDestination(39413U);
    msg.setDestinationEntity(72U);
    msg.system.assign("MXHIOFJIZUUSVHSEWNVPBTETEDNKIPLDQRCJNBLXXKODJIJOLGDDEONXMLUFZVYWAPJQCEFQPD");
    msg.op = 197U;

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
    msg.setTimeStamp(0.14773380981704398);
    msg.setSource(50459U);
    msg.setSourceEntity(248U);
    msg.setDestination(20614U);
    msg.setDestinationEntity(15U);
    msg.value = -28821;

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
    msg.setTimeStamp(0.2404431903600941);
    msg.setSource(49210U);
    msg.setSourceEntity(99U);
    msg.setDestination(49236U);
    msg.setDestinationEntity(81U);
    msg.value = -5117;

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
    msg.setTimeStamp(0.033211066914576204);
    msg.setSource(42405U);
    msg.setSourceEntity(212U);
    msg.setDestination(23173U);
    msg.setDestinationEntity(131U);
    msg.value = 7838;

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
    msg.setTimeStamp(0.11254522589413918);
    msg.setSource(18999U);
    msg.setSourceEntity(75U);
    msg.setDestination(6559U);
    msg.setDestinationEntity(140U);
    msg.value = 0.45028564063488763;

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
    msg.setTimeStamp(0.3629504473019838);
    msg.setSource(33997U);
    msg.setSourceEntity(20U);
    msg.setDestination(49900U);
    msg.setDestinationEntity(147U);
    msg.value = 0.2568154255573788;

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
    msg.setTimeStamp(0.10591025276749733);
    msg.setSource(8362U);
    msg.setSourceEntity(164U);
    msg.setDestination(8783U);
    msg.setDestinationEntity(13U);
    msg.value = 0.7447568799505087;

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
    msg.setTimeStamp(0.34475782503995733);
    msg.setSource(52626U);
    msg.setSourceEntity(170U);
    msg.setDestination(15367U);
    msg.setDestinationEntity(182U);
    msg.value = 0.5182939835839069;

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
    msg.setTimeStamp(0.19928479749290395);
    msg.setSource(54796U);
    msg.setSourceEntity(46U);
    msg.setDestination(55747U);
    msg.setDestinationEntity(84U);
    msg.value = 0.27029029122015924;

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
    msg.setTimeStamp(0.9781834467589703);
    msg.setSource(6697U);
    msg.setSourceEntity(110U);
    msg.setDestination(30950U);
    msg.setDestinationEntity(48U);
    msg.value = 0.7864226570367949;

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
    msg.setTimeStamp(0.5619373167532586);
    msg.setSource(30874U);
    msg.setSourceEntity(138U);
    msg.setDestination(35343U);
    msg.setDestinationEntity(101U);
    msg.validity = 14404U;
    msg.type = 239U;
    msg.utc_year = 57153U;
    msg.utc_month = 12U;
    msg.utc_day = 175U;
    msg.utc_time = 0.850702581555589;
    msg.lat = 0.9901701077610866;
    msg.lon = 0.3025917656202013;
    msg.height = 0.9888406351005025;
    msg.satellites = 104U;
    msg.cog = 0.6894906905647143;
    msg.sog = 0.5132442099865803;
    msg.hdop = 0.28454063527233653;
    msg.vdop = 0.16752087839884278;
    msg.hacc = 0.7935968395718194;
    msg.vacc = 0.5187705759166705;

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
    msg.setTimeStamp(0.5713204399992763);
    msg.setSource(62034U);
    msg.setSourceEntity(0U);
    msg.setDestination(20680U);
    msg.setDestinationEntity(156U);
    msg.validity = 9939U;
    msg.type = 126U;
    msg.utc_year = 10152U;
    msg.utc_month = 188U;
    msg.utc_day = 2U;
    msg.utc_time = 0.3344592569593976;
    msg.lat = 0.4077576911585059;
    msg.lon = 0.0406561487324707;
    msg.height = 0.019239166063126922;
    msg.satellites = 172U;
    msg.cog = 0.8007168724942983;
    msg.sog = 0.4542651792154814;
    msg.hdop = 0.7286064882136398;
    msg.vdop = 0.22830458808276133;
    msg.hacc = 0.7107314791710078;
    msg.vacc = 0.6101712885280226;

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
    msg.setTimeStamp(0.8394873828689884);
    msg.setSource(1286U);
    msg.setSourceEntity(42U);
    msg.setDestination(34163U);
    msg.setDestinationEntity(59U);
    msg.validity = 56961U;
    msg.type = 62U;
    msg.utc_year = 36888U;
    msg.utc_month = 247U;
    msg.utc_day = 222U;
    msg.utc_time = 0.5173145680813307;
    msg.lat = 0.2671615922531081;
    msg.lon = 0.5050029503515321;
    msg.height = 0.9358844835547115;
    msg.satellites = 220U;
    msg.cog = 0.29677377507819624;
    msg.sog = 0.6773420631213494;
    msg.hdop = 0.6504547673398694;
    msg.vdop = 0.5391210222959774;
    msg.hacc = 0.21124115135756416;
    msg.vacc = 0.4398877355070102;

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
    msg.setTimeStamp(0.5079251025224065);
    msg.setSource(13020U);
    msg.setSourceEntity(128U);
    msg.setDestination(10649U);
    msg.setDestinationEntity(112U);
    msg.time = 0.051880621090632295;
    msg.phi = 0.3367258574203976;
    msg.theta = 0.7121204404748857;
    msg.psi = 0.8734176023500562;
    msg.psi_magnetic = 0.1540370410530445;

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
    msg.setTimeStamp(0.08948329262035581);
    msg.setSource(44020U);
    msg.setSourceEntity(183U);
    msg.setDestination(18671U);
    msg.setDestinationEntity(165U);
    msg.time = 0.09665231921343653;
    msg.phi = 0.012004532943225898;
    msg.theta = 0.9546953339207094;
    msg.psi = 0.20513605697707715;
    msg.psi_magnetic = 0.7278915797226387;

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
    msg.setTimeStamp(0.21730839062815188);
    msg.setSource(225U);
    msg.setSourceEntity(70U);
    msg.setDestination(17248U);
    msg.setDestinationEntity(239U);
    msg.time = 0.6753505278492986;
    msg.phi = 0.33506602965117704;
    msg.theta = 0.31951510404756456;
    msg.psi = 0.2266937599479164;
    msg.psi_magnetic = 0.310764756671597;

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
    msg.setTimeStamp(0.07389406716166425);
    msg.setSource(19162U);
    msg.setSourceEntity(66U);
    msg.setDestination(49604U);
    msg.setDestinationEntity(245U);
    msg.time = 0.8639453206723994;
    msg.x = 0.27745069994660254;
    msg.y = 0.5873459401846856;
    msg.z = 0.5870550318393726;
    msg.timestep = 0.6688137065229118;

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
    msg.setTimeStamp(0.8479182331450544);
    msg.setSource(59879U);
    msg.setSourceEntity(64U);
    msg.setDestination(27151U);
    msg.setDestinationEntity(252U);
    msg.time = 0.7773978748993079;
    msg.x = 0.45391985127081613;
    msg.y = 0.639505037359374;
    msg.z = 0.3888080672548231;
    msg.timestep = 0.527931538117121;

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
    msg.setTimeStamp(0.3044703262451931);
    msg.setSource(63886U);
    msg.setSourceEntity(173U);
    msg.setDestination(46629U);
    msg.setDestinationEntity(202U);
    msg.time = 0.6327745529018065;
    msg.x = 0.8060941787897139;
    msg.y = 0.5094277765974453;
    msg.z = 0.4023909673449073;
    msg.timestep = 0.2569896357181406;

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
    msg.setTimeStamp(0.5624028931309383);
    msg.setSource(673U);
    msg.setSourceEntity(32U);
    msg.setDestination(45973U);
    msg.setDestinationEntity(12U);
    msg.time = 0.5709428778657227;
    msg.x = 0.6947694329526;
    msg.y = 0.79501626964494;
    msg.z = 0.5339626193878365;

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
    msg.setTimeStamp(0.4885938382993772);
    msg.setSource(5292U);
    msg.setSourceEntity(91U);
    msg.setDestination(23743U);
    msg.setDestinationEntity(216U);
    msg.time = 0.07491926279621697;
    msg.x = 0.577793019005797;
    msg.y = 0.44615096999858217;
    msg.z = 0.17912358451429833;

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
    msg.setTimeStamp(0.45025330821478515);
    msg.setSource(64447U);
    msg.setSourceEntity(118U);
    msg.setDestination(44638U);
    msg.setDestinationEntity(240U);
    msg.time = 0.08350784360880992;
    msg.x = 0.38653649705526183;
    msg.y = 0.2010530887667329;
    msg.z = 0.4701081618263123;

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
    msg.setTimeStamp(0.03282158453252382);
    msg.setSource(39946U);
    msg.setSourceEntity(209U);
    msg.setDestination(44571U);
    msg.setDestinationEntity(127U);
    msg.time = 0.0481526519273372;
    msg.x = 0.5699481197614383;
    msg.y = 0.8644242487286677;
    msg.z = 0.9457757905198803;

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
    msg.setTimeStamp(0.36833843058594795);
    msg.setSource(46467U);
    msg.setSourceEntity(164U);
    msg.setDestination(7372U);
    msg.setDestinationEntity(147U);
    msg.time = 0.3950491017634543;
    msg.x = 0.8403878316250266;
    msg.y = 0.7601395438224182;
    msg.z = 0.6216887809427727;

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
    msg.setTimeStamp(0.7675505736949048);
    msg.setSource(52834U);
    msg.setSourceEntity(157U);
    msg.setDestination(47629U);
    msg.setDestinationEntity(249U);
    msg.time = 0.034090752723145656;
    msg.x = 0.1185626505507219;
    msg.y = 0.5089651084420537;
    msg.z = 0.19208847389882888;

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
    msg.setTimeStamp(0.5220020202180887);
    msg.setSource(38494U);
    msg.setSourceEntity(20U);
    msg.setDestination(43229U);
    msg.setDestinationEntity(155U);
    msg.time = 0.2674375192692434;
    msg.x = 0.4806524074444246;
    msg.y = 0.539522588656697;
    msg.z = 0.9007216834932236;

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
    msg.setTimeStamp(0.5068232334457962);
    msg.setSource(65123U);
    msg.setSourceEntity(249U);
    msg.setDestination(57463U);
    msg.setDestinationEntity(21U);
    msg.time = 0.8627489394740139;
    msg.x = 0.43448314642677155;
    msg.y = 0.48533592419994254;
    msg.z = 0.43959626323808965;

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
    msg.setTimeStamp(0.9791286568228573);
    msg.setSource(23831U);
    msg.setSourceEntity(60U);
    msg.setDestination(29414U);
    msg.setDestinationEntity(89U);
    msg.time = 0.9186346449201985;
    msg.x = 0.28183885810025444;
    msg.y = 0.6556753481351347;
    msg.z = 0.4133908082828708;

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
    msg.setTimeStamp(0.4924620539150759);
    msg.setSource(55438U);
    msg.setSourceEntity(45U);
    msg.setDestination(59221U);
    msg.setDestinationEntity(59U);
    msg.validity = 40U;
    msg.x = 0.41017635192213886;
    msg.y = 0.44161080366038485;
    msg.z = 0.6381878552548277;

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
    msg.setTimeStamp(0.7254440722747775);
    msg.setSource(17057U);
    msg.setSourceEntity(189U);
    msg.setDestination(19744U);
    msg.setDestinationEntity(82U);
    msg.validity = 120U;
    msg.x = 0.06610762560209715;
    msg.y = 0.1493761893710489;
    msg.z = 0.5761275753009379;

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
    msg.setTimeStamp(0.05872315834606079);
    msg.setSource(40938U);
    msg.setSourceEntity(63U);
    msg.setDestination(56062U);
    msg.setDestinationEntity(25U);
    msg.validity = 180U;
    msg.x = 0.6963547155089121;
    msg.y = 0.09276836927852916;
    msg.z = 0.8629972422544727;

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
    msg.setTimeStamp(0.7786472467921403);
    msg.setSource(56070U);
    msg.setSourceEntity(125U);
    msg.setDestination(61847U);
    msg.setDestinationEntity(59U);
    msg.validity = 175U;
    msg.x = 0.04713847789170178;
    msg.y = 0.8923212551624817;
    msg.z = 0.08381799140599278;

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
    msg.setTimeStamp(0.36219888177290727);
    msg.setSource(6214U);
    msg.setSourceEntity(107U);
    msg.setDestination(25955U);
    msg.setDestinationEntity(107U);
    msg.validity = 177U;
    msg.x = 0.16364563759913187;
    msg.y = 0.14810072720587186;
    msg.z = 0.29859840998870224;

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
    msg.setTimeStamp(0.4954139277369902);
    msg.setSource(4267U);
    msg.setSourceEntity(240U);
    msg.setDestination(42953U);
    msg.setDestinationEntity(2U);
    msg.validity = 254U;
    msg.x = 0.5209687840072084;
    msg.y = 0.1791660351300387;
    msg.z = 0.12214929294444743;

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
    msg.setTimeStamp(0.9536853104048707);
    msg.setSource(41285U);
    msg.setSourceEntity(160U);
    msg.setDestination(20656U);
    msg.setDestinationEntity(176U);
    msg.time = 0.838314777507011;
    msg.x = 0.27230787885175045;
    msg.y = 0.7486879368553988;
    msg.z = 0.006841515584493529;

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
    msg.setTimeStamp(0.9332212589766958);
    msg.setSource(41508U);
    msg.setSourceEntity(82U);
    msg.setDestination(61107U);
    msg.setDestinationEntity(35U);
    msg.time = 0.06914153439576909;
    msg.x = 0.3106714749389625;
    msg.y = 0.9135757600173937;
    msg.z = 0.9339202126273578;

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
    msg.setTimeStamp(0.9478026154872646);
    msg.setSource(36016U);
    msg.setSourceEntity(136U);
    msg.setDestination(57676U);
    msg.setDestinationEntity(232U);
    msg.time = 0.9437191910973738;
    msg.x = 0.48905009001340505;
    msg.y = 0.624017538919361;
    msg.z = 0.3234212027975182;

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
    msg.setTimeStamp(0.16171851134329496);
    msg.setSource(11582U);
    msg.setSourceEntity(26U);
    msg.setDestination(2884U);
    msg.setDestinationEntity(92U);
    msg.validity = 219U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.24112852579537336;
    tmp_msg_0.beam_height = 0.6342926600926257;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.4612492355947535;

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
    msg.setTimeStamp(0.22760220937864872);
    msg.setSource(53324U);
    msg.setSourceEntity(62U);
    msg.setDestination(29390U);
    msg.setDestinationEntity(157U);
    msg.validity = 5U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.20851649135689865;
    tmp_msg_0.y = 0.9266486604615946;
    tmp_msg_0.z = 0.27927169804816754;
    tmp_msg_0.phi = 0.8182555441018328;
    tmp_msg_0.theta = 0.6511364524940453;
    tmp_msg_0.psi = 0.1391808847917141;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.8580571312164046;

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
    msg.setTimeStamp(0.562976646623703);
    msg.setSource(44347U);
    msg.setSourceEntity(7U);
    msg.setDestination(52484U);
    msg.setDestinationEntity(165U);
    msg.validity = 36U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.7775173019346955;
    tmp_msg_0.y = 0.6395204820586586;
    tmp_msg_0.z = 0.29783488493053134;
    tmp_msg_0.phi = 0.7757947831028313;
    tmp_msg_0.theta = 0.45067053126578704;
    tmp_msg_0.psi = 0.1719760045148372;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.5289601025406082;
    tmp_msg_1.beam_height = 0.6226212065368221;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.9839558518855946;

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
    msg.setTimeStamp(0.34580821283822205);
    msg.setSource(57984U);
    msg.setSourceEntity(59U);
    msg.setDestination(52741U);
    msg.setDestinationEntity(211U);
    msg.value = 0.03936664313677252;

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
    msg.setTimeStamp(0.8711861060941085);
    msg.setSource(11279U);
    msg.setSourceEntity(73U);
    msg.setDestination(16014U);
    msg.setDestinationEntity(114U);
    msg.value = 0.14404249459947172;

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
    msg.setTimeStamp(0.5475971692248532);
    msg.setSource(47580U);
    msg.setSourceEntity(185U);
    msg.setDestination(22936U);
    msg.setDestinationEntity(27U);
    msg.value = 0.6726593984301202;

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
    msg.setTimeStamp(0.9385732276883283);
    msg.setSource(48239U);
    msg.setSourceEntity(109U);
    msg.setDestination(22969U);
    msg.setDestinationEntity(98U);
    msg.value = 0.04276534914958996;

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
    msg.setTimeStamp(0.913016419862539);
    msg.setSource(40739U);
    msg.setSourceEntity(246U);
    msg.setDestination(15637U);
    msg.setDestinationEntity(48U);
    msg.value = 0.26544532203032645;

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
    msg.setTimeStamp(0.7556286435140575);
    msg.setSource(46592U);
    msg.setSourceEntity(239U);
    msg.setDestination(38688U);
    msg.setDestinationEntity(113U);
    msg.value = 0.8907607236018058;

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
    msg.setTimeStamp(0.38313457952583396);
    msg.setSource(6544U);
    msg.setSourceEntity(206U);
    msg.setDestination(43082U);
    msg.setDestinationEntity(167U);
    msg.value = 0.9160309634635573;

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
    msg.setTimeStamp(0.5829425753709463);
    msg.setSource(4394U);
    msg.setSourceEntity(174U);
    msg.setDestination(63652U);
    msg.setDestinationEntity(53U);
    msg.value = 0.5801819673903528;

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
    msg.setTimeStamp(0.9096363236784808);
    msg.setSource(37633U);
    msg.setSourceEntity(142U);
    msg.setDestination(9209U);
    msg.setDestinationEntity(215U);
    msg.value = 0.7171868617739193;

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
    msg.setTimeStamp(0.7156032872838594);
    msg.setSource(49493U);
    msg.setSourceEntity(155U);
    msg.setDestination(47018U);
    msg.setDestinationEntity(130U);
    msg.value = 0.1170866264234034;

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
    msg.setTimeStamp(0.7957557724202368);
    msg.setSource(54792U);
    msg.setSourceEntity(157U);
    msg.setDestination(9707U);
    msg.setDestinationEntity(190U);
    msg.value = 0.27244345758008826;

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
    msg.setTimeStamp(0.34246208173314296);
    msg.setSource(50162U);
    msg.setSourceEntity(150U);
    msg.setDestination(26681U);
    msg.setDestinationEntity(198U);
    msg.value = 0.6475407434882248;

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
    msg.setTimeStamp(0.20247473103746771);
    msg.setSource(130U);
    msg.setSourceEntity(113U);
    msg.setDestination(51171U);
    msg.setDestinationEntity(206U);
    msg.value = 0.26274102310552105;

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
    msg.setTimeStamp(0.045544910391878135);
    msg.setSource(50433U);
    msg.setSourceEntity(246U);
    msg.setDestination(11907U);
    msg.setDestinationEntity(156U);
    msg.value = 0.9088499030608417;

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
    msg.setTimeStamp(0.1337777874753483);
    msg.setSource(55885U);
    msg.setSourceEntity(146U);
    msg.setDestination(19796U);
    msg.setDestinationEntity(200U);
    msg.value = 0.5457118537612473;

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
    msg.setTimeStamp(0.3482743890475082);
    msg.setSource(42933U);
    msg.setSourceEntity(228U);
    msg.setDestination(29928U);
    msg.setDestinationEntity(160U);
    msg.value = 0.42753502878044203;

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
    msg.setTimeStamp(0.34861021001648596);
    msg.setSource(39777U);
    msg.setSourceEntity(242U);
    msg.setDestination(46723U);
    msg.setDestinationEntity(58U);
    msg.value = 0.7685749701919521;

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
    msg.setTimeStamp(0.3242939084987936);
    msg.setSource(3202U);
    msg.setSourceEntity(189U);
    msg.setDestination(25322U);
    msg.setDestinationEntity(193U);
    msg.value = 0.6207974985894505;

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
    msg.setTimeStamp(0.8377472118076674);
    msg.setSource(35254U);
    msg.setSourceEntity(11U);
    msg.setDestination(17783U);
    msg.setDestinationEntity(181U);
    msg.value = 0.6994522912086008;

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
    msg.setTimeStamp(0.9317902768979418);
    msg.setSource(21436U);
    msg.setSourceEntity(177U);
    msg.setDestination(52777U);
    msg.setDestinationEntity(60U);
    msg.value = 0.6261233279737912;

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
    msg.setTimeStamp(0.9246590679292047);
    msg.setSource(56745U);
    msg.setSourceEntity(154U);
    msg.setDestination(12808U);
    msg.setDestinationEntity(184U);
    msg.value = 0.6013163787532375;

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
    msg.setTimeStamp(0.48981416614545226);
    msg.setSource(3174U);
    msg.setSourceEntity(124U);
    msg.setDestination(20689U);
    msg.setDestinationEntity(43U);
    msg.value = 0.28804818949383215;

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
    msg.setTimeStamp(0.5086163692364424);
    msg.setSource(28412U);
    msg.setSourceEntity(142U);
    msg.setDestination(23809U);
    msg.setDestinationEntity(8U);
    msg.value = 0.659366550083159;

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
    msg.setTimeStamp(0.33100858686415113);
    msg.setSource(8928U);
    msg.setSourceEntity(82U);
    msg.setDestination(43586U);
    msg.setDestinationEntity(218U);
    msg.value = 0.6456509473446609;

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
    msg.setTimeStamp(0.020830695530264065);
    msg.setSource(39665U);
    msg.setSourceEntity(158U);
    msg.setDestination(48570U);
    msg.setDestinationEntity(251U);
    msg.direction = 0.693062134670123;
    msg.speed = 0.4187627631101447;
    msg.turbulence = 0.1219899574692963;

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
    msg.setTimeStamp(0.41855955875117323);
    msg.setSource(37347U);
    msg.setSourceEntity(21U);
    msg.setDestination(29786U);
    msg.setDestinationEntity(185U);
    msg.direction = 0.168202810155322;
    msg.speed = 0.48820459337088884;
    msg.turbulence = 0.687242652507868;

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
    msg.setTimeStamp(0.8664429410865009);
    msg.setSource(55071U);
    msg.setSourceEntity(231U);
    msg.setDestination(30311U);
    msg.setDestinationEntity(172U);
    msg.direction = 0.2308010082732883;
    msg.speed = 0.02087641370635618;
    msg.turbulence = 0.7273028415298478;

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
    msg.setTimeStamp(0.05399978392067917);
    msg.setSource(10840U);
    msg.setSourceEntity(100U);
    msg.setDestination(28030U);
    msg.setDestinationEntity(104U);
    msg.value = 0.40297862723742384;

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
    msg.setTimeStamp(0.18720226967433184);
    msg.setSource(62572U);
    msg.setSourceEntity(77U);
    msg.setDestination(20432U);
    msg.setDestinationEntity(59U);
    msg.value = 0.5401883077757798;

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
    msg.setTimeStamp(0.7855053386967958);
    msg.setSource(876U);
    msg.setSourceEntity(72U);
    msg.setDestination(1318U);
    msg.setDestinationEntity(4U);
    msg.value = 0.9468803384939419;

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
    msg.setTimeStamp(0.7829144195477693);
    msg.setSource(30857U);
    msg.setSourceEntity(250U);
    msg.setDestination(7833U);
    msg.setDestinationEntity(75U);
    msg.value.assign("WTJVMDCLCEUDCIOBPXRIKTWFVPWLXZAHNNODPQFLIQEDXRJJQNTHUBHQZRNIEAHCWBUVBWYBBUZXMVJCUMAVDCFJSOZXGAQLXWYGGKEYGIYYOFMWYWASTKSJOYWAJTKFGNBUMRYPEFPOTQQBNTCSOIAMYUKQGGHMUSAVLRAFFFMBCDNVIERPQDWDPZRLQZJYVIPKBCXLTOJHGGZIROOZHHTFNNS");

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
    msg.setTimeStamp(0.19724624931158574);
    msg.setSource(28820U);
    msg.setSourceEntity(243U);
    msg.setDestination(35092U);
    msg.setDestinationEntity(185U);
    msg.value.assign("OAWICNMDPCOGQISHBAXDCJFOYZRVVCDCTAAQKDTKTTGFRLZELFHKYKAGTERSMSUGMIBSIPQRNTLEBBBETPOQSXUUEPEFFVFKSLJCLXXJUINXUPBNOJWOXGSJAQYWMNZLJQWACBJLNVRDXBVYJJLEGWPMDSWUWVTVQZMRHURYNKT");

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
    msg.setTimeStamp(0.1721018661350383);
    msg.setSource(15290U);
    msg.setSourceEntity(125U);
    msg.setDestination(8574U);
    msg.setDestinationEntity(230U);
    msg.value.assign("USAXZKNUCPBHXYZSNYJJNCLZJSLKQBSNATTDFHOKVFAAIVMQASQOREXSFGXMFHRHGTZUKLWQDRLDWPGZERJWUSKNJOOJHHEPYXZHMVPQCVARDGTPV");

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
    msg.setTimeStamp(0.9568363879105034);
    msg.setSource(23612U);
    msg.setSourceEntity(246U);
    msg.setDestination(17757U);
    msg.setDestinationEntity(210U);
    const signed char tmp_msg_0[] = {-54, -37, -20, 101, -92, 0, -88, 60, -39, -71, -7, -96, 54, 55, 111, -74, -29, -96, 18, -83, 118, 91, 106, 57, 17, 43, 53, 53, 78, -71, -119, 17, 61, 28, -122, -32, -28, -87, -47, 84, -64, 55, 56, 4, -77, 92, 66, -78, -5, -101, 36, 113, 91, 122, -42, 21, 34, 64, -38, -15, 26, -103, 55, 23, -105, -66, 93, -46, 116, -12, 76, -112, 13, -58, 98, 124, -47, 53, -87, 82, 58, 102, 104, -22, 23, 105, 44, -78, 119, -31, -27, -116, 12, 119, 17, 114, 49, 38, -70, -87, 102, -43, -68, 102, -27, -118, 116, 14, 9, -1, 86, 116, 98, -47, 115, -90, 122, -124, -109, -44, -109, -101, -121, 116, -98, -83, 119, 83, 101, 73, -66, -47, -113, -124, -17, -40, 46, -49, -44, 81, -60, -48, 94, -79, 12, -72, 22, 12, -65, -11, 74, -96, -88, -59, -66, 59, -33, 74, -40, -70, -69, 101, -93, 40, 80, 58, -14, 6, 62, -126, -48, 15, -118, 84, -110, 124, 14, -110, -102, 123, -119, -34, 14, 111, -78, 77, -21, 102, -123, -23, -81, -100, -91, 14, 116, 73, 73, 108, 14, -107, 34, -47, -39, -30, 78, -114, -89, -19, -56, -15, -41, 100, -105, 16, 117, 55, -83, 67, -88};
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
    msg.setTimeStamp(0.7186216831699288);
    msg.setSource(57659U);
    msg.setSourceEntity(140U);
    msg.setDestination(34516U);
    msg.setDestinationEntity(198U);
    const signed char tmp_msg_0[] = {-109, 41, -77, 18, 36, -88, 125, -77, 108, 106, -57, 81, -73, 123, 83, -118, 63, 21, -80, -56, 26, -94, 118, 61, -108, 35, -24, 45, -25, -10, 38, -27, 43, -119, 14, -11, 13, 68, -108, -48, 51, -106, 43, 95, 72, -118, -41, -46, -64, -105, 12, 8, -106, 63, -32, -125, -10, 47, -98, -117, -103, 11, 29, -24, 11, -103, -19, -40, -15, 89, -8, 43, -5, 63, 126, 95, 84, 1, -113, -37, -15, -13, 120};
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
    msg.setTimeStamp(0.940167444024712);
    msg.setSource(39595U);
    msg.setSourceEntity(23U);
    msg.setDestination(40659U);
    msg.setDestinationEntity(61U);
    const signed char tmp_msg_0[] = {-24, 44, 101, 23, -113, 58, 32, -76, -119, -78, 63, -17, -34, -98, -43, -125, -23, 26, 53, 20, 46, -52, 111, -125, 109, 15, 120, 79, 54, 120, 71, -68, -66, 71, -113, -64, -61, 1, -113, 110, -37, -26, -8, -24, 99, 89, -29, -97, -28, -124, -28, 71, 11, -89, -1, -89, -73, -9, 39, 33, 94, 6, -28, 90, 18, 13, -100, -71, -45, 64, -92, 52, 118, 40, 80, 43, 67, -117, 63, -5, -102, -2, 92, -41, 24, 62, 13, 35, 17, -101, 78, -126, -50, 85, 36, 57, -82, 37, 64, 82, 109, 12, 24, 49, 4, -77, -110, -114, 27, -45, 9, 83, 85, -95, 106, 120, 30, -40, -9, 102, -106, -117, 77, 122, 84, -83, 24, -56, 14, 31, 18, -41, 48, 28, 2, 55, -96, 71, -64, -45, -9, -115, 17, -79, 67, 7, 95, 3, -103, 69, 118, 72, -60, -25, 31, -103, -35, -89, -76, -36, -108, -55, -9, 68, -119, 10, -95, -102, -116, -72, 53, -10, -64, 122, 72, -84, 22, -125, -40, -67, -12, -122, -16, -94, -36, -39, -8, 117, 102, 107, 123, 103, -51, -53, 73, 76, -89, -73, 113, -61, -106, 76, -37, 99, -89, 115, 74, -32, 91, -51, -22, -106, 78, -56, 89, 0, 124, 1, -102, -28, 70, 104, -54, 87, -73, -122, -98, 124, 36, 57, -13, -31, -94, -78, 48, 123, 29, -109, -17, -88, 45, -9, 119, -88, -6, -80, 107, -120, 54, -117};
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
    msg.setTimeStamp(0.7547448382618175);
    msg.setSource(53353U);
    msg.setSourceEntity(241U);
    msg.setDestination(20027U);
    msg.setDestinationEntity(245U);
    msg.value = 0.6958570595943543;

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
    msg.setTimeStamp(0.6012907242729841);
    msg.setSource(25237U);
    msg.setSourceEntity(34U);
    msg.setDestination(18492U);
    msg.setDestinationEntity(104U);
    msg.value = 0.47390601545051214;

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
    msg.setTimeStamp(0.12757447256225263);
    msg.setSource(8765U);
    msg.setSourceEntity(220U);
    msg.setDestination(62159U);
    msg.setDestinationEntity(67U);
    msg.value = 0.12276485462699549;

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
    msg.setTimeStamp(0.8900815138060052);
    msg.setSource(64632U);
    msg.setSourceEntity(253U);
    msg.setDestination(39933U);
    msg.setDestinationEntity(159U);
    msg.type = 46U;
    msg.frequency = 591341807U;
    msg.min_range = 3486U;
    msg.max_range = 3657U;
    msg.bits_per_point = 235U;
    msg.scale_factor = 0.055157463307486054;
    const signed char tmp_msg_0[] = {-68, 20, -41, 71, -43, -46, -2, 117, -39, 17, -60, 56, -75, 27, 44, -42, 38, -41, 95, -74, -95, -110, -75, 90, -60, 18, 41, -23, -78, 83, -96, 122, 122, -50, 6, 13, 111, 90, -80, 107, 68, -100, -8, -66, -66, 8, 101, 119, -26, 107, 88, 100, 38, -51, -52, -64, 91, -16, 38, -24, -48, -25, 47, -88, 112, 84, 97, -121, -111, 124, 6, 96, 40, 73, 108, 94, 98, 94, -70, 96, 33, 115, -76, 107, -91, -27, 31, 87, 63, -104, 98, -27, 121, -95, 66, -69, -112, -72, -49, -12, -67, -74, -81, 71, -5, -94, -108, 7, 108, 74, 26, 97, 80, 36, -96, 51, -48, -109, 67, -76, -77, 106, -21, 26, 26, 71, 94, 33, -118, -27, 68, 94, 64, 96, 87, 117, -19, -102, -25, 31, 55, 20, -107, -52, -24, -91, 85, -86, 88, -26, 32, -3, 86, 30, 7, 35, 43, -52, -89, -14, 117, 125, -53, -127, -119, -31, 120, 52, -20, -95, -82, 111, -14, 126, -43, 11, -121, 31, -45, 105, -123, -127, 36, -1, 51, -17, -13, 57, -81, 54, -71, 21, 45, 98, 53, 85, 105, -56, 67, -8, -86, -14, 22, 12, -13, -34, 74, -124, 92, 34, -94, 40, -79, 110, -90, 123, -39, 83, 77, 121, 12, 62, -105, 54};
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
    msg.setTimeStamp(0.8913075434424337);
    msg.setSource(23000U);
    msg.setSourceEntity(129U);
    msg.setDestination(17238U);
    msg.setDestinationEntity(71U);
    msg.type = 253U;
    msg.frequency = 2336187828U;
    msg.min_range = 18761U;
    msg.max_range = 42761U;
    msg.bits_per_point = 78U;
    msg.scale_factor = 0.3438115812476832;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.8314472166167559;
    tmp_msg_0.beam_height = 0.8890313102154052;
    msg.beam_config.push_back(tmp_msg_0);
    const signed char tmp_msg_1[] = {10, 44, 115, -81, -105, 57, 7, 121, 117, -7, -28, -71, 104, -7, 1, 48, -24, 26, -18, -13, -121, -106, 112, -28, -83, 1, -24, 31, 44, 13, -18, -102, -18, 36, 123, 109, 57, -28, 82, 14, -89, -17, 79, 18, 24, -65, -97, 24, 49, -109, -20, 86, 16, 120, -60, -78, 34, -41, -63, -88, -21, -37, 125, -49, -18, -26, -56, -40, -59, -39, 43, -108, 21, -57, 3, -11, -55, -11, -91, 80, -39, -41, 99, 31, -20, -116, -126, -15, 7, 16, -114, -61, -50, -107, 69, 67, 24, 107, -88, 111, -72, 111, -114, 102, -123, -63, -35, 8, 103, 121, -22, 122, -68, 38, -6, -35, -95, 79, -114, 100, 35, 76, -22, 85, -44, -89, -20, -99, -97, -97, -48, 52, 52, 17, 123, 79, 90, 61, -80, 43, -68, 68, -6, -12, -101, 113, -106, -88, 27, -105, 57, 43, 32, 85, 94, 123, 29, -50, 62, 96, -39, -1, -103, -121, 87, 52, -80, -108, -47, -34, 92, 26, 124, -13, 117, -26, -41, 64, 79, 6, 58, -56, -34, -98, -24, -6, 43, -59, 95, 114, 109, -3, 78, 23, -54, -29, -101, -46, -98, 36, -37, 41, 50, 83, -32, 121, 31, -90, -15, -104, -73, -57, -7, 93, -58, -86, -82, 20, 101, 19, 8, -91, 25, -84, -100, -49, 87, -121, -34, -74, 101, 89, 124, 117, 49, 2, -72, -42, -23, -121, -82, 81, 90, 3, -28, 77, 65};
    msg.data.assign(tmp_msg_1, tmp_msg_1 + sizeof(tmp_msg_1));

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
    msg.setTimeStamp(0.6715850514138617);
    msg.setSource(8846U);
    msg.setSourceEntity(79U);
    msg.setDestination(8220U);
    msg.setDestinationEntity(102U);
    msg.type = 206U;
    msg.frequency = 569087974U;
    msg.min_range = 20971U;
    msg.max_range = 15501U;
    msg.bits_per_point = 159U;
    msg.scale_factor = 0.3982246353237061;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.26230269828554353;
    tmp_msg_0.beam_height = 0.051854086144792255;
    msg.beam_config.push_back(tmp_msg_0);
    const signed char tmp_msg_1[] = {52, -57, 32, -36, 91, -22, -34, -10, -80, -65, 50, 33, -59, -125, 57, 83, -94, 117, 111, -8, -64, -3, 41, -8, -25, 52, -25, -20, -16, -65, -11, 102, 118, -128, 41, 45, -50, -86, 39, 18, -8, 27, 59, -36, 48, -28, -49, 59, -18, 19, 55, -117, 42, -50, 15, -3, 110, 5, 27, 95, -57, 30, 70, -84, 123, 36, 108, -120, -124, -91, -90, 0, 101, -7, -67, 113, 125, -87, -50, -43, -54, 78, -32, 69, 5, -11, -22, -62, -40, 93, 29, 66, -18, -103, -8, -71, -94, 87, -58, 4, -95, -125, 40, -94, -59, 83, 48, 58, 15, -21, -24, 29, 20, 63, 40, -16, -50, 110, 124, -85, -21, -110, 28, -24, -20, -4, 114, -64, 27, 20, 9, -107, -92, 72, 4, -93, -97, -70, -78, -127, 45};
    msg.data.assign(tmp_msg_1, tmp_msg_1 + sizeof(tmp_msg_1));

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
    msg.setTimeStamp(0.7578094965390139);
    msg.setSource(36434U);
    msg.setSourceEntity(37U);
    msg.setDestination(28366U);
    msg.setDestinationEntity(182U);

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
    msg.setTimeStamp(0.6154137612789993);
    msg.setSource(30482U);
    msg.setSourceEntity(69U);
    msg.setDestination(31489U);
    msg.setDestinationEntity(93U);

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
    msg.setTimeStamp(0.8939566137244248);
    msg.setSource(55808U);
    msg.setSourceEntity(207U);
    msg.setDestination(28330U);
    msg.setDestinationEntity(195U);

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
    msg.setTimeStamp(0.8180931754349712);
    msg.setSource(52408U);
    msg.setSourceEntity(63U);
    msg.setDestination(21539U);
    msg.setDestinationEntity(0U);
    msg.op = 39U;

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
    msg.setTimeStamp(0.6979249491501427);
    msg.setSource(14299U);
    msg.setSourceEntity(190U);
    msg.setDestination(34550U);
    msg.setDestinationEntity(40U);
    msg.op = 92U;

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
    msg.setTimeStamp(0.4634025916509332);
    msg.setSource(22378U);
    msg.setSourceEntity(251U);
    msg.setDestination(3031U);
    msg.setDestinationEntity(205U);
    msg.op = 9U;

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
    msg.setTimeStamp(0.7354461757978049);
    msg.setSource(36391U);
    msg.setSourceEntity(234U);
    msg.setDestination(20043U);
    msg.setDestinationEntity(61U);
    msg.value = 0.7384148761269547;
    msg.confidence = 0.6068870706249416;
    msg.opmodes.assign("ZCARXWNDBMQUYPHAKTBUUSIZCUFF");

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
    msg.setTimeStamp(0.9145474558482329);
    msg.setSource(19040U);
    msg.setSourceEntity(243U);
    msg.setDestination(395U);
    msg.setDestinationEntity(196U);
    msg.value = 0.5161882266414675;
    msg.confidence = 0.5926959785350601;
    msg.opmodes.assign("YWGZKCHEJUNZGMXWSJOHKFJNKFWJAKYVJCDYDRCRRMTDZIHCOJJVOTZJGTEOPMIZWTSPQGISYSBIYLMNBSVCBCVMQBUPYZINGFHROVAHVUK");

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
    msg.setTimeStamp(0.33473508155410703);
    msg.setSource(23196U);
    msg.setSourceEntity(243U);
    msg.setDestination(49911U);
    msg.setDestinationEntity(239U);
    msg.value = 0.13956074142132158;
    msg.confidence = 0.09457641137970785;
    msg.opmodes.assign("YKXEMQVOLTTWJOLBAYAOSXRWHKIQNILAZSJWAHAQPQWYLTDPCTWMXCRCKYJMVJGGBBRLMENEDIVDOLPIEBFDXYCRTOOFSOOVVMNGFHLSCWQUESGGGJRTJQPNRWCBHKZRLBMPRHDKAZZFNNIRQDILFSNEWEOBKHKZDCAKYTLTBMBSHJUSAXTCOZXHFYGTIZPMFEYVZSXKXYIMEQFXZPBUNSIDDQVFJW");

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
    msg.setTimeStamp(0.37648284911917596);
    msg.setSource(28835U);
    msg.setSourceEntity(33U);
    msg.setDestination(57908U);
    msg.setDestinationEntity(141U);
    msg.itow = 764002579U;
    msg.lat = 0.1076867926992705;
    msg.lon = 0.9250608955794304;
    msg.height_ell = 0.2484252284037427;
    msg.height_sea = 0.5684920231827508;
    msg.hacc = 0.9130599537484629;
    msg.vacc = 0.08134914049171027;
    msg.vel_n = 0.8042647697897337;
    msg.vel_e = 0.45119310447025873;
    msg.vel_d = 0.27174217026108516;
    msg.speed = 0.6595194040484313;
    msg.gspeed = 0.011636176869641024;
    msg.heading = 0.05951880108064245;
    msg.sacc = 0.16884398477730123;
    msg.cacc = 0.28378042341734655;

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
    msg.setTimeStamp(0.03225060589837836);
    msg.setSource(24309U);
    msg.setSourceEntity(138U);
    msg.setDestination(27634U);
    msg.setDestinationEntity(209U);
    msg.itow = 3174348178U;
    msg.lat = 0.2042646088419513;
    msg.lon = 0.26374889655414646;
    msg.height_ell = 0.932807160799887;
    msg.height_sea = 0.0016141665009874462;
    msg.hacc = 0.10790156126573913;
    msg.vacc = 0.03783236538738577;
    msg.vel_n = 0.7455080134387586;
    msg.vel_e = 0.7473344509945905;
    msg.vel_d = 0.28550577747821904;
    msg.speed = 0.23298112551880357;
    msg.gspeed = 0.8207996216538034;
    msg.heading = 0.17378640340720575;
    msg.sacc = 0.5314811268854699;
    msg.cacc = 0.046767962956120734;

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
    msg.setTimeStamp(0.948402999522297);
    msg.setSource(54327U);
    msg.setSourceEntity(186U);
    msg.setDestination(39572U);
    msg.setDestinationEntity(89U);
    msg.itow = 2093118605U;
    msg.lat = 0.40356730912908445;
    msg.lon = 0.720056512998129;
    msg.height_ell = 0.11036775188107817;
    msg.height_sea = 0.09143614698224445;
    msg.hacc = 0.29769850681243415;
    msg.vacc = 0.9375000232521925;
    msg.vel_n = 0.3392047830348428;
    msg.vel_e = 0.7653399288112468;
    msg.vel_d = 0.43866914629647646;
    msg.speed = 0.4088091555255672;
    msg.gspeed = 0.5851426083462192;
    msg.heading = 0.8170401604889811;
    msg.sacc = 0.6004476854554891;
    msg.cacc = 0.6244418675039488;

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
    msg.setTimeStamp(0.413943257367676);
    msg.setSource(9169U);
    msg.setSourceEntity(79U);
    msg.setDestination(55198U);
    msg.setDestinationEntity(226U);
    msg.id = 218U;
    msg.value = 0.3093031750784644;

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
    msg.setTimeStamp(0.5235997104842953);
    msg.setSource(11075U);
    msg.setSourceEntity(122U);
    msg.setDestination(64105U);
    msg.setDestinationEntity(58U);
    msg.id = 0U;
    msg.value = 0.27693510493111684;

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
    msg.setTimeStamp(0.9603770741202394);
    msg.setSource(26958U);
    msg.setSourceEntity(85U);
    msg.setDestination(2487U);
    msg.setDestinationEntity(40U);
    msg.id = 199U;
    msg.value = 0.6309929377982897;

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
    msg.setTimeStamp(0.3370190609643803);
    msg.setSource(3667U);
    msg.setSourceEntity(199U);
    msg.setDestination(722U);
    msg.setDestinationEntity(172U);
    msg.x = 0.8662493257323551;
    msg.y = 0.14351671790126896;
    msg.z = 0.7864730670336426;
    msg.phi = 0.7938037460919345;
    msg.theta = 0.10701597598934609;
    msg.psi = 0.2810246051732771;

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
    msg.setTimeStamp(0.2741425627595131);
    msg.setSource(59768U);
    msg.setSourceEntity(235U);
    msg.setDestination(11292U);
    msg.setDestinationEntity(191U);
    msg.x = 0.7087444687506677;
    msg.y = 0.5080506890206504;
    msg.z = 0.7713745670010258;
    msg.phi = 0.3704424261073165;
    msg.theta = 0.6097361904801455;
    msg.psi = 0.7677346738902472;

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
    msg.setTimeStamp(0.3877370594265239);
    msg.setSource(54668U);
    msg.setSourceEntity(174U);
    msg.setDestination(52619U);
    msg.setDestinationEntity(226U);
    msg.x = 0.5359101638217102;
    msg.y = 0.08351886388197105;
    msg.z = 0.7656431560464656;
    msg.phi = 0.8889918127152954;
    msg.theta = 0.7662506848419613;
    msg.psi = 0.57477430725189;

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
    msg.setTimeStamp(0.02141220242323727);
    msg.setSource(14635U);
    msg.setSourceEntity(81U);
    msg.setDestination(48993U);
    msg.setDestinationEntity(56U);
    msg.beam_width = 0.2976636346383339;
    msg.beam_height = 0.6379834333925377;

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
    msg.setTimeStamp(0.2864012018183144);
    msg.setSource(49439U);
    msg.setSourceEntity(5U);
    msg.setDestination(20425U);
    msg.setDestinationEntity(100U);
    msg.beam_width = 0.7096424832583322;
    msg.beam_height = 0.3988865124708696;

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
    msg.setTimeStamp(0.5271327370682274);
    msg.setSource(17957U);
    msg.setSourceEntity(2U);
    msg.setDestination(29653U);
    msg.setDestinationEntity(33U);
    msg.beam_width = 0.492736878413384;
    msg.beam_height = 0.10782905788912356;

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
    msg.setTimeStamp(0.8889813480488964);
    msg.setSource(23127U);
    msg.setSourceEntity(95U);
    msg.setDestination(199U);
    msg.setDestinationEntity(238U);
    msg.sane = 210U;

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
    msg.setTimeStamp(0.7786310021577764);
    msg.setSource(51417U);
    msg.setSourceEntity(10U);
    msg.setDestination(24576U);
    msg.setDestinationEntity(110U);
    msg.sane = 207U;

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
    msg.setTimeStamp(0.6833143650727658);
    msg.setSource(36463U);
    msg.setSourceEntity(24U);
    msg.setDestination(7173U);
    msg.setDestinationEntity(107U);
    msg.sane = 244U;

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
    msg.setTimeStamp(0.17265747982264446);
    msg.setSource(11613U);
    msg.setSourceEntity(206U);
    msg.setDestination(56667U);
    msg.setDestinationEntity(43U);
    msg.value = 0.4304250892303071;

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
    msg.setTimeStamp(0.7484548436886045);
    msg.setSource(28484U);
    msg.setSourceEntity(123U);
    msg.setDestination(35206U);
    msg.setDestinationEntity(21U);
    msg.value = 0.6582072935491495;

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
    msg.setTimeStamp(0.4979257422965131);
    msg.setSource(23156U);
    msg.setSourceEntity(156U);
    msg.setDestination(51981U);
    msg.setDestinationEntity(18U);
    msg.value = 0.24317422399461763;

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
    msg.setTimeStamp(0.9726861312781877);
    msg.setSource(6193U);
    msg.setSourceEntity(131U);
    msg.setDestination(10538U);
    msg.setDestinationEntity(105U);
    msg.value = 0.34216765486086187;

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
    msg.setTimeStamp(0.4198372766145614);
    msg.setSource(63026U);
    msg.setSourceEntity(186U);
    msg.setDestination(62335U);
    msg.setDestinationEntity(197U);
    msg.value = 0.41976247746101514;

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
    msg.setTimeStamp(0.8495399906460136);
    msg.setSource(61215U);
    msg.setSourceEntity(108U);
    msg.setDestination(45281U);
    msg.setDestinationEntity(35U);
    msg.value = 0.221661168867882;

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
    msg.setTimeStamp(0.2647042905482433);
    msg.setSource(34400U);
    msg.setSourceEntity(180U);
    msg.setDestination(19944U);
    msg.setDestinationEntity(71U);
    msg.value = 0.4665614609237245;

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
    msg.setTimeStamp(0.33127658749234423);
    msg.setSource(41812U);
    msg.setSourceEntity(15U);
    msg.setDestination(50818U);
    msg.setDestinationEntity(27U);
    msg.value = 0.44615016697182563;

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
    msg.setTimeStamp(0.2450248369304614);
    msg.setSource(60214U);
    msg.setSourceEntity(34U);
    msg.setDestination(35701U);
    msg.setDestinationEntity(168U);
    msg.value = 0.15978048590589256;

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
    msg.setTimeStamp(0.5827650430945682);
    msg.setSource(30808U);
    msg.setSourceEntity(157U);
    msg.setDestination(13810U);
    msg.setDestinationEntity(168U);
    msg.value = 0.8228438142183593;

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
    msg.setTimeStamp(0.4515977852704588);
    msg.setSource(3087U);
    msg.setSourceEntity(200U);
    msg.setDestination(12137U);
    msg.setDestinationEntity(215U);
    msg.value = 0.10471211280658776;

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
    msg.setTimeStamp(0.28469839226700233);
    msg.setSource(5994U);
    msg.setSourceEntity(55U);
    msg.setDestination(45095U);
    msg.setDestinationEntity(183U);
    msg.value = 0.5829097054545388;

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
    msg.setTimeStamp(0.11935013104286185);
    msg.setSource(21750U);
    msg.setSourceEntity(194U);
    msg.setDestination(732U);
    msg.setDestinationEntity(198U);
    msg.value = 0.3982173170257346;

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
    msg.setTimeStamp(0.5545307017373526);
    msg.setSource(12005U);
    msg.setSourceEntity(161U);
    msg.setDestination(59796U);
    msg.setDestinationEntity(34U);
    msg.value = 0.7146923896073952;

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
    msg.setTimeStamp(0.16065007450968982);
    msg.setSource(55131U);
    msg.setSourceEntity(58U);
    msg.setDestination(34612U);
    msg.setDestinationEntity(117U);
    msg.value = 0.9015021283506958;

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
    msg.setTimeStamp(0.6632575794374463);
    msg.setSource(49309U);
    msg.setSourceEntity(15U);
    msg.setDestination(12266U);
    msg.setDestinationEntity(9U);
    msg.value = 0.2668037876633904;

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
    msg.setTimeStamp(0.44178370308565107);
    msg.setSource(62278U);
    msg.setSourceEntity(110U);
    msg.setDestination(47760U);
    msg.setDestinationEntity(123U);
    msg.value = 0.29243291817652795;

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
    msg.setTimeStamp(0.9583780534309747);
    msg.setSource(37413U);
    msg.setSourceEntity(130U);
    msg.setDestination(2647U);
    msg.setDestinationEntity(186U);
    msg.value = 0.14468067048520605;

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
    msg.setTimeStamp(0.9843380817401014);
    msg.setSource(48685U);
    msg.setSourceEntity(62U);
    msg.setDestination(7058U);
    msg.setDestinationEntity(254U);
    msg.value = 0.8635259717401268;

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
    msg.setTimeStamp(0.3015554143803929);
    msg.setSource(24684U);
    msg.setSourceEntity(212U);
    msg.setDestination(18579U);
    msg.setDestinationEntity(88U);
    msg.value = 0.7939429785294492;

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
    msg.setTimeStamp(0.5400958293755358);
    msg.setSource(28189U);
    msg.setSourceEntity(32U);
    msg.setDestination(25255U);
    msg.setDestinationEntity(218U);
    msg.value = 0.3408866913984383;

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
    msg.setTimeStamp(0.5309082818096185);
    msg.setSource(11901U);
    msg.setSourceEntity(106U);
    msg.setDestination(6553U);
    msg.setDestinationEntity(9U);
    msg.value = 0.8875540103335731;

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
    msg.setTimeStamp(0.6032077975533379);
    msg.setSource(40758U);
    msg.setSourceEntity(19U);
    msg.setDestination(37216U);
    msg.setDestinationEntity(134U);
    msg.value = 0.8540835955938952;

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
    msg.setTimeStamp(0.7529299567093493);
    msg.setSource(60499U);
    msg.setSourceEntity(121U);
    msg.setDestination(14489U);
    msg.setDestinationEntity(46U);
    msg.value = 0.2654680079376669;

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
    msg.setTimeStamp(0.18093162660119544);
    msg.setSource(64230U);
    msg.setSourceEntity(182U);
    msg.setDestination(32143U);
    msg.setDestinationEntity(223U);
    msg.validity = 52127U;
    msg.type = 154U;
    msg.tow = 2031511919U;
    msg.base_lat = 0.566277655487879;
    msg.base_lon = 0.6313794935578172;
    msg.base_height = 0.256462665436498;
    msg.n = 0.881975396902869;
    msg.e = 0.3578224973999261;
    msg.d = 0.18610221225280066;
    msg.v_n = 0.5223588983089918;
    msg.v_e = 0.9045998184478027;
    msg.v_d = 0.8651971852309717;
    msg.satellites = 187U;
    msg.iar_hyp = 61U;
    msg.iar_ratio = 0.8334534501055031;

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
    msg.setTimeStamp(0.255674692850685);
    msg.setSource(17352U);
    msg.setSourceEntity(173U);
    msg.setDestination(11437U);
    msg.setDestinationEntity(9U);
    msg.validity = 13317U;
    msg.type = 88U;
    msg.tow = 3066774404U;
    msg.base_lat = 0.5999920296515667;
    msg.base_lon = 0.08826364401733411;
    msg.base_height = 0.36487073524540214;
    msg.n = 0.361042587060192;
    msg.e = 0.7732849333779057;
    msg.d = 0.3068167151650749;
    msg.v_n = 0.8528296033200927;
    msg.v_e = 0.15757960613600308;
    msg.v_d = 0.009120482406857588;
    msg.satellites = 29U;
    msg.iar_hyp = 20024U;
    msg.iar_ratio = 0.8311104008582464;

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
    msg.setTimeStamp(0.4323395614147265);
    msg.setSource(12025U);
    msg.setSourceEntity(190U);
    msg.setDestination(12731U);
    msg.setDestinationEntity(192U);
    msg.validity = 34451U;
    msg.type = 207U;
    msg.tow = 1016073702U;
    msg.base_lat = 0.5325962527824577;
    msg.base_lon = 0.5751156012675125;
    msg.base_height = 0.551531419912939;
    msg.n = 0.48813799517850454;
    msg.e = 0.8437361065999215;
    msg.d = 0.7779195805807058;
    msg.v_n = 0.5180959493287219;
    msg.v_e = 0.9244854513743711;
    msg.v_d = 0.39099064569824926;
    msg.satellites = 21U;
    msg.iar_hyp = 51125U;
    msg.iar_ratio = 0.5900850674042077;

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
    msg.setTimeStamp(0.8197035868380828);
    msg.setSource(4275U);
    msg.setSourceEntity(166U);
    msg.setDestination(23957U);
    msg.setDestinationEntity(72U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.6329188341163625;
    tmp_msg_0.lon = 0.25015562374827505;
    tmp_msg_0.height = 0.28277725943270327;
    tmp_msg_0.x = 0.9807738375798891;
    tmp_msg_0.y = 0.6376934834805466;
    tmp_msg_0.z = 0.05773962159150847;
    tmp_msg_0.phi = 0.18380609095571654;
    tmp_msg_0.theta = 0.3213141681508318;
    tmp_msg_0.psi = 0.11546728715626131;
    tmp_msg_0.u = 0.19751175392690856;
    tmp_msg_0.v = 0.3407551382479759;
    tmp_msg_0.w = 0.5214657586041848;
    tmp_msg_0.vx = 0.17840376404121439;
    tmp_msg_0.vy = 0.5459573684321387;
    tmp_msg_0.vz = 0.4863527200742708;
    tmp_msg_0.p = 0.2841138092351424;
    tmp_msg_0.q = 0.617167052224521;
    tmp_msg_0.r = 0.3911243081081258;
    tmp_msg_0.depth = 0.6124555205684348;
    tmp_msg_0.alt = 0.38890127053610346;
    msg.state.set(tmp_msg_0);
    msg.type = 26U;

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
    msg.setTimeStamp(0.17606910617328952);
    msg.setSource(9950U);
    msg.setSourceEntity(217U);
    msg.setDestination(59899U);
    msg.setDestinationEntity(31U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.5934237048960117;
    tmp_msg_0.lon = 0.08626770922274374;
    tmp_msg_0.height = 0.9702218721482692;
    tmp_msg_0.x = 0.3716660603509656;
    tmp_msg_0.y = 0.21882789701778127;
    tmp_msg_0.z = 0.46332512610834664;
    tmp_msg_0.phi = 0.7923623240759854;
    tmp_msg_0.theta = 0.8164264215850813;
    tmp_msg_0.psi = 0.9055116131130844;
    tmp_msg_0.u = 0.08762904985810605;
    tmp_msg_0.v = 0.5356501000605542;
    tmp_msg_0.w = 0.8625591728836682;
    tmp_msg_0.vx = 0.12980211339912961;
    tmp_msg_0.vy = 0.40332994163157454;
    tmp_msg_0.vz = 0.9570980357141999;
    tmp_msg_0.p = 0.3487139184055674;
    tmp_msg_0.q = 0.972415589923589;
    tmp_msg_0.r = 0.7944304198815308;
    tmp_msg_0.depth = 0.6592009889384882;
    tmp_msg_0.alt = 0.4277191362937339;
    msg.state.set(tmp_msg_0);
    msg.type = 116U;

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
    msg.setTimeStamp(0.18441165471918475);
    msg.setSource(26112U);
    msg.setSourceEntity(28U);
    msg.setDestination(37900U);
    msg.setDestinationEntity(236U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.2191532074005682;
    tmp_msg_0.lon = 0.45296055695227433;
    tmp_msg_0.height = 0.7795243815949608;
    tmp_msg_0.x = 0.6568516464310348;
    tmp_msg_0.y = 0.9327419387630007;
    tmp_msg_0.z = 0.69716631884191;
    tmp_msg_0.phi = 0.5282824003445002;
    tmp_msg_0.theta = 0.28935211910922476;
    tmp_msg_0.psi = 0.40129094659730746;
    tmp_msg_0.u = 0.9326654724938376;
    tmp_msg_0.v = 0.41835702784517215;
    tmp_msg_0.w = 0.28887480353710415;
    tmp_msg_0.vx = 0.4867870767940855;
    tmp_msg_0.vy = 0.01946248649494353;
    tmp_msg_0.vz = 0.9006780312198;
    tmp_msg_0.p = 0.5467817004220962;
    tmp_msg_0.q = 0.47352848706769;
    tmp_msg_0.r = 0.012116078750616488;
    tmp_msg_0.depth = 0.12748456281720777;
    tmp_msg_0.alt = 0.0014187553364134464;
    msg.state.set(tmp_msg_0);
    msg.type = 100U;

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
    msg.setTimeStamp(0.8480026112783574);
    msg.setSource(23412U);
    msg.setSourceEntity(26U);
    msg.setDestination(14668U);
    msg.setDestinationEntity(122U);
    msg.value = 0.9280198525269219;

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
    msg.setTimeStamp(0.4970775655802756);
    msg.setSource(37414U);
    msg.setSourceEntity(218U);
    msg.setDestination(15483U);
    msg.setDestinationEntity(237U);
    msg.value = 0.32650842090155174;

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
    msg.setTimeStamp(0.3957331249588336);
    msg.setSource(54070U);
    msg.setSourceEntity(182U);
    msg.setDestination(30046U);
    msg.setDestinationEntity(116U);
    msg.value = 0.5346822670528764;

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
    msg.setTimeStamp(0.2608198870309436);
    msg.setSource(63888U);
    msg.setSourceEntity(180U);
    msg.setDestination(6143U);
    msg.setDestinationEntity(14U);
    msg.value = 0.07292055738205938;

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
    msg.setTimeStamp(0.7695617095400876);
    msg.setSource(47164U);
    msg.setSourceEntity(85U);
    msg.setDestination(14117U);
    msg.setDestinationEntity(140U);
    msg.value = 0.41735955876838415;

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
    msg.setTimeStamp(0.20409638269979558);
    msg.setSource(11044U);
    msg.setSourceEntity(83U);
    msg.setDestination(7562U);
    msg.setDestinationEntity(117U);
    msg.value = 0.006265981103368956;

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
    msg.setTimeStamp(0.9011265160467683);
    msg.setSource(3070U);
    msg.setSourceEntity(228U);
    msg.setDestination(26291U);
    msg.setDestinationEntity(49U);
    msg.value = 0.9274637509474908;

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
    msg.setTimeStamp(0.743898823910722);
    msg.setSource(37603U);
    msg.setSourceEntity(207U);
    msg.setDestination(36196U);
    msg.setDestinationEntity(183U);
    msg.value = 0.3648230227931927;

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
    msg.setTimeStamp(0.9962171028924164);
    msg.setSource(15357U);
    msg.setSourceEntity(105U);
    msg.setDestination(54223U);
    msg.setDestinationEntity(183U);
    msg.value = 0.8960283389377313;

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
    msg.setTimeStamp(0.7331420709226898);
    msg.setSource(46082U);
    msg.setSourceEntity(4U);
    msg.setDestination(12551U);
    msg.setDestinationEntity(111U);
    msg.value = 0.23695667765867068;

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
    msg.setTimeStamp(0.1864955180140051);
    msg.setSource(60025U);
    msg.setSourceEntity(122U);
    msg.setDestination(49987U);
    msg.setDestinationEntity(16U);
    msg.value = 0.22584675304332702;

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
    msg.setTimeStamp(0.05672538094004009);
    msg.setSource(53926U);
    msg.setSourceEntity(6U);
    msg.setDestination(47667U);
    msg.setDestinationEntity(151U);
    msg.value = 0.17570271887607192;

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
    msg.setTimeStamp(0.16632929654194095);
    msg.setSource(43244U);
    msg.setSourceEntity(248U);
    msg.setDestination(38766U);
    msg.setDestinationEntity(117U);
    msg.value = 0.7932385813909993;

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
    msg.setTimeStamp(0.2645634401899888);
    msg.setSource(24799U);
    msg.setSourceEntity(74U);
    msg.setDestination(63282U);
    msg.setDestinationEntity(27U);
    msg.value = 0.11179083063034356;

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
    msg.setTimeStamp(0.13426556224143416);
    msg.setSource(51640U);
    msg.setSourceEntity(5U);
    msg.setDestination(49894U);
    msg.setDestinationEntity(41U);
    msg.value = 0.6948607668987401;

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
    msg.setTimeStamp(0.15198825311913056);
    msg.setSource(2415U);
    msg.setSourceEntity(55U);
    msg.setDestination(59035U);
    msg.setDestinationEntity(188U);
    msg.id = 115U;
    msg.zoom = 182U;
    msg.action = 197U;

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
    msg.setTimeStamp(0.7248376769944204);
    msg.setSource(15850U);
    msg.setSourceEntity(113U);
    msg.setDestination(64296U);
    msg.setDestinationEntity(49U);
    msg.id = 68U;
    msg.zoom = 45U;
    msg.action = 183U;

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
    msg.setTimeStamp(0.7791276883596052);
    msg.setSource(705U);
    msg.setSourceEntity(206U);
    msg.setDestination(19602U);
    msg.setDestinationEntity(210U);
    msg.id = 94U;
    msg.zoom = 130U;
    msg.action = 100U;

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
    msg.setTimeStamp(0.05931261258952081);
    msg.setSource(20984U);
    msg.setSourceEntity(192U);
    msg.setDestination(19876U);
    msg.setDestinationEntity(179U);
    msg.id = 232U;
    msg.value = 0.01022359477477297;

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
    msg.setTimeStamp(0.2936358559694606);
    msg.setSource(6690U);
    msg.setSourceEntity(86U);
    msg.setDestination(7777U);
    msg.setDestinationEntity(138U);
    msg.id = 64U;
    msg.value = 0.534183333265094;

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
    msg.setTimeStamp(0.8187201649194686);
    msg.setSource(65241U);
    msg.setSourceEntity(246U);
    msg.setDestination(31696U);
    msg.setDestinationEntity(75U);
    msg.id = 90U;
    msg.value = 0.9712049418234708;

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
    msg.setTimeStamp(0.48110274141427234);
    msg.setSource(57358U);
    msg.setSourceEntity(231U);
    msg.setDestination(1491U);
    msg.setDestinationEntity(151U);
    msg.id = 139U;
    msg.value = 0.6712938735910418;

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
    msg.setTimeStamp(0.9975199953066252);
    msg.setSource(26782U);
    msg.setSourceEntity(229U);
    msg.setDestination(50034U);
    msg.setDestinationEntity(65U);
    msg.id = 38U;
    msg.value = 0.6192002031169465;

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
    msg.setTimeStamp(0.26665458355564053);
    msg.setSource(43088U);
    msg.setSourceEntity(85U);
    msg.setDestination(55773U);
    msg.setDestinationEntity(121U);
    msg.id = 0U;
    msg.value = 0.187221531238154;

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
    msg.setTimeStamp(0.5229167514260024);
    msg.setSource(34286U);
    msg.setSourceEntity(167U);
    msg.setDestination(47204U);
    msg.setDestinationEntity(52U);
    msg.id = 88U;
    msg.angle = 0.17206389249717513;

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
    msg.setTimeStamp(0.8037028158100858);
    msg.setSource(28801U);
    msg.setSourceEntity(137U);
    msg.setDestination(50299U);
    msg.setDestinationEntity(149U);
    msg.id = 199U;
    msg.angle = 0.3273488723112772;

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
    msg.setTimeStamp(0.7604535461098613);
    msg.setSource(29973U);
    msg.setSourceEntity(77U);
    msg.setDestination(32984U);
    msg.setDestinationEntity(210U);
    msg.id = 38U;
    msg.angle = 0.7472894269026543;

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
    msg.setTimeStamp(0.9766186268643048);
    msg.setSource(17736U);
    msg.setSourceEntity(101U);
    msg.setDestination(13186U);
    msg.setDestinationEntity(56U);
    msg.op = 188U;
    msg.actions.assign("GAXRSCIDPLCCCWVGEINFEUGEQGEEPVK");

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
    msg.setTimeStamp(0.4834238983367476);
    msg.setSource(52135U);
    msg.setSourceEntity(107U);
    msg.setDestination(30392U);
    msg.setDestinationEntity(135U);
    msg.op = 127U;
    msg.actions.assign("RXHAXEZRGRNYNETVDEQFGGYCGKWBFMRFSHOGTPHZVXERYILOFVNZGLBQIWPHIJYEIDCWPUMRKHCUAUBVACGROADXQQONZZVWVURSONWLNOEYGAHMKSSUBHDSCLMPWPMCETPVKDWMCKJFTFSPLHCQAQFXNNHTUXMPLYFOONJDWBDVJUTBIXYZXBJZKBKAYDJI");

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
    msg.setTimeStamp(0.8792167616185755);
    msg.setSource(13487U);
    msg.setSourceEntity(186U);
    msg.setDestination(55386U);
    msg.setDestinationEntity(68U);
    msg.op = 73U;
    msg.actions.assign("QUKUAEQRTCEBTZOXCRJJZWTPFSDFKBDQQRJDJBWSXLMHMYDYTXTUIYEKHWKAMKLQIURVDEFRPOLGBFBLOJFDHPSDKMWWIORTGGZJZMHADRXMQIGVEOBBMPNCCVFSQCLPCRSVEGNOASIANPXVCVVZT");

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
    msg.setTimeStamp(0.07480144615601658);
    msg.setSource(19572U);
    msg.setSourceEntity(98U);
    msg.setDestination(25273U);
    msg.setDestinationEntity(65U);
    msg.actions.assign("AWCEXBMTFLIPQEXSNJDAIMLYNUXBZIIZUELMJCKWKMPPWHQJQZTUGHCYXXHJAJFEQCQWUSUUOEVFLWTOQIJZVTLJJZLTGDBRMAMSHOGEVBJGURZTSLSAIKLXDMOPPRCHKKZOLHFFVYBY");

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
    msg.setTimeStamp(0.6840286411845932);
    msg.setSource(58109U);
    msg.setSourceEntity(109U);
    msg.setDestination(27393U);
    msg.setDestinationEntity(223U);
    msg.actions.assign("HOPTOXMEUKUWZDDOSQHYRONVITTOMZNUXXJYJMKWWKCKZYKRSQEPPKTMZCFVWNBZLRXIDZGNBCCRFVZBSXEWILSJUJSMGOXFHQOBQRHQGFPSDOXVPSQDQAMWMGGPJFVR");

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
    msg.setTimeStamp(0.209246656958758);
    msg.setSource(7215U);
    msg.setSourceEntity(45U);
    msg.setDestination(39122U);
    msg.setDestinationEntity(105U);
    msg.actions.assign("OOQAPUQBTFJKPVTKPJQEBWZOGNIMKLTZRAIXWWLZEWBSTEPUNKVLLRMWWXWDNHSWVCTAOKUWSKDTSAUIYOUJERMGMQRKICCLZAIXJVOKFPHNCEDBDUFQPXHGMESYHFOUBMSCJCDQMKDLGXAQMDCAHTBFXXJRQYJTEFXEQVUCHSSHLGINRJGLDFYGPVGFC");

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
    msg.setTimeStamp(0.7500766105312073);
    msg.setSource(62075U);
    msg.setSourceEntity(164U);
    msg.setDestination(10426U);
    msg.setDestinationEntity(201U);
    msg.button = 134U;
    msg.value = 0U;

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
    msg.setTimeStamp(0.3895820760686979);
    msg.setSource(22203U);
    msg.setSourceEntity(119U);
    msg.setDestination(45559U);
    msg.setDestinationEntity(167U);
    msg.button = 65U;
    msg.value = 142U;

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
    msg.setTimeStamp(0.8557768151511315);
    msg.setSource(34205U);
    msg.setSourceEntity(159U);
    msg.setDestination(22135U);
    msg.setDestinationEntity(65U);
    msg.button = 54U;
    msg.value = 95U;

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
    msg.setTimeStamp(0.8384817074214237);
    msg.setSource(33449U);
    msg.setSourceEntity(85U);
    msg.setDestination(8875U);
    msg.setDestinationEntity(6U);
    msg.op = 175U;
    msg.text.assign("JIUTKANZOYQJZWZSGCBPRWWHHVPLDVEJMHXIRCLSDNJBGYUPIXIVUYAOJACRXFCMRGAADSUTNKDIERFQQEDXGSAVYGNKDOTTPEEKWTDIYIXPQWHOUUSZBBCTAJXRKSQSAVDGCUQLHYUIFZLGDGBPNTVMMMHBZFKWCNFJEEMYFOMJZIKRQWXFZNGHCMROWSOLWTAXONBNKYQMKZPQFOSLNREBYDVLXGUAUOTQREHMVVXWYESPTC");

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
    msg.setTimeStamp(0.15019823819841083);
    msg.setSource(9754U);
    msg.setSourceEntity(98U);
    msg.setDestination(45856U);
    msg.setDestinationEntity(44U);
    msg.op = 62U;
    msg.text.assign("KWUXEUIWUIRYDFTNHOJIMGAWXKYDVKPCQIDZUAWHFUHBRPAGCZPVGWPRIYGBYLESRCAJPSNANMJGTZDQCFETNPIM");

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
    msg.setTimeStamp(0.4106430845692377);
    msg.setSource(23455U);
    msg.setSourceEntity(28U);
    msg.setDestination(13444U);
    msg.setDestinationEntity(74U);
    msg.op = 51U;
    msg.text.assign("SJHJUWWMFFKLRHAIIARUVVQBBDENYZZKTUCTRSNWXXISCUHVYXUALJVIELPZDQFETYPPHDRRXGXLYKTQPQSWUXONFCQHMZCJQYRLAQMHTNRBDJYBUGRVIIXKJORYVFXOEPEKCC");

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
    msg.setTimeStamp(0.3656417901524611);
    msg.setSource(44245U);
    msg.setSourceEntity(16U);
    msg.setDestination(60789U);
    msg.setDestinationEntity(197U);
    msg.op = 203U;
    msg.time_remain = 0.1273366656875542;
    msg.sched_time = 0.07490590757588722;

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
    msg.setTimeStamp(0.19249793991141262);
    msg.setSource(22779U);
    msg.setSourceEntity(252U);
    msg.setDestination(46613U);
    msg.setDestinationEntity(97U);
    msg.op = 230U;
    msg.time_remain = 0.3447490823579251;
    msg.sched_time = 0.044279378292067295;

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
    msg.setTimeStamp(0.9111871603119485);
    msg.setSource(1985U);
    msg.setSourceEntity(176U);
    msg.setDestination(28372U);
    msg.setDestinationEntity(46U);
    msg.op = 73U;
    msg.time_remain = 0.1591404606378296;
    msg.sched_time = 0.6614474003398143;

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
    msg.setTimeStamp(0.3969311644618615);
    msg.setSource(40585U);
    msg.setSourceEntity(92U);
    msg.setDestination(13848U);
    msg.setDestinationEntity(229U);
    msg.name.assign("DDQZMQTGROZQWDBFGZWXAXWEPZVGBPLBFYMCHLEXAJITGNZZSCQYMZDYBVEOEVPTCKDYHWUOPLDPTSQKIQCAPIAJOJTVAETHYAKLJPICLUZBNUMMXKSSLKXVYLYUOMNHBXNGRZTAAWDJKIEXGUTGFSCOCQGCUBU");
    msg.op = 141U;
    msg.sched_time = 0.9370513651517008;

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
    msg.setTimeStamp(0.08160366922989815);
    msg.setSource(14786U);
    msg.setSourceEntity(216U);
    msg.setDestination(12013U);
    msg.setDestinationEntity(108U);
    msg.name.assign("QYEXJBYKXMLVLHLSZALUQKBWHIDTHDCKXCAGXZBVFDJRWZIFBMQAFTSEWZPPGYINHMOMPOBRYAKYOMDTDBDGHKMJGHNDISJFJZCHARCWTNQBPEPELQIKVUWXNKRJIBUOSOBTWLWHVFGWCNNTFQAZAQPLYRXCUXNCRVPNARYECSQTGQOQSAPSGEEEETZZUDLMYJZLJNXCGKOPKUVFVVVUHZFUXJTMIGPGFSUSKHBVNYIORARRDIJOWYWIST");
    msg.op = 155U;
    msg.sched_time = 0.7876410398762219;

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
    msg.setTimeStamp(0.42238146262375975);
    msg.setSource(27861U);
    msg.setSourceEntity(13U);
    msg.setDestination(49719U);
    msg.setDestinationEntity(12U);
    msg.name.assign("EGICWWEIJAVEJWRMPPGNBTYXXDXFPVLKBYNDJCTPJEOQTUWRTTONWREGXMIJUBTCQJYKTOLQALOHEAMACCKOSZPSLPSQYZJUZJMJNKGSPLOALXQKCVDHDTGIYZKWIKNBMHYGBRDFERHSRBODZLZIXUDGFRUIDGMLNUUCFWKOVNETCYHXASFBNSEBSUMPMRVPQVUBAFFWZYXFXHQYZQQGVCUHHAVD");
    msg.op = 55U;
    msg.sched_time = 0.669157843566196;

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
    msg.setTimeStamp(0.20690955330330507);
    msg.setSource(17205U);
    msg.setSourceEntity(2U);
    msg.setDestination(65165U);
    msg.setDestinationEntity(82U);

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
    msg.setTimeStamp(0.601763177722869);
    msg.setSource(56600U);
    msg.setSourceEntity(7U);
    msg.setDestination(3951U);
    msg.setDestinationEntity(23U);

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
    msg.setTimeStamp(0.8444438982838038);
    msg.setSource(27268U);
    msg.setSourceEntity(180U);
    msg.setDestination(60096U);
    msg.setDestinationEntity(72U);

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
    msg.setTimeStamp(0.6760186929236969);
    msg.setSource(22132U);
    msg.setSourceEntity(133U);
    msg.setDestination(14164U);
    msg.setDestinationEntity(215U);
    msg.name.assign("BAPTLEVELDKVTMFDZAOQQMQYHTGRGHWPOJBZGSBOVNJFWCIDSJYNTXGPZPBAEEYLEPHEHKGBXWDBKTMNCYBKFUJIJIIMQYRGUIONIVYZBXEVF");
    msg.state = 0U;

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
    msg.setTimeStamp(0.9320019552080913);
    msg.setSource(57896U);
    msg.setSourceEntity(186U);
    msg.setDestination(36432U);
    msg.setDestinationEntity(245U);
    msg.name.assign("NCYAWHHZQBMPVWZQVNYPIEYIHBLPZREDPUPDWKVDWGGIXFLFERLFMCSVGMTYRFOODTJAYJOMKVKIULELSPTRAGPHZCINJTZAFDEYCKNGEFIYMHQOPYXKZBYOIBZEMCPLKHMJNROXHNDKUHCQEQUMDROJBNPNVUTXHXLXWZDOJFGLASIJSWTDCVSJEESTGGVHOXMRTZUASCAIQNIJZKCUBMXRDANLUW");
    msg.state = 93U;

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
    msg.setTimeStamp(0.24159901780006443);
    msg.setSource(51558U);
    msg.setSourceEntity(228U);
    msg.setDestination(876U);
    msg.setDestinationEntity(58U);
    msg.name.assign("CLQQIEWHZJDCBRZBSCTAEDVHYMFIUFANWOEWMHQEVGIRCCZJRSUOKUAEKJAEEBXVNTPOKCJLAWFDHOKKUIWQHAVTUTPGVNJTRRFLQKKSWZONGKJALUNRRTOPLKJMBLXRYSYBJOTNGDXGZH");
    msg.state = 217U;

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
    msg.setTimeStamp(0.031231139703753574);
    msg.setSource(20229U);
    msg.setSourceEntity(168U);
    msg.setDestination(47170U);
    msg.setDestinationEntity(152U);
    msg.name.assign("KNVPDUPQWVXGJMTIKKOCUDBSWLXSMJJYJAEJRDVGUEIYTLLXQAEAHKPNRCNAMIGWUSJBWOEBHDXSHZTNSLQLLTNMWUFWOTRVWZBBTDXUXZVQNGYYYPKOZFJCLZNZIPICOPDOTFDBCKRRHREKQFDTAIMQMSOHGHHANJEVBRLPGSFVGSODOZECFCAPMIXZFAHAWPYZRVMKCYUZKNGMOQMVGLYF");
    msg.value = 233U;

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
    msg.setTimeStamp(0.8638681588215578);
    msg.setSource(41551U);
    msg.setSourceEntity(197U);
    msg.setDestination(15589U);
    msg.setDestinationEntity(222U);
    msg.name.assign("ZKHHHNRDIDCYZMVAKBEAAVIQPVOZPJGQVRRFOOSEVPBSATWBHCPGKTLTOUSXKPKEJULWN");
    msg.value = 106U;

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
    msg.setTimeStamp(0.05205235463220559);
    msg.setSource(23490U);
    msg.setSourceEntity(16U);
    msg.setDestination(19970U);
    msg.setDestinationEntity(22U);
    msg.name.assign("FKHQYAEBQXMGBHUBQHDMIWZPTNPRJWUQSYLFMSOFIQXOGKGIRGKMJLNXCYUDMTUTTBHKVNJYTGROZOPIJACQJVULPZAEFSRMHJVFWICAASWZXTZLGFCRKLENWKNJMAAIXKDXHLZLZODWESYUKZUCIJNOXUFHDCNL");
    msg.value = 54U;

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
    msg.setTimeStamp(0.3791753223542227);
    msg.setSource(25855U);
    msg.setSourceEntity(184U);
    msg.setDestination(45377U);
    msg.setDestinationEntity(206U);
    msg.name.assign("WIWUDPRSXGXSBXOSZEEGTOVQKCKEY");

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
    msg.setTimeStamp(0.0960991954243704);
    msg.setSource(62288U);
    msg.setSourceEntity(168U);
    msg.setDestination(49794U);
    msg.setDestinationEntity(252U);
    msg.name.assign("GJEYNOXLYZKHXZJQFICLAXDCRRDHRINNVRSDCBOEYDNXVRGLEHMKC");

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
    msg.setTimeStamp(0.6917389331235652);
    msg.setSource(3639U);
    msg.setSourceEntity(140U);
    msg.setDestination(12762U);
    msg.setDestinationEntity(221U);
    msg.name.assign("CKXLPXCUXTIKUJDNJDWBNGSEWZGSUCTDPYYCCQEBKCUAFIYFQZQPGZEJOZNVTZHEVYNRAPOMJPOJFGGWCRDEYHLVDAXMNAQTGSUUPUTIMRXHWIBDJIYQWWYEOPMHNAJILFWABERMRFZSLULEOKTFLLDWMABVLZOTPDVFSVQRXUNOGGTASAHSEFSXKJYMCLIFZMPHRN");

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
    msg.setTimeStamp(0.5500713826070842);
    msg.setSource(61574U);
    msg.setSourceEntity(237U);
    msg.setDestination(55756U);
    msg.setDestinationEntity(86U);
    msg.name.assign("ESGSSLNXQOJAYCF");
    msg.value = 156U;

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
    msg.setTimeStamp(0.6673956048336402);
    msg.setSource(6355U);
    msg.setSourceEntity(128U);
    msg.setDestination(1381U);
    msg.setDestinationEntity(66U);
    msg.name.assign("OBLYJMUHDAXVKHHIGVJTHZNIMOROWYJOGHPOATXTQNASRMQCHGIWWPCGRIADDOKVFBOLCRJEQFRVESFJWKLCMZUZVEPJDCDQWWDQYLNYHPXJAUZDLENSBZKZLFASASOPQNTRBL");
    msg.value = 19U;

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
    msg.setTimeStamp(0.10706427075592928);
    msg.setSource(61197U);
    msg.setSourceEntity(167U);
    msg.setDestination(21179U);
    msg.setDestinationEntity(41U);
    msg.name.assign("TXJSFOWWFLULRHZMJKTOKNIJMLDEYEAKBCIZWLIPPDLTURKEQMCCITOGLUX");
    msg.value = 185U;

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
    msg.setTimeStamp(0.6881578007657773);
    msg.setSource(50301U);
    msg.setSourceEntity(48U);
    msg.setDestination(48818U);
    msg.setDestinationEntity(74U);
    msg.id = 158U;
    msg.period = 793664254U;
    msg.duty_cycle = 4161234517U;

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
    msg.setTimeStamp(0.3900165304460126);
    msg.setSource(39469U);
    msg.setSourceEntity(47U);
    msg.setDestination(53513U);
    msg.setDestinationEntity(97U);
    msg.id = 95U;
    msg.period = 1484703501U;
    msg.duty_cycle = 1906461610U;

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
    msg.setTimeStamp(0.3269968203212815);
    msg.setSource(53628U);
    msg.setSourceEntity(16U);
    msg.setDestination(17267U);
    msg.setDestinationEntity(63U);
    msg.id = 45U;
    msg.period = 3251907121U;
    msg.duty_cycle = 1103410097U;

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
    msg.setTimeStamp(0.19329425373348896);
    msg.setSource(12523U);
    msg.setSourceEntity(0U);
    msg.setDestination(50328U);
    msg.setDestinationEntity(219U);
    msg.id = 201U;
    msg.period = 663160977U;
    msg.duty_cycle = 3721043862U;

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
    msg.setTimeStamp(0.4774856839385354);
    msg.setSource(48946U);
    msg.setSourceEntity(196U);
    msg.setDestination(43751U);
    msg.setDestinationEntity(236U);
    msg.id = 69U;
    msg.period = 2925499725U;
    msg.duty_cycle = 2609265619U;

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
    msg.setTimeStamp(0.6277730489428811);
    msg.setSource(53211U);
    msg.setSourceEntity(148U);
    msg.setDestination(63602U);
    msg.setDestinationEntity(215U);
    msg.id = 131U;
    msg.period = 1539836720U;
    msg.duty_cycle = 4158135060U;

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
    msg.setTimeStamp(0.2954562812565662);
    msg.setSource(61358U);
    msg.setSourceEntity(218U);
    msg.setDestination(24716U);
    msg.setDestinationEntity(44U);
    msg.lat = 0.517645441594315;
    msg.lon = 0.44800953326942927;
    msg.height = 0.5220888640258652;
    msg.x = 0.8479796305077978;
    msg.y = 0.7152132154662156;
    msg.z = 0.9947524527589677;
    msg.phi = 0.7482136570935981;
    msg.theta = 0.3560670026449061;
    msg.psi = 0.21408409214914392;
    msg.u = 0.5196464803351956;
    msg.v = 0.7953705863695953;
    msg.w = 0.868340693296346;
    msg.vx = 0.5604872417826884;
    msg.vy = 0.32847140201953984;
    msg.vz = 0.9504468177066595;
    msg.p = 0.019577808806489738;
    msg.q = 0.05767448241803541;
    msg.r = 0.4426827406630668;
    msg.depth = 0.12786462167694712;
    msg.alt = 0.8815660096438414;

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
    msg.setTimeStamp(0.8633637349330098);
    msg.setSource(49834U);
    msg.setSourceEntity(158U);
    msg.setDestination(1255U);
    msg.setDestinationEntity(9U);
    msg.lat = 0.2561527666831773;
    msg.lon = 0.6334467295822868;
    msg.height = 0.04656633175589342;
    msg.x = 0.21391354995059197;
    msg.y = 0.2968573103062957;
    msg.z = 0.013392760045093377;
    msg.phi = 0.29162980375941816;
    msg.theta = 0.06982333946159491;
    msg.psi = 0.7087173153642053;
    msg.u = 0.4243217633910481;
    msg.v = 0.42663360435289177;
    msg.w = 0.8553582925110154;
    msg.vx = 0.13978206837265228;
    msg.vy = 0.11813438094101258;
    msg.vz = 0.45040986030571317;
    msg.p = 0.7962996579303686;
    msg.q = 0.36531050744848237;
    msg.r = 0.21354409939646002;
    msg.depth = 0.689313513542134;
    msg.alt = 0.3527071182679411;

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
    msg.setTimeStamp(0.6214927398823166);
    msg.setSource(12887U);
    msg.setSourceEntity(155U);
    msg.setDestination(53414U);
    msg.setDestinationEntity(82U);
    msg.lat = 0.006621434716699959;
    msg.lon = 0.3794278122719966;
    msg.height = 0.7160746352624014;
    msg.x = 0.429834721224309;
    msg.y = 0.47878468617258285;
    msg.z = 0.3038527861039222;
    msg.phi = 0.4550073959810349;
    msg.theta = 0.844194564133588;
    msg.psi = 0.6547437142346719;
    msg.u = 0.03036336497919223;
    msg.v = 0.18302308460784877;
    msg.w = 0.9646809038465766;
    msg.vx = 0.16790733023719917;
    msg.vy = 0.2919900243157111;
    msg.vz = 0.3891111921906988;
    msg.p = 0.4728529036382867;
    msg.q = 0.4092882357877191;
    msg.r = 0.09142298413931971;
    msg.depth = 0.6819989215391021;
    msg.alt = 0.8768109064871917;

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
    msg.setTimeStamp(0.3254670072122563);
    msg.setSource(36003U);
    msg.setSourceEntity(45U);
    msg.setDestination(28080U);
    msg.setDestinationEntity(201U);
    msg.x = 0.9164754836403882;
    msg.y = 0.5346980654821727;
    msg.z = 0.6677512903010087;

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
    msg.setTimeStamp(0.7623675631752008);
    msg.setSource(48794U);
    msg.setSourceEntity(37U);
    msg.setDestination(53590U);
    msg.setDestinationEntity(116U);
    msg.x = 0.21686622175821646;
    msg.y = 0.8859262627193517;
    msg.z = 0.22644396566992808;

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
    msg.setTimeStamp(0.3379934218423112);
    msg.setSource(18255U);
    msg.setSourceEntity(60U);
    msg.setDestination(54332U);
    msg.setDestinationEntity(40U);
    msg.x = 0.0976644410077413;
    msg.y = 0.37644213143208016;
    msg.z = 0.7823038863082762;

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
    msg.setTimeStamp(0.7947742651583466);
    msg.setSource(45107U);
    msg.setSourceEntity(184U);
    msg.setDestination(59876U);
    msg.setDestinationEntity(57U);
    msg.value = 0.661802591578459;

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
    msg.setTimeStamp(0.4310987182678553);
    msg.setSource(13924U);
    msg.setSourceEntity(154U);
    msg.setDestination(54390U);
    msg.setDestinationEntity(13U);
    msg.value = 0.6681437874425736;

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
    msg.setTimeStamp(0.913572765893934);
    msg.setSource(2723U);
    msg.setSourceEntity(76U);
    msg.setDestination(10404U);
    msg.setDestinationEntity(56U);
    msg.value = 0.3227712434451082;

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
    msg.setTimeStamp(0.8360433876293311);
    msg.setSource(47281U);
    msg.setSourceEntity(19U);
    msg.setDestination(38737U);
    msg.setDestinationEntity(73U);
    msg.value = 0.026348601944011563;

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
    msg.setTimeStamp(0.9433521199638216);
    msg.setSource(57515U);
    msg.setSourceEntity(132U);
    msg.setDestination(37634U);
    msg.setDestinationEntity(92U);
    msg.value = 0.9977442219207977;

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
    msg.setTimeStamp(0.8268592647106793);
    msg.setSource(48839U);
    msg.setSourceEntity(179U);
    msg.setDestination(26966U);
    msg.setDestinationEntity(226U);
    msg.value = 0.7314526311846421;

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
    msg.setTimeStamp(0.2520981972091618);
    msg.setSource(57574U);
    msg.setSourceEntity(214U);
    msg.setDestination(30677U);
    msg.setDestinationEntity(203U);
    msg.x = 0.8549881966440837;
    msg.y = 0.9065257669754788;
    msg.z = 0.8967129463929169;
    msg.phi = 0.49192565243990793;
    msg.theta = 0.34830636118867464;
    msg.psi = 0.5705880444029843;
    msg.p = 0.7211517122996616;
    msg.q = 0.6784562084025004;
    msg.r = 0.20314456545127058;
    msg.u = 0.3936320221377365;
    msg.v = 0.9262340316478372;
    msg.w = 0.20916253006608854;
    msg.bias_psi = 0.047920400478967395;
    msg.bias_r = 0.27590494065961;

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
    msg.setTimeStamp(0.8693645251837095);
    msg.setSource(36313U);
    msg.setSourceEntity(1U);
    msg.setDestination(23498U);
    msg.setDestinationEntity(158U);
    msg.x = 0.7234999658797536;
    msg.y = 0.5523515999933781;
    msg.z = 0.6147569577380776;
    msg.phi = 0.5877422320540762;
    msg.theta = 0.7233031312444417;
    msg.psi = 0.6692200500726058;
    msg.p = 0.8534835068888804;
    msg.q = 0.2265264262165032;
    msg.r = 0.26893484853047467;
    msg.u = 0.8575024678553516;
    msg.v = 0.7249641626674783;
    msg.w = 0.9717321904864457;
    msg.bias_psi = 0.10434465343844312;
    msg.bias_r = 0.817836828351166;

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
    msg.setTimeStamp(0.09974891554758691);
    msg.setSource(34681U);
    msg.setSourceEntity(80U);
    msg.setDestination(25187U);
    msg.setDestinationEntity(157U);
    msg.x = 0.48794182121119334;
    msg.y = 0.5692478919121873;
    msg.z = 0.47680801066380607;
    msg.phi = 0.5699614930494119;
    msg.theta = 0.23025123468663833;
    msg.psi = 0.17578722104963762;
    msg.p = 0.6806236110935593;
    msg.q = 0.16291141259719522;
    msg.r = 0.2880640969688488;
    msg.u = 0.24147125724086405;
    msg.v = 0.35297792024590013;
    msg.w = 0.5496356914475305;
    msg.bias_psi = 0.9135066011312537;
    msg.bias_r = 0.3022066894003679;

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
    msg.setTimeStamp(0.36155978144113254);
    msg.setSource(63776U);
    msg.setSourceEntity(163U);
    msg.setDestination(49288U);
    msg.setDestinationEntity(22U);
    msg.bias_psi = 0.5119271405498178;
    msg.bias_r = 0.9176984597563206;
    msg.cog = 0.5196326454306825;
    msg.cyaw = 0.3627386238599136;
    msg.lbl_rej_level = 0.38456547436871924;
    msg.gps_rej_level = 0.3580030895141241;
    msg.custom_x = 0.8669353451617059;
    msg.custom_y = 0.5608209765952019;
    msg.custom_z = 0.6249353508898001;

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
    msg.setTimeStamp(0.8212811839032064);
    msg.setSource(47154U);
    msg.setSourceEntity(75U);
    msg.setDestination(47956U);
    msg.setDestinationEntity(48U);
    msg.bias_psi = 0.08576274268962691;
    msg.bias_r = 0.9317801731160786;
    msg.cog = 0.16101431947217293;
    msg.cyaw = 0.6999448508402112;
    msg.lbl_rej_level = 0.14509631953460944;
    msg.gps_rej_level = 0.06025785304999165;
    msg.custom_x = 0.9744827091467709;
    msg.custom_y = 0.4567343940377637;
    msg.custom_z = 0.19281855465257058;

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
    msg.setTimeStamp(0.560042687015737);
    msg.setSource(21129U);
    msg.setSourceEntity(61U);
    msg.setDestination(9035U);
    msg.setDestinationEntity(114U);
    msg.bias_psi = 0.8755968673832348;
    msg.bias_r = 0.3633486505723865;
    msg.cog = 0.25507421722531465;
    msg.cyaw = 0.029029647391047297;
    msg.lbl_rej_level = 0.2352930044754502;
    msg.gps_rej_level = 0.765493455704256;
    msg.custom_x = 0.12371510862265289;
    msg.custom_y = 0.7191241950063091;
    msg.custom_z = 0.9494775207185915;

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
    msg.setTimeStamp(0.4145800427112377);
    msg.setSource(46027U);
    msg.setSourceEntity(78U);
    msg.setDestination(52553U);
    msg.setDestinationEntity(106U);
    msg.utc_time = 0.1756390739162289;
    msg.reason = 124U;

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
    msg.setTimeStamp(0.36398585995719934);
    msg.setSource(49670U);
    msg.setSourceEntity(29U);
    msg.setDestination(32303U);
    msg.setDestinationEntity(151U);
    msg.utc_time = 0.55218136902849;
    msg.reason = 26U;

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
    msg.setTimeStamp(0.13095417785030128);
    msg.setSource(53056U);
    msg.setSourceEntity(9U);
    msg.setDestination(45744U);
    msg.setDestinationEntity(141U);
    msg.utc_time = 0.39548973133678633;
    msg.reason = 68U;

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
    msg.setTimeStamp(0.7249437940869524);
    msg.setSource(17391U);
    msg.setSourceEntity(55U);
    msg.setDestination(55318U);
    msg.setDestinationEntity(153U);
    msg.id = 162U;
    msg.range = 0.5426847644438153;
    msg.acceptance = 8U;

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
    msg.setTimeStamp(0.8089217304430216);
    msg.setSource(49688U);
    msg.setSourceEntity(91U);
    msg.setDestination(5506U);
    msg.setDestinationEntity(253U);
    msg.id = 22U;
    msg.range = 0.12395468815714417;
    msg.acceptance = 43U;

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
    msg.setTimeStamp(0.427160426916828);
    msg.setSource(1653U);
    msg.setSourceEntity(111U);
    msg.setDestination(6771U);
    msg.setDestinationEntity(36U);
    msg.id = 225U;
    msg.range = 0.24037764094031644;
    msg.acceptance = 156U;

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
    msg.setTimeStamp(0.4243100754539332);
    msg.setSource(41157U);
    msg.setSourceEntity(52U);
    msg.setDestination(37095U);
    msg.setDestinationEntity(248U);
    msg.type = 157U;
    msg.reason = 146U;
    msg.value = 0.47464988413380904;
    msg.timestep = 0.24591875202679037;

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
    msg.setTimeStamp(0.22499538486680848);
    msg.setSource(47992U);
    msg.setSourceEntity(229U);
    msg.setDestination(13209U);
    msg.setDestinationEntity(40U);
    msg.type = 155U;
    msg.reason = 153U;
    msg.value = 0.9791531932580377;
    msg.timestep = 0.6976157761143444;

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
    msg.setTimeStamp(0.5985428124127163);
    msg.setSource(51764U);
    msg.setSourceEntity(1U);
    msg.setDestination(6449U);
    msg.setDestinationEntity(200U);
    msg.type = 139U;
    msg.reason = 112U;
    msg.value = 0.7587728341689385;
    msg.timestep = 0.7793322965065872;

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
    msg.setTimeStamp(0.16548925101275558);
    msg.setSource(38255U);
    msg.setSourceEntity(210U);
    msg.setDestination(56U);
    msg.setDestinationEntity(245U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("DNRJBQARTXRBCILGIARHDVYZINXSEANBMEVNQGUXNRTTDUGQRNAWNQUHYQFPCLEOEUYSSBYYMXPFOVIOLGDAVLGPOLFWVMPVUJHZYOKIKMYMAXLAHQVWHKOEWLMMISCLKBXUCRRPYZTWODAXEEXNFHDJFFTTKWPJZQSGULPPGJSEIUAGBPIDWAUHZGKGNWYVSTTBRZCFU");
    tmp_msg_0.lat = 0.34958338656503163;
    tmp_msg_0.lon = 0.23720418081479455;
    tmp_msg_0.depth = 0.5130813684834457;
    tmp_msg_0.query_channel = 68U;
    tmp_msg_0.reply_channel = 132U;
    tmp_msg_0.transponder_delay = 126U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.711368028269064;
    msg.y = 0.9643548865088403;
    msg.var_x = 0.18727158366528895;
    msg.var_y = 0.4803392439571832;
    msg.distance = 0.2380200554368339;

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
    msg.setTimeStamp(0.6025389922950958);
    msg.setSource(33480U);
    msg.setSourceEntity(136U);
    msg.setDestination(46454U);
    msg.setDestinationEntity(161U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("AQMRNZCHUUIDGSITBEQGWHCSZZYBADYBKAUGYLOXBLNXZSFGDIQTEWQWVJDOOLCPHDTCYROVFXBUASQFSRSYPOCTYVNWTKKKFKWZWKUHLPUJDTLSUMPWFABNAZMWR");
    tmp_msg_0.lat = 0.4023927909792806;
    tmp_msg_0.lon = 0.5156625118621614;
    tmp_msg_0.depth = 0.8029420122083571;
    tmp_msg_0.query_channel = 8U;
    tmp_msg_0.reply_channel = 109U;
    tmp_msg_0.transponder_delay = 167U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.8413488697217385;
    msg.y = 0.6845438680889703;
    msg.var_x = 0.05165931520324263;
    msg.var_y = 0.8312822459975147;
    msg.distance = 0.9775947656859566;

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
    msg.setTimeStamp(0.10174226090334704);
    msg.setSource(52200U);
    msg.setSourceEntity(182U);
    msg.setDestination(57341U);
    msg.setDestinationEntity(56U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("UIPGAVVULRSXNSIGMYQHJEYQBJVJAHFLJUQEDDUPLHHPLNQNWTODYNOFKWBFDUKXGPEUIKHYLTQZBCJZFVUBEXZFQOEUSKSEMBD");
    tmp_msg_0.lat = 0.5539932558439548;
    tmp_msg_0.lon = 0.20490244006097957;
    tmp_msg_0.depth = 0.016497599271975583;
    tmp_msg_0.query_channel = 97U;
    tmp_msg_0.reply_channel = 254U;
    tmp_msg_0.transponder_delay = 98U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.25947691837390174;
    msg.y = 0.582514821562743;
    msg.var_x = 0.19679899050863725;
    msg.var_y = 0.04033036280198332;
    msg.distance = 0.4802423228693109;

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
    msg.setTimeStamp(0.9745877473354773);
    msg.setSource(61146U);
    msg.setSourceEntity(164U);
    msg.setDestination(53410U);
    msg.setDestinationEntity(117U);
    msg.state = 122U;

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
    msg.setTimeStamp(0.09585602773130664);
    msg.setSource(25023U);
    msg.setSourceEntity(171U);
    msg.setDestination(18909U);
    msg.setDestinationEntity(216U);
    msg.state = 122U;

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
    msg.setTimeStamp(0.45897825942107007);
    msg.setSource(19726U);
    msg.setSourceEntity(105U);
    msg.setDestination(60802U);
    msg.setDestinationEntity(208U);
    msg.state = 167U;

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
    msg.setTimeStamp(0.598614922887953);
    msg.setSource(13050U);
    msg.setSourceEntity(143U);
    msg.setDestination(39744U);
    msg.setDestinationEntity(215U);
    msg.x = 0.8013724372769453;
    msg.y = 0.29731217485241135;
    msg.z = 0.3369314295599053;

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
    msg.setTimeStamp(0.9352048932512377);
    msg.setSource(3224U);
    msg.setSourceEntity(1U);
    msg.setDestination(46071U);
    msg.setDestinationEntity(243U);
    msg.x = 0.05738774501325994;
    msg.y = 0.5301957862926889;
    msg.z = 0.35254058775944297;

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
    msg.setTimeStamp(0.1330455399645747);
    msg.setSource(33588U);
    msg.setSourceEntity(149U);
    msg.setDestination(25419U);
    msg.setDestinationEntity(81U);
    msg.x = 0.3205857490227183;
    msg.y = 0.9454533637292434;
    msg.z = 0.8538482498290382;

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
    msg.setTimeStamp(0.49893643188029446);
    msg.setSource(34638U);
    msg.setSourceEntity(150U);
    msg.setDestination(15800U);
    msg.setDestinationEntity(87U);
    msg.va = 0.659855556566775;
    msg.aoa = 0.43350703896079523;
    msg.ssa = 0.1750184324924341;

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
    msg.setTimeStamp(0.46254954719779384);
    msg.setSource(31255U);
    msg.setSourceEntity(48U);
    msg.setDestination(64692U);
    msg.setDestinationEntity(140U);
    msg.va = 0.42439665026793727;
    msg.aoa = 0.06744389113039606;
    msg.ssa = 0.5864445078749846;

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
    msg.setTimeStamp(0.46888485173276095);
    msg.setSource(32682U);
    msg.setSourceEntity(159U);
    msg.setDestination(3638U);
    msg.setDestinationEntity(82U);
    msg.va = 0.11600442048054505;
    msg.aoa = 0.9800133987729432;
    msg.ssa = 0.75879313203064;

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
    msg.setTimeStamp(0.8171717794450656);
    msg.setSource(12537U);
    msg.setSourceEntity(105U);
    msg.setDestination(62366U);
    msg.setDestinationEntity(96U);
    msg.value = 0.9934881607328503;

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
    msg.setTimeStamp(0.36043263608612097);
    msg.setSource(64944U);
    msg.setSourceEntity(243U);
    msg.setDestination(6398U);
    msg.setDestinationEntity(109U);
    msg.value = 0.8766506538029106;

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
    msg.setTimeStamp(0.18473700050241992);
    msg.setSource(21980U);
    msg.setSourceEntity(104U);
    msg.setDestination(50683U);
    msg.setDestinationEntity(175U);
    msg.value = 0.5019174898681448;

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
    msg.setTimeStamp(0.8512472550016495);
    msg.setSource(56467U);
    msg.setSourceEntity(246U);
    msg.setDestination(6169U);
    msg.setDestinationEntity(218U);
    msg.value = 0.3785785669765439;
    msg.z_units = 133U;

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
    msg.setTimeStamp(0.66750737580455);
    msg.setSource(5434U);
    msg.setSourceEntity(237U);
    msg.setDestination(45349U);
    msg.setDestinationEntity(192U);
    msg.value = 0.1568194274179986;
    msg.z_units = 207U;

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
    msg.setTimeStamp(0.7198015014134431);
    msg.setSource(45589U);
    msg.setSourceEntity(33U);
    msg.setDestination(18311U);
    msg.setDestinationEntity(234U);
    msg.value = 0.3960032503637879;
    msg.z_units = 173U;

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
    msg.setTimeStamp(0.4876686120373427);
    msg.setSource(18495U);
    msg.setSourceEntity(16U);
    msg.setDestination(36462U);
    msg.setDestinationEntity(101U);
    msg.value = 0.41572340984482814;
    msg.speed_units = 67U;

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
    msg.setTimeStamp(0.17582955578896753);
    msg.setSource(50046U);
    msg.setSourceEntity(45U);
    msg.setDestination(29237U);
    msg.setDestinationEntity(55U);
    msg.value = 0.8706707404668762;
    msg.speed_units = 158U;

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
    msg.setTimeStamp(0.8241489648765276);
    msg.setSource(12449U);
    msg.setSourceEntity(98U);
    msg.setDestination(11324U);
    msg.setDestinationEntity(219U);
    msg.value = 0.5437999158964315;
    msg.speed_units = 14U;

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
    msg.setTimeStamp(0.4852278921947295);
    msg.setSource(9200U);
    msg.setSourceEntity(249U);
    msg.setDestination(39319U);
    msg.setDestinationEntity(24U);
    msg.value = 0.36845354982920586;

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
    msg.setTimeStamp(0.8464920472371473);
    msg.setSource(3666U);
    msg.setSourceEntity(187U);
    msg.setDestination(36804U);
    msg.setDestinationEntity(163U);
    msg.value = 0.6160696820790024;

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
    msg.setTimeStamp(0.14934767925972825);
    msg.setSource(46946U);
    msg.setSourceEntity(47U);
    msg.setDestination(8642U);
    msg.setDestinationEntity(114U);
    msg.value = 0.9606503729506687;

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
    msg.setTimeStamp(0.2562602236877555);
    msg.setSource(29656U);
    msg.setSourceEntity(16U);
    msg.setDestination(22294U);
    msg.setDestinationEntity(124U);
    msg.value = 0.7248916023212287;

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
    msg.setTimeStamp(0.11172201027328399);
    msg.setSource(11067U);
    msg.setSourceEntity(127U);
    msg.setDestination(16506U);
    msg.setDestinationEntity(18U);
    msg.value = 0.3114152774756078;

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
    msg.setTimeStamp(0.09910844216278492);
    msg.setSource(25158U);
    msg.setSourceEntity(50U);
    msg.setDestination(64541U);
    msg.setDestinationEntity(123U);
    msg.value = 0.8917592451020544;

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
    msg.setTimeStamp(0.6288417268351969);
    msg.setSource(32745U);
    msg.setSourceEntity(12U);
    msg.setDestination(53757U);
    msg.setDestinationEntity(1U);
    msg.value = 0.6677273980692277;

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
    msg.setTimeStamp(0.5642745421505528);
    msg.setSource(23801U);
    msg.setSourceEntity(41U);
    msg.setDestination(46480U);
    msg.setDestinationEntity(168U);
    msg.value = 0.5965570983088793;

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
    msg.setTimeStamp(0.7913693393896273);
    msg.setSource(56109U);
    msg.setSourceEntity(175U);
    msg.setDestination(36753U);
    msg.setDestinationEntity(249U);
    msg.value = 0.363318476473917;

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
    msg.setTimeStamp(0.076943041248416);
    msg.setSource(51409U);
    msg.setSourceEntity(66U);
    msg.setDestination(56567U);
    msg.setDestinationEntity(179U);
    msg.path_ref = 2261768255U;
    msg.start_lat = 0.01426164076237213;
    msg.start_lon = 0.854825494709014;
    msg.start_z = 0.7350029397242624;
    msg.start_z_units = 107U;
    msg.end_lat = 0.7007305084313983;
    msg.end_lon = 0.1409260117608121;
    msg.end_z = 0.31987043027199136;
    msg.end_z_units = 181U;
    msg.speed = 0.061439694723778415;
    msg.speed_units = 137U;
    msg.lradius = 0.9778149897809508;
    msg.flags = 145U;

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
    msg.setTimeStamp(0.5937119821569193);
    msg.setSource(37266U);
    msg.setSourceEntity(253U);
    msg.setDestination(32295U);
    msg.setDestinationEntity(221U);
    msg.path_ref = 3513956226U;
    msg.start_lat = 0.49110760944458987;
    msg.start_lon = 0.1782069597176551;
    msg.start_z = 0.5008100241673002;
    msg.start_z_units = 93U;
    msg.end_lat = 0.42840159664553157;
    msg.end_lon = 0.028290635351935545;
    msg.end_z = 0.3979886140952691;
    msg.end_z_units = 52U;
    msg.speed = 0.050775954174658855;
    msg.speed_units = 104U;
    msg.lradius = 0.12060104067299116;
    msg.flags = 67U;

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
    msg.setTimeStamp(0.8225155901628329);
    msg.setSource(58707U);
    msg.setSourceEntity(230U);
    msg.setDestination(21877U);
    msg.setDestinationEntity(84U);
    msg.path_ref = 207930973U;
    msg.start_lat = 0.03303505553097896;
    msg.start_lon = 0.05895201819785445;
    msg.start_z = 0.43402476607963336;
    msg.start_z_units = 211U;
    msg.end_lat = 0.9638064404574278;
    msg.end_lon = 0.42038242144670945;
    msg.end_z = 0.08006826599376071;
    msg.end_z_units = 157U;
    msg.speed = 0.8092861235627796;
    msg.speed_units = 53U;
    msg.lradius = 0.4577808541462296;
    msg.flags = 51U;

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
    msg.setTimeStamp(0.036828211645202225);
    msg.setSource(1617U);
    msg.setSourceEntity(5U);
    msg.setDestination(5830U);
    msg.setDestinationEntity(242U);
    msg.x = 0.09132987903929046;
    msg.y = 0.7012144104603422;
    msg.z = 0.011250551278288334;
    msg.k = 0.9507805538376325;
    msg.m = 0.15150597933667398;
    msg.n = 0.7126688467457781;
    msg.flags = 69U;

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
    msg.setTimeStamp(0.6980619310137949);
    msg.setSource(29554U);
    msg.setSourceEntity(77U);
    msg.setDestination(25202U);
    msg.setDestinationEntity(138U);
    msg.x = 0.9779899935932757;
    msg.y = 0.9232052748809203;
    msg.z = 0.026126714910516435;
    msg.k = 0.9769643870577571;
    msg.m = 0.6201405334254657;
    msg.n = 0.029971054779053485;
    msg.flags = 126U;

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
    msg.setTimeStamp(0.40508739577990927);
    msg.setSource(44841U);
    msg.setSourceEntity(13U);
    msg.setDestination(11810U);
    msg.setDestinationEntity(78U);
    msg.x = 0.7978301377238778;
    msg.y = 0.2057420766111272;
    msg.z = 0.292791415637077;
    msg.k = 0.8763428370784304;
    msg.m = 0.8774546463304546;
    msg.n = 0.1605966583348215;
    msg.flags = 244U;

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
    msg.setTimeStamp(0.9769792835161114);
    msg.setSource(649U);
    msg.setSourceEntity(187U);
    msg.setDestination(24583U);
    msg.setDestinationEntity(233U);
    msg.value = 0.9410552603695007;

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
    msg.setTimeStamp(0.25087067088688975);
    msg.setSource(33107U);
    msg.setSourceEntity(194U);
    msg.setDestination(5623U);
    msg.setDestinationEntity(182U);
    msg.value = 0.1524446619940254;

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
    msg.setTimeStamp(0.4513887272121335);
    msg.setSource(58982U);
    msg.setSourceEntity(251U);
    msg.setDestination(60821U);
    msg.setDestinationEntity(57U);
    msg.value = 0.7093316867454261;

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
    msg.setTimeStamp(0.3708062021974795);
    msg.setSource(42881U);
    msg.setSourceEntity(139U);
    msg.setDestination(17003U);
    msg.setDestinationEntity(206U);
    msg.u = 0.3861203207540418;
    msg.v = 0.3342551354555716;
    msg.w = 0.902240204019659;
    msg.p = 0.9759517835879385;
    msg.q = 0.879882967825977;
    msg.r = 0.6127594217580133;
    msg.flags = 16U;

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
    msg.setTimeStamp(0.9505139960041611);
    msg.setSource(43482U);
    msg.setSourceEntity(179U);
    msg.setDestination(1727U);
    msg.setDestinationEntity(103U);
    msg.u = 0.9593785880710967;
    msg.v = 0.5646190805669411;
    msg.w = 0.5600690702989701;
    msg.p = 0.9490748242056996;
    msg.q = 0.26376426882850545;
    msg.r = 0.8404026709563914;
    msg.flags = 179U;

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
    msg.setTimeStamp(0.8942549961767944);
    msg.setSource(64893U);
    msg.setSourceEntity(122U);
    msg.setDestination(29149U);
    msg.setDestinationEntity(187U);
    msg.u = 0.04056132577939087;
    msg.v = 0.16781303492493338;
    msg.w = 0.37402319344989465;
    msg.p = 0.10961326078218292;
    msg.q = 0.6882680619039051;
    msg.r = 0.4298053597353413;
    msg.flags = 162U;

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
    msg.setTimeStamp(0.8838674346212132);
    msg.setSource(29546U);
    msg.setSourceEntity(38U);
    msg.setDestination(38681U);
    msg.setDestinationEntity(248U);
    msg.path_ref = 3906712194U;
    msg.start_lat = 0.398908981110366;
    msg.start_lon = 0.8420014768596383;
    msg.start_z = 0.6692243868123186;
    msg.start_z_units = 206U;
    msg.end_lat = 0.2205150573735103;
    msg.end_lon = 0.310684966210823;
    msg.end_z = 0.552494129842466;
    msg.end_z_units = 74U;
    msg.lradius = 0.40433762701076614;
    msg.flags = 230U;
    msg.x = 0.4752758245206733;
    msg.y = 0.5881765358773238;
    msg.z = 0.10666293301304186;
    msg.vx = 0.8361226065534173;
    msg.vy = 0.48821346532456344;
    msg.vz = 0.4976467909088875;
    msg.course_error = 0.38626015881543174;
    msg.eta = 27351U;

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
    msg.setTimeStamp(0.060561836789976176);
    msg.setSource(16392U);
    msg.setSourceEntity(138U);
    msg.setDestination(29263U);
    msg.setDestinationEntity(227U);
    msg.path_ref = 4212091883U;
    msg.start_lat = 0.04550725341817863;
    msg.start_lon = 0.16000956913456943;
    msg.start_z = 0.09560798926816072;
    msg.start_z_units = 8U;
    msg.end_lat = 0.8395935766726508;
    msg.end_lon = 0.2525419150367558;
    msg.end_z = 0.07042242604066518;
    msg.end_z_units = 3U;
    msg.lradius = 0.6231041300181236;
    msg.flags = 196U;
    msg.x = 0.12798158522809944;
    msg.y = 0.35751538583922715;
    msg.z = 0.3948542533684315;
    msg.vx = 0.22538231523686647;
    msg.vy = 0.22853705480704734;
    msg.vz = 0.4474061406327242;
    msg.course_error = 0.7525955972712923;
    msg.eta = 45090U;

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
    msg.setTimeStamp(0.7169674469226486);
    msg.setSource(44783U);
    msg.setSourceEntity(73U);
    msg.setDestination(52523U);
    msg.setDestinationEntity(246U);
    msg.path_ref = 1795434212U;
    msg.start_lat = 0.10996656575276054;
    msg.start_lon = 0.5189924008391205;
    msg.start_z = 0.6600736245716369;
    msg.start_z_units = 63U;
    msg.end_lat = 0.7997826316287477;
    msg.end_lon = 0.6071238804092239;
    msg.end_z = 0.8309873673838991;
    msg.end_z_units = 96U;
    msg.lradius = 0.05648236980918453;
    msg.flags = 100U;
    msg.x = 0.8771664054610427;
    msg.y = 0.986514688822223;
    msg.z = 0.5500582328639301;
    msg.vx = 0.7961300706427958;
    msg.vy = 0.9513313768400079;
    msg.vz = 0.4152217885244951;
    msg.course_error = 0.5857731501412011;
    msg.eta = 28011U;

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
    msg.setTimeStamp(0.722428873738363);
    msg.setSource(61601U);
    msg.setSourceEntity(245U);
    msg.setDestination(3823U);
    msg.setDestinationEntity(128U);
    msg.k = 0.15378905942812093;
    msg.m = 0.869664417848153;
    msg.n = 0.348943889387345;

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
    msg.setTimeStamp(0.9035810813792635);
    msg.setSource(38750U);
    msg.setSourceEntity(172U);
    msg.setDestination(62777U);
    msg.setDestinationEntity(120U);
    msg.k = 0.925193461645135;
    msg.m = 0.38390926688804095;
    msg.n = 0.9085215102520096;

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
    msg.setTimeStamp(0.5022114722686793);
    msg.setSource(28580U);
    msg.setSourceEntity(122U);
    msg.setDestination(58687U);
    msg.setDestinationEntity(195U);
    msg.k = 0.1373452631051204;
    msg.m = 0.8027532701172635;
    msg.n = 0.8952015679937403;

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
    msg.setTimeStamp(0.7070143062417205);
    msg.setSource(56687U);
    msg.setSourceEntity(96U);
    msg.setDestination(4421U);
    msg.setDestinationEntity(197U);
    msg.p = 0.10379254308150754;
    msg.i = 0.9092421914419112;
    msg.d = 0.8235404164893902;
    msg.a = 0.6632529122610289;

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
    msg.setTimeStamp(0.8643673014160005);
    msg.setSource(30527U);
    msg.setSourceEntity(2U);
    msg.setDestination(60947U);
    msg.setDestinationEntity(196U);
    msg.p = 0.5419265993820517;
    msg.i = 0.7826492447904553;
    msg.d = 0.023456626970052352;
    msg.a = 0.7766795632874943;

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
    msg.setTimeStamp(0.34266792433140003);
    msg.setSource(18167U);
    msg.setSourceEntity(24U);
    msg.setDestination(44270U);
    msg.setDestinationEntity(244U);
    msg.p = 0.10843084836621464;
    msg.i = 0.914550533657773;
    msg.d = 0.5256157368022101;
    msg.a = 0.646641379015225;

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
    msg.setTimeStamp(0.395311295332995);
    msg.setSource(4127U);
    msg.setSourceEntity(146U);
    msg.setDestination(19335U);
    msg.setDestinationEntity(252U);
    msg.op = 123U;

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
    msg.setTimeStamp(0.8399649997556276);
    msg.setSource(42408U);
    msg.setSourceEntity(252U);
    msg.setDestination(54112U);
    msg.setDestinationEntity(236U);
    msg.op = 5U;

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
    msg.setTimeStamp(0.4832123015198615);
    msg.setSource(54437U);
    msg.setSourceEntity(132U);
    msg.setDestination(47221U);
    msg.setDestinationEntity(159U);
    msg.op = 76U;

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
    msg.setTimeStamp(0.6596988112040194);
    msg.setSource(23602U);
    msg.setSourceEntity(135U);
    msg.setDestination(32317U);
    msg.setDestinationEntity(141U);
    msg.x = 0.7264649606989885;
    msg.y = 0.10164435572888597;
    msg.z = 0.8564575462700754;
    msg.vx = 0.4978535926622104;
    msg.vy = 0.5469845076535295;
    msg.vz = 0.8602501847109226;
    msg.ax = 0.5878139553170776;
    msg.ay = 0.304282343285771;
    msg.az = 0.7726070175187568;
    msg.flags = 53509U;

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
    msg.setTimeStamp(0.8968232994266576);
    msg.setSource(31768U);
    msg.setSourceEntity(249U);
    msg.setDestination(25073U);
    msg.setDestinationEntity(25U);
    msg.x = 0.4317979302503907;
    msg.y = 0.426429245404236;
    msg.z = 0.3073069159501406;
    msg.vx = 0.873318275688031;
    msg.vy = 0.9106680256529258;
    msg.vz = 0.8024511050563263;
    msg.ax = 0.46165087943116;
    msg.ay = 0.1994342206792823;
    msg.az = 0.056915435024788574;
    msg.flags = 20481U;

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
    msg.setTimeStamp(0.6618343765328477);
    msg.setSource(7327U);
    msg.setSourceEntity(127U);
    msg.setDestination(53323U);
    msg.setDestinationEntity(168U);
    msg.x = 0.22682862534160708;
    msg.y = 0.5528944710353635;
    msg.z = 0.7617678151236646;
    msg.vx = 0.8912452644028538;
    msg.vy = 0.5379910193401268;
    msg.vz = 0.653211240657546;
    msg.ax = 0.6769487777263865;
    msg.ay = 0.3819017837626052;
    msg.az = 0.06553575666031963;
    msg.flags = 64149U;

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
    msg.setTimeStamp(0.7372922613452512);
    msg.setSource(29834U);
    msg.setSourceEntity(108U);
    msg.setDestination(36794U);
    msg.setDestinationEntity(165U);
    msg.value = 0.9125558780273123;

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
    msg.setTimeStamp(0.35319750483082246);
    msg.setSource(25749U);
    msg.setSourceEntity(201U);
    msg.setDestination(29380U);
    msg.setDestinationEntity(92U);
    msg.value = 0.9122137358293589;

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
    msg.setTimeStamp(0.9129862289678948);
    msg.setSource(15563U);
    msg.setSourceEntity(62U);
    msg.setDestination(51013U);
    msg.setDestinationEntity(8U);
    msg.value = 0.6248801748455163;

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
    msg.setTimeStamp(0.2063219085743162);
    msg.setSource(7505U);
    msg.setSourceEntity(47U);
    msg.setDestination(47273U);
    msg.setDestinationEntity(61U);
    msg.timeout = 45503U;
    msg.lat = 0.4632472245493028;
    msg.lon = 0.7820157149446205;
    msg.z = 0.13407280129510046;
    msg.z_units = 6U;
    msg.speed = 0.043455684012087215;
    msg.speed_units = 228U;
    msg.roll = 0.5872369025824343;
    msg.pitch = 0.08799012306608023;
    msg.yaw = 0.674785392215811;
    msg.custom.assign("EFOXREBJRNDJZSD");

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
    msg.setTimeStamp(0.12352695790883472);
    msg.setSource(28434U);
    msg.setSourceEntity(7U);
    msg.setDestination(24526U);
    msg.setDestinationEntity(134U);
    msg.timeout = 38140U;
    msg.lat = 0.9879754492962783;
    msg.lon = 0.9644149789286826;
    msg.z = 0.40658404376977186;
    msg.z_units = 141U;
    msg.speed = 0.8255439268797449;
    msg.speed_units = 196U;
    msg.roll = 0.977554053262235;
    msg.pitch = 0.3147878470199381;
    msg.yaw = 0.9379829965226419;
    msg.custom.assign("GMKPTLQPBYRINBWECYNTMDEOVMOZTZYDJQIMUKYJIUZRGHONPGNCWASNYPXLBKKFQJXPMLDDGKSCNSVTAFJFIPCNHZILPXMMWKVZTOUHGDIJIUGKFCYSDIPOXRAFREGTBHJDEEUZZTCBREKPBVZLWLKQARXUMVBX");

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
    msg.setTimeStamp(0.9746059386187953);
    msg.setSource(33045U);
    msg.setSourceEntity(61U);
    msg.setDestination(33712U);
    msg.setDestinationEntity(123U);
    msg.timeout = 57783U;
    msg.lat = 0.7689335570213622;
    msg.lon = 0.7263339230092867;
    msg.z = 0.046345395195042105;
    msg.z_units = 85U;
    msg.speed = 0.06041167743856435;
    msg.speed_units = 215U;
    msg.roll = 0.15414730119538234;
    msg.pitch = 0.44137955007418617;
    msg.yaw = 0.811080539227528;
    msg.custom.assign("PVJFZYZSGQCAWZIPBQYGVDNHLNJWWECAFXUA");

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
    msg.setTimeStamp(0.11414782827049852);
    msg.setSource(33306U);
    msg.setSourceEntity(30U);
    msg.setDestination(47236U);
    msg.setDestinationEntity(216U);
    msg.timeout = 28519U;
    msg.lat = 0.7773917428140447;
    msg.lon = 0.2341668455813266;
    msg.z = 0.32038884749173946;
    msg.z_units = 28U;
    msg.speed = 0.5421283655887541;
    msg.speed_units = 227U;
    msg.duration = 23614U;
    msg.radius = 0.3314457525959894;
    msg.flags = 135U;
    msg.custom.assign("FQQASJQNCVHHNKIYIBGNNTFKJRYHVXRUMLRAQEUJKACXKBPXBGFYGZXRYLNKEVWPRRACKWPGOPLMXYYPDZBAZGNHXWPZNSIAEJTTQJMSNLYQNSBFCAQFBHTYOFIEMGDYTQOFKLLQLEVLEXLWGJZNTMHUCMVUFCPCRFDODUDJBGVIDJTSEEPBMIOHZESSBKMVDAIHYDWUA");

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
    msg.setTimeStamp(0.5563870541970011);
    msg.setSource(31822U);
    msg.setSourceEntity(69U);
    msg.setDestination(857U);
    msg.setDestinationEntity(148U);
    msg.timeout = 37939U;
    msg.lat = 0.30362543595371116;
    msg.lon = 0.7892849099071791;
    msg.z = 0.6771853379388376;
    msg.z_units = 179U;
    msg.speed = 0.36061552055881607;
    msg.speed_units = 58U;
    msg.duration = 5274U;
    msg.radius = 0.7792955195291779;
    msg.flags = 101U;
    msg.custom.assign("QTXHAXLPFZLMSTLHREIIXGOAOGCMJXDGSILUEUSTLLDJJBYGZPQWHYGJWTWPVLYTKCKMROFQIOSRZNKXAUCHACETYBOTQFMI");

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
    msg.setTimeStamp(0.25856734664444014);
    msg.setSource(15311U);
    msg.setSourceEntity(55U);
    msg.setDestination(2518U);
    msg.setDestinationEntity(192U);
    msg.timeout = 15557U;
    msg.lat = 0.047660107263771456;
    msg.lon = 0.5310977965029083;
    msg.z = 0.162952776621204;
    msg.z_units = 239U;
    msg.speed = 0.055827521408295944;
    msg.speed_units = 91U;
    msg.duration = 11919U;
    msg.radius = 0.4324973954832865;
    msg.flags = 238U;
    msg.custom.assign("QAUZEIUJFLVGHLJZLKLJTSZKCYBOZIPLVJBEQELWRMQBIVBTUWPGITVQFNBUSWKUTHZCAEH");

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
    msg.setTimeStamp(0.10752581000971118);
    msg.setSource(12426U);
    msg.setSourceEntity(147U);
    msg.setDestination(12944U);
    msg.setDestinationEntity(137U);
    msg.custom.assign("JRRERUCXMTOMSYNGYTPNFDWHXKEKLVMPMCQSQNNFQWISLZIOUJXIEBBNTFZZITSZAARKTVRYLIVCDSHBXSVYLYWSBIKJOPJNPBHNHFEJTMGDUUZBCLYZCJHNNAHFGYGVTBESZQILVCXHVDCUEDXYOBMGPHUWRZDPOAPGKVDER");

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
    msg.setTimeStamp(0.687741480958414);
    msg.setSource(4052U);
    msg.setSourceEntity(218U);
    msg.setDestination(26134U);
    msg.setDestinationEntity(78U);
    msg.custom.assign("SDIOWXBAWIOTKGEVKIJDUWUAYJXEJEMFPN");

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
    msg.setTimeStamp(0.04998323649766434);
    msg.setSource(17965U);
    msg.setSourceEntity(234U);
    msg.setDestination(3U);
    msg.setDestinationEntity(35U);
    msg.custom.assign("TBGDWAZUUUHBUQEZRUNNDTRDRURDPDWPXEQBYJCKRJYGHKPSQHBYYFSOSXMYKOTMEGCHTSIL");

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
    msg.setTimeStamp(0.8101356600810229);
    msg.setSource(44424U);
    msg.setSourceEntity(219U);
    msg.setDestination(16139U);
    msg.setDestinationEntity(227U);
    msg.timeout = 51236U;
    msg.lat = 0.21855259965129303;
    msg.lon = 0.6077775176060674;
    msg.z = 0.30794285851721703;
    msg.z_units = 17U;
    msg.duration = 37057U;
    msg.speed = 0.39637643781185783;
    msg.speed_units = 191U;
    msg.type = 159U;
    msg.radius = 0.09056929148997384;
    msg.length = 0.8721871569237098;
    msg.bearing = 0.5054912269098661;
    msg.direction = 98U;
    msg.custom.assign("OFJMVQHWDKRECCZPLIVCXXJZGLHMBHKFUJGYSINSDE");

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
    msg.setTimeStamp(0.9012611092987789);
    msg.setSource(42115U);
    msg.setSourceEntity(106U);
    msg.setDestination(62468U);
    msg.setDestinationEntity(22U);
    msg.timeout = 64143U;
    msg.lat = 0.15579457502689442;
    msg.lon = 0.7803860833508347;
    msg.z = 0.5747924059210532;
    msg.z_units = 39U;
    msg.duration = 26013U;
    msg.speed = 0.8623288953160047;
    msg.speed_units = 195U;
    msg.type = 120U;
    msg.radius = 0.39122183685881484;
    msg.length = 0.5987595846576068;
    msg.bearing = 0.9933208872874607;
    msg.direction = 62U;
    msg.custom.assign("ZYCNBWQDAGTUNQVPBKXFYXGSONWIPCNARCFOBMZUYJHQLUSPFGNUKOXNTPWLBICTREHWSRVTIWWSSIOMDOMWJLPRAKGZYVMUQLBVPTPTFDHUJALBJAAVOLUWICEEOFBPSWSUACWHBRZRJSLYIG");

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
    msg.setTimeStamp(0.4209508186104961);
    msg.setSource(24374U);
    msg.setSourceEntity(89U);
    msg.setDestination(25575U);
    msg.setDestinationEntity(247U);
    msg.timeout = 332U;
    msg.lat = 0.2051515595818344;
    msg.lon = 0.11310560856976948;
    msg.z = 0.1010579165363995;
    msg.z_units = 169U;
    msg.duration = 37051U;
    msg.speed = 0.6388247072763772;
    msg.speed_units = 82U;
    msg.type = 151U;
    msg.radius = 0.26166932317422875;
    msg.length = 0.8962532405068411;
    msg.bearing = 0.23197406765540918;
    msg.direction = 119U;
    msg.custom.assign("CKDWMFVHKUIYFVDOZCZPSVEFLMKWSHRGBABLDQETTQEPXIXPZSZYQWSCGPAXWGVRCOOMXIRXMDUDGCNXTJLKJMEZAWBKASRIVTXGLJBYBPMMIUZOYCXNBYWLEHNHGQSIFWLOUNTJLHCKHQRNDOJEJMBONZBPGFOFYCQZIVINUUWVRQMAPADJIBRBTEKVSPFHLRGUUYRHWKI");

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
    msg.setTimeStamp(0.664948028208428);
    msg.setSource(720U);
    msg.setSourceEntity(0U);
    msg.setDestination(21862U);
    msg.setDestinationEntity(215U);
    msg.duration = 27094U;
    msg.custom.assign("BHEUGDSORSEJMGMHDCMYLQCYDVRVVHRBKUDXCLFXUNPHNBEJJZBOPRMJS");

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
    msg.setTimeStamp(0.10000596485929869);
    msg.setSource(49898U);
    msg.setSourceEntity(85U);
    msg.setDestination(45077U);
    msg.setDestinationEntity(100U);
    msg.duration = 12409U;
    msg.custom.assign("CEQGWVNNIHZEAHDUOMLTTOZKJYBGPZAGAFYCUUWLALMTWBHCLDDWDIXFSFOOCEXKQAUMCJJHPQHNIUYYXCJNVVMGIJFJNA");

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
    msg.setTimeStamp(0.42342946600148046);
    msg.setSource(40402U);
    msg.setSourceEntity(113U);
    msg.setDestination(64190U);
    msg.setDestinationEntity(210U);
    msg.duration = 29814U;
    msg.custom.assign("HEKOQFEMQAGYGGLLQTLGPOUZFGHNUTBIXZUPL");

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
    msg.setTimeStamp(0.1487775048079425);
    msg.setSource(35097U);
    msg.setSourceEntity(80U);
    msg.setDestination(26799U);
    msg.setDestinationEntity(119U);
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.4466425593332346;
    msg.control.set(tmp_msg_0);
    msg.duration = 45166U;
    msg.custom.assign("VLZRHLRRDHYFTTILVRBNPUYODGABTMQPOYFHROXTKKKKAZYBIQWSBEAJNSNDGAMFUROFZHECAPMTNAAIJOOWMJSYKQPSUNGWMCLXJCHWMXGKLCSEQDVVXWZWGXRLASFWRZIKZBGFPCQUDLFZUIUEIVXHSPFYGSJEIMHDHKNGPCWCMETAJTSURTHVOYDIDOLQBOHRNPGLUXEXYAKZNPBMSYUDJCVBDWGZWEVVEKZEOCJQJXMQNJXTLCQBUYVBN");

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
    msg.setTimeStamp(0.21241448587833167);
    msg.setSource(18159U);
    msg.setSourceEntity(62U);
    msg.setDestination(31380U);
    msg.setDestinationEntity(254U);
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.7915218864149266;
    tmp_msg_0.speed_units = 163U;
    msg.control.set(tmp_msg_0);
    msg.duration = 26409U;
    msg.custom.assign("KTJCHQJUBEZBQTOWCGXAFXJBMXGFSDIAQFDVDHQXTVSFNOURZRDRQOIYKJHCLZHCTPRVWYCMWPAZLZBAOEHIRWLWZPGCYAGADSMKJVBGIIKMIETUJKNVSZAVHQWJIDUKORFWJYXUKDFNTACXPQWAFCYIHLXKHLVSBZKZGREYWDUBGDRLPLIFDTANNSNFJOVHSEZYVMXBLQBGTURXLEQETGCKUSCEPMHUIPMFNOLPNP");

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
    msg.setTimeStamp(0.272310027140247);
    msg.setSource(7781U);
    msg.setSourceEntity(226U);
    msg.setDestination(33570U);
    msg.setDestinationEntity(167U);
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.46312908085721394;
    tmp_msg_0.speed_units = 7U;
    msg.control.set(tmp_msg_0);
    msg.duration = 1167U;
    msg.custom.assign("NSWNCZNFAAJYRXTGDCHFMEQBYRSWIFEXUTRGIJENIGHKZUQRLQCQXUITHYWMOWFBJIDSKGPXLPDNBEHSOXBTKSU");

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
    msg.setTimeStamp(0.8430905052004856);
    msg.setSource(19117U);
    msg.setSourceEntity(45U);
    msg.setDestination(25328U);
    msg.setDestinationEntity(39U);
    msg.timeout = 43802U;
    msg.lat = 0.3613382604567157;
    msg.lon = 0.7602856718998867;
    msg.z = 0.37895508845003456;
    msg.z_units = 209U;
    msg.speed = 0.19824484233146256;
    msg.speed_units = 25U;
    msg.bearing = 0.09253214425320988;
    msg.cross_angle = 0.08917066085912151;
    msg.width = 0.14752296121414676;
    msg.length = 0.8065276094667044;
    msg.hstep = 0.5161571431913115;
    msg.coff = 215U;
    msg.alternation = 74U;
    msg.flags = 240U;
    msg.custom.assign("DTCGPYSAEBDUOJJLVYMSRDVINXHRDJVSAILTAIUOHU");

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
    msg.setTimeStamp(0.8731893507920672);
    msg.setSource(14783U);
    msg.setSourceEntity(246U);
    msg.setDestination(45549U);
    msg.setDestinationEntity(195U);
    msg.timeout = 53883U;
    msg.lat = 0.3698164619522032;
    msg.lon = 0.5066695390304575;
    msg.z = 0.0160614178517553;
    msg.z_units = 177U;
    msg.speed = 0.022780406439414036;
    msg.speed_units = 152U;
    msg.bearing = 0.235382535512611;
    msg.cross_angle = 0.6630501781974737;
    msg.width = 0.9003720941339433;
    msg.length = 0.22718979670929362;
    msg.hstep = 0.021988369219277826;
    msg.coff = 225U;
    msg.alternation = 216U;
    msg.flags = 207U;
    msg.custom.assign("YWLZLKXHJIMXLSURJ");

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
    msg.setTimeStamp(0.6317561722883075);
    msg.setSource(42926U);
    msg.setSourceEntity(138U);
    msg.setDestination(30174U);
    msg.setDestinationEntity(124U);
    msg.timeout = 4758U;
    msg.lat = 0.9118727148594794;
    msg.lon = 0.05969282704229806;
    msg.z = 0.882533449025945;
    msg.z_units = 153U;
    msg.speed = 0.9403735152558972;
    msg.speed_units = 63U;
    msg.bearing = 0.5999190427016674;
    msg.cross_angle = 0.04008638021899158;
    msg.width = 0.010462550551706196;
    msg.length = 0.7907318374088276;
    msg.hstep = 0.7292991663737827;
    msg.coff = 104U;
    msg.alternation = 219U;
    msg.flags = 149U;
    msg.custom.assign("DMNVUBTUZUGBDYCNUCXVIVVLATEDEFSHXWIPIYZFAXNDIJBOZUOEZEWMKXBAHXVCQOSFPYOFSARRGOLTTUEKURXBOMTNPPHWBTSJGPGHGWWJSUMENGETSNRJFFPYAXAMPGGROWMCLQTESSPZIKVBKCCZNNHWCIAIIWIFOEKCOPDQYJQDDSYJBSGELJJHVMXKQHQMD");

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
    msg.setTimeStamp(0.3393339560664492);
    msg.setSource(53621U);
    msg.setSourceEntity(144U);
    msg.setDestination(39250U);
    msg.setDestinationEntity(144U);
    msg.timeout = 7110U;
    msg.lat = 0.6169333568322947;
    msg.lon = 0.2863713627697815;
    msg.z = 0.8981838897916727;
    msg.z_units = 111U;
    msg.speed = 0.4852614762551547;
    msg.speed_units = 207U;
    msg.custom.assign("ZTMMBDRXBYFNWKDUCHYWRVVUFGCREGMZQSBODARALTKTPGUAKOKJZYADANIZQPGNUOHXHKLDSLZHPJGDFVKQAXHUJAOSIINQCOGIFLSBVYAPPWSGUKCNIIVFPDETTBFJLZCPREVBQDWZSXU");

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
    msg.setTimeStamp(0.1679077735141542);
    msg.setSource(16590U);
    msg.setSourceEntity(253U);
    msg.setDestination(59225U);
    msg.setDestinationEntity(103U);
    msg.timeout = 15884U;
    msg.lat = 0.5889669428081249;
    msg.lon = 0.47829256391996566;
    msg.z = 0.725651385303346;
    msg.z_units = 71U;
    msg.speed = 0.7832705234366832;
    msg.speed_units = 72U;
    msg.custom.assign("FKMKHLGQNFOPIYGCVEGJODEOEBHDMJDYNDPWKPIBWSVYRRGVRIRXQHJIYLDHSEZANJRMTPSXTHVMVAUAAUCGJZONXQKCOQWBPYJIGZBFMSJEEFUFSSHWVGHTBTAVZXKBWPIAVUOTUKXQWZPEEMWNDIQKDSBWACOUXMRMBANQBCDALHYTQKJFDIRBWWLZFYOACFMYTTVTMYZXGG");

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
    msg.setTimeStamp(0.23813258271912352);
    msg.setSource(4367U);
    msg.setSourceEntity(236U);
    msg.setDestination(21380U);
    msg.setDestinationEntity(180U);
    msg.timeout = 29054U;
    msg.lat = 0.6264511609264836;
    msg.lon = 0.9851061007901613;
    msg.z = 0.8987686669566294;
    msg.z_units = 187U;
    msg.speed = 0.4277612855197206;
    msg.speed_units = 21U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.8522892209903085;
    tmp_msg_0.y = 0.45575345275972423;
    tmp_msg_0.z = 0.5351542216221303;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("LJDEFSWYMUIMWMFDDOBZMRCIUOBTXMEVDIGPVKLPTEHNDKSGLCEQGXSCLHQLBOTNRVRBHRSUPIMCLUAJEFFYADFKVEPTKPFYTZYKBLCONIWSPY");

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
    msg.setTimeStamp(0.5148899745293133);
    msg.setSource(22843U);
    msg.setSourceEntity(226U);
    msg.setDestination(51795U);
    msg.setDestinationEntity(254U);
    msg.x = 0.30796000026611714;
    msg.y = 0.8377757945360517;
    msg.z = 0.7705949087879533;

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
    msg.setTimeStamp(0.7397785607093059);
    msg.setSource(18095U);
    msg.setSourceEntity(12U);
    msg.setDestination(31902U);
    msg.setDestinationEntity(244U);
    msg.x = 0.41673655607643867;
    msg.y = 0.796423303648089;
    msg.z = 0.6260944972602973;

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
    msg.setTimeStamp(0.5103150748674423);
    msg.setSource(64855U);
    msg.setSourceEntity(42U);
    msg.setDestination(956U);
    msg.setDestinationEntity(220U);
    msg.x = 0.0016581527462431467;
    msg.y = 0.41019744507618716;
    msg.z = 0.2933516006412793;

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
    msg.setTimeStamp(0.9071974990029874);
    msg.setSource(21623U);
    msg.setSourceEntity(6U);
    msg.setDestination(36407U);
    msg.setDestinationEntity(14U);
    msg.timeout = 59967U;
    msg.lat = 0.2191961167915455;
    msg.lon = 0.17718841059942292;
    msg.z = 0.6486396943384757;
    msg.z_units = 96U;
    msg.amplitude = 0.2283594712628989;
    msg.pitch = 0.6003818729656993;
    msg.speed = 0.8071638072730347;
    msg.speed_units = 183U;
    msg.custom.assign("FSDWUILQTKAUQYJZJKPOWNSUWDJFYRAIAIUVAEZABVVNXHANQVTRVKNNUJKXTMIGWMXTFEREPMW");

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
    msg.setTimeStamp(0.35599283251537484);
    msg.setSource(57333U);
    msg.setSourceEntity(74U);
    msg.setDestination(36477U);
    msg.setDestinationEntity(132U);
    msg.timeout = 40025U;
    msg.lat = 0.4909069974161231;
    msg.lon = 0.4632475016709334;
    msg.z = 0.645704849838247;
    msg.z_units = 48U;
    msg.amplitude = 0.8869527227147186;
    msg.pitch = 0.24097277403240935;
    msg.speed = 0.8738914387374784;
    msg.speed_units = 224U;
    msg.custom.assign("FIAUORYQCUWPUUXBODYKVYIAYNJCZSDXBMQDREMRKJNOSDWXRGRGPNITYGTJXFVQCQJBAGZATCBDIECYSIUXCKLVKVLUSLWYEWSODRTBZRFUNNAHCVEBAHHNBDQFASTJFKNYTIFYCIRHXVJVCLOMPSOFZELQVSQXNUJDNJMMAPHWSEWIWZTKGKSXXMGRKODZZBULTMXTGYZGEHNQJVFKEMLRQWPHC");

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
    msg.setTimeStamp(0.27558473122219174);
    msg.setSource(7829U);
    msg.setSourceEntity(6U);
    msg.setDestination(30594U);
    msg.setDestinationEntity(72U);
    msg.timeout = 29654U;
    msg.lat = 0.21213857022339833;
    msg.lon = 0.13158721492371228;
    msg.z = 0.4916257436304867;
    msg.z_units = 61U;
    msg.amplitude = 0.6367701264747765;
    msg.pitch = 0.9036613701029508;
    msg.speed = 0.28847046431355783;
    msg.speed_units = 103U;
    msg.custom.assign("WOSZTRPVXMAIFDCXUHRPIBVJRHNENVQUALAXEOWGJQKEKJXHSLSQMNKCGWFTJBWPNZBVMFHTVESMFYQCOJESYTQTPDZQDJYRKWTASXMIJ");

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
    msg.setTimeStamp(0.5148073591083588);
    msg.setSource(35225U);
    msg.setSourceEntity(136U);
    msg.setDestination(55227U);
    msg.setDestinationEntity(111U);

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
    msg.setTimeStamp(0.6943764333328108);
    msg.setSource(36509U);
    msg.setSourceEntity(98U);
    msg.setDestination(62717U);
    msg.setDestinationEntity(231U);

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
    msg.setTimeStamp(0.5466202163304732);
    msg.setSource(22959U);
    msg.setSourceEntity(208U);
    msg.setDestination(38952U);
    msg.setDestinationEntity(51U);

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
    msg.setTimeStamp(0.008207990275690857);
    msg.setSource(48511U);
    msg.setSourceEntity(80U);
    msg.setDestination(30207U);
    msg.setDestinationEntity(95U);
    msg.lat = 0.0037074101902010437;
    msg.lon = 0.8075658899569259;
    msg.z = 0.7125511554987851;
    msg.z_units = 96U;
    msg.radius = 0.39843185808912196;
    msg.duration = 40165U;
    msg.speed = 0.7675154676703536;
    msg.speed_units = 59U;
    msg.custom.assign("SRJCGITTTLFCUSHJINCCCUHEASCBCMQWMCDVGBRCZEECNXHLOLUKEGYBHUQFKMRDJBFQMEFLWP");

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
    msg.setTimeStamp(0.2177162324634504);
    msg.setSource(46344U);
    msg.setSourceEntity(211U);
    msg.setDestination(65424U);
    msg.setDestinationEntity(118U);
    msg.lat = 0.394550539257723;
    msg.lon = 0.4400545836790495;
    msg.z = 0.11541319168115571;
    msg.z_units = 184U;
    msg.radius = 0.6610028999085679;
    msg.duration = 45746U;
    msg.speed = 0.6876225220668432;
    msg.speed_units = 66U;
    msg.custom.assign("ZKIKFKCMDEJYYDAXXOPHPAFMDCAEVRZTHUNQDRSZXSUHCAIMELHNCYWWEGNIMOVCLORJKOIOBBBQLXUG");

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
    msg.setTimeStamp(0.5724118374608708);
    msg.setSource(12180U);
    msg.setSourceEntity(214U);
    msg.setDestination(25910U);
    msg.setDestinationEntity(100U);
    msg.lat = 0.8673824663131844;
    msg.lon = 0.3869646133069492;
    msg.z = 0.6679386781181144;
    msg.z_units = 247U;
    msg.radius = 0.580608760664951;
    msg.duration = 30409U;
    msg.speed = 0.37508212093717286;
    msg.speed_units = 20U;
    msg.custom.assign("IDKGHWSYIDKSDNQWUNJXPWLZPKZPSNWXTLAVMEALFFRNKPQSPNGTLBQHHJARLHDQWHBGWXHEOEIXVDUNHBNYASDNMAVTSZOSVJZCGEAIFGQOPTZJLEZSOUFUMYCXCDKJEVGMBXLOKRYKMGWUTAMMOADRJTPILKOFQUAYFVPXYVHWPICTHQBIFBUDGRFAOSIZTZVQCYECCVR");

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
    msg.setTimeStamp(0.1445946180297385);
    msg.setSource(4512U);
    msg.setSourceEntity(190U);
    msg.setDestination(24890U);
    msg.setDestinationEntity(8U);
    msg.timeout = 2608U;
    msg.flags = 69U;
    msg.lat = 0.662120820932359;
    msg.lon = 0.974953517962984;
    msg.start_z = 0.3151358754806889;
    msg.start_z_units = 247U;
    msg.end_z = 0.34845355964221314;
    msg.end_z_units = 161U;
    msg.radius = 0.3622570567959802;
    msg.speed = 0.013840375166374153;
    msg.speed_units = 6U;
    msg.custom.assign("UENZBFWJBSXXRYJYCHUWWBCHSQKAOFYODDULGUPOMBNWUXNZJNKLTHUSHJRPRRMECIWKRALEGXQKXEABCFHZNH");

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
    msg.setTimeStamp(0.49911304732016115);
    msg.setSource(39505U);
    msg.setSourceEntity(156U);
    msg.setDestination(18623U);
    msg.setDestinationEntity(117U);
    msg.timeout = 2260U;
    msg.flags = 38U;
    msg.lat = 0.9825858469604529;
    msg.lon = 0.019790739093647147;
    msg.start_z = 0.5413395776256518;
    msg.start_z_units = 198U;
    msg.end_z = 0.6553417140555164;
    msg.end_z_units = 135U;
    msg.radius = 0.3360859750244627;
    msg.speed = 0.6184475031280353;
    msg.speed_units = 169U;
    msg.custom.assign("HFBHWXNWQQBUKXOROCEAXTRFJGNSUJXIPFGZQKFEMLNZPZIFSRWCYNHQIBMSSJUNYEFDXFIHBEUDEWDGAOUFHYKMOAMEYTUTDVLKLJEXLCMJGWPKDGTVMFKYCJHGYLVGZAASBSCZAZTPQBSTPZPIOERRLUTQQMJWZNAKGLRSANMOHCIQCVPIDI");

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
    msg.setTimeStamp(0.10252394718425806);
    msg.setSource(23054U);
    msg.setSourceEntity(232U);
    msg.setDestination(14199U);
    msg.setDestinationEntity(78U);
    msg.timeout = 8507U;
    msg.flags = 102U;
    msg.lat = 0.4345466454759608;
    msg.lon = 0.4738276615978374;
    msg.start_z = 0.9150392956575094;
    msg.start_z_units = 2U;
    msg.end_z = 0.309737291658011;
    msg.end_z_units = 113U;
    msg.radius = 0.18916386659876572;
    msg.speed = 0.5082368224418325;
    msg.speed_units = 253U;
    msg.custom.assign("MOHBYTSGHRAWJNUYJGBSXBFCSQKEXXOWTLM");

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
    msg.setTimeStamp(0.5569834883287141);
    msg.setSource(11788U);
    msg.setSourceEntity(176U);
    msg.setDestination(4850U);
    msg.setDestinationEntity(160U);
    msg.timeout = 47422U;
    msg.lat = 0.5797582597731678;
    msg.lon = 0.8432222147800066;
    msg.z = 0.29616684020449957;
    msg.z_units = 148U;
    msg.speed = 0.2976850929415198;
    msg.speed_units = 26U;
    msg.custom.assign("JAPCNTNSNFQEEQZTGPRIDWLOSVZIQLSGBPWFVYDFFYJWBVERXSKIUTETAXZBKACTAXJMDWDKZSOEXCBIEJHAIAKLOUPBLGGYZSAFNRIVNQNRVWBCZKKNBNRROVVKDCFLHLZOLPCWYDWYCTDERXWMVIPNIGVGYMACQSQIEXFSOTPUTHPAQZOTEUKHMDXGRGMKUPJMO");

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
    msg.setTimeStamp(0.21165232842007975);
    msg.setSource(22504U);
    msg.setSourceEntity(194U);
    msg.setDestination(54405U);
    msg.setDestinationEntity(134U);
    msg.timeout = 13597U;
    msg.lat = 0.8292572591747643;
    msg.lon = 0.4537633897950101;
    msg.z = 0.2357285725954531;
    msg.z_units = 127U;
    msg.speed = 0.7925189260654225;
    msg.speed_units = 56U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.0051237710055297425;
    tmp_msg_0.y = 0.9877909315294341;
    tmp_msg_0.z = 0.6298965052638875;
    tmp_msg_0.t = 0.6641482930704912;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("XQOLEWXPFYTSHWOTKWXXEGQCMNCJSVDPYEGZUNVLOCGGSMYZEBYEIAWRFTIPQXLWBSFYFTLYGFFZKSJHUUKQHJOKRILJUNZUKURAMARYLPZHJMTQOPSTTJTMDWLBQCUWNUOXDCL");

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
    msg.setTimeStamp(0.7509892373570594);
    msg.setSource(25941U);
    msg.setSourceEntity(210U);
    msg.setDestination(12173U);
    msg.setDestinationEntity(85U);
    msg.timeout = 42135U;
    msg.lat = 0.795146534697734;
    msg.lon = 0.7147339040095654;
    msg.z = 0.3054310398704163;
    msg.z_units = 84U;
    msg.speed = 0.7703702521843172;
    msg.speed_units = 100U;
    msg.custom.assign("JCWJGYFKKCVZBPEWUALGMYAXUEZXGCUNQZFQLHKPDDYUAOPVGKWMHZCPA");

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
    msg.setTimeStamp(0.1544972437092076);
    msg.setSource(44759U);
    msg.setSourceEntity(103U);
    msg.setDestination(35945U);
    msg.setDestinationEntity(225U);
    msg.x = 0.24630588883716975;
    msg.y = 0.18244809316648258;
    msg.z = 0.01563389654204006;
    msg.t = 0.40079309465407875;

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
    msg.setTimeStamp(0.4901238494545376);
    msg.setSource(53961U);
    msg.setSourceEntity(215U);
    msg.setDestination(27660U);
    msg.setDestinationEntity(56U);
    msg.x = 0.06592993509080536;
    msg.y = 0.5657365912512495;
    msg.z = 0.0022272694348511868;
    msg.t = 0.9965609603586696;

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
    msg.setTimeStamp(0.5905035955952784);
    msg.setSource(41890U);
    msg.setSourceEntity(46U);
    msg.setDestination(14163U);
    msg.setDestinationEntity(158U);
    msg.x = 0.8529806678117712;
    msg.y = 0.5032606909920053;
    msg.z = 0.244009779438499;
    msg.t = 0.2327441504746539;

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
    msg.setTimeStamp(0.8525750889644657);
    msg.setSource(19679U);
    msg.setSourceEntity(203U);
    msg.setDestination(62863U);
    msg.setDestinationEntity(30U);
    msg.timeout = 57365U;
    msg.name.assign("KCRBQNLPTCXWNXUDSSQFLEGDOWQKPXPJNLFTRAGQOGLTXVSWQUMNDVDHOELZPFJEUUQZNMFUCHRIAVSNJBFKIMALEABSYJCIOZQFJWOHSBNZYEGKHHIVGXKPWYVKHBMMAZABRODERABBRWJZNQIGJGOTLKHFFZPDEZDTPBOBLESSV");
    msg.custom.assign("FDRJLPQSPSUEXIREXBPXDWNHUCKMGXDLZDSFZFRUQZGISTMJCVIWBVVJOSGYJEWNBBXJWIETTRVMFQOTPYRUFBXQPCQZTYAXRYAJMSMGVZPAKGDQPJIBWZUWSYEBWTKTNSCPYLFHYUHYUOZZFJRTARHHYDYLPUGDNZUONVMVCARMIGQECFAHOWSABMOZIIIOQLQHHOJCOKDKENAXHIEKCFWBLXSGRLJUEBFKAKTLNTXELKGGC");

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
    msg.setTimeStamp(0.8378152156323707);
    msg.setSource(9356U);
    msg.setSourceEntity(42U);
    msg.setDestination(6275U);
    msg.setDestinationEntity(148U);
    msg.timeout = 30867U;
    msg.name.assign("KRONCWRMZOJHSRVCTNQHKGMHBQNBIBMLEPHXEJVPSFNPLDXOWJFZAJUSGXDZYVBCEREWQQAEZYCQTHIXSDVDOUFXAXZYYXKPWQXIQJYUEPMPYKZMJAUZIHJVOZTCZIDGGFUICGELTFPQBMKQRVGJMVHWRVAEACAWG");
    msg.custom.assign("BKALEYAEXZVFDFEFXIWQFTSJGDZSHNDTCYLRPKTRBIRTLEVQPNAJUZGLCWZOVGJUMXLKSQWJPEDQLDTNWVXQWGIAJJFPVOCZMRAMLWLUBHSPFMSNYYXCZWOYTXMBIHJSKXPEUYFMIKNTNYDHOQKKMDUAPYTKAMOTPERZKUINVKGSNDCHBFBRVJCENOXOIHYJWILEGIZOCSAVUHGRMWXQSGR");

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
    msg.setTimeStamp(0.21634661499416286);
    msg.setSource(63962U);
    msg.setSourceEntity(169U);
    msg.setDestination(1014U);
    msg.setDestinationEntity(15U);
    msg.timeout = 61387U;
    msg.name.assign("NPBXUSWPOSKTJLALJQCADIEMJRYHODWSOLFABSLLJVVVWJBLTVRZBOPRDAWXWTJVOMEZFOGTHKLDNZUWXKLAVDYFSZMCOFZBTEABQNWZRUYLPMPDGUJFSRQDUXQHNICYEOXKGIJCVZLSQGCBUGCNIYHIKNCT");
    msg.custom.assign("OWNVEJQHMZURILSKHZDQULFRRIPMINTURBFXAAKWADSHYEHDJCQPUWKDEAZOZWFLKJXWMANCFUFEYSBBOLPGWEHMYXZDUKHNKTJLRXTHWHQKYSQCRVAKHUNXZQOFORKTYYDOPYN");

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
    msg.setTimeStamp(0.18959030699797463);
    msg.setSource(22866U);
    msg.setSourceEntity(222U);
    msg.setDestination(10016U);
    msg.setDestinationEntity(91U);
    msg.lat = 0.8721452413066424;
    msg.lon = 0.0007883785323476999;
    msg.z = 0.04313194769329354;
    msg.z_units = 191U;
    msg.speed = 0.7847230768620334;
    msg.speed_units = 54U;
    msg.start_time = 0.24288959381629105;
    msg.custom.assign("OCESTTIUEBZVKPRKANMWWYCGPGPDXYBBIGQFKLAIAMAQKCWGWDHEDQPXVBHHAHLZOHPCEFUOCSMMFYLIMKQJXHTTXFMCHGVFDMQJNTAFNUTRERQDGWHJNUSMUYXEOFSYQSQTLFLPBZMNJFDIOXLGSWEBESCLCEKXZWTVBYSRRNLMLCKWTZXVJONBYEOZJZRBRIAJHYYDCGJVZ");

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
    msg.setTimeStamp(0.8215192349835665);
    msg.setSource(23552U);
    msg.setSourceEntity(29U);
    msg.setDestination(35155U);
    msg.setDestinationEntity(60U);
    msg.lat = 0.9634510561732955;
    msg.lon = 0.670179344952406;
    msg.z = 0.4084732280767476;
    msg.z_units = 231U;
    msg.speed = 0.006583480646079054;
    msg.speed_units = 154U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.7745338258113931;
    tmp_msg_0.y = 0.7937239729166488;
    tmp_msg_0.z = 0.8357199758359057;
    tmp_msg_0.t = 0.8323547699923304;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.5029999059728419;
    msg.custom.assign("NNHIRVQIKPVTZSGNLQZWCEUOHJASHJWPRGPCXCUSZQPRYNDYZEOQNKYUYDKHJMMZRLMUSHYEIPLK");

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
    msg.setTimeStamp(0.7936990659935572);
    msg.setSource(41890U);
    msg.setSourceEntity(162U);
    msg.setDestination(52501U);
    msg.setDestinationEntity(217U);
    msg.lat = 0.7793693168449898;
    msg.lon = 0.10572384034481341;
    msg.z = 0.09756523429560149;
    msg.z_units = 40U;
    msg.speed = 0.20752810860656057;
    msg.speed_units = 51U;
    msg.start_time = 0.8183583702429224;
    msg.custom.assign("VCXCALJXIYVGWRIMNHVPZAULIJTPBAXBMMNNKZTYDLVZAZVXGUWAFYVTDPDSKZKTGKCWMGSDEMNHNBPMDFXOJTETKPJDVELNFRBCUEOFCTWDWVDQFWYOBHOUBGTQKSHJZCGZQAOOEPIMKKAXOORUMH");

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
    msg.setTimeStamp(0.19941520650356925);
    msg.setSource(1705U);
    msg.setSourceEntity(88U);
    msg.setDestination(42866U);
    msg.setDestinationEntity(37U);
    msg.vid = 39865U;
    msg.off_x = 0.4002943515645211;
    msg.off_y = 0.07416119711371572;
    msg.off_z = 0.42763259685134614;

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
    msg.setTimeStamp(0.17733783273653458);
    msg.setSource(33771U);
    msg.setSourceEntity(19U);
    msg.setDestination(27298U);
    msg.setDestinationEntity(220U);
    msg.vid = 54493U;
    msg.off_x = 0.805761686786893;
    msg.off_y = 0.5633206258439489;
    msg.off_z = 0.17313966357342436;

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
    msg.setTimeStamp(0.822172255841271);
    msg.setSource(8732U);
    msg.setSourceEntity(49U);
    msg.setDestination(721U);
    msg.setDestinationEntity(115U);
    msg.vid = 55674U;
    msg.off_x = 0.23119570077060292;
    msg.off_y = 0.3722558479146254;
    msg.off_z = 0.1787840376430767;

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
    msg.setTimeStamp(0.07625204789466522);
    msg.setSource(231U);
    msg.setSourceEntity(96U);
    msg.setDestination(51137U);
    msg.setDestinationEntity(176U);

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
    msg.setTimeStamp(0.5031101757986832);
    msg.setSource(4360U);
    msg.setSourceEntity(195U);
    msg.setDestination(23924U);
    msg.setDestinationEntity(140U);

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
    msg.setTimeStamp(0.14409604706574197);
    msg.setSource(21714U);
    msg.setSourceEntity(220U);
    msg.setDestination(688U);
    msg.setDestinationEntity(121U);

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
    msg.setTimeStamp(0.05520164050834642);
    msg.setSource(44845U);
    msg.setSourceEntity(112U);
    msg.setDestination(42491U);
    msg.setDestinationEntity(121U);
    msg.mid = 5185U;

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
    msg.setTimeStamp(0.6180114169254558);
    msg.setSource(4051U);
    msg.setSourceEntity(107U);
    msg.setDestination(15780U);
    msg.setDestinationEntity(194U);
    msg.mid = 18957U;

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
    msg.setTimeStamp(0.055007766365969935);
    msg.setSource(15369U);
    msg.setSourceEntity(229U);
    msg.setDestination(11165U);
    msg.setDestinationEntity(19U);
    msg.mid = 61179U;

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
    msg.setTimeStamp(0.05785452816906311);
    msg.setSource(53878U);
    msg.setSourceEntity(118U);
    msg.setDestination(1636U);
    msg.setDestinationEntity(157U);
    msg.state = 242U;
    msg.eta = 20100U;
    msg.info.assign("ZPDHZFXWYCSOJYAVOWJMTERZDQOLDRKKSCBERIKILVJNBFFCMODYLLNXRVIUGGKTHWVGNJXQILYCWNUWEAKERKRFTJMNDMVQPPSVFQFLLYSASZUVPQCIEZWHPCXODLYKUCOUFYGJWNDJBRGZKQEGGXAZXAH");

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
    msg.setTimeStamp(0.8057734793434563);
    msg.setSource(12086U);
    msg.setSourceEntity(5U);
    msg.setDestination(42549U);
    msg.setDestinationEntity(142U);
    msg.state = 41U;
    msg.eta = 15393U;
    msg.info.assign("IYJKYOMDWDFQO");

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
    msg.setTimeStamp(0.9868161228219332);
    msg.setSource(57456U);
    msg.setSourceEntity(58U);
    msg.setDestination(15156U);
    msg.setDestinationEntity(234U);
    msg.state = 150U;
    msg.eta = 40010U;
    msg.info.assign("EQVXIJYVGPELVQ");

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
    msg.setTimeStamp(0.4632230444532137);
    msg.setSource(57855U);
    msg.setSourceEntity(228U);
    msg.setDestination(25146U);
    msg.setDestinationEntity(204U);
    msg.system = 32323U;
    msg.duration = 3648U;
    msg.speed = 0.4028245969963933;
    msg.speed_units = 237U;
    msg.x = 0.03413674137157774;
    msg.y = 0.990460227462867;
    msg.z = 0.7643047389283665;
    msg.z_units = 122U;

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
    msg.setTimeStamp(0.13271544943249314);
    msg.setSource(33109U);
    msg.setSourceEntity(82U);
    msg.setDestination(36254U);
    msg.setDestinationEntity(222U);
    msg.system = 4923U;
    msg.duration = 1898U;
    msg.speed = 0.9300985486696931;
    msg.speed_units = 74U;
    msg.x = 0.1981873129852607;
    msg.y = 0.3440179737163307;
    msg.z = 0.5699189849441829;
    msg.z_units = 183U;

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
    msg.setTimeStamp(0.3218602201189341);
    msg.setSource(53673U);
    msg.setSourceEntity(117U);
    msg.setDestination(4335U);
    msg.setDestinationEntity(115U);
    msg.system = 23071U;
    msg.duration = 17221U;
    msg.speed = 0.014612235070636581;
    msg.speed_units = 170U;
    msg.x = 0.1496480416115591;
    msg.y = 0.051700599204390185;
    msg.z = 0.32450186454780927;
    msg.z_units = 249U;

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
    msg.setTimeStamp(0.9281235207426016);
    msg.setSource(56677U);
    msg.setSourceEntity(177U);
    msg.setDestination(53379U);
    msg.setDestinationEntity(24U);
    msg.lat = 0.508934369472869;
    msg.lon = 0.14124960940015796;
    msg.speed = 0.1628956976566387;
    msg.speed_units = 173U;
    msg.duration = 16812U;
    msg.sys_a = 16788U;
    msg.sys_b = 50522U;
    msg.move_threshold = 0.29318308130461157;

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
    msg.setTimeStamp(0.10998093869081116);
    msg.setSource(38596U);
    msg.setSourceEntity(47U);
    msg.setDestination(59952U);
    msg.setDestinationEntity(117U);
    msg.lat = 0.9223876887817238;
    msg.lon = 0.8499339009857365;
    msg.speed = 0.9291204777054076;
    msg.speed_units = 42U;
    msg.duration = 658U;
    msg.sys_a = 14734U;
    msg.sys_b = 13868U;
    msg.move_threshold = 0.0094984225996948;

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
    msg.setTimeStamp(0.8109952134965878);
    msg.setSource(15825U);
    msg.setSourceEntity(29U);
    msg.setDestination(57369U);
    msg.setDestinationEntity(114U);
    msg.lat = 0.8269250341581893;
    msg.lon = 0.8632933122482532;
    msg.speed = 0.35800126629065265;
    msg.speed_units = 84U;
    msg.duration = 58095U;
    msg.sys_a = 58861U;
    msg.sys_b = 52193U;
    msg.move_threshold = 0.7149444022911924;

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
    msg.setTimeStamp(0.22406281078867218);
    msg.setSource(12232U);
    msg.setSourceEntity(254U);
    msg.setDestination(26506U);
    msg.setDestinationEntity(33U);
    msg.lat = 0.06348787231309982;
    msg.lon = 0.8443799843161837;
    msg.z = 0.4114397450853021;
    msg.z_units = 138U;
    msg.speed = 0.6089239320684915;
    msg.speed_units = 123U;
    msg.custom.assign("QYENAAOCQLXXIMA");

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
    msg.setTimeStamp(0.40020569822147667);
    msg.setSource(35448U);
    msg.setSourceEntity(136U);
    msg.setDestination(63860U);
    msg.setDestinationEntity(158U);
    msg.lat = 0.23527670119328403;
    msg.lon = 0.44423477144427426;
    msg.z = 0.23287524337947174;
    msg.z_units = 38U;
    msg.speed = 0.05394085160426121;
    msg.speed_units = 59U;
    msg.custom.assign("BGGQEYMFIYCNSUMOSXKGVLOVDQIKMRJYYWAJURBXECYMTTCEFKIDSQUKPRTBFBKEQPMUDFATPMNLQJAKEPT");

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
    msg.setTimeStamp(0.2554386234189838);
    msg.setSource(29674U);
    msg.setSourceEntity(123U);
    msg.setDestination(41201U);
    msg.setDestinationEntity(30U);
    msg.lat = 0.29281512441050994;
    msg.lon = 0.5316864723119997;
    msg.z = 0.030237546436575058;
    msg.z_units = 81U;
    msg.speed = 0.3760126591407904;
    msg.speed_units = 180U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.456902432520349;
    tmp_msg_0.lon = 0.11639364362474658;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("JUPLQCYWNZEAHLXEKMKYOXDNPSFRQRMDVIVUYBMFPMQOUWVADLBGALMCXKNHUOTNXJMHLDTMFSIRTTBFMWQVLZXVBZGZNAISOVEVGJJTSRQYLPNWPYGJYUPXSBYRHULPMGWIGCWEEUZODQNLPJCFGIQRKSYXTZHOHHNEAQZYDYCCQTAUGUCBRKQNFHDODWGIWXBXCVBRJIPREEPDIULKOKECHZTJVIOWIRJNSSTBSZZESFTAAXOFMWKHDA");

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
    msg.setTimeStamp(0.4965502125851946);
    msg.setSource(50477U);
    msg.setSourceEntity(11U);
    msg.setDestination(58771U);
    msg.setDestinationEntity(50U);
    msg.lat = 0.6835591192201235;
    msg.lon = 0.2872389194954943;

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
    msg.setTimeStamp(0.07073646230168817);
    msg.setSource(10260U);
    msg.setSourceEntity(41U);
    msg.setDestination(58603U);
    msg.setDestinationEntity(168U);
    msg.lat = 0.0913573592399547;
    msg.lon = 0.0879795560536415;

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
    msg.setTimeStamp(0.12802196051069603);
    msg.setSource(19136U);
    msg.setSourceEntity(0U);
    msg.setDestination(56966U);
    msg.setDestinationEntity(124U);
    msg.lat = 0.004112866554931038;
    msg.lon = 0.06846462421125099;

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
    msg.setTimeStamp(0.17418493369874);
    msg.setSource(45804U);
    msg.setSourceEntity(27U);
    msg.setDestination(1941U);
    msg.setDestinationEntity(57U);
    msg.timeout = 25136U;
    msg.lat = 0.6307614720740935;
    msg.lon = 0.058614108299485435;
    msg.z = 0.30825611950518617;
    msg.z_units = 182U;
    msg.pitch = 0.6939779204431309;
    msg.amplitude = 0.21923020357022316;
    msg.duration = 45302U;
    msg.speed = 0.7253669724439784;
    msg.speed_units = 177U;
    msg.radius = 0.28880291348648734;
    msg.direction = 109U;
    msg.custom.assign("XJHEGEOTEYRBBLONTQTCZNIUQIGJLIHYMJEKLKNTHZDWAVXVQLNFLPAYAXYITUXCMCNOUBCVQCZHKRMSBFUFZPLEB");

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
    msg.setTimeStamp(0.0856671541612074);
    msg.setSource(15576U);
    msg.setSourceEntity(57U);
    msg.setDestination(56979U);
    msg.setDestinationEntity(49U);
    msg.timeout = 43584U;
    msg.lat = 0.007470385055537099;
    msg.lon = 0.3012067951041346;
    msg.z = 0.8672325055542573;
    msg.z_units = 130U;
    msg.pitch = 0.7644635394986787;
    msg.amplitude = 0.15589376849017145;
    msg.duration = 19689U;
    msg.speed = 0.9684786217764115;
    msg.speed_units = 212U;
    msg.radius = 0.6226748459488416;
    msg.direction = 178U;
    msg.custom.assign("ZQPLBWOUVHVWOKUUVTILIIKBUOUMBVHGBGRUCTKRRENOQYQFZATJFSEHRKHYTVECNPLDFAPBAHCJPOYMLAPPRZZRUEJVDBQGGXWSKNBZKDKNAPAIXYSYBATSNJKVUZQSTFLTLSNIQK");

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
    msg.setTimeStamp(0.1025803518877143);
    msg.setSource(31853U);
    msg.setSourceEntity(183U);
    msg.setDestination(65534U);
    msg.setDestinationEntity(235U);
    msg.timeout = 57285U;
    msg.lat = 0.5019452726502169;
    msg.lon = 0.5072894960564757;
    msg.z = 0.9103406132919858;
    msg.z_units = 235U;
    msg.pitch = 0.3490558437417841;
    msg.amplitude = 0.0690013633296187;
    msg.duration = 62580U;
    msg.speed = 0.08303125106417264;
    msg.speed_units = 119U;
    msg.radius = 0.48944891564531967;
    msg.direction = 101U;
    msg.custom.assign("WGTRKZZPVUKSBCYKQQQBBIR");

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
    msg.setTimeStamp(0.29616563909174365);
    msg.setSource(38150U);
    msg.setSourceEntity(128U);
    msg.setDestination(23686U);
    msg.setDestinationEntity(50U);
    msg.formation_name.assign("XFBRGCMOMEORYNJMAWQADHGUNOQNGVZLHZPFPFEGJWIBVQXHWUDAVDAOCKRTDEQEJLTYNTVZIEYBXPSCERKDMXBLDROKETSOYGMUADWJLVJQMCIOUJMDHSAIXZBHMBVXCNLHRTHBGHSUFNSFBIYLFPVKTZKHNWSLPFKILKMVLUAXFKJFWEOIFSASAGYJQQRNHYGCOGEQSVJ");
    msg.reference_frame = 183U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 40123U;
    tmp_msg_0.off_x = 0.6551219542552198;
    tmp_msg_0.off_y = 0.6154574404555649;
    tmp_msg_0.off_z = 0.6135407477359166;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("JCNWOTQPUKQEEPRXMXNMTHTZWPIBIMLYOJVRKBSRMLOWMXRQTLNGQXOKJENIWPPRHFFVKQNTHTDTKHOYHELNHAEXIHSMOMAGNZXOZUQAAOAMZZIWZYEFKUSHVGFDWBSVLFBHCTLFSCOMVIUX");

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
    msg.setTimeStamp(0.5425286044207291);
    msg.setSource(55848U);
    msg.setSourceEntity(189U);
    msg.setDestination(13405U);
    msg.setDestinationEntity(211U);
    msg.formation_name.assign("DQSHOAFHRFNMEENKYKJEPIFKYFXCEWSIJWBQNYLZVSPRPOBGVBCKTFUXNFXSNUIBFIOIKJHCBTOZPAPDZQHGRQIDBZVEOOVQHLPAOTXXMWEJ");
    msg.reference_frame = 168U;
    msg.custom.assign("HROZKEXTPSJISUCTGMELUOSXPAXDFTHVWSLMEKEIULCDNOWYKCSYPLUHKWGBVMBIRPFNILAXMUYCWFOIOHRONXVILHXYDCIJLTNZBGBGDQRFCMWTTAQDWHTCANOQXQYCANKXATMOQYSPJOWDVGRCXILQGZMRPFPYRQGFTMCHIYAKMBVUJJSEZZVVRDJQWFJWDKSN");

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
    msg.setTimeStamp(0.16301556615367352);
    msg.setSource(9869U);
    msg.setSourceEntity(184U);
    msg.setDestination(1434U);
    msg.setDestinationEntity(46U);
    msg.formation_name.assign("OLWQYXNKBCEFAEHXEWXUDPKFWLDSYOJBLWWVSCHMMSVXHNOZOHNZXPFELDBLGKSTDEBJGPABJIJVYVCVVWUFRYTVVJKIZFSYDCOEMQRTTIJZHIZFIPHBJVTWCTYRNHRQBIJAIRZUPRXKYYMAOXDF");
    msg.reference_frame = 67U;
    msg.custom.assign("BWUJGKZOFZQRFWNSUOTMEAEOPHKQLJLHSHSMKRDBBLQMNXLECYUTDHSOXCSNUVPMDEHLXNMWEVTYLLFCVHSFJXEVCBACVDABWRCQNXUVPKRMZGVTZIEUIHIISRPJYYLKZTOYARIDBAJFLXAVRSPMQXCWLBBDIDGEONRCQOCMNGHOGWGUIDTPYAYKHYRZWVUZZFVGOWZBQTITQSEJYOJKJPWSANNQMGJFXBIKEPADUXPGWTHK");

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
    msg.setTimeStamp(0.0535901616522132);
    msg.setSource(11378U);
    msg.setSourceEntity(146U);
    msg.setDestination(33793U);
    msg.setDestinationEntity(79U);
    msg.group_name.assign("CIHPGJGERBXOUEDVYXPPMXSWUQYXBELZCASILIWXBMFWKWQGJVHAJPOPAVJUFAYJYTJVMRCNPTHMPJZITTMGGNQNRFDKOHOQTTNXUYSVVKQGIQXLJMECFJAREOIQFVZGOSIDLLM");
    msg.formation_name.assign("YEYXIAQPCQDJKZREEMQRPBFQMIUUNCKOTJYKUUADILLFMBWSQOPFFHZXRWBFNPQCCRBTGLXXEBNPNGBLJMBRVBPAPVWYNVOKVEGLGNICTJUSMB");
    msg.plan_id.assign("HQSCLVSMWAFBQOYSCNOPUQQKROSKWXBICLVDOIDQJXAOSHKNHBEMCUBYGDZJFRYLIIXWYLDJUAUJEPSEQRTZLZEKACRVFHBGNTCMNZETKHFNJZNYCVQGVWLUMZNYHPVIBRMDVOUVSOAXIAFOYNWMPTDUCKWYRXTPAHXSGERIGBDFGFKQMKPMTD");
    msg.description.assign("TJUGTXGFFIMYBVZKPQQICTETVZVBTKHDBGPHNQVDDEVHKCMUBQEBUAIXLHVRWBXYOYYLZYPRQMLOMGPAJXDFWDOETJSNNUBRZQUVJGCIWWRLAXBXYKZOPDTKNXASVJHNRPUKMFGZQFQONMRADNZHHJCLZRKXFMLRNOEGSAELMGCGLAUTQNFUOXBMWGCWKQEIJFTFWSBLERPYIHJOASPCAWRVHFNMEKIKOCPDSTSXSEHOYUIZYCJWLCW");
    msg.leader_speed = 0.5775003022464099;
    msg.leader_bank_lim = 0.12567430744309926;
    msg.pos_sim_err_lim = 0.08027041817488734;
    msg.pos_sim_err_wrn = 0.04090998922400235;
    msg.pos_sim_err_timeout = 3508U;
    msg.converg_max = 0.8178528276757993;
    msg.converg_timeout = 29387U;
    msg.comms_timeout = 60308U;
    msg.turb_lim = 0.6160790229431615;
    msg.custom.assign("ZHLIWPKNYCBFUAMNHESLQWUOWENHJMRYCVOHXBYRBGDJORQDLYJQKKDLCAYYIZJLNYIILUPGCXBDQRGFVJMWSCMHXNDVZGFIYMWERMXTJTJEXPVLVCKMANQNEPETPMQDCQHXFBTLYMVLTYOBWEZXUFAVENTSUBCAAPOIJDOFPXS");

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
    msg.setTimeStamp(0.3695960977875501);
    msg.setSource(41758U);
    msg.setSourceEntity(217U);
    msg.setDestination(5089U);
    msg.setDestinationEntity(60U);
    msg.group_name.assign("QCYCIGAGJRWMMPEMXXVPLPCBXNUZAEVNLUDSKGFLIQCTBSERZFJLQFVINYBDSIZHQHABJKSHGLXXWRSGYIWIHYGWXNELEJJABQDMMXHLSGOUAQZMSHUSDPT");
    msg.formation_name.assign("QZCWAPQOREHDJWVWMXDEHIABXGFSK");
    msg.plan_id.assign("GUEVZROZULBRLYKRNIHYAFSFOUCRDQLIYLOJYZTEWDJJLPBCTTPFMVQIJINUNSYGSXGAXKPLKUIEJQZMOGYAKFCXSQIOWZXFRSFESVNAELSBHLXDERQJHXHAPSNUCDQTWVLCOXROGAPFWCEGMWHFAKGVJWHNKBVYDZGOPYGVHDRNISIPUNCNEQZDDKTMFBWBHDKOTQTIJTYJVZUQZVKAREJSMKFHGUXPAWHURTEXBIMOMBCMLNMC");
    msg.description.assign("ZREZKRREFKJMLXLPVGUVXYITLSWDSDDGCWAULIGVXANJBHPZBOMAMYCFYKGFJNXTTHRXNIDFPWQAMGBELNUONJMWSGYMKUCZTFGHISTBHSNIQOXTERDGSFGOADAUMFDIQJHQVEHRWPJWUYJYSPPWLALRSCIPZMCBVYKLSVMBRZOWHHDEEOBBKDCQTAZNQUTQKTNJWZVVINXNHYUE");
    msg.leader_speed = 0.38507708290033826;
    msg.leader_bank_lim = 0.24975298052425599;
    msg.pos_sim_err_lim = 0.9031363611468848;
    msg.pos_sim_err_wrn = 0.9014052075500556;
    msg.pos_sim_err_timeout = 61206U;
    msg.converg_max = 0.9613882696452162;
    msg.converg_timeout = 7521U;
    msg.comms_timeout = 56262U;
    msg.turb_lim = 0.5395884846929647;
    msg.custom.assign("MJLCAWKQHDSJYLTZGDRHAPFEBOKMFTHYAOELDKNXXFRNDZPJEFC");

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
    msg.setTimeStamp(0.8453813962925465);
    msg.setSource(14707U);
    msg.setSourceEntity(241U);
    msg.setDestination(37490U);
    msg.setDestinationEntity(193U);
    msg.group_name.assign("EJZTNQVDPWZZUXGTCGPGDSBVTPVPNQLRQFHMAX");
    msg.formation_name.assign("NBGOLCPYYXXSNSIFDKUCVBSQUTGDGKNHMVSPZMZETHCMOFGRSDQTNQDYIACFULQSLJJFUWMZLJXEGURLCSPNHIKDQHAYYBNRKKBAZHEPDN");
    msg.plan_id.assign("ZFWYADLLNNEWSFWROUHUQUTFQERXCPQMYYPRFOLEXVVQQUBEJNCTJGSGJSYNVBCAYURBKQQADBJOONICTPKLEZFJLXHSHESRHDNVWVRXNZNSMZIZXGXPJWU");
    msg.description.assign("PXBOQDEPDKFVZNQANFGNFVYKMBTXUOGHGELPNVWWAVXAHUXUMRQZIAZHUUGOIQGLQLZJRPBWWQTREAMFLMYDITOGFSCBBMVCRERKMERTXZJMZDHVDUCLFBSHMAKXUJPOLMDNHFNYFZYTOIASLZIZHSGIUGQVTPBAHSKBVKJCVIYXKQKYDKEEFLRSYCQRAILJLMJAJJYTKRCWPOXNHYWDWQSCUWGVOONCTHORCNCJIBEUTWTBPDWSI");
    msg.leader_speed = 0.8184684792153559;
    msg.leader_bank_lim = 0.0328660870023475;
    msg.pos_sim_err_lim = 0.35983036296670323;
    msg.pos_sim_err_wrn = 0.2438319681908233;
    msg.pos_sim_err_timeout = 9911U;
    msg.converg_max = 0.03869935394189605;
    msg.converg_timeout = 42760U;
    msg.comms_timeout = 13538U;
    msg.turb_lim = 0.9053930427795822;
    msg.custom.assign("XXBZHGLATEIJTEEDSODUZRSZSEJWAASKCTVFUXUCTQMEKVMRMQIFPYLOMWVGIBMJHALPSRJZBWONMIRHKMXUYEKXACONCLHGDCGHQREDAZAKHZLLGWF");

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
    msg.setTimeStamp(0.9165520997248204);
    msg.setSource(18431U);
    msg.setSourceEntity(31U);
    msg.setDestination(9844U);
    msg.setDestinationEntity(203U);
    msg.control_src = 60296U;
    msg.control_ent = 122U;
    msg.timeout = 0.1484572828726406;
    msg.loiter_radius = 0.8136542587103273;
    msg.altitude_interval = 0.033992656534293064;

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
    msg.setTimeStamp(0.5127187701140902);
    msg.setSource(39194U);
    msg.setSourceEntity(8U);
    msg.setDestination(26027U);
    msg.setDestinationEntity(184U);
    msg.control_src = 7114U;
    msg.control_ent = 23U;
    msg.timeout = 0.14023024508005077;
    msg.loiter_radius = 0.6800713214921441;
    msg.altitude_interval = 0.2964200646952777;

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
    msg.setTimeStamp(0.9925745233851867);
    msg.setSource(54209U);
    msg.setSourceEntity(246U);
    msg.setDestination(47082U);
    msg.setDestinationEntity(132U);
    msg.control_src = 50477U;
    msg.control_ent = 217U;
    msg.timeout = 0.3367127253780967;
    msg.loiter_radius = 0.9385184436977836;
    msg.altitude_interval = 0.42782197809732525;

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
    msg.setTimeStamp(0.583204220345138);
    msg.setSource(16973U);
    msg.setSourceEntity(237U);
    msg.setDestination(42056U);
    msg.setDestinationEntity(77U);
    msg.flags = 186U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.9853489803793284;
    tmp_msg_0.speed_units = 110U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.7647897616181324;
    tmp_msg_1.z_units = 127U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.9517482512394718;
    msg.lon = 0.5741248856376105;
    msg.radius = 0.7482573057730559;

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
    msg.setTimeStamp(0.5449654170763356);
    msg.setSource(21843U);
    msg.setSourceEntity(21U);
    msg.setDestination(28745U);
    msg.setDestinationEntity(169U);
    msg.flags = 85U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.7401151014454843;
    tmp_msg_0.speed_units = 12U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.9822183925528173;
    tmp_msg_1.z_units = 10U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.3586924434259021;
    msg.lon = 0.4655570105273952;
    msg.radius = 0.4164123683526123;

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
    msg.setTimeStamp(0.30250598637260495);
    msg.setSource(61915U);
    msg.setSourceEntity(38U);
    msg.setDestination(61662U);
    msg.setDestinationEntity(88U);
    msg.flags = 167U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.8994535151620472;
    tmp_msg_0.speed_units = 119U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.6712037162921297;
    tmp_msg_1.z_units = 72U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.8037255370080615;
    msg.lon = 0.4376751260501943;
    msg.radius = 0.5558372720040533;

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
    msg.setTimeStamp(0.6813429017093763);
    msg.setSource(9770U);
    msg.setSourceEntity(185U);
    msg.setDestination(59198U);
    msg.setDestinationEntity(175U);
    msg.control_src = 24506U;
    msg.control_ent = 71U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 96U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.27126837313124164;
    tmp_tmp_msg_0_0.speed_units = 221U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.44738395558238586;
    tmp_tmp_msg_0_1.z_units = 232U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.3724637506512982;
    tmp_msg_0.lon = 0.7560377627051315;
    tmp_msg_0.radius = 0.22117014697603032;
    msg.reference.set(tmp_msg_0);
    msg.state = 111U;
    msg.proximity = 197U;

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
    msg.setTimeStamp(0.20405412372885934);
    msg.setSource(8496U);
    msg.setSourceEntity(38U);
    msg.setDestination(49774U);
    msg.setDestinationEntity(78U);
    msg.control_src = 54754U;
    msg.control_ent = 83U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 150U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.9873901129014676;
    tmp_tmp_msg_0_0.speed_units = 218U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.5038317283307282;
    tmp_tmp_msg_0_1.z_units = 168U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.3492230377005012;
    tmp_msg_0.lon = 0.5846425438785325;
    tmp_msg_0.radius = 0.110784934772714;
    msg.reference.set(tmp_msg_0);
    msg.state = 50U;
    msg.proximity = 26U;

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
    msg.setTimeStamp(0.49289948744896717);
    msg.setSource(18252U);
    msg.setSourceEntity(198U);
    msg.setDestination(31890U);
    msg.setDestinationEntity(54U);
    msg.control_src = 1594U;
    msg.control_ent = 31U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 88U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.37087464656034863;
    tmp_tmp_msg_0_0.speed_units = 75U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.17888984976321576;
    tmp_tmp_msg_0_1.z_units = 11U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.7718123176362509;
    tmp_msg_0.lon = 0.04382880690733204;
    tmp_msg_0.radius = 0.8188344283467383;
    msg.reference.set(tmp_msg_0);
    msg.state = 96U;
    msg.proximity = 186U;

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
    msg.setTimeStamp(0.5707945818335951);
    msg.setSource(51266U);
    msg.setSourceEntity(186U);
    msg.setDestination(61423U);
    msg.setDestinationEntity(95U);
    msg.ax_cmd = 0.08569669256743884;
    msg.ay_cmd = 0.10093365212081806;
    msg.az_cmd = 0.1471631119763972;
    msg.ax_des = 0.28555734644959574;
    msg.ay_des = 0.6390052067516604;
    msg.az_des = 0.013289566662567087;
    msg.virt_err_x = 0.9734983294622842;
    msg.virt_err_y = 0.7889399564168111;
    msg.virt_err_z = 0.42013363442356444;
    msg.surf_fdbk_x = 0.6257524290750186;
    msg.surf_fdbk_y = 0.31789111709685824;
    msg.surf_fdbk_z = 0.13189368671472523;
    msg.surf_unkn_x = 0.7328266174594745;
    msg.surf_unkn_y = 0.620423935939867;
    msg.surf_unkn_z = 0.06354215612701397;
    msg.ss_x = 0.22385689638453854;
    msg.ss_y = 0.41360529645901856;
    msg.ss_z = 0.9139865477579732;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("OSWVSEQUPMRFJDKLLTHNREBBXDSOTPIVVSOIYFHBKNLIYYNTSLAHOSPYYPIZXLVWYEPJTQCTBUBUFRZYHDLCBIKDVHEEQHFJGVTBCULNAQRJKKVUCXUWWGQHMR");
    tmp_msg_0.dist = 0.4484253750236121;
    tmp_msg_0.err = 0.7498072809777501;
    tmp_msg_0.ctrl_imp = 0.23801397189742268;
    tmp_msg_0.rel_dir_x = 0.14453137811927053;
    tmp_msg_0.rel_dir_y = 0.46442887933548205;
    tmp_msg_0.rel_dir_z = 0.3537332696152298;
    tmp_msg_0.err_x = 0.2730983530689084;
    tmp_msg_0.err_y = 0.11887390804749476;
    tmp_msg_0.err_z = 0.3161374511724543;
    tmp_msg_0.rf_err_x = 0.6722576087344866;
    tmp_msg_0.rf_err_y = 0.9267072993892311;
    tmp_msg_0.rf_err_z = 0.16465377190263475;
    tmp_msg_0.rf_err_vx = 0.42000516908468744;
    tmp_msg_0.rf_err_vy = 0.8032727499456124;
    tmp_msg_0.rf_err_vz = 0.026575543281734393;
    tmp_msg_0.ss_x = 0.7401954169720514;
    tmp_msg_0.ss_y = 0.4112709824465792;
    tmp_msg_0.ss_z = 0.9979111801823621;
    tmp_msg_0.virt_err_x = 0.5004716104362315;
    tmp_msg_0.virt_err_y = 0.23390652198516249;
    tmp_msg_0.virt_err_z = 0.5427338128437654;
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
    msg.setTimeStamp(0.8913770038261861);
    msg.setSource(14057U);
    msg.setSourceEntity(47U);
    msg.setDestination(30732U);
    msg.setDestinationEntity(37U);
    msg.ax_cmd = 0.7978838284002312;
    msg.ay_cmd = 0.9528508461682536;
    msg.az_cmd = 0.45086356827371876;
    msg.ax_des = 0.9539057044823256;
    msg.ay_des = 0.9663098398022915;
    msg.az_des = 0.20559303096892345;
    msg.virt_err_x = 0.8802523249605922;
    msg.virt_err_y = 0.8513887805399734;
    msg.virt_err_z = 0.5581752282264089;
    msg.surf_fdbk_x = 0.6389642865372389;
    msg.surf_fdbk_y = 0.09599782097258569;
    msg.surf_fdbk_z = 0.43334907924592914;
    msg.surf_unkn_x = 0.8665653908096944;
    msg.surf_unkn_y = 0.052106913785541664;
    msg.surf_unkn_z = 0.24676708564147365;
    msg.ss_x = 0.6849512328367084;
    msg.ss_y = 0.18080078534710486;
    msg.ss_z = 0.4356171395845627;

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
    msg.setTimeStamp(0.34488818247762476);
    msg.setSource(34348U);
    msg.setSourceEntity(167U);
    msg.setDestination(46402U);
    msg.setDestinationEntity(157U);
    msg.ax_cmd = 0.15424952283012539;
    msg.ay_cmd = 0.31577235971865025;
    msg.az_cmd = 0.31935623270378866;
    msg.ax_des = 0.8116519005706546;
    msg.ay_des = 0.3045826557848209;
    msg.az_des = 0.06400087442641833;
    msg.virt_err_x = 0.2326709492808584;
    msg.virt_err_y = 0.8286734436240948;
    msg.virt_err_z = 0.9018551323977502;
    msg.surf_fdbk_x = 0.7069081939340178;
    msg.surf_fdbk_y = 0.11238162126570339;
    msg.surf_fdbk_z = 0.0595474463343425;
    msg.surf_unkn_x = 0.27025135064657013;
    msg.surf_unkn_y = 0.35262443337860394;
    msg.surf_unkn_z = 0.49563372284763474;
    msg.ss_x = 0.7829157384509408;
    msg.ss_y = 0.8614498584680128;
    msg.ss_z = 0.4192620886301547;

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
    msg.setTimeStamp(0.040728859900003966);
    msg.setSource(64556U);
    msg.setSourceEntity(79U);
    msg.setDestination(33057U);
    msg.setDestinationEntity(45U);
    msg.s_id.assign("NUZJUASFVAZSDEYMQYJMWNHMXALIBHPNEXHSGXFYEPQISAXCQQPEBIWOTGOEBJLHKQSVFGNGKLNUDPZTMYPILPVICSVYVMWRPEOIUDCILUJEQMXCLPCBZWRRKFRMWRFXXXBBWEUYFDNKWLJCNTITQKJSNBOHQCXVFFGUCOVRJWEDKTVROFCGRHIYZIZRSGYYVHDKTPATLFDWAPTTAKNDHXAQU");
    msg.dist = 0.9264836392234538;
    msg.err = 0.052515492078091475;
    msg.ctrl_imp = 0.09242226332162495;
    msg.rel_dir_x = 0.9309066255729023;
    msg.rel_dir_y = 0.899967626316374;
    msg.rel_dir_z = 0.2538478291343197;
    msg.err_x = 0.749840656529647;
    msg.err_y = 0.26717937730218266;
    msg.err_z = 0.06570616873319846;
    msg.rf_err_x = 0.5580171806605905;
    msg.rf_err_y = 0.3688934994914841;
    msg.rf_err_z = 0.9493862993393314;
    msg.rf_err_vx = 0.2794011699342752;
    msg.rf_err_vy = 0.07735995969960596;
    msg.rf_err_vz = 0.9149272682136407;
    msg.ss_x = 0.8376236917914899;
    msg.ss_y = 0.7858046597821001;
    msg.ss_z = 0.27775969437417125;
    msg.virt_err_x = 0.8696263818483294;
    msg.virt_err_y = 0.38775385715349886;
    msg.virt_err_z = 0.33004837860191694;

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
    msg.setTimeStamp(0.26941615953275644);
    msg.setSource(26454U);
    msg.setSourceEntity(129U);
    msg.setDestination(65346U);
    msg.setDestinationEntity(131U);
    msg.s_id.assign("LJHUORQXSTVRXSKMNJZEQJMTSYLAUXKTEIWXGBODHJTKAQPMSDBGDIPCUUSRLAHAGQTLVWV");
    msg.dist = 0.5843591864989969;
    msg.err = 0.545245399746907;
    msg.ctrl_imp = 0.44938855141835865;
    msg.rel_dir_x = 0.0430290064728438;
    msg.rel_dir_y = 0.41936038251565655;
    msg.rel_dir_z = 0.39682908114289195;
    msg.err_x = 0.379803292236355;
    msg.err_y = 0.3700559667105686;
    msg.err_z = 0.9213942466352937;
    msg.rf_err_x = 0.9582294317526363;
    msg.rf_err_y = 0.7113831792170444;
    msg.rf_err_z = 0.4094406033700587;
    msg.rf_err_vx = 0.549279169405256;
    msg.rf_err_vy = 0.8952742731749493;
    msg.rf_err_vz = 0.5319569590444992;
    msg.ss_x = 0.43654581995909025;
    msg.ss_y = 0.34692823007799845;
    msg.ss_z = 0.5769195518755518;
    msg.virt_err_x = 0.3057232125482259;
    msg.virt_err_y = 0.8758043980374106;
    msg.virt_err_z = 0.7176766802929702;

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
    msg.setTimeStamp(0.06672547114440341);
    msg.setSource(42427U);
    msg.setSourceEntity(189U);
    msg.setDestination(41657U);
    msg.setDestinationEntity(50U);
    msg.s_id.assign("JWYWWYYNDQRRJBLXPWORZVSAJSHKLCUAGSHTMBQQFKGHKKGXBVLGDSFQTXVZUYPXTOILBLMDAVYRCAXEIQJVPUIBVXJWLIHHUCKRVGPNCCEACGWXXNSFFOCMLJAJBDYOPBAYHOSIMHFNYGGVDKPISDMQLPRETNONZRYZBMYSCJUWTWZIZJNANVJNRHGRVQUEEFXDOZIORPQUWMXSOIUEKPBSTGPTQHDFQTEHULMFAZUTOML");
    msg.dist = 0.7191785707852199;
    msg.err = 0.2902570471355278;
    msg.ctrl_imp = 0.7671296167378207;
    msg.rel_dir_x = 0.9959168018956305;
    msg.rel_dir_y = 0.5929699864078302;
    msg.rel_dir_z = 0.9121021628123428;
    msg.err_x = 0.4383080161960491;
    msg.err_y = 0.46131497636244556;
    msg.err_z = 0.7142973106953239;
    msg.rf_err_x = 0.08426327733020522;
    msg.rf_err_y = 0.3028438564555894;
    msg.rf_err_z = 0.23991113762699856;
    msg.rf_err_vx = 0.21774394760251337;
    msg.rf_err_vy = 0.2340774787836315;
    msg.rf_err_vz = 0.16275860323555158;
    msg.ss_x = 0.582493426940172;
    msg.ss_y = 0.25025411900958217;
    msg.ss_z = 0.47912133021024395;
    msg.virt_err_x = 0.2087504788862944;
    msg.virt_err_y = 0.5687414202902807;
    msg.virt_err_z = 0.929533305963281;

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
    msg.setTimeStamp(0.27431923671125846);
    msg.setSource(36017U);
    msg.setSourceEntity(232U);
    msg.setDestination(8967U);
    msg.setDestinationEntity(77U);
    msg.timeout = 23544U;
    msg.rpm = 0.5740339927849851;
    msg.direction = 68U;
    msg.custom.assign("JEUGCJUXDQQPWYMNMESVCJQBNVGAFVGRYTOAFPQYQSJBQISNEPIDMVWICASDPSNWOXZUMZAUHRFERLQPPHBBQMKHKFZXRNKXZWCVJKDYFSSETKUUMHNHOHBSBDLIKNLTOJIDAIHNVKLOTEZSPLIUVBSOTTTLXFXIAVOFZDWRACAPKYEAUJRYGYLWEMDXZGZLORDXCJGRGTMCXQPOWWTGFPVINOKVLLCECMCTHFJKWYFNQMHJZGZBBR");

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
    msg.setTimeStamp(0.7202274728747251);
    msg.setSource(53507U);
    msg.setSourceEntity(166U);
    msg.setDestination(10378U);
    msg.setDestinationEntity(198U);
    msg.timeout = 44825U;
    msg.rpm = 0.051669434041569984;
    msg.direction = 193U;
    msg.custom.assign("BNZKXBSTZEPRRMUBJS");

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
    msg.setTimeStamp(0.6147564449816166);
    msg.setSource(40025U);
    msg.setSourceEntity(3U);
    msg.setDestination(15749U);
    msg.setDestinationEntity(31U);
    msg.timeout = 38959U;
    msg.rpm = 0.2701896252708317;
    msg.direction = 67U;
    msg.custom.assign("BUBPCWQWMVLUXTUDSWWGYVNQPFQCYFFCRPWCSVVUCZSYXIOZHYPMTPIDZAMKJRAISWDZTHKRZBMXMMCGVYCNQOJGXPENKFPAVEYLJKDMLAIREYQRUYZKRTSITROKUDVAIUBXHAQLOOCMJCXVJNAFTNDSJOHWIZUFNWBBAHXBOUZNLNIKERVGHILYYQMQOG");

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
    msg.setTimeStamp(0.574235542555765);
    msg.setSource(47415U);
    msg.setSourceEntity(149U);
    msg.setDestination(16667U);
    msg.setDestinationEntity(104U);
    msg.formation_name.assign("KMRJCJWIVFQRYDONPX");
    msg.type = 142U;
    msg.op = 8U;
    msg.group_name.assign("YBGNCHNSYBQGVUMKFD");
    msg.plan_id.assign("ICAFGAGEDRFHVVXRIWAJTDTZRXFHBSPTIIMUYWHEUZOFNWDXHCLYXTQKZZNMNFRQVVJUAHMDSBBSUOJOAIPOMGFA");
    msg.description.assign("SALWFTMGCCKESZTBHVUPICPBEQQJEOHMDIBADLEHWEAXFSQSMDGGWJYTWMOOKYTZFMMUOUBNRSIGP");
    msg.reference_frame = 246U;
    msg.leader_bank_lim = 0.25000488852729563;
    msg.leader_speed_min = 0.962850449842229;
    msg.leader_speed_max = 0.8302131212546808;
    msg.leader_alt_min = 0.5214694408724515;
    msg.leader_alt_max = 0.030249817864518747;
    msg.pos_sim_err_lim = 0.4102088461273059;
    msg.pos_sim_err_wrn = 0.24756808503896388;
    msg.pos_sim_err_timeout = 30463U;
    msg.converg_max = 0.5191186221549943;
    msg.converg_timeout = 14601U;
    msg.comms_timeout = 35525U;
    msg.turb_lim = 0.5953299368500885;
    msg.custom.assign("ATSISUVBQMJOMPXTWCAVBIFLCTETNROKBLYWDZZRJOHKVIOELVISTTPSSAEMJRIOXLHUBGJZIXDYDZKZHXUBCHFPVQFFMYOUQZRSYJEVKZWDVKQDEFGNLRCCEJFYQPAHLJZOECLNUMEXHNPFNDHAYXXMATWGEWRGHWUMGLRMTYPFGQAQJCRQPWPOOISBYXASLRHVCMDQAGPKNDYIIRBGFWCKADGUZNXTDOVHZJBGUTSUNKCNKB");

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
    msg.setTimeStamp(0.220883718758069);
    msg.setSource(43948U);
    msg.setSourceEntity(84U);
    msg.setDestination(37710U);
    msg.setDestinationEntity(189U);
    msg.formation_name.assign("LZDNEKDVBPJJRHEQBZCQNHZIQAJVMZTOFVLFRVGYMXFJIGRGACMUMNKXUUSTPYIBKXTKMXCYCJDSOMPDGNPEUTSYYAABEKODMNWAETCZWIQDQWIWSZSRBALVFEMDVHWLEXWBTBPQLPTHLXZWQXQAUMCRFHYFSSOFCKZZPGINVBPAJIHLGUDNHSEOLUGITYRMBWLWFQNYRKAJHCFOUVHDNBSOX");
    msg.type = 125U;
    msg.op = 87U;
    msg.group_name.assign("ICVGDBRGPFFWJOPMGMCQRTCBOGEMYYILUBDNLLPTUZYMKAFXXNOEAJREDFYBVBWBSXFAMXEMHSCAQSWDEQXWORUSEKEAPVOV");
    msg.plan_id.assign("ECIEWYRKVOWGAWGCURUFMTQYCIOLJQXNBJMKNXP");
    msg.description.assign("DETGJSOYIROYSQNWQVLJTOUVSQGVGPXVKQWRBRBYRXDFVPZUZYMFKVFSBHZDVTEHCAUOSWKYLUQDCKHPZQPIQPCOCAJFTNFWRPXYHXDGCAWYALRXJWNZZXROXLUCULFLGBUHILWII");
    msg.reference_frame = 87U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 52724U;
    tmp_msg_0.off_x = 0.6895057935412036;
    tmp_msg_0.off_y = 0.4412715045232898;
    tmp_msg_0.off_z = 0.3065473335058452;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.05512563595691322;
    msg.leader_speed_min = 0.1531388945943094;
    msg.leader_speed_max = 0.399383585533744;
    msg.leader_alt_min = 0.844110080023809;
    msg.leader_alt_max = 0.5034672442031126;
    msg.pos_sim_err_lim = 0.15529181894709942;
    msg.pos_sim_err_wrn = 0.911363280146826;
    msg.pos_sim_err_timeout = 18823U;
    msg.converg_max = 0.027310756831452454;
    msg.converg_timeout = 57443U;
    msg.comms_timeout = 51056U;
    msg.turb_lim = 0.29194596054218036;
    msg.custom.assign("EPXAXRISKSRFHWZKMZTIALIVKHAJTRNQZUDEXHHN");

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
    msg.setTimeStamp(0.8392020437312173);
    msg.setSource(48804U);
    msg.setSourceEntity(161U);
    msg.setDestination(45595U);
    msg.setDestinationEntity(51U);
    msg.formation_name.assign("YWMOHMCFLYOYNRTOFEQWPLERNKJBKJKBXWRCQIVWXTMXFHSAG");
    msg.type = 70U;
    msg.op = 66U;
    msg.group_name.assign("DJXRCZRQLRQUKOFYTMGUVFZIRMCRNJLDEHYADVHFKICOPWKJBIKZMTXVOUKPGPSCMMPTGTWAEETOKLBWSJHNSJIJLBMCBEJSFUOTBVVJELQHPABGAWUSSNLUNNEXLBEMYOENOQLBVYHLQGUKWXRGWHAYCZGAAWNGQRSWPGYYIHDXVALVRXOVKCIIUDDJSTXQZFIQN");
    msg.plan_id.assign("AVXRHTIDWTAXIDXKBVWUPBIYHHQXKGLAAPCTCMVENZAPWXCZCFXFYLNRSMUSKJBQKAVFNA");
    msg.description.assign("KVWIYBARWNQRCKXYOURMWWVQGAVCSNXIZSRDLNRKYENUDHBCBNQLBYDPTFRMZKOCAQBXGSSOSJGEJZXSZHRPAJDTMOBXILQIWDSFMDPEDLTQ");
    msg.reference_frame = 57U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 51092U;
    tmp_msg_0.off_x = 0.9347138675867795;
    tmp_msg_0.off_y = 0.5082705811268075;
    tmp_msg_0.off_z = 0.8316369151471574;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.7461956327610919;
    msg.leader_speed_min = 0.8345252765488855;
    msg.leader_speed_max = 0.8257698787772689;
    msg.leader_alt_min = 0.9265417893695083;
    msg.leader_alt_max = 0.722894757236074;
    msg.pos_sim_err_lim = 0.8924931993499194;
    msg.pos_sim_err_wrn = 0.7412731878263092;
    msg.pos_sim_err_timeout = 805U;
    msg.converg_max = 0.9381688302209799;
    msg.converg_timeout = 32338U;
    msg.comms_timeout = 24732U;
    msg.turb_lim = 0.59365630382581;
    msg.custom.assign("BNEYAXVSERIANSEJZDTRKLOUMMIRLXLHAEFBLHSCBUPQEOLVZKEGHVYPASYAOHTIUDKTBAROOIXWNRHDVKZJVPAQOCMMWTKTDYVYBLTJWSOCOSIBAKYGQEXDLKCLLPNVUNNMKFJTZQAMYWOYFQRMNBGDQUPCSHXGRGUHCJMQBVJGUIWPJVWRPICAGGFQCPFZTWJTCIPISKZXFFQTZOEXKZMRWXD");

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
    msg.setTimeStamp(0.04855578828227736);
    msg.setSource(33738U);
    msg.setSourceEntity(45U);
    msg.setDestination(8461U);
    msg.setDestinationEntity(224U);
    msg.timeout = 55516U;
    msg.lat = 0.009782595654164838;
    msg.lon = 0.1996734514178098;
    msg.z = 0.7068346275396942;
    msg.z_units = 9U;
    msg.speed = 0.499163566084754;
    msg.speed_units = 188U;
    msg.custom.assign("KYSRCWYQXHRVJFXCHPLHZMEA");

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
    msg.setTimeStamp(0.7107822830301675);
    msg.setSource(32034U);
    msg.setSourceEntity(132U);
    msg.setDestination(20659U);
    msg.setDestinationEntity(87U);
    msg.timeout = 24376U;
    msg.lat = 0.5963162417873507;
    msg.lon = 0.39613077300990296;
    msg.z = 0.5858180903036583;
    msg.z_units = 6U;
    msg.speed = 0.12931905763707208;
    msg.speed_units = 58U;
    msg.custom.assign("VITURECJZTAKQGUPVFXINQCSNUQFKSFXRLAHAJLPHIPWRHRPANOLMRIKDEMREOTPCXVQTHCDWLFTSWJYNBFJGYLUFSEUXJVYPARDWBUMCVQBONLWEGOOHRDL");

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
    msg.setTimeStamp(0.7781858402980879);
    msg.setSource(31532U);
    msg.setSourceEntity(169U);
    msg.setDestination(53379U);
    msg.setDestinationEntity(109U);
    msg.timeout = 33015U;
    msg.lat = 0.680597674248691;
    msg.lon = 0.5294395357792527;
    msg.z = 0.6049683121344244;
    msg.z_units = 107U;
    msg.speed = 0.18089992343478312;
    msg.speed_units = 37U;
    msg.custom.assign("VNVCWMECWHWQORDDRBLPBLYUXEJDTMYPAWAHYMFSPKXJPKEJCYIOLXKGCUMXXJUKLALFMRUQJRKBMIVIZABYHKQCFFKMTGAFGSASOTDCWHHSIFWVAQZDNYUMBJHWQIGTZYSSEGBNEJAPEIUDCLNLZIXQKCWIKJOMSPBXNPPAVOUIDZHDGVUDOUXRAYVSJGELBERQZSWZMZHQNTZXDFPNXOQNYUSNGQGON");

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
    msg.setTimeStamp(0.8246199680397547);
    msg.setSource(35200U);
    msg.setSourceEntity(100U);
    msg.setDestination(23295U);
    msg.setDestinationEntity(151U);
    msg.timeout = 25007U;
    msg.lat = 0.7491556282856591;
    msg.lon = 0.802204087639618;
    msg.z = 0.32008647914150823;
    msg.z_units = 116U;
    msg.speed = 0.45883690097259733;
    msg.speed_units = 193U;
    msg.custom.assign("FFYMDXMGDKDHVNTWMMQVDJCPZLJURSYZLBHKAWAVKSUMTQDETKLJWFKBOTEUAAHUWIANFSUPBM");

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
    msg.setTimeStamp(0.6421872772305611);
    msg.setSource(48288U);
    msg.setSourceEntity(212U);
    msg.setDestination(25879U);
    msg.setDestinationEntity(49U);
    msg.timeout = 26791U;
    msg.lat = 0.04072624591829499;
    msg.lon = 0.9985036707628137;
    msg.z = 0.6444837867301395;
    msg.z_units = 36U;
    msg.speed = 0.8902998572685734;
    msg.speed_units = 148U;
    msg.custom.assign("FHOCBRTWACQRGQXLZZRCZVMEEJUNVOGPXF");

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
    msg.setTimeStamp(0.21748742583223302);
    msg.setSource(38628U);
    msg.setSourceEntity(222U);
    msg.setDestination(55842U);
    msg.setDestinationEntity(224U);
    msg.timeout = 23576U;
    msg.lat = 0.15650417535475813;
    msg.lon = 0.03280112010557379;
    msg.z = 0.7240759520451839;
    msg.z_units = 63U;
    msg.speed = 0.785515804837047;
    msg.speed_units = 92U;
    msg.custom.assign("QAUAWZKXCKHMLJLGVOQTYPOPFFGKOFNEUIBSWFRJCJVHPT");

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
    msg.setTimeStamp(0.14527782954576773);
    msg.setSource(1676U);
    msg.setSourceEntity(62U);
    msg.setDestination(51373U);
    msg.setDestinationEntity(93U);
    msg.arrival_time = 0.4553825026542224;
    msg.lat = 0.0937815996019028;
    msg.lon = 0.24842543055861876;
    msg.z = 0.13847352079895958;
    msg.z_units = 59U;
    msg.travel_z = 0.11078342288529552;
    msg.travel_z_units = 197U;
    msg.delayed = 18U;

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
    msg.setTimeStamp(0.9579939636247365);
    msg.setSource(57658U);
    msg.setSourceEntity(94U);
    msg.setDestination(61347U);
    msg.setDestinationEntity(141U);
    msg.arrival_time = 0.37661719704818586;
    msg.lat = 0.022363940250872072;
    msg.lon = 0.044050609069098634;
    msg.z = 0.37443378413989026;
    msg.z_units = 226U;
    msg.travel_z = 0.35198915244382767;
    msg.travel_z_units = 142U;
    msg.delayed = 93U;

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
    msg.setTimeStamp(0.5748189309898923);
    msg.setSource(5004U);
    msg.setSourceEntity(100U);
    msg.setDestination(64976U);
    msg.setDestinationEntity(64U);
    msg.arrival_time = 0.6801864077344659;
    msg.lat = 0.6640466975495318;
    msg.lon = 0.9500164869160275;
    msg.z = 0.331325674226185;
    msg.z_units = 195U;
    msg.travel_z = 0.6198226482934943;
    msg.travel_z_units = 220U;
    msg.delayed = 12U;

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
    msg.setTimeStamp(0.3490408536704407);
    msg.setSource(12711U);
    msg.setSourceEntity(173U);
    msg.setDestination(38015U);
    msg.setDestinationEntity(197U);
    msg.lat = 0.9427331112378973;
    msg.lon = 0.2386492315182296;
    msg.z = 0.20609017765478976;
    msg.z_units = 92U;
    msg.speed = 0.693727379683442;
    msg.speed_units = 125U;
    msg.bearing = 0.9614299492178834;
    msg.cross_angle = 0.06383981263836747;
    msg.width = 0.527932262930976;
    msg.length = 0.09863069807230285;
    msg.coff = 220U;
    msg.angaperture = 0.2228628426136927;
    msg.range = 4478U;
    msg.overlap = 68U;
    msg.flags = 68U;
    msg.custom.assign("VJQPOTFIYKTXTVBPUYWERSOBSGJLLDNLNYNGUVWTJIPBRPSHFTGMKNXNPEKNTCTDVCOMXQNTXZGJACGDMRWCSINPWFMZIJUAJFZZQFZIOGHXRBHHAMCUHWWVKHGORCEGLDJLICOFMWAYQUXALUZBAYQXEBSVCECDLROSEIUERKUZRISLHFYZWZZFCDBXQEMOMYQXOGQUWMJQYKPYNVFHKEJUDTQFDBBARGKVRIPAHNHTBVVSLDWXKKESYJMS");

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
    msg.setTimeStamp(0.6369750119716393);
    msg.setSource(43042U);
    msg.setSourceEntity(77U);
    msg.setDestination(63083U);
    msg.setDestinationEntity(31U);
    msg.lat = 0.9683510784756467;
    msg.lon = 0.13542760543761978;
    msg.z = 0.35769537132194407;
    msg.z_units = 5U;
    msg.speed = 0.1919076293177725;
    msg.speed_units = 28U;
    msg.bearing = 0.42438420425276324;
    msg.cross_angle = 0.8114513270623339;
    msg.width = 0.6827416608483362;
    msg.length = 0.509188084095339;
    msg.coff = 249U;
    msg.angaperture = 0.3689166253145998;
    msg.range = 65476U;
    msg.overlap = 131U;
    msg.flags = 76U;
    msg.custom.assign("RYHHLSAAVHFYSZPWBHDFBXDBJUXKWNIMNWHGDYDIJIOMRFSTAPNKAYEMWRVFCROOZXGOCHUTVPBYEHVTLINZKYJGDCCJZKGKURSELBTNFHGOYDSTSSAVVKXUNEHKQOCXGOJJMVGIJOBPXLQYCTGXQMNQZINJGNPMWHFLIXUTUCQQUWRCRKLZPPWWELRMUYXEQTWBZWBFVAIIAMQKSS");

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
    msg.setTimeStamp(0.9870238558684211);
    msg.setSource(27919U);
    msg.setSourceEntity(149U);
    msg.setDestination(25366U);
    msg.setDestinationEntity(44U);
    msg.lat = 0.7001063171613806;
    msg.lon = 0.5400434732605528;
    msg.z = 0.3827301609772976;
    msg.z_units = 147U;
    msg.speed = 0.6701621392104001;
    msg.speed_units = 250U;
    msg.bearing = 0.3899148086350831;
    msg.cross_angle = 0.4411059206875958;
    msg.width = 0.7470486426832792;
    msg.length = 0.6190051488822286;
    msg.coff = 14U;
    msg.angaperture = 0.6699614774182409;
    msg.range = 4077U;
    msg.overlap = 63U;
    msg.flags = 99U;
    msg.custom.assign("LEHSUIVCDFQAPWPCBWXZUHMKMGCRZNLVCZOUANBNLXCMBRATISJXMVSKGWHVOZZILFERXFUUTQSNVJFPDLLYYXFZCOHRLGJDHBTAOUFNIUZZOYZNNRWARIUCAWSKMSJMAWTVHIPNSBVQTXYLEDGXHPTNQKDBJBTSDDPJFYROIYIFRCEAEK");

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
    msg.setTimeStamp(0.5132584578017222);
    msg.setSource(16814U);
    msg.setSourceEntity(238U);
    msg.setDestination(6779U);
    msg.setDestinationEntity(213U);
    msg.timeout = 43005U;
    msg.lat = 0.6810448675223952;
    msg.lon = 0.8105710497022286;
    msg.z = 0.494720924471157;
    msg.z_units = 71U;
    msg.speed = 0.7210493881102122;
    msg.speed_units = 109U;
    msg.syringe0 = 145U;
    msg.syringe1 = 11U;
    msg.syringe2 = 74U;
    msg.custom.assign("YKAUOHYPKLJZNITRDTAMPISSKHSSGCSBFZPTFHMHXAFHKUXKVJQEVUZLQVUJMVSWWBAOCGATMZARQUVFZZIPGYTFQEUKXGCFRYQLRYPJDOKNEZWNMMLGEGTIGCROSBDYPFAZJALIFJEIEZWOWCEUXNBDUNIT");

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
    msg.setTimeStamp(0.9784528984745925);
    msg.setSource(62950U);
    msg.setSourceEntity(92U);
    msg.setDestination(49926U);
    msg.setDestinationEntity(60U);
    msg.timeout = 46287U;
    msg.lat = 0.6057663906782529;
    msg.lon = 0.6330373428317493;
    msg.z = 0.09268812540654281;
    msg.z_units = 229U;
    msg.speed = 0.12627894308518728;
    msg.speed_units = 177U;
    msg.syringe0 = 73U;
    msg.syringe1 = 101U;
    msg.syringe2 = 74U;
    msg.custom.assign("NXIDMRFGIYDYV");

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
    msg.setTimeStamp(0.7451045819950193);
    msg.setSource(8596U);
    msg.setSourceEntity(38U);
    msg.setDestination(5838U);
    msg.setDestinationEntity(35U);
    msg.timeout = 31691U;
    msg.lat = 0.8878263871724342;
    msg.lon = 0.2631627818447638;
    msg.z = 0.14882965269624937;
    msg.z_units = 1U;
    msg.speed = 0.29282353250797977;
    msg.speed_units = 131U;
    msg.syringe0 = 101U;
    msg.syringe1 = 91U;
    msg.syringe2 = 71U;
    msg.custom.assign("IELQNCSOQLNHKFUJIGBRVBWFUAXOZOQGOYQASCVNDTWWRAXJSQKKPZVKPBZVMZDGMBHPUVGEDTOHOJLFFYGUFZLHXQFDWNEPACICWOXMBJITTJXNKHEAMYJDDYVERBMDKLMJZYLRRMTJQIWOEMSZAZXVHHSCPYIZTEPGSMUSAVEAJOCKIEBGTAYVIBDYTKHOWSQPUNYBRRLNRXCXUPDQI");

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
    msg.setTimeStamp(0.5613495436576305);
    msg.setSource(13611U);
    msg.setSourceEntity(107U);
    msg.setDestination(55982U);
    msg.setDestinationEntity(5U);

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
    msg.setTimeStamp(0.8967398390091434);
    msg.setSource(3503U);
    msg.setSourceEntity(51U);
    msg.setDestination(23821U);
    msg.setDestinationEntity(152U);

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
    msg.setTimeStamp(0.5563950076515707);
    msg.setSource(23598U);
    msg.setSourceEntity(151U);
    msg.setDestination(477U);
    msg.setDestinationEntity(250U);

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
    msg.setTimeStamp(0.01666626945355565);
    msg.setSource(10230U);
    msg.setSourceEntity(233U);
    msg.setDestination(65462U);
    msg.setDestinationEntity(150U);
    msg.lat = 0.16306744228074643;
    msg.lon = 0.5636903939053426;
    msg.z = 0.6323563992337556;
    msg.z_units = 119U;
    msg.speed = 0.9990770171733846;
    msg.speed_units = 31U;
    msg.takeoff_pitch = 0.05617913785165274;
    msg.custom.assign("VJNDXTQHOWJJMXBAZUMSBJEEPGLPHRUHXSFCILQBBZDFAYOAMZFUYZISMKJOMNEWLRLLODQRIWADUYDAXCTOFKGKXTTLRBWZDWGYJBKHUGGNENDKEWYSFEQWVTCJDXSHYKPVWNVVOQJE");

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
    msg.setTimeStamp(0.45979181485710685);
    msg.setSource(9312U);
    msg.setSourceEntity(32U);
    msg.setDestination(48774U);
    msg.setDestinationEntity(228U);
    msg.lat = 0.07893446771524582;
    msg.lon = 0.622546495638911;
    msg.z = 0.641775413947354;
    msg.z_units = 187U;
    msg.speed = 0.0718624564831577;
    msg.speed_units = 36U;
    msg.takeoff_pitch = 0.05233835320080793;
    msg.custom.assign("BDZSUUVYEYMPQIRURLIHYAVOYTSAFTSHATMYQLJZTMPCEQSQUEKXERVPVOKWGTZCJUNAMWZXEZFDMQXVDQZXXXWLVNBPTYYRPNPBDAAMNCLUKJJCSIFBNDHNRKHVPSAVGSEOKUQWHQCRJMMGDZCXBIHECZNILGJFCNDSTTWIBMCNFEA");

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
    msg.setTimeStamp(0.6317475598058492);
    msg.setSource(44306U);
    msg.setSourceEntity(91U);
    msg.setDestination(18042U);
    msg.setDestinationEntity(110U);
    msg.lat = 0.47694817104181486;
    msg.lon = 0.1734841893621275;
    msg.z = 0.5300667895373159;
    msg.z_units = 103U;
    msg.speed = 0.7479977735602769;
    msg.speed_units = 243U;
    msg.takeoff_pitch = 0.6255929016820072;
    msg.custom.assign("NNRKEEKVQKJPCRJJXRTADPWNBXGSVYFNQMDJCLOSWHYAAKDVLIHVBETRQCLYPIBMYFUGSX");

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
    msg.setTimeStamp(0.5216832050085947);
    msg.setSource(59121U);
    msg.setSourceEntity(181U);
    msg.setDestination(33759U);
    msg.setDestinationEntity(205U);
    msg.lat = 0.23093816187771;
    msg.lon = 0.3056710872963412;
    msg.z = 0.7451737620569722;
    msg.z_units = 198U;
    msg.speed = 0.6844030057889612;
    msg.speed_units = 181U;
    msg.abort_z = 0.3537871927180658;
    msg.bearing = 0.6955191252437692;
    msg.glide_slope = 188U;
    msg.glide_slope_alt = 0.25483758795201594;
    msg.custom.assign("OZDFJHBSKVRSSZPOLIRMFRJQQPETAOASLUWTHTJQTCRXFNVBGLNMCRLZRRUBCLGYASSLDOOTDSPZYUYQFEEGEPWEHKWVAZXMVAUKKVMLXKUQXNOMXTFVVJLICENYYDCQXJWD");

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
    msg.setTimeStamp(0.9415983347413286);
    msg.setSource(34359U);
    msg.setSourceEntity(34U);
    msg.setDestination(19118U);
    msg.setDestinationEntity(125U);
    msg.lat = 0.3328484357265957;
    msg.lon = 0.4059354424505103;
    msg.z = 0.04565897684422038;
    msg.z_units = 30U;
    msg.speed = 0.7854822755956407;
    msg.speed_units = 15U;
    msg.abort_z = 0.26604661295212617;
    msg.bearing = 0.15858071656017825;
    msg.glide_slope = 209U;
    msg.glide_slope_alt = 0.8702966804923773;
    msg.custom.assign("KTCQXJCGPZTIVQHBRXNIEJNPGTHRIGSHDHFZFWWDTRU");

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
    msg.setTimeStamp(0.5858184431743639);
    msg.setSource(38932U);
    msg.setSourceEntity(254U);
    msg.setDestination(39092U);
    msg.setDestinationEntity(72U);
    msg.lat = 0.7096296034687555;
    msg.lon = 0.7199449354503404;
    msg.z = 0.7641874319063334;
    msg.z_units = 4U;
    msg.speed = 0.2023733445286584;
    msg.speed_units = 252U;
    msg.abort_z = 0.04045383865987939;
    msg.bearing = 0.9823008633191199;
    msg.glide_slope = 254U;
    msg.glide_slope_alt = 0.8317004137839986;
    msg.custom.assign("PTKJQCUUHEFLQLVFOZJMFAXHGIVZKFWZCSAQNDYEKTJLYKZETWGTHKUYQORZUKWLUFYDSWHZMODSHMPRQNOSIEMBFYGBVXMJYDXUDARPFWPGVC");

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
    msg.setTimeStamp(0.6054290775261855);
    msg.setSource(64220U);
    msg.setSourceEntity(68U);
    msg.setDestination(17254U);
    msg.setDestinationEntity(7U);
    msg.lat = 0.4443685432943748;
    msg.lon = 0.14646457468644392;
    msg.speed = 0.9752682538731237;
    msg.speed_units = 102U;
    msg.limits = 116U;
    msg.max_depth = 0.3315886320454208;
    msg.min_alt = 0.06528296014966761;
    msg.time_limit = 0.9308245063894047;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.27896007875605233;
    tmp_msg_0.lon = 0.2431938509987397;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("JDBTALUQUARSUCASOUILQPTPCWOOPPHLHIGIMMJJRGRJJNRNVAFITDHFEIKFAIFXSMTGXXLLYAJOVCYKLKVOFZCYEWAEZYCBWCWQOFQZKFSWNPDCWGIURXMEBSF");
    msg.custom.assign("HSCUDEGJGVMFEBOGMELOLUWBBUMQGUZFZDKYVFISJAIYUXONPHKWJCSQIFRHNABMRRRQJTKNEWAEAV");

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
    msg.setTimeStamp(0.6899375501726104);
    msg.setSource(36698U);
    msg.setSourceEntity(86U);
    msg.setDestination(64200U);
    msg.setDestinationEntity(200U);
    msg.lat = 0.1848729224018003;
    msg.lon = 0.8750990728200786;
    msg.speed = 0.9335329315151667;
    msg.speed_units = 32U;
    msg.limits = 154U;
    msg.max_depth = 0.17870166429403855;
    msg.min_alt = 0.8564244936486725;
    msg.time_limit = 0.7196460498686741;
    msg.controller.assign("KRHZEBIWUWJVYZOSTBKIKQWCSFNAFCVWRUNIGJHGSKROUWNINVYZZPYUOMJMWCSQTHNEQDJDZMJXEDARQRPLKRLGNLWEAKCTMBBSVHPVEPOXRTQYXDUDFKJINIQZABAMRPCATQIZFNOVAFSUPHCHPBP");
    msg.custom.assign("PAJEIIQCXYCXARBXZNOZHRJLGVWYERRTXRTQYHGCKUQNRBPLAPIMBMVHZVHCPSOXRWQIKQLQSSKBJVESVNNXUKOLWJKGBFFUGIGIQWYEDVZNHMTFBOSXRNXOGMTYJFDYXDMQCODQZHMZYINLBIITUUJD");

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
    msg.setTimeStamp(0.6756263556682685);
    msg.setSource(15233U);
    msg.setSourceEntity(168U);
    msg.setDestination(52086U);
    msg.setDestinationEntity(154U);
    msg.lat = 0.2759933271224856;
    msg.lon = 0.7838254699916876;
    msg.speed = 0.4712005420208143;
    msg.speed_units = 221U;
    msg.limits = 251U;
    msg.max_depth = 0.7987945444387649;
    msg.min_alt = 0.832866295767554;
    msg.time_limit = 0.9400997575541266;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.757286427689041;
    tmp_msg_0.lon = 0.24950032340897366;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("GIGJJWHQCZTUQHKRSIACOWPPYQUYRVOBBNYUSPNNNMGZRIZFVEXQISYGHSVMXICVGDDWAXVILHJEWMAOHULFAKRWJEMDTGAMQAJGTQLNJLYMVDFKZMXIRDTUTXEMUHZNFKLPGRATTQVJAFPFLSXGMHVLYZCOTRJGKPQKEZZWUSPFBCQOBUWCBSDHJEACFMCRSHCOOPIOKWN");
    msg.custom.assign("RYOKQDRVRGNSNAKWPXEYHKAW");

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
    msg.setTimeStamp(0.5279198845698436);
    msg.setSource(13202U);
    msg.setSourceEntity(81U);
    msg.setDestination(53803U);
    msg.setDestinationEntity(165U);
    msg.target.assign("AJPVTVCOUJUTBDGBSWSBMZPWUQLXVQWDOMQORYRFOXMSJMAKNCCZOIASIDKGGHPYKORBDETGSFRFOZPYUCCVXJBZOLVIGJAVYISQNJFFFZOBRAYWLDRVLCYIHLAODREHHCPYAFGVBHX");
    msg.max_speed = 0.3318295415323751;
    msg.speed_units = 135U;
    msg.lat = 0.9699047095845136;
    msg.lon = 0.9829042632233074;
    msg.z = 0.5361908658851773;
    msg.z_units = 36U;
    msg.custom.assign("CXZGDKWTYBXJBWTINPOXPDF");

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
    msg.setTimeStamp(0.8655739257958536);
    msg.setSource(46175U);
    msg.setSourceEntity(82U);
    msg.setDestination(30959U);
    msg.setDestinationEntity(74U);
    msg.target.assign("TKNQXQYDSBASUEVPBVWNVTZH");
    msg.max_speed = 0.9835562348695928;
    msg.speed_units = 217U;
    msg.lat = 0.5639008985844354;
    msg.lon = 0.2788223990219687;
    msg.z = 0.5232413206908227;
    msg.z_units = 196U;
    msg.custom.assign("KETXAKVNWVZTAUINUAYCEKTNRVHBQUO");

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
    msg.setTimeStamp(0.8249506324943338);
    msg.setSource(209U);
    msg.setSourceEntity(91U);
    msg.setDestination(46474U);
    msg.setDestinationEntity(9U);
    msg.target.assign("YVHQUXTPQAIVKKTPNKFGKPZUYVLHGSUZLQHTEZGLAIRUWCLMQFJYDVBIQJESKJMZERQCORQJYYTBNDDCKDWOAT");
    msg.max_speed = 0.09116447471884392;
    msg.speed_units = 215U;
    msg.lat = 0.7249687143243045;
    msg.lon = 0.669495588008639;
    msg.z = 0.05246609952443049;
    msg.z_units = 100U;
    msg.custom.assign("XSPVOAKUVDKCGNQKCMIRMBLPISIUGQZKGQHNHTENQXSHDNHJVKTLFRPWIFVYSYZPDPNYCEEWBZSSOZBPIVOFKTPOGWNOATHOWMMJSLRGJOTHFJYFMBPAZTCRSCOAGURHEYUUHYXQOBEBQCIHWBAXAXIUFBLTVWFUFSMWACHWJUKPZNZVJJLACLQNQFDLEUKYQACDPNWWLR");

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
    msg.setTimeStamp(0.26074463522463887);
    msg.setSource(20460U);
    msg.setSourceEntity(33U);
    msg.setDestination(42842U);
    msg.setDestinationEntity(26U);
    msg.timeout = 37236U;
    msg.lat = 0.08530727842894503;
    msg.lon = 0.8653721178826224;
    msg.speed = 0.30957898597699396;
    msg.speed_units = 253U;
    msg.custom.assign("ZZDOQHIMAKDWYEJKYQEPEUGSFY");

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
    msg.setTimeStamp(0.3781392453267156);
    msg.setSource(4231U);
    msg.setSourceEntity(179U);
    msg.setDestination(63648U);
    msg.setDestinationEntity(68U);
    msg.timeout = 25055U;
    msg.lat = 0.23568012626195356;
    msg.lon = 0.7643806975580781;
    msg.speed = 0.5494615723903729;
    msg.speed_units = 128U;
    msg.custom.assign("BHJDWGWZDUODOTDJFCTMTZQARGJMRLYFXWFFFGBTOEWNBLSHMKGWEIBFJGGPKAPU");

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
    msg.setTimeStamp(0.3912890574911546);
    msg.setSource(65469U);
    msg.setSourceEntity(184U);
    msg.setDestination(25410U);
    msg.setDestinationEntity(236U);
    msg.timeout = 52393U;
    msg.lat = 0.5538167402067244;
    msg.lon = 0.5539515948057852;
    msg.speed = 0.9452339341515956;
    msg.speed_units = 101U;
    msg.custom.assign("ZUBFIUUZSSVQVFTEGDWMRAEERSLHOFLIUSRJCPXJZCIVEVPKIXZXQGODFYJVBGKDNRNLWCTWBOGASPSFNKZLCLZQKZJRMTWTVQGYLOSPFKOIMCNGCBJUQGFALDHCXOYUNHDBQJDHJMNTICEGGIQTYBIVGXHIBFERNAJMBXVKXEYJOPSARWELZCZPNWMZMHOBKAHJHEKAMDVMPQPSUYTCUTFWMRVYPRBYUDXHXLKPN");

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
    msg.setTimeStamp(0.7195034029408427);
    msg.setSource(45977U);
    msg.setSourceEntity(135U);
    msg.setDestination(41089U);
    msg.setDestinationEntity(217U);
    msg.lat = 0.3104114280350351;
    msg.lon = 0.9848346500406493;
    msg.z = 0.1205505643532877;
    msg.z_units = 102U;
    msg.radius = 0.3470855400238272;
    msg.duration = 40764U;
    msg.speed = 0.40683470920921194;
    msg.speed_units = 118U;
    msg.popup_period = 57925U;
    msg.popup_duration = 7367U;
    msg.flags = 154U;
    msg.custom.assign("LVWHYJBWOQZMBXAJMFUFANRUSJDCJXUGRZSLECXTHWVOPTACJZXTYXQGICKIOMDUGDNCZDDZARXFTVVOINVHLLKAHQZUFMPRDQEYUIMLTQUHWBGXNPEEKTPIREASPSEIKSYWXUNHWNDBIBCQEPMTMWZJGALKVTERNLDQZBZPKWAJSOKJBHVKYFCMCOZFLGQLRGNMOYITSIGCOXSRUYWFOUV");

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
    msg.setTimeStamp(0.13771352805035175);
    msg.setSource(35324U);
    msg.setSourceEntity(73U);
    msg.setDestination(7519U);
    msg.setDestinationEntity(190U);
    msg.lat = 0.10180324210654312;
    msg.lon = 0.5863083601245056;
    msg.z = 0.24405661170128445;
    msg.z_units = 248U;
    msg.radius = 0.5027794459792928;
    msg.duration = 59802U;
    msg.speed = 0.5746161559502354;
    msg.speed_units = 72U;
    msg.popup_period = 53101U;
    msg.popup_duration = 268U;
    msg.flags = 243U;
    msg.custom.assign("QEJJVNMEVKZRDRJMAYLDFMTRNVBGYNDHSUAJPCOERKGZCPWFYFLQPKUZBBAJMNZHQGGBTNXDSKSHGITHOKIVXTIZFMFXYSYSQJGKOICUYUHZPWWTVVWLYCUXZQVEKQDLELXSUQJILELFSKWIKUOWMNCOWQM");

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
    msg.setTimeStamp(0.36667975600410285);
    msg.setSource(23716U);
    msg.setSourceEntity(219U);
    msg.setDestination(23077U);
    msg.setDestinationEntity(187U);
    msg.lat = 0.28283813537914704;
    msg.lon = 0.4563364875476522;
    msg.z = 0.2738278259419741;
    msg.z_units = 88U;
    msg.radius = 0.06133714132672552;
    msg.duration = 51055U;
    msg.speed = 0.9644159383089408;
    msg.speed_units = 42U;
    msg.popup_period = 55604U;
    msg.popup_duration = 12887U;
    msg.flags = 155U;
    msg.custom.assign("QFWLAJBLMIOVHVSNMRTHELKKUXUUKLGWQUJSBAPTVMCULGHICZBLPUZGCQBUVXPDXLMTDAPOWFYADYQAPENZFRIFIENFBKESSENQLVWMYYMBXIJCNPMJQWNWYKGHSCSBWUZPPOXWOFRGMVGGNAWHYNMJFJ");

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
    msg.setTimeStamp(0.08355357554322107);
    msg.setSource(45951U);
    msg.setSourceEntity(136U);
    msg.setDestination(38648U);
    msg.setDestinationEntity(9U);

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
    msg.setTimeStamp(0.8152696882926013);
    msg.setSource(37781U);
    msg.setSourceEntity(48U);
    msg.setDestination(14905U);
    msg.setDestinationEntity(92U);

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
    msg.setTimeStamp(0.9785656610491388);
    msg.setSource(25317U);
    msg.setSourceEntity(130U);
    msg.setDestination(30678U);
    msg.setDestinationEntity(248U);

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
    msg.setTimeStamp(0.6322806715511727);
    msg.setSource(13168U);
    msg.setSourceEntity(146U);
    msg.setDestination(48392U);
    msg.setDestinationEntity(189U);
    msg.timeout = 23337U;
    msg.lat = 0.17234760764470947;
    msg.lon = 0.412308632758394;
    msg.z = 0.37877321029976974;
    msg.z_units = 18U;
    msg.speed = 0.7272260022363087;
    msg.speed_units = 140U;
    msg.bearing = 0.24162496817018142;
    msg.width = 0.2718044194837397;
    msg.direction = 86U;
    msg.custom.assign("OCHCNRRHMSGEYONRXNRBWGFFXXIYHIKKNLEVTJSQHAEPEIUWTSMMSLWQODKGQXSQNHZWDTEZU");

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
    msg.setTimeStamp(0.22092967626654714);
    msg.setSource(52919U);
    msg.setSourceEntity(154U);
    msg.setDestination(5531U);
    msg.setDestinationEntity(230U);
    msg.timeout = 33879U;
    msg.lat = 0.997535863312483;
    msg.lon = 0.3080593315818042;
    msg.z = 0.7848744491129205;
    msg.z_units = 139U;
    msg.speed = 0.004044093475537913;
    msg.speed_units = 79U;
    msg.bearing = 0.06346753870252675;
    msg.width = 0.7946221250690501;
    msg.direction = 200U;
    msg.custom.assign("ASGKRBZLMOGYXWPUVTFKBMQIEOMYDRDWEDPNSSPZFEXSIAPVBKRKBIHNYHSVZXDCZQHTGDLZLYCHCACHPNJUYMFIEIKWJORZLFMQRCWCDDUJPATAUNMFODCUIBQWJUHGBTQMRGQNYSFQTQXKZSRVTMNOWXCUOBDDLGXXOECLTIBATXFPRTJVQRMVVFBISURAPFIUSQJTPEC");

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
    msg.setTimeStamp(0.20621791315245752);
    msg.setSource(37673U);
    msg.setSourceEntity(141U);
    msg.setDestination(34454U);
    msg.setDestinationEntity(87U);
    msg.timeout = 64743U;
    msg.lat = 0.3648464296981725;
    msg.lon = 0.412120711441765;
    msg.z = 0.34703994536148364;
    msg.z_units = 142U;
    msg.speed = 0.8479411565428054;
    msg.speed_units = 4U;
    msg.bearing = 0.663873037838335;
    msg.width = 0.35652092537976565;
    msg.direction = 165U;
    msg.custom.assign("LFDVZMHEBHUYQBJGHGJXWINERMDXZRIIBPCAUVEGLYSNHTHOXDRNYGOUSMMAZYNUPGTWUYESRXBKKVPYJKRIKXKLGZNEMRVJLCAIKZOGHBWKDLQPQEARDDISYSUFIWNPKMOTOVQSYYUCOFEQRZBDJSEWSCQOOVZRNIPBJHWPOLTCCQCGXJJLZADGOTVFQFLMUPFWECKXIMCBA");

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
    msg.setTimeStamp(0.5276128869449273);
    msg.setSource(54618U);
    msg.setSourceEntity(36U);
    msg.setDestination(17224U);
    msg.setDestinationEntity(95U);
    msg.op_mode = 181U;
    msg.error_count = 33U;
    msg.error_ents.assign("TJLUFBHSHNUNHESVVRIKKVPUEUSJVDQLFUWABCFVJZIUTEAUGRSKSDTMFJXDHFERREGOZWYTGFWLOOHTBTGSDXTDMJBUOKQWMBYUVGAKWWRWXXGZVJQAYNYIXGJHMQYHERYCHZFLGXRWLMKMRFXPLIVCSIOQAZPDRQBEIDIXCOOPTNTVCYAPRZJOMPGEKXDVIYTJCYNCJBKASKQHLGLBWISFNMQQZALFAEHCMZ");
    msg.maneuver_type = 35907U;
    msg.maneuver_stime = 0.8268135382839796;
    msg.maneuver_eta = 16501U;
    msg.control_loops = 265690950U;
    msg.flags = 21U;
    msg.last_error.assign("VAGSXVZWHTBWMTQYFBNZSQQIVJOPVIGLQVLCCLUNSYFQWBMLIBPKDMNXNDYWKZITVFWTEBCNZAFOZDNYBYOWUBPRUIHWHQIOJANWJQCUHFMJGKXGOEQLZSXSSMMDSPKPROKXHIEPNTCOYRVJPUFYRUHEMAKTT");
    msg.last_error_time = 0.48026216929791254;

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
    msg.setTimeStamp(0.3101037710042269);
    msg.setSource(51301U);
    msg.setSourceEntity(233U);
    msg.setDestination(32941U);
    msg.setDestinationEntity(71U);
    msg.op_mode = 228U;
    msg.error_count = 211U;
    msg.error_ents.assign("SXUICHFRFQSJBWITGLJOTGDHQSYZPFEHBTWGCZJEVCJXGTQWIOQEFJYPIUOOVMZJFRNBMQYGQRTWVKOAAXPLQDIBDWEVKSPKMRICLUADFBMWUQGUNZGTNNMWBBBVBHWHXFZWMMTIDOYALULLUDCZPCFHTLHNNEPYDFIGHNYREVNHKEGIKRXKOBNCASJVQKZSRXORUYPFQCXTDVCRMVUDPSAWNZ");
    msg.maneuver_type = 49974U;
    msg.maneuver_stime = 0.4429095912790234;
    msg.maneuver_eta = 35883U;
    msg.control_loops = 3801170687U;
    msg.flags = 101U;
    msg.last_error.assign("ZFUJSJIQOOFMGIMRAYPVAWGTUVQAEDUXLWYJLGKXOBTZSIPIUPOILSWDXDHENWRAHMSMJVZKCNRHJ");
    msg.last_error_time = 0.6129657436153697;

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
    msg.setTimeStamp(0.7546197366568645);
    msg.setSource(55635U);
    msg.setSourceEntity(139U);
    msg.setDestination(39110U);
    msg.setDestinationEntity(53U);
    msg.op_mode = 116U;
    msg.error_count = 232U;
    msg.error_ents.assign("EREZJBNBRAKGRDSONWIZXLMUFSSVAEUAJPZDZHLZI");
    msg.maneuver_type = 55624U;
    msg.maneuver_stime = 0.5313827562523533;
    msg.maneuver_eta = 52442U;
    msg.control_loops = 2175140283U;
    msg.flags = 188U;
    msg.last_error.assign("YKEOTJYDSKPEBYDUUSXDEWEMZVFSSNTEQJJLZLYCLTKYRBGLXEFUGYRCXSJAMNGCRNWRIQWKOVQZTSSPUWMZBSUVJBXGAYRVOUDZKVSGAIC");
    msg.last_error_time = 0.7443757826576619;

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
    msg.setTimeStamp(0.7438213498665728);
    msg.setSource(54156U);
    msg.setSourceEntity(22U);
    msg.setDestination(31174U);
    msg.setDestinationEntity(150U);
    msg.type = 223U;
    msg.request_id = 51184U;
    msg.command = 39U;
    IMC::StationKeeping tmp_msg_0;
    tmp_msg_0.lat = 0.09029724430384112;
    tmp_msg_0.lon = 0.42421384768341686;
    tmp_msg_0.z = 0.4533364661825794;
    tmp_msg_0.z_units = 213U;
    tmp_msg_0.radius = 0.6592310955077568;
    tmp_msg_0.duration = 58844U;
    tmp_msg_0.speed = 0.6397993909557945;
    tmp_msg_0.speed_units = 104U;
    tmp_msg_0.custom.assign("GFXCWIRVQCYCGEMHYWYPMWNVTJRCBJQZWQUPMHWHOEPVLDWRFBXIWOUBFVWWCKTMDLRGANSIQDXLPYJMTYPRVHZYUZDUJPIULTXVUDVBKJSTLNFJACBAKQUERZRRYKIWQAVGKZIJFIPOSOKSZOFMXULAHHEAINYPUMB");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 12808U;
    msg.info.assign("CLPIUGEBZEDWYHDAAJSAPLJCOJSCOKGPVNSONPP");

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
    msg.setTimeStamp(0.13135358318120538);
    msg.setSource(8367U);
    msg.setSourceEntity(220U);
    msg.setDestination(16328U);
    msg.setDestinationEntity(217U);
    msg.type = 57U;
    msg.request_id = 36796U;
    msg.command = 52U;
    IMC::StationKeepingExtended tmp_msg_0;
    tmp_msg_0.lat = 0.29792859211414346;
    tmp_msg_0.lon = 0.95324513544156;
    tmp_msg_0.z = 0.775614800940085;
    tmp_msg_0.z_units = 190U;
    tmp_msg_0.radius = 0.8889347739102118;
    tmp_msg_0.duration = 32191U;
    tmp_msg_0.speed = 0.3013927158543711;
    tmp_msg_0.speed_units = 30U;
    tmp_msg_0.popup_period = 9915U;
    tmp_msg_0.popup_duration = 6566U;
    tmp_msg_0.flags = 205U;
    tmp_msg_0.custom.assign("MVHCFFSSRKXBJATZIZUZAEYFAYVCEMENRKQFXZIUKVWHRMMGCJDBOYGPWTMXBSRTDXSKLC");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 36302U;
    msg.info.assign("LUAMSCZEGCVLODKLJRPGKYMODAXUXPHSTCJCSVCJTCWUSZDWKVNRFLZKKPUMELGIHTUYABSIIZFPBODUVYRHBOGYDCHFKAHTTZLUQGFQJGMIGTFMNSZEGWFEGFHFWG");

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
    msg.setTimeStamp(0.8373709348970336);
    msg.setSource(58110U);
    msg.setSourceEntity(29U);
    msg.setDestination(63564U);
    msg.setDestinationEntity(139U);
    msg.type = 62U;
    msg.request_id = 5785U;
    msg.command = 15U;
    IMC::StationKeepingExtended tmp_msg_0;
    tmp_msg_0.lat = 0.7656502674427583;
    tmp_msg_0.lon = 0.08452897554145455;
    tmp_msg_0.z = 0.027769197953780744;
    tmp_msg_0.z_units = 247U;
    tmp_msg_0.radius = 0.3555917635570789;
    tmp_msg_0.duration = 58874U;
    tmp_msg_0.speed = 0.13368124842063;
    tmp_msg_0.speed_units = 34U;
    tmp_msg_0.popup_period = 48634U;
    tmp_msg_0.popup_duration = 58552U;
    tmp_msg_0.flags = 252U;
    tmp_msg_0.custom.assign("QXIYOANCGTKVUUZJFLHJZLXKZTOMAKJTWKGUGELCOUJNGYWZNIEYSSZHKLYURFNHVGNHRBLTJZDUIEZCCROPQIKNAPFCGDYMDVDXIAWFVKQMFPQRWOSASWEWWHHRESTAXBSNRJDBWMVMQRCFFLMVOPUIUFHUSYTXRPBGAPDHCIVPNATZXGMCUETXYLWKNOJBBLIBJPQOIK");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 52950U;
    msg.info.assign("GOBMWISANVPIHSN");

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
    msg.setTimeStamp(0.4067425168400095);
    msg.setSource(26534U);
    msg.setSourceEntity(165U);
    msg.setDestination(4628U);
    msg.setDestinationEntity(184U);
    msg.command = 201U;
    msg.entities.assign("FTZCIZXZQBCIUFFPQZEOHPKOQQXFBHBOHJECIXTABCHDJUREBRZYQPYTRKLNNQCOALUHNMKOAODIYSNZWOFXOTSYPFZMFJVGJIJEVSTVEDKKWBFSCMUBEKQ");

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
    msg.setTimeStamp(0.11454676461820446);
    msg.setSource(24982U);
    msg.setSourceEntity(171U);
    msg.setDestination(16390U);
    msg.setDestinationEntity(63U);
    msg.command = 92U;
    msg.entities.assign("BAJGTNTJTQEGKFGDEHKRUMAXFQDGPFGWKQRPCFEELDYLVTBVLJTAFY");

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
    msg.setTimeStamp(0.9271824849512456);
    msg.setSource(49132U);
    msg.setSourceEntity(170U);
    msg.setDestination(23668U);
    msg.setDestinationEntity(16U);
    msg.command = 95U;
    msg.entities.assign("VBOUGVUBFHPSFRIKECSTYDBXONLRAGKAMXGHMOIQKGYYFXJCZFSLALOPLHNCNRCWWDPJEBHDLRUVQCHLIYKBUWMDMOQDMZTXJZRKVTPPDIFSAEEZVUJMYRSBYQTEPYQZVNJGJQXSNMXHTAECGTIQNXHVGEXHWWNCUWCWKLDXBTZFPITOZKPMPTJIDANROWINFUZU");

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
    msg.setTimeStamp(0.012655011636885871);
    msg.setSource(39837U);
    msg.setSourceEntity(214U);
    msg.setDestination(11235U);
    msg.setDestinationEntity(207U);
    msg.mcount = 11U;
    msg.mnames.assign("KBEWBGPMOHMPEVXIDVRGETZHRAINAZZCGKAJKWBSHXPMWCUHSUHRLZSIJCXYKMOPPQYJCOMVEFJOALDXEVYQLBHKPITQUPRSTHFGYVWSLQDLCUCSBUEDTBLF");
    msg.ecount = 66U;
    msg.enames.assign("PWWCNJIZSXHGQBBIMBOEOIZAUQTFXCPWSQSTEBHHUNGCMDMGRBCBODHPBYOUOHYMW");
    msg.ccount = 104U;
    msg.cnames.assign("YNXLJKQCQLUSCWCOFGBIVDAWVKBADPQRDLEYUVPVMMJWTJAHPCUUDYZRAWVOHRBIESKMILGKFXIFMDITDQFTWSKXRBGFZJMULCKKNOXHPSUQTBOKBZTZJIBFRSPGWFYGMEPYNWFGATCNGEFTLEEXOSVGUYODVEWCECNYMUINYZQKJHJFBJHSLSAVRWXZBULAPXKRMVXQYOBTNSTDECLXLAPNRNHPOQMIJPMQXZCAWIOTHHNYRGRGD");
    msg.last_error.assign("CMTDIZNDUQVJIFHCLFCXXWOSWWFRSQLCBRUQKDDHXWVGXVLCWBVRSAJMXRNAAORHBYPDEGP");
    msg.last_error_time = 0.4156439761552808;

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
    msg.setTimeStamp(0.5214638927809467);
    msg.setSource(61186U);
    msg.setSourceEntity(253U);
    msg.setDestination(14925U);
    msg.setDestinationEntity(240U);
    msg.mcount = 133U;
    msg.mnames.assign("OINUHBQFVJUHELHEZHQPEGVQOKCGVBJNKZULWAIIDCUHUIPXYRKMBIJNXCEOTLSKIAQRAQXZPZJSCGHZYEPGWYNMPGTNQGSJOSEKDBJOQYUDXTPADKBOBQTWMBCIORNABYTNWWPABUHSTFMLJZWXVZQDAHLEZXLUFRBXVLXPZSVYERZMVYMJWSLOVDRDKNUJCCSFMMCYTNMEFLDVGLHWFMDDIFAWXYETRGACCGRKKXUOAIFGHFTPIYVRPOJ");
    msg.ecount = 246U;
    msg.enames.assign("PURJNBDLFMUIVHDAARJDQJWFPWOQYINLWHITDJQVFHCQSGGKKSCFTQEEVSWFOMTKUZGZKNYMNNWNYXXEMJETTKDTTLCCGB");
    msg.ccount = 66U;
    msg.cnames.assign("DOHUBSDRTXLXOANOOOFXKKZVZQQYXAJOXQCYZNHHIAQYVWVIMYETRPTVWWUIEBCCEUSLJJRMKLCPHPAWHUWMVJMCWINJUCQJTQGFMERGKAXAYN");
    msg.last_error.assign("AZJGLFXEUYDDUPOKMZXLZORPYHJOJQTVUEEIPLPFIMVKBNRXXYSINBKFCAYPMXLWQKNVHNYBBZCWDABUVOCDZIISPVGQORJYYPECFCKUISFHSHIXZNXGTEWMTMWLRGBSWOVCGTQ");
    msg.last_error_time = 0.4449949792571053;

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
    msg.setTimeStamp(0.09696817705975425);
    msg.setSource(7763U);
    msg.setSourceEntity(252U);
    msg.setDestination(10484U);
    msg.setDestinationEntity(60U);
    msg.mcount = 86U;
    msg.mnames.assign("LTWOTFAECYOKBOJMLLZORXRAQDIXZRDVFXKSFSBUGBVJNAMKWAJITBBGQI");
    msg.ecount = 183U;
    msg.enames.assign("SKZAQAZQAVOMFPMNKBALGCWCNUNFSQTKRRYXDHMIMHTWVKHLHRRGYCGORQQBJQEUBHLROEFJYZBGXWOJKOLOVOLCHPQVLFXENSTHZUNYIYGGCFPPJVGBTITYKZLNKUOVBVNPODHJZBYMUGCXZFWACISSTPAJUIUJAESLDDCWZTXCJERNXWWGIYKDXDISYECATENQVPREHELLYIVJBQB");
    msg.ccount = 238U;
    msg.cnames.assign("UXQIFDWRIXXHVVKBSGRJZDJBOONKSJAIMTZFQLACOFXPUWZSNQTERKCKJXLQFLJMEHUFDJZAMABGPQOCIOHNNPLVBAYYIEFGSWCBWCPKJAFBMWJWTQHZUYVXHSIHPKTMEMTRUGKUTYDQCYGODVZZRNOPURVPEBPYUAZEHELJFYSDEWRGLITTGHRNVBQUXKAOUJSEDCHYVYNSWMNFOXTZMAGKGFWLGRRCLXTLWNDHVCDY");
    msg.last_error.assign("MJTCHRTOUJGVMDRFCYUZICMNRBRIOQLVZSEF");
    msg.last_error_time = 0.23341982269882378;

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
    msg.setTimeStamp(0.7018490483231539);
    msg.setSource(61265U);
    msg.setSourceEntity(104U);
    msg.setDestination(47587U);
    msg.setDestinationEntity(247U);
    msg.mask = 95U;
    msg.max_depth = 0.3667391903491639;
    msg.min_altitude = 0.5618963355631353;
    msg.max_altitude = 0.24013747091210413;
    msg.min_speed = 0.0451283770661679;
    msg.max_speed = 0.7546529671118717;
    msg.max_vrate = 0.05639983139851046;
    msg.lat = 0.5124960789932853;
    msg.lon = 0.5756160886540701;
    msg.orientation = 0.6907631191428373;
    msg.width = 0.9863963052776115;
    msg.length = 0.9515916539238689;

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
    msg.setTimeStamp(0.7662870163193535);
    msg.setSource(53876U);
    msg.setSourceEntity(102U);
    msg.setDestination(61906U);
    msg.setDestinationEntity(32U);
    msg.mask = 47U;
    msg.max_depth = 0.7817425772357501;
    msg.min_altitude = 0.4668974106626099;
    msg.max_altitude = 0.1902670925280351;
    msg.min_speed = 0.9902473183210022;
    msg.max_speed = 0.5967323984371008;
    msg.max_vrate = 0.7362611064889178;
    msg.lat = 0.7098944832027163;
    msg.lon = 0.04397868059750221;
    msg.orientation = 0.6863414302258346;
    msg.width = 0.3158057713241579;
    msg.length = 0.8462612360205084;

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
    msg.setTimeStamp(0.6711750385182872);
    msg.setSource(34245U);
    msg.setSourceEntity(55U);
    msg.setDestination(26953U);
    msg.setDestinationEntity(126U);
    msg.mask = 71U;
    msg.max_depth = 0.3920836077300709;
    msg.min_altitude = 0.4342741969947347;
    msg.max_altitude = 0.7495398770309932;
    msg.min_speed = 0.444365449405159;
    msg.max_speed = 0.6470660202182017;
    msg.max_vrate = 0.6233090182572023;
    msg.lat = 0.3190031643327036;
    msg.lon = 0.4671045364097588;
    msg.orientation = 0.9916572488865428;
    msg.width = 0.4255844623117403;
    msg.length = 0.5106167245952629;

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
    msg.setTimeStamp(0.9870043634909275);
    msg.setSource(16518U);
    msg.setSourceEntity(203U);
    msg.setDestination(23505U);
    msg.setDestinationEntity(195U);

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
    msg.setTimeStamp(0.3199051057799679);
    msg.setSource(8636U);
    msg.setSourceEntity(199U);
    msg.setDestination(63525U);
    msg.setDestinationEntity(223U);

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
    msg.setTimeStamp(0.13160234894936984);
    msg.setSource(61189U);
    msg.setSourceEntity(78U);
    msg.setDestination(3699U);
    msg.setDestinationEntity(150U);

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
    msg.setTimeStamp(0.587118917194701);
    msg.setSource(26807U);
    msg.setSourceEntity(222U);
    msg.setDestination(11518U);
    msg.setDestinationEntity(83U);
    msg.duration = 24005U;

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
    msg.setTimeStamp(0.26378206670389037);
    msg.setSource(50819U);
    msg.setSourceEntity(169U);
    msg.setDestination(49637U);
    msg.setDestinationEntity(21U);
    msg.duration = 36961U;

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
    msg.setTimeStamp(0.5459652130668402);
    msg.setSource(39769U);
    msg.setSourceEntity(94U);
    msg.setDestination(30187U);
    msg.setDestinationEntity(189U);
    msg.duration = 24228U;

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
    msg.setTimeStamp(0.3556557747821347);
    msg.setSource(25215U);
    msg.setSourceEntity(230U);
    msg.setDestination(12456U);
    msg.setDestinationEntity(130U);
    msg.enable = 181U;
    msg.mask = 3984975426U;
    msg.scope_ref = 625397701U;

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
    msg.setTimeStamp(0.0010967565128932044);
    msg.setSource(54812U);
    msg.setSourceEntity(151U);
    msg.setDestination(41063U);
    msg.setDestinationEntity(40U);
    msg.enable = 46U;
    msg.mask = 1765220660U;
    msg.scope_ref = 1990409318U;

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
    msg.setTimeStamp(0.4781853450293717);
    msg.setSource(22486U);
    msg.setSourceEntity(54U);
    msg.setDestination(21308U);
    msg.setDestinationEntity(32U);
    msg.enable = 93U;
    msg.mask = 1265969053U;
    msg.scope_ref = 888051410U;

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
    msg.setTimeStamp(0.32083139971121644);
    msg.setSource(6967U);
    msg.setSourceEntity(21U);
    msg.setDestination(39686U);
    msg.setDestinationEntity(145U);
    msg.medium = 172U;

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
    msg.setTimeStamp(0.660489696265844);
    msg.setSource(8983U);
    msg.setSourceEntity(190U);
    msg.setDestination(42818U);
    msg.setDestinationEntity(160U);
    msg.medium = 75U;

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
    msg.setTimeStamp(0.39999579863548984);
    msg.setSource(3561U);
    msg.setSourceEntity(175U);
    msg.setDestination(10165U);
    msg.setDestinationEntity(230U);
    msg.medium = 158U;

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
    msg.setTimeStamp(0.03038283606762482);
    msg.setSource(9729U);
    msg.setSourceEntity(21U);
    msg.setDestination(61040U);
    msg.setDestinationEntity(25U);
    msg.value = 0.4249660417166141;
    msg.type = 2U;

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
    msg.setTimeStamp(0.8376867810942861);
    msg.setSource(20730U);
    msg.setSourceEntity(254U);
    msg.setDestination(32698U);
    msg.setDestinationEntity(210U);
    msg.value = 0.42404498124182555;
    msg.type = 7U;

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
    msg.setTimeStamp(0.40166092370217543);
    msg.setSource(60543U);
    msg.setSourceEntity(85U);
    msg.setDestination(7477U);
    msg.setDestinationEntity(81U);
    msg.value = 0.3304190746648942;
    msg.type = 208U;

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
    msg.setTimeStamp(0.05554154985600346);
    msg.setSource(10742U);
    msg.setSourceEntity(45U);
    msg.setDestination(5287U);
    msg.setDestinationEntity(162U);
    msg.possimerr = 0.6172569955225826;
    msg.converg = 0.1514375298255456;
    msg.turbulence = 0.4614156889399499;
    msg.possimmon = 157U;
    msg.commmon = 133U;
    msg.convergmon = 53U;

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
    msg.setTimeStamp(0.7458054024935327);
    msg.setSource(39158U);
    msg.setSourceEntity(153U);
    msg.setDestination(51132U);
    msg.setDestinationEntity(210U);
    msg.possimerr = 0.7199533246376385;
    msg.converg = 0.7008962071966476;
    msg.turbulence = 0.262634343308062;
    msg.possimmon = 57U;
    msg.commmon = 162U;
    msg.convergmon = 196U;

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
    msg.setTimeStamp(0.5736263056465344);
    msg.setSource(13969U);
    msg.setSourceEntity(69U);
    msg.setDestination(57696U);
    msg.setDestinationEntity(116U);
    msg.possimerr = 0.42266755644514764;
    msg.converg = 0.48228356653020543;
    msg.turbulence = 0.4503139895119903;
    msg.possimmon = 135U;
    msg.commmon = 62U;
    msg.convergmon = 110U;

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
    msg.setTimeStamp(0.26563343598975064);
    msg.setSource(17667U);
    msg.setSourceEntity(204U);
    msg.setDestination(52306U);
    msg.setDestinationEntity(195U);
    msg.autonomy = 150U;
    msg.mode.assign("PKUNHXDKJRMKNFQHCMAELZVFHJMNIOBTIJISUALEQTUHIMGZBCUOLTFGQIVHVVWAYIZKWBDKOBWXZNECOTTDNDVHZHGDUVXYCFNRVGGJFNXWPGTKENYLQPSOIUOORQYOUAPFLDYYZWMZAJLHRLOEPYPEGIVCEVDTQSQSEDUGZBT");

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
    msg.setTimeStamp(0.10009701487919676);
    msg.setSource(50021U);
    msg.setSourceEntity(202U);
    msg.setDestination(10450U);
    msg.setDestinationEntity(177U);
    msg.autonomy = 94U;
    msg.mode.assign("DXUNAQKPWJPDGMGORH");

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
    msg.setTimeStamp(0.271275830652698);
    msg.setSource(60928U);
    msg.setSourceEntity(144U);
    msg.setDestination(26648U);
    msg.setDestinationEntity(165U);
    msg.autonomy = 154U;
    msg.mode.assign("IMCRQRXETQGXNFEFSBDIDTYLHLUFGHTUXCDMVBQCVMNYJWHRFKQOHIFFQUKDCP");

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
    msg.setTimeStamp(0.488334009828322);
    msg.setSource(57698U);
    msg.setSourceEntity(54U);
    msg.setDestination(4297U);
    msg.setDestinationEntity(198U);
    msg.type = 110U;
    msg.op = 57U;
    msg.possimerr = 0.9791920042977629;
    msg.converg = 0.6114308800609921;
    msg.turbulence = 0.28293431977318606;
    msg.possimmon = 58U;
    msg.commmon = 253U;
    msg.convergmon = 82U;

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
    msg.setTimeStamp(0.7623316552518586);
    msg.setSource(35792U);
    msg.setSourceEntity(230U);
    msg.setDestination(48738U);
    msg.setDestinationEntity(98U);
    msg.type = 146U;
    msg.op = 94U;
    msg.possimerr = 0.3548400343693713;
    msg.converg = 0.20964929026462575;
    msg.turbulence = 0.0599747199997277;
    msg.possimmon = 89U;
    msg.commmon = 132U;
    msg.convergmon = 62U;

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
    msg.setTimeStamp(0.1149761919274529);
    msg.setSource(19126U);
    msg.setSourceEntity(129U);
    msg.setDestination(1567U);
    msg.setDestinationEntity(14U);
    msg.type = 154U;
    msg.op = 174U;
    msg.possimerr = 0.2244325970529999;
    msg.converg = 0.7601649166013528;
    msg.turbulence = 0.6424448842875429;
    msg.possimmon = 155U;
    msg.commmon = 127U;
    msg.convergmon = 236U;

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
    msg.setTimeStamp(0.9179144695595349);
    msg.setSource(52705U);
    msg.setSourceEntity(88U);
    msg.setDestination(52495U);
    msg.setDestinationEntity(153U);
    msg.op = 248U;
    msg.comm_interface = 205U;
    msg.period = 49133U;
    msg.sys_dst.assign("XOOABUEDSYXOMQCNKRUEHRQHFDKLOMGVSZTNCNKVASFPPHPLDVWNJIVDPAIJQVAZJVYAYJGIMEUFMCFUGKZIGWLOCQRUEEENPYTSBMIETTWWEVJSZWYFRDSKODTZTLRQNYGEQLBRFLVSQBOFIKYZPAXAUXTWHHBLXT");

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
    msg.setTimeStamp(0.45747433597041864);
    msg.setSource(58342U);
    msg.setSourceEntity(147U);
    msg.setDestination(478U);
    msg.setDestinationEntity(85U);
    msg.op = 191U;
    msg.comm_interface = 226U;
    msg.period = 41392U;
    msg.sys_dst.assign("GEAABDEJOUHUERSVLFCEYHAWZPRAJAMQUIQGBAGPFWSWQJKDIXHPTZCKWAGOLDOFTRRYTJOLTCOQJHFMPZIXINESCYX");

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
    msg.setTimeStamp(0.6619189891745731);
    msg.setSource(9426U);
    msg.setSourceEntity(38U);
    msg.setDestination(53253U);
    msg.setDestinationEntity(56U);
    msg.op = 133U;
    msg.comm_interface = 241U;
    msg.period = 22948U;
    msg.sys_dst.assign("NRYIWPMJOGCLLBEXSLPOCFFUVZTOMBUDFTSDMGPLWTBEWMJGBGJQJSAJWMXAMVSUNSLJHUKRQDVNYHGFORZJZCALNORHHHBIFAWKKUOSYVEDPKPLPHYXZAILMGTSNKZNCXXHDVXYNCDKOUEFMORLONTRSZREABKBQERZHXVZWYGWLTBBQIRP");

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
    msg.setTimeStamp(0.6000192084078306);
    msg.setSource(16567U);
    msg.setSourceEntity(51U);
    msg.setDestination(4778U);
    msg.setDestinationEntity(219U);
    msg.stime = 1029113255U;
    msg.latitude = 0.10812443545025563;
    msg.longitude = 0.6984890936444933;
    msg.altitude = 46242U;
    msg.depth = 34011U;
    msg.heading = 10992U;
    msg.speed = -16856;
    msg.fuel = 90;
    msg.exec_state = -4;
    msg.plan_checksum = 53321U;

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
    msg.setTimeStamp(0.7766393242877552);
    msg.setSource(61034U);
    msg.setSourceEntity(119U);
    msg.setDestination(62098U);
    msg.setDestinationEntity(163U);
    msg.stime = 1051192107U;
    msg.latitude = 0.10221835090771103;
    msg.longitude = 0.4914705173295675;
    msg.altitude = 40097U;
    msg.depth = 14946U;
    msg.heading = 19504U;
    msg.speed = -15540;
    msg.fuel = 105;
    msg.exec_state = 114;
    msg.plan_checksum = 44217U;

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
    msg.setTimeStamp(0.08026120579676022);
    msg.setSource(41179U);
    msg.setSourceEntity(101U);
    msg.setDestination(2813U);
    msg.setDestinationEntity(117U);
    msg.stime = 994105229U;
    msg.latitude = 0.2026808881645319;
    msg.longitude = 0.2962008554000165;
    msg.altitude = 50803U;
    msg.depth = 52682U;
    msg.heading = 26509U;
    msg.speed = 639;
    msg.fuel = -23;
    msg.exec_state = 109;
    msg.plan_checksum = 27189U;

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
    msg.setTimeStamp(0.8604414576623095);
    msg.setSource(61105U);
    msg.setSourceEntity(170U);
    msg.setDestination(25394U);
    msg.setDestinationEntity(228U);
    msg.req_id = 48175U;
    msg.comm_mean = 220U;
    msg.destination.assign("VDOGDQSKKEDNZFCEHZBYAWUOTQUJHZWQPAMUKIJOHTISELQBCFWDRIBWRIHJPFSGDTXERNPYHFCHJYLBYTQNPGLZSGQSKNREVVKDBXMZGFXLSMIUTNIGBMYQBRJIEVAWJRCWLZUCHXVMCVFEOCKYRLJSKYROPNPAJNTSGTADDOMVDGQXUEUTRVALXOJJUHWBOFSPNXNPKWPYMGVOMUEAXLHVIXIZYAQGLCYZPKTW");
    msg.deadline = 0.3844145500304229;
    msg.range = 0.037227519726914626;
    msg.data_mode = 161U;
    IMC::FollowRefState tmp_msg_0;
    tmp_msg_0.control_src = 38322U;
    tmp_msg_0.control_ent = 109U;
    IMC::Reference tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.flags = 31U;
    IMC::DesiredSpeed tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.value = 0.19114939545519438;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 15U;
    tmp_tmp_msg_0_0.speed.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::DesiredZ tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.value = 0.9973234692614592;
    tmp_tmp_tmp_msg_0_0_1.z_units = 250U;
    tmp_tmp_msg_0_0.z.set(tmp_tmp_tmp_msg_0_0_1);
    tmp_tmp_msg_0_0.lat = 0.4629115012044005;
    tmp_tmp_msg_0_0.lon = 0.7596377158484219;
    tmp_tmp_msg_0_0.radius = 0.6813973012439692;
    tmp_msg_0.reference.set(tmp_tmp_msg_0_0);
    tmp_msg_0.state = 223U;
    tmp_msg_0.proximity = 119U;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("BOTFPHNASDHAUSLXRSUWYXHQCJLKNELYMZBJXRZSZQUAKQNISOPJDUKQUMPYAJIATRNLWSTKUZWMVKGCJRRZAWGOGXVYBPCJCWMFEFPVNUWTOGKGXLKCXZEEAVHDVZEYXKRCUDOFDLHEDISNCHPCVIJGQPDLYNOCLYFLF");
    const signed char tmp_msg_1[] = {49, -118, 60, 23, -109, -128, -116, 38, -96, -35, 121, 110, -41, -76, 80, 21, -23, -122, 0, -47, -4, -53, 2, -19, -40, 77, -69, 94, 39, 77, 37, -126, 49, 24, 42, 72, 119, -52, 5, -116, -49, 28, 110, -3, 88, -16, -98, -128, -63, -40, 15, -78, -72, 96, -1, 54, 80, 67, -74, 9, 66, -5, -71, -105};
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
    msg.setTimeStamp(0.7646470588088863);
    msg.setSource(35440U);
    msg.setSourceEntity(221U);
    msg.setDestination(11659U);
    msg.setDestinationEntity(173U);
    msg.req_id = 29546U;
    msg.comm_mean = 124U;
    msg.destination.assign("RCGFLYXXKQVRYCMRPQVYZZDUIYTDTSZTVWJAUMGEVHKEUMFYEWOGWLCGUMGHKIDROPAKGXBVUZANXJNILRZFLSANREEBFC");
    msg.deadline = 0.11396103180680595;
    msg.range = 0.883087909534453;
    msg.data_mode = 230U;
    IMC::SetServoPosition tmp_msg_0;
    tmp_msg_0.id = 127U;
    tmp_msg_0.value = 0.5093006068727659;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("NZHITCIRBJHGZCBVDXCFRUFYKHVQFLDILAXCVGMDJPCUPYMSOEKKIXAWDKYSQJDIAOXAJBYUMPQVKWPHSNXGYQJTRTJNGWVJPFAAQKOYLTAOECOZSZHLCGMHNKWFTOMFXSUBZQRAVDFUXEJWRHNVZRTEZEVXMPHTZLQNDRQIXIEEPKUUMTCTSAHGPCLDGMWEYSMEFAPZBSWFNYYLGJZFBNWRQCGGLUUKIS");
    const signed char tmp_msg_1[] = {55, 97, -118, -12, 83, -120, -63, 104, -121, -96, 90, 108, -65, -84, 47, -83, -75, 68, 20, 122, 41, -49, -86, -46, -57, 79, -56, -91, -94, 115, -35, 23, -66, 125, 121, -41, -54, 18, -102, 109, 119, -54, 90, 13, -84, 40, 46, 32, 37, 64, 46, -41, -15, 85, -57, -91, -93, 103, 122, -107, 54, -13, 27, 96, -82, -19, -61, 0, 87, 90, 80, 88, -88, -101, 86, 95, 50, -117, -115, -15, 45, -78, 58, -56, -103, 80, -9, -27, 40, -89, -72, 104, 107, 56, 30, 70, -46, -10, -72, -48, -18, -98, -53, -77, -37, 83, 0, 20, 40, -119, -113, 2, 114, -16, -17, 80, 9, -27, 20, 79, -79, -109, -99, 68, 85, -98, 70, 8, -53, 104, -61, -53, 90, -102, -87, -75, -69, 61, 17, -75, -128, -28, 77, -118, 64, 34, 62, -94, 101, 22, -77, -121, 109, -45, -28, 96, 97, -99, 124, 15, -111};
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
    msg.setTimeStamp(0.37314888957896);
    msg.setSource(53660U);
    msg.setSourceEntity(123U);
    msg.setDestination(20879U);
    msg.setDestinationEntity(0U);
    msg.req_id = 55623U;
    msg.comm_mean = 101U;
    msg.destination.assign("VKQSUKSHQUJTORYFZGKABMCOQMREYRXNSOYXHWQIPTOWCDRIUIYKUIEQN");
    msg.deadline = 0.4673224909404642;
    msg.range = 0.4545692759550034;
    msg.data_mode = 71U;
    IMC::AcousticMessage tmp_msg_0;
    IMC::DesiredHeadingRate tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.9050120141908347;
    tmp_msg_0.message.set(tmp_tmp_msg_0_0);
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("ECZTOSWHHPHQSYFLQUABUWAYNIVWOCMPRVNNHTVYOSRSEEQTSRJMKZFNQWZXEZYZMEJQGCDVLIKJADGGFIUAAQ");
    const signed char tmp_msg_1[] = {-37, -69, -85, -36, -48, -38, -56, 71, 82, -91, -13, 0, 62, 80, 37, 40, 65, -51, 62, 62, -44, -46, 102, -43, 109, -66, -108, 23, -1, 35, 60, 81, 43, -110, 112, 68, 74, 5, 57, -115, -69, -47, -30, -18, 78, 83, 49, -29, -48, -25, -66, 87, 74, 34, -99, 74, -31, 57, -84, -123, 95, 78, 92, 34, 73, -25, 64, -46, -106, 26, 9, 105, -71, -14, -17, 37, 79, 81, -23, 33, -91, 119, 79, 4, -22, 40, -34, -123, 97, -107, 86, -52, 90, -126, 101, 74, -51, 38, -124, -51, -66, 59, -12, 76, 100, -40, -78, -49, 46, -39, -18, 10, -101, -86, 44, -114, -125, -68, -121};
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
    msg.setTimeStamp(0.507073246551789);
    msg.setSource(14516U);
    msg.setSourceEntity(117U);
    msg.setDestination(63150U);
    msg.setDestinationEntity(218U);
    msg.req_id = 4655U;
    msg.status = 36U;
    msg.range = 0.4380872847747116;
    msg.info.assign("MHVZLRBRRCAXRVWEPCYGZZJMAUJDUK");

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
    msg.setTimeStamp(0.09013647094216104);
    msg.setSource(11910U);
    msg.setSourceEntity(188U);
    msg.setDestination(15401U);
    msg.setDestinationEntity(209U);
    msg.req_id = 36417U;
    msg.status = 34U;
    msg.range = 0.33146959376819485;
    msg.info.assign("PTYESIZHMMJTTTCLWGVJEKMVEDCDUHVQRZBZYOKBWYHDBJXUPCBAQMIRDYYBKNMSAINRGFCZATCZREZXVRRQLXYELLIBDFSWORJKSBVRPAWWSBUTNQSHIGPXXEGLYWP");

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
    msg.setTimeStamp(0.6875095615761031);
    msg.setSource(23739U);
    msg.setSourceEntity(175U);
    msg.setDestination(43274U);
    msg.setDestinationEntity(113U);
    msg.req_id = 2720U;
    msg.status = 178U;
    msg.range = 0.9055808407113783;
    msg.info.assign("NULOTIJXLBKGQAXEUVFGPJSSJIFECIATQYCQLEBYGJTRHDRWIMUMMKQQBVFXCADENCSMXQK");

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
    msg.setTimeStamp(0.7281504877008069);
    msg.setSource(17270U);
    msg.setSourceEntity(170U);
    msg.setDestination(2632U);
    msg.setDestinationEntity(83U);
    msg.req_id = 27147U;
    msg.destination.assign("RXCTFSGXIYVLKWWLPAVHGCDOQMFYKYOWIHDGHGUEPQYVMWHOIJDJDXJQZJPUJSXEPCRETEXEWWNBRJMNHNMTPBACVCHAOOVIKFEGKKTJOZAZWMQTREBBZRCFQBMXUOGCYNMAASXQYSIDCFKATHEAVXHDRWRUPSFGEYFZJXKABVULNVZVZQYINISFNUZRGSNSUQRRZLLODCKWPCLZH");
    msg.timeout = 0.38254244741038745;
    msg.sms_text.assign("NYPMTVIVZFRTDOBNOJXUIEOZXHXJJDFFJEOCALIZZEAQCIFIMGLWZFYMUYYBBCLDVWEUHAVSWNOMPJMFXCPRVQAYYBCBEASIXTWJAQPINNTWEGOVKSQLXPRWURQXYHJPRNVBQBTFKCMVPTSDE");

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
    msg.setTimeStamp(0.39545582814777014);
    msg.setSource(43716U);
    msg.setSourceEntity(244U);
    msg.setDestination(40898U);
    msg.setDestinationEntity(194U);
    msg.req_id = 47058U;
    msg.destination.assign("OCTQAFIEZLFRTZHXCYZPQSGJAIMVOHGCNGCPYEKQIJXBUAOYBNTMXTULVWUEXODYBKQSWFDEHIEQUOXRLIMRJFSDJLBBSMGLSWMEVMCOZGUZBYVPFYSTRHMOKCWNFHGBP");
    msg.timeout = 0.6625954872043274;
    msg.sms_text.assign("CQNHVEAWBKIMUFFOPVERCBBPYQDCDEJKDWVYHFWSATYKOHBFLIMGYUSNXHFRQAEPHLTPQUEPNURCMICTJOSKUEBYUCQRCTGZYMAGXBAWVKNKTBLNRZBTASIJNBEVIZDXSTERHOLWLIUHOVGAESHYVRNRYGRNWIVTIDZKMGAYLWGFEUPUZVJOJJWYXLCOUBADMZXXHCJIXRFSTZIZWPJLJMGZXSXAMDPQKKMFKOSVQTGDL");

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
    msg.setTimeStamp(0.6099047229543944);
    msg.setSource(20095U);
    msg.setSourceEntity(20U);
    msg.setDestination(22973U);
    msg.setDestinationEntity(84U);
    msg.req_id = 27239U;
    msg.destination.assign("DSWNKUZFZMSGLBJXZAKBGHTCOVPIGDDATCENIIFHRIYYJOLBXFTRDGANGOBUIJEDIYJPJSEYOIFQLUSNDVWQVHOBVLN");
    msg.timeout = 0.34796508354735123;
    msg.sms_text.assign("MCAHSNMREZLKWTAGHLXFPCU");

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
    msg.setTimeStamp(0.6342537416466792);
    msg.setSource(60178U);
    msg.setSourceEntity(15U);
    msg.setDestination(22671U);
    msg.setDestinationEntity(187U);
    msg.req_id = 18689U;
    msg.status = 188U;
    msg.info.assign("ZSZSCSUCAJXQZGGVWNONVBNTLHXUQYKNZWNHAEPXTSDDYADRPIZB");

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
    msg.setTimeStamp(0.1549327973393564);
    msg.setSource(21882U);
    msg.setSourceEntity(220U);
    msg.setDestination(1326U);
    msg.setDestinationEntity(245U);
    msg.req_id = 13246U;
    msg.status = 153U;
    msg.info.assign("BEOVIYXBVLMCIBPVMUSJELZTVEIVBGZNBOTWJXNSSAJCYTHGAYPSZDDEWCHWEFHDFQXCRYOCFCFHZUBJCIIEXSOOYTARUQHCGOUFGNNUOCGUAAHBULPBGYDWXMLDFLRLPEYJQKOZVKDVXQITQFMNKVNNLWRYQTQPOOPIMHIITLGASRWQMCBDEKTBXXVPJNFHZPMSJHAMIZKJAZWGFDUKWEXMDNQRYKGWQAPKM");

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
    msg.setTimeStamp(0.18822956825641268);
    msg.setSource(2988U);
    msg.setSourceEntity(200U);
    msg.setDestination(22170U);
    msg.setDestinationEntity(230U);
    msg.req_id = 10404U;
    msg.status = 191U;
    msg.info.assign("UCLLDRHOXIGSWGFFVKTSOTOTRENZXEPOAUJEOCWPXGIKGIPGZWGQASFWSTRZJCYMQZVAXKIFHUTRFICINSNUMAZGDHWCFHLNUWIVQYXHUDSEYXYDBWJHSQMXYM");

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
    msg.setTimeStamp(0.8176846255176776);
    msg.setSource(2536U);
    msg.setSourceEntity(134U);
    msg.setDestination(36620U);
    msg.setDestinationEntity(215U);
    msg.state = 114U;

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
    msg.setTimeStamp(0.17253346474234355);
    msg.setSource(32465U);
    msg.setSourceEntity(81U);
    msg.setDestination(34242U);
    msg.setDestinationEntity(168U);
    msg.state = 169U;

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
    msg.setTimeStamp(0.16512746629971464);
    msg.setSource(56778U);
    msg.setSourceEntity(28U);
    msg.setDestination(4344U);
    msg.setDestinationEntity(125U);
    msg.state = 220U;

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
    msg.setTimeStamp(0.9134698553973983);
    msg.setSource(672U);
    msg.setSourceEntity(119U);
    msg.setDestination(9282U);
    msg.setDestinationEntity(66U);
    msg.state = 149U;

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
    msg.setTimeStamp(0.6157235055631273);
    msg.setSource(31228U);
    msg.setSourceEntity(23U);
    msg.setDestination(55449U);
    msg.setDestinationEntity(231U);
    msg.state = 202U;

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
    msg.setTimeStamp(0.8082703018363498);
    msg.setSource(26774U);
    msg.setSourceEntity(84U);
    msg.setDestination(21417U);
    msg.setDestinationEntity(63U);
    msg.state = 109U;

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
    msg.setTimeStamp(0.0927186731089743);
    msg.setSource(26836U);
    msg.setSourceEntity(104U);
    msg.setDestination(54070U);
    msg.setDestinationEntity(213U);
    msg.req_id = 27946U;
    msg.destination.assign("NMOQMUDBNUEOPIPJGY");
    msg.timeout = 0.4185368584227127;
    IMC::QueryEntityState tmp_msg_0;
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
    msg.setTimeStamp(0.47960860898416124);
    msg.setSource(23779U);
    msg.setSourceEntity(88U);
    msg.setDestination(56300U);
    msg.setDestinationEntity(202U);
    msg.req_id = 62225U;
    msg.destination.assign("VCIJLVHYULTUOASRMCKULMRRWHFFYJYTZGAHMINZJWJQMMAXOWVAXJVTHXRQCRCDLXXDUXLUXPSWFTTGBKQOQWDJIRBAPOABCAFHYFQ");
    msg.timeout = 0.5986623620429794;
    IMC::SetPWM tmp_msg_0;
    tmp_msg_0.id = 89U;
    tmp_msg_0.period = 1883519050U;
    tmp_msg_0.duty_cycle = 1361000418U;
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
    msg.setTimeStamp(0.9664343589645753);
    msg.setSource(17740U);
    msg.setSourceEntity(14U);
    msg.setDestination(17820U);
    msg.setDestinationEntity(87U);
    msg.req_id = 60390U;
    msg.destination.assign("FCJNSIDBVEFUSDIMEAUXTZGNWTZPOPJONXJLHZQCTHMRAPWUEMFIXBYZKNWEOVAUY");
    msg.timeout = 0.7408277821049152;
    IMC::SetControlSurfaceDeflection tmp_msg_0;
    tmp_msg_0.id = 93U;
    tmp_msg_0.angle = 0.3921490753522864;
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
    msg.setTimeStamp(0.610986065047865);
    msg.setSource(12115U);
    msg.setSourceEntity(40U);
    msg.setDestination(22032U);
    msg.setDestinationEntity(207U);
    msg.req_id = 56635U;
    msg.status = 33U;
    msg.info.assign("EMYJIHEIASH");

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
    msg.setTimeStamp(0.15819639699337773);
    msg.setSource(44075U);
    msg.setSourceEntity(49U);
    msg.setDestination(49698U);
    msg.setDestinationEntity(77U);
    msg.req_id = 22993U;
    msg.status = 89U;
    msg.info.assign("AGDQYUWUKUQNDQYJSOCOJGBABXIYBVOTUQEWQYSNHJMVIQXRAEYYNOGIMMDOYOCYXNPQWPARKXXLRBCEFIBSXBOBNEFDZANHIKHXCQMKXEICZHNUSLJDDWCSURGVEVOLOXT");

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
    msg.setTimeStamp(0.3835293531019287);
    msg.setSource(16716U);
    msg.setSourceEntity(151U);
    msg.setDestination(6465U);
    msg.setDestinationEntity(55U);
    msg.req_id = 21920U;
    msg.status = 127U;
    msg.info.assign("AXCRMYVSKGTKTBOASJKERTRXCJBWFIYZFHIFHZEGIXVKRLCBDPHTNCUWPKCOWXIJSKIJAHULMGFHUTVPCWAQMJGRQNSYYFZJMDOPPPGYONIFWIREJMGQZUEOKZRBAILIJDOZWULVSYDNRKHVNRTPAKZYQJMYLHDYLNECCLUVLNDZWYWXMLFXSQEHQPNHGSAJVEAOOUDMSBGM");

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
    IMC::AssetReport msg;
    msg.setTimeStamp(0.8265288098995079);
    msg.setSource(23473U);
    msg.setSourceEntity(193U);
    msg.setDestination(57731U);
    msg.setDestinationEntity(7U);
    msg.name.assign("KRDGTFFORPCPGKEQBPRDEYSWSRKELLNCHZKCNFLLQUNXKCAHJOZMIUQVGHQUKEDZABISWPKOVMATQRWTUMVBBNYDSBTVXELDVOXZVYHQYFFJTYUFFC");
    msg.report_time = 0.09023987692470592;
    msg.medium = 30U;
    msg.lat = 0.49150007814279373;
    msg.lon = 0.6406677158709764;
    msg.depth = 0.5739157455419882;
    msg.alt = 0.5647970234819103;
    msg.sog = 0.14054691223507432;
    msg.cog = 0.7456965668219305;

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
    msg.setTimeStamp(0.283403505468371);
    msg.setSource(51306U);
    msg.setSourceEntity(184U);
    msg.setDestination(10717U);
    msg.setDestinationEntity(118U);
    msg.name.assign("SGUACYXIBHDSPEQDIWHYGMUMOJKOYZAPCSFDBPMKHBBEJLATXANTKRBYOZVSFWYYAQUVQFRKEYRNANAISDSIIMHHBUZROWQXWGTUMPTVWZSXRMWYSKEOGHAXAELTMKXFRJJS");
    msg.report_time = 0.17400435559364136;
    msg.medium = 136U;
    msg.lat = 0.4565313353604661;
    msg.lon = 0.5056145694105963;
    msg.depth = 0.12309344893289154;
    msg.alt = 0.4427113828506387;
    msg.sog = 0.31433931695873707;
    msg.cog = 0.3139609597581985;

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
    msg.setTimeStamp(0.3794148347753);
    msg.setSource(54531U);
    msg.setSourceEntity(157U);
    msg.setDestination(40700U);
    msg.setDestinationEntity(143U);
    msg.name.assign("VRNPXHRVOOOCWDEDSNLJIAOMPBQJLRPGBLMFPYCHKMGTBQOEXFGSVNXFCMBDRKTTTIGUCETGSYZMKMDBPYTXBGWLHLABXVTSRKQPJWVFEIACJBPDAYLKRLJXWYNQZKQZEDZFZHWMSDLVYURRUQZFCLYDNIQNMTAAGNOSXCQLKIFEJVEHIXYNBDMGPHWGJUFNRPUESWCUOHTJOZUNHXKYHOZWKAVKEAGZVFAIBJQWTIS");
    msg.report_time = 0.5989247501677818;
    msg.medium = 58U;
    msg.lat = 0.43259344380246456;
    msg.lon = 0.7127468229305638;
    msg.depth = 0.24624165207188964;
    msg.alt = 0.19680009782156238;
    msg.sog = 0.6422155999261937;
    msg.cog = 0.19285356387520136;
    IMC::Rows tmp_msg_0;
    tmp_msg_0.timeout = 30454U;
    tmp_msg_0.lat = 0.7951050203708663;
    tmp_msg_0.lon = 0.10142707242185212;
    tmp_msg_0.z = 0.028686813436815783;
    tmp_msg_0.z_units = 89U;
    tmp_msg_0.speed = 0.6487305606890185;
    tmp_msg_0.speed_units = 105U;
    tmp_msg_0.bearing = 0.3539399153865034;
    tmp_msg_0.cross_angle = 0.4553342085623432;
    tmp_msg_0.width = 0.16861817578376903;
    tmp_msg_0.length = 0.9132818342439937;
    tmp_msg_0.hstep = 0.16412316315371966;
    tmp_msg_0.coff = 84U;
    tmp_msg_0.alternation = 7U;
    tmp_msg_0.flags = 243U;
    tmp_msg_0.custom.assign("TWPXYOACABPIFFNQHMOVFQTIUZBNAXHNXSHZLQTUVKUVSUYLYNQBECGRYDMVSXMZJUSPOMSHOCEIXTQAPWKCZQLOZNDKRARLBNZBCGEIBIKMJEOWFJGAKRKYRGTWYKGLMFGNXDJWDBDJLAZWMMUJCTNSJVOLHWCTSFKVDREVRUPOOPWWFHPOFJNILNVRQVRGHZCEGIEHIEPQMEDUYXKDTTXQSEGHPJDBFFSZKCLWALIAJUG");
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
    IMC::Abort msg;
    msg.setTimeStamp(0.6360510508195071);
    msg.setSource(51743U);
    msg.setSourceEntity(100U);
    msg.setDestination(46638U);
    msg.setDestinationEntity(250U);

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
    msg.setTimeStamp(0.6945517619071372);
    msg.setSource(45647U);
    msg.setSourceEntity(39U);
    msg.setDestination(48153U);
    msg.setDestinationEntity(98U);

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
    msg.setTimeStamp(0.9189436391354661);
    msg.setSource(36394U);
    msg.setSourceEntity(247U);
    msg.setDestination(63944U);
    msg.setDestinationEntity(34U);

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
    msg.setTimeStamp(0.8891722158786288);
    msg.setSource(38897U);
    msg.setSourceEntity(57U);
    msg.setDestination(39505U);
    msg.setDestinationEntity(104U);
    msg.plan_id.assign("EBSEGYGYTNYPORQTIMXFITQBFLQEHBZANRZKLSOKIBVJGKCEMGCKUZVASLNFXOGQDWJVUWXSSTNLOZCEYURCNMBWDQMEENWMPOGCGZQZJDGJSOKOTWZHXRZVUKMDBVUPXBEHVRMA");
    msg.description.assign("TUBAZWFNPJRGPKVCPJHLKUNRGZJJCSTDINNYJYJXAYKPNYKJLCHHSBLFPOFWWXNLXUWZDZMYAWGRWCMFTKECBKEEIPQBHISXXYOGVDJGIEFGNNREEZTUOGYTPQAHIHAQLSOCGRDDMVFDCQIMUZXVWIUOCQSMDISTQQS");
    msg.vnamespace.assign("VEQAORCGNBACIRFLGJSGQCDSLNPNLSYZCDAZHOSZFNXDBERTUQBRHXMYTJKOXHYFIDUCKJTVBLVCEPZKHLNAS");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("HCOIQBIPOLNVBLJRJAPDYJZXTQFQBUUANKZQS");
    tmp_msg_0.value.assign("FYUVUMJYUNMRJCSHWQOBIKHHOQURRKIDQNBGVSELUICCRLANSMQTWPWXFBOQJNKGKI");
    tmp_msg_0.type = 97U;
    tmp_msg_0.access = 253U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("QRNSUKZBRXKBSAQEOFAMMSCFEPANJZVQJFZSEQFWQIVPRDFHVEDMMKXIVLTTBUPFGHOHDUWPOLYGRCOFMVEIHDNWWODAV");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("XBQDFYOYAADONPWBAXKJPEUCUXJVZDPGVIQAFGVVHILGNCBQXOITZWWHJFESSURWAGXLCNUINUVLYDFVOXJERCWSILDMPLTEDMHGNKSVFSQESRBEJRHABZFGRNPGDJNIZVQOYLMUQMKCQEATPUGRTJYIBGMGKDCUZMVCENZQCNFKAOWNKCXBYJBQKFTWSPRHZTMTORMYBIFXZLLIZPZKL");
    IMC::CoverArea tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.lat = 0.721643925281683;
    tmp_tmp_msg_1_0.lon = 0.22415639040895385;
    tmp_tmp_msg_1_0.z = 0.6264761932031413;
    tmp_tmp_msg_1_0.z_units = 184U;
    tmp_tmp_msg_1_0.speed = 0.23306548889984968;
    tmp_tmp_msg_1_0.speed_units = 177U;
    IMC::PolygonVertex tmp_tmp_tmp_msg_1_0_0;
    tmp_tmp_tmp_msg_1_0_0.lat = 0.44707844907090766;
    tmp_tmp_tmp_msg_1_0_0.lon = 0.34478553878188134;
    tmp_tmp_msg_1_0.polygon.push_back(tmp_tmp_tmp_msg_1_0_0);
    tmp_tmp_msg_1_0.custom.assign("WMLLKZYJUUPQQHCRQEUZAYDMADJJOGOTRXPJYCHDFBNTSYAVIVPNWBDP");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::LblEstimate tmp_tmp_msg_1_1;
    IMC::LblBeacon tmp_tmp_tmp_msg_1_1_0;
    tmp_tmp_tmp_msg_1_1_0.beacon.assign("MEXMUZXHENUGWAALHUEIPRSKMIYPTLQNBDHJDKRWPNTKYUAVGSOUULQSRVJZVPTRTWOA");
    tmp_tmp_tmp_msg_1_1_0.lat = 0.5285093370287816;
    tmp_tmp_tmp_msg_1_1_0.lon = 0.16733000453535285;
    tmp_tmp_tmp_msg_1_1_0.depth = 0.41378769532113346;
    tmp_tmp_tmp_msg_1_1_0.query_channel = 222U;
    tmp_tmp_tmp_msg_1_1_0.reply_channel = 15U;
    tmp_tmp_tmp_msg_1_1_0.transponder_delay = 254U;
    tmp_tmp_msg_1_1.beacon.set(tmp_tmp_tmp_msg_1_1_0);
    tmp_tmp_msg_1_1.x = 0.5090422083340845;
    tmp_tmp_msg_1_1.y = 0.3698419865457949;
    tmp_tmp_msg_1_1.var_x = 0.17300478767620409;
    tmp_tmp_msg_1_1.var_y = 0.5248320550629132;
    tmp_tmp_msg_1_1.distance = 0.6428700511194566;
    tmp_msg_1.end_actions.push_back(tmp_tmp_msg_1_1);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::DissolvedOrganicMatter tmp_msg_2;
    tmp_msg_2.value = 0.21982343737524668;
    tmp_msg_2.type = 244U;
    msg.end_actions.push_back(tmp_msg_2);

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
    msg.setTimeStamp(0.45042146209125955);
    msg.setSource(51457U);
    msg.setSourceEntity(78U);
    msg.setDestination(36102U);
    msg.setDestinationEntity(82U);
    msg.plan_id.assign("ROGOGWQUYOSNMVBGKVCIVHFLZOUXMEFTSTYDMJKBBMABEGZRDCITIWXTKDSCLHVUQINQTR");
    msg.description.assign("CQHQVVFSKYESDWISCRLFAUWUFZMLADPBSBQZCGQJOIMDYDZNWMMEMFUWWMUUQABJFRIMOBEGVXPSOKFODZCNYSLNSFPRVAOTUZLHEOYNR");
    msg.vnamespace.assign("RXNQGUPNNMSJXFOWLSEIFYEFLQUATMNHHSCBTVXOLJBGCCCMLBGSRVCRNQZHKRXTPMVNLBBOIHDGMJFVDEEFQQYQDDEWDAUJWBZBVMVKFBWPX");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("JNMUEWHUBSUSAHPOGDRZECNNQFDZGRQJQPBKOVLLALOLXOFRLYUWNWHWIUDKMXERSGFLIIYTTEFYDHGNBGJYKUPUVPSXMUPDKXOHSYTPTVVRKEG");
    tmp_msg_0.value.assign("TCSVTRGAYTEABVQTMFFYYULLBIYLAEDUZHSHKMDMEDXMXCECLZPFJHBKRPDNBNZAVIIXYVNBWSINADOEXJVLDHIECFJJMJYXSUYLHEVHRKUGHJQJNQWCWOWGBQKIGXZGZYSJPZUHTFCDWNFZPAEIOVAJPYINHZVRRTCJXDXNPXVEPVEQALORNWLKKIFPURGFQOQCOPWGOMFUDWWMMBBSKQFMSQGWUZUKLLAPGOTSATYIXBQ");
    tmp_msg_0.type = 219U;
    tmp_msg_0.access = 50U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("STWVDAYDBPWARKLCPYPTVDMAPZOSZDMFNESLYGRRQRPXWWRGFENZVQIQILEDOFSOMMLVZWJCBANSXAKURNIVJDWGKUSGTBXGLGCMCSTUYQXKPBJBTZYFEKBFHYNIUFKMF");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("RUVAOIEUJXFGDEYYPUKDZWNOJHWPYBHMNJRAOXKJHPRSURILPIAFEQHSQFTSUVTJGDBGTMUEHQXWXVWOLOSUWBOARNZPUL");
    IMC::Alignment tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.timeout = 32843U;
    tmp_tmp_msg_1_0.lat = 0.24792404028084147;
    tmp_tmp_msg_1_0.lon = 0.37776967872741907;
    tmp_tmp_msg_1_0.speed = 0.9707781600106143;
    tmp_tmp_msg_1_0.speed_units = 144U;
    tmp_tmp_msg_1_0.custom.assign("VTWBUPDYVYUCYEEMDKYLKPVTSPLPJOBLRJAQGZDRUFSGFCHUXOPRDDI");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::SmsTx tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.seq = 3445733683U;
    tmp_tmp_msg_1_1.destination.assign("JBJPGYAOHEFGLLOJIDNPPVESSLKIZBPBJZMAHMAIUAOVKNCZFJYBOAAWHETPEIYAUMZVHGMZTBUHRHKRNZINEGQXGSXMARWSDNQFQREWDILZPPCLXGHSOSYSOHVOWKRKWDRYGDNE");
    tmp_tmp_msg_1_1.timeout = 11485U;
    const signed char tmp_tmp_tmp_msg_1_1_0[] = {-107, 75, -118, -36, 54, -94, 78, -54, 103, 48, -6, -71, -65, -46, 101, 95, -57, -94, 78, -34, -39, -106, 12, -43, 55, -29, 74, -43, -45, 126, -4, 63, 24, -118, 83, 11, -123, 111, 49, 53, -94, 27, 4, -61, 11, -2, -95, 55, -41, 103, -76, 102, 104, 108, -107, -51, 87, 23, -58, 48, -17, 91, 95, 46, -101, 118, -47, 32, 100, -24, 106, 90, 33, 58, 107, 87, -104, -62, 9, 36, -44, -96, -55, 58, 78, -60, 29, 13, -104, 42, 126, 112, -5, -11, -75, 42, 31, 47, -124, 26, -19, -49, -35, 33, 67, 3, -96, -43, -74, -110, 26, 108, -77, -106, -113, 125, -78, -117, -64, 26, 54, 81, -10, 7, 13, 36, 70, -6, 61, -33, 22, 35, -105, 95, -17, 66, 53, -57, -54, -90, -83, 2, 96, -55, 87, 12, 26, 85, -57, 98, -108, 61, -58, 113, 113, 31, 107, -45, 71, -29, 49, 107};
    tmp_tmp_msg_1_1.data.assign(tmp_tmp_tmp_msg_1_1_0, tmp_tmp_tmp_msg_1_1_0 + sizeof(tmp_tmp_tmp_msg_1_1_0));
    tmp_msg_1.end_actions.push_back(tmp_tmp_msg_1_1);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::CoverArea tmp_msg_2;
    tmp_msg_2.lat = 0.40465105635382337;
    tmp_msg_2.lon = 0.9403052936182548;
    tmp_msg_2.z = 0.6326600314926536;
    tmp_msg_2.z_units = 170U;
    tmp_msg_2.speed = 0.6946251925301993;
    tmp_msg_2.speed_units = 163U;
    IMC::PolygonVertex tmp_tmp_msg_2_0;
    tmp_tmp_msg_2_0.lat = 0.3136994552757556;
    tmp_tmp_msg_2_0.lon = 0.6434387138053808;
    tmp_msg_2.polygon.push_back(tmp_tmp_msg_2_0);
    tmp_msg_2.custom.assign("TRBSIXOFMUVJFKJOWANPTNRKHGQQOPZBZKHBQTPOONZCUIVDHAUNNAUYEHMBAEKSNYIDJXJBFBVYXQWZCKKAPJWELSGPMXLNGETIYDVEQHHUZMCJRSVGFBRCDXDZLMRXKOLWOSYRUWFDENPRSQFZGAYYDGOSICLTCHDPKVITKWWSSZSGPXPWHXWXYTXJGLUFCBQZOZCITKACLVAFMVAWTMUFIEYBRHAVEDVEFPHLJQDMINMGGIU");
    msg.end_actions.push_back(tmp_msg_2);

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
    msg.setTimeStamp(0.16199750995877482);
    msg.setSource(40132U);
    msg.setSourceEntity(184U);
    msg.setDestination(52739U);
    msg.setDestinationEntity(198U);
    msg.plan_id.assign("ITNSRFZJFNTHKDJUYBKDVTIPRUAEGLYLVJJWAYGENLCOWZVZWAYRBXFUERWAQOVZSCSBLTPPCMYUJUIVXUYPZAVDDJTMQHRBULWGSVFCAIWDWMQRDQNWMTDTQXBDJMQCDXGULGCQHRMMFNVEVGNATKQSQJOTFBS");
    msg.description.assign("DCEGJYCJFSKHYWMAKUJEFCUVYLMWTVDSPTADFQOEZORQDIWZJPEFXZNVZBXDHRHRXOUKMBJNHLLK");
    msg.vnamespace.assign("TIIWXPZOIBWQHPUSPOIVRLFHSMVMWDKGXRTRRMEJSNAKQJYBLHMPHMCZDOEBXUYMDLYJBXWDFPBIBFJZXSEUBASGNTXKYWGNCIIEJIKRECYHKVCRJHUGLZYORERLPBEOZRNUFAQRHXKCVBYGOCWLAPFKKVQWOKALYVQQWJNJLSVJPTGAFXTKNDYCZFLYSN");
    msg.start_man_id.assign("NTXBRTQEAUEPXPKIRLRPVBRGXRSHOBPGOQWDQCDKRFSQJQFFWOHWLZUTVBPZNXGFOEEMTHCNAVVAFCMWDHFNAQUXJSSNHGLSIGNPMDJOWILZPIXCZMYJBIHUIAKMXYELMQTKUZKMDIPWYZLRIJDOTHJAMEJXSKEFJCJZUAALUUFAEUYTGQBVFKNSRNIVYVYYOECZZNVOJCWYVTTDBCKGLKHOVQY");
    IMC::PlanTransition tmp_msg_0;
    tmp_msg_0.source_man.assign("MCOREASGHSGJHSKHYUZOFLKCAMCYYTPKJKTCSNGIHNNOFSHBULVUTBZAJVYQJKOBZTNXYMAQWWUGIFLIXVZPWRPBDEHXQTGDMVXAURSWOGPEELBMCZDSKHVOILDIPWCWTTTWODUXPPJF");
    tmp_msg_0.dest_man.assign("EDVFWGCSCMJBJTBWQIQDUAGPZSBPRGAHOQHXOZBGJBYJBDTEORLFUHNZGUKWZHIEQEXGQNEBWJMPMKKSFLFCDLWNRAADGDZVYISXLABODPOUJELXRNMFRXDJVZCVVWUTMTIKMFNISKAPZYTFS");
    tmp_msg_0.conditions.assign("PNRYRZJGEYLCRAGUCXBHYMLTSHKITETJNO");
    msg.transitions.push_back(tmp_msg_0);
    IMC::Reference tmp_msg_1;
    tmp_msg_1.flags = 81U;
    IMC::DesiredSpeed tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.value = 0.4643769047573423;
    tmp_tmp_msg_1_0.speed_units = 65U;
    tmp_msg_1.speed.set(tmp_tmp_msg_1_0);
    IMC::DesiredZ tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.value = 0.1348096934820453;
    tmp_tmp_msg_1_1.z_units = 218U;
    tmp_msg_1.z.set(tmp_tmp_msg_1_1);
    tmp_msg_1.lat = 0.9290087102510859;
    tmp_msg_1.lon = 0.9774945209366064;
    tmp_msg_1.radius = 0.9107880829592621;
    msg.start_actions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.21096710576323197);
    msg.setSource(33726U);
    msg.setSourceEntity(15U);
    msg.setDestination(19570U);
    msg.setDestinationEntity(73U);
    msg.maneuver_id.assign("IUWEBHPCOQXPKIMUNWYAOSSXOCTQJPMGWEKFTHGJFNNYNXTDNZAUEWKAUDAXEJZULGOETZXIEZHKVOFBABLOZMIBLXYQUR");
    IMC::FollowTrajectory tmp_msg_0;
    tmp_msg_0.timeout = 279U;
    tmp_msg_0.lat = 0.7038975991375745;
    tmp_msg_0.lon = 0.30670140276439617;
    tmp_msg_0.z = 0.30372431174303827;
    tmp_msg_0.z_units = 90U;
    tmp_msg_0.speed = 0.42877782922296925;
    tmp_msg_0.speed_units = 226U;
    tmp_msg_0.custom.assign("AMOKMTHAGBKDGCEHOMTVDGUZXBSFBDRXYNEOLIUUTVBCLRBFIVIHRPYCZXQXXOPAXOWJFVQWRHTJKVNVGIECCULKOSZLEZRMJWDENEPFSGDVWLCUQJDSRFHJUSAYJIOJTIGMGN");
    msg.data.set(tmp_msg_0);
    IMC::Elevator tmp_msg_1;
    tmp_msg_1.timeout = 3066U;
    tmp_msg_1.flags = 220U;
    tmp_msg_1.lat = 0.5926833499268834;
    tmp_msg_1.lon = 0.806304659506849;
    tmp_msg_1.start_z = 0.6485079706635494;
    tmp_msg_1.start_z_units = 111U;
    tmp_msg_1.end_z = 0.5647769226017958;
    tmp_msg_1.end_z_units = 245U;
    tmp_msg_1.radius = 0.8750903423879994;
    tmp_msg_1.speed = 0.17315378127495984;
    tmp_msg_1.speed_units = 29U;
    tmp_msg_1.custom.assign("NHUQIKVMCEZCUOVZXCCQUNTMIPSTAXGTYXJWQHDMOMLJBJBUJVKSCJAKHSEYNVRAWGWHMGVADEVYHBKXBUTNOLJTFISFDNARJIQOXBDAKLDHUUYQUXIYURIMYPIMZXVEGZLWPUXWJFYRMCJYKGB");
    msg.start_actions.push_back(tmp_msg_1);
    IMC::ProfileSample tmp_msg_2;
    tmp_msg_2.depth = 60101U;
    tmp_msg_2.avg = 0.8645264852523781;
    msg.end_actions.push_back(tmp_msg_2);

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
    msg.setTimeStamp(0.616066318691633);
    msg.setSource(4628U);
    msg.setSourceEntity(14U);
    msg.setDestination(46502U);
    msg.setDestinationEntity(235U);
    msg.maneuver_id.assign("AYOBUZKFPRFZPBSCRZRPQNZBAJOGEIJGDWBBSBKSOKHGKFLLTVKPINCXWWYPMAQLNYHTQNXQWOHXCESAQFDJWIKSFYCAIMOOWUTEZNBYZZEOEDLEXJOHPQMGTEUYMGZDZTJSGCIFLKCZKUUYBICIKNVJXUVYALXWKOAVQQRTNPVXAMPMVRYQDFWSOGUCW");
    IMC::Takeoff tmp_msg_0;
    tmp_msg_0.lat = 0.8054926599904281;
    tmp_msg_0.lon = 0.18081953029764808;
    tmp_msg_0.z = 0.7986420376375634;
    tmp_msg_0.z_units = 85U;
    tmp_msg_0.speed = 0.5843142610517811;
    tmp_msg_0.speed_units = 253U;
    tmp_msg_0.takeoff_pitch = 0.08657698797224445;
    tmp_msg_0.custom.assign("JAPSAWGZHRSWLMCJICPNDEIFKALZUVTFEWPXHRDMYNJTJDFBXZLMYCKGJGYMNSDZVSHBKPCEDYSQCUPBKQWXTORDOODNXWGVEGOHEHJIX");
    msg.data.set(tmp_msg_0);
    IMC::TrexToken tmp_msg_1;
    tmp_msg_1.timeline.assign("SJIBHMBSLAKRJUKDHGYTTOSGDBNQHVAETFBJXSCMPEXOZHAQYRKOQRLCUIGKDAKULIQPEPWFHYRBRMEJATTSMLCFBRDVPVWFIFPEXMVTKMTZZUVLCUJIAXGOHNGJDNVQ");
    tmp_msg_1.predicate.assign("HMITOFIGRVTXZZKPRSTNHKWSCUZYOHVWFABYSQJMBALUNTUSATSPBURPPEJXYUEOFAPEJRGFQMIFGOEDQWGHPMBKZKZQOMESQCOYVDBEYQCNIAGEEKLJDSBZLLKDJNUOYQDJERVXLHEHCKSIBATWCWVSLPYULAWR");
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
    msg.setTimeStamp(0.31267764723261293);
    msg.setSource(33461U);
    msg.setSourceEntity(103U);
    msg.setDestination(18783U);
    msg.setDestinationEntity(230U);
    msg.maneuver_id.assign("MRWHKROUIQHCZWEYCJBPPQFTGKHZLUMWJJOQTSRLXKIIQNHZCFGSTUGMDMYSOBMKUDQ");
    IMC::Dislodge tmp_msg_0;
    tmp_msg_0.timeout = 9667U;
    tmp_msg_0.rpm = 0.39986478700820594;
    tmp_msg_0.direction = 79U;
    tmp_msg_0.custom.assign("DNSQFQQNBZPDGOMIIBNQZWBOGINYUWCOSYVKYYKBEBTIEOLXXSCKNVKMHWDNDHIXOFMNKVMPHODQQJQBUCBRPPZMAMVUJLQWKP");
    msg.data.set(tmp_msg_0);
    IMC::HomePosition tmp_msg_1;
    tmp_msg_1.op = 167U;
    tmp_msg_1.lat = 0.5769170532318898;
    tmp_msg_1.lon = 0.7887932753236706;
    tmp_msg_1.height = 0.7620413413938554;
    tmp_msg_1.depth = 0.5398436035116337;
    tmp_msg_1.alt = 0.9327268628350679;
    msg.end_actions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.37107954535421805);
    msg.setSource(38231U);
    msg.setSourceEntity(18U);
    msg.setDestination(50275U);
    msg.setDestinationEntity(137U);
    msg.source_man.assign("ZXGTCXQUNHTLTGPZONQDFJWRAHZXRUUSBICPRMIETJELRPILWWZFKGATOZTUMTAASAJ");
    msg.dest_man.assign("ERSWNYFZDFDRTAHOZRNPRIKDPJAEPGWARHXTKJVAKYYEAACSVGJMBWDMAMJDWIMHQFJQJUZTUL");
    msg.conditions.assign("CQQUAHPMHJGOPTFRAYGFHNAWLWBZAEFHDNDOYOBXZHIAKSFBZQFJWWUUHMQRHRVBGLYIRMOLTTMXSRLQXTLPFCZZOWSBGLDUDUQRIKXVHZQNYXEIMALUDNJJNDV");
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.3178996669971247;
    tmp_msg_0.y = 0.1904292924715092;
    tmp_msg_0.z = 0.20235050966931167;
    tmp_msg_0.phi = 0.8868987132063801;
    tmp_msg_0.theta = 0.9678350206230206;
    tmp_msg_0.psi = 0.4298380761916105;
    msg.actions.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.6510276865468402);
    msg.setSource(31619U);
    msg.setSourceEntity(98U);
    msg.setDestination(51958U);
    msg.setDestinationEntity(152U);
    msg.source_man.assign("PKCPFHILRBIWZQCFGLOWLNTBFIAYWAQDSPHEKZTLOOBDJTBBTOVPGLETGHSOXUYEAHNWBFYRYKTIAUIDPKPUDXBGIVHQVMDJFQKZVEXULWOBVKZMVCQFZFJYTNMIKHXRWWFMVVELUTMHAGHYRMSJZPCMKYZJDOXYUZTSIHJYSMLDADGQMOGTJAWIWJUGEIJXHSGSQYUZXRKNECDNCVCXP");
    msg.dest_man.assign("MITOZBTDPICUHMMRYKPDTYSZRKDIUIHWTUXCFQTSABSPGMYJDJRXQFJEXQMGHVSKYIWWMZVCLDELJYOPMPANASYENPECWONLDPZPCCKNUHNNQJFOLRUFKOQVRGZBVYGWBDKJKGWHDVES");
    msg.conditions.assign("EMGLFUANMXOQWDPNPMOOSLEFOOCJJVJLMXFYVLMSUTHZMMDGGMEKD");

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
    msg.setTimeStamp(0.5216704381045668);
    msg.setSource(25247U);
    msg.setSourceEntity(116U);
    msg.setDestination(39232U);
    msg.setDestinationEntity(114U);
    msg.source_man.assign("CADKELTOFGOGEMERZLYVSFZARMWWCGHAJFICREAHDKFTQPXFKNNDYMEFEKDTBXHNHJSZXOJCZNHLWMUIYRFMCGGDYFIAKOVBBJSPUYVYLCAWUXQCLCXMTHDVRWVAICURSQDCUGJOFVXQRJTASFUUQPHOVQPQEXLIRXY");
    msg.dest_man.assign("OSQNKXIXOTNJRQNESNQVMYBGEGSKFDDFKAXZLUGTZVZTTNMYDCVNJDKHHUNQREJLARKPWERAWMJJMBOGWJTSWZYMPABYTMLF");
    msg.conditions.assign("PRWASTCWKEZBGEUUSCTNHGZ");
    IMC::FormationPlanExecution tmp_msg_0;
    tmp_msg_0.group_name.assign("PBGSGDRIYFULLCJPELOBGRAWCGULHVPXGJHENTOHWHQTGWXMCSDHBKEINFYRNCYLBXZMQJHRKGDTEHXWDTJZUNXLIAKKUJLYSWXAKVZNDKTBFRSPUYNRNOTWHDQPCNMNWBCIFMVOVDYSJTTUBOCZQAOQRJITDBJGAOZFHCGCJVFEQJSQUBOSYIIKUMAVPXCIPAWVVKWVZDSVKSZSDFEQYAOTWKEPFIGEYXIXRLOPRMQUFMLAUREFMENZAYQZ");
    tmp_msg_0.formation_name.assign("ARBTRHJWHKLGUKXHCYCSMLRUVZRLPRERVNDBCVCEMUCAAXKYSMEJNNODUCPMXGYWBBOLOJWPAYMFXMUSMPIFSJDUNSTEGPPENSCRQXBIVLHVPFVRWMTIODARFJALKAQQWNVGZLCOZTQYKWZSGFKOUTKALSHYZDJWVDLOUNDBFFXKNAYJ");
    tmp_msg_0.plan_id.assign("FZBWOHDTYVLQXUMWPHTXKIIUKYPOZQESTXNLRSWUGVMWMSVOREYBXQATHAQWGZEHCMIUMJEATTHFGCNPWHXBLTZASEVBD");
    tmp_msg_0.description.assign("JZMTCDLFRFKHYACQPZLJEWPDFKHPRNGYIITPZUBJQMZHVRSJQAIPXZFNTASTTAQJBQPSOEDJWONNWVHOVKSWCCGWCYFGOZBMWINFJFPCSBGDYFRMSF");
    tmp_msg_0.leader_speed = 0.5349610816767759;
    tmp_msg_0.leader_bank_lim = 0.6263584487016688;
    tmp_msg_0.pos_sim_err_lim = 0.5757284865795106;
    tmp_msg_0.pos_sim_err_wrn = 0.9728308178615885;
    tmp_msg_0.pos_sim_err_timeout = 9673U;
    tmp_msg_0.converg_max = 0.8235996595968074;
    tmp_msg_0.converg_timeout = 2791U;
    tmp_msg_0.comms_timeout = 26557U;
    tmp_msg_0.turb_lim = 0.15344427124875315;
    tmp_msg_0.custom.assign("DIEIVGAZUDTQSBYFAMZFTBCZWIAMWWJKFZGJLHHBIMTDBAQCUWKNQLNV");
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
    msg.setTimeStamp(0.5361785071723091);
    msg.setSource(22967U);
    msg.setSourceEntity(30U);
    msg.setDestination(26486U);
    msg.setDestinationEntity(148U);
    msg.command = 5U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("WPCSDRXACYQSGRJBPPPQSRNRIOIAFMCZJBXHTSDLWMHCYQETBFZIRMSNEMNIAGMYTJEPIQLIWYVFHITOAKMTHOXSUUGGKLUCYNPHUEBOECMHBXWDJCFUIKODCLDYVXYDHFBRKRPMOGLFWLIRDUVGWKOMKMBBYZEZYHXKDNSEZVVVTNNWHVBPQQLOQXOSRZUJEQSWKWAQXNFDPGPUZKAOIZUJTHAAVTFNCGQLJE");
    tmp_msg_0.description.assign("ECMJZAYCMHEVIOPLNEXZCTJKIUKISDZKXPLRGXXOZWZCEHPRMTRBSHNRAAOKDRTAORPCYMPZFXVSBGZKFNWGXCQLIHYQEMPIVECYDBFODJTIYQEHGBQADDLLQJTPDLOBYBRTNMXOMWCSOQTCJMGWIJTVJCVWWZKBAGAWJNUSUNYEBJBROYWUKQRHZOAGGXVDUPAUFHSQMEDFUEUKTDAHSVFFIPINIGPVUQVFHQNVL");
    tmp_msg_0.vnamespace.assign("JEAZEIMOOYWAFKSHJCAZMCWVBYLDCGNMNFWVIYLJRFAJLXGINMETZEIEGKVDSNDNWHDMJTWLVFTDXFTTFLCQKUXC");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("NDFQWVYYUDRLDYYXMVGFYWIBJWWQKOONPRDMPQUAHIAMLPAZKKMAEQZIUAHG");
    tmp_tmp_msg_0_0.value.assign("KLSQHEBEUE");
    tmp_tmp_msg_0_0.type = 152U;
    tmp_tmp_msg_0_0.access = 229U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("RLTNLBAPUPSAUHQPVHFLEOWKXKLHFMJHGQTBENCJRWKGPFMSHKJIPSQNABEQPQCIPORDT");
    IMC::DesiredPath tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.path_ref = 2620472839U;
    tmp_tmp_msg_0_1.start_lat = 0.2237538439955844;
    tmp_tmp_msg_0_1.start_lon = 0.22361316776439844;
    tmp_tmp_msg_0_1.start_z = 0.959990829824449;
    tmp_tmp_msg_0_1.start_z_units = 41U;
    tmp_tmp_msg_0_1.end_lat = 0.9884438749443613;
    tmp_tmp_msg_0_1.end_lon = 0.6143727049397645;
    tmp_tmp_msg_0_1.end_z = 0.05194148499298079;
    tmp_tmp_msg_0_1.end_z_units = 232U;
    tmp_tmp_msg_0_1.speed = 0.898328087944132;
    tmp_tmp_msg_0_1.speed_units = 16U;
    tmp_tmp_msg_0_1.lradius = 0.2835600830528653;
    tmp_tmp_msg_0_1.flags = 210U;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_1);
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
    msg.setTimeStamp(0.13098861214713442);
    msg.setSource(27846U);
    msg.setSourceEntity(32U);
    msg.setDestination(61787U);
    msg.setDestinationEntity(249U);
    msg.command = 250U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("UBFGAOYHTKYYRUZVJIDHIXBVQCBCPYAHJCIWPDJCZMQEVWUDDFLOKGKSIAENWYBNDPAHRNZPCYLSWPDQUBIQHYYLBDGZVYCZLVOKLXUPOXERVUSPUWIGHGMNIKAQWKENSRTHMXBPRZJDVQLKMCJWNMORJEALWHCQVIFMBTJNFT");
    tmp_msg_0.description.assign("QIUPTTJCHYVOYHKCUKAERVHJATEINYLEYJEFLLMRJSGPAANSXIEWZYSEVXKQSPPBCFTSPZVNUJRAZURVUGKRLJHBOKRBQALLATUFLZHBDNECSWCHXWODKOZEPVQZTVDCBVDWKGZBDPUMNTSTOXFWLJRDKCAFYNMFFDDYQNSOIGKDGSOQJIJAEWGWIVQRBEWWTXKHOCMZAMTHMNFGGHHXIBLXBOUSZGCYJIRMNQ");
    tmp_msg_0.vnamespace.assign("EIFFHGAVWGEYSSULQDGEKKCINPBGTCCMJXVQZDESIYHFNNK");
    tmp_msg_0.start_man_id.assign("GJQJSLIWDUURASAYWYLXLKYUZYBBWNRTDKLV");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("VYTDXGHFKXJWXDHOAHQQOMECFECATCLUVQLNFKSQPSHVDYOBSTJMFBRARYXWJJJEMINXACZENMVHDULARZTLTGRKRANSRSVKM");
    IMC::FollowReference tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.control_src = 37471U;
    tmp_tmp_tmp_msg_0_0_0.control_ent = 22U;
    tmp_tmp_tmp_msg_0_0_0.timeout = 0.655487282213458;
    tmp_tmp_tmp_msg_0_0_0.loiter_radius = 0.159731548667447;
    tmp_tmp_tmp_msg_0_0_0.altitude_interval = 0.3904996862581417;
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::EntityActivationState tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.state = 166U;
    tmp_tmp_tmp_msg_0_0_1.error.assign("NXIULOFLZZWGICDABOJJRADFTUWGIPJWGDAWSHYSIQSYQACPEOKQPEJJMWOEEVYQFEVRLPTFOUPABHCZXJHZCKVRILBMCBUNXCMNOVACSMKOYWDYM");
    tmp_tmp_msg_0_0.end_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("JIJFVISLUOUHFEKEFTLKHATPLNUVLBQZALIONIWTDGXXMJNSX");
    tmp_tmp_msg_0_1.dest_man.assign("IFWGVOLHEDMRKSIKKVOLIQLTNWGTFOFHOSQEAJZYMGBKNRFAOXTGXICOHJIPJUFTTOEDNYKTYWLQNPJEWVCLHSEUAEABEBVTGRNZXXANKWGDCSJDMCPEVAGLKFIFHBMSLQXAMZAPDQJKYSSZPJWGRVDLRYLJYZRMICTRAONVKZEXHPGSHBCXCZQEWICLTWVJRVXQUGQY");
    tmp_tmp_msg_0_1.conditions.assign("TMABXJXYGROYNVBQWWFKPDRZSHIBTENNKVUZENWEMOZZQRIUMGDHRUUJZMV");
    IMC::TelemetryMsg tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.type = 29U;
    tmp_tmp_tmp_msg_0_1_0.req_id = 4106621091U;
    tmp_tmp_tmp_msg_0_1_0.ttl = 39064U;
    tmp_tmp_tmp_msg_0_1_0.code = 73U;
    tmp_tmp_tmp_msg_0_1_0.destination.assign("EULKSQXQVBFCMBETNAYRKICOOLQUIIHPAKFWRXRZWMAAENIARHFKKMAHNGNEBFNKLYYIFPZGUHOWZDCDVZGBGHVWIFVDOYALOBOLVZCFKFDOIYD");
    tmp_tmp_tmp_msg_0_1_0.source.assign("BYMXXPGHQCIMB");
    tmp_tmp_tmp_msg_0_1_0.acknowledge = 24U;
    tmp_tmp_tmp_msg_0_1_0.status = 53U;
    const signed char tmp_tmp_tmp_tmp_msg_0_1_0_0[] = {112, 122, 37, 41, -109, 112, -27, -3, 123, 27, -33, 107, -95, 5, -33, -128, 2, -5, -97, -21, 66, 24, 64, 95, 113, 23, 12, -83, -64, 12, -102, 6, -124, 49, 87, 12, 113, -127, 83, 102, -44, -56, -105, -96, -16, -82, 45, 99, -115, -113, -109, -118, 39, 23, 115, 123, 103, -105, 44, -75, -59, -42, -75, 94, -124, 84, -71, -23, -108, -94, 110, -14, 85, 24, -23, 83, 60, 37, -114, 93, -90, 116, -16, 64, -72, -65, -39, -97, 79, -22, -96, 36, 10, 50, -80, 81, -2, -6, 36, -30, 62, 50, 123, -125, 12, -10, -113, 12, -124, -6, 96, -63, -24, -66, -66, 61, 49, -47, -32, -17, -80, -12, -101, 3, 77, 43, 59, 10, -123, -101, -119, -56, -56, 1, -110, -21, -76, -50, -117, -60, 80, 88, 32, -80, -59, 94, -62, 5, -12, -53, 6, 122, 98, 16, -34, -69, 11, 9, -22, -67, 1, 19, -15, 53, -33, -61, 120, 45, -22, -125, -35, 113, -50, -77, 36, 116, 85, 6, 100, 37, 15, 121, -115, 30, -82, -119, 53, -93, -83, -109, -40, -9, 49, -54, -53, 118, 89, -45, 17, -16, -88, -118, -66, -10, -89, -109, -15, 112, -12, -125, 85, 58, -110, -30, -121};
    tmp_tmp_tmp_msg_0_1_0.data.assign(tmp_tmp_tmp_tmp_msg_0_1_0_0, tmp_tmp_tmp_tmp_msg_0_1_0_0 + sizeof(tmp_tmp_tmp_tmp_msg_0_1_0_0));
    tmp_tmp_msg_0_1.actions.push_back(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::NavigationUncertainty tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.x = 0.8586385749470186;
    tmp_tmp_msg_0_2.y = 0.936562198818601;
    tmp_tmp_msg_0_2.z = 0.1721061449745751;
    tmp_tmp_msg_0_2.phi = 0.9210460958673428;
    tmp_tmp_msg_0_2.theta = 0.15607731184877127;
    tmp_tmp_msg_0_2.psi = 0.2330651114024086;
    tmp_tmp_msg_0_2.p = 0.8089729886905586;
    tmp_tmp_msg_0_2.q = 0.013851442351253684;
    tmp_tmp_msg_0_2.r = 0.4558296751949583;
    tmp_tmp_msg_0_2.u = 0.14413389357408635;
    tmp_tmp_msg_0_2.v = 0.6235425522152022;
    tmp_tmp_msg_0_2.w = 0.5104920033432193;
    tmp_tmp_msg_0_2.bias_psi = 0.5829472330354202;
    tmp_tmp_msg_0_2.bias_r = 0.6064548878240119;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_2);
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
    msg.setTimeStamp(0.0033553517487028284);
    msg.setSource(61118U);
    msg.setSourceEntity(43U);
    msg.setDestination(21837U);
    msg.setDestinationEntity(127U);
    msg.command = 178U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("NXKHBBQCKZGCLOMPRAFNHAFXUPYUZGZEFCFBWRSTCDCTINRDNMAMASJEVIBVGEWYOAOYLDESORNRHZXVDUFXHJXSGKGRIEQPWQCJUR");
    tmp_msg_0.description.assign("FLWWKGCPBTRQNMEVMXSYLHAKLDGHQBRDHDACIUUIURLDTHNIECFVKRANXAZJSPMAMWGFWJYUXSMJGISFNVMUJDCZSDQXOIFWBFNRSEFZMLNKQQQMADMDIGNPWHESTSARWGJZAHUUCZEFLCIJKXOUKPVBZZYJLJYHOSBBJWTIHZLDFPQRPOEVLEVTHUZOJKTYGTCNXOKBP");
    tmp_msg_0.vnamespace.assign("AXSSWTFMUAQSPPSJQYLGPJQIRJOEFIYXEAVWOMYOH");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("JGRPTOCWBONGHDDHZBMDUKXQURSKENWUNYFHDFCYKHNFBWZJOVAHKNHVDTARCPEFEEBXHERQTYKWYMIACOMHAKKDMRQMBDNQIBJPIWELISLXPGOVLSZAICRXIVWGJOILINKPFZEKQWGAYALUETITMMOPC");
    tmp_tmp_msg_0_0.value.assign("XGPNSUEVOHGBYZMZYVRCPWTUWDZMNHPIMLATBATSFQPLVLZUOWSELELIQIEYABEGPIGXQLEKUCXSHSUBJGYRAFDPLSJFPDFZGTUJWGZPOVKWXQMUXSACKEIATIEJNWTWRCECFKJUEUNJTYCAMXOXKBMCZQKQBMQJIIRSGAKAMVZFVGYLNHZSBLFDFBOYMRKDDDVNWHOBHPXRGVRTNZIOYNFUBKCHRFC");
    tmp_tmp_msg_0_0.type = 185U;
    tmp_tmp_msg_0_0.access = 25U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("MTJZGYWTZLGYAKRJD");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("LWSBDJGDFXBNJEWACKHHSTMQCZWQHIOONZAXDVKFTVMSPKPANUKCBBOPJFJCGQDLZIRNBSLPZQLQSWBIEMRLVERRBSQRLUXWSZPAGBORMVEZCJZOM");
    IMC::Drop tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.timeout = 14362U;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.1852019845818117;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.047644878739427465;
    tmp_tmp_tmp_msg_0_1_0.z = 0.5583827706919944;
    tmp_tmp_tmp_msg_0_1_0.z_units = 34U;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.43326669269411255;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 55U;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("LZVUPFGRZWZCHFFIYODQMUFQEWBWQNKLTIKXSKYIYFAQRBIXDNLRRDHVLYTVLWPMGHZIPCROVCITXOTCEKFETOGETKKJLBFWYSMNQQHMPPSNBATCXUZTDNEJGGWUWCNNJPBKBKVMYWCFJRXPGASXSX");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::QueryPowerChannelState tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_msg_0_1.start_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::HomePosition tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.op = 37U;
    tmp_tmp_msg_0_2.lat = 0.03161942544440777;
    tmp_tmp_msg_0_2.lon = 0.11506136390855393;
    tmp_tmp_msg_0_2.height = 0.6024129185065376;
    tmp_tmp_msg_0_2.depth = 0.8937532093722463;
    tmp_tmp_msg_0_2.alt = 0.423323921961383;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_2);
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
    msg.setTimeStamp(0.9045837014598875);
    msg.setSource(29247U);
    msg.setSourceEntity(102U);
    msg.setDestination(49738U);
    msg.setDestinationEntity(81U);
    msg.state = 11U;
    msg.plan_id.assign("ZOGHAIKLCCSDRFHTCGFEAPNWPLGSUABIYOSZNBTLTETTYNUEYXQFVAHZTVUVFPKEYDNJJTCRTMKYNIRZSXBUCVYHHFDWLDJAMSHBU");
    msg.comm_level = 62U;

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
    msg.setTimeStamp(0.7628306994295772);
    msg.setSource(0U);
    msg.setSourceEntity(249U);
    msg.setDestination(52671U);
    msg.setDestinationEntity(16U);
    msg.state = 196U;
    msg.plan_id.assign("BEVYSCFWSVLXABDZECSMWQWQZNYNKWMZIQONVHTIRJEGRLTMOPXYDETBMQT");
    msg.comm_level = 5U;

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
    msg.setTimeStamp(0.058791567630536945);
    msg.setSource(46880U);
    msg.setSourceEntity(219U);
    msg.setDestination(35801U);
    msg.setDestinationEntity(235U);
    msg.state = 132U;
    msg.plan_id.assign("SXAWZJGFYVDJPVBNQCBCGOLNEVWU");
    msg.comm_level = 111U;

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
    msg.setTimeStamp(0.2073792757274895);
    msg.setSource(6825U);
    msg.setSourceEntity(15U);
    msg.setDestination(58166U);
    msg.setDestinationEntity(178U);
    msg.type = 197U;
    msg.op = 88U;
    msg.request_id = 1414U;
    msg.plan_id.assign("ECNHPVBEEZWYLJMWEJTRSAIVIJFLQGUPYQDSIUQSTCRWXMBNZGUBKMEIXSTNMCKZHWPTQCFMZOWLGORUJBGPZTDVBFHCSPBRH");
    IMC::FormationEvaluation tmp_msg_0;
    tmp_msg_0.type = 238U;
    tmp_msg_0.op = 117U;
    tmp_msg_0.err_mean = 0.2024024201423571;
    tmp_msg_0.dist_min_abs = 0.3738992338412984;
    tmp_msg_0.dist_min_mean = 0.25398152203442337;
    tmp_msg_0.roll_rate_mean = 0.9634477820524213;
    tmp_msg_0.time = 0.05116080067104167;
    IMC::FormationControlParams tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.action = 37U;
    tmp_tmp_msg_0_0.lon_gain = 0.5550751710690878;
    tmp_tmp_msg_0_0.lat_gain = 0.3398951485828665;
    tmp_tmp_msg_0_0.bond_thick = 0.560529341831048;
    tmp_tmp_msg_0_0.lead_gain = 0.2730963493193258;
    tmp_tmp_msg_0_0.deconfl_gain = 0.20764240618606822;
    tmp_tmp_msg_0_0.accel_switch_gain = 0.382409186548319;
    tmp_tmp_msg_0_0.safe_dist = 0.6826094976242314;
    tmp_tmp_msg_0_0.deconflict_offset = 0.5615818263659557;
    tmp_tmp_msg_0_0.accel_safe_margin = 0.8459150427337865;
    tmp_tmp_msg_0_0.accel_lim_x = 0.7781387530372031;
    tmp_msg_0.controlparams.set(tmp_tmp_msg_0_0);
    msg.arg.set(tmp_msg_0);
    msg.info.assign("SLLDLKVEPUHXNWOKAFGAKHUVKXKXWZBFYQNWHAJRGFWXIPPIQTWOZNFPZCARXJCERYISSBRYJNTVSNOXLRMHSLISUQKYTJCHCQIKQZSVCPFVJYBNZK");

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
    msg.setTimeStamp(0.5252972969906985);
    msg.setSource(50364U);
    msg.setSourceEntity(168U);
    msg.setDestination(63081U);
    msg.setDestinationEntity(221U);
    msg.type = 180U;
    msg.op = 244U;
    msg.request_id = 22669U;
    msg.plan_id.assign("KOAIXWYERBTQDVHZZGFWGDBJNESEUSSRXHBPRIBYKIYSCIPQYEWFNJFLLXRFWFVJXAWDCBSVZLHQWDQVPCUCKO");
    IMC::CacheControl tmp_msg_0;
    tmp_msg_0.op = 25U;
    tmp_msg_0.snapshot.assign("AMNYVXLMTCDCIZKLDHRCHWJHOLMCWSIAVPUKNZIUBTWKPXIZKPZWZXWDDHHXYAVFOMEERSOKDVVZSBQ");
    IMC::GetWorldCoordinates tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.tracking = 31U;
    tmp_tmp_msg_0_0.lat = 0.8116347481570625;
    tmp_tmp_msg_0_0.lon = 0.5297909719260503;
    tmp_tmp_msg_0_0.x = 0.11670008235273843;
    tmp_tmp_msg_0_0.y = 0.1939849239207453;
    tmp_tmp_msg_0_0.z = 0.5490884776565862;
    tmp_msg_0.message.set(tmp_tmp_msg_0_0);
    msg.arg.set(tmp_msg_0);
    msg.info.assign("NEWYNGCFBASLQOGXOUFSLLWUUOLTKSEGMFYUINVWAFJGINPULRTQVQZDBXHGQIIZJRPTHCLYCWIVWXGZPBXTBABZQHNRDUXXNIAGBTGBRXROJLGMFPPQYNYVERHJPKTTHCPHEDFSMNSCKSCWRWMFYZQVVEVFUJOBZMYLDKQJIAIECPREVENVUWTZCYZJMKOXBRFJUXCIADRS");

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
    msg.setTimeStamp(0.6476600857039596);
    msg.setSource(7208U);
    msg.setSourceEntity(211U);
    msg.setDestination(52491U);
    msg.setDestinationEntity(0U);
    msg.type = 216U;
    msg.op = 194U;
    msg.request_id = 20520U;
    msg.plan_id.assign("KJIOMXXKKORRTDMAOICICMWXXPSRJCNZWOYZNMPIDLNBDFGPDJBSSIRFLTVYVVPBPCNYOFEQURJMBLDXTSYLJYJBEJFYWIAPOGHJQGEKNMLSVBCGUAAGCEILKVWTFTDVTUQSLCKXKYXLENUZ");
    IMC::DynamicsSimParam tmp_msg_0;
    tmp_msg_0.op = 44U;
    tmp_msg_0.tas2acc_pgain = 0.5263022630263264;
    tmp_msg_0.bank2p_pgain = 0.8480352212219022;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("OAZWHVNEYOABIAKRHHBRGGUCNDXZNFAOSPUPVUYIZFFWLASHCUYRLLXSWLEYPPTCSYXMCTTESOVX");

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
    msg.setTimeStamp(0.37282949603800575);
    msg.setSource(58674U);
    msg.setSourceEntity(161U);
    msg.setDestination(51595U);
    msg.setDestinationEntity(126U);
    msg.plan_count = 44456U;
    msg.plan_size = 2627517350U;
    msg.change_time = 0.838486679198078;
    msg.change_sid = 39852U;
    msg.change_sname.assign("QQDTUONVKWYSBENNIWMCGMZUTONUAQHBOCSNWYHZYBJERHXARMRVTYHGXWIUWSKUOGJSQAMQHFFCLVECLSKAEKZIGZHKEGXFOEMSKEBBNMDDUZTNWDGDPWJVTVQBIUZBTXZNVTLLIBLCRISXCJRLERVPODMGIKWVHTPFOKCYQQEOJJLMOIFXJBQHBCJADEDXALRVJFPRFYMDFPWNTQPYPHMYSJYXKGLAPXTHICZKOGASFAGPVDAFNZIWZYUCR");
    const signed char tmp_msg_0[] = {-91, -52, -94, 54, -85, -99, -70, 106, -20, 20, -17, -62, -32, 120, 74, -68, -127, 116, -77, 71, 64, -45, 8, -106, -88, 63, 103, 59, -110, 15, -86, -73, -118, -75, -60, 125, -74, -98, 10, -97, -74, 109, -18, 37, 90, -78, 16, -78, -115, 74, -6, -91, -76, 75, 55, -46, -42, -8, 36, -70, 6, 36, -121, -52, 103, -123, -15, -10, 22, 78, -53, -61, -11, -24, 92, 54, -72, -54, 48, -91, 28, -28, 119, 73, 48, 78, -98, 15, -102, -4, 8, -67, -42, 5, 24, -55, 11, -58, 82, -47, 66, 38, -59, 55, 23, -10, 63, -38, 76, -80, -3, -77, 69, 124, -65, 6, -53, -24, -94, 50, -19, 93, -45, -36, -70, 44, 104, -107, -70, 71, -76, -59, 23, 76, -26, 116, -78, -27, 20, 49, -76, 118, 118, 80, -112, -95, 124, -81, 82, -22, 67, -55, -2, -76, 80, 30, 77, 108, 8, -14, 77, -45, -6, -57, -128, 1, -24, 84, -61, 31, 74, 70, 121, -94, -22, -123, 61, -93, -104, 53, 25, -51, -24, -104, 95};
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
    msg.setTimeStamp(0.261986838965081);
    msg.setSource(51849U);
    msg.setSourceEntity(11U);
    msg.setDestination(34292U);
    msg.setDestinationEntity(9U);
    msg.plan_count = 55272U;
    msg.plan_size = 401968460U;
    msg.change_time = 0.3837012673709217;
    msg.change_sid = 14606U;
    msg.change_sname.assign("ARWDFWXEVJVZWCXLDXRKMVFOKUDQLGDJPIUFZFUMTMIBKBYJGKPGAPASRRVHNNMKJUQIIBACEHBLRCKXCLEJSYDVZXPMXGCNGMCFUETGZFQENHLHWIDCRIRUADHGQPDYWMIKLYSASEDNFEB");
    const signed char tmp_msg_0[] = {3, -10, -70, -119, -21, 2, 15, 75, -50, -51, -96, 123, -103, 120, -26, 20, -100, -30, -66, -42, 65, -18, 52, 5, -28, 115, 43, 45, 83, -88, 98, 118, -61, -68, -118, -90, 110, 0, 17, -124, -99, -104, 90, 26, -85, -21, -30, -54, -8, -66, -61};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("AYJECFSFCQEESHRFXLNKMZOQLWKLTEUGQIDPWXQDFNTYBVIFASQKUCUJISODPHP");
    tmp_msg_1.plan_size = 62671U;
    tmp_msg_1.change_time = 0.12895969233441373;
    tmp_msg_1.change_sid = 3873U;
    tmp_msg_1.change_sname.assign("YMGLASAFONGGXNZUWCASDTOBDYIJWFVKEXFTLXXWGNPUABLFNPSVNRDUULSNCMWEKZVFPFGIDJLPZBBQLGWDYICHTVTGZICSKBDKNTMVSKKATQWSONTVJZEUMTDYI");
    const signed char tmp_tmp_msg_1_0[] = {-111, 94, 97, 103, 85, -22, -19, 4, -33, 100, 12, 85, 59, 27, -114, -47, -122, -45, 119, 85, 77, -97, 21, 34, -58, -116, -47, -35, -100, -119, -127, 9, 120, -126, 61, 86, 70, 94, 51, -16, 93, -102, 8, 1, -73, -63, 107, -44, 119, -121, -45, -122, -98, 57, -51, 55, -46, -111, -113, 19, -31, -48, 33, -32, -49, -74, -9, -9, 102, -20, -48, -75, 15, 64, -56, 98, 100, 35, -40, 27, 85, -95, -25, -102, -31, -102, -79, -116, -14, -13, 99, 13, -45, 71, 74, 88, 124, -77, -72, -95, 11, -60, -46, -32, 60, -83, -106, -58, -70, -38, -72, -47, 109, 83, -40, 50, -88, 2, -111, -11, 16, -107, 124, 4, 26, 55, -115, -114, -41, 38, -79, 90, -94, 61, 40, 8, 3, 18, 63, -45, 20};
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
    msg.setTimeStamp(0.08771971272066159);
    msg.setSource(22461U);
    msg.setSourceEntity(94U);
    msg.setDestination(40738U);
    msg.setDestinationEntity(55U);
    msg.plan_count = 56180U;
    msg.plan_size = 3360421934U;
    msg.change_time = 0.7061824170302231;
    msg.change_sid = 9633U;
    msg.change_sname.assign("NRJCLNYXWCGUCPLYRDTTTFCAXYENRRJBIIDEVXSALWNKJMBAULEXVCFFILDXERHODLQJAGMTDRLHUFQDZRKLFGXXHGFIHNBSNQMWSOWZZIEERUEVKKGUPRWOFPQKZNFDZHSOCQIZJOJSYZEVSWGTQVKWZGTBRCBYYIOVJZ");
    const signed char tmp_msg_0[] = {75, -75, -71, 2, -10, 36, 34, -39, 98, -79, -73, -5, 121, -8, 37, 74, 101, 13, 99, -112, 122, 63, 14, -70, -99, -32, -21, -52, -54, 68, -25, 44, -128, 1, 2, -116, 103, 93, -85, 25, -57, 81, -125, 97, -128, -17, -35, 32, 26, -12, 34, -12, -94, 123, 58, 93, -55, 11, 87, 24, 6, 12, -71, 102, 88, 120, -117, -14, -60, -127, -124, -11, -1, -48, -128, -32, 13, -53, -35, 115, -127, 3, -111, -86, -99, -121, -65, 101, -102, -68, -87, 110, -128, -7, -15, -6, 32, -54, -16, -67, 99, -43, 40, -13, 66, 80, -35, 56, -118, -100, 33, 21, 97, -115, -51, 21, 55, -61, -84, 86, 98, -98, -48, -94, 93, -82, 9, -107, -83, -41, -120, -5, 50, 19, 14, 1, -102, 94, -74, 53, -88, -49, -76, -97, -54, -92, -96, 104, 30, -22, -25, -35, -68, -82, -85, -48, -109, 59, -126, -117, 9, -36, 66, 109, 126, -88, -68, -68, 3, 19, 101, 28, 15, -125, 123, -45, 55, -77, 17, 59, -119, 122, 15, -32, 10, 100, 73, -97, 31, 18, 116, 63, -10, 52, -78, 77, -4, 6, 54, 15, 82, 88, -117, 47, -37, 92, -1, 56, 106, -2, -75, -25, -114, -67, 6, -79, -39, 68, 54, -13, 119, 34, 3, 42, 101, 93, -18, -13, -1, 119, -13, -65, 40, -55, -16, 85, -69, 63, -27, 25, 22, -95, 111, -112, 125, -21, -72};
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
    msg.setTimeStamp(0.8273258705089552);
    msg.setSource(24043U);
    msg.setSourceEntity(36U);
    msg.setDestination(64670U);
    msg.setDestinationEntity(148U);
    msg.plan_id.assign("EFIOVJNFWZTYGXMEMXALHHZKBXFBOFYLZWQNBAEIXUENVYKTRFAFHETRZTPSNLSPHJVAWLMRZEAMXVTQCDMIJJKNHEKJBZZCARJMAZYTEWGEUVIOIGSVHOQRYYCALVHCKXNOKXDKDDQGKSBPJWUZKWRDXLLFBKCNXIPJPIJBUSPLMXAQNSYUZPHOOFVLMPTGCPYFCPQUTCMDQMRGJ");
    msg.plan_size = 441U;
    msg.change_time = 0.4445776687349001;
    msg.change_sid = 38587U;
    msg.change_sname.assign("LLQWPTKXROTULAFWPBUVNHPMXLXEUAXWJONWEOLHGKFNHLIPPUSTUMOTBDUDIEGNWMUYMUVCFYUREPDJVOSIZCSFFNTEZKVOTWMOCHYVNWJAVFHJKESN");
    const signed char tmp_msg_0[] = {77, 43, 84, 6, 68, -55, -93, -110, -61, -109, -24, 121, -56, 81, -21, -26, 21, 64, 14, 121, -41, 1, -97, -52, 21, 44, -1, 13, 7, -74, -15, 17, -53, -46, 34, -63, 30, 84, 50, 7, 12, -25, 51, -114, -10, 41, 19, 126, 80, -6, -117, -27, -55, 90, 62, 100, 40, -18, 90, -65, 38, -127, -20, -79, 111, 3, -51, -83, -65, 117, 2, 20, 71, -109, 6, 102, 36, -32, -81, -94, 95, -83, 41, -69};
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
    msg.setTimeStamp(0.22070889728779775);
    msg.setSource(20101U);
    msg.setSourceEntity(216U);
    msg.setDestination(54468U);
    msg.setDestinationEntity(82U);
    msg.plan_id.assign("YNVTJULGKUHBPVPZKSMCQGOXDIZJKZHPJCDGASZRNRFLUGLWLVRJCRMXFPVIYOBPHQQIETORCJUSAKOVFIXGZRWNFYULAQWAIUAQBAZSYRWYHXSRNXMMGHBXZCOLFICFKECSDTNHLGXBFMPMBMRXMGKJQHPODKJVFEJFXLARKDOQQNWGCKVEIYSBCQVNWMZPOLHPITOSYDASUDDVULEGYNTBJDBZTISEPOAWWYXEWUATETNJKCZBFQM");
    msg.plan_size = 50896U;
    msg.change_time = 0.36186866591857203;
    msg.change_sid = 6005U;
    msg.change_sname.assign("FXJCBMFBAKUFVZWQBLYTGLQTDTIKNSJRZDQCVKFGWROWNHQMFOCVOYXPKZHXA");
    const signed char tmp_msg_0[] = {-45, 30, 54, 7, 104, -75, 56, 33, -31, 113, 95, 106, 48, -83, 33, 15, -100, -9, -99, 33, -62, 85, 114, -119, 85, -90, 47, -72, 42, 51, -49, 122, -66, 14, 25, -62, 23, 89, -73, -67, -23, -64, -82, 22, -65, -13, 35, -122, 47, -121, -87, 91, 30, -3, -114, 24, -40, -48, 30, -67, -117, -85, 66, -39, 47, 47, -22, -4, -75, -34, 91, -47, 84, -100, -58, -15, 96, 89, 35, 69, -36, -111, 93, -108, 13, -50, 38, -3, -116, -41, 120, 71, -68, -89, -118, 8, -30, -98, -54, 38, 14, -118, 37, 109, -44, -32, -19, -89, -26, 39, 67, 63, -70, 1, 89, 110, 70, -94, 68, -73, 124, -1, -89, -41, 59, -66, 119, 110, -3, -79, 11, -22, 124, -75, -115, -79, -82, 72, -34, -11, 42, 77, 44, 76, -82, -53, -7};
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
    msg.setTimeStamp(0.26665476603477567);
    msg.setSource(56862U);
    msg.setSourceEntity(127U);
    msg.setDestination(37423U);
    msg.setDestinationEntity(47U);
    msg.plan_id.assign("WEHLNPDDIOXCZSFCBBXMKUEGVYLIAQSVWJGVDNXJJBYWIAJIMKRQXYULTOHGOTCANJJPYIPDIUOSUZVRDUMZKVULGFRRYASINQEAN");
    msg.plan_size = 22929U;
    msg.change_time = 0.5120734367629646;
    msg.change_sid = 60440U;
    msg.change_sname.assign("GFBEQYEHCIQPBKLRPGBVLPQIGVXZYUTWNJKKSEEUYEDCZRTBOTVJXPD");
    const signed char tmp_msg_0[] = {89, 98, -46, 5, -61, 117, -47, -77, -115, -82, -94, -33, 77, -121, 126, 87, -98, 93, -5, 66, -82, 84, -106, 33, 50, -125, -113, 110, -3, 12, 108, 37, -1, -66, 104, -74, -120, 33, -39, -72, 8, -29, 9, -11, 57, 97, 48, -108, 121, -102, -18, 56, -120, -111, 58, 92, 90, 33, -77, -127, -118, 78, 13, 74, -74, -36, -121};
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
    msg.setTimeStamp(0.07844711708456842);
    msg.setSource(46317U);
    msg.setSourceEntity(61U);
    msg.setDestination(4737U);
    msg.setDestinationEntity(125U);
    msg.type = 160U;
    msg.op = 107U;
    msg.request_id = 8913U;
    msg.plan_id.assign("YCQREQXXEDOZWONZUBNWHZODVGRKLJKZFJNLIDPJPXZPDKTSSAMABSXMHESHEIHZGUFPEPPLXABVIGNOAMVETDDEIQYSYMJQOVKFYEGZFUNCXMASTTCZFIVRNLCGSDHWAOJYKYJOVJSWBTUWRUSCDHAIJWFNF");
    msg.flags = 38628U;
    IMC::GpsNavData tmp_msg_0;
    tmp_msg_0.itow = 2075319700U;
    tmp_msg_0.lat = 0.8396292977972611;
    tmp_msg_0.lon = 0.86998842146412;
    tmp_msg_0.height_ell = 0.04834757175690452;
    tmp_msg_0.height_sea = 0.5760544964233317;
    tmp_msg_0.hacc = 0.8750452190516008;
    tmp_msg_0.vacc = 0.41060000029616694;
    tmp_msg_0.vel_n = 0.3203176522702669;
    tmp_msg_0.vel_e = 0.5608137764460931;
    tmp_msg_0.vel_d = 0.23963376213480758;
    tmp_msg_0.speed = 0.8521723167390058;
    tmp_msg_0.gspeed = 0.38751411864291674;
    tmp_msg_0.heading = 0.917730582346485;
    tmp_msg_0.sacc = 0.4135942806387969;
    tmp_msg_0.cacc = 0.03229522394308648;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("CVYFRUQWPSDZOGBGYXFPXBGEHTQVHSLDVUWTOESCYOEHDXNVVMLKULULJVTJJXNZCDERXQFPDSTWSXWWNQQECADIJJTGWMNNHBIGYXZMYSMODFMQFRFBIOZRKRNZAMLNNLAPXQSBBZQTNHIGOKXMS");

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
    msg.setTimeStamp(0.8630958268565874);
    msg.setSource(56240U);
    msg.setSourceEntity(25U);
    msg.setDestination(28848U);
    msg.setDestinationEntity(157U);
    msg.type = 94U;
    msg.op = 155U;
    msg.request_id = 17867U;
    msg.plan_id.assign("LQCFBOPFMSRXJNQOXAHVGAWJRWYCGKCYPEZIMUXPDIDEZHFASJYBUQAACIMZRHTSWMKCNEMZBATWOQPSFGLVAFVJBTLLCLWIEAKPPOBLRJRYGXGDSAERNZXZPMRUFQICXHBAIXBTHJYSSCHNNJSWGMLDZUUFNCXTKEWVUTGFXEXDKBLGDJJNEZHDDHZJVOTVWYOPFITVFEQWRNGOYQMKNSWVKRYKSYMOPVQHHKIPQOUEUQULVTTB");
    msg.flags = 41128U;
    IMC::RemoteState tmp_msg_0;
    tmp_msg_0.lat = 0.14299274332951284;
    tmp_msg_0.lon = 0.9598187103810066;
    tmp_msg_0.depth = 213U;
    tmp_msg_0.speed = 0.6561870615752373;
    tmp_msg_0.psi = 0.24461416065595531;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("ECTXSLVHACJXOTKF");

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
    msg.setTimeStamp(0.8086590702010594);
    msg.setSource(57865U);
    msg.setSourceEntity(145U);
    msg.setDestination(27194U);
    msg.setDestinationEntity(114U);
    msg.type = 91U;
    msg.op = 244U;
    msg.request_id = 42240U;
    msg.plan_id.assign("LSBTZXYHVZXIMFODFTVIASHIABZHHHJQAJGKKGUYWBYPSECYPDXOZYFHKPRNSXYEBNEGTLQVNKDUFLLDGFCRDEYDSMQXDJZMWCKPCNWVQKMOKDBVAOTWSZQTGBIGNCPAFPFCMORIEJCRIUXHZQTFEUNLJMOWPTRJYKIMAIGOBYPLNSHWAFWTPCNQMHTGXOUENVESIKAIVFYGUBEPZMQRUTJC");
    msg.flags = 58290U;
    IMC::RemoteState tmp_msg_0;
    tmp_msg_0.lat = 0.13505583446751857;
    tmp_msg_0.lon = 0.5565625565978047;
    tmp_msg_0.depth = 218U;
    tmp_msg_0.speed = 0.890649198333144;
    tmp_msg_0.psi = 0.7531504957852002;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("UQGUPEXCEZEQHXGLSQUSICDRUODPWZMUDBXPIRHTGIOITHIVBXQFTKDFJCDWUVBMCYNBVCLZFFNACPELCAJNTHNZRJTB");

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
    msg.setTimeStamp(0.5945027968955305);
    msg.setSource(31311U);
    msg.setSourceEntity(74U);
    msg.setDestination(6313U);
    msg.setDestinationEntity(110U);
    msg.state = 89U;
    msg.plan_id.assign("YWLYGKVIVNBKALXJGURGOLLNHGETIXUXCDOQXQRZCPTWLGYTWRIBKMFCYPMFNFQYVRFFQVPGDZARWQURGWHEPBZENLABSLOHMPCESXAYKBRZHQDFVDDNUCTWPBUDDGTPJRZGTDXIALJJVTNFUMMBFUSXJBKLOWZCSTCFHMHSJASAFPPOZILOYMAADW");
    msg.plan_eta = 2013476189;
    msg.plan_progress = 0.4563365915554841;
    msg.man_id.assign("FWEKOKJSXZMQFDESWJJFPQXDLRYPXGPLRGMUNGZXJXMROTVOYQTDUZHBIUEVDMOIBIYTDXBAEIZWDBYQKQHJJNGWXTOJKOZQEBVAJHQBNGTAYBWWYDCNASHVREPITWTAKIRKMZZEHPLSQMCULUJAPWLPRLNTIUVNPEMCIHQMWUSSSKCBSACCAKRVINVXFLFFSTCFYMHOREOPUODRNZFNYMNSYUHDCGUXLOXGBGVCEV");
    msg.man_type = 40855U;
    msg.man_eta = -373602161;
    msg.last_outcome = 239U;

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
    msg.setTimeStamp(0.1806885836841131);
    msg.setSource(1984U);
    msg.setSourceEntity(239U);
    msg.setDestination(55899U);
    msg.setDestinationEntity(222U);
    msg.state = 251U;
    msg.plan_id.assign("ENBGHGFDVWHHGZSPATDXPFSKNOUDOYMJPYMJQFBPSIJUPWTZMFZILQMUNADRWCKOKUQTUUICBTCVRNXZLBDTVMPIWJAFQGSBEJAVGJOXNKDRUHDBCHBOTZHYXOKPCXFHEKZCKGNLOVEOWQFKLGAQCACYSVWHXIWZRRGUEZMNDMARTLVNLFEXDOSSYJXJBRYYKMRAARIBPCQHEHFIIV");
    msg.plan_eta = 824448285;
    msg.plan_progress = 0.23700916942855865;
    msg.man_id.assign("XYSKFIYBSIAPUBIHMWRDTIVSBTRXXXNCNGQQSCOHXFHMSOGOVNMKDAFTCMJNNAPAUPYGKDTFEVSABHESPUKLMQDNBRODWUNEDCVWZCYTNFQGHILOXHLGHZBFABHOZAJLIUSFXYTQRTSGQVGSLLYHOQGLIFLEWARVKTOYJKIUDEVJWMBIYJVXKDPJPWPJPDGRTOUJCIEZTRZACZKWDARGQJFROQCCBUVCWJBHEUPELZZZQNLMMXENPYEZMK");
    msg.man_type = 36398U;
    msg.man_eta = 330487589;
    msg.last_outcome = 206U;

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
    msg.setTimeStamp(0.8261374096190875);
    msg.setSource(57024U);
    msg.setSourceEntity(17U);
    msg.setDestination(46951U);
    msg.setDestinationEntity(98U);
    msg.state = 149U;
    msg.plan_id.assign("IJMPVCABPINWJEKXOSHSHCYFKZSWFLGSZVTXYSFGQJQNHODZOYRAXOGDXNNAGCFQLFWZEFSIXHAPDPUOJEPVQCXGFGFBWXYRURQJLLTKHSMHLVIPQTDIANKKAIFUPUGWZMECZXBWPSY");
    msg.plan_eta = -1503188242;
    msg.plan_progress = 0.9549003094621483;
    msg.man_id.assign("ZWIHEVNBRQLMZCAYOKSKYTUHBMKBRHJQHHJSITOYLCPOGXQHILLGQNPSKZXDWVANBDVEFNRKVTHOFDSCPRFYDGZSEUFGEORIMZWUHKKRSEOYDUVSGILCWJQXWJYOWVEOCZIEZMG");
    msg.man_type = 59335U;
    msg.man_eta = -1121735037;
    msg.last_outcome = 101U;

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
    msg.setTimeStamp(0.8298610853683813);
    msg.setSource(1937U);
    msg.setSourceEntity(157U);
    msg.setDestination(859U);
    msg.setDestinationEntity(7U);
    msg.name.assign("BBTOQEWWYODFPQMCVHGIYVSFXOGFOJZRGWOIPXRPHHZWFVVDGCBDBHBEOIEWAHAKCCTERSDJETXXMMVFWSGEMRVCUFFXTISHLHV");
    msg.value.assign("EYLYVRYHAWVULPUKKDMCLNNBRCKATYKMQGZJULIYUADOQSEVAUHBHSYQB");
    msg.type = 29U;
    msg.access = 216U;

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
    msg.setTimeStamp(0.9844177020025481);
    msg.setSource(5251U);
    msg.setSourceEntity(195U);
    msg.setDestination(57861U);
    msg.setDestinationEntity(32U);
    msg.name.assign("FIXTLFKOFXIEMSCQKTTONHWHRHZJEBQAYIQCLXRHEGJADSGRAZDDXIYBBOIOCTKVNBGEFHCQWDWKKTXWS");
    msg.value.assign("AMEZHPQFDRMJVRBBRIMCRFJGXCBSNJEMRFOIPLUOVVXTKXPCWNQHFSTKYVFKMBKYFMQMODKSPAQJNKLENRHUOGC");
    msg.type = 151U;
    msg.access = 81U;

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
    msg.setTimeStamp(0.6788018070416805);
    msg.setSource(5955U);
    msg.setSourceEntity(190U);
    msg.setDestination(12296U);
    msg.setDestinationEntity(22U);
    msg.name.assign("MWGOOCARWWMOUBZTXXRKYGJTUMFVKTIDFFVQSLSPUXRJCPZCCKMVQDBHDVLLIAKNFRCQZZUVUHVZEZBIPJDGTOQCWFOJIEWDFVDBENKTHAUEREBHKJVIQNLJAESEOKPESYBXXTLPWWFDRLSAZZZJQIFQDRGNTIFYERAUCGLMFPOXYXRYYXNXCAPQGB");
    msg.value.assign("FOEWCOGLWAALWDMNRXKQHCQHRBOROHERFYNPYDUNDHTOQGOXOCHIELDMFMRIJZAAABQIIBMB");
    msg.type = 224U;
    msg.access = 214U;

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
    msg.setTimeStamp(0.1664162640035719);
    msg.setSource(569U);
    msg.setSourceEntity(197U);
    msg.setDestination(35671U);
    msg.setDestinationEntity(251U);
    msg.cmd = 41U;
    msg.op = 49U;
    msg.plan_id.assign("PQYWQBKGRZNCZDEMRREMRGDOJFENWGBPKFIMLMDCLCHMAFYGAMTIXRGAXFWHHPZBSPTYVLVOGCUVVIBYSTKRQOFZFAYJBQIPDKAMILAZYFDVTBXOUJSUDMZJCQERACIXQWOLOPHIJDXTLVEOAEQUVCCUKLSKSWKNZRSWEWFBSINHVLBNHCDHNTUXZLVXPKACPZQFGITJHWXBJEIQUJZARMPTUURJGNOWENOJDVDTSXNYGYOFYSH");
    msg.params.assign("SVYORPNZEHBWDXFWVFOXZZFMCZEZGCKDNNLZEGODFOLTPIITGZMXLPWGNWJEZPFRVIRVSACJHAFRQQBNHETZSUSKQTLNKKRBXFSGJQTYIIDGYBXOCOTCOQWYORLXDMAQWDSFVAPAGKWBANUVQNUCGVKJVKKYHMHPUBJUBXFYBTLYODXJPMITNSYNEMQYEVIQUWUXXUKDLGSEJCPGHBIPLJZWIUUKMCMATYOLJLHMTEARDSHHVCDRJRPC");

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
    msg.setTimeStamp(0.46937213797669664);
    msg.setSource(48791U);
    msg.setSourceEntity(126U);
    msg.setDestination(65020U);
    msg.setDestinationEntity(46U);
    msg.cmd = 47U;
    msg.op = 26U;
    msg.plan_id.assign("OFCMKTSGIFZLTEGTASOTRMFVNAYSRNFANUVVWHLEDFWTUVBTJAZTIOMUEMNRJONYCAAXDQLQPNJEFGFLRCNSHICHNG");
    msg.params.assign("LAMWASGOLOCYGXEPCYHYVMEZGGXEUUTMHNNOTGZUNP");

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
    msg.setTimeStamp(0.057516347542906576);
    msg.setSource(18877U);
    msg.setSourceEntity(30U);
    msg.setDestination(53098U);
    msg.setDestinationEntity(102U);
    msg.cmd = 69U;
    msg.op = 63U;
    msg.plan_id.assign("KQEUQDULLOQWEZJZBCKBDAZTOMMBHTSATDJPVRZOMFSBXYJEXEQYQQXUWLKLCCBAXRJYDNVFPZECHMBMFHSXACIVGWTEOQNCOACSBUYRWLDSPDGNMIWWHKXTUPHNFIKYWLJIWSBCREIETKRKQHSNMAJDIXIEIRKHOLAYFAGUGNZDFJLKGVWUSGVVIWDGOYCIXPP");
    msg.params.assign("KPWPIFSJEMFNVTWGLRDNALSEJHAWMNBTQZHFFBQCYBZXJVTYEPHZFUCWYKPMDWKZYIMDNHAWPNNDRRCZDQBCHXOWGUDIUQVMJNZLJILNGIBJUIJVOAAURKBTCYCIYOBXQCVAWPVZXSLTLTOKMGBSJVXQRHYGNTAXEHGQYOOETPDSRWQVFDLZGS");

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
    msg.setTimeStamp(0.530630141733051);
    msg.setSource(64871U);
    msg.setSourceEntity(234U);
    msg.setDestination(57808U);
    msg.setDestinationEntity(89U);
    msg.group_name.assign("XLRJQYCCIDCGGIHUUTLFOGCHNBTZQHGRXWZQHETLJCRIGXFDAOLZYXJFOPAOVLLTUGUASQDRXEBG");
    msg.op = 239U;
    msg.lat = 0.5309743502941862;
    msg.lon = 0.37389514695612325;
    msg.height = 0.08224252496567486;
    msg.x = 0.636817261278958;
    msg.y = 0.4006619101369038;
    msg.z = 0.8955471761921758;
    msg.phi = 0.8533934729320692;
    msg.theta = 0.8232422810367855;
    msg.psi = 0.6759283893299595;
    msg.vx = 0.07595706177794137;
    msg.vy = 0.028513090258637686;
    msg.vz = 0.3319277546320024;
    msg.p = 0.73829289167334;
    msg.q = 0.20838758794965762;
    msg.r = 0.220134904888458;
    msg.svx = 0.5516758717403704;
    msg.svy = 0.8395058444646277;
    msg.svz = 0.04452525588306955;

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
    msg.setTimeStamp(0.22916668279587393);
    msg.setSource(32938U);
    msg.setSourceEntity(130U);
    msg.setDestination(5624U);
    msg.setDestinationEntity(36U);
    msg.group_name.assign("AYGFCCFSPNKORGVQVCAPIEDOPXTBXJJRMCSOMKVFZRJCBDITJGPUXSMSTSTYQZSECANXKFJCHLDXFAYNRUHLVNVDIUIPZZJMGUTGRFXPZSNAKJBMTPDAZGLLZOKHOWOHCJJXEWEGSZUEZBIZEAHWOHUIXNDNKJOKANLWSCIOVGROEWQQKMHVYEQRYRLNVHYBPRLQ");
    msg.op = 52U;
    msg.lat = 0.05559618483475315;
    msg.lon = 0.8549071789200927;
    msg.height = 0.9096315989831008;
    msg.x = 0.7012626333094331;
    msg.y = 0.2665735706828455;
    msg.z = 0.3830929415192348;
    msg.phi = 0.7079086267593037;
    msg.theta = 0.05560368823235662;
    msg.psi = 0.3704143683947547;
    msg.vx = 0.8881298240648228;
    msg.vy = 0.4191372649325963;
    msg.vz = 0.8409623556804654;
    msg.p = 0.5962579829460152;
    msg.q = 0.8205151233550996;
    msg.r = 0.11443865407003984;
    msg.svx = 0.030060498957761528;
    msg.svy = 0.8956227931269373;
    msg.svz = 0.9166115334088316;

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
    msg.setTimeStamp(0.26486503173691045);
    msg.setSource(58505U);
    msg.setSourceEntity(42U);
    msg.setDestination(19588U);
    msg.setDestinationEntity(112U);
    msg.group_name.assign("QOQWHSXMHABTFTGRFXXUQOBGFAQPTCHQKSVHRNULBJGYVEIBKUISHEV");
    msg.op = 114U;
    msg.lat = 0.5102507439430584;
    msg.lon = 0.20924875064675774;
    msg.height = 0.31378129956416667;
    msg.x = 0.9812089913493784;
    msg.y = 0.7019588040747526;
    msg.z = 0.3472731726011812;
    msg.phi = 0.54394302999452;
    msg.theta = 0.03011433229825522;
    msg.psi = 0.7269910617491332;
    msg.vx = 0.7366672672417087;
    msg.vy = 0.8997250788342069;
    msg.vz = 0.4813641099604451;
    msg.p = 0.020723452213309623;
    msg.q = 0.7759193084056859;
    msg.r = 0.1900783691741501;
    msg.svx = 0.6106896088661473;
    msg.svy = 0.8880519518163872;
    msg.svz = 0.32557386058066995;

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
    msg.setTimeStamp(0.578551727272987);
    msg.setSource(15771U);
    msg.setSourceEntity(181U);
    msg.setDestination(57680U);
    msg.setDestinationEntity(87U);
    msg.plan_id.assign("AJUPSFNQOQQJFVSUDLJDBOEZIFBCLUTEITVYYBYALQKJXVPIZWMNHTJHNGQHLKHNFPRMBUZI");
    msg.type = 198U;
    msg.properties = 209U;
    msg.durations.assign("JGJXEYDCEDMKIBCLUECVYNTMWFAUJWFMUUGPBZDQLFWYDHKRFVAFFMSCFINNKMTJXVGNTLJAUXBLKBUHSVSCILZFEELKVJIWNHEFIRSAASXRBXMDPTTFWJAPDQHXLKOYRWGRINQWBXOKOYTPHULZHTGMAZRBVUVNWROBOQXYNOUJVOSZIUMGYIDTCGEJPIQHYGHSPMCOEHYIGRNRAQLZPSEQYOACEKGQDQTVZPWRZPAZS");
    msg.distances.assign("YGADQFZDINZEINFSODWBWOPVOTEPNFFRQBSRDQUNFOTEHVALBRQUZEXPRDXIKLLUJGXYXOABPPMIUUHKGZMUQMEQTWABACNECFSSTLGLHUXWMKJKKCVSXACGOHSNQDTKYGLRRYDNHIXFHKOPPNEHFDVCZZQACRSJKHGLYETJLCWYBIU");
    msg.actions.assign("QNQTQPBIIHRYLZAEQSUUGPRADXEXLJWJAXCKKUGDGFWEGHBFLKZWUHRUBYFSTZKONVRCJIDIR");
    msg.fuel.assign("QRJAVDZIILVWTHKBUTCRIXAOHMZOLEBBDMCZYEWMHKRIPUCDEXTCPFGMLVXUPJGWXKULQUFTTAVWNPPHLBEPXAFLKUKSXTNLYJUYNYLHSYGSWXSFBHGTDNNPRECGTHNJOPMDBCLWBTZQQINRZGAGAIZAU");

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
    msg.setTimeStamp(0.28280180617253703);
    msg.setSource(13869U);
    msg.setSourceEntity(176U);
    msg.setDestination(31564U);
    msg.setDestinationEntity(110U);
    msg.plan_id.assign("ZGPVHLMBCMUZITDBHKSNKBEUPTDAEVNZLMCVYGMKWTHKLUBWJTOJYEYFQGRURUGWJWDVQERSDXBCZHFRQDOSUWXNLYQSYKCGKVNZIEBXHBUVMXNKTSLEQGEFVPVXGCZQXACFAMARLJPUJZHPPMYJJHCPWAFRIQJYLGVONHQFVOTXNWRBXNEBIGHSDIOOIKWUOIFGIRPMMLCOYRNTTZKXPLFXCLSTRAWQDITCAFOOFSPE");
    msg.type = 136U;
    msg.properties = 189U;
    msg.durations.assign("PWFOUGJLVQTJOEIOITZFATEAKBWXWIXNMFNDOGHYRCFFQJWXYVGQSYZQLREAXYVPMDCBAWLIVVWYMN");
    msg.distances.assign("HXZDMIVXGTANDBHIXAFOEBEQXXIZHQKMHOXAVDPGMMNOFVSJCMWWVVJLJXPGSBFRHDUASROUIQSDMVCMKEYINCRU");
    msg.actions.assign("DHQZZFKXZHYOBHUGIGJAWKNFRNVPOOCVJYCOPWFJLZD");
    msg.fuel.assign("VXTTTWDRGOJKSMLHJRMRVJRJIIJWNQCXBPLXFCEYCODADOJRCJPKLYHNPUQBZUOHFSGDRKPPNBDGKMVFOALALXACJZFTHPKRCSFCMNIZTQWULYSYJKERMZDYNQQVWIBBSWBNIEGLWVLMFYNQPOTIPUUEGKVUEDAGDQOVQHBKXXEHAIAMAELCNNMWYPKHFEWTBRCIZVTSTGXVISZOOHQGYUCXVEQZRFIUKFTZ");

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
    msg.setTimeStamp(0.18312504927870743);
    msg.setSource(63466U);
    msg.setSourceEntity(143U);
    msg.setDestination(22871U);
    msg.setDestinationEntity(4U);
    msg.plan_id.assign("SAVJHEYELBDOOCFBCUIZNLQGEMXTVPQPDZCIYKGUFXQXXNVMPZWOVIYLJCKPSCFMONKMUULQSENWSAPFDSRRGRYIKZBSZXOXWPRJYB");
    msg.type = 78U;
    msg.properties = 111U;
    msg.durations.assign("JBYJBICTVDVXWNLOCUSMPTYCVYPLGWYVUFKWAZEPFNITYQHISGFNFVPRSONAUEGQHXLPBKTHZOSROXLMUMMTRQALVRBYVMTP");
    msg.distances.assign("HLYFJLKHDWFHSEJFEBUYWMIJCDGXCGEPWILJGNTXQFRWGEIBDQYCBAUDREIWEJUDISSVDUTOAPGMGLUNTPAZ");
    msg.actions.assign("GLADJPWUBVYLTKIAVECBIXVCHKKNKJDAUAITQXOMGUEXQYVMKTTTNYQUCGXZFQRBXWPOON");
    msg.fuel.assign("MGEJPUPKBSSFBRUCTFCHRUKNGHMXADOVWRMUBJSDLIFCQMXVMOSAKNZTWBWZAUXOMGPVJYRWZKSPFD");

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
    msg.setTimeStamp(0.025578030257917272);
    msg.setSource(63961U);
    msg.setSourceEntity(118U);
    msg.setDestination(50518U);
    msg.setDestinationEntity(235U);
    msg.lat = 0.984036295664055;
    msg.lon = 0.24989590943948958;
    msg.depth = 0.2030764482653613;
    msg.roll = 0.9294645970988941;
    msg.pitch = 0.9983635777388989;
    msg.yaw = 0.3592241948565512;
    msg.rcp_time = 0.7372845862307935;
    msg.sid.assign("MQWRDPGCSWZRDHAFCBAQONKYZWVKOQSPFLRDYIEYWQYMSBZQXRQCFXFQUUHVBVBEDSWCJTKTAJLIFPOWKZEMMNIVVVYPJZJOWMDNXLRIOVTU");
    msg.s_type = 120U;

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
    msg.setTimeStamp(0.9689686331827648);
    msg.setSource(48130U);
    msg.setSourceEntity(12U);
    msg.setDestination(23501U);
    msg.setDestinationEntity(32U);
    msg.lat = 0.1388269563329887;
    msg.lon = 0.9371494878730486;
    msg.depth = 0.08843232719217875;
    msg.roll = 0.19131847744376818;
    msg.pitch = 0.40112688958254905;
    msg.yaw = 0.002554277380829917;
    msg.rcp_time = 0.841811023987895;
    msg.sid.assign("ZQGPLIRBFLWXIXEZORUXTADAUDPACEKEUZSBFTYMDWHHMXFWBKSBSUBISQQETIMENHBJQPTGFGNZYYMXYWOZOTIDORNGNG");
    msg.s_type = 139U;

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
    msg.setTimeStamp(0.9357242335929399);
    msg.setSource(41424U);
    msg.setSourceEntity(233U);
    msg.setDestination(4049U);
    msg.setDestinationEntity(74U);
    msg.lat = 0.8449829666943455;
    msg.lon = 0.46320147568842773;
    msg.depth = 0.7798469960633982;
    msg.roll = 0.783439999238205;
    msg.pitch = 0.4643283069070021;
    msg.yaw = 0.8395316899040547;
    msg.rcp_time = 0.5667147069159905;
    msg.sid.assign("LXZZGIVFBSSNEIXPQXWNPMENGGHDQYUYLJMPYLRSXFWBVXEBBJCBTJZGXLDWJZVRMQTHZYERVHEIOU");
    msg.s_type = 26U;

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
    msg.setTimeStamp(0.13001320518944082);
    msg.setSource(64049U);
    msg.setSourceEntity(200U);
    msg.setDestination(49310U);
    msg.setDestinationEntity(150U);
    msg.id.assign("GXDSKTOCMIUILEIDDMPWLJRZGXHGSRBFCNMDPJUTYEBNPHDXTUJJKSOUSUYWYPMAVBPWTYKEIBKVVTVAKTGRYNJMHQWHBCMMDCQQMQRQLVCXYIRGYKRUVFGXKUAFBPLLEWSEZSRJZCQWJKDCGEFZESFECOBVDWNGRASQNYZMOCST");
    msg.sensor_class.assign("BSMLWTPOGWPYIYFYNSJFNTWUZXEOMRWOVIEYADRTCRADVBSATABYCEIGKLEVDTOQGZZSZZSJOGFJXGLJYZDFANOVSWZFQHADEOQFRAEIDHHMONPKQGCQALLFNUCFJVRRKKVDGEZTBKNGHMW");
    msg.lat = 0.4770481016299746;
    msg.lon = 0.7786831366160096;
    msg.alt = 0.2610815476970221;
    msg.heading = 0.024282640495332353;
    msg.data.assign("PPNIGNVCERNLTJRSQISFJERWDNXWVKUCHGEDSTCVYWEEQZUGUFIZHWOVKOKCQZWSBWSILZTIOVAPXKLNHJSSPPORUDYVAHMZHYFSGLHXWBGNTFTROKYDKMYRIKLBJGLJMHCQYRPJJQUZQSDZYQBBMTAIOGBLYBBCELROQDYIFAUMIKAHOHATQRCDJQDUEPPCXWXKPXLLTEGFSWCREXNVOMGDTVXCMFFWZNHUJMMAMXZFUONDV");

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
    msg.setTimeStamp(0.6956057306680555);
    msg.setSource(63329U);
    msg.setSourceEntity(66U);
    msg.setDestination(50009U);
    msg.setDestinationEntity(243U);
    msg.id.assign("QHHJSKRWQGONVYFXRMOZQHIEYZYSALZXPKWRMMTHNLVJWRFNBIGUGAOGPLWSWDMOBXCKWPZBQASVVMCVYGAJDHGWPJNIDJAUULVGSKFIDIGUCHBDBBPIZRXOTPLZKTMAAEPTDWEXZEREPKCMIXDNPDNUOWBILKBCSJZFZSECARUFKTDUCMJQFFTSKTFFBQNTHYUROQLKHOPXATVQCONGXRQLGSSYN");
    msg.sensor_class.assign("PWIODOXFQQETQDNHJATSTGFOCBGGKFLRAGTHEVDAOVNWQXLMIEMBXRSVZCIQQUBWNNJLSSDHOZXDFFXFMRKLGYCUUNISNMZJYCDUZOJPPQHMLNJPFKBVKQZXREUMHYLGYPBKSXNHKOCOVUYVAPEEKICHIYCARKGRJIBYWAEHIOFXGSGBLWAVLYYZVUSZTMKQPSWBPACDKPFVGXZMHBAWW");
    msg.lat = 0.25470740165484174;
    msg.lon = 0.11539616233343708;
    msg.alt = 0.5914689403943377;
    msg.heading = 0.6052830443107372;
    msg.data.assign("TSBZXSJUFQMGCHDJIJXJHWAVMHZVPNTNXEVMREFTVZIGOYUNSKPHQWKBVQRENOBCXEHUMKYYMWBLJKPCQLAD");

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
    msg.setTimeStamp(0.5162679475433674);
    msg.setSource(15122U);
    msg.setSourceEntity(127U);
    msg.setDestination(6206U);
    msg.setDestinationEntity(31U);
    msg.id.assign("WCDSJPWTDEIMMGEVXNPOVIAMABZDDFWNWGQYQXNVQBHICAOFLDOAIBTHHZQXWSCTBEVRFXLWXBZXGKYGFBQVCNPHPOXWTLRMRLVKFOJ");
    msg.sensor_class.assign("TDATVFRGZYAFWQY");
    msg.lat = 0.40195473810361404;
    msg.lon = 0.6835506178328669;
    msg.alt = 0.026250694819100695;
    msg.heading = 0.03539452626941397;
    msg.data.assign("CTPGMASJNGLJZMSXZFZFDFGYYFPRIMKHILNJWFTRQZJAHMXJWBEHCIQKKDOKQCNLEBD");

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
    msg.setTimeStamp(0.7485728769007491);
    msg.setSource(15959U);
    msg.setSourceEntity(196U);
    msg.setDestination(62247U);
    msg.setDestinationEntity(111U);
    msg.id.assign("XWSONOTMHBBQCGAQPDJFOEMKEDLKSWDKKIEUECVAWBXMYGNPXADPYEAXQLXHKUSGOYYLFCXSQBIJJZOJHIPLHMXERPVFLPSFMCMUZVUAKVWBPGJEDXALS");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("CUGFFBTZHOVWLYCXJQONDLWGHTNDHQQBIKZJUGQOJEODSVJNAZWZDHRPHIMZYTPJFQRUCDMANNRXOSAZONRYETAIZRRVGKAFZQKNMXEIXGJLMYMJPOSLVBZRTBTVLQQWBIHUPGAFSFNXBYBMVRUCSSEUVXNLEGLIKAEUSEVJKHKCDTBDBKTVCCICGXPJHZEXLNIMFYXYBYE");
    tmp_msg_0.feature_type = 98U;
    tmp_msg_0.rgb_red = 106U;
    tmp_msg_0.rgb_green = 202U;
    tmp_msg_0.rgb_blue = 35U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.44338978037134336;
    tmp_tmp_msg_0_0.lon = 0.6974863428925653;
    tmp_tmp_msg_0_0.alt = 0.2188538273254289;
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
    msg.setTimeStamp(0.6447240607395158);
    msg.setSource(39208U);
    msg.setSourceEntity(73U);
    msg.setDestination(42691U);
    msg.setDestinationEntity(57U);
    msg.id.assign("CPOKAHULCNHERXNSQKGSSUPCIPFKRQTFOGMLBUQYQIKOEYGZBIXROYHBPEIPNMVHFXBZ");

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
    msg.setTimeStamp(0.40671541401200073);
    msg.setSource(16251U);
    msg.setSourceEntity(24U);
    msg.setDestination(4519U);
    msg.setDestinationEntity(170U);
    msg.id.assign("XPEZPUMLADRCNQBKFFRUSVNXYVXIEPLPFAYRYDWYQZFRUVVJVLLNHTLHBXOFBCWMBRXGOARESTZJDBZONCOBIREZJFJMGDUZBDIATKECFNUWPQETJS");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("FVJFHZIMUQBNPPLCV");
    tmp_msg_0.feature_type = 167U;
    tmp_msg_0.rgb_red = 17U;
    tmp_msg_0.rgb_green = 163U;
    tmp_msg_0.rgb_blue = 24U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.10051298726395885;
    tmp_tmp_msg_0_0.lon = 0.21640915089590151;
    tmp_tmp_msg_0_0.alt = 0.011570842671150827;
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
    msg.setTimeStamp(0.5430894757271079);
    msg.setSource(52446U);
    msg.setSourceEntity(90U);
    msg.setDestination(16700U);
    msg.setDestinationEntity(170U);
    msg.id.assign("JRFINRGVVGJFHBEBDUPBBAZCIGMGJBYDHGFKABIQBKYJPSFBBQVJZQFEPMMFNHLOHODYXXFUMSKHWSYTEXKVTISPXNZPLTDQAXLRPNU");
    msg.feature_type = 207U;
    msg.rgb_red = 186U;
    msg.rgb_green = 56U;
    msg.rgb_blue = 180U;

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
    msg.setTimeStamp(0.4709063295381708);
    msg.setSource(26330U);
    msg.setSourceEntity(207U);
    msg.setDestination(44654U);
    msg.setDestinationEntity(64U);
    msg.id.assign("MKOCELGDGMBTBINVAJBMBMOICNINFCQTUWLJVUAMNKWKQKLHUAGPJXMHJWGLQNTZRAI");
    msg.feature_type = 101U;
    msg.rgb_red = 77U;
    msg.rgb_green = 184U;
    msg.rgb_blue = 67U;

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
    msg.setTimeStamp(0.3803332380333607);
    msg.setSource(44252U);
    msg.setSourceEntity(211U);
    msg.setDestination(58193U);
    msg.setDestinationEntity(76U);
    msg.id.assign("RZXGFMPETDEICYEBXFFQMLNOEEOUYLQVZBGBCPTXYHJFSZALSNFJKLLZDXSTVLHBMSYNZXIPEGNCKOUTOUWKVXKNRCHNLYDOAWVPSAKVPAB");
    msg.feature_type = 41U;
    msg.rgb_red = 223U;
    msg.rgb_green = 188U;
    msg.rgb_blue = 244U;

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
    msg.setTimeStamp(0.40537983343568573);
    msg.setSource(20016U);
    msg.setSourceEntity(6U);
    msg.setDestination(37725U);
    msg.setDestinationEntity(90U);
    msg.lat = 0.8467289732863846;
    msg.lon = 0.10289896986549496;
    msg.alt = 0.07064426088779907;

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
    msg.setTimeStamp(0.39862864067381654);
    msg.setSource(17809U);
    msg.setSourceEntity(223U);
    msg.setDestination(25994U);
    msg.setDestinationEntity(183U);
    msg.lat = 0.29107802867986543;
    msg.lon = 0.6952023645389009;
    msg.alt = 0.6084722147215268;

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
    msg.setTimeStamp(0.4908312472504063);
    msg.setSource(52785U);
    msg.setSourceEntity(120U);
    msg.setDestination(28095U);
    msg.setDestinationEntity(60U);
    msg.lat = 0.9340346306716002;
    msg.lon = 0.199663848200889;
    msg.alt = 0.03379674084061213;

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
    msg.setTimeStamp(0.04416755923123605);
    msg.setSource(36580U);
    msg.setSourceEntity(40U);
    msg.setDestination(56860U);
    msg.setDestinationEntity(15U);
    msg.type = 230U;
    msg.id.assign("CEMQFJZJPHOJMXBFYIFEZMFAGYDRLKGYTSZOMDLDOYIFGLCLQARWPGZIEUNTXKNKBANZZWVSBSCDGDHZQUKURRIWEFKXHUBXTSTUOVCBWVQSNTKHWIVBNBBHGTMXPMMTAGEYPYYMOZIDKDOOENU");
    IMC::AutopilotMode tmp_msg_0;
    tmp_msg_0.autonomy = 13U;
    tmp_msg_0.mode.assign("XNJNBVFGWLEYCVGNJTQUZARQEKHHJBBRUMSUSMI");
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
    msg.setTimeStamp(0.6766053096553828);
    msg.setSource(13647U);
    msg.setSourceEntity(187U);
    msg.setDestination(10465U);
    msg.setDestinationEntity(199U);
    msg.type = 126U;
    msg.id.assign("WGXNYPFBLHJXNFOUAPEVTMWGYUZXJJYMRHNUZ");
    IMC::CustomManeuver tmp_msg_0;
    tmp_msg_0.timeout = 47274U;
    tmp_msg_0.name.assign("SDIOGZZUCVSYRIPDPKSKPVEVIJGIOBGLQPXLUGDYJTYALDNHVIARTEEGHKQGRJSADURWIXXJQSSHIPNBFZAIQLEFVTHMNQODFOBVEKIMAVGTAMXRBCPCAVMOMSNCZKFTDZFIUDHDWSAUZEQWCMMYYLVJUE");
    tmp_msg_0.custom.assign("HZBPBNSQLJCMMGUGSYQNNKVXQPZFFRWXIHC");
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
    msg.setTimeStamp(0.18030685923515788);
    msg.setSource(62312U);
    msg.setSourceEntity(221U);
    msg.setDestination(63396U);
    msg.setDestinationEntity(220U);
    msg.type = 197U;
    msg.id.assign("JALVUBBMSYEYQCNBEFEVKRNFKGVKJLTNBTODUAFRSEGJGDZBHOBXJMOAMYFAPHOJIRCDLOTPDXYOPMCINAUHINLXLSDSQCQWZVUBFKZMHWQACWHGXUVIHUZAIWTMRWTRWGQWPVUYKFJJSETQGLACKKDNZGIXGJQXMFYXPHXIIEVXZPUTFDPKK");
    IMC::VehicleFormation tmp_msg_0;
    tmp_msg_0.lat = 0.780201402902087;
    tmp_msg_0.lon = 0.9829713474102795;
    tmp_msg_0.z = 0.370402715159318;
    tmp_msg_0.z_units = 157U;
    tmp_msg_0.speed = 0.5709134312148504;
    tmp_msg_0.speed_units = 189U;
    IMC::TrajectoryPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.36449137917460417;
    tmp_tmp_msg_0_0.y = 0.9392831277052783;
    tmp_tmp_msg_0_0.z = 0.5547474588507322;
    tmp_tmp_msg_0_0.t = 0.3839388838453336;
    tmp_msg_0.points.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_time = 0.7744106846597765;
    tmp_msg_0.custom.assign("OLNHLHROQTVJGHCJKHDXTANGVXBRVTRVBQWXCUWUMPIEWSOCQEDGLODFONJCXECHPSMGPBR");
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
    msg.setTimeStamp(0.9391996745211066);
    msg.setSource(14596U);
    msg.setSourceEntity(48U);
    msg.setDestination(35204U);
    msg.setDestinationEntity(186U);
    msg.localname.assign("CBILGCYVBZWKOFYNFCCEIXULSIVQRMYHTCHXZYVWPLTNBZZNYUJRNFXHOUMKQRQERKOPPLFKSFGUS");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("XHAOZGUFEIKIXFSTDBATVFLOQVJLTVSCJCCINMKRGYBEGGXMPWHPQMOZJFMNLASFSYYJFRAHHEYKYDBZPERXKXNNLYEQOPPEJWBGWKVDLUYHLQATFTMMMJIRAKRIKZFDLFHSSUXTQTWVWPPOWAVGEQLCKOBEQBDMNNOHWRDDRZZNAMCBGASHEVXDJIQIPGTQVRSHFTUUCTRXCZP");
    tmp_msg_0.sys_type = 68U;
    tmp_msg_0.owner = 25402U;
    tmp_msg_0.lat = 0.41385150817415806;
    tmp_msg_0.lon = 0.2760633696019992;
    tmp_msg_0.height = 0.8784488737999414;
    tmp_msg_0.services.assign("JTDOKYUHGAUDRFPPARDXERJFUQAKKIDFULMXYYSHBCDCQTZPIZFCMKZGANPKUEMSLJWQOWMERLXPCOETQLXLZSXTIVMOZJNHYXRSXIOROSUBU");
    msg.links.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.8593647366758085);
    msg.setSource(8650U);
    msg.setSourceEntity(86U);
    msg.setDestination(47029U);
    msg.setDestinationEntity(219U);
    msg.localname.assign("HIXPUEMGNLCPLLALGBDKQLRJGXCDBBAKSMIHHUYIBOWOZLEZWDPAVEFQEFZHCZYZEWXQXRZUNNGBVMANWTRKOUYFSFFARHITJJMPIUWPNSIRYEDWPSIGDIBQPQXMNJJFCZOCFMGJCXUTUOTUSEBGTKKYETOKEKAHSPGNFWFAVDDATZJLDVLQWAKUMYGJTKYXS");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("VPKBAAHSRULYVWCOVOBVGGEBXPINRZDUYGFSMOUJZKGWNTRCGPEIHVTXQRPDZBDMBITMBZRSVNIKNSPMSWFWBKKLQPGYLGFNIMHOAAGHMHBWYUIAQXTQLACXEFSSFZJVVJJCIEJIKMELANYEQAIJDWOJXQLLJEXSWVEHXZPBNRCZAKULUETTJ");
    tmp_msg_0.sys_type = 194U;
    tmp_msg_0.owner = 18486U;
    tmp_msg_0.lat = 0.5874492656788505;
    tmp_msg_0.lon = 0.9930647963998068;
    tmp_msg_0.height = 0.9274978639061936;
    tmp_msg_0.services.assign("LXUZVWGKMFHMWLRLXWMADYDJTZPEAVPMLJSHIMLEUOXKEYFQUBBPJURIJVYGRCOFBPOECATSEATMCBDAFSCHBZJOCNIIZIAPANGCWKPVIQAKAFKLWXTCFOJYRHBCRBRWELYYTJPDNVCDQBPLHMEIDGZTNSGGYNOHGTTDWYRHKHBKJKFDUMHQGQWUVSUUZIDCZNFSQXEOZPNXIRXFOVOSLGGXBJQTEDOEWRJVYQZVHSIRT");
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
    msg.setTimeStamp(0.8819036367053366);
    msg.setSource(12219U);
    msg.setSourceEntity(90U);
    msg.setDestination(33926U);
    msg.setDestinationEntity(174U);
    msg.localname.assign("KWIJXXFRKGJGVMJBCUICSUHRFELTMWXAZAFFODRGSEAVNOISHDXTZBFUDCYSHKACNDOJGEGJPIUMBMOIVTHLJCCRJDTIPQPAKBYOBECWSYPTXBNEHKFQBOCMNGLZUKPVKSWVFEUAYZNWLJQNLWYUZVDEM");

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
    msg.setTimeStamp(0.62665503522771);
    msg.setSource(40202U);
    msg.setSourceEntity(61U);
    msg.setDestination(16886U);
    msg.setDestinationEntity(85U);
    msg.timeline.assign("NGPXXEOFJOBDFQIUNAVHLAGSRVLNBJYFHUNXXYYVUISSUUCMRIGTTNOCRTLTLJAYAWAXGWLCYJEKOEKLERRHQBMZLUDZGZGRCVALTVXSPZAYDBWJDZJOHKREPQOWPBFFUPWIFUFTUQLFCMDBNMPZ");
    msg.predicate.assign("TPJQTLHNOSAVXWVFVKGWMIRNYCOOHRJUCMDENDSXNAZVNMEFYZYGARUSYQXJAJZDUBDIFMOTLAEGGHHHJSTOTZPIZVRFUBSRGUCRQLUHFFEIZCVZLOBKWMRHORIBGCKKC");
    msg.attributes.assign("YYJAOKHDERYFPWIMGSQCRSMILLHJPAVCHHERDXNOFFWNEORKSPKYOVTOHRTBIBWXXIHSSUFGVDAZJEQMFI");

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
    msg.setTimeStamp(0.20674874920864783);
    msg.setSource(13755U);
    msg.setSourceEntity(100U);
    msg.setDestination(43062U);
    msg.setDestinationEntity(181U);
    msg.timeline.assign("MMJOHBQYMKGCTQKEJOCCFRCXOOWGFOSEFSYIUZCXNWDOINHDDQHLEIRYZNPVFDAKMHXYIBLWTAQSETVXFNSYANGLJCWU");
    msg.predicate.assign("OLLBFMABVODHHIVYLAODJNQNIJGYECOIVHLTHTIKZOWUQAEQCLTBFUZJDQERZEAYMGWASIWOUSRCNAOYLPTRTUXNYMKJHNBIKGZTFVZFWYUZMFIIDMOIDATMYEJCJPMWLEKNQYZPCSQSSNSGQDBCFKWWWXHZZGOLBUKRHGSQFYAANXMUKRPVBKCRVXEXCTBJIMGJVHDXLYNTPPQRFRPVKSJSCOQEBCXKWDMEEGHLGGTAUSRFW");
    msg.attributes.assign("RARWTTZEEEAJHMXMVCFDJWBWNFUUZPCKPQTYKRCPICVJOBVTPBIHPXKOMDQZBIUMGWDRKCDSMEUKLJLXTBMAISBOUJOUANXJXGDHGRLXYQJTZZTKIQHRXCHYEELKWCSKJYDBNWKHTQRYHFMCYLBINGCXK");

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
    msg.setTimeStamp(0.7323986100825722);
    msg.setSource(5252U);
    msg.setSourceEntity(107U);
    msg.setDestination(14471U);
    msg.setDestinationEntity(9U);
    msg.timeline.assign("ABIFXOWJQDY");
    msg.predicate.assign("OYHHWXKUSEELDUXFQDNOYLCBOVZKBGOTVJLGBRHYFIJNTLQXMCBYUZKQSTZFUQGDGESUWIVPGWCNIXMOJCAPNIXXTZTKZOMHHUAMKMMJERIOYSZBAUHWBBPTVEOJBTEYWKLFZUQFDKUTZTARS");
    msg.attributes.assign("MRUGOWNWTCTUPLSCTKQGGEDGLFJKCCNTRVSQEXQTUYAUYFVCGABXGQVJLMUDDFRBEIPYAXVQHSFAKGHTCPVJBALMPCHKSRXPOUJTLCSSEDWBLATPAOWRPFHWGHRWDCLUQIEZYTLSBJKZZYXWVDRBVIMHW");

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
    msg.setTimeStamp(0.953466668928083);
    msg.setSource(18160U);
    msg.setSourceEntity(79U);
    msg.setDestination(60583U);
    msg.setDestinationEntity(184U);
    msg.command = 18U;
    msg.goal_id.assign("LFDXZNLPEFANXAZIBUCLOVKBXSQGNDNOGGZVHVEFKTXUALWEZKYQQRCPDFHFHYPVUBLCWUGWIBSPFKBHJUTCDTUUZXUHSUAVTJYECLYUIXHVNFSEGDMQGFDNRJIEBVZDMWIMNGAAQEFSTLXYROLNETJ");
    msg.goal_xml.assign("OQJBCNSCKMCPCQIUDPWWOASXWOCRZJEWCSSXQREKEFZNOCPGKWLJSOVLMDGRUHPGZKNQETFKXWMCRRDWFLUSYFBTIXFGPDYIJRHDHVAMBNRAYUSKFONJY");

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
    msg.setTimeStamp(0.039537389637080755);
    msg.setSource(10049U);
    msg.setSourceEntity(129U);
    msg.setDestination(51126U);
    msg.setDestinationEntity(251U);
    msg.command = 98U;
    msg.goal_id.assign("CPUQRLBFFHEVXHYZVZVFMFYERVPXDYKEHDEQUHJSREUZYBNEZTZUMOVOMHVIGOWQSFTYIKBKQBNJITLGATHAYJMUAXCRPQIQBWHFTPDCGLNIYMUCPR");
    msg.goal_xml.assign("DBJQGUOKFAXKBWYZBIFKAVICBPLSVZDKESTVNBZGWWU");

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
    msg.setTimeStamp(0.09012355044079368);
    msg.setSource(20099U);
    msg.setSourceEntity(34U);
    msg.setDestination(50230U);
    msg.setDestinationEntity(168U);
    msg.command = 60U;
    msg.goal_id.assign("EJNTRTRCULSELDXPZJOAPUWQCPEIKJUVZXSMDKBFRSKAHMUDFKRLZVCCGLIDFSQNHYNQBAUZYTWLKEVBBABZQWLEREODXTPIYNAYGHNHJCAZMSLUEPNTTJXUXHQHHBYYVVTFONOQOLQGIGOYZMMVFVGGARHNZMKNKWOTOVYIJSEIMXBVCPUMXWRSKIAPKMUEWIEDWUQJHAIBAZSCQBPDOOHJPNMTLDKDXFFCQCGFSSBXRJVTWJF");
    msg.goal_xml.assign("KJXYEFAETONUXKFFJAZVIESLCYZDGBVUUJUKCTDSFLMMYAIVRLKVPCRVMPFXBRWOVJOJWVUOAWSDWHKQIHJJMHSGBZZFDYHSHIDQNGVEOZFKOSGNKPAQDANRWRCZUGGWUTVPHZKDXPHOMAECLTYIUY");

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
    msg.setTimeStamp(0.06575244640734768);
    msg.setSource(38959U);
    msg.setSourceEntity(128U);
    msg.setDestination(37405U);
    msg.setDestinationEntity(192U);
    msg.op = 99U;
    msg.goal_id.assign("KSITXYUGPYNZXFOIAUEXVQUDCTILPEYZKMIPSQPHIJTCRIVVXRKFBQHFOLDLXQNYVLAEIWJWVRKBXNWVQBVRVGCDXROGGCAUICGAVTYBNCHJEWJWASPDUBZSLUMCIWYDURYOAAMBQPMEUSEGTIFEWPCTBGGDMUJMDHYBWKMZNLPMKCPJNZZYLZKTHDHZKXXREOBVAQCEFFHTSRQRZXPJJOSGNUSDLESQFONOHDOS");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("IPAOHOBDAOHKRXSJVPGRTRUNALQKGEXHQSORXMRHPMCWLKUGKCCBBMRDYZNXMEDXKZZGKYGZBEPEOFFMKJUSPKUSSXPNWLAMIF");
    tmp_msg_0.predicate.assign("NYABZXYVIENEMULLWIFBRVVNJETCFNCRFIKGEFSDMAWCBTICOLNMUANKLWXPPWIQXJPXJTSQXAYSHUYUZUDOOAXLJOHOQXAJLYACQDNFIJSHSQDDGXTVGLPQMMKRRBGEJKEOIYREJWPJGPVQPKUHWZSSMPLFKHOWMGFDDBBZFHWWSRVTUCOYMEMUMSBUNZYGNAYFAPRRBYCZUODCLBGIDFVZBAOGDCKXVKN");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("PGEYQUXBZWBCQHQPLTRVYWSSUPXDNOVEFWYUDEKVEJGGUUCHGFZLINHHABWVRTSEQKQNHRWCAIKOMKTPLLEQVOBFPYNIDXFAPFHMEAFJRBXCWZSYZKSPMJOOXEHEGIHSARJXNMJLYKPQZIFZCEPDMUJVABOQNWLFITLTOCBBDMGJGRTZVWSFPIKKXAIKRIAXCXCWTDSYMQBDNS");
    tmp_tmp_msg_0_0.attr_type = 23U;
    tmp_tmp_msg_0_0.min.assign("NPAPJGKCAYYJEHSLDQYNRZBJSSBPWVKZMDPCUCTTFMRHIVIXAEORGDYXEZXJXSKKLRWTQLTFHHNPWQYGXVFGLKSUSOTDZIWGW");
    tmp_tmp_msg_0_0.max.assign("GNKEXWQPDAJAQAYJWSDWSQLTEOLOKANCJOOILRETRUDZPHELXQYXHEUWNVMJBOCSRTHFGUHWOGPQZZHLKHTYVZYTRALNTNBDDKCLGPBMFOZFSXIGBPCGIVKPEBABFCXUJAHHQAZTFEFVDVMOPIZLTHOHSJBKCMIVMCXXBWNWSMDIGQQDNSZWCEPQPADWVREKGCYFUAFPLLJIZTBYJGVFRKW");
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
    msg.setTimeStamp(0.05269543366851903);
    msg.setSource(31132U);
    msg.setSourceEntity(176U);
    msg.setDestination(41136U);
    msg.setDestinationEntity(41U);
    msg.op = 197U;
    msg.goal_id.assign("AZACOEEZWUQGLPJLHBLQXWVHVINJINGKWMIAIFEDGZOCQZJHKMRDMHHEWCIXVGENJLOVQHSDRULYXAQRIVOYFAQCUWMXTOGJAALYBNYPSQCCPSGPBUIMUTCSJTFRONODODNTFXFNVDYRFPKPAIYXULBTHSQDZQGYFZEGWUXBJGCWZBKHTFDKKLUAKNEFDRISSTZRBCRLVYKXDTYPZVWJ");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("SZGVFIRGDZGPWHZTTPOIHJBJZLQOBFVQBCNVHJUTOCDSXIYZLUFPNQJAMBVCXWOSORCFNTRYIPLDXNQUVWKPSAJJLPFZSBUKTPWCYTTUSYNPDMEEFMQ");
    tmp_msg_0.predicate.assign("RRLUCTAVBBQBGRC");
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
    msg.setTimeStamp(0.003313812678057193);
    msg.setSource(14541U);
    msg.setSourceEntity(154U);
    msg.setDestination(64683U);
    msg.setDestinationEntity(227U);
    msg.op = 175U;
    msg.goal_id.assign("XHZMWUQIAAWCPBARGKVEYASYROIJJPOVIZQTFOSMAHIZQWBJNKFGMXEQGUAENRHTYBBMNBZUPOQYOJRMOTCKXSBULXORNLJCPMCZRWBPLICWUYAZGDHQCUXJAFFJKFYXLKKTQBRSTEDRVNYXAIFVOJIUWYULSATSHVJEWP");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("EMONOFIJFIMYXTFWHJMIIZKVISZYSLEMDRJVPINBKGZQPUQPDBFRHCCBAKLJPBFDNKTGMYLTOSXUGPVZZECCDXELPGHFWTTUNBGZVBRHIWJVGZXAQOYBJWKNCJMLBRUXWSFODTAJNYHSWMTJQBNVTSKHMZDUQZOVGA");
    tmp_msg_0.predicate.assign("KTRPONXBXRWAROVCSVUKSEUHHLZLFLWCMPGUAJMALRJNRJPFEXHXIQTNDNFLPVZSDQS");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("BKYZBVTZYPDTRBVGBHTZGJDIATJKAYQNWMCELTZJZKNWTVNVWLNMLERXZDYMKWUSSMNIQUIVMADRSNBHJVJPDIUHYGEFJAXWSHOQPHLJTJPJDRSHOQAKOLEIKPUOBBGLCLGIGKYIAGWZCSOGMQOFXDJEYXTDXALVOKEQTCWKWVZFNXBQBUGOBFDCSANCCUDRHHXZROAYLAUMYCKPCUEWPNRZSEQXUXEMN");
    tmp_tmp_msg_0_0.attr_type = 201U;
    tmp_tmp_msg_0_0.min.assign("LHPEFADYBQOSMBGUBCKBGRDTCZSUAMSTXXJLXEWCFHUILLVHETGCDHNTQVAPJDOPAYWVWPQRRPMOCGVIJRKHMBRFTYIBPQHGJMQZBCNGBNLRAVZSMEWYPKCMSNQP");
    tmp_tmp_msg_0_0.max.assign("HSQVWSIJYRSRIUUWZDMFRHUQZJGLEGSMOFIBSXDUHGTBWLAQCENQALBCIYCMTPK");
    tmp_msg_0.attributes.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.9508756891218187);
    msg.setSource(50842U);
    msg.setSourceEntity(112U);
    msg.setDestination(7716U);
    msg.setDestinationEntity(1U);
    msg.name.assign("FYCBQCFWSZWLMOJANLEEVTBTFXIESIKNIQTLQIXMQGAZLGIYLCECJGSGONF");
    msg.attr_type = 217U;
    msg.min.assign("BZCLIQWXUYKEDMSVSAXSUEHCUFCCINAOEORGTRWLQZUYFLFNSZDTOCOASZPAFLLLKTMZOIJDQGYETKASNGUNMMHUZLEKWJUXRVHIKFXRVYAMQCGWWVYHAWRNREJUIIMBBUDHRYJOJKDSJPDFDVCPWAGGYYXWPCBNBRAVERCPTMQZXTIOJKVPPDCPXYTRMNPEIIWWMSFXQGHNTKFJSEBGLMIGOABSVTQJVQJBKLQDXUOKPOD");
    msg.max.assign("SNUOZWJJVPAFMNACBWLGJTEVCTGRWLKLNBXLPLELMEHINZKXMPHVCEZSOQUDKWDBXJPCTQZSDFOLAOTWNFRAHZUVZXNADYYQISMNFCVLVKUUXFOMDORGGHQDEIXKCYJGIIBBVSPTEYFDGXRZCJPQNKKCZGBATBVMQHJXCNYRMPHEFISOMATAEHTBGHWRUFDLUDNJHRCBSOVXQSE");

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
    msg.setTimeStamp(0.8479845182152869);
    msg.setSource(36376U);
    msg.setSourceEntity(229U);
    msg.setDestination(56864U);
    msg.setDestinationEntity(161U);
    msg.name.assign("OTYCJYEZGVXARVCWWAZORESXCGVFNGWHLBDTBYIXFSYHUXWGNSD");
    msg.attr_type = 11U;
    msg.min.assign("CDFAYDFHMAQSZFWVUXTXTXTWIMXOKTPAMQINCASPNWIHVHAUAJUZJUCNYHRWLIGEDMOTPROBYBMRKCNH");
    msg.max.assign("YHEJMWZFWGUVYPLBNLNXHZTQINQUPUGKDLZRBIFGXYORYAMBDRTFLKRZSTENTHGHVLUJTXFMGCOQPMTIACSHAUPGQTOXWKYWSPBCXUEASVZXTOXOAAGKRHOOEYWURWVISD");

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
    msg.setTimeStamp(0.0015421736260099461);
    msg.setSource(39626U);
    msg.setSourceEntity(54U);
    msg.setDestination(57318U);
    msg.setDestinationEntity(43U);
    msg.name.assign("YVHQQOIHXOFNITURLYNMULHPBMWWPURVEBEFVXYGDFMBOOMOPBVWEWVOCUADQAXETCSPMGHSUXJYQDMRDCWPWLFASQJLLBORKCKDTPFERKYAARTJKUUJISNQYGYZEXUVNKOZTMJHJWHHSAZZGBIFPBRMPI");
    msg.attr_type = 122U;
    msg.min.assign("SOKBIEDNPFYNNVLRDRIPGFCAIFOOTRDGYUAVWEDSJHLXUIMHEZXGWJIVBAHAQFQJGHY");
    msg.max.assign("DMRLLCQBXAIDBACDOJTPUKOITLOUNETHTIVJYEEXBHEVWJPMORFSXPAATMZMGDRIHHJRSLUVTRFRQXKCGPWCAUVM");

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
    msg.setTimeStamp(0.1818052262962735);
    msg.setSource(7133U);
    msg.setSourceEntity(168U);
    msg.setDestination(52737U);
    msg.setDestinationEntity(67U);
    msg.timeline.assign("ZYSWMGIRANYLRSNWUDCEKRIPZVGJZSHBUVWHIEZWIXQPXYTROBFFJNCEKYPYHFFSVAPWBILFAIQJKDQQTGOXTSXZGRJTEJZDYAKJBOCHKJPJPIWCCDZMSCOHBVAGBWOFKODXMQVTEUMLGUMGBXQUAZRLZYOHPLVKRXBUBIDL");
    msg.predicate.assign("IYVHIOUKXXTJGIKUFVMUWIQKZDRTWPEVMKNYUQDJYCOJXCQBTCZLIFXCPPQFAJBOSTZLKMTUNQRAWOJOFFYJAAYHANZQHVPFRREOIRXEDTYDZVBHKDGEVTEC");

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
    msg.setTimeStamp(0.8646752270939179);
    msg.setSource(59757U);
    msg.setSourceEntity(204U);
    msg.setDestination(30325U);
    msg.setDestinationEntity(209U);
    msg.timeline.assign("GVPUUYTMVHSXBKGNKZICTHLCGOSHCXRQZKNZBFAXEUJHMIKONVYAPDKPMDAIYWFVIAWCBTRWDXWHXJPOLJDAIJGOFIEGVJSVYADSYIMAGRPZUESNERRZFOZARRUQTJDHCLGGCOEHPEXJYWUMNQBLCNQITWYWKOQPGTQBV");
    msg.predicate.assign("ZOVDSPPEODIHEWYNCLJFQDFWTBCDBZSJGMIQFYQGHQVEEICCNHIBDKTANWIDFWUSGAVMMNWSGHZRRCLASSKSWYITYVTIXUXERNCOEAYJZRROXHEJXBLAPRWAYLIAGEAMYLYIVGKMJQUKFYGUNVDKROHJVZUDTWKPCFFATUHLHZYMBWBZTZJBQUOXQUUGLWCERSGQSQJUXNCBPKKQPFTNOLSAMVPCFBMGXLJZPOVKOPTRXNP");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("BXTGDHHESSTPZBXQJJJYZNQXXRVRYJLQALLUWZASOCDRJMOLKZGZPGGBOGFWEUJMZIYITSAZJQTIFPMXOPUYCCCDHZAKK");
    tmp_msg_0.attr_type = 233U;
    tmp_msg_0.min.assign("MTUISOWFTLCGCCTJFOYZLSVLHOLOXJEJVAPXKOGEIKXSHBYJUJIKRNRKZQMGNPLDZHRALSPYUNQFEASFTQLWZAZQSHKNCGZERADCYYUJPODHFXHMEBPJNKGOYKWVTWSUSFEBWIDOTVGHMQQXNDQ");
    tmp_msg_0.max.assign("CSNTSLWYTXAWQNQNDJIJCDYVDLAPIEOOCDWMYCXYHMMVQYZPGTVRNZESMJWSOEGMKZFYUHUVIXOLHFETHRIMASCDOFJBHYL");
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
    msg.setTimeStamp(0.8692009108529141);
    msg.setSource(24967U);
    msg.setSourceEntity(128U);
    msg.setDestination(41988U);
    msg.setDestinationEntity(211U);
    msg.timeline.assign("PRFNOEDQPQLYWMIFQAERYLMTVFZSCVVQZWGGKLSEYFIXBSHEULOBHMUAKEVRPPNAPDJRD");
    msg.predicate.assign("TNEQKWWOYNTFSUCODPIYUYTKPPEIAORLVZWNFFTEHYUOEOMFCPQGLIBHHWIRMJGDBNCZPNIWEKOMZQVIOZWFQHUJPQWAZJZDRHAYMNBSXBFVUWBHGOMJWJSWDVGPFYNMVFSEKYJIREORVBKTKUGBCLAHDCTKMCANDNRIKVDUQACXRVXALNGLLPCZVKTXBASCCXQEXQJMPDLXSJHGGGFFISLGMQDXMAYVTPUYBXIZUQ");

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
    msg.setTimeStamp(0.7366886973113402);
    msg.setSource(56078U);
    msg.setSourceEntity(208U);
    msg.setDestination(62111U);
    msg.setDestinationEntity(241U);
    msg.reactor.assign("AWVMDYLPXKXOBITMUGQLQGKRRHWJIVISSLHEHJGVUDKCAIRHMABLQIGFVTYYPXWOAQGVJZYDNJAFBYZZABNZCWMBWCOCDWRTTNWUSGXPNWMSTBTUSPOAMOUHFCEPENZMJGERTCYSHZYCHQKHVGTUGSCPEBOBVBLLAXKERQRSIJUQXCLIEBDRPKQMDEGKNVRYQOFWFMIAWZFIJZPIVHCFNYLXVNQAKNODZMOXUH");

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
    msg.setTimeStamp(0.055384376360565146);
    msg.setSource(53934U);
    msg.setSourceEntity(195U);
    msg.setDestination(677U);
    msg.setDestinationEntity(41U);
    msg.reactor.assign("CTYRXZIFTKBCLXVBRALLJFHEPBMNSZNHYPLPPILVVXXPRB");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("DQGEYOPCXUVESOSNGHDZSMRNUZCLZICMUGSIPRFJHOBAAQEGPRIPQDLHAUGODYASZKTKDLLZOPOLLLRYYMUXKUFVXINPKVBTAHUYEOEMREEMAFNXVVOAKPGOHXBFYWNDNZGXTBKXZCJCWPGNFVQHRLCCJTIQRWDRFTCSDHKHB");
    tmp_msg_0.predicate.assign("AKYOEQKOFHFDVCPZIOXMKTWWCOCWXPJJLZNMZOKXMDJPIVVYSZHRJSQPRUDFUEQIBGVEERNUOSXYYXDVYNMVWXJLIKSAEAMUATBQDBPASBRPACOZIHLYQMFDULHTCERVQAMXLKRAYNXZHFDRUGVFZFHGENNDPVMLXKSEIWBRWBFKNHJISRKSUQGTTYBAOGASGTPUXZTWFGRQNYWCQFHIUTCZEZWL");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("KDCMKTBOPPOJOOWNBOADQOEZFSLHSMSYAHATEZQYMWVXMDJDOYRIETHKFYZGNJMMDNUQYFKPIBJQJXSHQFHIRXIRLTVXPBFOLNWZYGYSRUGJKVWK");
    tmp_tmp_msg_0_0.attr_type = 114U;
    tmp_tmp_msg_0_0.min.assign("DYERDDGHWSEGSLHQOFILMGCUPFORYTLNMUTSRZPQJCZTXXIKAIIXCWVKAFQSLYYWNBCVVCKEYUHIUHSWRITFAMPEDNWLGCVUPYODYMOFRCDHVBLFJNOAIMSXKKXUOAJYVKQHJHZEJFEULQBPPFJGYUTPGXDTDKZJGZHYESUZEMFWGIWLJATJCAO");
    tmp_tmp_msg_0_0.max.assign("OUVHPAUFZLGBMWHULMMER");
    tmp_msg_0.attributes.push_back(tmp_tmp_msg_0_0);
    msg.tokens.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.9502886347205843);
    msg.setSource(35051U);
    msg.setSourceEntity(9U);
    msg.setDestination(38193U);
    msg.setDestinationEntity(56U);
    msg.reactor.assign("LPBDRMSCVNDTDRSLXTEETHCQEEQUWPXYGNTKDVACVGUIXFOMNVHMHGVAWBQMIXDHMPLEIRDVWEEBEZPVCBCBQIIIQWFGAARTKSCHFPFUGPXSPJOURNKSQQJ");

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
    msg.setTimeStamp(0.7740936195106916);
    msg.setSource(61341U);
    msg.setSourceEntity(208U);
    msg.setDestination(8610U);
    msg.setDestinationEntity(107U);
    msg.topic.assign("LMRNUFSCMUXBEHKEDNTPSFDTWMVAJRTXPZPBZZCLKFYTJDLNZXHWQROYQPNCHFWKRAAJMDEOUISRFBOVKGZDGRIPKBBIDHFZWRBGSYTUEXILEQNDACKMJIIJXWHYIOVABJTOJPVSYWLOVUWSUVSILNUTWGNXZZSJEXKDGYQLPUYEQYUNMWAAFPDIBAKEALCFG");
    msg.data.assign("GCJYMUJCOCXFCNLLUKDEFWOBSDEBXX");

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
    msg.setTimeStamp(0.5443282819015225);
    msg.setSource(41989U);
    msg.setSourceEntity(211U);
    msg.setDestination(52683U);
    msg.setDestinationEntity(85U);
    msg.topic.assign("YLZUURQHZFVMKGIBJKQYOTRTHEXQORLEQMISGGABSXYAXRBEWYDIDTAHPWXGHCDDWIDNDALLNAVNJCKZXHKOF");
    msg.data.assign("VMOQYQAZMMJXXFAKIASHZKQAVKBIVTGUWNDVBDDNOPPJSVZKHSJFHWDOQRSDOTPVXQVRBDDUEZAMRWKTZHNLNJMILU");

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
    msg.setTimeStamp(0.746704031473654);
    msg.setSource(8346U);
    msg.setSourceEntity(174U);
    msg.setDestination(18404U);
    msg.setDestinationEntity(136U);
    msg.topic.assign("AQOUARRRUTKHQLVIMYDTOYJXCPLVUONRBVYHSIPZWGEQYXQHDVKNJZRVYLUQMTHVBFCTSMCEWNIHJWVEZFPVXKOEMTHBHJPZVOHDFAMJIDGXN");
    msg.data.assign("CWBHDCWHLDRAXPOMFGJVQCQTLYDIRHIZHZYBUCBHGNIKNKTSUVUAMPMPRRXUQYHFP");

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
    msg.setTimeStamp(0.5703080958153887);
    msg.setSource(17908U);
    msg.setSourceEntity(9U);
    msg.setDestination(14644U);
    msg.setDestinationEntity(201U);
    msg.frameid = 136U;
    const signed char tmp_msg_0[] = {97, -37, 116, 108, -110, -7, -64, -7, -4, 99, 100, 79, -36, 97, -126, 79, 108, -23, 113, -112, -7, -84, 92, 27, 66, -47, 27, -69, 73, 96, 107, -8, -32, -70, -106, -80, 45, 43, 56, 43, -46, 107, -39, -42, 80, 78, 77, -40, -73, 89, -2, -15, 28, 124, -31, 109, 86, 61, -6, 94, -21, -89, -62, -89, 84, -79, 52, -20, 87, 22, 125, -17, -68, 83, -58, 67, -52, 80, -11, -64, 77, -104, -84, 98, -124, -122, 28, -68, 57, 48, -88, -74, -94, -58, 97, -31, 110, -125, -92, 0, -53, -23, 30, 64, -24, -7, 29, 36, -117, 85, -15, 101, 28, 43, -93, 12, 19, 96, 68, 28, -13, 46, 90, 124, 42, 55, -118, -1, 64, -124, -107, -120, -65, 101, -67, 49, 35, 58, 29, -9, -50, -22, 100, -70, -79, 120, -95, -124, 96, -98, -115, -31, -6, -34, 21, 7, -1, 52, -43, 74, -17, 108, -47, -91, -98, 46, -55, 99, -49, -38, -42, -85, -15, -70, 75, 50, 116, -20, 66, 54, 40, 73, -16, -31, 88, -47, -118, 118, -83, -57, -81, 87, 48, -5, 61, 13, -93, -96, 96, -77, -76};
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
    msg.setTimeStamp(0.9579267542973663);
    msg.setSource(9694U);
    msg.setSourceEntity(201U);
    msg.setDestination(26139U);
    msg.setDestinationEntity(174U);
    msg.frameid = 209U;
    const signed char tmp_msg_0[] = {-7, 76, 98, -52, 40, -4, -18, 49, 49, -94, 39, -95, 6, 117, -111, -97, 98, 42, 36, 14, -28, -117, 96, -127, -82, 91, 25, -36, 80, 76, -90, -14, -112, -7, -97, -76, -126, -93, -51, -40, -55, -2, 69, -14, -105, 47, -62, 64, -34, 19, -125, 9, -90, -2, -96, -39, 90, -123, -97, -52, 59, 82, -120, 54, 88, -88, 39, 48, 64, -2, 5, 71, 12, 85, 98, -66, -95, 7, -115, 36, -8, 87, 121, -10, -4, 86, 100, 40, -85, -43, -57, 70, -85, 77, -65, 102, -68, 5, 110, -9, -86, 124, -38, 34, 11, 31, -76, -60, 77, -54, 74, -124, -22, 105, 8, -79, 2, -113, -28, -89, -3, 88, 73, -123, 34, -118, 117, -54, 73, -74, -55, 52, -80, -17, -110, -34, -82, 82, 31, 47, 92, 94, 57, -39};
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
    msg.setTimeStamp(0.36430257543980415);
    msg.setSource(24551U);
    msg.setSourceEntity(78U);
    msg.setDestination(23694U);
    msg.setDestinationEntity(191U);
    msg.frameid = 23U;
    const signed char tmp_msg_0[] = {36, -76, 9, -110, -90, -88, -44, -105, 67, -68, 37, -94, 23, 115, 110, -122, 107, -64, -116, -65, 7, -49, -42, 36, -91, -55, 62, -8, 53, 124, 25, -4, -77, 28, 89, 44, -54, 0, -105, 54, -37, 100, 4, 40, -45, -96, -22, -64, -20, 45, -90, -23, -115, 15, 36, 45, -116, -30, -68, -31, -30, -84, 94, -63, 42, 65, 45, 37, -48, -76, 87, 108, -89, 61, 88, -107, 6, 98, -18, 89, -72, 40, 63, -52, 71, 39, -22, -15, -119, 58, 17, -39, 25, -29, -37, 17, -59, 50, -72, 47, 115, -5, -5, 123, 64, -33, 61, -63, 112, 26, 120, -128, 114, 39, 74, -53, 121, -87, -92, -16, 118, -20, 10, -88, -18, -110, -96, -22, -6, 59, 63, -41, -127, -100, 0, -20, -123, -65, -120, 38, 45, 41, -120, -101, 14, -67, 107, 69, 110, 42, -52, -10, -93, -76, -102, 83, -5, 51, -117, 46, -83, -77, -110, 113, -22, -122, -118, 48, 35, -67, 112, 122, 64, 20, 43, -45, 43, -119, -52, -86, -43};
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
    msg.setTimeStamp(0.6053666925985287);
    msg.setSource(62298U);
    msg.setSourceEntity(154U);
    msg.setDestination(64420U);
    msg.setDestinationEntity(43U);
    msg.fps = 65U;
    msg.quality = 77U;
    msg.reps = 253U;
    msg.tsize = 120U;

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
    msg.setTimeStamp(0.7731640779818464);
    msg.setSource(36980U);
    msg.setSourceEntity(101U);
    msg.setDestination(37845U);
    msg.setDestinationEntity(33U);
    msg.fps = 191U;
    msg.quality = 2U;
    msg.reps = 177U;
    msg.tsize = 222U;

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
    msg.setTimeStamp(0.06261864681507923);
    msg.setSource(47503U);
    msg.setSourceEntity(115U);
    msg.setDestination(37606U);
    msg.setDestinationEntity(208U);
    msg.fps = 106U;
    msg.quality = 1U;
    msg.reps = 26U;
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
    msg.setTimeStamp(0.2735558419075663);
    msg.setSource(4466U);
    msg.setSourceEntity(190U);
    msg.setDestination(6454U);
    msg.setDestinationEntity(193U);
    msg.lat = 0.2711226359032092;
    msg.lon = 0.32103141400368684;
    msg.depth = 235U;
    msg.speed = 0.11938039566223824;
    msg.psi = 0.9249280152111421;

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
    msg.setTimeStamp(0.3587205574494864);
    msg.setSource(28914U);
    msg.setSourceEntity(29U);
    msg.setDestination(11482U);
    msg.setDestinationEntity(179U);
    msg.lat = 0.416981648955007;
    msg.lon = 0.46842982386672205;
    msg.depth = 68U;
    msg.speed = 0.1290030799006474;
    msg.psi = 0.01672126673455754;

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
    msg.setTimeStamp(0.6367433810289482);
    msg.setSource(42372U);
    msg.setSourceEntity(168U);
    msg.setDestination(35606U);
    msg.setDestinationEntity(72U);
    msg.lat = 0.1589661907361154;
    msg.lon = 0.8448781555962933;
    msg.depth = 45U;
    msg.speed = 0.5939488027530063;
    msg.psi = 0.9137827013545827;

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
    msg.setTimeStamp(0.38799258272304804);
    msg.setSource(20636U);
    msg.setSourceEntity(131U);
    msg.setDestination(14332U);
    msg.setDestinationEntity(66U);
    msg.label.assign("YVNRGPEHONHTQNZRHKWUUTWPELYDBMFKLGPFZHUFQYBLXIWMRNRIBWJUFIFIODFYKOTNDIJUHQCTOWZWZFZLODOMQQYEANQGHXETWMZMLNNUDRWKJVDUDYTIVSBXVFXCVOPETOBSXTAVXJXFGAPDLCMZKBCBSXIQKMDRLEUHNHCAMYCSQJBIWCADEGZGVJAPPEVUGMAZWHXJSFJGTUGJREKXAVHSPSNECLMIOARLIKQKBRQSSSCRYLK");
    msg.lat = 0.631065439784135;
    msg.lon = 0.41696934935902674;
    msg.z = 0.4928753711822842;
    msg.z_units = 17U;
    msg.cog = 0.419902913395121;
    msg.sog = 0.45331396206997776;

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
    msg.setTimeStamp(0.3094629845051704);
    msg.setSource(48872U);
    msg.setSourceEntity(252U);
    msg.setDestination(29585U);
    msg.setDestinationEntity(4U);
    msg.label.assign("ZNVKFMMCTTYOFVXEGDWTARSCXNXXXUOH");
    msg.lat = 0.9691613993407097;
    msg.lon = 0.36497304976510336;
    msg.z = 0.1375788578595739;
    msg.z_units = 72U;
    msg.cog = 0.40600100754397195;
    msg.sog = 0.8331436515498724;

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
    msg.setTimeStamp(0.10545585187196682);
    msg.setSource(61527U);
    msg.setSourceEntity(246U);
    msg.setDestination(21423U);
    msg.setDestinationEntity(206U);
    msg.label.assign("JPDYGNWKTBLDMGVJRUKYBBTGQBWDBNBCUYDAAHOKUZKBXZRZTTIVPFQWSZSYPOIFHJIHGCWTSLVPNAJQIEOKOWONCKGNSRGWWMJCNGVMAGLXDIRAHTLMAAZEPDKWUHPCDSRYVCJCLVNCASLFQNEWTZIYDBXTLVRQWXPOQIHYRMFFEFPZPRUUDUOXYLURJEINTHFOSQQMLVSQZQTOXG");
    msg.lat = 0.6395293725918039;
    msg.lon = 0.4195267783571296;
    msg.z = 0.49644943770564054;
    msg.z_units = 130U;
    msg.cog = 0.3792594504064839;
    msg.sog = 0.7781207684915893;

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
    msg.setTimeStamp(0.12898698695456867);
    msg.setSource(30773U);
    msg.setSourceEntity(251U);
    msg.setDestination(7359U);
    msg.setDestinationEntity(106U);
    msg.name.assign("NLGRPKPLXSCQFIZOXDFZALKBCTDOEMRABSTGHDSEOMARLBIEWLHKETJWMUONYZPUYICGIFOJUEPEQPAEQFPKXHXNNMTUAOYHOTGDLXJVCGCKTQENRKDGTKAYZMAUOWFPHXLMZSQEVJHNYUYBWNUCHRKVPPFGQSCZNIWWRSXTQUBBFJKZDNNWSMCVVJIWJOLTIBMCVAMAIUYJPVQTFRYSZXABXW");
    msg.value.assign("TRPYNYFQVNTBITPJXJEBTSECGNFKZIDRBFSJSFOYSIKQBZAJDABNRGXSNSLCETUGIUVWHLAMFBGWXET");

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
    msg.setTimeStamp(0.10081963753060408);
    msg.setSource(14549U);
    msg.setSourceEntity(13U);
    msg.setDestination(1236U);
    msg.setDestinationEntity(38U);
    msg.name.assign("KSVZVGLFLFNCFMFRKUIKUCFALPTISPTGDPJEPEWWXYOZWTISLRHPTEJBHHNTOQRKDGYKNCASSWWNRRDQHKCLXWPYQJMXTBZGQNPBQCPZYVSBAIEJDCYEUCNJDMXQUTDAAIJLO");
    msg.value.assign("LLOWSZTKVKRUGXXKVIWWGUZIQTUDJSLFVDKRUTRQZPHEQLEUFYSDPLIHCRJMWCHFGGLMXWRUNFWZSJCSEPATNKSGQRNGBMQJASDCTLBKGRAAKUMVVEBTRKNFAZQJDYEBNVO");

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
    msg.setTimeStamp(0.8849563212738238);
    msg.setSource(28423U);
    msg.setSourceEntity(153U);
    msg.setDestination(21872U);
    msg.setDestinationEntity(167U);
    msg.name.assign("EFCZOANLTBXWFWGQSHSBODDPKDYKAVRMMSIWCCZQZWOGIXCM");
    msg.value.assign("JOVKEPAFANHXYKQZWFDJQOCOWBYIZICGCTZELQCYEKWVFXHIHQAYSJMUOBBESYWOX");

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
    msg.setTimeStamp(0.45535450155688795);
    msg.setSource(1711U);
    msg.setSourceEntity(82U);
    msg.setDestination(61579U);
    msg.setDestinationEntity(140U);
    msg.name.assign("BIDIGUVSXDFSWPCIRILGXJTAPOVATXMPEYGSLPMCBMLMLRGONRLGFUPWQJWKDXVWKIVEDXOTRHOKJPPZEQKVFCUDNM");

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
    msg.setTimeStamp(0.5756482470006453);
    msg.setSource(64159U);
    msg.setSourceEntity(149U);
    msg.setDestination(30128U);
    msg.setDestinationEntity(125U);
    msg.name.assign("NGICLYVRYV");

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
    msg.setTimeStamp(0.821372650693593);
    msg.setSource(36066U);
    msg.setSourceEntity(191U);
    msg.setDestination(25309U);
    msg.setDestinationEntity(185U);
    msg.name.assign("ZYCJSSOWXPUIOLBZSNLLZTEQULZQMINPXSBTDGHQKFPZGDTCQUMBIDQXTREXWKZVFGZUMDEPIHQNFZWVCGOVVLBH");

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
    msg.setTimeStamp(0.17172972194904634);
    msg.setSource(36420U);
    msg.setSourceEntity(74U);
    msg.setDestination(511U);
    msg.setDestinationEntity(40U);
    msg.name.assign("BPSVELMHEZPCZODPEKHAGUNXCUFXJWDLHKVDBZHIYGID");
    msg.visibility.assign("WPQQELCHVBCMZFIJIBVYPIDXTQSBPIXIIMYXFWUFKPOULRWPVVOUPU");
    msg.scope.assign("MIFBXALYOZXFPLLNBNGVXCZZWTTDEFOSXHDNUWJOJGRYMHYTWUJGIGWYKYKLIOCSLMHKDRDUGZAXEFZAYUIVHMNHDIIDSCIMBVDYJJDEKGLPFKRSRXZOKOAOVXQPAVGKAMZBRYNQRTHLCQAEOKHKUECRBJOJNMMZQYAJPICVQJEBVHWHVBEPUTVWEUQNUGFSLUWQTBCFSRASXQGMLNNFBCJMXPV");

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
    msg.setTimeStamp(0.7491570477932737);
    msg.setSource(48455U);
    msg.setSourceEntity(253U);
    msg.setDestination(30238U);
    msg.setDestinationEntity(220U);
    msg.name.assign("DJBKXMTAFNLDGAQGERAJUWPEYKOSRLRBTFOXYUGSCIDJZZMCFVCVPGBYWXKKYWQXWDPPKBASFTMRPQACOPZHJYBCKPBBMNNVHJYVAQTWTXCMDFXGNIYWSW");
    msg.visibility.assign("RSPTVNIMNXYKAVQYTPVBWIFAJNUNJGBSAKCESFYCXBJRGGNVTYCHYPOAUJQSCMBMZHQMNRXDW");
    msg.scope.assign("XCXYHFLCOPVRRBXLNPQYIASMCLGEOHMWCPNQGCV");

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
    msg.setTimeStamp(0.5785745904898235);
    msg.setSource(55561U);
    msg.setSourceEntity(207U);
    msg.setDestination(17756U);
    msg.setDestinationEntity(130U);
    msg.name.assign("JNQYLCZURKQAHFXWZNCIBSASVYZGQQJRYNVXYUGXMKGTVLUFFGFKALVLDHIIWERKGMFOU");
    msg.visibility.assign("YRRACBNSKSIXUZVVDJFORMICZWNENYZPUCWKJZZUPRALAFBGTOVHISKEIABTRXUAHGMVMRQYXMLSOTHMOJSATQSFSRVDOUKMLJQGCBUIFYYKVBQWKNCLEHZKIWNVANDOPTNFWYHMEJZXBGXZLWSQDHLXYF");
    msg.scope.assign("ELZTLAYNLDEEMHZHSQBQSZEKPCDXSVOAADXBDDSQIEZBNTUIGOLGLSWJGMIUKVVIIEMQGNWXWDKMOVFOGTRKHVNTYCFUHRVJZDDPRBCYOYUUJKUXGFLOEJHZGWZKWZPRRPHK");

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
    msg.setTimeStamp(0.5573564547873779);
    msg.setSource(45607U);
    msg.setSourceEntity(50U);
    msg.setDestination(17766U);
    msg.setDestinationEntity(81U);
    msg.name.assign("XIEYJUYXDESMRARDXELZGOVPUMVVQZLVPKNKPODFGDHOIGSIQKAQTPENWCNKZHEYZIBCHHMWEPYGQNCVPWYDTKVQUGGPIEXJSCJMIOVOLOYWIC");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("KKAMTWVMBGAVHHKTWCNLTIIJDCTQCQLXUUXDQOVEQEKXWHIMORRZJIFWYYOWAGNOHKZGMFWYGJYHVSHHLUZFVKRFRLPA");
    tmp_msg_0.value.assign("WHKYJKUJLDTWHLTLISHHANRTIARUOWFXDPQXEOTXLGAVMSXWIFCPZENEFPNPANOGYGBEZQCJPLBDKGVZFYNYVGCMSSYBKLVFUMJOTBFIXOKUPXFMSGHDVBKLXZJEVAQBDRJRQMMZWNDDWRVJMCYAXCSCLKUZVQQKDSWXFOOEWQKXJDIGNYTRSHVUKTUJAF");
    msg.params.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.5928868071440315);
    msg.setSource(34612U);
    msg.setSourceEntity(71U);
    msg.setDestination(8292U);
    msg.setDestinationEntity(169U);
    msg.name.assign("JTSWEVIMDDLEDYGQJPZZUMQODPZERWSCHRABLOJENHVVIQWUXCVHCRHVGYXDOBZYZBPYXJFURZPAPLFUPKMMMEQQTKDSNIOWNIHJVAVQSMMAAWTROFEHIXEOYJNIFGQOGCVTTALOZXCRGNL");

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
    msg.setTimeStamp(0.7955393056301983);
    msg.setSource(45728U);
    msg.setSourceEntity(127U);
    msg.setDestination(16613U);
    msg.setDestinationEntity(43U);
    msg.name.assign("ZRRQDDFQAGHXTLKJOTWCFQHUAVVNYW");

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
    msg.setTimeStamp(0.738245637501246);
    msg.setSource(1898U);
    msg.setSourceEntity(231U);
    msg.setDestination(26512U);
    msg.setDestinationEntity(204U);
    msg.name.assign("NGPGOMJCFRSGXQDYHAZXFWFQEGBNVVIHOQGHFPAIAWHIUYXYAWQPWXQEJRKGRRXZUTSLLZYVWPQLCU");

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
    msg.setTimeStamp(0.00889805577507119);
    msg.setSource(28117U);
    msg.setSourceEntity(148U);
    msg.setDestination(24688U);
    msg.setDestinationEntity(178U);
    msg.name.assign("TNMXHHCBUUUOHPDZBSDUJYQASPSPZYEIQOBDMVEQSLTBCTHVEUJFRXLFIAMIRBRSYTWWPOPKWUUFXSWLAECNLWYBRYPSNJMIAZLHJOTGKHKRLAMZPOJCPFMKEMSJOWSHKVAJNEVGLQXOYRTAFJMEGECJGWHQDGVIOCNVKNBWCUFTERUNFABWNDDFCRXXILOBRITDFXVHZGFH");

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
    msg.setTimeStamp(0.3806455007708882);
    msg.setSource(28224U);
    msg.setSourceEntity(94U);
    msg.setDestination(5301U);
    msg.setDestinationEntity(98U);
    msg.name.assign("YMLRDDPJAKNPBUPAYSIFBIQKEUIRAJAXIUMSJCWLRGTZDMWXTVGYGOUQEXHIJUJAZZBLMWFRHVPOXCRWHTXSPHQLIDEWTDNAWMBHQOSTFNCVSQEKGYQEPFPUSXLYYAGVSFOJRHDDNMCHBDQBFHMTGRCCLCIPJRTENKUXBBFJIFIMZZTNLMVVSCKESSAWZVOGJLDJOUIPHZBNADPNZKQVEZNYUVKOXOK");

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
    msg.setTimeStamp(0.0723373086310054);
    msg.setSource(44578U);
    msg.setSourceEntity(244U);
    msg.setDestination(20320U);
    msg.setDestinationEntity(110U);
    msg.timeout = 95605348U;

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
    msg.setTimeStamp(0.08015380450741338);
    msg.setSource(49698U);
    msg.setSourceEntity(85U);
    msg.setDestination(52091U);
    msg.setDestinationEntity(125U);
    msg.timeout = 2855010321U;

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
    msg.setTimeStamp(0.5582861712683841);
    msg.setSource(64062U);
    msg.setSourceEntity(23U);
    msg.setDestination(2135U);
    msg.setDestinationEntity(102U);
    msg.timeout = 355620459U;

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
    msg.setTimeStamp(0.08751450600536104);
    msg.setSource(2026U);
    msg.setSourceEntity(112U);
    msg.setDestination(26610U);
    msg.setDestinationEntity(217U);
    msg.sessid = 1195620141U;

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
    msg.setTimeStamp(0.531243793921954);
    msg.setSource(35654U);
    msg.setSourceEntity(231U);
    msg.setDestination(9148U);
    msg.setDestinationEntity(64U);
    msg.sessid = 3274329047U;

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
    msg.setTimeStamp(0.9025785775228764);
    msg.setSource(9476U);
    msg.setSourceEntity(27U);
    msg.setDestination(13858U);
    msg.setDestinationEntity(223U);
    msg.sessid = 164706957U;

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
    msg.setTimeStamp(0.2773803740372476);
    msg.setSource(20113U);
    msg.setSourceEntity(96U);
    msg.setDestination(60133U);
    msg.setDestinationEntity(30U);
    msg.sessid = 4182127527U;
    msg.messages.assign("TYRSTXHOUUAGWQFVROAUWOUNMTYPFULCZALUPKEWZKRXMNDMSDAGCWRBLGUWCSFYZFLMZWNECXKGTDORRPHQISQDEOLFJKBXTVVEIITYJACZFJNCVLBKETDBVBIJDOSPSGESMNEJIHMSHYYGTJAQVZHGINOCHWKELFNRWVKEHTWHSDRRTKPPQPYPPMFCRGAJZUYYQNDABXYZONEQUUJCOGQKVLBIJLBXG");

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
    msg.setTimeStamp(0.5413454823447836);
    msg.setSource(38783U);
    msg.setSourceEntity(230U);
    msg.setDestination(43649U);
    msg.setDestinationEntity(63U);
    msg.sessid = 4213946306U;
    msg.messages.assign("DTZOQBGRZWWEZTQWVMSRVLVQBDNKTOREKXFOZRXCGFSBJTAGTIHCPJBHGSMXYMEQGLJPUAVRSXYEPCKMHKOUGEXYHFJDRMPYIHFSLDGUHRJSRWKPWSHZASQMNNJMKKFXOVKNFEGTMVZQYQB");

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
    msg.setTimeStamp(0.6090892219907692);
    msg.setSource(15192U);
    msg.setSourceEntity(20U);
    msg.setDestination(34295U);
    msg.setDestinationEntity(145U);
    msg.sessid = 4259083974U;
    msg.messages.assign("NUJFXRGGAZOCWJHAFKCHHENSPHPHRKMMIQEEHIVWROIJLCXZAWJBSUQSJSYDZBHNENGFBOVDMTMUDBLYSSQRLGXKBTPFJAQGPOBCYOBTUAILICSDGGEFYTJVKINCCPSXVZTAANWVUPEYBOKPDBIGNUFWJRXQAQLHJZKWUVYVCPARONZNPWLRGEXNE");

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
    msg.setTimeStamp(0.8277502700152943);
    msg.setSource(46798U);
    msg.setSourceEntity(2U);
    msg.setDestination(52951U);
    msg.setDestinationEntity(73U);
    msg.sessid = 3496593328U;

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
    msg.setTimeStamp(0.888606660921021);
    msg.setSource(13984U);
    msg.setSourceEntity(68U);
    msg.setDestination(43839U);
    msg.setDestinationEntity(213U);
    msg.sessid = 3992582944U;

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
    msg.setTimeStamp(0.3132448567970557);
    msg.setSource(16230U);
    msg.setSourceEntity(9U);
    msg.setDestination(16628U);
    msg.setDestinationEntity(235U);
    msg.sessid = 2395256718U;

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
    msg.setTimeStamp(0.49452133320939795);
    msg.setSource(14871U);
    msg.setSourceEntity(27U);
    msg.setDestination(58851U);
    msg.setDestinationEntity(24U);
    msg.sessid = 2746915102U;
    msg.status = 153U;

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
    msg.setTimeStamp(0.23817229530696427);
    msg.setSource(56312U);
    msg.setSourceEntity(43U);
    msg.setDestination(10921U);
    msg.setDestinationEntity(134U);
    msg.sessid = 2877950077U;
    msg.status = 5U;

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
    msg.setTimeStamp(0.6947790257404791);
    msg.setSource(15283U);
    msg.setSourceEntity(58U);
    msg.setDestination(686U);
    msg.setDestinationEntity(6U);
    msg.sessid = 2540409024U;
    msg.status = 47U;

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
    msg.setTimeStamp(0.36953056629388503);
    msg.setSource(61887U);
    msg.setSourceEntity(11U);
    msg.setDestination(38811U);
    msg.setDestinationEntity(56U);
    msg.name.assign("MGPRXEDUZRYEQWWZBHLLPZDBKNBNJLJZBCODKYSUBTRDUOWHRKXNMAYUAFPQGGDYHAQPWNRJRKQLPMIZOHVTEGPTFESOMYEQEPAQSOCGHQJFNVNNOIVGFTJNKQWDTTIFXVFVRBLXTWMYPSZTZATIFGQAJEKRGNIMBCMUVXHLXPTANCBLAZEMSIGDIRSIACFKWYOYOGWVOKSKVUWCEBXDXUJCEU");

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
    msg.setTimeStamp(0.8565727124433069);
    msg.setSource(55086U);
    msg.setSourceEntity(108U);
    msg.setDestination(30880U);
    msg.setDestinationEntity(39U);
    msg.name.assign("VWLHLQQNPJUMFWBNWEAHYXNCZGXTCRDPQFHWXLIYYZGYSAFCNOSJKMPOZZYKGJYJLLWDXNPJDAJYBPCVOZIQAUZPXHOAWSBMK");

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
    msg.setTimeStamp(0.5239606281719865);
    msg.setSource(63440U);
    msg.setSourceEntity(106U);
    msg.setDestination(2363U);
    msg.setDestinationEntity(20U);
    msg.name.assign("HNPNPRZJXDXZYUUKRGRDDGUKDIEAWBDYILFFZWSOWHPPSVAPZQMSQETGAFZCSQKEFDNAOVMIJLZMPXE");

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
    msg.setTimeStamp(0.18648018082061413);
    msg.setSource(60009U);
    msg.setSourceEntity(2U);
    msg.setDestination(34175U);
    msg.setDestinationEntity(165U);
    msg.name.assign("DHKDXUWEYHQTQQCXBZQJWJQMKLVILLPZIVMOHCEYXLJORSWDALTHYZXVGAFBKERJPFXMGGWBCUOFTFOYEFYNPFEYJGWZZYHWLDXKNBCPJZDCXHMRIREDRANRCTSWJISKQMBIBPINTAROHACZOKMFZBGSXCBKAPEWGVSLUUIXLSVKWOOPTBUTNESKKJGY");

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
    msg.setTimeStamp(0.8326975061908012);
    msg.setSource(35952U);
    msg.setSourceEntity(14U);
    msg.setDestination(55070U);
    msg.setDestinationEntity(102U);
    msg.name.assign("JJQSQROWUZMPVLUOYZEAICNHEGABFLDOXEBKWQJAHPNNTOCDFXFMWOBGCUWMBMZBWLGIOWJPARZYBUIGXXEMMDXCQHKPJFLPQQKPGJOPWZGYTKDNUTRVUZYFVUKICYILQNEESYKKKTNTOXBSHRUMZHTQIGJSLYVHGVJKFDCVLULQZAAPHDQMLADFOEFFFXHMEHUELWYTXRSGIMERIIDSZPNRXZVHSRSBYCVRVSPAVCNCRATTB");

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
    msg.setTimeStamp(0.7267284682523998);
    msg.setSource(45122U);
    msg.setSourceEntity(175U);
    msg.setDestination(21715U);
    msg.setDestinationEntity(138U);
    msg.name.assign("WWJFUPJFQFKUMVKRFKKSCYAAJUAVIRUCYIHHCCZNWQQOTEXGDBJWPCGMTTKCGAHTGDKNGBOAEBPVNXWJKQSNSRERFWMGWBADIQIWMYILXDQOOVDXLRZPNGSTUXVYKFXGECOHHLLXQJNCSYZS");

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
    msg.setTimeStamp(0.4890356009740716);
    msg.setSource(8994U);
    msg.setSourceEntity(254U);
    msg.setDestination(32263U);
    msg.setDestinationEntity(164U);
    msg.type = 36U;
    msg.error.assign("ECDWJFCEWUFXXOQVAYBDQVDGTKHFJWNHJUHMITOKLYAOZAQQCWNSLTYQHZCRQOAXZIYGDEYFHWCRSFDIBLAPUAPJVEEMSLPRFNMSUMHRIFUTRHDSSDIPEBJVQYYGUZPGPMTEPUBNSZCHEOVNBTFRXFGDTRRCLLZWTOKJZZAGQPSVRBWMLHNPMDMJGYBM");

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
    msg.setTimeStamp(0.7839896795470181);
    msg.setSource(19258U);
    msg.setSourceEntity(224U);
    msg.setDestination(53471U);
    msg.setDestinationEntity(249U);
    msg.type = 119U;
    msg.error.assign("POIBWQZCENAPNQCZVJIATDHLFRYWUKUILWLFVULKMZGEZNALHNICRZCSXCBKRVDBWTQKLVNFXSFLTJBSHAMGYNSGYCBVENQMRXNSDMOLQXZUXMPTPPANUABJTBRBFTREYPXEELYEAHKEQMHJGKQPFFJIMJESVTGOQHWXKQDKYNVOGIDDFZDXUWRUIOXBUSHYYFBDCSQOL");

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
    msg.setTimeStamp(0.8945172480712262);
    msg.setSource(57104U);
    msg.setSourceEntity(21U);
    msg.setDestination(1920U);
    msg.setDestinationEntity(103U);
    msg.type = 17U;
    msg.error.assign("LZYASKQJOQXQHEAQRCTAGFGIQYLVGAOQDPKVDASJTVHGRSZRXLMVAWNKFUPRHFPNICYZWVHFZYTHROYORBZEXBKEXJMHYCDMDSTTUWLVKJPVRDOKXPUNOMQGITCIDWBKJINUTMJYXNGLGBZIOUFHASAJKSAEMWCEUEUCBDQPSZSEEUFXDGITEKHMOYKBFNDWXMMBHONSBCPHIJNZFQOPQLCNGVJRTWG");

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
    msg.setTimeStamp(0.867763400945086);
    msg.setSource(17406U);
    msg.setSourceEntity(190U);
    msg.setDestination(48555U);
    msg.setDestinationEntity(116U);
    msg.seq = 29086U;
    msg.sys_dst.assign("NPZFBUHAZNJKLNFEIAZVCALYVGYECUGMHWOMKYGRMLGYIXWDRFIMSGLIPXSZURSDUUJTLBBLAQKHEPHFUMOTPACUTACWWZXFYOHCLQJJQJJGACHKKVNHWDBTZNIYKJQJZPENGZJVEBXAUVYPGLBXCMFFRYSRIHYFTDBGDJFSDRDDOWMKVQQOKNVSOICLMGUHSMAUIDXPSCIXTROBWZIXRRZNNOEEKFPWCSRNOTOVTVWLQEVX");
    msg.flags = 233U;
    const signed char tmp_msg_0[] = {-22, -40, -103, -22, -61, -76, 41, 70, 7, 77, -44, 62, 77, 45, 53, 70, -4, -57, -111, -55, 54, -118, 24, 110, -2, 121, 96, 122, 56, -31, -34, -48, -16, 85, -22, 72, 6, 112, -85, 4, 19, -25, 12, 98, -118, 60, -124, 16, 91, 113, -35, -117, 111, 123, -71, -41, -46, 69, -118, -26, 80, 77, 56, -34, -38, 50, 56, 65, -96, 105, 53, -100, -64, 76, -78, 109, -61, -34, -38, -75, -120, 36, -11, 29, 1, -68, -81, -17, 25, -43, 63, -19, -41, 65, -56, -61, 119, 102, -127, -59, -53, -97, -30, 32, -34, -15, -128, 49, -49, -61, -96, -20, -62, 12, -58, 126, -73, -51, 38, -80, 51, 18, 78, 66, 29, -93, 6, -75, 3, 108, 122, 2, -116, 52, 113, -46, 74, 53, -42, 34, -126, -111, 17, 19, 89, 113, 91, 72, 11, -15, 24, 36, -101, -9, -81, -118, -122, 95, -35, -93, 79, -120, 85, 36, -94, -107, -105, 74};
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
    msg.setTimeStamp(0.22534350432016992);
    msg.setSource(33173U);
    msg.setSourceEntity(148U);
    msg.setDestination(60456U);
    msg.setDestinationEntity(102U);
    msg.seq = 32341U;
    msg.sys_dst.assign("WFAXAPNPMSEOYZUFQYITXEDBLSUKSKZESZBVHPILLXRATXJRMKYJWMGVNJCFTONDCSPWFIIASWEYADCXKLFHIUJVRHOWKOTMUJB");
    msg.flags = 45U;
    const signed char tmp_msg_0[] = {70, -4, 54, 103, 50, 93, -128, -116, -23, 53, -86, -21, 11, -127, -13, -106, -75, 47, -71, 112, -101, -83, 87, 0, 26, 123, -49, -55, -4, -87, -31, 24, -4, 32, 103, -23, 115, 90, -83, 104, -55, -101, -49, 94, -45, -36, -71, 25, 87, -106, 70, 85, 115, -44, 35, 94, 6, -83, 125, 85, 91, 85, 28, 108, 121, 71, -64, -69, 102, -67, 38, 114, -83, -78, 32, -6, 98, 114, 83, 118, -118, -72, -66, -75, 101, 27, -56, -70, -18, -83, 30, 98, 50, -121, 85, -23, 35, 29, -99, -104, -61, 67, -108, 121, 104, 7, 103, 89, 47, 59, 21, -73, 44, 52, -125, 109, -79, 87, -117, 24, 41, 57, -69, -125, -111, 94, -122, -75, -87, 53, -13, 65, 37, 16, 99, 64, 45, -3, 95, -39, 121, 69, 71, -99, 20, 8, 87, -4, -66, -124, 75, 30, -60, -28, 82, 20, 107, 16, 37, 47, -83, -77, -17, 89, 101, 115, 16, -90, 0, -27, 42, -33, -12, 116, 83, 87, -113, 80, 29, -83, -110, 47, -41, -77, 70, -56, -96, 101, -120, 98, -26, -64, -40, -57, 37, 111, 11, -40, 7, 10, -27};
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
    msg.setTimeStamp(0.510523194188814);
    msg.setSource(53118U);
    msg.setSourceEntity(221U);
    msg.setDestination(63283U);
    msg.setDestinationEntity(140U);
    msg.seq = 7845U;
    msg.sys_dst.assign("UBGGCNFXPICWYOIEHVDHDBAEVDZVXHGRDMRFVAYISYCWLPS");
    msg.flags = 73U;
    const signed char tmp_msg_0[] = {-40, -117, 81, -125, 57, 86, -85, -23, -106, 39, 117, -2, 80, -17, 63, 111, -26, 41, -23, 86, 92, -12, 101, -34, 88, 56, 62, 45, 89, -112, 113, -25, 55, -70, -113, -72, -75};
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
    msg.setTimeStamp(0.6705124465661261);
    msg.setSource(45616U);
    msg.setSourceEntity(243U);
    msg.setDestination(64837U);
    msg.setDestinationEntity(24U);
    msg.sys_src.assign("XSCVBKMKJJVOZ");
    msg.sys_dst.assign("ANQGOSQNHYGKELKRNAQJXJIMUYAMJEZGBRWFULYCMLSVRHXQVZGYQVSEBRCDOBZMQIRYWAGSKAZAXPDCOXDWFIQHRLOSDYLDOIOWRIPZJLHMEOUKLNNZMKJTXSFPNVQWJRFBLBEPDFCXGQTKRSSAYIUPSGUBCVBITZMYCGXNKTEINNMVACPCFTSWVDBVVHKLZQHCPHXNEDTIZOVDKIJFEXTGUBJTJUPYZMCFTWDWPURHEBKMHJEOLXGOAWPFT");
    msg.flags = 101U;
    const signed char tmp_msg_0[] = {-87, 108, 69, -49, -112, 28, 42, -116, 31, 1, -20, -3, -48, -23, 120, -88, -14, 86, 31, 49, -26, -89};
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
    msg.setTimeStamp(0.3819355909315223);
    msg.setSource(28902U);
    msg.setSourceEntity(48U);
    msg.setDestination(39751U);
    msg.setDestinationEntity(195U);
    msg.sys_src.assign("DBDIAYIVMGKTBYKWOJZHPBTQOSMVIJSXSOOAEGHYMZWCJGYLZ");
    msg.sys_dst.assign("HWTMKIWKHVVPRUOQEHYTZUPEHDXYDVLUNUKXQLEGFVVJLPGJWKDFWYQCFJTPHNNJBKRTKJJFROUHTGNWNRRGXIWJAOTRPDNEOBNEQRXSYNCQGBZRBBKAZMLXSZGBZDAETBUSNAHULIEQGVA");
    msg.flags = 18U;
    const signed char tmp_msg_0[] = {-56, -94, -123, 83, 23, -30, 14, -124, 70, -127, 31, -108, -13, -43, -83, -99, -65, -10, 57, -113, 67, -98, 43, 28, -105, -2, 97, -64, 116, 119, -6, -72, 121, -57, 15, -86, -103, -23, 105, 107, -61, -6, 100, -101, -102, 63, -123, 2, 52, 82, -67, -11, 78, -27, 17, 58, -117, -40, 66, 100, -1, 59, -17, -48, 44, -29, -51, 71, 7, -83, 74, -77, 57, 105, 123, -35, 101, 91, 68, 27, 64, -103, 12, -4, 59, -98, -104, 46, 101, 37, 21, 66, -89, -106, 36, -86, 32, -112, -45, 34, -22, -73, 85, 35, 40, -24, 95, 115, -26, 10, -84, -95, 88, -6, -87, 18, 61, -87, 110, -76, 83, 83, -11, -48, 24, 45, -79, -41, -66, 49, -9, -42, 24, -57, 88, 71, -112, -100, -122, 96, -6, -101, 35, -109, 111, -92, 8, 42, -8, 47, -126, 124, 8, -123, -15, -92, -77, 24, 90, -98, -31, 34, 25, 0, 70, -40, -117, 88, -125, 68, 84, -51, 63, -77, 50, 103, 28, 111, 79, -49, 83, -55, 101, 19, 84, -86, -50, 113, -43, 52, -51, -113, -45, -121, -61, 21, -55, 97, -39, -119, -128, 35, 78, -20, 31, -118, 68, -9, 37, -48, 6, 57, 94, -56, -57, 82, 50, -125, 37, 74, -82, -46, 98, -60, 123, -120, -8, -81, 17, -121, 117, 43, -86, 66, 25, 38, 64, -111};
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
    msg.setTimeStamp(0.30050518682183835);
    msg.setSource(10072U);
    msg.setSourceEntity(217U);
    msg.setDestination(8466U);
    msg.setDestinationEntity(179U);
    msg.sys_src.assign("RCWLQWXWDRMXOWOXTCXZDZZLTEBNRUKHKPRTDMDFTNLKJUPHYLDTHUJQUAWECGGNSBISAJONYRJWEJFNQYUKZBVMALLEPQVNKWEGLFMJZGFQVOQHMVMIYTEHYDAIVGBTEXRJDPIFGMAZKDJXTBLLDGCHOJQKBOFUVIGSACKUIBDWEABAPECPFFMROYSYQFPUANZWKHVUSECMSYTYVBISAXMNSPWFPSOICSHNOLUGKP");
    msg.sys_dst.assign("UJRZAERWODOZYWMVXHFMAEOBNXFUCKEDDSUGGTDICWRDDBKI");
    msg.flags = 229U;
    const signed char tmp_msg_0[] = {-126, -98, 15, 4, 49, 57, 39, -123, 14, -30, -72, -12, 126, 124, 79, -14, -115, -14, 94, 117, -42, -60, 92, -18, 62, -44};
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
    msg.setTimeStamp(0.7442485007623271);
    msg.setSource(58953U);
    msg.setSourceEntity(181U);
    msg.setDestination(43060U);
    msg.setDestinationEntity(104U);
    msg.seq = 14830U;
    msg.value = 138U;
    msg.error.assign("CXNENAYJTSQBRQTHUWGYZVJVSHQAEKYGVULW");

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
    msg.setTimeStamp(0.28505866117428535);
    msg.setSource(4752U);
    msg.setSourceEntity(98U);
    msg.setDestination(16979U);
    msg.setDestinationEntity(235U);
    msg.seq = 49452U;
    msg.value = 69U;
    msg.error.assign("PCWDFULJNRXCSSOYERBSFXLVQSZLQGRFKQGXXCICUKZBVVYPPCTSMTQYMAWLXQVBNAGWDFTVIKTOHUUGUEMUGYBDITRCDIZHVZPKJMLNAZMCJEZSEBXRFVOPSENCLHDOHIYKDABZMWUOTPBKERNOIJFSNYBYEJNPZOGARWHFGTVGAKSEMIQIGYLIUHUNDWKZYWPOIFRWLXJBOKNFTWPFOUDRTSJWQNKJHEGCMHR");

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
    msg.setTimeStamp(0.5200352724116633);
    msg.setSource(45471U);
    msg.setSourceEntity(153U);
    msg.setDestination(4928U);
    msg.setDestinationEntity(169U);
    msg.seq = 19600U;
    msg.value = 158U;
    msg.error.assign("NUEBDVUICISOKGXJTAJLZPDYQYVCAWFTIBFNHSRFVLNPBJNGVVYCHURQRDYDYXVPSHVXWEBGRHOTISICLNKJCQERWIMRNASNIMLRKJGSGHR");

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
    msg.setTimeStamp(0.05250668936469216);
    msg.setSource(5642U);
    msg.setSourceEntity(51U);
    msg.setDestination(6357U);
    msg.setDestinationEntity(252U);
    msg.seq = 5290U;
    msg.sys.assign("EZXQIVCXONVFTXWFBKGCVGNRNKCRDZCMMPIOMTAUVYMQEZDKTLPMUOQSNKHRPWCDBJBKAZOYHUBUGWTBIQEQCFOCHFNESLYOLZUTGNSYSRHNIKVVKQEVUEMXSSTPDIUAMGYPVCTLASTWPAQYWDREOUPRMZMKLZNGIYVOIADLHYFTHANGWJOEPJKTSFMLX");
    msg.value = 0.21272777956394906;

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
    msg.setTimeStamp(0.1793292537709923);
    msg.setSource(2275U);
    msg.setSourceEntity(66U);
    msg.setDestination(46928U);
    msg.setDestinationEntity(70U);
    msg.seq = 35631U;
    msg.sys.assign("RWIKGTIUXOAVZILFVHZAHUIARBTUHUYHLPRENNIGRAHQFDZTIOCNEOZROSJCHDKCCNXFDLFBPXM");
    msg.value = 0.9377385742595294;

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
    msg.setTimeStamp(0.5515832245781974);
    msg.setSource(40674U);
    msg.setSourceEntity(72U);
    msg.setDestination(59875U);
    msg.setDestinationEntity(6U);
    msg.seq = 48480U;
    msg.sys.assign("UAFUGFKBMDSIMNKOKFPCCSYAFHAILLHCDBRZGMQTPRQQFRTBMRQUHEEVWUTVLYKABBLHMGAWKYIDVYHFGZVWYNIEHJLIOBNOSAXDUJZCXXNYMMYKCPTZTJCVLMSIBQGPZXQWHUFDZLXPBCLHPREOPITDNJIWHVJQTWQLAOZGOVUWNOVXSVNAXRRMQVNJ");
    msg.value = 0.9582295549639428;

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
    msg.setTimeStamp(0.5849916707163862);
    msg.setSource(24747U);
    msg.setSourceEntity(202U);
    msg.setDestination(35299U);
    msg.setDestinationEntity(251U);
    msg.seq = 10026U;
    msg.sys_dst.assign("YEWLUVIUHLJVVOYFKBXCYZAZWAECHBDMDFEDQIIIMQPVXVXHFRCDGEZIFIVKKLQWGARTZTPQLBOCIQJTZTRNGQMKORPTVHBNIBNKHOHEMQQKQOZRAJCCAXTBJY");
    msg.timeout = 0.6221437798042607;

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
    msg.setTimeStamp(0.4902556763176087);
    msg.setSource(15082U);
    msg.setSourceEntity(13U);
    msg.setDestination(36829U);
    msg.setDestinationEntity(89U);
    msg.seq = 5954U;
    msg.sys_dst.assign("QFRPGORSFQPTVPCAYDSDOCVZHRCJNBQAKJNDLKYQLSAOWXHMXECKDMCJONXMPJPVZDGRSILWLGOOGKZLWIAKWFBMGWFAHGOEXHBPFNUPTTFOYNHBUUHZERIYMPIHXQUMDWAVCYTAEMRBJCZBSIJQEEKKNFLIXUQEZXXAVXJXWVRNKMZSUPJYWJZSWVGHNONETQMLEILUGIDAVMDGQTYURQJKOBRITVEYBCDTSWLZTVDYSCAFUCHGKS");
    msg.timeout = 0.8796774141686083;

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
    msg.setTimeStamp(0.2979081205807219);
    msg.setSource(13358U);
    msg.setSourceEntity(194U);
    msg.setDestination(43061U);
    msg.setDestinationEntity(57U);
    msg.seq = 13408U;
    msg.sys_dst.assign("RGJZINCSZFNBQUPZACFMMXZICLZVOOXWGMPEVKTFVNPYKDLSIYIOIIAUQMDHEMRMAAJOLWFEITFYNUZDMBPBPLGPVXEDTHDUBHBWKCSJJABDVWTXIOAJRUIUEM");
    msg.timeout = 0.5237125486201585;

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
    msg.setTimeStamp(0.31973230970883804);
    msg.setSource(2750U);
    msg.setSourceEntity(198U);
    msg.setDestination(13298U);
    msg.setDestinationEntity(37U);
    msg.action = 194U;
    msg.longain = 0.006672804392113929;
    msg.latgain = 0.014109457345665155;
    msg.bondthick = 468007333U;
    msg.leadgain = 0.27074179989667013;
    msg.deconflgain = 0.4776238449974799;

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
    msg.setTimeStamp(0.01000492347670312);
    msg.setSource(53025U);
    msg.setSourceEntity(170U);
    msg.setDestination(61872U);
    msg.setDestinationEntity(27U);
    msg.action = 123U;
    msg.longain = 0.827806453196199;
    msg.latgain = 0.409283785267921;
    msg.bondthick = 415473326U;
    msg.leadgain = 0.39801693643242053;
    msg.deconflgain = 0.2973883915789227;

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
    msg.setTimeStamp(0.6291429259276626);
    msg.setSource(18053U);
    msg.setSourceEntity(236U);
    msg.setDestination(45135U);
    msg.setDestinationEntity(38U);
    msg.action = 57U;
    msg.longain = 0.8966547120502282;
    msg.latgain = 0.7082360329873219;
    msg.bondthick = 1741444600U;
    msg.leadgain = 0.12306615783634733;
    msg.deconflgain = 0.9328709928808483;

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
    msg.setTimeStamp(0.2673873967789855);
    msg.setSource(23472U);
    msg.setSourceEntity(9U);
    msg.setDestination(13687U);
    msg.setDestinationEntity(107U);
    msg.err_mean = 0.9140673241039993;
    msg.dist_min_abs = 0.8903506894797537;
    msg.dist_min_mean = 0.42648047758698293;

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
    msg.setTimeStamp(0.5328072192608803);
    msg.setSource(43970U);
    msg.setSourceEntity(106U);
    msg.setDestination(40091U);
    msg.setDestinationEntity(53U);
    msg.err_mean = 0.9424354069890081;
    msg.dist_min_abs = 0.16033896739453202;
    msg.dist_min_mean = 0.5963290615973118;

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
    msg.setTimeStamp(0.8453407804868096);
    msg.setSource(42639U);
    msg.setSourceEntity(73U);
    msg.setDestination(9005U);
    msg.setDestinationEntity(170U);
    msg.err_mean = 0.8751994294601246;
    msg.dist_min_abs = 0.5125606270082287;
    msg.dist_min_mean = 0.4204327695234741;

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
    msg.setTimeStamp(0.7968570160302321);
    msg.setSource(8187U);
    msg.setSourceEntity(12U);
    msg.setDestination(41671U);
    msg.setDestinationEntity(56U);
    msg.action = 153U;
    msg.lon_gain = 0.6539563572416803;
    msg.lat_gain = 0.4933239577228056;
    msg.bond_thick = 0.0019731092974331066;
    msg.lead_gain = 0.8252238817290415;
    msg.deconfl_gain = 0.5292330959490057;
    msg.accel_switch_gain = 0.8283045506832856;
    msg.safe_dist = 0.838128569442977;
    msg.deconflict_offset = 0.4577401701854915;
    msg.accel_safe_margin = 0.15000678512314425;
    msg.accel_lim_x = 0.21418778657390647;

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
    msg.setTimeStamp(0.9104652421579135);
    msg.setSource(59279U);
    msg.setSourceEntity(119U);
    msg.setDestination(16629U);
    msg.setDestinationEntity(109U);
    msg.action = 24U;
    msg.lon_gain = 0.8299485658444344;
    msg.lat_gain = 0.04915140642484739;
    msg.bond_thick = 0.3496179489205319;
    msg.lead_gain = 0.11457681977632495;
    msg.deconfl_gain = 0.6439836640193864;
    msg.accel_switch_gain = 0.8371043015704102;
    msg.safe_dist = 0.9145648086105795;
    msg.deconflict_offset = 0.4226222816417512;
    msg.accel_safe_margin = 0.7602658472828712;
    msg.accel_lim_x = 0.7782204829156049;

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
    msg.setTimeStamp(0.7180213273900208);
    msg.setSource(8803U);
    msg.setSourceEntity(126U);
    msg.setDestination(44449U);
    msg.setDestinationEntity(246U);
    msg.action = 194U;
    msg.lon_gain = 0.016166085446313372;
    msg.lat_gain = 0.5644168460756582;
    msg.bond_thick = 0.33741512169313437;
    msg.lead_gain = 0.1340600944621716;
    msg.deconfl_gain = 0.3521114799829109;
    msg.accel_switch_gain = 0.04122752056726142;
    msg.safe_dist = 0.465240444587419;
    msg.deconflict_offset = 0.6523865492963531;
    msg.accel_safe_margin = 0.5587825192711152;
    msg.accel_lim_x = 0.9126128819551129;

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
    msg.setTimeStamp(0.5837028762621675);
    msg.setSource(20774U);
    msg.setSourceEntity(191U);
    msg.setDestination(30202U);
    msg.setDestinationEntity(142U);
    msg.type = 7U;
    msg.op = 195U;
    msg.err_mean = 0.6669269419263295;
    msg.dist_min_abs = 0.10272286896605287;
    msg.dist_min_mean = 0.8358456551532836;
    msg.roll_rate_mean = 0.47708871289362054;
    msg.time = 0.44990227449827713;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 0U;
    tmp_msg_0.lon_gain = 0.9997077260665335;
    tmp_msg_0.lat_gain = 0.2494014703873486;
    tmp_msg_0.bond_thick = 0.818075845634859;
    tmp_msg_0.lead_gain = 0.962783741639582;
    tmp_msg_0.deconfl_gain = 0.5862893042789789;
    tmp_msg_0.accel_switch_gain = 0.07202053848359302;
    tmp_msg_0.safe_dist = 0.3417622590565341;
    tmp_msg_0.deconflict_offset = 0.7381483066448133;
    tmp_msg_0.accel_safe_margin = 0.7266290639899197;
    tmp_msg_0.accel_lim_x = 0.6677959440361294;
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
    msg.setTimeStamp(0.8388582732591483);
    msg.setSource(38730U);
    msg.setSourceEntity(105U);
    msg.setDestination(55580U);
    msg.setDestinationEntity(169U);
    msg.type = 222U;
    msg.op = 207U;
    msg.err_mean = 0.19738771956695222;
    msg.dist_min_abs = 0.9982762344894955;
    msg.dist_min_mean = 0.22904150717012772;
    msg.roll_rate_mean = 0.8689280345351679;
    msg.time = 0.8535946908217782;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 116U;
    tmp_msg_0.lon_gain = 0.961980177270324;
    tmp_msg_0.lat_gain = 0.7904857518725865;
    tmp_msg_0.bond_thick = 0.5587632748811077;
    tmp_msg_0.lead_gain = 0.13378374847502983;
    tmp_msg_0.deconfl_gain = 0.8165748162972928;
    tmp_msg_0.accel_switch_gain = 0.9403240918579533;
    tmp_msg_0.safe_dist = 0.045781465030905966;
    tmp_msg_0.deconflict_offset = 0.6180845660484211;
    tmp_msg_0.accel_safe_margin = 0.6585810610219185;
    tmp_msg_0.accel_lim_x = 0.06192710538491797;
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
    msg.setTimeStamp(0.7442197607991123);
    msg.setSource(32050U);
    msg.setSourceEntity(74U);
    msg.setDestination(62701U);
    msg.setDestinationEntity(161U);
    msg.type = 50U;
    msg.op = 43U;
    msg.err_mean = 0.6631681886827058;
    msg.dist_min_abs = 0.20531210824200685;
    msg.dist_min_mean = 0.9105002342077604;
    msg.roll_rate_mean = 0.043588156505838915;
    msg.time = 0.6707198721387984;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 146U;
    tmp_msg_0.lon_gain = 0.07914834730774922;
    tmp_msg_0.lat_gain = 0.29501030420509466;
    tmp_msg_0.bond_thick = 0.3293935459543872;
    tmp_msg_0.lead_gain = 0.26730008657395155;
    tmp_msg_0.deconfl_gain = 0.09607730344602039;
    tmp_msg_0.accel_switch_gain = 0.948803211795562;
    tmp_msg_0.safe_dist = 0.12740971864576056;
    tmp_msg_0.deconflict_offset = 0.18583785372913186;
    tmp_msg_0.accel_safe_margin = 0.1549224502384946;
    tmp_msg_0.accel_lim_x = 0.38891787606283723;
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
    msg.setTimeStamp(0.07720408319056904);
    msg.setSource(27999U);
    msg.setSourceEntity(55U);
    msg.setDestination(32045U);
    msg.setDestinationEntity(151U);
    msg.lat = 0.9456435472205995;
    msg.lon = 0.8560742170803455;
    msg.eta = 2374930307U;
    msg.duration = 28161U;

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
    msg.setTimeStamp(0.7092096348447378);
    msg.setSource(44679U);
    msg.setSourceEntity(242U);
    msg.setDestination(45603U);
    msg.setDestinationEntity(205U);
    msg.lat = 0.0020982552114414688;
    msg.lon = 0.1334312335503901;
    msg.eta = 2434469812U;
    msg.duration = 11487U;

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
    msg.setTimeStamp(0.8066728376994176);
    msg.setSource(4793U);
    msg.setSourceEntity(133U);
    msg.setDestination(61705U);
    msg.setDestinationEntity(60U);
    msg.lat = 0.07215025781711204;
    msg.lon = 0.6635437616128823;
    msg.eta = 1986636501U;
    msg.duration = 57146U;

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
    msg.setTimeStamp(0.8775637613861547);
    msg.setSource(5320U);
    msg.setSourceEntity(156U);
    msg.setDestination(30713U);
    msg.setDestinationEntity(57U);
    msg.plan_id = 21513U;

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
    msg.setTimeStamp(0.25826944537452856);
    msg.setSource(9532U);
    msg.setSourceEntity(145U);
    msg.setDestination(31385U);
    msg.setDestinationEntity(169U);
    msg.plan_id = 6334U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.85866892772943;
    tmp_msg_0.lon = 0.4119423013528515;
    tmp_msg_0.eta = 4073867464U;
    tmp_msg_0.duration = 22894U;
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
    msg.setTimeStamp(0.7051755545450742);
    msg.setSource(65389U);
    msg.setSourceEntity(83U);
    msg.setDestination(33491U);
    msg.setDestinationEntity(55U);
    msg.plan_id = 60862U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.4233613181850697;
    tmp_msg_0.lon = 0.7303062295928858;
    tmp_msg_0.eta = 419667983U;
    tmp_msg_0.duration = 8491U;
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
    msg.setTimeStamp(0.49172339968858225);
    msg.setSource(47700U);
    msg.setSourceEntity(171U);
    msg.setDestination(32341U);
    msg.setDestinationEntity(133U);
    msg.type = 57U;
    msg.command = 36U;
    msg.settings.assign("RCTNFNJERXJAHBZSYKAFUKTTHWAROGMTVI");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 14238U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.9546821804174351;
    tmp_tmp_msg_0_0.lon = 0.2765343371208665;
    tmp_tmp_msg_0_0.eta = 3644854838U;
    tmp_tmp_msg_0_0.duration = 6256U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("CUMAJZOPGRIFGNMJOKRWBQIVFJZXAZITCKUMAGTWNUJIQPNRCNPJZNWXOJDPACAYUTRPFVQISXSAQDWZDETXHRCVFBYRGMUHPYBRMYGOWJUVNYYZDWKJTEMTHITKDCIGDABAHEOWCPGSHKIGXEXYRIVWFCHXUEFTNMAGKQIGOLSXHFLHQODQBFTSXBPDOBMLELHNQOLOZA");

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
    msg.setTimeStamp(0.3708948802902998);
    msg.setSource(45919U);
    msg.setSourceEntity(217U);
    msg.setDestination(38929U);
    msg.setDestinationEntity(56U);
    msg.type = 251U;
    msg.command = 177U;
    msg.settings.assign("LVTMVCZTGEIUHKIKKVDURFFJAIWPQSZNLIBOSUAJKIRLYRJVACEFBEAFYFILUHFQCGLEDEBZCQHHOFQDNPUZIJWDWPQLAMPHSTTPJVAPWDXXMUMOEMG");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 14447U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.14555115195877244;
    tmp_tmp_msg_0_0.lon = 0.23013737481928165;
    tmp_tmp_msg_0_0.eta = 1482752327U;
    tmp_tmp_msg_0_0.duration = 13296U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("LUNPUAGBIDTWQEHDTVLPSFOILBQDLAOFIPRSIYUBMGAZPKEQSMIJH");

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
    msg.setTimeStamp(0.022101364845798832);
    msg.setSource(63808U);
    msg.setSourceEntity(66U);
    msg.setDestination(50761U);
    msg.setDestinationEntity(114U);
    msg.type = 170U;
    msg.command = 93U;
    msg.settings.assign("PBWEHOPBTUEEJWNBGLQLNYQZVQAMGSXWSWSFAJGBZAPDMFUZFMKRRISDRJJRUCILUGUWDSOFLEHTOFONYJQBAIPOVAYLSXCUCUCNMFKYZBBDEORSKUWJGNTVNWQRMTIBDVXAIECHSHMFIJRVDLTQTQTNLCSKIJDZDOSKXCTPKHNJYKCEVRQDFGTCNRPLXOIXG");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 34848U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.16975556506790812;
    tmp_tmp_msg_0_0.lon = 0.5574721126861837;
    tmp_tmp_msg_0_0.eta = 639855200U;
    tmp_tmp_msg_0_0.duration = 46101U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("UYLYRJZGZJDCAWUCMXPZNRDNDTXNYYBMUHMLCPONEENFVKVCVYJHTPTIXBWHRIAIGQIASQXGNDXTWWXNAPDHVGLPSMALETUOQBMTRGKFOVV");

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
    msg.setTimeStamp(0.04653341268232247);
    msg.setSource(36356U);
    msg.setSourceEntity(62U);
    msg.setDestination(26180U);
    msg.setDestinationEntity(186U);
    msg.state = 145U;
    msg.plan_id = 47475U;
    msg.wpt_id = 46U;
    msg.settings_chk = 29897U;

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
    msg.setTimeStamp(0.9724247156646247);
    msg.setSource(25790U);
    msg.setSourceEntity(95U);
    msg.setDestination(22357U);
    msg.setDestinationEntity(52U);
    msg.state = 198U;
    msg.plan_id = 58761U;
    msg.wpt_id = 219U;
    msg.settings_chk = 30807U;

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
    msg.setTimeStamp(0.5708153180990042);
    msg.setSource(3837U);
    msg.setSourceEntity(234U);
    msg.setDestination(35496U);
    msg.setDestinationEntity(157U);
    msg.state = 1U;
    msg.plan_id = 15666U;
    msg.wpt_id = 75U;
    msg.settings_chk = 2101U;

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
    msg.setTimeStamp(0.7334463925173026);
    msg.setSource(35753U);
    msg.setSourceEntity(66U);
    msg.setDestination(61387U);
    msg.setDestinationEntity(242U);
    msg.uid = 158U;
    msg.frag_number = 227U;
    msg.num_frags = 33U;
    const signed char tmp_msg_0[] = {-73, -6, 66, 27, 23, 12, -25, -48, -7, 122, -109, -12, 73, 121, 92};
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
    msg.setTimeStamp(0.2141059227307358);
    msg.setSource(51660U);
    msg.setSourceEntity(211U);
    msg.setDestination(35725U);
    msg.setDestinationEntity(107U);
    msg.uid = 38U;
    msg.frag_number = 141U;
    msg.num_frags = 183U;
    const signed char tmp_msg_0[] = {-29, 88, 78, -100, -124, -116, 84, 55, -103, 84, 103, 103, 36, 51, 93, 47, -117, 121, 110, 48, -47, 15, 66, -64, -12, 80, -73, -37, 96, -93, 59, -46, -84, -56, 60, 41, -20, 49, -94, -45, 121, -70, 93, 60, -99, -78, 55, 17, -53, 60, 69, 96};
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
    msg.setTimeStamp(0.8455675507673542);
    msg.setSource(40013U);
    msg.setSourceEntity(129U);
    msg.setDestination(2552U);
    msg.setDestinationEntity(26U);
    msg.uid = 168U;
    msg.frag_number = 166U;
    msg.num_frags = 74U;
    const signed char tmp_msg_0[] = {-80, -31, -105, 96, 41, 42, 30, -10, 52, -50, -55, -12, 126, -60, -71, -33, 68, -88, 64, 36, 48, 53, -109, 103, -18, -42, -25, -119, -8, -111, -35, -76, -41, 82, -10, -6, 87, -115, -39, -31, -80, -21, -49, -39, -8, 121, 51, -34, -108, -107, -31, -127, -95, 17, 92, 3, 123, -6, -127, -9, 114, -110, 75, 17, 87, -89, 9, 7, 14, 116, -64, 55, 126, -57, 67, -17, -60, 73, -91, -51, 15, -45, 30, 111, -126, 91, 89, 113, -64, -100, -72, -123, 29, 13, 39, -109, -34, -102, 103, 102, -103, -40, -20, -125, 38, -119, 55, -39, -86, 40, 25, -28, 100, 112, -1, -7, 65, -10, 43, -7, 39, -57, 77, 125, 50, 43, -120, 29, 99, 22};
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
    msg.setTimeStamp(0.26084018695749445);
    msg.setSource(63138U);
    msg.setSourceEntity(222U);
    msg.setDestination(59794U);
    msg.setDestinationEntity(167U);
    msg.content_type.assign("ACFORBGDZMDSQHEKPMMAIMGXGRJMTDWSINDCCENLGNOFQZKXOYCYYSOJSFHTGESBCORJUNNJPDRBKOZKKINHEIAYXJHVLFOWZQNAXVXZRM");
    const signed char tmp_msg_0[] = {-16, 7, 10, -109, 110, 2, 27, 21, -50, -107, -26, 6, -104, 118, -75, -38, 53, 58, 83, 21, 84, -38, 85, 44, -98, -72, 102, 23, 93, 63, 69, 110, -59, -28, 91, -125, -3, -117, -9, 123, 34, 104, -114, -64, 80, 111, -65, -64, -16, 84, -4};
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
    msg.setTimeStamp(0.5526376755998972);
    msg.setSource(29765U);
    msg.setSourceEntity(201U);
    msg.setDestination(48568U);
    msg.setDestinationEntity(81U);
    msg.content_type.assign("ROMZOIHWDWMVNEMQWBDOGMPUSNFIWYEEXCGSYFAKFHYMAUEOSWDQGBOCPSAE");
    const signed char tmp_msg_0[] = {54, -87, 69, 4, -51, -106, -22, -73, -84, 58, 100, -75, 123, 36, 100, 115, 2, 72, -100, 15, 58, 75, 110, -26};
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
    msg.setTimeStamp(0.03239423569621258);
    msg.setSource(1059U);
    msg.setSourceEntity(84U);
    msg.setDestination(13399U);
    msg.setDestinationEntity(218U);
    msg.content_type.assign("LVRTWKIHCJCUBYFFRZNHVSYOIQBBTWGZRGCHJDEMUXMOJUDYBTDGSULWWMFZECXQPFJFXOLICXFSPHHKXCLGLRGFWWAKNQMZBDQOHTLAQKBGZVSYAJOPVTVJAGMTQPDFYEBSXHOQXUNRAHBTMWIWKDPZWHYLIBEKEKLGGYVEPNNHDVDIBMLV");
    const signed char tmp_msg_0[] = {88, 98, -76, -94, -72, 97, -107, 79, -51, -70, -80, -46, -78, 23, -117, -35, -120, -124, -52, -42, -109, -8, -34, 21, 78, 88, 48, 67, 82, 48, 122, -6, -86, -34, -26, -112, 11, 16, -38, 65, 48, -30, -43, 99, -51, -52, 76, -48, 98, 90, 44, 52, 111, 63, 80, -40, -40, 96, 5, -68, -105, 22, 42, -126, -56, 30, 65, 114, -116, 113, 69, -108, -51, -48, -105, -27, 78, -6, 86, 0, -2, -62, -82, 105, -102, -36, -48, -1, -74, -18, 63, -97, 46, 83, 117, 97, 79, -99, -28, -76, -72, -28, -48, 39, 86, 80, -88, -38, -74, 62, -26, -18, 92, 115, 37, 72, 71, 48, 121, 73, -119, 0, 98, 93, 92, -26, 57, -39, 10, 59, 34, 15, 23, -120, -104, -5, 1, -17, 2, 50, -3, 25, -36, 125, -52, 7, 18, -54, -60, 71, 115, -103, 24, 10, 25, -51, -121, 77, 82, 99, 55, 96, 61, 15, -105, -32, 47, 90, 68, 101, 42, -127, 76, 84, 126, 0, 19, 105, -87, -27, -89, 81, -62, 75, 31, 39, -74, 120, -25, -6, 30, -51, -122, 17, -19, -103, -75, -113, -69, -108, -30, -64, 45, 32, 63, -32, -62, 123, 1, 49, -17, -34, -8, 108, -120, 103, -99, -89, -15, -128, -101, -31, -65, -14, 58, 32, 79};
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
    msg.setTimeStamp(0.4362130440634998);
    msg.setSource(2273U);
    msg.setSourceEntity(42U);
    msg.setDestination(9839U);
    msg.setDestinationEntity(222U);

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
    msg.setTimeStamp(0.15351171385225482);
    msg.setSource(13374U);
    msg.setSourceEntity(142U);
    msg.setDestination(4090U);
    msg.setDestinationEntity(198U);

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
    msg.setTimeStamp(0.845394559719166);
    msg.setSource(44422U);
    msg.setSourceEntity(124U);
    msg.setDestination(30725U);
    msg.setDestinationEntity(168U);

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
    msg.setTimeStamp(0.9408724722485351);
    msg.setSource(60128U);
    msg.setSourceEntity(15U);
    msg.setDestination(22754U);
    msg.setDestinationEntity(20U);
    msg.target = 32628U;
    msg.bearing = 0.25336388798045284;
    msg.elevation = 0.5877597621124294;

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
    msg.setTimeStamp(0.3179059958494831);
    msg.setSource(48446U);
    msg.setSourceEntity(71U);
    msg.setDestination(51399U);
    msg.setDestinationEntity(63U);
    msg.target = 26542U;
    msg.bearing = 0.9971559151341776;
    msg.elevation = 0.8869430517526034;

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
    msg.setTimeStamp(0.1446245278817726);
    msg.setSource(600U);
    msg.setSourceEntity(102U);
    msg.setDestination(12457U);
    msg.setDestinationEntity(239U);
    msg.target = 49501U;
    msg.bearing = 0.6678254983058184;
    msg.elevation = 0.20278247990175502;

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
    msg.setTimeStamp(0.685422480013791);
    msg.setSource(7465U);
    msg.setSourceEntity(26U);
    msg.setDestination(5235U);
    msg.setDestinationEntity(172U);
    msg.target = 41072U;
    msg.x = 0.5264406375515234;
    msg.y = 0.8827410825506855;
    msg.z = 0.2172788190617313;

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
    msg.setTimeStamp(0.3739459508192946);
    msg.setSource(8661U);
    msg.setSourceEntity(83U);
    msg.setDestination(55958U);
    msg.setDestinationEntity(113U);
    msg.target = 84U;
    msg.x = 0.7254023358464337;
    msg.y = 0.732785271559059;
    msg.z = 0.7345200115876835;

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
    msg.setTimeStamp(0.23612897260633892);
    msg.setSource(23459U);
    msg.setSourceEntity(65U);
    msg.setDestination(42042U);
    msg.setDestinationEntity(231U);
    msg.target = 41101U;
    msg.x = 0.12490734281307758;
    msg.y = 0.3673415664598835;
    msg.z = 0.953732319369231;

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
    msg.setTimeStamp(0.6846603562666301);
    msg.setSource(47240U);
    msg.setSourceEntity(89U);
    msg.setDestination(56554U);
    msg.setDestinationEntity(230U);
    msg.target = 25125U;
    msg.lat = 0.6960256272844937;
    msg.lon = 0.5154450281660384;
    msg.z_units = 230U;
    msg.z = 0.5410885757303068;

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
    msg.setTimeStamp(0.629305505148473);
    msg.setSource(52481U);
    msg.setSourceEntity(129U);
    msg.setDestination(25292U);
    msg.setDestinationEntity(42U);
    msg.target = 56633U;
    msg.lat = 0.3120777974207104;
    msg.lon = 0.3515197304168385;
    msg.z_units = 129U;
    msg.z = 0.3568960164608582;

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
    msg.setTimeStamp(0.3392576371234489);
    msg.setSource(52969U);
    msg.setSourceEntity(104U);
    msg.setDestination(30762U);
    msg.setDestinationEntity(147U);
    msg.target = 34612U;
    msg.lat = 0.37250357404531453;
    msg.lon = 0.5696633142201095;
    msg.z_units = 19U;
    msg.z = 0.13044533021412363;

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
    msg.setTimeStamp(0.4761939487578172);
    msg.setSource(63417U);
    msg.setSourceEntity(157U);
    msg.setDestination(55962U);
    msg.setDestinationEntity(193U);
    msg.locale.assign("HRNNHWXRQBLXGCCKLAKFOSCXOVBVDAZWULPQKVLENRWFYMOBHSZOFBDXXCQMIPVACXHDDNITSZJBZEPTYCKUTYARKAVMKPRUMKYRPAYZLMCDINFOFPGYBJDJHUEGEUGBVQLKYDQXYIFEIZMVPULANIBTMHG");
    const signed char tmp_msg_0[] = {-66, 19, 95, -65, 123, 116, 24, 13, 107, 83, 22, -115, 84, -122, 71, 60, -41, -18, 1, 101, -97, -97, 38, -66, 71, -114, -115, -85, -8, -4, -124, 32, -31, -17, 7, -82, -91, -80, -71, -106, 126, 94, -9, 68, 88, 91, -69, 94, -84, -89, 116, 101, -68, -110, -91, -7, -21, -49, -93, -81, 116, 123, 122, 53, -11, 5, -29, 96, 40, -21, 58, 46, -94, -114, -123, -77, 81, -25, 56, -59, -90, 53, 1, 79, 110, -27, -25, 51, -5, -101, 40, -61, 3, -60, -56, -20, 103, 45, 112, -30, 86, 62, 62, -35, 56, -49, -44, 44, -6, -106, -109};
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
    msg.setTimeStamp(0.6940074003101151);
    msg.setSource(56502U);
    msg.setSourceEntity(58U);
    msg.setDestination(51715U);
    msg.setDestinationEntity(208U);
    msg.locale.assign("BGHQBZBOFNDVGVCPEGNYBMVSNXMILPELUBNZJWXLLFLQAXSDGDGRHXWYSSATHLRMPWQIPSKTRSNGUCOVHFIMTCPOZJJCJWBHGECYQRZNJWYYVAKBWEZUBQBADLIUFDFFAQOUAVRTVFKYOEVXKNEGNWTJUCVCARNMPJEFQZ");
    const signed char tmp_msg_0[] = {16, -120, -65, 101, -100, -47, -93, -82, -109, -85, -30, -123, 79, -92, 86, -110, -125, -120, 85, -70, 103, 124, 58, 79, 50, -68, -107, 67, 78, -70, 26, -7, 23, 115, 126, 82, 43, 41, 79, -121, 37, 89, -30, 77, 32, 62, 1, -117, -120, 92, -55, -10, 95, 43, 91, -12, -2, 40, -58, -114, -109, -72, -113, 17, 12, -19, -30, 29, -70, 12, 62, -92, 118, 15, 1, 120, 33, 107, -68, -83, -111, 28, 28, 7, -121, 107, -123, 58, 22, 63, -123, 15, -1, -81, 111, 7, -20, 24, -128, 110, -4, 65, 18, -7, 92, 33, 107, 50, 43, 84, 61, -3, 20, -125, -37, -9, -27, -116, -76, 39, 49, -58, -90, -28, 9, -75, 81, 61, -38, 68, -23, -120, 2, 77, -87, -57, 21, -103, 94, 108, -26, 110, -40, -44, 114, -112, 28, 10, -66, -39, 104, 99, -66, -19, 26, -15, -14, -17, 47, -93, -91, -98, 116, 27, -124, 30, -64, 21, 34};
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
    msg.setTimeStamp(0.45859050188613837);
    msg.setSource(29396U);
    msg.setSourceEntity(16U);
    msg.setDestination(21026U);
    msg.setDestinationEntity(12U);
    msg.locale.assign("UDNEADOQTTDRYGWMIQJLXRUNHOLVKCKDQBMRHCYCIJLALHWZLEUMEAYMURJWNQEKWVCBXBGFGNKBRAUXVTSCVYFOJCPDVMQHUTIKSNMTUQOJQTKSNUSUGJETDPIDSRIMQADNOINTHXPIPWVYEPOAYZDUZKDEZSMCFSHWLORZPWYGCFVFHIBAPKVLHZBARNMBXCXJJTXEPBJKFTFRFQOXLWG");
    const signed char tmp_msg_0[] = {-89, -47, 28, -41, -37, -75, 120, 67, 33, -92, 121, -88, -63, -120, -55, 90, 4, 19, 54, 92, 100, 46, -44, -17, -115, 56, 42, 108, -49, 109, 22, 94, 122, -128, -8, 23, -35, -64};
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
    msg.setTimeStamp(0.7342126237233331);
    msg.setSource(52513U);
    msg.setSourceEntity(211U);
    msg.setDestination(46581U);
    msg.setDestinationEntity(249U);

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
    msg.setTimeStamp(0.850555177683432);
    msg.setSource(21726U);
    msg.setSourceEntity(46U);
    msg.setDestination(40215U);
    msg.setDestinationEntity(201U);

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
    msg.setTimeStamp(0.835982685503156);
    msg.setSource(36047U);
    msg.setSourceEntity(142U);
    msg.setDestination(57209U);
    msg.setDestinationEntity(85U);

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
    msg.setTimeStamp(0.15832416805109917);
    msg.setSource(400U);
    msg.setSourceEntity(61U);
    msg.setDestination(35879U);
    msg.setDestinationEntity(112U);
    msg.camid = 109U;
    msg.x = 19990U;
    msg.y = 29087U;

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
    msg.setTimeStamp(0.8870166385891037);
    msg.setSource(15710U);
    msg.setSourceEntity(127U);
    msg.setDestination(379U);
    msg.setDestinationEntity(22U);
    msg.camid = 170U;
    msg.x = 107U;
    msg.y = 36369U;

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
    msg.setTimeStamp(0.28782867167462534);
    msg.setSource(55279U);
    msg.setSourceEntity(3U);
    msg.setDestination(9138U);
    msg.setDestinationEntity(76U);
    msg.camid = 108U;
    msg.x = 22132U;
    msg.y = 23746U;

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
    msg.setTimeStamp(0.4711571456173209);
    msg.setSource(23854U);
    msg.setSourceEntity(140U);
    msg.setDestination(4844U);
    msg.setDestinationEntity(96U);
    msg.camid = 209U;
    msg.x = 40394U;
    msg.y = 61050U;

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
    msg.setTimeStamp(0.10931337512815509);
    msg.setSource(14608U);
    msg.setSourceEntity(197U);
    msg.setDestination(48317U);
    msg.setDestinationEntity(204U);
    msg.camid = 118U;
    msg.x = 60041U;
    msg.y = 43124U;

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
    msg.setTimeStamp(0.4855357810290264);
    msg.setSource(39393U);
    msg.setSourceEntity(171U);
    msg.setDestination(32646U);
    msg.setDestinationEntity(177U);
    msg.camid = 169U;
    msg.x = 40812U;
    msg.y = 51703U;

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
    msg.setTimeStamp(0.8388049581195172);
    msg.setSource(20445U);
    msg.setSourceEntity(38U);
    msg.setDestination(14115U);
    msg.setDestinationEntity(164U);
    msg.tracking = 136U;
    msg.lat = 0.7923977374538207;
    msg.lon = 0.5044709154926494;
    msg.x = 0.456391838706078;
    msg.y = 0.045984058878786205;
    msg.z = 0.06198967379344755;

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
    msg.setTimeStamp(0.041219553548657695);
    msg.setSource(19815U);
    msg.setSourceEntity(180U);
    msg.setDestination(8030U);
    msg.setDestinationEntity(112U);
    msg.tracking = 141U;
    msg.lat = 0.2211736722850629;
    msg.lon = 0.04677916615602806;
    msg.x = 0.9051668965270143;
    msg.y = 0.24608053054154921;
    msg.z = 0.8863499561344519;

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
    msg.setTimeStamp(0.08981717540122758);
    msg.setSource(54816U);
    msg.setSourceEntity(195U);
    msg.setDestination(24120U);
    msg.setDestinationEntity(21U);
    msg.tracking = 40U;
    msg.lat = 0.3066084290551846;
    msg.lon = 0.18192967186771025;
    msg.x = 0.18761386423384918;
    msg.y = 0.9625567606778104;
    msg.z = 0.10185383402133419;

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
    msg.setTimeStamp(0.05849553314777445);
    msg.setSource(61246U);
    msg.setSourceEntity(37U);
    msg.setDestination(46577U);
    msg.setDestinationEntity(209U);
    msg.target.assign("XCUYKIDOKIZMCJ");
    msg.lbearing = 0.6713601734314795;
    msg.lelevation = 0.9602398420203238;
    msg.bearing = 0.5702911514363347;
    msg.elevation = 0.21687281639100187;
    msg.phi = 0.2429368685483183;
    msg.theta = 0.7178366714416391;
    msg.psi = 0.06099846822007726;
    msg.accuracy = 0.7772076676630953;

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
    msg.setTimeStamp(0.815841602332681);
    msg.setSource(10499U);
    msg.setSourceEntity(99U);
    msg.setDestination(32866U);
    msg.setDestinationEntity(154U);
    msg.target.assign("SHIRWJJUTAJIWIRTMUPOVTITGOLQGCGUCMXOKTSHNJUMLBXEIWQBOMXBODIAGF");
    msg.lbearing = 0.4138110235858222;
    msg.lelevation = 0.7794882540983944;
    msg.bearing = 0.46922656158083687;
    msg.elevation = 0.25445399816962666;
    msg.phi = 0.0781464125809721;
    msg.theta = 0.37800058548600224;
    msg.psi = 0.14906548878536385;
    msg.accuracy = 0.25527977168047933;

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
    msg.setTimeStamp(0.19778199265400853);
    msg.setSource(35910U);
    msg.setSourceEntity(49U);
    msg.setDestination(9710U);
    msg.setDestinationEntity(12U);
    msg.target.assign("QIQJRITXFHKOFAENWURSLHZHZPYJEDTNIMQUMTFPBWONGPLTPKPWXWRQXACBHVBNRZBQXMGQHRYABAFDZPNKDYUFLETZJUSYROWKFCSNWHADOXWCDKODBKEUQULLUKPSZ");
    msg.lbearing = 0.5407648486590882;
    msg.lelevation = 0.6552896400509506;
    msg.bearing = 0.9600858982372721;
    msg.elevation = 0.10378575579122074;
    msg.phi = 0.5873263944719405;
    msg.theta = 0.801915952425406;
    msg.psi = 0.6111112051699956;
    msg.accuracy = 0.759195968827444;

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
    msg.setTimeStamp(0.10255685906063328);
    msg.setSource(16057U);
    msg.setSourceEntity(234U);
    msg.setDestination(18572U);
    msg.setDestinationEntity(52U);
    msg.target.assign("TRWBWEBIZZIKVMQGMIMPUYKANDUDVSARVRSLQZCMILGZYCNDXULXXBWCEJYVFDKGMOVWXWAKTRYFCWZSNLFPNIAHPETPVISEVERHQXOJZYDEBUZKFRXKAMHSNBGY");
    msg.x = 0.26024377507856944;
    msg.y = 0.17162027322780093;
    msg.z = 0.8720167496388355;
    msg.n = 0.7084669341459192;
    msg.e = 0.05592400459513913;
    msg.d = 0.8240941556771136;
    msg.phi = 0.335204728849819;
    msg.theta = 0.5627077412010577;
    msg.psi = 0.542900709705686;
    msg.accuracy = 0.5770988993767047;

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
    msg.setTimeStamp(0.7912974312479428);
    msg.setSource(25242U);
    msg.setSourceEntity(137U);
    msg.setDestination(52518U);
    msg.setDestinationEntity(128U);
    msg.target.assign("TCPLVTMZXJDFXYSFQQJWMTLIXBFQBNTSBYZWJOYEKYTZWWVIWIBDYXRQXLDCHMRNCQARUFUJTJUHRPRSIJGLNYLGAAOCSFFMGDJKZVBEVGVSFPIQMFITOAHKHCVOLEUWBWOGQHRXKGPCLPDRVEDFMZGRNVGXDTNBJHAZEMZRPAIYWMOVTKNMZLUCYEPRZWEQAXEKYCNPBHGCINQSKNPAIKEOUVSYDLUUKOGNBOUSFUPJEDS");
    msg.x = 0.7161675270810829;
    msg.y = 0.379087915416092;
    msg.z = 0.3507986841979055;
    msg.n = 0.5540445128742487;
    msg.e = 0.8863865877570359;
    msg.d = 0.14954225297954005;
    msg.phi = 0.6606718209251663;
    msg.theta = 0.37261376205872765;
    msg.psi = 0.44463789345668336;
    msg.accuracy = 0.10979783558672518;

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
    msg.setTimeStamp(0.5256443263932958);
    msg.setSource(34018U);
    msg.setSourceEntity(121U);
    msg.setDestination(11987U);
    msg.setDestinationEntity(192U);
    msg.target.assign("TGZYXEQEDGREEGAYLAUFQUSOKQMPFZNMMQARYAVJZBWBKBHFRJDNMXRPJMRZIOPMWBBHONRUVIFBYJLDOTKZEXXQKBDCWXXMTHQBVVSWECAJUCGIWDLG");
    msg.x = 0.3145340792851813;
    msg.y = 0.3917391329712291;
    msg.z = 0.8973733529133251;
    msg.n = 0.6362755633931951;
    msg.e = 0.05778151039857804;
    msg.d = 0.1185583143439859;
    msg.phi = 0.25614014117110373;
    msg.theta = 0.1369750763384585;
    msg.psi = 0.466063248632513;
    msg.accuracy = 0.4109557458612787;

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
    msg.setTimeStamp(0.4548924173526434);
    msg.setSource(29437U);
    msg.setSourceEntity(234U);
    msg.setDestination(30341U);
    msg.setDestinationEntity(55U);
    msg.target.assign("KRAIKVCWCHPTJJHNMQEUWUDZEDMFENELIWSODTIFMQBITRIDYGHYQUZPRRXAMQVZJSOHUJTRGMPAFLOUFUQLFAIPLTAGROFBQXOJKHXVXSDQFGJGBAHSBKCPVTCRJLDNDHHIRJWHCNSMDZNUSXGZYXTJEKZDWXNM");
    msg.lat = 0.19264659140622642;
    msg.lon = 0.7530732357168765;
    msg.z_units = 79U;
    msg.z = 0.019010745169618648;
    msg.accuracy = 0.5116640995752307;

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
    msg.setTimeStamp(0.9975063005797088);
    msg.setSource(59212U);
    msg.setSourceEntity(29U);
    msg.setDestination(45498U);
    msg.setDestinationEntity(83U);
    msg.target.assign("HFGVEWWISQKODTKTKNTKNHMGSNCAJRQSMOLRSBACIVYNJVHEDWPSPFGFDRWKOJOZIZPVJKRKZQQJSKUOLIQWCBJEZLBUMFWDZCZYGQONVQIBFWZJYHMNTGYIIZZFQDKBSSWVYCYBVXEREAXDDELFBTMMDMXDBUBOXNOXGLJYMPWCUXHPAEUYNAHTZQILALPUINMAGTXBXAPLUGJEJCDLRKCOHLAACXWORHHTUCVQPMESURYT");
    msg.lat = 0.2818687407473688;
    msg.lon = 0.026584677073346885;
    msg.z_units = 223U;
    msg.z = 0.49878091331617924;
    msg.accuracy = 0.261987080476085;

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
    msg.setTimeStamp(0.4989328529020268);
    msg.setSource(12235U);
    msg.setSourceEntity(68U);
    msg.setDestination(12193U);
    msg.setDestinationEntity(159U);
    msg.target.assign("CADUZYEYWFLRAPYQXAIZDHLSRUJOGFZDLPHEWGSDVEIROWBHZWBMZVJSKTNCLPEOFOFWINCGKJJNERUSEOIQVTXLFJPGRYCMHGFPJRSNLVVKCDNBRRVOZTHAXHZUIGETNDSUJVYSXDOQAHYICIAVQRHFLNMBNXGEXMDYJUQQPXZCTPQKFVUUCSYNBKIUZTKTZMIMBMNWYBQLPBHEYKAPMMHGTXKIWRCSTOL");
    msg.lat = 0.24585708852421928;
    msg.lon = 0.20791037606655227;
    msg.z_units = 113U;
    msg.z = 0.10639463041079467;
    msg.accuracy = 0.9599071866441186;

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
    msg.setTimeStamp(0.7076874824184128);
    msg.setSource(30995U);
    msg.setSourceEntity(236U);
    msg.setDestination(58920U);
    msg.setDestinationEntity(221U);
    msg.name.assign("HQPLUMSHTWYKWXCMOOJGHESYKCBLZVATFHFAZNFJRZBC");
    msg.lat = 0.9786541215666128;
    msg.lon = 0.12009515104087554;
    msg.z = 0.7924818589912547;
    msg.z_units = 19U;

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
    msg.setTimeStamp(0.8375136448986638);
    msg.setSource(62968U);
    msg.setSourceEntity(114U);
    msg.setDestination(6865U);
    msg.setDestinationEntity(128U);
    msg.name.assign("QPTYKELJMMRDAUBVFWVYZMEWVCTYAZYGERVCHDOIEEHGETXYKGVSIFSBJNLQDWREPUKLBSTILMBIIMTSOZQXNDXHJCCRJPFLJRHEJZOHZZACUUSPRVKGPEAXONJNWZCPMNYPXOBJWXUUTVGNXTNBJFCKZYULDLGKOAY");
    msg.lat = 0.5900507964892588;
    msg.lon = 0.7394077955499498;
    msg.z = 0.8260141871766595;
    msg.z_units = 89U;

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
    msg.setTimeStamp(0.7866168114576448);
    msg.setSource(50441U);
    msg.setSourceEntity(15U);
    msg.setDestination(44366U);
    msg.setDestinationEntity(191U);
    msg.name.assign("HOSJUJBBAXEWRABLOROFVHGAEULHEVSJXTIEZUQPSMMBJBDFPPWBMWOHDNQNBN");
    msg.lat = 0.683948647071996;
    msg.lon = 0.20090738736409985;
    msg.z = 0.04883705686839246;
    msg.z_units = 239U;

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
    msg.setTimeStamp(0.4618239138341034);
    msg.setSource(31138U);
    msg.setSourceEntity(100U);
    msg.setDestination(26481U);
    msg.setDestinationEntity(101U);
    msg.op = 2U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("ZKOCCZQVMZAXVJRWGSIHXRRLIAOLRETLKZEVRISALGYWEFSBLXKCSKYPMXIJQEPKLNNCGEEEQDYWUBPZRVOSHJLEROZZADBHDIFTQGYHKZDIZOXESMNUNDWWFBNYYPOOX");
    tmp_msg_0.lat = 0.5846017699454273;
    tmp_msg_0.lon = 0.077857990577898;
    tmp_msg_0.z = 0.691962181047442;
    tmp_msg_0.z_units = 240U;
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
    msg.setTimeStamp(0.14042017328423262);
    msg.setSource(14031U);
    msg.setSourceEntity(127U);
    msg.setDestination(60855U);
    msg.setDestinationEntity(2U);
    msg.op = 130U;

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
    msg.setTimeStamp(0.7059780615275127);
    msg.setSource(64941U);
    msg.setSourceEntity(95U);
    msg.setDestination(20632U);
    msg.setDestinationEntity(222U);
    msg.op = 184U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("VYKPINDDJGMSVXVRKMCZCHKJHVARPDKOCWHDBRWAZIBJFNOCUUNFLKBIDMPMKMLYWSEYFZXYUHAXDABDPXZYNXMGUGENOVZSQCNQDTWZFUGZILLPTTBSLOXLTJBLBKMHNTAWDQROWPNCPYOQQMFXTHQBAPNSJCOJHKGWQXWUJKRHVEIQSEQMVPEFCTGUOUSIIHOFJYEAOTUQPZ");
    tmp_msg_0.lat = 0.4756501975055062;
    tmp_msg_0.lon = 0.0643307262238646;
    tmp_msg_0.z = 0.8731602938835656;
    tmp_msg_0.z_units = 97U;
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
    msg.setTimeStamp(0.31616981248087817);
    msg.setSource(27840U);
    msg.setSourceEntity(83U);
    msg.setDestination(37487U);
    msg.setDestinationEntity(156U);
    msg.value = 0.5568743360983835;
    msg.type = 45U;

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
    msg.setTimeStamp(0.7320053560799374);
    msg.setSource(38277U);
    msg.setSourceEntity(127U);
    msg.setDestination(9856U);
    msg.setDestinationEntity(182U);
    msg.value = 0.6596873914011002;
    msg.type = 141U;

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
    msg.setTimeStamp(0.11405683946937684);
    msg.setSource(46152U);
    msg.setSourceEntity(246U);
    msg.setDestination(12347U);
    msg.setDestinationEntity(246U);
    msg.value = 0.26859205705466527;
    msg.type = 166U;

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
    msg.setTimeStamp(0.4791127198928392);
    msg.setSource(23710U);
    msg.setSourceEntity(224U);
    msg.setDestination(53628U);
    msg.setDestinationEntity(118U);
    msg.value = 0.34246070670417394;

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
    msg.setTimeStamp(0.440536378426864);
    msg.setSource(63612U);
    msg.setSourceEntity(51U);
    msg.setDestination(27774U);
    msg.setDestinationEntity(229U);
    msg.value = 0.3779362354174689;

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
    msg.setTimeStamp(0.8461411018576297);
    msg.setSource(20836U);
    msg.setSourceEntity(48U);
    msg.setDestination(51112U);
    msg.setDestinationEntity(148U);
    msg.value = 0.7875422437226188;

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
    msg.setTimeStamp(0.914608668316998);
    msg.setSource(17072U);
    msg.setSourceEntity(126U);
    msg.setDestination(15748U);
    msg.setDestinationEntity(224U);
    msg.timestamp_last_service = 0.4868489068298587;
    msg.time_next_service = 0.39390766107282604;
    msg.time_motor_next_service = 0.2587496612087128;
    msg.time_idle_ground = 0.47008852001039014;
    msg.time_idle_air = 0.05730657286777108;
    msg.time_idle_water = 0.8133031893080412;
    msg.time_idle_underwater = 0.26751906426823824;
    msg.time_idle_unknown = 0.35562217251449946;
    msg.time_motor_ground = 0.05130921522153964;
    msg.time_motor_air = 0.27162734509598463;
    msg.time_motor_water = 0.5865589421795783;
    msg.time_motor_underwater = 0.9267504945551421;
    msg.time_motor_unknown = 0.3274743329804134;
    msg.rpm_min = -1047;
    msg.rpm_max = 2139;
    msg.depth_max = 0.3874428724197947;

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
    msg.setTimeStamp(0.2770235142599705);
    msg.setSource(21554U);
    msg.setSourceEntity(252U);
    msg.setDestination(20191U);
    msg.setDestinationEntity(174U);
    msg.timestamp_last_service = 0.8583804584334643;
    msg.time_next_service = 0.21482308871337175;
    msg.time_motor_next_service = 0.4089129296598333;
    msg.time_idle_ground = 0.6401497828557989;
    msg.time_idle_air = 0.5618662044411714;
    msg.time_idle_water = 0.8734224767395985;
    msg.time_idle_underwater = 0.036213545189046514;
    msg.time_idle_unknown = 0.6390482017399066;
    msg.time_motor_ground = 0.9744460228639972;
    msg.time_motor_air = 0.6098127085144399;
    msg.time_motor_water = 0.4263909179985286;
    msg.time_motor_underwater = 0.7374023955185143;
    msg.time_motor_unknown = 0.3492443560764259;
    msg.rpm_min = -11024;
    msg.rpm_max = 4007;
    msg.depth_max = 0.46335823442924917;

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
    msg.setTimeStamp(0.9153140410075066);
    msg.setSource(22601U);
    msg.setSourceEntity(235U);
    msg.setDestination(34142U);
    msg.setDestinationEntity(85U);
    msg.timestamp_last_service = 0.478252968596788;
    msg.time_next_service = 0.14815917669335876;
    msg.time_motor_next_service = 0.2174643087492869;
    msg.time_idle_ground = 0.5103111168451561;
    msg.time_idle_air = 0.6749652050434903;
    msg.time_idle_water = 0.1846818098856834;
    msg.time_idle_underwater = 0.8519759196460742;
    msg.time_idle_unknown = 0.4321699553364027;
    msg.time_motor_ground = 0.3000310054392511;
    msg.time_motor_air = 0.4660380170799505;
    msg.time_motor_water = 0.5104819608916413;
    msg.time_motor_underwater = 0.8955791904534914;
    msg.time_motor_unknown = 0.4820825750065584;
    msg.rpm_min = -28304;
    msg.rpm_max = 32251;
    msg.depth_max = 0.4769564952658796;

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
    msg.setTimeStamp(0.16394710214872554);
    msg.setSource(49025U);
    msg.setSourceEntity(107U);
    msg.setDestination(21840U);
    msg.setDestinationEntity(143U);
    msg.severity = 84U;
    msg.text.assign("TZCRGUWIPILXWMVABBHTYPDPNTHBLKAQIZNBZUOMYQNBU");

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
    msg.setTimeStamp(0.051410861906857064);
    msg.setSource(43444U);
    msg.setSourceEntity(57U);
    msg.setDestination(65067U);
    msg.setDestinationEntity(25U);
    msg.severity = 198U;
    msg.text.assign("EVUVEKXRXBVPGPRTVYLJGBRKRDCVAIHDRPXXECANHZZLDQIOFOGCTKMJBPDFAYYZYNOIMBJZRXIPWUMECKTZSXDMWNTEBLOEDTSNZZYXUMPDU");

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
    msg.setTimeStamp(0.8736860162773553);
    msg.setSource(38243U);
    msg.setSourceEntity(196U);
    msg.setDestination(28275U);
    msg.setDestinationEntity(239U);
    msg.severity = 52U;
    msg.text.assign("QIQAAVUIJHBUXCDKGYXTCHIPGMCMAGHELLMBQCT");

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
    msg.setTimeStamp(0.9573866454165918);
    msg.setSource(5947U);
    msg.setSourceEntity(150U);
    msg.setDestination(22412U);
    msg.setDestinationEntity(156U);
    msg.channel = 124;
    msg.value = 1357459094;
    msg.gain = 80U;

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
    msg.setTimeStamp(0.7377102009877813);
    msg.setSource(47079U);
    msg.setSourceEntity(154U);
    msg.setDestination(37498U);
    msg.setDestinationEntity(152U);
    msg.channel = 56;
    msg.value = 791387513;
    msg.gain = 200U;

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
    msg.setTimeStamp(0.31587731986677314);
    msg.setSource(45149U);
    msg.setSourceEntity(112U);
    msg.setDestination(47294U);
    msg.setDestinationEntity(212U);
    msg.channel = 78;
    msg.value = -1466357594;
    msg.gain = 90U;

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
    msg.setTimeStamp(0.741184730359859);
    msg.setSource(519U);
    msg.setSourceEntity(161U);
    msg.setDestination(10728U);
    msg.setDestinationEntity(156U);
    msg.ch01 = 0.47304992339485374;
    msg.ch02 = 0.5306308395986219;
    msg.ch03 = 0.6246677923715758;
    msg.ch04 = 0.005310724276584189;
    msg.ch05 = 0.8388241296210989;
    msg.ch06 = 0.19666955582210333;
    msg.ch07 = 0.47496151007192056;
    msg.ch08 = 0.7573977772987349;
    msg.ch09 = 0.47625255829726965;
    msg.ch10 = 0.00732995803870129;
    msg.ch11 = 0.9169667217345567;
    msg.ch12 = 0.8075539032015575;
    msg.ch13 = 0.15307603125828573;
    msg.ch14 = 0.27737406610798776;
    msg.ch15 = 0.047616544470985844;
    msg.ch16 = 0.48344157711276414;

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
    msg.setTimeStamp(0.7616641694079587);
    msg.setSource(56484U);
    msg.setSourceEntity(131U);
    msg.setDestination(59316U);
    msg.setDestinationEntity(211U);
    msg.ch01 = 0.31052694493608557;
    msg.ch02 = 0.7486165545757767;
    msg.ch03 = 0.48258223150030655;
    msg.ch04 = 0.11645745452869871;
    msg.ch05 = 0.4145291980296849;
    msg.ch06 = 0.5347233904799058;
    msg.ch07 = 0.22517384460575685;
    msg.ch08 = 0.9197095667155892;
    msg.ch09 = 0.3582905819987755;
    msg.ch10 = 0.872716992549436;
    msg.ch11 = 0.15299202808209633;
    msg.ch12 = 0.9217868665249086;
    msg.ch13 = 0.9640364516589738;
    msg.ch14 = 0.04217216194504225;
    msg.ch15 = 0.7334733289350859;
    msg.ch16 = 0.8942880578222889;

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
    msg.setTimeStamp(0.016449164638457026);
    msg.setSource(3028U);
    msg.setSourceEntity(107U);
    msg.setDestination(45387U);
    msg.setDestinationEntity(220U);
    msg.ch01 = 0.34789546064585664;
    msg.ch02 = 0.6498404836708971;
    msg.ch03 = 0.005732262258523302;
    msg.ch04 = 0.02736744084912557;
    msg.ch05 = 0.6020406788278797;
    msg.ch06 = 0.5877315923737271;
    msg.ch07 = 0.8742467235487218;
    msg.ch08 = 0.9540056391375816;
    msg.ch09 = 0.36343552407581603;
    msg.ch10 = 0.21548835895422402;
    msg.ch11 = 0.09091322857159911;
    msg.ch12 = 0.14997349936016435;
    msg.ch13 = 0.9382843049080337;
    msg.ch14 = 0.2174983202674341;
    msg.ch15 = 0.5961698260730965;
    msg.ch16 = 0.8662946591212847;

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
    msg.setTimeStamp(0.4239546156630625);
    msg.setSource(1976U);
    msg.setSourceEntity(70U);
    msg.setDestination(30509U);
    msg.setDestinationEntity(147U);
    msg.op = 68U;
    msg.lat = 0.4222415799624518;
    msg.lon = 0.6877499438017316;
    msg.height = 0.4091064988056836;
    msg.depth = 0.20965224147002126;
    msg.alt = 0.35788905267382876;

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
    msg.setTimeStamp(0.7034652879901356);
    msg.setSource(39550U);
    msg.setSourceEntity(2U);
    msg.setDestination(44072U);
    msg.setDestinationEntity(171U);
    msg.op = 2U;
    msg.lat = 0.04553443790050182;
    msg.lon = 0.5180407601212016;
    msg.height = 0.6363153515546858;
    msg.depth = 0.054854974848484006;
    msg.alt = 0.30177227351951974;

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
    msg.setTimeStamp(0.9293128088645903);
    msg.setSource(23917U);
    msg.setSourceEntity(188U);
    msg.setDestination(11988U);
    msg.setDestinationEntity(247U);
    msg.op = 32U;
    msg.lat = 0.5354672855200813;
    msg.lon = 0.12803855172801382;
    msg.height = 0.1873931127163989;
    msg.depth = 0.9318787025161211;
    msg.alt = 0.43782827016227466;

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
    msg.setTimeStamp(0.6372225400563237);
    msg.setSource(63938U);
    msg.setSourceEntity(197U);
    msg.setDestination(42872U);
    msg.setDestinationEntity(9U);
    msg.nbeams = 160U;
    msg.ncells = 177U;
    msg.coord_sys = 227U;

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
    msg.setTimeStamp(0.1019597725186131);
    msg.setSource(56890U);
    msg.setSourceEntity(117U);
    msg.setDestination(40794U);
    msg.setDestinationEntity(61U);
    msg.nbeams = 88U;
    msg.ncells = 65U;
    msg.coord_sys = 155U;
    IMC::CurrentProfileCell tmp_msg_0;
    tmp_msg_0.cell_position = 0.8105729574196;
    IMC::ADCPBeam tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.vel = 0.5348849489300761;
    tmp_tmp_msg_0_0.amp = 0.11254782216032133;
    tmp_tmp_msg_0_0.cor = 41U;
    tmp_msg_0.beams.push_back(tmp_tmp_msg_0_0);
    msg.profile.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.9066865979850132);
    msg.setSource(16869U);
    msg.setSourceEntity(183U);
    msg.setDestination(39374U);
    msg.setDestinationEntity(221U);
    msg.nbeams = 180U;
    msg.ncells = 161U;
    msg.coord_sys = 37U;

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
    msg.setTimeStamp(0.4410900539149135);
    msg.setSource(43443U);
    msg.setSourceEntity(210U);
    msg.setDestination(33395U);
    msg.setDestinationEntity(92U);
    msg.cell_position = 0.42170588105731444;

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
    msg.setTimeStamp(0.010590572290155364);
    msg.setSource(22055U);
    msg.setSourceEntity(155U);
    msg.setDestination(11528U);
    msg.setDestinationEntity(67U);
    msg.cell_position = 0.1581711982011349;
    IMC::ADCPBeam tmp_msg_0;
    tmp_msg_0.vel = 0.0640934397326246;
    tmp_msg_0.amp = 0.37238521492333454;
    tmp_msg_0.cor = 129U;
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
    msg.setTimeStamp(0.6448143849207565);
    msg.setSource(62373U);
    msg.setSourceEntity(141U);
    msg.setDestination(14702U);
    msg.setDestinationEntity(177U);
    msg.cell_position = 0.8755815295913313;
    IMC::ADCPBeam tmp_msg_0;
    tmp_msg_0.vel = 0.3350985876521033;
    tmp_msg_0.amp = 0.9590210599611704;
    tmp_msg_0.cor = 110U;
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
    msg.setTimeStamp(0.6243612584222638);
    msg.setSource(43136U);
    msg.setSourceEntity(3U);
    msg.setDestination(44023U);
    msg.setDestinationEntity(42U);
    msg.vel = 0.29138310831927094;
    msg.amp = 0.6610449269834322;
    msg.cor = 135U;

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
    msg.setTimeStamp(0.35849816575280813);
    msg.setSource(35046U);
    msg.setSourceEntity(125U);
    msg.setDestination(64729U);
    msg.setDestinationEntity(132U);
    msg.vel = 0.5068746233309934;
    msg.amp = 0.487745191357316;
    msg.cor = 244U;

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
    msg.setTimeStamp(0.4400254431325351);
    msg.setSource(32330U);
    msg.setSourceEntity(42U);
    msg.setDestination(8790U);
    msg.setDestinationEntity(136U);
    msg.vel = 0.33891289868535734;
    msg.amp = 0.054911949054344045;
    msg.cor = 223U;

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
    msg.setTimeStamp(0.3747977527765466);
    msg.setSource(13158U);
    msg.setSourceEntity(213U);
    msg.setDestination(15741U);
    msg.setDestinationEntity(127U);
    msg.name.assign("NHKFBPRUBMECCFKLUNISJZXSVNTGCFEWZFNBVTARLV");
    msg.value = 112U;

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
    msg.setTimeStamp(0.34783518745549513);
    msg.setSource(11223U);
    msg.setSourceEntity(85U);
    msg.setDestination(60531U);
    msg.setDestinationEntity(70U);
    msg.name.assign("RNYWNUBINTJKNEBRLTREEDDFFGFZJHOYQSICTSKCLVZALHRHRFOKTXZSQPGRDZGZBVPKZTNZCJIAJGUEFNWMZLCPCQWGJPYKQPPFLSDMMVKMRXOMKCXAOHPFNATOMZDZIIODPCGDHFVBUXROTFLOANYBVELQHVYJSXCABCPBPMFLYKYWRYULEVIXQWGKCQJDTWHIRXNUBWASMJIMGXAQDOIXXLHUHQAEEAUVVBGUS");
    msg.value = 77U;

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
    msg.setTimeStamp(0.37415570124725395);
    msg.setSource(14578U);
    msg.setSourceEntity(73U);
    msg.setDestination(5992U);
    msg.setDestinationEntity(158U);
    msg.name.assign("TOJBCQIZVIQNEANQSGDEVUWGJZHURTSFRAUPAJKZQTEJVUAYGYWMOIMKCLSFDNFZBBRCLPXSKPXPXDURLWHMWMTIGOKFERBJCIBQNTEZDAGQRRXKCLPTZYHTKLJQYHGGTENYMOWUPVWMLAMNWVENXNFICDBDFXDQSAWSNJFVXLMLHQBETWMPNJHGCQRSDLLPHGBUOCYYCUPYWJCHAKUJEVOTYZFAISXBDZRXABPIRHOXSOKO");
    msg.value = 109U;

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
    msg.setTimeStamp(0.11174682891051224);
    msg.setSource(24428U);
    msg.setSourceEntity(243U);
    msg.setDestination(55975U);
    msg.setDestinationEntity(190U);
    msg.name.assign("XAFYWQJVGMCHSYKPIUCYTIDHLJBDSIAAPBBZBGXVIEZOQQVFYCCKSXHKQXMKTNJARUKPMWHEGHLOTIEDRJWOQOFNVPEOQMATEOPBAZSXJVUDPCKEGRKLCZPJQWQOUWBHTVRTHYGVVMFNIISASLXWCNRIFYFLZKLSMAENHUDHAYNUTKIYFLTFPCLUWDDRXQIUSKJGHR");

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
    msg.setTimeStamp(0.7409106410831137);
    msg.setSource(60979U);
    msg.setSourceEntity(189U);
    msg.setDestination(49243U);
    msg.setDestinationEntity(77U);
    msg.name.assign("JDPPJCJQUXEGMBKIMAXPHEYRKTILJPEDYADDMHUDZCWPLCOFIYVQSAHISPLGAZNZZIFC");

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
    msg.setTimeStamp(0.5775025107518319);
    msg.setSource(48989U);
    msg.setSourceEntity(174U);
    msg.setDestination(55441U);
    msg.setDestinationEntity(37U);
    msg.name.assign("TUPEARATDDMFICDSIQJYTNQUXUYMEDLJGAMFYPBRCSGYNPBAZGWXAZYRVSOHOJZSXQCMAPXIDVFZKZGMIUOORJQGDFEIZLWZLVPDBSLHJKRGYVLLOOTCKUHNBUDDUFOKUPMPONEOIYFJFGQRHXJLSWRPWOXQNMQKWXNBWHIKMHFAIHECZWEFWMVVJITXKUTREACHSEVGBAKXTQYQBRNGVLTNNYPBTJYZVWWCMQLCH");

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
    msg.setTimeStamp(0.8235810556898123);
    msg.setSource(12110U);
    msg.setSourceEntity(177U);
    msg.setDestination(47651U);
    msg.setDestinationEntity(197U);
    msg.name.assign("SACRSWOSVXBPSPIQXYSETXFUJHKEONSMJWLFABEDWVRXQDETALOGYMDDJLGIMHUEXPYPIQMHHPNIRAKWEVBAYLZJOGENFICWCXWUBTUFVLQNFWJARZT");
    msg.value = 199U;

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
    msg.setTimeStamp(0.8235978217645432);
    msg.setSource(10551U);
    msg.setSourceEntity(91U);
    msg.setDestination(55940U);
    msg.setDestinationEntity(8U);
    msg.name.assign("ZPGNPMXTFSKXLUJTTUQXFMOQBUSHWPVWMMVDYOANNQWUSGORLWAYSZPCLZDRANRAJQDLFOABCXAMIDSOTKXIEYHSHCZDVIKPAERLKVMVJBFHTMHPQJEFQNPOTBIWQZPYYFJLDSXFESLCCYJIKWGNZNXID");
    msg.value = 127U;

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
    msg.setTimeStamp(0.2818742848858051);
    msg.setSource(32853U);
    msg.setSourceEntity(137U);
    msg.setDestination(37408U);
    msg.setDestinationEntity(172U);
    msg.name.assign("REGQRRKHIZYYJKBHTMJYLDOPLFNMWDLKJIVEQIAGYFFBLMSUTYJHRTMFBRCOARBCPNPGPLVQDVKMSHOKJSZILHNTQDIIOUYGVKWVTABZKEQRGGNTWBTVXENXQPTOLWASVSPOXUWRCC");
    msg.value = 156U;

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
    msg.setTimeStamp(0.5259628408987583);
    msg.setSource(34296U);
    msg.setSourceEntity(80U);
    msg.setDestination(34915U);
    msg.setDestinationEntity(139U);
    msg.value = 0.8560908887346228;

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
    msg.setTimeStamp(0.5395119883836291);
    msg.setSource(332U);
    msg.setSourceEntity(210U);
    msg.setDestination(28661U);
    msg.setDestinationEntity(111U);
    msg.value = 0.32950670316706154;

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
    msg.setTimeStamp(0.7102684207858466);
    msg.setSource(42890U);
    msg.setSourceEntity(23U);
    msg.setDestination(24663U);
    msg.setDestinationEntity(150U);
    msg.value = 0.8350228773577507;

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
    msg.setTimeStamp(0.39215251921823024);
    msg.setSource(49288U);
    msg.setSourceEntity(214U);
    msg.setDestination(43712U);
    msg.setDestinationEntity(73U);
    msg.value = 0.5746047862518243;

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
    msg.setTimeStamp(0.8256666543885282);
    msg.setSource(34114U);
    msg.setSourceEntity(82U);
    msg.setDestination(35195U);
    msg.setDestinationEntity(132U);
    msg.value = 0.048797138081539515;

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
    msg.setTimeStamp(0.5576362058402318);
    msg.setSource(8172U);
    msg.setSourceEntity(126U);
    msg.setDestination(51567U);
    msg.setDestinationEntity(51U);
    msg.value = 0.9073201782098399;

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
    msg.setTimeStamp(0.5432063625065946);
    msg.setSource(3551U);
    msg.setSourceEntity(67U);
    msg.setDestination(23886U);
    msg.setDestinationEntity(248U);
    msg.value = 0.11400590586423409;

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
    msg.setTimeStamp(0.050259114824355744);
    msg.setSource(58859U);
    msg.setSourceEntity(207U);
    msg.setDestination(49591U);
    msg.setDestinationEntity(36U);
    msg.value = 0.881448580565631;

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
    msg.setTimeStamp(0.2492383903954023);
    msg.setSource(46194U);
    msg.setSourceEntity(162U);
    msg.setDestination(13596U);
    msg.setDestinationEntity(151U);
    msg.value = 0.1749393557714375;

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
    msg.setTimeStamp(0.7410273571159245);
    msg.setSource(16307U);
    msg.setSourceEntity(83U);
    msg.setDestination(55634U);
    msg.setDestinationEntity(75U);
    msg.restriction = 116U;
    msg.reason.assign("FHDZQAKZYFOFKBSSZTPHSZWTXBMMOUVRN");

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
    msg.setTimeStamp(0.889337750200424);
    msg.setSource(39287U);
    msg.setSourceEntity(215U);
    msg.setDestination(17091U);
    msg.setDestinationEntity(26U);
    msg.restriction = 237U;
    msg.reason.assign("AGJHIEOIKDMEBPCZJSOPDDTOCFTRINBSXEWGRYACARVZXJQGHMLSIARRLPWU");

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
    msg.setTimeStamp(0.9523206499643899);
    msg.setSource(51835U);
    msg.setSourceEntity(241U);
    msg.setDestination(53014U);
    msg.setDestinationEntity(111U);
    msg.restriction = 236U;
    msg.reason.assign("KGJXEQXWJXKFDVGWTSDCNSOGUEGSWILBKZNRHDNLRQBHWMYBCUMBNDCFRJSHOITQPRVUDIBYTJGALPVSMBVFZZNIGHMRPBVGRQPZTNBNYPOYJKFRSXYDBGFFZNEMXVRPPLZHEDTLXPTACMAUZYXOOAQYSFGSQTYUUCMSDVALIXIQEHXEOIJDODZUCLAMEFWFWOICVVYEYNKIWKSBJKJMM");

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
