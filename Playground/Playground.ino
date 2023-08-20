

void setup() {
  Serial.begin(9600);
  // pirSetup();
  // rfidSetup();
  // dhtSetup();
  // mq2Setup();
  joystickServoSetup();
}

void loop() {
  // Joystick();
  // pirMotionSensor();
  // rfid();
  // dhtSensor();
  // mq2();
  // Scratch1();
  // SerialData2();
  joystickServo();

}
