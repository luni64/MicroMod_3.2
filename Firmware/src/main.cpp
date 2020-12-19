#include "Arduino.h"
#include "mm.h"
//using namespace MM32;

MM32::BUS bus;

void setup()
{
    pinMode(bus, OUTPUT);
    bus = 0xA2;

    pinMode(bus, INPUT);
}

void loop()
{
    uint8_t value = bus;
    Serial.println(value);

    digitalWriteFast(LED_BUILTIN, !digitalReadFast(LED_BUILTIN));
    delay(150);
}
