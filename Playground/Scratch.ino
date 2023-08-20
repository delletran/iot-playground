
int incomingByte = 0; // for incoming serial data
String content = "";
char character;
bool clear = false;

int x;
String str;
    
void SerialData2() 
{
     if(Serial.available() > 0)
     {
        str = Serial.readStringUntil('\n');
        x = Serial.parseInt();
        
        Serial.println(str);
        Serial.println(x);
     }
}
    
void SerialData() {
  // send data only when you receive data:
  // Serial.println(Serial.available());
  delay(50);
  if (Serial.available() > 0)
  {
    while(Serial.available()) {
      character = Serial.read();
      content.concat(character);
      
      clear = true;
    }
          
    if (content != "") {
        Serial.println(content);
    }
    if (clear) {
      content = "";
      clear = false;
    }
    // // say what you got:
    // Serial.print("I received: ");
    // Serial.println(incomingByte, DEC);
  
  }
}


void Scratch1() {
  String rfid_uuids[] = {
    "F9 AD 44 98",
    "21 22 F5 1D",
    "01 97 CB 26"
  };
  int uuids_len = sizeof(rfid_uuids);
  String card_uuid = "01 97 CB 26";

  for (int i = 0; i < uuids_len; i = i + 1) {
    Serial.println(String(rfid_uuids[i]));
    if (rfid_uuids[i] == card_uuid) {
      Serial.println("Authorized access");
      Serial.println();
      delay(3000);
    }
    else {
      Serial.println("Unauthorized, Denied.");
      Serial.println();
    }
  }

}