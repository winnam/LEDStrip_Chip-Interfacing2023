#include <Adafruit_NeoPixel.h>

#define LED_PIN 13 // specify the pin the LED strip is connected to
#define LED_COUNT 10 // specify the number of LEDs in the strip

Adafruit_NeoPixel strip(LED_COUNT, LED_PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  strip.begin();
  strip.show(); // Initialize all pixels to "off"
}

void loop() {
  for (int i = 0; i <= 10; i++) {
  // Turn on the first LED with color
  //Green
    //strip.fill(0x00CC00,0,10);
  //Red
    //strip.fill(0xCC0000,0,10);
 //Purple
    //strip.fill(0xCC00CC);
 //Pink
    strip.fill(0xCC4444,0,i);
 //Aqua Blue
    //strip.fill(0x00CCCC,0,10);
 //Yellow
    //strip.fill(0xFFA500,0,10);
 //Orange
   //strip.fill(0xFF5100,0,10);
//White
   //strip.fill(0xFFFFFF,0,10);
//Rainbow
  //strip.rainbow(0,1,255,255);
  delay(1000); // Wait for 1 second
  //strip.fill(0,0,i); //countdown colors
  strip.show();
  strip.clear();
 
  }
  
}
