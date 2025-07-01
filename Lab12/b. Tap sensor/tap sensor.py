import RPi.GPIO as GPIO
import time
GPIO.setmode(GPIO.BCM)

tapPin = 3
GPIO.setup(tapPin
           , GPIO.IN)

try:
    while True:
        if GPIO.input(tapPin) == GPIO.HIGH:
            print("Tap detected")
        else:
            print("Tap not detected")

        time.sleep(0.1)
        
except KeyboardInterrupt:
    GPIO.cleanup()