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
      float something;
    };
    
    DriverCrawlerSerial(DUNE::Tasks::Task* task, SerialPort* port):
      m_task(task), m_port(port)
    {
      m_timeout = 10.0f;
    }

    ~DriverCrawlerSerial(){}

    //! Don't know what this does
    bool
    init(int cellNumber, float scale)
    {
      char cmd[30];
      std::sprintf(cmd, "@CELL,%d,*", cellNumber);
      if (sendCommand(cmd, "$RSP,ACK,,*"))
      {
        std::memset(&cmd, '\0', sizeof(cmd));
        std::sprintf(cmd, "@SCALE,%2.f,*", scale);
        if (sendCommand(cmd, "$RSP,ACK,,*"))
          return true;
      }
      return false;
    }

    void
    start()
    {
      if (!sendCommand("@START,*", "$RSP,ACK,,*"))
        throw std::runtime_error("Failed to send START message");
    }

    void
    stop()
    {
      if(!sendCommand("@STOP,*", ""))
        throw std::runtime_error("Failed to send STOP message");
    }

    bool
    newData()
    {
      unsigned int bytes = m_port->readString(buff, sizeof(buff));

      if (bytes == 0)
      {
        m_task->inf("No bytes to read");
        return false;
      }
      
      //why - 3 ?
      buff[strlen(buff) - 3] = '\0';
      
      char* param = std::strtok(buff, ",");
      if (std::strcmp(param, "$VOLT") == 0)
      {
        param = std::strtok(NULL, ",");
        std::sscanf(param, "%f", &m_boardData.something);
      }
      
      return true;
    }

    Data m_boardData;
  private:

    bool
    sendCommand(const char* send, const char* reply)
    {
      
      m_task->inf("Send msg: %s", send);
      m_port->writeString(send);

      char rec_buffer[128];
      if (Poll::poll(*m_port, m_timeout))
      {
        m_port->readString(rec_buffer, sizeof(rec_buffer));
        m_task->inf("Reply: %s", rec_buffer);
        if (std::strcmp(rec_buffer,reply) == 0)
          return true;
        else if (std::strcmp(reply, "$VERS,") == 0)
        {
          char* vrs = std::strtok(rec_buffer, ",");
          m_task->inf(vrs);
          return true;
        }
      }
      
      return true;
    }

    DUNE::Tasks::Task* m_task;
    SerialPort* m_port;
    float m_timeout;
    char buff[64];
  };
  
}


#endif