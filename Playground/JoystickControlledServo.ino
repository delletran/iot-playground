// ------------ Joystick -----------
#define X_PIN  A1
#define Y_PIN  A2

int xVal = 0; // To store value of the X axis
int yVal = 0; // To store value of the Y axis
// ------------ Joystick -----------

#include <Servo.h>
int servoPosition;

Servo servoA;


void joystickServoSetup() {
  servoA.attach(3);
}

void joystickServo() {
  xVal = analogRead(X_PIN);
  yVal = analogRead(Y_PIN);
  servoPosition = map(xVal, 0, 1023, 0, 180); 
  servoA.write(servoPosition);           
  delay(15);
}
