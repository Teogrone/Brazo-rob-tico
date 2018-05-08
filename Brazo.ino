#include <Servo.h>
#define pinbase 11
#define pinladoi 8
#define pinladod 10
#define pingarra 9
#define initBase 90

Servo base;
Servo ladoi;
Servo ladod;
Servo garra;

int val;

void setup() {
base.attach (pinbase);
ladoi.attach (pinladoi);
ladod.attach (pinladod);
garra.attach (pingarra);
}

void loop() {
  base.write (val=initBase +50);
  delay (2000);
  ladod.write (val=initBase +50);
  delay (2000);
  ladoi.write (val=initBase +50);
  delay (2000);
  base.write (val=initBase -50); 
  delay (2000);
  ladoi.write (val=initBase -50);
  delay (2000);
  ladod.write (val=initBase -50);
  delay (2000);
  }
