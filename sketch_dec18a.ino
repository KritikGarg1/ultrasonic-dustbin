#include <Servo.h>`
Servo servo;
int trigPin = 7;
int echoPin = 4;
long distance;
long a;
 
void setup() 
{
servo.attach(9); 
 pinMode(trigPin, OUTPUT);
 pinMode(echoPin, INPUT);// put your setup code here, to run once:
}
 
void loop() {
  
    digitalWrite(trigPin, LOW);
  delay(10);
  digitalWrite(trigPin, HIGH);
  delay(10);
  digitalWrite(trigPin, LOW);
  a= pulseIn(echoPin, HIGH);
  distance = a*0.019;
  servo.write(0);
  
  
  if(distance >=50)
  {
  servo.write(0);
  }
  else {
    servo.write(190-distance*7);
    delay(70);
  }


  
}
 
