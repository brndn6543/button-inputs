#include <Arduino.h>

int ledPin = 5;
int buttonApin = 9;
int buttonBpin = 8;

byte leds = 0;

// Function to control on/off switching.
void switchOnOff(int onBtn, int offBtn, int light) {
   // LED comes on.
   if (digitalRead(onBtn) == LOW) {
      digitalWrite(light, HIGH);
   }

   // LED goes off.
   if (digitalRead(offBtn) == LOW) {
      digitalWrite(light, LOW);
   }
}

void setup() {
   // Put 5 V on it (LED on).
   pinMode(ledPin, OUTPUT);

   // Pin is HIGH whenever the button is not pressed.
   // When the button is pressed, the pin is shorted to GND, reading LOW.
   pinMode(buttonApin, INPUT_PULLUP);
   pinMode(buttonBpin, INPUT_PULLUP);
}

void loop() {
   switchOnOff(buttonApin, buttonBpin, ledPin);
}