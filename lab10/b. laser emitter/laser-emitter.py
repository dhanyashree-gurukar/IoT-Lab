import RPi.GPIO as GPIO
import time
GPIO.setmode(GPIO.BCM)

laserPin = 3
GPIO.setup(laserPin, GPIO.OUT)

try:
    while True:
        GPIO.output(laserPin, GPIO.HIGH)
        print("Laser is on")

        time.sleep(2)

        GPIO.output(laserPin, GPIO.LOW)
        print("Laser is off")

        time.sleep(0.1)

        
except KeyboardInterrupt:
    GPIO.cleanup()