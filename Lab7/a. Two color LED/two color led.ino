int redPin = 11;
int greenPin = 10;
int val;

void setup() {
    pinMode(redPin, OUTPUT);
    pinMode(greenPin, OUTPUT);
}

void loop() {
    for(val=255; val>0; val--) {
        analogWrite(redPin, val);
        analogWrite(greenPin, 255-val);
        delay(15);
    }
    for(val=0; val<255; val++) {
        analogWrite(redPin, val);
        analogWrite(greenPin, 255-val);
        delay(15);
    }
}