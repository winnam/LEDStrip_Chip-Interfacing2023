#include "LEDStrip.h"

void begin() {
  pinMode(pin, OUTPUT);
  digitalWrite(pin, LOW);

    int numPixels = num;
}

void fill(uint32_t color, uint16_t first, uint16_t count) {
//Setting up conditional variables
  uint16_t index;
  uint16_t final;

// Return nothing if past end of strip, prevent error
  if (first >= numPixels) {
    return;
  }

  // Finds index after the last pixel
  if (count == 0) {
    final = numPixels;
  } else {
    end = first + count;
    if (end > numPixels)
      end = numPixels;
  }

  for (i = first; i < end; i++) {
    setPixelColor(index, color);
  }
}

void clear(uint16_t i) {
  for(i = 1; i <= numPixels; i++) {
    setPixelColor(i,0);
  }
}

void setPixelColor(uint16_t index, uint32_t color) {

  uint32_t hexColor = color << 8;
 
  uint8_t w = (uint8_t)(color >> 24);
  p[index] =  w;

  }