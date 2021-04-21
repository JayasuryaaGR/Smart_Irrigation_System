
#include <dht.h>

dht DHT;

#define DHT11_PIN 5


const int ledss = 11;
const int ldr = A2;
int soilmoi = A0;
int led = 12;
const int out = 7;
const int an_in = A1;

void setup(){
  Serial.begin(9600);
  pinMode(ledss,OUTPUT);
 pinMode(ldr,INPUT);
 pinMode(soilmoi,INPUT);
  pinMode(led,OUTPUT);
   pinMode(an_in,INPUT);
  pinMode(out, OUTPUT);
}

void loop() {

 int ldrr = analogRead(ldr);
 Serial.println(ldrr);

 if (ldrr <= 300)
 {
  digitalWrite(ledss,HIGH);
 }
else
{
  digitalWrite(ledss,LOW);
}
delay(1000);

int r = analogRead(an_in);
 Serial.println(r);
  if (analogRead(an_in) > 3){
    digitalWrite(out, HIGH);
  }
  else {
    digitalWrite(out, LOW);
  }
  delay(1000);

  int s = analogRead(soilmoi);
 Serial.println(s);
  if (s > 700)
  {
    digitalWrite(led, HIGH);
    delay(1000);
  }
  else
  {
    digitalWrite(led, LOW);
    delay(1000);
  }

  int chk = DHT.read11(DHT11_PIN);
  Serial.print("Temperature = ");
  Serial.println(DHT.temperature);
  Serial.print("Humidity = ");
  Serial.println(DHT.humidity);
  delay(1000);
}
