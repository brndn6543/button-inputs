# button-inputs
A demonstration of push-button functionality using an Arduino UNO. The left button turns the LED on and the right button turns the LED off. Watch the demo below on YouTube.

[![Watch on YouTube](https://i9.ytimg.com/vi/p0Tl_G_UiXk/mq2.jpg?sqp=CMjcucAG-oaymwEmCMACELQB8quKqQMa8AEB-AHUBoAC4AOKAgwIABABGHIgRSg0MA8=&rs=AOn4CLBro4METR1r5mHhfLRGUZMy3DXeBw)](https://youtu.be/p0Tl_G_UiXk)

The `setup` function defines the ledPin as being an `OUTPUT` as normal, but there are two inputs
to deal with. pinMode is set to be `INPUT_PULLUP`. This means that the pin is to be used
as an input, but if nothing else is connected to the input, it should be
pulled up to `HIGH`.

Switches are connected to GND. When a switch is pressed, it connects
the pin to GND, so that is it no longer `HIGH`.