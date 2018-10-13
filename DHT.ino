#include "DHT.h"

// set the DHT Pin
#define DHTPIN 8

#define DHTTYPE DHT11
DHT dht(DHTPIN, DHTTYPE);

void setup() {
  dht.begin();
 Serial.begin(9600);
}

void loop() {
  
  // read humidity
  float h = dht.readHumidity();
  
  //read temperature in Fahrenheit
  //float f = dht.readTemperature(true);
  
  float d = dht.readTemperature(); //in celsius
  
 //Serial Communication
  Serial.println("Humidity");
  Serial.println(h);
  Serial.println("\nTemperature");
  Serial.println(d); 
  
 delay(1000);
}   
