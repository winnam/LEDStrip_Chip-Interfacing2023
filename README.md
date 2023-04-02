# LEDStrip_Chip-Interfacing2023

The goal of this project is to interface a LED strip and see how the chip works overall. I purchased a WS2812B LED Strip for interfacing purposes, starting with the goal of getting it to work through Arduino and then creating my own library in C that others can use.

Included in this project are three example Arduino codes demonstrating different colors/techniques that can be implemented into the WS2812B. 
(All can be seen in demos posted on Wiki page of this project)

 **LEDStrip_TurnOn.ino** - I assigned a single color to turn on and fill all the LEDs in the strip. I put in comments the different color values that can be used if users want to change color.

**LEDStrip_BlinkDash.ino** - I assigned the color blue to turn on and turn off before going to the next LED. Once you go to the end of the strip, on the way back, the color green is used instead.
 
**LEDStrip_FillColor.ino** - I assigned a single color to fill all LEDs in the strip one at a time. Once fully filled, they turn off all at once. Process is then repeated. I put in comments the different color values that can be used if users want to change color.

I have also included my attempted C code library.

**LEDStrip.h** - The attempted library file, where I intially create methods names/variables specifically for pin and LED #.

**LEDStrip_Methods.c** - The attempted writing of some basic LED Strip methods. The goal was to be able to turn on the LED strip and change colors depending on the hex input.
