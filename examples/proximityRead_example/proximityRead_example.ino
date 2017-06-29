#include <ROKduino.h>

ROKduino rok;
int TXport = 1;      // high or low power transmitter connected to sensor port 1
int RXport = 2;      // IR receiver sensor connected to sensor port 2

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(rok.proximityRead(TXport, RXport));
}