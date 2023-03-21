#ifndef CRAWLERSERIAL_HPP_INCLUDED_
#define CRAWLERSERIAL_HPP_INCLUDED_

#include <DUNE/DUNE.hpp>

namespace CrawlerSerial
{
  using DUNE_NAMESPACES;
  class DriverCrawlerSerial
  {
  public:
    struct Data
    {
      float pressure;

      std::string firmware;
    };
    
    DriverCrawlerSerial(DUNE::Tasks::Task* task, SerialPort* port, Poll poll):
      m_task(task), m_port(port)
    {
      m_poll = poll;
      m_timeout = 2.0f;
    }

    ~DriverCrawlerSerial(){}

    bool
    getVersionFirmware()
    {
      if(!sendCommand("@VERS,*", "$VERS,"))
        return true;

      return false;
    }

    void
    start()
    {
      if (!sendCommand("@START,*", "$RSP,ACK,"))
        throw std::runtime_error("Failed to send START message");
    }

    void
    stop()
    {
      if(!sendCommand("@STOP,*", "$STOP"))
        throw std::runtime_error("Failed to send STOP message");
    }

    bool
    newData()
    {
      unsigned int bytes = m_port->readString(buff, sizeof(buff));// if bytes == sizeof(buff) !!

      if (bytes == 0)
      {
        m_task->inf("No bytes to read");
        return false;
      }
      
      m_task->inf("New data: %s", buff);
      char* param = std::strtok(buff, ",");
      if (std::strcmp(param, "$PRESS") == 0) // $PRESS,fp value\0
      {
        param = std::strtok(NULL, ",");
        std::sscanf(param, "%f", &m_boardData.pressure);
      }
      
      return true;
    }

    void
    sendCommandNoRsp(const char* cmd)
    {
      char cmdText[32];
      std::sprintf(cmdText, "%s%c\n", cmd, (Algorithms::XORChecksum::compute((uint8_t*)cmd, strlen(cmd) - 1) | 0x80));
      m_task->inf("Command (no rsp): %s", cmdText);
      size_t n = m_port->writeString(cmdText);
      m_task->inf("Send %lu", n);
    }

    bool
    sendCommand(const char* send, const char* reply)
    {
      char cmdText[32];
      char cmdReplyText[32];
      std::sprintf(cmdText, "%s%c\n", send, (Algorithms::XORChecksum::compute((uint8_t*)send, strlen(send) - 1) | 0x80));
      //std::sprintf(cmdReplyText, "%s%c\n", reply, (Algorithms::XORChecksum::compute((uint8_t*)reply, strlen(reply) - 1) | 0x80));
      std::sprintf(cmdReplyText, "%s\n", reply);      
      char bfrUart[128];
      m_task->inf("Command: %s", cmdText);
      m_task->inf("Reply should be %s", cmdReplyText);
      m_port->writeString(cmdText);

      if (Poll::poll(*m_port, m_timeout))
      {
        m_port->readString(bfrUart, sizeof(bfrUart));
        m_task->inf("Reply: %s", bfrUart);
        if (std::strcmp(bfrUart, cmdReplyText) == 0)
        {
          return true;
        }
        else if(std::strcmp(reply, "$VERS,") == 0)
        {
          char* vrs = std::strtok(bfrUart, ",");
          vrs = std::strtok(NULL, ",");
          m_boardData.firmware = vrs;
          return true;
        }
      }
      return false;
    }

    Data m_boardData;
  private:

    DUNE::Tasks::Task* m_task;
    SerialPort* m_port;
    Poll m_poll;
    float m_timeout;
    char buff[64];
  };
  
}


#endif