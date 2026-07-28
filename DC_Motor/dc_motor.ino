int motorpin=9;
void setup(){
  pinMode(motorpin,OUTPUT);
}

void loop(){
  digitalWrite(motorpin,HIGH);
  delay(1000);
  
  digitalWrite(motorpin,LOW);
  delay(1000);
}
