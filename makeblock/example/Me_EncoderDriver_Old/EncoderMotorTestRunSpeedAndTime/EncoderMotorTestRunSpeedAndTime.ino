#include "MeOrion.h"
#include <Wire.h>
#include <SoftwareSerial.h>

MeEncoderMotor motor2(0x09, SLOT2);   //  motor at slot2

void setup()
{
  motor2.begin();
  Serial.begin(9600);
}

void loop()
{
  motor2.runSpeedAndTime(50,2000);
  delay(1000);
}
