//libraries
#include <Arduino.h>
#include <IRremote.h>
uint8_t sRepeats = 0;

void setup()
{
    //initialize IrSender in pin 3
    IrSender.begin(3, ENABLE_LED_FEEDBACK);
}

void loop()
{
    //send the code
    IrSender.sendNECRaw(0xFB04EF00, sRepeats);
    delay(1000);
    IrSender.sendNECRaw(0xFA05EF00, sRepeats);
    delay(1000);
    IrSender.sendNECRaw(0xF906EF00, sRepeats);
    delay(1000);
    IrSender.sendNECRaw(0xE916EF00, sRepeats);
    delay(1000);
}