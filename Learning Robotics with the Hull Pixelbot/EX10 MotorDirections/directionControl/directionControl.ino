/*
 Direction control demonstration

Rob Miles

Move the stepper motors 512 steps forwards
and then 512 steps back

April 2017
Version 1.0
 
 */

int motorDelay;

byte left1,left2,left3,left4;

byte right1,right2,right3,right4;

int moveCount; // Counter for the number of steps

void leftForwards()
{
  left1=7; left2=6; left3=5; left4=4;
}

void leftReverse()
{
  left1=4; left2=5; left3=6; left4=7;
}

void rightForwards()
{
  right1=8; right2=9; right3=10; right4=11;
}

void rightReverse()
{
  right1=11; right2=10; right3=9; right4=8;
}

void setup() {
  
  leftForwards();  
  rightForwards();
  
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
  
  moveCount=0; // Set the counter to 0
}

void loop() {

  moveCount = moveCount + 1; // increase the counter

  if (moveCount==512) // is the counter 512?
  {
    leftReverse(); // if it is - reverse the movement
    rightReverse();
  }

  if(moveCount==1024) // is the counter 1024?
  {
    leftForwards(); // if it is - go fowards again...
    rightForwards();
    moveCount=0; // .. and put the counter back to zero
  }

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


