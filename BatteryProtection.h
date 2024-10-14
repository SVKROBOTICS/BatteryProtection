#ifndef BatteryProtection_h
#define BatteryProtection_h

#include "Arduino.h"

class BatteryProtection {
  public:
    BatteryProtection(int analogPin);
    void checkVoltage();  // Now it just stops the program if the voltage drops below the threshold
  
  private:
    int _analogPin;
    const float _voltageThreshold = 2.05;  // Fixed voltage threshold
    unsigned long _lastCheckTime;  // To keep track of the last measurement time
    const unsigned long _interval = 2000;  // 2 seconds interval between measurements
    float readVoltage();
};

#endif