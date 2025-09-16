// C++ code

#include <LiquidCrystal.h>

const int rs=12, en=11, d4=5, d5=4, d6=3, d7=2;
LiquidCrystal lcd(rs,en,d4,d5,d6,d7);

int randNumberArray[27];

void setup()
{
  lcd.begin(16,2);
  
}

void loop()
{
  lcd.setCursor(0,0);
  
  for(int i=0; i<27; i++)
  {
    randNumberArray[i]=random(9);
    lcd.print(randNumberArray[i]);
    lcd.scrollDisplayLeft();         
    lcd.print(" ");
    delay(250);
  }}