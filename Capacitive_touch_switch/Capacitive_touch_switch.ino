
/*
 * Date created: 20/08/2020 
 * Author: Sifat Salehin Ananyo
 * Organization: Swinburen IoT and AI Club
 * Version: 1.0.0
 * 
 */

int touch;
int tap = 1;
const int ledPin = 2;

void setup() {
  Serial.begin(115200);
  delay(10000);
  pinMode (ledPin, OUTPUT);
  Serial.println("ESP32 Touch & Blink Test");
}

void loop() {
  touch = touchRead(T0);
  Serial.println(touchRead(T0));
  delay (350);

if (touch <30){
  tap++;
  
  if (tap%2==0){
      digitalWrite (ledPin, HIGH);
      delay (250);
  }
  else if (tap%2==1)
   {
    digitalWrite (ledPin, LOW);
    delay (250);
   }
}
}
