void setup() {
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);

}

void loop() {
  digitalWrite(5,HIGH);
  delay(5000);
  digitalWrite(5,HIGH);
  digitalWrite(6,HIGH);
  delay(1500);
  digitalWrite(6,LOW);
  digitalWrite(5,LOW);
  digitalWrite(7,HIGH);
  delay(5000);
  digitalWrite(7,LOW);
  digitalWrite(6,HIGH);
  delay(1000);
  digitalWrite(6,LOW);
  delay(1000);
  

}
