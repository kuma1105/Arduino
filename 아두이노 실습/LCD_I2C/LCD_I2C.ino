//#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,16,2);
// set the LCD address to 0x27 for a 16 chars and 2 line display
// 주소 = 0x27

void setup()
{
lcd.init(); // initialize the lcd
// Print a message to the LCD.
lcd.backlight();
lcd.print("Rainbow 6 Seige");
delay(1000);
}

void loop() {
  delay(1000);
  lcd.clear();
  lcd.setCursor(0,0);
  delay(1000);
  lcd.print("Loading");
  lcd.setCursor(0,1);
  delay(1000);
  lcd.print("Filipinka");
  lcd.noCursor();
  lcd.noBlink();
  delay(1000);
}

//https://juahnpop.tistory.com/97
//https://m.blog.naver.com/yuyyulee/220325361752
//https://m.blog.naver.com/eye_korea/220839266242
