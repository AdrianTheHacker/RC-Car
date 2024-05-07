#include <Arduino.h>
#include <Servo.h>


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

void setup() {
  Serial.begin(9600);
  delay(500);

  Serial.println("Drive Code File");
}


void loop() {
  delay(50);
}

