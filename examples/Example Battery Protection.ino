#include <BatteryProtection.h>

BatteryProtection battery(0);  // Analog pin A0

void setup() {
  // No setup required
}

void loop() {
  // Check the voltage every 2 seconds
  battery.checkVoltage();  // If voltage drops below 2.05V, the program will stop
}
