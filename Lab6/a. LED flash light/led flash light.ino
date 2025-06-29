const int flashLightPin = 8;

void setup() {
    pinMode(flashLightPin, OUTPUT);
    Serial.begin(9600);
}

void loop() {
    digitalWrite(flashLightPin, HIGH);
    Serial.println("HIGH");
    delay(1000);
    digitalWrite(flashLightPin, LOW);
    Serial.println("LOW");
    delay(1000);
}