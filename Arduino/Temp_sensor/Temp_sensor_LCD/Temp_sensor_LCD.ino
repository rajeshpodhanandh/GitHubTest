#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

int gnd=A0;
int sensor=A1;
int vcc=A2;
float temp;
float tempc;
float tempf;
float setpoint;

void setup()
{
  pinMode(sensor,INPUT);
  lcd.begin(20,2);
  digitalWrite(vcc,HIGH); 
  digitalWrite(gnd,LOW);
  Serial.begin(9600);
}
void loop()
{ 
  temp=analogRead(sensor);
  tempc=(temp*0.3)/10;       
  tempf=(tempc*1.8)+32; 
  setpoint=Serial.read();
  lcd.setCursor(5,2);
   {
  if (setpoint>tempc)
   {
    lcd.print("Boiler ON");
    }
  else
   {
    lcd.print("Boiler OFF");  
   }
   delay(1000);
   lcd.clear();
 }
 {
  lcd.print("Temp in C = ");
  lcd.print(tempc);
  delay(1000);
  lcd.clear();
  lcd.print("Temp in F = ");
  lcd.print(tempf);
  delay(1000);
  lcd.clear();
 }
}
 
