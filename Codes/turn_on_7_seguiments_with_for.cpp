// C++ code
//
const int ledPinA=2;
const int ledPinB=3;
const int ledPinC=4;
const int ledPinD=5;
const int ledPinE=6;
const int ledPinG=7;
const int ledPinF=8;

void setup()
{
  
  for(int i=2;i<9;i++)
  {
    pinMode(i,OUTPUT);
  }

}

void loop()
{
  
  for(int i=2;i<9;i++)
  {
    digitalWrite(i,HIGH);
  }
  
  for(int x=2;x<9;x++)
  {
    digitalWrite(x,LOW);
    delay(1000);
    digitalWrite(x,HIGH);
  }
  
 }