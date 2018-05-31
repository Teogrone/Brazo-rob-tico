#include <Servo.h>
#define pinbase 13
#define pinladod 10
#define pinladoi 11
#define pingarra 9
#define NFIL 1

float matriz_b [NFIL]={123};//Base
float matriz_d [NFIL]={20};//Lado derecho
float matriz_i [NFIL]={90};//Lado izquierdo
float matriz_g [NFIL]={160};//Garra

Servo garra;
Servo base;
Servo ladod;
Servo ladoi;

int i;

void setup() {
  base.attach (pinbase);
  ladod.attach (pinladod);
  ladoi.attach (pinladoi);
  garra.attach (pingarra);

  for(i=0;i<4;i++){
  base.write(matriz_b[i]);
  delay(1000);
  ladod.write(matriz_d[i]);
  delay(500);
  ladoi.write(matriz_i[i]);
  delay(1000);
  garra.write(matriz_g[i]);
  delay(1000);
  }
}

void loop(){
}
