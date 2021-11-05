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
    IrSender.sendNECMSB(0xF720DF, 32, false);
    delay(1000);
    //send the code in HEX format
    IrSender.sendNECMSB(0xF7A05F, 32, false);
    delay(1000);
    //send the code in HEX format
    IrSender.sendNECMSB(0xF7609F, 32, false);
    delay(1000);
}