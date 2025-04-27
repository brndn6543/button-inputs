#include <Arduino.h>

int ledPin = 5;
int buttonApin = 9;
int buttonBpin = 8;

byte leds = 0;

void setup() {
   pinMode(ledPin, OUTPUT);

   // INPUT_PULLUP makes the pin to be used an input.
   // The default value for the input is HIGH, unless
   // it is pulled LOW by pressing the button.
   pinMode(buttonApin, INPUT_PULLUP);
   pinMode(buttonBpin, INPUT_PULLUP);
}

void loop() {
   // Two if statements--one for each button.
   if (digitalRead(buttonApin) == LOW) {
      digitalWrite(ledPin, HIGH);
   }

   if (digitalRead(buttonBpin) == LOW) {
      digitalWrite(ledPin, LOW);
   }
}