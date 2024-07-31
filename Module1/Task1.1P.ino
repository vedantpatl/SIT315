const int motionSensorPin = 2; // Pin connected to the motion sensor
const int ledPin = 13;         // Pin connected to the built-in LED

void setup() {
  Serial.begin(9600);
  
  // Initialize the motion sensor pin as input
  pinMode(motionSensorPin, INPUT);
  
  // Initialize the LED pin as output
  pinMode(ledPin, OUTPUT);
}

void loop() {
  int motionDetected = digitalRead(motionSensorPin);
  
  Serial.println(motionDetected);
  
  if (motionDetected == HIGH) {
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
  }
  
  delay(500);
}
