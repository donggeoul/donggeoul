#define MINANALOG 0
#define MAXANALOG 1023
#define MINDELAY 0
#define MAXDELAY 100


#include <Servo.h>

Servo servo;
int potPin = 0;
int potval;
int nRedPin = 2;
int angle;
int nDelay = 200;

void GenLEDigitalOutput(int nNumPin, int nCmd, int nDelay)
{
  digitalWrite(nNumPin, nCmd);
  delay(nDelay);
}

void GenLEDAnalogOutput(int nNumPin, int nCmd, int nDelay)
{
  analogWrite(nNumPin, nCmd);
  delay(nDelay);
}


void setup()
{
  servo.attach(3);
  pinMode(nRedPin, OUTPUT);
  Serial.begin(9600);
  
}

void loop()
{
  potval = analogRead(potPin);
  angle = map(potval, 0, 1023, 0, 179);
  servo.write(angle);
  
  
  if(((angle) > 0)&&((angle) <= 10))
  {
     analogWrite(nRedPin, 255);
     delay(200);
     analogWrite(nRedPin, 0);
     delay(200);
  }
  if(((angle) > 10)&&((angle) <= 20))
   {
     analogWrite(nRedPin, 255);
     delay(190);
     analogWrite(nRedPin, 0);
     delay(190);
   }
  if(((angle) > 20)&&((angle) <= 30))
   {
     analogWrite(nRedPin, 255);
     delay(180);
     analogWrite(nRedPin, 0);
     delay(180);
   }
  if(((angle) > 30)&&((angle) <= 40))
   {
     analogWrite(nRedPin, 255);
     delay(170);
     analogWrite(nRedPin, 0);
     delay(170);
   }
  if(((angle) > 40)&&((angle) <= 50))
   {
     analogWrite(nRedPin, 255);
     delay(160);
     analogWrite(nRedPin, 0);
     delay(160);
   }
  if(((angle) > 50)&&((angle) <= 60))
   {
     analogWrite(nRedPin, 255);
     delay(150);
     analogWrite(nRedPin, 0);
     delay(150);
   }
  if(((angle) > 60)&&((angle) <= 70))
   {
     analogWrite(nRedPin, 255);
     delay(140);
     analogWrite(nRedPin, 0);
     delay(140);
   }
  if(((angle) > 70)&&((angle) <= 80))
   {
     analogWrite(nRedPin, 255);
     delay(130);
     analogWrite(nRedPin, 0);
     delay(130);
   }
  if(((angle) > 80)&&((angle) <= 90))
   {
     analogWrite(nRedPin, 255);
     delay(120);
     analogWrite(nRedPin, 0);
     delay(120);
   }
  if(((angle) > 90)&&((angle) <= 100))
   {
     analogWrite(nRedPin, 255);
     delay(110);
     analogWrite(nRedPin, 0);
     delay(110);
   }
  if(((angle) > 100)&&((angle) <= 110))
   {
     analogWrite(nRedPin, 255);
     delay(100);
     analogWrite(nRedPin, 0);
     delay(100);
   }
  if(((angle) > 110)&&((angle) <= 120))
   {
     analogWrite(nRedPin, 255);
     delay(90);
     analogWrite(nRedPin, 0);
     delay(90);
   }
  if(((angle) > 120)&&((angle) <= 130))
   {
     analogWrite(nRedPin, 255);
     delay(80);
     analogWrite(nRedPin, 0);
     delay(80);
   }
  if(((angle) > 130)&&((angle) <= 140))
   {
     analogWrite(nRedPin, 255);
     delay(70);
     analogWrite(nRedPin, 0);
     delay(70);
   }
  if(((angle) > 150)&&((angle) <= 150))
   {
     analogWrite(nRedPin, 255);
     delay(60);
     analogWrite(nRedPin, 0);
     delay(60);
   }
  if(((angle) > 150)&&((angle) <= 160))
   {
     analogWrite(nRedPin, 255);
     delay(50);
     analogWrite(nRedPin, 0);
     delay(50);
   }
  if(((angle) > 160)&&((angle) <= 170))
   {
     analogWrite(nRedPin, 255);
     delay(40);
     analogWrite(nRedPin, 0);
     delay(40);
   }
  if(((angle) > 170)&&((angle) <= 179))
   {
     analogWrite(nRedPin, 255);
     delay(30);
     analogWrite(nRedPin, 0);
     delay(30);
   }
  
  
  delay(nDelay);
}
