#include <Arduino.h>

const int PIN_LED_BLUE = 6;   // The Number of the blue LED pin.
const int ANALOG_STICK = A0;   // The number of the analog 2 (KEY2) pin.


void setup() {
}

void loop() {
  int val = analogRead(ANALOG_STICK);
  val = map(val, 0, 1023, 0, 255);
  analogWrite(PIN_LED_BLUE, val);
}