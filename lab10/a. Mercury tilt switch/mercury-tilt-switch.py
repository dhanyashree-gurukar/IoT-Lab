import RPi.GPIO as GPIO
import time
GPIO.setmode(GPIO.BCM)

tiltPin = 18
GPIO.setup(tiltPin, GPIO.IN, pull_up_down=GPIO.PUD_UP)

try:
    while True:
        tiltState = GPIO.input(tiltPin)
        if tiltState == GPIO.LOW:
            print("Tilt switch is tilted!!")
        else:
            print("Tilt switch not tilted")
            
        time.sleep(0.1)
        
except KeyboardInterrupt:
    GPIO.cleanup()