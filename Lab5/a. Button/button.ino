const int buttonPin = 2;
const int ledPin = 13;

void setup() {
    pinMode(buttonPin, INPUT);
    Serial.begin(9600);
}

void loop() {
    int buttonState = digitalRead(buttonPin);
    if(buttonState == LOW) {
        digitalWrite(ledPin, HIGH);
        Serial.println("High");
    } else {
        digitalWrite(ledPin, LOW);
        Serial.println("Low");
    }
    delay(1000);
}