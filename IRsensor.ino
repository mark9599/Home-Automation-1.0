int ir=7;
void setup() {
  // put your setup code here, to run once:
pinMode(ir,INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
int a=digitalRead(ir); //When analog input is available use analogRead(ir)
Serial.println(a);
}
