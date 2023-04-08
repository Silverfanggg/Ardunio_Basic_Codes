int buton1 = 7;
int buton2= 6;
int led1 = 8;
int led2 = 9;
void setup() {
  Serial.begin(9600);
  pinMode(buton1,INPUT);
  pinMode(buton2,INPUT);
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT); 

}

void loop() {
  int a = digitalRead(buton1);
  int b = digitalRead(buton2);
  digitalWrite(led1,a);
  digitalWrite(led2,b);
  Serial.print(a);
  Serial.print(b);
  delay(100);
  
  
   

  
  

}
