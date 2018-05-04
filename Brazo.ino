#include <Servo.h>
#define pinbase 11

#include <Servo.h>
#define pinladoi 8

#include <Servo.h>
#define pinladod 10

#include <Servo.h>
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
  base.write (2);
  base.write (-2);
}
