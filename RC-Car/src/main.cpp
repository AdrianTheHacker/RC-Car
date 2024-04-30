#include <Arduino.h>

// put function declarations here:
int myFunction(int, int);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("Hello, world!");
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("Hello, world!");
  delay(1000);
}
