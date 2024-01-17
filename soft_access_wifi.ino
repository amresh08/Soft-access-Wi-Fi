#include <ESP8266WiFi.h>
#include <DNSServer.h>
#include <WiFiManager.h>
WiFiManager wifi;
void setup() {

 Serial.begin(115200);
 wifi.autoConnect("Amresh");
 //consider it as a loop if the amresh wifi is not available te the wifimanager will automatically create a wifi name amresh as a host device and we will have to enter the details into it
 // on getting the details Amresh network will again shift form host to object a will be conneted to web
 Serial.println("connected to Amresh");
 
}

void loop() {
}
