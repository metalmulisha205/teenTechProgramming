String myVar;
// runs one time on setup
void setup() {
  
  // initialize myVar to contain the string "Hello, World!"
  myVar =  "Hello, World!";
  
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
}

// continuously runs
void loop() {
  
  // print out a line to the serial
  Serial.println("Hello, World!");

  // wait 100 miliseconds
  delay(1000);
}
