const int tapSensorPin = 2;

void setup() {

    pinMode(tapSensorPin, INPUT_PULLUP); //Default state of pin is high and it will go low when the sensor is triggered
    Serial.begin(9600);

}

void loop() {

    int tapState = digitalRead(tapSensorPin);
    if(tapState == LOW) {
        Serial.println("Tap detected!!");
    }
    delay(100);
}