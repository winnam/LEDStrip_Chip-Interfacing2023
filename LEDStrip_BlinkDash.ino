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
  // put your main code here, to run repeatedly:
  pixels.fill(0, 0, 10);
  for (int i = 0; i < 10; i++) {
    if(i > 0) pixels.fill(0,i-1,1);
    //pixels.rainbow(0,0,255,255);
    pixels.fill(0x222200,i, 1);
    delay(delayVal);
    pixels.show();
  }
  for (int i = 9; i >= 0; i--) {
    if(i < 9) pixels.fill(0,i+1,1);
    pixels.fill(0x005555,i, 1);
    //pixels.rainbow(0,1,255,255);
    delay(delayVal);
    pixels.show();
  }
 
}
