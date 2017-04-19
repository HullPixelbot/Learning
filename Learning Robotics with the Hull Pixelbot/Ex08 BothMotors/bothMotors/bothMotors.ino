int motorDelay;

void setup() {
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  digitalWrite(4,HIGH);

  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  digitalWrite(8,HIGH);

  motorDelay=1200;
}

void loop() {
  digitalWrite(5,HIGH);
  digitalWrite(9,HIGH);
  delayMicroseconds(motorDelay);
  digitalWrite(4,LOW);
  digitalWrite(8,LOW);
  delayMicroseconds(motorDelay);
  digitalWrite(6,HIGH);
  digitalWrite(10,HIGH);
  delayMicroseconds(motorDelay);
  digitalWrite(5,LOW);
  digitalWrite(9,LOW);
  delayMicroseconds(motorDelay);
  digitalWrite(7,HIGH);
  digitalWrite(11,HIGH);
  delayMicroseconds(motorDelay);
  digitalWrite(6,LOW);
  digitalWrite(10,LOW);
  delayMicroseconds(motorDelay);
  digitalWrite(4,HIGH);
  digitalWrite(8,HIGH);
  delayMicroseconds(motorDelay);
  digitalWrite(7,LOW);
  digitalWrite(11,LOW);
  delayMicroseconds(motorDelay);
}

