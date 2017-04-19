void setup() {
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  digitalWrite(4,HIGH);
}

void loop() {
  digitalWrite(5,HIGH);
  delayMicroseconds(1200);
  digitalWrite(4,LOW);
  delayMicroseconds(1200);
  digitalWrite(6,HIGH);
  delayMicroseconds(1200);
  digitalWrite(5,LOW);
  delayMicroseconds(1200);
  digitalWrite(7,HIGH);
  delayMicroseconds(1200);
  digitalWrite(6,LOW);
  delayMicroseconds(1200);
  digitalWrite(4,HIGH);
  delayMicroseconds(1200);
  digitalWrite(7,LOW);
  delayMicroseconds(1200);
}
