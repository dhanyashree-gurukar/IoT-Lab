import RPi.GPIO as GPIO
import time
GPIO.setmode(GPIO.BCM)

irPin = 3
GPIO.setup(irPin, GPIO.OUT)

try:
    while True:
        GPIO.output(irPin, GPIO.HIGH)
        print("IR ON")

        time.sleep(1)

        GPIO.output(irPin, GPIO.LOW)
        print("IR OFF")
        time.sleep(1)
        
except KeyboardInterrupt:
    GPIO.cleanup()