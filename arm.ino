#include "ServoMotor.h"

ServoMotor servo0(10);
ServoMotor servo1(11);
ServoMotor servo2(12);
ServoMotor servo3(13);

const int stepDelay = 2000;

void setup(){
  pinMode(A0,INPUT);
  pinMode(A1,INPUT);
  pinMode(A2,INPUT);
  pinMode(A3,INPUT);
}

void loop(){
  manually();
  // automatic();
}

void automatic() {
  //OPEN CLAW
  servo3.rotateTo(137);
  delay(stepDelay);
  //GO TO START POSITION
  servo0.rotateTo(92);
  servo1.rotateTo(92);
  servo2.rotateTo(99);
  delay(stepDelay);
  //GRAB CUBE
  servo3.rotateTo(0);
  delay(stepDelay);
  //UP ARM
  servo2.rotateTo(180);
  delay(stepDelay);
  //GO TO END POSITION
  servo0.rotateTo(59);
  servo1.rotateTo(101);
  delay(stepDelay);
  //DROP CUBE
  servo3.rotateTo(150);
  delay(stepDelay);
  //GO BACK
  servo0.rotateTo(40);
  servo1.rotateTo(80);
  servo2.rotateTo(99);
  delay(stepDelay);
}

void manually() {
  servo0.rotateTo(map(analogRead(A0),0,1023,0,180));
  servo1.rotateTo(map(analogRead(A1),0,1023,0,180));
  servo2.rotateTo(map(analogRead(A2),0,1023,0,180));
  servo3.rotateTo(map(analogRead(A3),0,1023,0,180));
}