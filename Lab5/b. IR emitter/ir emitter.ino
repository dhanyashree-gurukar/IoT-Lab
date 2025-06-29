const int irLedPin = 8;

void setup() {
    pinMode(irLedPin, OUTPUT);
}

void loop() {
    digitalWrite(irLedPin, HIGH);
    delay(1000);
    digitalWrite(irLedPin, LOW);
    delay(1000);
}