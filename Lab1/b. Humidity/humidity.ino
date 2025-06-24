#include "dht.h"
#define dht_apin A0 //dht pin is set to analog pin A0

dht DHT; //creates Object of class DHT which handles communication with the sensor

void setup() {

    Serial.begin(9600);
    delay(500);

    Serial.println("DHT11 Humidity and Temperature Sensor\n\n");
    delay(1000);
}

void loop() {

    DHT.read11(dht_apin);  //Reads data from DHT11 sensor which is connected to pin A0

    Serial.print("Current humidity = ");
    Serial.print(DHT.humidity);
    Serial.println(" %");

    Serial.print("Temperature = ");
    Serial.print(DHT.temperature);
    Serial.println(" *C");

    delay(3000);
}