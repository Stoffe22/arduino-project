#include <Arduino.h>
#include <Servo.h>

// Defines Trig and Echo pins for the Ultrasonic Sensor
const int trigPin = 10;
const int echoPin = 11;

// Variables for the duration and the distance
long duration;
int distance;

Servo myServo; // Creates a servo object for controlling the servo motor


void setup() {
  pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
  pinMode(echoPin, INPUT); // Sets the echoPin as an Input

  Serial.begin(9600);
  myServo.attach(12); // Defines on which pin the servo motor is attached
  
}

void loop() {
  // Rotates the servo motor from 15 to 165 degrees
  for(int i=15; i<=165;i++){
    myServo.write(i);
    delay(30);

    distance = calculateDistance(); // Calls a function for calculating the distance measured by the Ultrasonic sensor for each degree


    Serial.print("Distance: ");
    Serial.print(distance);
    Serial.print(" cm");
  }

 
}

int calculateDistance() {
  // Clears the trigPin condition
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  // Sets the trigPin HIGH (ACTIVE) for 10 microseconds
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  // Reads the echoPin, returns the sound wave traveltime in ms
  distance = duration * 0.034 / 2; // Speed of sound wave divided by 2 (go and back)
  
}
