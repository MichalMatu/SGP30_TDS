
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
  lcd.print("TVOC:");  // Print the text "TVOC:" on the LCD screen

  lcd.setCursor(0, 1); // Set the cursor to the first column and second row
  lcd.print("eCO2:");  // Print the text "eCO2:" on the LCD screen

  delay(1000); // Wait for 1 second before taking another measurement
}
