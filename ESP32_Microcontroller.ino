//Reading a potentiometer using ESP32
const int potPin = 25;
//GPI014 is input only 

void 
 setup() {
  Serial.begin(115200);

}

void loop() {
  // put your main code here, to run repeatedly:
int potValue =analogRead(27);
Serial.print("Potentiometer Value:");
Serial.println(potValue);
//Print the value 
delay(500); 
}

