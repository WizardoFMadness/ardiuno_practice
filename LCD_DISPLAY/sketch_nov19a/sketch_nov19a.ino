#include<LiquidCrystal.h>

LiquidCrystal lcd = LiquidCrystal(2,3,4,5,6,7);


void setup() {
  // put your setup code here, to run once:

  lcd.begin(16,2);

}

void loop() {
  // put your main code here, to run repeatedly:


lcd.setCursor(0,0);
lcd.print("Hello, World my ");
delay(1000);

lcd.setCursor(0,1);
lcd.print("Friend");
delay(1000);
lcd.clear();
}
