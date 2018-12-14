int trigger_pin = 9; // assigning trigger pin of ultrasonic sensor
int echo_pin = 10;	//assigning echo pin of ultrasonic sensor
int LED = 13;	//assigning LED pin 
int buzzer = 11;	// assigning buzzer pin
long duration;
int distance;

// Defining inputs and outputs

void setup() {
  pinMode(trigger_pin, OUTPUT);
  pinMode(echo_pin, INPUT);
  pinMode(LED, OUTPUT);
  pinMode(buzzer, OUTPUT);
  Serial.begin(9600);
}

// 

void loop() {
  // Sets the trigPin on HIGH state for 10 micro seconds
  digitalWrite(trigger_pin, HIGH);		
  delayMicroseconds(10);
  digitalWrite(trigger_pin, LOW);
  // Reads the echoPin, returns the sound wave travel time in microseconds
  duration = pulseIn(echo_pin, HIGH);
  distance = duration * 0.034 / 2;	 // Calculating the distance	

  if (distance <= 20) {
    digitalWrite(LED, LOW);  // Turn OFF the LED pin based on distance
    digitalWrite(buzzer, HIGH); // Turn ON the Buzzer
    Serial.print("Distance: ");
    Serial.println(distance);
    Serial.print("BUZZER IS ON");
    delay(1000); // Delay for 1 sec
  }
  else {
    digitalWrite(buzzer, LOW); // Turn ON the Buzzer
    digitalWrite(LED, HIGH);   // Turn OFF the LED pin based on distance
    Serial.print("LED IS ON");
    Serial.print("Distance: ");
    Serial.println(distance);
    delay(1000); // Delay for 1 sec
  }

}

