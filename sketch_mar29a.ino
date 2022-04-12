/*

*/
#include <servo.h>

Servo ESCleftcw;
Servo ESCrightcw;
Servo ESCleftccw;
Servo ESCrightccw;

int rpm = 1500;
int incomingByte = 0;

void setup() {
   ESCleftcw.attach(1);
   ESCrightcw.attach(2);
   ESCleftccw.attach(3);
   ESCrightccw.attach(4);
}

void loop() {
   ESCleftcw.write(rpm);
   ESCrightcw.write(rpm);
   ESCleftccw.write(rpm*-1);
   ESCrightccw.write(rpm*-1);
}
