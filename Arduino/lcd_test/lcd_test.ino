#include "LiquidCrystal.h"
LiquidCrystal lcd(12,11,5,4,3,2);

void setup() 
{
lcd.begin(20,2);

}

void loop() 
{
lcd.scrollDisplayLeft();
lcd.print("LCD test on Arduino 20x2");
delay(500);
  
}
