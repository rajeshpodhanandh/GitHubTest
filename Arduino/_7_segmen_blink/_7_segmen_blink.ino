// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin 13 as an output.
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(13, HIGH);   
  delay(50);              
  digitalWrite(13, LOW);   
  delay(50);             
  digitalWrite(12, HIGH);   
  delay(50);             
  digitalWrite(12, LOW);   
  delay(50);
  digitalWrite(11, HIGH);   
  delay(50);             
  digitalWrite(11, LOW);   
  delay(50);  
  digitalWrite(10, HIGH);   
  delay(50);              
  digitalWrite(10, LOW);   
  delay(50);             
  digitalWrite(9, HIGH);   
  delay(50);             
  digitalWrite(9, LOW);   
  delay(50);
  digitalWrite(8, HIGH);   
  delay(50);             
  digitalWrite(8, LOW); 
  delay(50); 
  digitalWrite(7, HIGH);   
  delay(50);             
  digitalWrite(7, LOW); 
  delay(50); 
}
