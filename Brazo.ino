#include <Servo.h>
#define pinbase 13
#define pinladod 10
#define pinladoi 11
#define pingarra 12
#define pinboton 6
#define pinboton2 5
#define pinboton3 3
#define pinboton4 2
#define pinboton5 7
#define pinboton5 8
#define initBase 90

Servo base;
Servo ladoi;
Servo ladod;
Servo garra;

int val;
int boton=0;
int boton2=0;
int boton3=0;
int boton4=0;
int boton5=0;
int boton6=0;

void setup() {
base.attach (pinbase);
ladoi.attach (pinladoi);
ladod.attach (pinladod);
garra.attach (pingarra);

pinMode (6,INPUT);
pinMode (5,INPUT);
pinMode (4,INPUT);
pinMode (3,INPUT);
pinMode (7,INPUT);
pinMode (8,INPUT);

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
  boton=digitalRead(6);
  if (boton==HIGH){
    ladod.write(val= initBase +45);
    delay(10);
    }
  boton2=digitalRead(5);
  if (boton2==HIGH){
    ladod.write(val= initBase -90);
    delay(10);
    }
  boton3=digitalRead(3);
  if (boton3==HIGH){
    base.write(val= initBase -30);
    delay(10);
    }
  boton4=digitalRead(2);
  if (boton4==HIGH){
    base.write(val= initBase +100);
    delay(10);
    }
  boton5=digitalRead(7);
  if (boton5==HIGH){
    garra.write(val= initBase +120);
    delay(10);
    }
  boton6=digitalRead(8);
  if (boton6==HIGH){
    garra.write(val= initBase +30);
    delay(10);
    }
  }
