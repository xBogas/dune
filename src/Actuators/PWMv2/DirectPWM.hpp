#ifndef ACTUATORS_PWMV2_DIRECTPWM_HPP_INCLUDED_
#define ACTUATORS_PWMV2_DIRECTPWM_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local headers.
#include "Array.hpp"

namespace Actuators
{
  namespace PWMv2
  {
    using DUNE_NAMESPACES;

    constexpr const char c_pwm_base[] = "/sys/class/pwm/pwmchip0/";

    constexpr auto var = str_app(c_pwm_base, "pwm");
    constexpr auto var2 = var + "0";

    class DirectPWM
    {
    public:
      DirectPWM(DUNE::Tasks::Task* task, int channel):
        m_task(task),
        m_pwm(nullptr),
        m_channel(channel)
      {
        m_path_enable = str_app(c_pwm_base, "pwm") + String::str(m_channel) + "/enable";
        m_path_period = str_app(c_pwm_base, "pwm") + String::str(m_channel) + "/period";
        m_path_duty_cycle = str_app(c_pwm_base, "pwm") + String::str(m_channel) + "/duty_cycle";

        m_outputFile = fopen(str_app(c_pwm_base, "export"), "ab");
        if (m_outputFile == NULL)
        {
          m_task->err("Failed to export PWM %d", m_channel);
          throw std::runtime_error("Failed to export PWM" + m_channel);
        }

        char buff[2];
        sprintf(buff, "%u", m_channel);
        fwrite(&buff, sizeof(char), 2, m_outputFile);
        fclose(m_outputFile);

        m_outputFile = fopen(m_path_period.c_str(), "wb");
        if (m_outputFile == NULL)
          m_task->err("Failed to set period %d in %s", 20'000, m_path_period.c_str());

        setPeriod(20'000);

        m_outputFile = fopen(m_path_enable.c_str(), "rb+");
        if (m_outputFile == NULL)
          m_task->err("Failed enable pwm %s", m_path_enable.c_str());

        strcpy(buff, "1");
        fwrite(&buff, sizeof(char), 1, m_outputFile);
        fclose(m_outputFile);
      }

      ~DirectPWM(void)
      {
        m_outputFile = fopen("/sys/class/pwm/pwmchip0/unexport", "ab");
        if (m_outputFile == NULL)
          m_task->err("Failed to unexport PWM %d", m_channel);

        fwrite(&m_channel, sizeof(int), 1, m_outputFile);
        fclose(m_outputFile);
      }

      //! Set duty cycle
      //! @param[in] us duty cycle in microseconds
      void
      setDutyCycle(uint32_t us)
      {
        m_outputFile = fopen(m_path_duty_cycle.c_str(), "wb");
        if (m_outputFile == NULL)
          m_task->err("Failed to set duty cycle PWM %d", m_channel);

        us *= 1000;
        sprintf(m_duty_cycle, "%u", us);
        fwrite(&m_duty_cycle, sizeof(char), sizeof(m_duty_cycle), m_outputFile);
        fclose(m_outputFile);
      }

      //! Set period
      //! @param[in] us period in microseconds
      void
      setPeriod(uint32_t us)
      {
        m_outputFile = fopen(m_path_period.c_str(), "wb");
        if (m_outputFile == NULL)
          m_task->err("Failed to period PWM %d", m_channel);

        us *= 1000;
        sprintf(m_period, "%u", us);
        fwrite(&m_period, sizeof(char), sizeof(m_period), m_outputFile);
        fclose(m_outputFile);
      }

    private:
      DUNE::Tasks::Task* m_task;
      DUNE::Hardware::PWM* m_pwm;
      FILE* m_outputFile;
      std::string m_path_enable;
      std::string m_path_duty_cycle;
      std::string m_path_period;
      int m_channel;
      char m_duty_cycle[64];
      char m_period[64];
    };
  }
}

#endif
