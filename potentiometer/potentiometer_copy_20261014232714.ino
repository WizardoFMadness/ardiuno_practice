int ledPin = 6;
int pwmPin = A0;
void setup()
{ 
  pinMode(ledPin,OUTPUT);
  pinMode(pwmPin,INPUT);
Serial.begin(9600);
}

void loop()
{
int sensorValue = analogRead(A0);



int pwmValue = map(sensorValue,0,1023,0,255);
Serial.print("potentiometer Value | ");
Serial.println(sensorValue);
Serial.print("LedValue | ");
Serial.println(pwmValue);
delay(500);
analogWrite(ledPin,pwmValue);
delay(1);
}