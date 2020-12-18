#include "Arduino.h"
#include "mm.h"
using namespace MM32;

void setup()
{
  pinMode(G2,OUTPUT);
  Bus.pinMode(OUTPUT);

  for (int i = 0; i < 0xFF; i++)
  {
      Bus = i;
  }

  Bus.pinMode(INPUT_PULLUP);
}

void loop()
{
  digitalWriteFast(LED_BUILTIN,!digitalReadFast(LED_BUILTIN));
  delay(150);

  uint8_t value = Bus;
  Serial.println(value);
}
