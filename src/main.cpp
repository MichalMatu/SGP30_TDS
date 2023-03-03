#include <Arduino.h>
#include <LiquidCrystal_I2C.h>
#include <Wire.h>
#include "SparkFun_SGP30_Arduino_Library.h"

LiquidCrystal_I2C lcd(0x27, 16, 2);

SGP30 mySensor; // create an object of the SGP30 class

void setup()
{
  lcd.init();      // Initialize the LCD
  lcd.backlight(); // Turn on the backlight

  Wire.begin();     // Start I2C communication
  mySensor.begin(); // Start communication with the SGP30
}

void loop()
{

  lcd.setCursor(0, 0);      // Set the cursor to the first column and first row
  lcd.print("TVOC:");       // Print the text "TVOC:" on the LCD screen
  lcd.print(mySensor.TVOC); // Print the total volatile organic compound (TVOC) value on the LCD screen

  lcd.setCursor(0, 1);     // Set the cursor to the first column and second row
  lcd.print("eCO2:");      // Print the text "eCO2:" on the LCD screen
  lcd.print(mySensor.CO2); // Print the equivalent CO2 (eCO2) value on the LCD screen

  delay(1000); // Wait for 1 second before taking another measurement
}
