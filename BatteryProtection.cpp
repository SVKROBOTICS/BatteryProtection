#include "Arduino.h"
#include "BatteryProtection.h"

BatteryProtection::BatteryProtection(int analogPin) {
  _analogPin = analogPin;
  _lastCheckTime = 0;  // Start with 0, the first measurement happens immediately
}

void BatteryProtection::checkVoltage() {
  unsigned long currentTime = millis();

  // Check if 2 seconds have passed since the last measurement
  if (currentTime - _lastCheckTime >= _interval) {
    _lastCheckTime = currentTime;  // Update the last measurement time

    float voltage = readVoltage();

    // If the voltage is below the threshold, stop the execution
    if (voltage < _voltageThreshold) {
      while (true);  // Permanently stop the program
    }
  }
}

float BatteryProtection::readVoltage() {
  int sensorValue = analogRead(_analogPin);
  float voltage = sensorValue * (5.0 / 1023.0);  // Calculate voltage based on 5V reference
  return voltage;
}