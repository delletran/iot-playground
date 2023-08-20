/*
 * Created by ArduinoGetStarted.com
 *
 * This example code is in the public domain
 *
 * Tutorial page: https://arduinogetstarted.com/tutorials/arduino-joystick
 */

// ------------ Joystick -----------

#define VRX_PIN  A1 // Arduino pin connected to VRX pin
#define VRY_PIN  A2 // Arduino pin connected to VRY pin

#define LEFT_THRESHOLD  400
#define RIGHT_THRESHOLD 800
#define DOWN_THRESHOLD  400
#define UP_THRESHOLD    800

#define COMMAND_NO     0x00
#define COMMAND_LEFT   0x01
#define COMMAND_RIGHT  0x02
#define COMMAND_UP     0x04
#define COMMAND_DOWN   0x08


int xValue = 0; // To store value of the X axis
int yValue = 0; // To store value of the Y axis
// ------------ Joystick -----------
bool isPWM = false;

void Joystick() {
  xValue = analogRead(VRX_PIN);
  yValue = analogRead(VRY_PIN);

  if(isPWM) {
    // read analog X and Y analog values

    // print data to Serial Monitor on Arduino IDE
    Serial.print("x = ");
    Serial.print(xValue);
    Serial.print(", y = ");
    Serial.println(yValue);
  } 
  else {
    
    if (yValue <= DOWN_THRESHOLD) {
      Serial.print("Down");
    }
    else if (yValue >= UP_THRESHOLD) {
      Serial.print("Top");
    }
    else {
      // Serial.println("Y-Center");
    }

    if (xValue <= LEFT_THRESHOLD) {
      Serial.print(" Left");
    } 
    else if (xValue >= RIGHT_THRESHOLD) {
      Serial.print(" Right");
    }
    else {
      // Serial.println("X-Center");
    }

    Serial.println("");
    // Serial.println("\n");
  }
}
