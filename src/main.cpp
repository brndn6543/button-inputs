#include <Arduino.h>

int ledPin = 5;
int buttonApin = 9;
int buttonBpin = 8;

byte leds = 0;

// Function to control on/off switching.
void switchOnOff(int onBtn, int offBtn, int light) {
   if (digitalRead(onBtn) == LOW) {       // If the light is off...
      digitalWrite(light, HIGH);  // turn it on.
   }

   if (digitalRead(offBtn) == LOW) {      // Off button is always low / off...
      digitalWrite(light, LOW);  // turn the light off.
   }
}

void setup() {
   pinMode(ledPin, OUTPUT);

   // INPUT_PULLUP makes the pin to be used an input.
   // The default value for the input is HIGH, unless
   // it is pulled LOW by pressing the button.
   pinMode(buttonApin, INPUT_PULLUP);
   pinMode(buttonBpin, INPUT_PULLUP);
}

void loop() {
   switchOnOff(buttonApin, buttonBpin, ledPin);
}