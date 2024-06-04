#ifndef ServoMotor_h
#define ServoMotor_h

#include "Arduino.h"
#include <Servo.h>

class ServoMotor {
public:
  //DEFINE SERVO SIGNAL PIN AND VALUES TO OPEN AND CLOSE
  ServoMotor(byte pin);
  //DYNAMIC ROTATE BY CUSTOM VALUE
  void rotateTo(int to);
  //READ CURRENT POSITION
  int read();
private:
  byte pin;
  Servo servo;
};

#endif