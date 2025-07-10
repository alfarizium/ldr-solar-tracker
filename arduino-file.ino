#include <Servo.h>

// Define pins for photoresistors
const int photoresistorLeftPin = A0;
const int photoresistorRightPin = A1;

// Define servo pin
const int servoPin = 13;

// Define LED pins
const int leftLEDPin = 9;
const int rightLEDPin = 8;

// Create servo object
Servo panelServo;

// Initialize variables
int leftLightValue = 0;
int rightLightValue = 0;
int currentServoAngle = 90; // Start at midpoint (90 degrees)
const int servoStep = 5;    // Step size for servo adjustment
const int tolerance = 5;    // Reduced tolerance for higher sensitivity

void setup() {
  // Attach servo to pin
  panelServo.attach(servoPin);

  // Set initial servo position
  panelServo.write(currentServoAngle);

  // Configure LED pins as output
  pinMode(leftLEDPin, OUTPUT);
  pinMode(rightLEDPin, OUTPUT);

  // Turn off LEDs initially
  digitalWrite(leftLEDPin, LOW);
  digitalWrite(rightLEDPin, LOW);

  // Initialize serial communication for debugging
  Serial.begin(9600);
}

void loop() {
  // Read light levels from photoresistors
  leftLightValue = analogRead(photoresistorLeftPin);
  rightLightValue = analogRead(photoresistorRightPin);

  // Print values for debugging
  Serial.print("Left: ");
  Serial.print(leftLightValue);
  Serial.print(" | Right: ");
  Serial.println(rightLightValue);

  // Compare light levels
  if (abs(leftLightValue - rightLightValue) > tolerance) {
    if (leftLightValue > rightLightValue) {
      // Rotate servo left
      currentServoAngle = constrain(currentServoAngle - servoStep, 0, 180);

      // Light up the left LED and turn off the right LED
      digitalWrite(leftLEDPin, HIGH);
      digitalWrite(rightLEDPin, LOW);
    } else {
      // Rotate servo right
      currentServoAngle = constrain(currentServoAngle + servoStep, 0, 180);

      // Light up the right LED and turn off the left LED
      digitalWrite(leftLEDPin, LOW);
      digitalWrite(rightLEDPin, HIGH);
    }

    // Update servo position
    panelServo.write(currentServoAngle);

    // Small delay to allow servo to move
    delay(30);
  } else {
    // Turn off both LEDs when the servo is not moving
    digitalWrite(leftLEDPin, LOW);
    digitalWrite(rightLEDPin, LOW);
  }

  // Short delay before next loop iteration
  delay(100);
}
