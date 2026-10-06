// C++ code
//
void setup()
{
  pinMode(8, OUTPUT);
    pinMode(2, OUTPUT);
      pinMode(7, OUTPUT);
}

void loop()
{
  
  digitalWrite(7, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(7, LOW);
  delay(2000); // Wait for 1000 millisecond(s)



  digitalWrite(8, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(8, LOW);
  delay(2000); // Wait for 1000 millisecond(s)


  digitalWrite(2, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(2, LOW);
  delay(2000); // Wait for 1000 millisecond(s)

}