
<img src="/Documentation/V2.0_3d.jpg" alt="3d top" height="300" > <img src="/Documentation/V2.0_3d_bottom.jpg" alt="3d bottom" height="300" >

# MicroMod_3.2
Experimental mk20dx256vlh7 board compatible to the Sparkfun MicroMod carrriers. The board should be able to run firmware written for a Teensy 3.2 using the TeensyDuino core libraries. 

This board is just a quick shot to see if it is possible to hand solder the tiny components. 

Pictures, schematic and pinout in the documentation folder. Gerbers, BOM etc in the production folder

## Features:
- 8bit bus: PTD0 - PTD7 (D2, D14, D7, D8, D6, D20, D21, D5)
- Differential AD (A10, A11 / A12, A3)
- Serial1, Serial2 (D0, D1, / D9/D10)
- CAN (D3, D4)
- SPI (D11, D12, D13, D15)
- LED switchable (solder bridge) between D13 / D23
- SWD_DIO, SWD_CK (JTAG)
- RTC, V_Bat, BAT_VIN/3

## Functional Pinout

![Functional Pinout](/Documentation/functions.png)


## Schematic

[schematic](/Documentation/Schematic.pdf)

## BOM
https://octopart.com/bom-tool/5AbwHvxe**
