int t=0;
// sets analog input A0 as +5V source for LM35
int sensor=A1; // sets A1 as the sensor input
int gnd=A2; // sets analog input A2 as ground for LM35
float temp;
float humidity;
float humid;
float tempc;
float tempf;
float setpoint;
void setup()
{
  pinMode(gnd,OUTPUT);
  pinMode(sensor,INPUT);
  pinMode(7, OUTPUT);
  digitalWrite(vcc,HIGH); // sets analog input A0 HIGH
  digitalWrite(gnd,LOW);  // sets analog input A2 LOW
  Serial.begin(9600);     // sets the baud rate at 9600

}
void loop()
{ 
  t=t+5;       // increments the time by 2 every two seconds
  temp=analogRead(sensor); // reads the LM35 output
  humidity=analogRead(sensor);
  tempc=(temp*0.3)/10;       // converts the digital value into temperature degree C
  tempf=(tempc*1.8)+32;    // converts degree C to degree F
  humid=(humidity/15);
  setpoint=20;
  Serial.println("...............");
  Serial.println("Temperature logger");
  Serial.print("Time in sec = ");  // prints the time on serial monitor window
  Serial.println(t);
  Serial.print("Setpoint = ");
  Serial.println(setpoint);
  Serial.print("Temperature in deg C = "); // prints the temperature in degreeC
  Serial.println(tempc);
  Serial.print("Temperature in deg F = "); // prints the temperature in degreeF
  Serial.println(tempf);
  Serial.print("Humidity in % = "); // prints the temperature in degreeF
  Serial.println(humid);
  if (tempc<setpoint)
   {
    digitalWrite(7,HIGH);
    Serial.print("Boiler is ON");
    }
      else if (tempc==setpoint)
   {
     digitalWrite(7,LOW);
     Serial.println("Equal");
   }
  else
   {
    digitalWrite(7,LOW);
    Serial.println("Boiler is OFF");
   }
   delay(10000);
    }
