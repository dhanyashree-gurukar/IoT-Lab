const int laserPin = 8;

void setup() {
    pinMode(laserPin, OUTPUT);
    Serial.begin(9600);
}

void loop() {
    digitalWrite(laserPin, HIGH);
    Serial.println("HIGH");
    delay(1000);
    digitalWrite(laserPin, LOW);
    Serial.println("LOW");
    delay(1000);
}