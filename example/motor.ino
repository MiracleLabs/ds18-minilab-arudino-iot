const int BUTTON = 2;     // the number of the pushbutton pin
const int MOTOR =  13;      // the number of the Motor pin
 
// variables will change:
int buttonState = 0;         // variable for reading the pushbutton status
 
void setup() {
  Serial.begin(9600);
  // initialize the LED pin as an output:
  pinMode(MOTOR, OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(BUTTON, INPUT);
}
 
void loop() {
  // read the state of the pushbutton value:
  buttonState = digitalRead(BUTTON);
 Serial.println(buttonState);
  // check if the pushbutton is pressed.
  // if it is, the buttonState is HIGH:
  if (buttonState == HIGH) {
    // turn on Motor:
    digitalWrite(MOTOR, HIGH);
  } else {
    // turn off Motor:
    digitalWrite(MOTOR, LOW);
  }
}
