int motorDelay;

void setup() {
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  digitalWrite(4,HIGH);
  motorDelay=1200;
}

void loop() {

  if(motorDelay>15000)
  {
    digitalWrite(4,LOW);
    return;
  }
  
  motorDelay = motorDelay + 200;
  
  digitalWrite(5,HIGH);
  delayMicroseconds(motorDelay);
  digitalWrite(4,LOW);
  delayMicroseconds(motorDelay);
  digitalWrite(6,HIGH);
  delayMicroseconds(motorDelay);
  digitalWrite(5,LOW);
  delayMicroseconds(motorDelay);
  digitalWrite(7,HIGH);
  delayMicroseconds(motorDelay);
  digitalWrite(6,LOW);
  delayMicroseconds(motorDelay);
  digitalWrite(4,HIGH);
  delayMicroseconds(motorDelay);
  digitalWrite(7,LOW);
  delayMicroseconds(motorDelay);
}

