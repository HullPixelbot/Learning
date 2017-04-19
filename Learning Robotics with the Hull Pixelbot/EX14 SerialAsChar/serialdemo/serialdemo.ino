void setup() {
  Serial.begin(9600); // Open the serial port and set the 
                      // baud rate to 9600
}

void loop() {
  if(Serial.available() > 0)
  {
    byte b = Serial.read();
    Serial.print("Just received:");
    Serial.println((char)b);
  }
}

