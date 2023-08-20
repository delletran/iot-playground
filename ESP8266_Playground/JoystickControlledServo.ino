/*
 * Created by ArduinoGetStarted.com
 *
 * This example code is in the public domain
 *
 * Tutorial page: https://arduinogetstarted.com/tutorials/arduino-joystick
 */

// ------------ Joystick -----------

#define X_PIN  A1
#define Y_PIN  A2


int xValue = 0; // To store value of the X axis
int yValue = 0; // To store value of the Y axis
// ------------ Joystick -----------

#include <Servo.h>

int pos;

Servo myservo;  // create servo object to control a servo
// twelve servo objects can be created on most boards


void soystickServoSetup() {
  myservo.attach(2);  // attaches the servo on GIO2 to the servo object
}

void joystickServo() {
  xValue = analogRead(X_PIN);
  yValue = analogRead(Y_PIN);

}
