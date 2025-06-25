const int soundSensorPin = 0;
const int ledPin = 2;

void setup() {

    pinMode(soundSensorPin, INPUT);  //Sets soundSensorPin as input pin
    pinMode(ledPin, OUTPUT);  //Sets ledPin as output pin
    Serial.begin(9600);

}

void loop() {
    
    int soundValue = analogRead(soundSensorPin);  //Reads analog value from the sound sensor - higher value mean louder sound
    Serial.print("Sound Level: ");
    Serial.println(soundValue);

    int threshold = 400;  //Defines a threshold value to decide whether the sound is loud enough

    if(soundValue > threshold) {    //If the sound is above threshold the led turns on
        digitalWrite(ledPin, HIGH);
    }else{
        digitalWrite(ledPin, LOW);
    }

    delay(100);
}