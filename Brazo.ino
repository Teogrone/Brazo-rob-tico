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

  base.write (val=initBase +25);
  delay (5000);
  garra.write (val=initBase +110);
  delay (2000);
  ladod.write (val=initBase -90);
  delay (2000);
  base.write(val=initBase -40);
  delay (6000);
  base.write(val=initBase -80);
  delay (2000);
  ladod.write(val=initBase +0);
  delay (2000);
  garra.write(val=initBase -20);
  delay (2000);
  base.write (val=initBase +25);
  delay (5000);
  garra.write (val=initBase +110);
  delay (2000);
  ladod.write (val=initBase -90);
  delay (2000);
  base.write(val=initBase -40);
  delay (6000);
  base.write(val=initBase -80);
  delay (2000);
  ladod.write(val=initBase +0);
  delay (2000);
  garra.write(val=initBase -20);
  delay (2000);
  base.write (val=initBase +25);
  delay (5000);
  garra.write (val=initBase +110);
  delay (2000);
  ladod.write (val=initBase -90);
  delay (2000);
  base.write(val=initBase -40);
  delay (6000);
  base.write(val=initBase -80);
  delay (2000);
  ladod.write(val=initBase +0);
  delay (2000);
  garra.write(val=initBase -20);
  delay (2000);
  base.write (val=initBase +25);
  delay (5000);
  garra.write (val=initBase +110);
  delay (2000);
  ladod.write (val=initBase -90);
  delay (2000);
  base.write(val=initBase -40);
  delay (6000);
  base.write(val=initBase -80);
  delay (2000);
  ladod.write(val=initBase +0);
  delay (2000);
  garra.write(val=initBase -20);
  delay (2000);
  base.write (val=initBase +25);
  delay (5000);
  garra.write (val=initBase +110);
  delay (2000);
  ladod.write (val=initBase -90);
  delay (2000);
  base.write(val=initBase -40);
  delay (6000);
  base.write(val=initBase -80);
  delay (2000);
  ladod.write(val=initBase +0);
  delay (2000);
  garra.write(val=initBase -20);
  delay (2000);
  
}

void loop() {

  }
