int a;
int b;

// runs one time on setup
void setup() {
  
  // set a to 1 and b to 400
  int a = 1;
  int b = 400;
  
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
}

// continuously runs
void loop() {
  
  if (a > b){
    Serial.println("A is greater than B");
  }
  else if (a == b){
    Serial.println("A is equal to B");
  }
  else{
    Serial.println("A is less than B");
  }
  
  // wait 1000 miliseconds
  delay(1000);
}
