void setup() {
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  digitalWrite(4,HIGH);
}

void loop() {
  digitalWrite(5,HIGH);
  delay(2);
  digitalWrite(4,LOW);
  delay(2);
  digitalWrite(6,HIGH);
  delay(2);
  digitalWrite(5,LOW);
  delay(2);
  digitalWrite(7,HIGH);
  delay(2);
  digitalWrite(6,LOW);
  delay(2);
  digitalWrite(4,HIGH);
  delay(2);
  digitalWrite(7,LOW);
  delay(2);
}
