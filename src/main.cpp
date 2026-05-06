#include <Arduino.h>
// Pin del LED (normalmente 2 en ESP32)
int led = 2;

void setup() {
  pinMode(led, OUTPUT);     
  Serial.begin(115200);     // Iniciar puerto serie
}

void loop() {
  digitalWrite(led, HIGH);   
  Serial.println("ON");
  delay(500);               

  digitalWrite(led, LOW);    
  Serial.println("OFF");
  delay(500);               
}