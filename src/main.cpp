#include <Arduino.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup()
{
  lcd.init();      // Initialize the LCD
  lcd.backlight(); // Turn on the backlight
}

void loop()
{

  lcd.setCursor(0, 0); // Set the cursor to the first column and first row
  lcd.print("Hello "); // Print the text "Temp: " on the LCD screen
}