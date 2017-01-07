/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO 
  it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN takes care 
  of use the correct LED pin whatever is the board used.
  If you want to know what pin the on-board LED is connected to on your Arduino model, check
  the Technical Specs of your board  at https://www.arduino.cc/en/Main/Products
  
  This example code is in the public domain.

  modified 8 May 2014
  by Scott Fitzgerald
  
  modified 2 Sep 2016
  by Arturo Guadalupi
*/

#include <SoftPWM.h>

#define SegA 8
#define SegB 9
#define SegC 10
#define SegD 11
#define DelOn 1
#define DelOff 1
#define FadeUpTime 1000
#define FadeDownTime 1000

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  SoftPWMBegin();
  pinMode(SegA, OUTPUT);
  pinMode(SegB, OUTPUT);
  pinMode(SegC, OUTPUT);
  pinMode(SegD, OUTPUT);
  SoftPWMSet(SegA, 0); 
  SoftPWMSet(SegB, 0); 
  SoftPWMSet(SegC, 0); 
  SoftPWMSet(SegD, 0); 
  /*SoftPWMSetFadeTime(SegA, FadeUpTime, FadeDownTime);
  SoftPWMSetFadeTime(SegB, FadeUpTime, FadeDownTime);
  SoftPWMSetFadeTime(SegC, FadeUpTime, FadeDownTime);
  SoftPWMSetFadeTime(SegD, FadeUpTime, FadeDownTime);*/
}

// the loop function runs over and over again forever
void loop() {
digitalWrite(SegA, LOW);
digitalWrite(SegB, LOW);
digitalWrite(SegC, LOW);
digitalWrite(SegD, LOW);
delay(500);
SoftPWMSet(SegA, 0);
SoftPWMSet(SegB, 0);
SoftPWMSet(SegC, 0);
SoftPWMSet(SegD, 0);
delay(100);
  /*
  digitalWrite(SegA, HIGH);
  delay(DelOn);
  digitalWrite(SegA, LOW);
  delay(DelOff);
  digitalWrite(SegB, HIGH);
  delay(DelOn);
  digitalWrite(SegB, LOW);
  delay(DelOff); 
  digitalWrite(SegC, HIGH);
  delay(DelOn);
  digitalWrite(SegC, LOW);
  delay(DelOff);
  digitalWrite(SegD, HIGH);
  delay(DelOn);
  digitalWrite(SegD, LOW);
  delay(DelOff);*/
  SoftPWMSetFadeTime(SegA, FadeUpTime, FadeDownTime);
  SoftPWMSetFadeTime(SegB, FadeUpTime, FadeDownTime);
  SoftPWMSetFadeTime(SegC, FadeUpTime, FadeDownTime);
  SoftPWMSetFadeTime(SegD, FadeUpTime, FadeDownTime);

  digitalWrite(SegA, LOW);
  digitalWrite(SegB, LOW);
  digitalWrite(SegC, LOW);
  digitalWrite(SegD, LOW);
  delay(5000);
  SoftPWMSet(SegA, 240);
  SoftPWMSet(SegB, 240);
  SoftPWMSet(SegC, 240);
  SoftPWMSet(SegD, 240);
  delay(5000);
  SoftPWMSet(SegA, 200);
  SoftPWMSet(SegB, 200);
  SoftPWMSet(SegC, 200);
  SoftPWMSet(SegD, 200);
  delay(5000);
  SoftPWMSet(SegA, 100);
  SoftPWMSet(SegB, 100);
  SoftPWMSet(SegC, 100);
  SoftPWMSet(SegD, 100);
  delay(5000);
  SoftPWMSet(SegA, 100);
  SoftPWMSet(SegB, 100);
  SoftPWMSet(SegC, 100);
  SoftPWMSet(SegD, 100);
  delay(5000);
  SoftPWMSet(SegA, 50);
  SoftPWMSet(SegB, 50);
  SoftPWMSet(SegC, 50);
  SoftPWMSet(SegD, 50);  
  delay(5000);
  SoftPWMSet(SegA, 10);
  SoftPWMSet(SegB, 10);
  SoftPWMSet(SegC, 10);
  SoftPWMSet(SegD, 10);  
  delay(5000);
  SoftPWMSet(SegA, 0);
  SoftPWMSet(SegB, 0);
  SoftPWMSet(SegC, 0);
  SoftPWMSet(SegD, 0);

  delay(1000);

  circle();
  one();
  catchme();
  catchme();
  
  
  digitalWrite(SegA, LOW);
  digitalWrite(SegB, LOW);
  digitalWrite(SegC, LOW);
  digitalWrite(SegD, LOW);
  
  SoftPWMSet(SegA, 0);
  SoftPWMSet(SegB, 0);
  SoftPWMSet(SegC, 0);
  SoftPWMSet(SegD, 0);
  delay(1000);
}


void catchme(){

  SoftPWMSetFadeTime(SegA, 200, 200);
  SoftPWMSetFadeTime(SegB, 200, 200);
  SoftPWMSetFadeTime(SegC, 200, 200);
  SoftPWMSetFadeTime(SegD, 200, 200);
   delay(100);
  SoftPWMSet(SegA, 240);
  SoftPWMSet(SegB, 0);
  SoftPWMSet(SegC, 0);
  SoftPWMSet(SegD, 0);
  delay(200);
  SoftPWMSet(SegA, 0);
  SoftPWMSet(SegB, 240);
  SoftPWMSet(SegC, 0);
  SoftPWMSet(SegD, 0);
  delay(200);
  SoftPWMSet(SegA, 0);
  SoftPWMSet(SegB, 0);
  SoftPWMSet(SegC, 240);
  SoftPWMSet(SegD, 0);
  delay(200);
  SoftPWMSet(SegA, 0);
  SoftPWMSet(SegB, 0);
  SoftPWMSet(SegC, 0);
  SoftPWMSet(SegD, 240);
  delay(200);
  SoftPWMSet(SegA, 0);
  SoftPWMSet(SegB, 0);
  SoftPWMSet(SegC, 0);
  SoftPWMSet(SegD, 0);
  delay(200); 
  SoftPWMSet(SegA, 100);
  SoftPWMSet(SegB, 0);
  SoftPWMSet(SegC, 0);
  SoftPWMSet(SegD, 0);
  delay(200);
  SoftPWMSet(SegA, 0);
  SoftPWMSet(SegB, 100);
  SoftPWMSet(SegC, 0);
  SoftPWMSet(SegD, 0);
  delay(200);
  SoftPWMSet(SegA, 0);
  SoftPWMSet(SegB, 0);
  SoftPWMSet(SegC, 100);
  SoftPWMSet(SegD, 0);
  delay(200);
  SoftPWMSet(SegA, 0);
  SoftPWMSet(SegB, 0);
  SoftPWMSet(SegC, 0);
  SoftPWMSet(SegD, 100);
  delay(300);
  SoftPWMSet(SegA, 0);
  SoftPWMSet(SegB, 0);
  SoftPWMSet(SegC, 0);
  SoftPWMSet(SegD, 0);
  //delay(200);
  
  }

void one(){
  SoftPWMSetFadeTime(SegA, 1000, 1000);
  SoftPWMSetFadeTime(SegB, 1000, 1000);
  SoftPWMSetFadeTime(SegC, 1000, 1000);
  SoftPWMSetFadeTime(SegD, 1000, 1000);  
   delay(100);
  SoftPWMSet(SegA, 240);
  SoftPWMSet(SegB, 240);
  SoftPWMSet(SegC, 0);
  SoftPWMSet(SegD, 0);
  delay(5000);
  SoftPWMSet(SegA, 0);
  SoftPWMSet(SegB, 0);
  SoftPWMSet(SegC, 240);
  SoftPWMSet(SegD, 240);
  delay(5000);
  SoftPWMSet(SegA, 0);
  SoftPWMSet(SegB, 0);
  SoftPWMSet(SegC, 0);
  SoftPWMSet(SegD, 0);
  delay(1000);
  
  }
void circle(){
  SoftPWMSetFadeTime(SegA, 1000, 1000);
  SoftPWMSetFadeTime(SegB, 1000, 1000);
  SoftPWMSetFadeTime(SegC, 1000, 1000);
  SoftPWMSetFadeTime(SegD, 1000, 1000);
  delay(2000);
  SoftPWMSet(SegA, 240);
  SoftPWMSet(SegB, 0);
  SoftPWMSet(SegC, 0);
  SoftPWMSet(SegD, 0);  
  delay(2000);
  SoftPWMSet(SegA, 0);
  SoftPWMSet(SegB, 240);
  SoftPWMSet(SegC, 0);
  SoftPWMSet(SegD, 0);
  delay(2000);
  SoftPWMSet(SegA, 0);
  SoftPWMSet(SegB, 0);
  SoftPWMSet(SegC, 240);
  SoftPWMSet(SegD, 0);  
  delay(2000);
  SoftPWMSet(SegA, 0);
  SoftPWMSet(SegB, 0);
  SoftPWMSet(SegC, 0);
  SoftPWMSet(SegD, 240);  
  delay(2000);
  SoftPWMSet(SegA, 0);
  SoftPWMSet(SegB, 0);
  SoftPWMSet(SegC, 0);
  SoftPWMSet(SegD, 0); 
  delay(2000);
  SoftPWMSet(SegA, 240);
  SoftPWMSet(SegB, 0);
  SoftPWMSet(SegC, 0);
  SoftPWMSet(SegD, 0);  
  delay(2000);
  SoftPWMSet(SegA, 0);
  SoftPWMSet(SegB, 240);
  SoftPWMSet(SegC, 0);
  SoftPWMSet(SegD, 0);
  delay(2000);
  SoftPWMSet(SegA, 0);
  SoftPWMSet(SegB, 0);
  SoftPWMSet(SegC, 240);
  SoftPWMSet(SegD, 0);  
  delay(2000);
  SoftPWMSet(SegA, 0);
  SoftPWMSet(SegB, 0);
  SoftPWMSet(SegC, 0);
  SoftPWMSet(SegD, 240);
  delay(2000);  
  SoftPWMSet(SegA, 0);
  SoftPWMSet(SegB, 0);
  SoftPWMSet(SegC, 0);
  SoftPWMSet(SegD, 0); 
  delay(2000);
  }
