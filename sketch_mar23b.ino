/*

*/

//Servo library 
#include <Servo.h>

Servo ESC; 
Servo ESC1;// create servo object to control the ESC

int controllerInput; //to be changed later ***

void setup() {
  // Attach the ESC on pin 1
  ESC.attach(1, 1000, 2000); // (pin, min pulse width, max pulse width in microseconds) 
}

void loop() {
  
  ESC.write(controllerInput);    // Send the signal to the ESC
}
