# MicroMod_3.2
Experimental mk20dx256vlh7 board compatible to the Sparkfun MicroMod system. This is just a quick shot to see if it is possible to hand solder the tiny board. 

Pictures and schematic in the Production folder

Used a T3.2 as base for the board, but did not yet bring all possible signals out to the connector. 

**Features:**
- 8bit bus: PTD0 - PTD7 (D2, D14, D7, D8, D6, D20, D21, D5)
- Differential AD (A10, A11 / A12, A3) 
- Serial1, Serial2 (D0, D1, / D9/D10) 
- CAN (D3, D4)
- SPI (D11, D12, D13, D15)
- LED on D16
- SWD_DIO, SWD_CK (JTAG)


![3dTop](/Production/3d_top.jpg)
![3dBpttom](/Production/3d_bottom.jpg)

[schematic](/Production/TeensyMM.pdf)
