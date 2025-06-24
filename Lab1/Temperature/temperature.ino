float temp;
int tempPin = 0;

void setup() {
    Serial.begin(9600);
}

void loop() {
    temp = analogRead(tempPin); //Reads analog voltage from pin 0
    temp = temp * 0.48828125; //Converts analog value into degree celcius

    Serial.print("Temperature = ");
    Serial.print(temp);
    Serial.print(" *C");
    Serial.println();

    delay(1000); //waits 1 sec before reading again
}