// /* Sweep
//   by BARRAGAN <http://barraganstudio.com>
//   This example code is in the public domain.

//   modified 28 May 2015
//   by Michael C. Miller
//   modified 8 Nov 2013
//   by Scott Fitzgerald

//   http://arduino.cc/en/Tutorial/Sweep
// */

// #include <Servo.h>

// int pos;

// Servo myservo;  // create servo object to control a servo
// // twelve servo objects can be created on most boards


// void servoSetup() {
//   myservo.attach(2);  // attaches the servo on GIO2 to the servo object
// }

// void servo() {

//   // for (pos = 0; pos <= 180; pos += 20) {  // goes from 0 degrees to 180 degrees
//   //   // in steps of 1 degree
//   //   myservo.write(pos);  // tell servo to go to position in variable 'pos'
//   //   delay(500);           // waits 15ms for the servo to reach the position
//   // }
//   // for (pos = 180; pos >= 0; pos -= 20) {  // goes from 180 degrees to 0 degrees
//   //   myservo.write(pos);                  // tell servo to go to position in variable 'pos'
//   //   delay(500);                           // waits 15ms for the servo to reach the position
//   // }
//     myservo.write(180);
//     delay(500);
//     myservo.write(0);
//     delay(500);
  
// }