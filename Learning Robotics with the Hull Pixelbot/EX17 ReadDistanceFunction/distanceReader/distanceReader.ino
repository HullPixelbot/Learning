
const int trigPin = 3;       // trigger pin for distance 
const int echoPin = 2;       // echo pin for distance

float readDistance()
{
  float duration;
  float distance;
  digitalWrite(trigPin, LOW);  // drop the trigger pulse
  delayMicroseconds(2);        // wait a tiny amount
  digitalWrite(trigPin, HIGH); // raise the trigger pulse
  delayMicroseconds(10);       // we want a pulse width of 10 microseconds
  digitalWrite(trigPin, LOW);  // drop the trigger pulse
  duration = pulseIn(echoPin, HIGH); // measure the pulse
  distance = (duration/2.0)/29.1;    // calculate the distance
  return distance;
}

void setup() {
  pinMode(trigPin, OUTPUT);  // make the trigger an output
  pinMode(echoPin, INPUT);   // make the echo an input
  Serial.begin(9600);        // start up the serial port
}

void loop() { 
  float distance = readDistance();
  Serial.println(distance);          // print out the distance
  delay(500);                        // wait half a second  
}

