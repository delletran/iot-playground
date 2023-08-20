// /**
//    BasicHTTPClient.ino

//     Created on: 24.05.2015

// */

// #include <Arduino.h>

// #include <ESP8266WiFi.h>
// #include <ESP8266WiFiMulti.h>

// #include <ESP8266WebServer.h>
// #include <ESP8266HTTPClient.h>

// #include <WiFiClient.h>
// #include <secrets.h>

// const char* hostname = WEB_HOSTNAME;
// const char* password = WEB_PASSPHRASE;
// int connection_elapse_time = 0;

// // ESP8266WiFiMulti WiFiMulti;

// ESP8266WebServer server(80);

// void basicHttpSetup() {

//   // Serial.begin(115200);
//   // Serial.setDebugOutput(true);

//   Serial.println();
//   Serial.println();
//   Serial.println();

//   for (uint8_t t = 4; t > 0; t--) {
//     Serial.printf("[SETUP] WAIT %d...\n", t);
//     Serial.flush();
//     delay(1000);
//     if (t%2 == 0) {
//       digitalWrite(LED_BUILTIN,  LOW);
//     } else {
//       digitalWrite(LED_BUILTIN,  HIGH);
//     }

//   }
  
//   WiFi.mode(WIFI_STA);
//   WiFi.begin(hostname, password);
//   Serial.println("");

//   Serial.println("Checking for connection...");

//   while (WiFi.status() != WL_CONNECTED) {
//     delay(500);
//     Serial.print(".");
//     connection_elapse_time = connection_elapse_time + 1;
    
//     if (connection_elapse_time%2 == 0) {
//       digitalWrite(LED_BUILTIN,  LOW);
//     } else {
//       digitalWrite(LED_BUILTIN,  HIGH);
//     }
//     if (connection_elapse_time >= 40) {
//       break;
//     }
//   }
  

//   // WiFi.mode(WIFI_STA);
//   // WiFiMulti.addAP(hostname, password);
// }

// void basicHttp() {
//   // wait for WiFi connection
  

//   // if ((WiFiMulti.run() == WL_CONNECTED)) {

//   //   WiFiClient client;

//   //   HTTPClient http;

//   //   Serial.print("[HTTP] begin...\n");
//   //   if (http.begin(client, "http://jigsaw.w3.org/HTTP/connection.html")) {  // HTTP


//   //     Serial.print("[HTTP] GET...\n");
//   //     // start connection and send HTTP header
//   //     int httpCode = http.GET();

//   //     // httpCode will be negative on error
//   //     if (httpCode > 0) {
//   //       // HTTP header has been send and Server response header has been handled
//   //       Serial.printf("[HTTP] GET... code: %d\n", httpCode);

//   //       // file found at server
//   //       if (httpCode == HTTP_CODE_OK || httpCode == HTTP_CODE_MOVED_PERMANENTLY) {
//   //         String payload = http.getString();
//   //         Serial.println(payload);
//   //       }
//   //     } else {
//   //       Serial.printf("[HTTP] GET... failed, error: %s\n", http.errorToString(httpCode).c_str());
//   //     }

//   //     http.end();
//   //   } else {
//   //     Serial.println("[HTTP] Unable to connect");
//   //   }
//   // }

//   delay(10000);
// }
