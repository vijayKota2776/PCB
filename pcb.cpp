#include <Arduino.h>

int pirPin = 2;        // PIR sensor output pin
int ledPin = 13;       // LED pin (optional)

void setup() {
    Serial.begin(9600);           // Initialize serial communication
    pinMode(pirPin, INPUT);       // Set PIR sensor as input
    pinMode(ledPin, OUTPUT);      // Set LED as output
    Serial.println("Motion detection initialized.");
}

void loop() {
    int pirState = digitalRead(pirPin);  // Read PIR sensor state

    if (pirState == HIGH) {
        Serial.println("Motion detected!");  // Print message to serial
        digitalWrite(ledPin, HIGH);          // Turn on LED
        delay(1000);                         // Optional delay
    } else {
        digitalWrite(ledPin, LOW);           // Turn off LED
    }
}