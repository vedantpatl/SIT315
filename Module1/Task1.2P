// Define the pins
const int motionSensorPin = 2; // Pin connected to the motion sensor 
const int ledPin = 13;         // Pin connected to the built-in LED

volatile bool motionDetected = false; // Volatile keyword is used because this variable is changed within an ISR

// Interrupt Service Routine (ISR) for motion detection
void motionDetectedISR() {
  motionDetected = true;
}

void setup() {
  // Initialize serial communication
  Serial.begin(9600);
  
  // Initialize the LED pin as output
  pinMode(ledPin, OUTPUT);

  // Initialize the motion sensor pin as input
  pinMode(motionSensorPin, INPUT);

  // Attach the interrupt to the motion sensor pin
  attachInterrupt(digitalPinToInterrupt(motionSensorPin), motionDetectedISR, RISING);
}

void loop() {
  if (motionDetected) {
    // Motion detected, turn on the LED
    digitalWrite(ledPin, HIGH);
    Serial.println("Motion Detected - LED ON");

    // Reset the motionDetected flag
    motionDetected = false;
    
    delay(500);
  } else {
    // No motion detected, turn off the LED
    digitalWrite(ledPin, LOW);
    Serial.println("No Motion - LED OFF");
  }

  delay(500);
}
