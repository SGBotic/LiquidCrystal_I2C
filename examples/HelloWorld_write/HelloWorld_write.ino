//DFRobot.com
//Compatible with the Arduino IDE 1.0
//Library version:1.1
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,16,2);  // set the LCD address to 0x27 for 16 chars and 2 line display
//LiquidCrystal_I2C lcd(0x3f,16,2);  // set the LCD address to 0x3f for 16 chars and 2 line display
//LiquidCrystal_I2C lcd(0x27,20,4);  // set the LCD address to 0x27 for 20 chars and 4 line display
//LiquidCrystal_I2C lcd(0x3f,20,4);  // set the LCD address to 0x3F for 20 chars and 4 line display

void setup()
{
  lcd.init();                      // initialize the lcd

  lcd.backlight();
  lcd.setCursor(1, 0);
  String str = "Hello, world!";
  for (int i = 0; i < str.length(); i++)
  {
    lcd.write(str[i]);

  }
  lcd.setCursor(1,1);
  str = "I2C LCD Module";
   for (int i = 0; i < str.length(); i++)
  {
    lcd.write(str[i]);

  }
 
}

void loop()
{
}
