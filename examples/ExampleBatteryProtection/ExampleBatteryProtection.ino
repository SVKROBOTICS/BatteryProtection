#include <BatteryProtection.h>

BatteryProtection battery(A2);  // Initialize with analog pin A2 (This is where you specify the analog pin connected to the battery monitoring sensor)

void setup() {
  // No setup required
}

void loop() {
  // Check the voltage every 2 seconds
  battery.checkVoltage();  // If voltage drops below 2.05V, the program will stop
}
