#include <Adafruit_NeoPixel.h>
int LEDPIN = 13;
int NUMPIXELS = 10;
int delayVal = 50;

Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, LEDPIN, NEO_GRB + NEO_KHZ800);
void setup() {
  // put your setup code here, to run once:
  pixels.begin();
  Serial.begin(9600);

 
}
int colors[] = {0xCCCC00, 0x1111CC, 0x003333, 0x882222};
void loop() {
  // Turn on Color Red:
      pixels.fill(0x200000, 0, 10);
  // Turn on Color Red:
      //pixels.fill(0x220000, 0, 10);
  // Turn on Color Green:
      //pixels.fill(0x222000, 0, 10);
  // Turn on Color Green:
      //pixels.fill(0x222200, 0, 10);
  // Turn on Color White:
      //pixels.fill(0x222220, 0, 10);
  // Turn on Color White:
      //pixels.fill(0x222222, 0, 10);
  pixels.show();
}
 
