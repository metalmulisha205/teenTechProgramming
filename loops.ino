// initializing global variables
int myVar;

// runs one time on setup
void setup() {
  
  // set myVar to 1
  myVar = 1;
  
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
}

// continuously runs
void loop() {
  // while myVar is less than 0, print myVar and add 1
  while (myVar < 20){
    Serial.println(myVar);
    myVar ++; // add 1 to the value of myVar
  } 

  for (int i = 0; i<10; i++){
    Serial.println(i);
  }
  // wait 1000 miliseconds
  delay(1000);
}
