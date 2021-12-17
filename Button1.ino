
int buttonPin = ;    


void setup() {
  pinMode(buttonPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  buttonState = digitalRead(buttonPin);
  while (buttonState == HIGH) {
    buttonState = digitalRead(buttonPin);
    if (buttonState == LOW) {
      Serial.println("ok");
    }
  }
}
