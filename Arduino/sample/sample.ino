float tempC;
int reading;
int temp;
int tempPin = 0;

void setup()
{
analogReference(INPUT);
Serial.begin(9600);
}

void loop()
{
reading = analogRead(tempPin);
tempC = reading / 9.31;
Serial.println(tempC);
delay(1000);
}

