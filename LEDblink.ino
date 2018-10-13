            int p;
            void setup() {
         // put your setup code here, to run once:
                              p=13;
                              pinMode(p,OUTPUT);
                              Serial.begin(9600);
                          }

            void loop() {
            // put your main code here, to run repeatedly:
                          digitalWrite(p,HIGH);
                          delay(1000);
                          digitalWrite(p,LOW);
                          delay(1000);
                          Serial.print("hi");
                          delay(1000);
                }
