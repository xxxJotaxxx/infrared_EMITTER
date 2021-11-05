//libraries
#include <Arduino.h>
#include <IRremote.h>

void setup()
{
    //initialize IrSender in pin 3
    IrSender.begin(3, ENABLE_LED_FEEDBACK);
}

void loop()
{
    //send the code in HEX format
    IrSender.sendNEC(0xF720DF, 32);
    delay(1000);
    //send the code in HEX format
    IrSender.sendNEC(0xF7A05F, 32);
    delay(1000);
    //send the code in HEX format
    IrSender.sendNEC(0xF7609F, 32);
    delay(1000);
}