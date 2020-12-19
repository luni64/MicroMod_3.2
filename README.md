
<img src="Documentation/3d_top.jpg" alt="3d top" height="250" > <img src="Documentation/3d_bottom.jpg" alt="3d bottom" height="250" >

# MM3.2
Experimental NXP MK20dx256 controller board compatible to the Sparkfun MicroMod
carriers. The board should be able to run firmware written for a Teensy 3.2
using the TeensyDuino core libraries (currently under development)
## Key features:
- Contiguous **8bit port** routed to BUS0-BUS7 (PTD0 - PTD7)
- **Two differential ADCs** mapped onto A0/A1 and ADC_D+ ADC_D-
- **True DAC** on PWM_0
- Two **UARTS** (Serial1, Serial2)
- **SPI** interface
- **CAN** Bus
- **Real time clock (RTC)**: 32.679KHz crystal and V_Bat / BAT_VIN/3 supported
- SWD_DIO, SWD_CK, **debug interface** (bootloader chip can be disabled)
- LED pin selectable (solder bridge) between D13 and D23

## Functional Pinout

![Functional Pinout](/Documentation/functions.png)


## Production data
Here a [link](https://octopart.com/bom-tool/5AbwHvxe) to an Octopart BOM
containing live updated prices and availability from major distributors. It also
provides links to datasheets, and technical information and alternative parts.

Gerbers and drill files can be found in the [KiCad/production](/KiCad/Production) folder


Schematic, pictures, pinouts and datasheets can be found in the documentation folder.


## Firmware

The [firmware folder](/Firmware) contains a header defining the
MicroMod <-> Teensyduino pin mappings and a helper class to access the
8bit BUS.

