# LEDStrip_Chip-Interfacing2023

The goal of this project is to interface a WS2812B LED strip and see how the chip works overall. So far, I was able to get the chip up and running on using Arduino code using the official Adafruit Neopixel Library. 

Here are the main methods from the Adadfruit Neopixel Library I used to demonstrate the chip's use:

  **fill()** : Assigns a color to each LED pixel based on the bit number sent from Arduino.
  
  **show()** : Turns on the LED pixel (based on whatever color and brightness has been assigned).
  
  **rainbow()** : An assigned pattern following the order of the rainbow - red, orange, yellow, green, blue, purple, and pink.

Here is the circuit set up for the WS2812B :
<p align="center">
   <img src= "https://user-images.githubusercontent.com/89352294/229375009-b2cb571f-2e4f-4614-a85e-9c9f348782a7.jpg" width="400" height="400" />
</p>

Here are some example videos of me demonstating the WS2812B with Arduino code in use:

  **Demo of LEDStrip_TurnOn :** https://youtu.be/n2RnXqCWE58
  
    Note: In "LEDStrip_TurnOn", I assigned a single color to turn on and fill all the LEDs in the strip. I put in comments the different color values that can be
    used if users want to change color.
    
  **Demo of LEDStrip_BlinkDash :** https://youtu.be/3jjTefLI4Rg
  
    Note: In "LEDStrip_BlinkDash", I assigned the color blue to turn on and turn off before going to the next LED. Once you go to the end of the strip, on the way back,
    the color green is used instead.
    
  **Demo of LEDStrip_FillColor :** https://youtu.be/PbMsQ4z_4cQ
  
    Note: In "LEDStrip_FillColor",I assigned a single color to fill all LEDs in the strip one at a time. Once fully filled, they turn off all at once. Process is 
    then repeated. I put in comments the different color values that can be used if users want to change color.
    
