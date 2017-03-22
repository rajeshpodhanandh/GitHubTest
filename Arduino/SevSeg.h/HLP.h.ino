#include "SevSeg.h" 

SevSeg sevseg; 

int refreshTime = 2000; //how many seconds should it wait before it checks and displays the temp again? 1000 = 1 second 

unsigned long timer; 
float celsius = 0, kelvin = 0, fahrenheit = 0; 

void setup() 
{ 
sevseg.Begin(0,2,3,4,5,6,7,8,9,10,11,12,13); 
} 

void loop() 
{ 
sevseg.PrintOutput(); 

//Reads the input and converts it to Kelvin degrees 
kelvin = analogRead(0) * 0.004882812 * 100; 

//Converts Kelvin to Celsius minus 2.5 degrees error 
celsius = kelvin - 2.5 - 273.15; 

//Converts Kelvin to Fahrenheit minus 2.5 degrees error 
fahrenheit = ((kelvin - 2.5) * 9 / 5) - 459.67; 

unsigned long mils=millis(); 
if (mils-timer>=refreshTime) { 
timer=mils; 
//Print teperature to the displays 
sevseg.NewNum(celsius,(byte) 2); 
} 
} 
int t=0;
// sets analog input A0 as +5V source for LM35
int sensor=A1; // sets A1 as the sensor input
int gnd=A2; // sets analog input A2 as ground for LM35
float temp;

void setup()
{
  pinMode(gnd,OUTPUT);
  pinMode(sensor,INPUT);
  pinMode(22, OUTPUT);
  digitalWrite(vcc,HIGH); // sets analog input A0 HIGH
  digitalWrite(gnd,LOW);  // sets analog input A2 LOW
  
}
void loop()
{ 
  t=t+5;       // increments the time by 2 every two seconds
  temp=analogRead(sensor); // reads the LM35 output
  tempc=(temp*0.3)/10;       // converts the digital value into temperature degree C
 }

