import RPi.GPIO as GPIO
import time
GPIO.setmode(GPIO.BCM)

lm35_pin = 4
GPIO.setup(lm35_pin, GPIO.IN)

def read_temp(lm35_pin):
    adc = GPIO.input(lm35_pin)
    volt = (adc*3.3) / 1024
    temp = volt * 1000
    return temp

while True:
    temp = read_temp(lm35_pin)
    print(f"Temperature: {temp} ^C")
    time.sleep(1)
