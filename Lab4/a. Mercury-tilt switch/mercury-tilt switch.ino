const int tiltSwitchPin = 2;
const int ledPin = 13;

void setup() {
    Serial.begin(9600);
    pinMode(tiltSwitchPin, INPUT);  //Or pinMode(tiltSwitchPin, INPUT_PULLUP);
    pinMode(ledPin, OUTPUT);
}

void loop() {
    int tiltState = digitalRead(tiltSwitchPin);  //The sensor behaves like a button, it connects or disconnects the circuit based on its angle.
    if(tiltState == HIGH){
        Serial.println("HIGH");  //State is high when the circuit is closed.
        digitalWrite(ledPin, HIGH);
    } else {
        digitalWrite(ledPin, LOW);
        Serial.println("LOW");
    }
    delay(1000);
}