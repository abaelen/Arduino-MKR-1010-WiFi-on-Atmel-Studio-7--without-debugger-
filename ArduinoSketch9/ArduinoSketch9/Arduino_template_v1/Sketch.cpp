/*Begining of Auto generated code by Atmel studio */
#include <Arduino.h>

/*End of auto generated code by Atmel studio */


//Beginning of Auto generated function prototypes by Atmel Studio
//End of Auto generated function prototypes by Atmel Studio

void setup() {
  // put your setup code here, to run once:
	pinMode(6,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
	digitalWrite(6,HIGH);
	delay(1000);
	digitalWrite(6,LOW);
	delay(1000);
}
