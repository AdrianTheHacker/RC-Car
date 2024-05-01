#include <Arduino.h>
#include <Servo.h>


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

void loop() {
  moveForward();

  delay(500);

  stop();

  delay(500);

  moveBackwards();

  delay(500);

  stop();

  delay(500;)
}

