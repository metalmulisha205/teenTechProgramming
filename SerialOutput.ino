

// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
}

// the loop routine runs over and over again forever:
void loop() {
  // print out a line to the serial
  Serial.println("Hello, World!");

  // wait 100 miliseconds
  delay(1000);
}
