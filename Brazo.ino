#include <Servo.h>
#define pinbase 11
#define pinladoi 7
#define pinladod 4
#define pingarra 12
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

  base.write (val=initBase +90);
  delay (4000);
  ladod.write (val=initBase -5);
  delay (1000);
  garra.write (val=initBase +110);
  delay (1000);
  ladod.write (val=initBase -90);
  delay (1000);
  base.write(val=initBase -40);
  delay (500);
  ladod.write (val=initBase -45);
  delay (500);
  ladoi.write (val=initBase -25);
  delay (500);
  ladoi.write (val=initBase +5);
  delay (200);
  ladoi.write (val=initBase -25);
  delay (200);
  ladoi.write (val=initBase +5);
  delay (200);
  ladoi.write (val=initBase +5);
  delay (200);
  ladoi.write (val=initBase -25);
  delay (200);
  ladoi.write (val=initBase +5);
  delay (200);
  ladoi.write (val=initBase -25);
  delay (200);
  ladoi.write (val=initBase +5);
  delay (200);
  ladoi.write (val=initBase -25);
  delay (200);
  base.write (val=initBase +30);
  ladod.write (val=initBase -90);
  delay (500);
  base.write (val=initBase -60);
  ladod.write (val=initBase);
  delay (500);
  ladod.write (val=initBase -60);
  delay (500);
  base.write (val=initBase -15);
  delay (500);
  ladoi.write (val=initBase -25);
  delay (500);
  ladoi.write (val=initBase +5);
  delay (200);
  ladoi.write (val=initBase -25);
  delay (200);
  ladoi.write (val=initBase +5);
  delay (200);
  ladoi.write (val=initBase +5);
  delay (200);
  ladoi.write (val=initBase -25);
  delay (200);
  ladoi.write (val=initBase +5);
  delay (200);
  ladoi.write (val=initBase -25);
  delay (200);
  ladoi.write (val=initBase +5);
  delay (200);
  ladoi.write (val=initBase -25);
  delay (200);
  base.write (val=initBase +60);
  delay (500);
  ladoi.write (val=initBase -25);
  delay (500);
  ladoi.write (val=initBase +5);
  delay (200);
  ladoi.write (val=initBase -25);
  delay (200);
  ladoi.write (val=initBase +5);
  delay (200);
  ladoi.write (val=initBase +5);
  delay (200);
  ladoi.write (val=initBase -25);
  delay (200);
  ladoi.write (val=initBase +5);
  delay (200);
  ladoi.write (val=initBase -25);
  delay (200);
  ladoi.write (val=initBase +5);
  delay (200);
  ladoi.write (val=initBase -25);
  delay (200);
  base.write (val=initBase +70);
  ladod.write (val=initBase -90);
  delay (500);
  base.write (val=initBase +20);
  ladod.write (val=initBase -15);
}

void loop() {

  }
