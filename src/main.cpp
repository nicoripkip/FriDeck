#include "Arduino.h"


#define BAUD 115200


void setup()
{
    Serial.begin(BAUD);
}


void loop()
{
    Serial.println("Hej verden!");
    delay(500);
}
