//DFRobot.com
//Compatible with the Arduino IDE 1.0
//Library version:1.1
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x3f,16,2);  // set the LCD address to 0x27 for a 16 chars and 2 line display
//LiquidCrystal_I2C lcd(0x3f,20,4);  // set the LCD address to 0x3F for a 20 chars and 4 line display

void setup()
{
  lcd.init();                      // initialize the lcd 
 
  // Print a message to the LCD.
  lcd.backlight();
  lcd.setCursor(1,0); // set cursor to column 4, row 0
  lcd.print("16 x 2 Display");
  lcd.setCursor(1,1); // set cursor to column 3, row 1
  lcd.print("I2C addr: 0x3F");
}

void loop()
{
}
