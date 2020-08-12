#include <Arduino.h>
#define onboard 13

void setup() {
  
  // put your setup code here, to run once:
  pinMode(onboard, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  digitalWrite(onboard, LOW);
  delay(1000);
  digitalWrite(onboard, HIGH);
  delay(1000);
  Serial.println("loop completed");
  // put your main code here, to run repeatedly:
}