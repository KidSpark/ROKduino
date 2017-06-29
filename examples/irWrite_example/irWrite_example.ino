#include <ROKduino.h>

ROKduino rok;
byte TXport = 1;      // high or low power transmitter connected to sensor port 1

void setup() {
  // put your setup code here, to run once:
}

void loop() {
  // put your main code here, to run repeatedly:
  rok.irWrite(TXport, CMD_SPIN_RIGHT); // address 0 by default
  delay(200);
}