int temp = A0;
int greenLed = 2;
int redLed = 4;
int fan = 7;
int buzzer = 8;

int thresholdValue = 0;
int celsius = 0;
int fahrenheit = 0;

// Functions for various work
void greenLightOn(){
digitalWrite(greenLed, HIGH);
}
void greenLightOff(){
digitalWrite(greenLed, LOW);
}
void redLightOn(){
digitalWrite(redLed, HIGH);
}
void redLightOff(){
digitalWrite(redLed, LOW);
}
void fanOn(){
digitalWrite(fan, HIGH);
}
void fanOff(){
digitalWrite(fan, LOW);
}
void buzzerOn(){
digitalWrite(buzzer, HIGH);
}
void buzzerOff(){
digitalWrite(buzzer, LOW);
}

void setup()
{
pinMode(redLed, OUTPUT);
pinMode(greenLed, OUTPUT);
pinMode(fan, OUTPUT);
pinMode(buzzer, OUTPUT);
pinMode(temp, INPUT);
Serial.begin(9600);
}

void loop(){

celsius = map(((analogRead(A0) - 20) * 3.04), 0, 1023, -40, 125);
fahrenheit = ((celsius * 9) / 5 + 32);

Serial.print(celsius);
Serial.print(" C : ");
Serial.print(fahrenheit);
Serial.println(" F");

if( celsius<= 30){
greenLightOn();
redLightOff();
fanOff();
buzzerOff();
}
else if(celsius >= 31 && celsius <= 40){
greenLightOff();
fanOff();
buzzerOff();
redLightOn();
}
else if(celsius > 40){
redLightOn();
fanOn();
buzzerOn();
greenLightOff();

}
else{
Serial.println("Temperature is Normal");
}
delay(1000);
}
