int sensorPin = A0;    // select the input pin for the soil moisture sensor
int sensorValue = 0;  // variable to store the value coming from the sensor
void setup()
{
 Serial.begin(9600);  
}
void loop() 
{
 sensorValue = analogRead(sensorPin);  // read the value from the soil sensor:  
 delay(1000);          
 Serial.print("sensor = " );                       
 Serial.println(sensorValue);                   
}
