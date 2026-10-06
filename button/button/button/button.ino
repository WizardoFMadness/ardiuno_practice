int button = 8;
int led =7;

void setup()
{

pinMode(button,INPUT);
pinMode(led,OUTPUT);

}
void loop()
{

if(digitalRead(button))
{
  digitalWrite(led,HIGH);

  delay(100);
}

else
{
  digitalWrite(led,LOW);
}

}