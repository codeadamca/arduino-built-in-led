
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
