// Give pin 13 a name

int ledPin = 13;

void setup(){

// Tell the Arduino that LedPin sends out power 
  pinMode (ledPin, OUTPUT);

}

void loop() {

  digitalWrite(ledPin, HIGH); // Turn the LED ON 
  delay(1000);             // Wait for6 1 second 
  digitalWrite(ledPin, LOW); // Turn the LED OFF 
  delay(1000); // Wait for 1 second
  }
  