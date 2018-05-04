#include <Servo.h>
#define initBase 90
#define pinbase 11

#include <Servo.h>
#define initBase 90
#define pinladoi 8

#include <Servo.h>
#define initBase 90
#define pinladod 10

#include <Servo.h>
#define initBase 90
#define pingarra 9

Servo base;
Servo ladoi;
Servo ladod;
Servo garra;

void setup() {
base.attach (pinbase);
ladoi.attach (pinladoi);
ladod.attach (pinladod);
garra.attach (pingarra);
}

void loop() {
  base.write (initBase +2);
  base.write (initBase -2);
}
