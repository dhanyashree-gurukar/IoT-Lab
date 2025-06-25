const int fireSensorPin = 8;

void setup() {

    Serial.begin(9600);
    pinMode(fireSensorPin, INPUT);  //Sets pin 8 as input pin
    
}

void loop() {

    int fireValue = digitalRead(fireSensorPin);  //Reads digital signal from pin 8 (either high=1 or low=0)
    Serial.println(fireValue); //If fire is detected it will display 0 else 1

    delay(500);

}