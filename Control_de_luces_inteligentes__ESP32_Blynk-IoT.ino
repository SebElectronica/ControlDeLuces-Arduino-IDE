#define BLYNK_PRINT Serial

#include "WiFi.h"
#include "WiFiClient.h"
#include "BlynkSimpleEsp32.h"

char auth[] = "***";
char ssid[] = "***";
char pass[] = "***";

//LED
int led1 = 2;

void setup() {
  Serial.begin(115200);   //Monitor Serie

  //Acceso a la red y a la platafomra IoT
  Blynk.begin(auth, ssid, pass);
  
  pinMode(led1, OUTPUT);
}

void loop() {
  Blynk.run();
}