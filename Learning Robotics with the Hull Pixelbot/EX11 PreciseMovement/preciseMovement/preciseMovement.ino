/*
  Precise movement. 

  Moves the robot 20mm forwards and 20mm backwards 

  Rob Miles

  April 2017
  Version 1.0
  
 */

int motorDelay;

byte left1,left2,left3,left4;

byte right1,right2,right3,right4;

float wheelDiameter = 68.5;
float stepsPerRevolution = 512;
float mmsPerStep = (wheelDiameter * 3.1416) / stepsPerRevolution;

int moveCount;
int moveSteps;  // number of steps the motor is to move 

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

int calculateDistanceSteps(float distanceInMM)
{
  return distanceInMM / mmsPerStep + 0.5;
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
  
  moveCount=0;
  moveSteps = calculateDistanceSteps(20);
  
}

void loop() {

  moveCount = moveCount + 1;

  if (moveCount==moveSteps) 
  {
    leftReverse();
    rightReverse();
  }

  if(moveCount== moveSteps*2)
  {
    leftForwards();
    rightForwards();
    moveCount=0;
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


