#include "ROKduino.h"
// Pointer to ROKduino lib
ROKduino* rok = ROKduino::getInstance();
byte sensorPort = 1;	// connect sensor to sensor port 1
byte outputPort = 1; 	// connect motor or light module to output port 1

int sensorValue;
int speed;

void setup() {
  Serial.begin(115200);
}

void loop() {
  sensorValue = rok->sensorRead(sensorPort);
  Serial.println(sensorValue);
  delay(10);
  speed = map(sensorValue,0,1023,-1023,1023);
  rok->motorWrite(outputPort,speed);
}