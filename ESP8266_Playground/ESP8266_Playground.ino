



void setup() {
  Serial.begin(115200);
  pinMode(LED_BUILTIN, OUTPUT);
  // blinkSetup();
  // basicHttpSetup();
  // helloServerSetup();
  servoSetup();
}


void loop(void) {
  // blink();
  // basicHttp();
  // helloServer();
  servo();
  

}  