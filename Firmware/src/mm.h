#pragma once
#include "Arduino.h"

namespace MM32
{
    //GPIO ---------------------------------------
    constexpr uint8_t G0  = 2;
    constexpr uint8_t G1  = 14;
    constexpr uint8_t G2  = 7;
    constexpr uint8_t G3  = 8;
    constexpr uint8_t G4  = 6;
    constexpr uint8_t G5  = 20;
    constexpr uint8_t G6  = 21;
    constexpr uint8_t G7  = 5;
    constexpr uint8_t G8  = 27;
    constexpr uint8_t G11 = 28;

    class BUS
    {
     public:
        void operator=(uint8_t value) const;
        operator uint8_t() const;

     protected:
        void pinMode(int mode) const;
        friend void pinMode(const BUS&, int);
    };
    void pinMode(const MM32::BUS&, int mode);

    // ADC ---------------------------------------
    constexpr uint8_t A0     = ::A13;
    constexpr uint8_t A1     = ::A12;
    constexpr uint8_t ADC_DN = ::A12;
    constexpr uint8_t ADC_DP = ::A13;

    // DAC / PWM ---------------------------------
    constexpr uint8_t DAC  = A14; // on PMW0
    constexpr uint8_t PWM1 = 22;

    // UARTs -------------------------------------
    constexpr uint8_t TX1  = 0; // Serial 1
    constexpr uint8_t RX1  = 1;
    constexpr uint8_t RTS1 = 25;
    constexpr uint8_t CTS1 = 32;
    constexpr uint8_t TX2  = 10; // Serial 2
    constexpr uint8_t RX2  = 9;

    // I2C ---------------------------------------
    constexpr uint8_t SCL0   = 19;
    constexpr uint8_t SDA0   = 18;
    constexpr uint8_t I2CINT = 24;
    constexpr uint8_t SCL1   = 29;
    constexpr uint8_t SDA1   = 30;

    // SPI --------------------------------------
    constexpr uint8_t SCK  = 13;
    constexpr uint8_t MOSI = 11;
    constexpr uint8_t COPI = 11;
    constexpr uint8_t MISO = 24;
    constexpr uint8_t CIPO = 24;
    constexpr uint8_t CS   = 15;

    // CAN --------------------------------------
    constexpr uint8_t CAN_TX = 3;
    constexpr uint8_t CAN_RX = 4;
}

// LED --------------------------------------
#undef LED_BUILTIN
constexpr uint8_t LED_BUILTIN = 13;
//constexpr uint8_t LED_BUILTIN = 23;