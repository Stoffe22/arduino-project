#include <Arduino.h>
#include <Servo.h>

// Defines Trig and Echo pins for the Ultrasonic Sensor
const int trigPin = 10;
const int echoPin = 11;

Servo myServo; // Creates a servo object for controlling the servo motor


void setup() {

  Serial.begin(9600);
  myServo.attach(12); // Defines on which pin the servo motor is attached
  
}

void loop() {
  // Rotates the servo motor from 15 to 165 degrees
  // for(int i=15; i<=165;i++){
  //   myServo.write(i);
  //   delay(30);
  // }
 
}