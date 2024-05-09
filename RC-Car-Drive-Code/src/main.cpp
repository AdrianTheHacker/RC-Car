#include <Arduino.h>
// #include <Servo.h>


/*
Servo frontLeft;
Servo rearLeft;
Servo rearRight;
Servo frontRight;

int leftSideForwardPWM = 1763;
int leftSideBackwardsPWM = 1763;
int stopPWM = 1500;
// int backwardsPWM = 1200;
// int forwardsPWM = 1700;
// int stopPWM = 1500;


void setup() {
  Serial.begin(9600);

  frontLeft.attach(2);
  rearLeft.attach(3);
  rearRight.attach(4);
  frontRight.attach(5);
}


void moveForward() {
  frontLeft.writeMicroseconds(leftSideForwardPWM);
  rearLeft.writeMicroseconds(leftSideForwardPWM);
}


void moveBackwards() {
  frontLeft.writeMicroseconds(leftSideBackwardsPWM);
  rearLeft.writeMicroseconds(leftSideBackwardsPWM);
}


void stop() {
  frontLeft.writeMicroseconds(stopPWM);
  rearLeft.writeMicroseconds(stopPWM);
}
*/

/*
  BLE_Central_Device.ino

  This program uses the ArduinoBLE library to set-up an Arduino Nano 33 BLE Sense 
  as a central device and looks for a specified service and characteristic in a 
  peripheral device. If the specified service and characteristic is found in a 
  peripheral device, the last detected value of the on-board gesture sensor of 
  the Nano 33 BLE Sense, the APDS9960, is written in the specified characteristic. 

  The circuit:
  - Arduino Nano 33 BLE Sense. 

  This example code is in the public domain.
*/


bool ledOn = false;


void setup() {
  Serial.begin(9600);
  pinMode(13, OUTPUT);
}


void loop() {
  int value = Serial.read();

  if(value > 0) {
    ledOn = true;
  }

  if(ledOn) {
    digitalWrite(13, HIGH);
  }
  else {
    digitalWrite(13, LOW);
  }
}