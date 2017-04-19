void setup() {
  Serial.begin(9600); // Open the serial port and set the 
                      // baud rate to 9600
}

int count = 0;

void loop() {
  Serial.print("The count is : ");
  Serial.println(count);
  count = count + 1;
  delay(1000);
}

