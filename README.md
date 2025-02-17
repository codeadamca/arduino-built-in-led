# Arduino and the Builtin LED

A basic example of turning the built-in LED on and off on an Arduino microcontroller.

## Arduino Code

Open up [Arduino Create](https://create.arduino.cc/editor/) and add the following code:

```cpp
// The setup function runs once when you press reset or power the board
void setup() {
  
  // Initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
  
}

// The loop function runs over and over again forever
void loop() {
  
  // Turn the LED on (HIGH is the voltage level)
  digitalWrite(LED_BUILTIN, HIGH);
  delay(500);
  
  // Turn the LED off by making the voltage LOW
  digitalWrite(LED_BUILTIN, LOW);
  delay(500);
  
}
```

> [View the Arduino code on Arduino Create](https://create.arduino.cc/editor/professoradam/4a7f0767-de98-4d02-bfbf-5d69dfd58710/preview)

## Curcuit

You will need to setup the following circuit using your Arduino:

![Tinkercad Circuit](_readme/tinkercad-built-in-led.png)

> [View the Circuit on Tinkercad](https://www.tinkercad.com/things/jOaJ7mR6LAt)

> Full tutorial URL:  
> https://codeadam.ca/learning/arduino-built-in-led.html

***

## Repo Resoures

* [Visual Studio Code](https://code.visualstudio.com/) (or any code editor)
* [Arduino Create](https://create.arduino.cc/editor) 

<br>
<a href="https://codeadam.ca">
<img src="https://cdn.codeadam.ca/images@1.0.0/codeadam-logo-coloured-horizontal.png" width="200">
</a>
