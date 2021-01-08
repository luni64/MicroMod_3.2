
<img src="Documentation/3d_top.jpg" alt="3d top" height="250" > <img src="Documentation/3d_bottom.jpg" alt="3d bottom" height="250" >

# MM32
Experimental NXP MK20DX256 controller board compatible to the SparkFun MicroMod (https://www.sparkfun.com/micromod) system and the [PJRC Teensyduino](https://www.pjrc.com/teensy/teensyduino.html) ecosystem. I.e., the board fits on the SparkFun MicroMod carriers and is able to run firmware written for a Teensy 3.2.

The MM32 board utilizes the un-brickable PJRC bootloader, preprogrammed on the MKL02 chip. Please note: You need to buy the bootloader directly from PJRC (https://www.pjrc.com/store/ic_mkl02.html). It won't work with an empty MKL02.
## Key features:
- Contiguous **8bit port** routed to BUS0-BUS7 (Teensy: PTD0 - PTD7)
- **Two differential ADCs** mapped onto A0/A1 and ADC_D+ ADC_D-
- **True DAC** on PWM_0
- Two **UARTS** (Serial1, Serial2)
- **SPI** interface
- **CAN** Bus
- **Real time clock (RTC)**: 32.679KHz crystal and V_Bat / BAT_VIN/3
supported
- SWD_DIO, SWD_CKL, **debug interface** (bootloader chip can be disabled with a solder bridge on the back side)
- LED pin selectable (solder bridge) between D13 and D23
- Layout optimized for hand soldering

## Functional Pinout

<img src="Documentation/functions.png"/>



## Production data

### PCB
Gerbers and drill files for the 4 layer, 0.8mm board can be found in the [KiCad/production](/KiCad/Production) folder. Production cost at Chinese board houses are currently (12-2020) less than USD 10 for 10 pieces plus shipping.

### Parts
Here a [link](https://octopart.com/bom-tool/5AbwHvxe) to an Octopart BOM
containing live updated prices and availability from major distributors. It also   provides links to datasheets, and technical information and alternative parts.
### Documentation
Schematic, pictures, pinouts and datasheets can be found in the documentation folder.

### Assembly
If you have experience in soldering SMD parts the assembly is straight forward. You don't need any special equipment. A standard 50W soldering iron (I use [that one](https://www.weller-tools.com/professional/EUR/en/Professional/Soldering+technology/Soldering+irons/Low-voltage+soldering+irons/Magnastat/TCP+24+) ) a magnifying glass (something like [this]( https://www.aliexpress.com/i/4000270805536.html)) and cheap head worn loupe glasses (e.g. [those](https://www.amazon.com/AORAEM-Magnifier-Glasses-Light-Extensions/dp/B01AJOD03A/ref=pd_vtp_194_1/145-9533834-3577657?_encoding=UTF8&pd_rd_i=B01AJOD03A&pd_rd_r=63fb740a-9b8e-4cf2-9c06-6a06746b77a2&pd_rd_w=vxmCN&pd_rd_wg=adZVj&pf_rd_p=4f2ab3e8-468a-4a7c-9b91-89d6a9221c29&pf_rd_r=BTKH33K3SHZ2QSCJZ0XT&psc=1&refRID=BTKH33K3SHZ2QSCJZ0XT)) are absolutely sufficient. Don't use a pinpoint soldering tip. You need something to transport heat quickly which is best done by a relatively large tip as shown in the video below. 

The only part I found a bit difficult to solder is the small bootloader chip (QFN16). The pads on the board are sufficiently long to solder the chip by hand in principle. However, it is a bit tedious to precisely align the chip to the pads. Start with soldering one pin, then control position and align the chip until it fits. It is helpful to apply some flux paste below the chip which will keep it in place during the alignment. Alternatively you can solder it with a hot air gun.

The rest of the parts are small but easy to solder.

Here a video showing the assembly:

[![MM32Assembly](https://img.youtube.com/vi/CCVqATbAmtM/0.jpg)](https://www.youtube.com/watch?v=CCVqATbAmtM)


## Firmware

The [firmware folder](/Firmware) contains a header defining the
MicroMod <-> Teensyduino pin mappings and a helper class to access the
8bit BUS.

## Debug configuration

You can disable the bootloader by grounding its reset pin. To do so you
need to close the solder bridge on the bottom of the board as shown here:

<img src="Documentation/debugConfig.png" alt="3d top" height="250">

You can then connect a debug probe (e.g. a JLink-Mini EDU) to the debug
header on the carrier board.

