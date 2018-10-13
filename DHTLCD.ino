/*
  LiquidCrystal Library - Custom Characters

 Demonstrates how to add custom characters on an LCD  display.
 The LiquidCrystal library works with all LCD displays that are
 compatible with the  Hitachi HD44780 driver. There are many of
 them out there, and you can usually tell them by the 16-pin interface.

 This sketch prints "I <heart> Arduino!" and a little dancing man
 to the LCD.

  The circuit:
 * LCD RS pin to digital pin 12
 * LCD Enable pin to digital pin 11
 * LCD D4 pin to digital pin 5
 * LCD D5 pin to digital pin 4
 * LCD D6 pin to digital pin 3
 * LCD D7 pin to digital pin 2
 * LCD R/W pin to ground  */
 
#include <LiquidCrystal.h>

#include <DHT.h>

#include "DHT.h"

#define DHTPIN A0     // what pin we're connected to

#define DHTTYPE DHT11   // we are using the DHT11 sensor

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

DHT dht(DHTPIN, DHTTYPE);

void setup()
{
  Serial.begin(9600);
  for (int DigitalPin = 7; DigitalPin <= 9; DigitalPin++) 
 {
  pinMode(DigitalPin, OUTPUT);
 }
  lcd.begin(16,2);  //16 by 2 character display
  
dht.begin();
}
 
void loop()
{
  delay(1000);
  // Reading temperature or humidity takes about 250 milliseconds!
  float h = dht.readHumidity();
  
  float t = dht.readTemperature();  // Read temperature as Celsius (the default)

  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Temp: ");
  lcd.print(t);  //printing temperarture to the LCD display


  lcd.print("'C");
  
  lcd.setCursor(0,1);
  lcd.print("Humid: ");
  lcd.print(h);  //printing humidity to the LCD display
  lcd.print("%");
  
}
