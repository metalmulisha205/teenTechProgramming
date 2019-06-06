int a;
int b;
// runs one time on setup
void setup() {
  
  // initialize myVar to contain the integer 150
  a = 1;
  b = 400;
  
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
}

// continuously runs
void loop() {

  // call on the code in myFunction
  myFunction(a, b);
  
  // wait 1000 miliseconds
  delay(1000);
}

// this function will check the value of a relative to b
void myFunction(int a, int b){
  // if a is greater th an b ... 
  if (a > b){
    Serial.println("A is greater than B");
  }
  // if a is equal to b ... 
  else if (a == b){
    Serial.println("A is equal to B");
  }
  // if none of the above cases are met ...
  else{
    Serial.println("A is less than B");
  }
}
