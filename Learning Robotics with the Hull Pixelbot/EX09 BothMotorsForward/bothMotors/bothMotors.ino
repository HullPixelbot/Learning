int motorDelay;
byte left1,left2,left3,left4;

byte right1,right2,right3,right4;

void setup() {
  left1=7; left2=6; left3=5; left4=4;
  right1=8; right2=9; right3=10; right4=11;
  
  pinMode(left1,OUTPUT);
  pinMode(left2,OUTPUT);
  pinMode(left3,OUTPUT);
  pinMode(left4,OUTPUT);
  digitalWrite(left1,HIGH);

  pinMode(right1,OUTPUT);
  pinMode(right2,OUTPUT);
  pinMode(right3,OUTPUT);
  pinMode(right4,OUTPUT);
  digitalWrite(right1,HIGH);

  motorDelay=1200;
}

void loop() {

  digitalWrite(left2,HIGH);
  digitalWrite(right2,HIGH);
  delayMicroseconds(motorDelay);
  digitalWrite(left1,LOW);
  digitalWrite(right1,LOW);
  delayMicroseconds(motorDelay);
  digitalWrite(left3,HIGH);
  digitalWrite(right3,HIGH);
  delayMicroseconds(motorDelay);
  digitalWrite(left2,LOW);
  digitalWrite(right2,LOW);
  delayMicroseconds(motorDelay);
  digitalWrite(left4,HIGH);
  digitalWrite(right4,HIGH);
  delayMicroseconds(motorDelay);
  digitalWrite(left3,LOW);
  digitalWrite(right3,LOW);
  delayMicroseconds(motorDelay);
  digitalWrite(left1,HIGH);
  digitalWrite(right1,HIGH);
  delayMicroseconds(motorDelay);
  digitalWrite(left4,LOW);
  digitalWrite(right4,LOW);
  delayMicroseconds(motorDelay);
}

