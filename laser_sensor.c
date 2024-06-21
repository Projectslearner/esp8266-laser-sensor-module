/*
    Project name : ESP8266 Laser sensor Module
    Modified Date: 20-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/esp8266-laser-sensor-module
*/

const int laserSensorPin = D1; // Pin connected to the laser sensor output

void setup() {
  Serial.begin(9600); // Initialize serial communication
  pinMode(laserSensorPin, INPUT); // Set laser sensor pin as input
}

void loop() {
  int sensorState = digitalRead(laserSensorPin); // Read the state of the laser sensor

  // Print the sensor state to the Serial Monitor
  if (sensorState == HIGH) {
    Serial.println("Laser beam detected!");
  } else {
    Serial.println("Laser beam interrupted!");
  }

  delay(100); // Add a small delay to avoid spamming the Serial Monitor
}
