//naming the code
#ifndef LEDStrip
#define LEDStrip

#include <stdint.h>
#include <stdlib.h>
#include <avr/io.h>
#include <util/delay.h>
#include <string.h>
#include <stdbool.h>

    #define num 10;
    #define pin 13;
    //LEDStrip(uint16_t num, uint8_t p);
    // Pre-set colors for easier use
    #define red = 0xCC0000;
    #define orange = 0xFF5100;
    #define yellow = 0xFFFF00;
    #define green = 0x00CC00;
    #define blue = 0x00CCCC;
    #define purple = 0xCC00CC;
    #define pink = 0xCC4444;
    #define white = 0xFFFFFF;
    
    
    
    void begin();
    void show();
    void fill(uint32_t c, uint16_t first, uint16_t count);
    void clear();
    void setPixelColor(uint16_t index, uint32_t color);

#endif