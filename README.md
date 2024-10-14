# BatteryProtection Library

## Overview
The `BatteryProtection` library helps to monitor the voltage of a battery using an analog pin and halts the program if the voltage drops below a safe threshold of 2.05V. This prevents battery damage by ensuring the battery is not drained excessively.

## Features
- Periodic voltage checks using `millis()`, without blocking other code.
- Halts program execution automatically when voltage drops below 2.05V.
- Simple to integrate with any project that uses battery-powered systems.

## Installation
1. Download the library.
2. Place the `BatteryProtection` folder in your `Arduino/libraries/` directory.
3. Restart the Arduino IDE if it's open.

## Usage

### Example

```cpp
#include <BatteryProtection.h>

BatteryProtection battery(A0);  // Initialize with analog pin A0

void setup() {
  // No setup required
}

void loop() {
  // Periodically checks the voltage
  battery.checkVoltage();  // Program halts if voltage drops below 2.05V
}