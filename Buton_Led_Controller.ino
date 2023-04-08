#define Buton 8
#define Led 10




void setup() {
  pinMode(Buton,INPUT);
  pinMode(Led,INPUT);

}

void loop() {
  if(digitalRead(Buton)==1)
  digitalWrite(Led,HIGH);
  else
  digitalWrite(Led,LOW);
  
}
