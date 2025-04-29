# button-inputs
A demonstration of push-button functionality using an Arduino UNO. The left button turns the LED on and the right button turns the LED off.

**Watch the demo below on YouTube.**

[![Watch on YouTube](https://i9.ytimg.com/vi/p0Tl_G_UiXk/mqdefault.jpg?sqp=CLDDxMAG-oaymwEmCMACELQB8quKqQMa8AEB-AH-CYAC0AWKAgwIABABGHIgRig1MA8=&rs=AOn4CLD0RylzStlw4MbwPENFJJ47zmKhXw)](https://youtu.be/p0Tl_G_UiXk)

`pinMode(ledPin, OUPUT);`

- Drives the pin. Puts 5 V on it (LED ON), `LOW` pulls it to 0 (LED off).

`pinMode(buttonPin, INPUT_PULLUP)`

- Enables an ~20 ohm resistor to VCC, so the pin is `HIGH` whenver the button is **not** pressed. When the button is pressed, the pin is shorted to GND, so it reads `LOW`.

`switchOnOff(onBtn, offBtn, ledPin)`

-  `if (digitalRead(onBtn) == LOW` if the button is pressed `digitalWrite(light, HIGH` LED comes on.
-  `if (digitalRead(offBtn) == LOW` if the button is pressed `digitalWrite(light, LOW)` LED goes off.

The buttons idle `HIGH`and go `LOW` on button press.
