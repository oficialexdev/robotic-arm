#include "Arduino.h"
#include "ServoMotor.h"
#include "Servo.h"

ServoMotor::ServoMotor(byte pin) {
  this->pin = pin;
  servo.attach(pin, 500, 2500);
}

void ServoMotor::rotateTo(int to) {
  servo.write(to);
}

int ServoMotor::read() {
  return servo.read();
}