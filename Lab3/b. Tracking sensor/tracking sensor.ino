int sensorPin = 7;
int val;

void setup() {

    pinMode(sensorPin, INPUT);
    Serial.begin(9600);  //Used to store the digital reading from the sensor

}

void loop() {

    val = digitalRead(sensorPin);
    if(val == LOW) {   //Sensor gives low when a black line is detected
        Serial.println("Line detected");
    } else {
        Serial.println("Line not detected");
    }

    delay(500);

}