#define buttonPin 4

struct Touch {    //To store previous and current states of the touch sensor
    byte wasPressed = LOW;
    byte isPressed = LOW;
};

Touch touch;

void setup() {

    pinMode(buttonPin, INPUT);
    Serial.begin(115200);

}

void loop() {

    touch.isPressed = isTouchPressed(buttonPin);   //To read the cuttent state of the button
    if(touch.wasPressed != touch.isPressed) {    //Compares previous state with the current state-if it differs output will be printed
        Serial.println("Touch pressed");
    }
    touch.wasPressed = touch.isPressed;
}

bool isTouchPressed (int pin) {
    return digitalRead(pin) == HIGH ;
}