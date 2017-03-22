#include <math.h>

double Thermister(int RawADC) 
double Temp;
int sensor=A0;

void setup() 
{
  pinMode(sensor,INPUT);
  pinMode(7, OUTPUT);
  Serial.begin(9600);     // sets the baud rate at 9600
}

void loop() 
{
  Temp = log(((10240000/RawADC) - 10000)); // Assuming a 10k Thermistor.  
//Calculation is actually: Resistance = (1024 * BalanceResistor/ADC) - BalanceResistor

 Temp = 1 / (0.001129148 + (0.000234125 * Temp) + (0.0000000876741 * Temp * Temp * Temp));
 Temp = Temp - 273.15;            // Convert Kelvin to Celcius

//in case you need farenheit:
// Temp = (Temp * 9.0)/ 5.0 + 32.0; // Convert Celcius to Fahrenheit

 return Temp;
 Serial.println(double(Thermister(analogRead(0))));  // display Celsius
 delay(1000);
}
