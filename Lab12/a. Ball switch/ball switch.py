import RPi.GPIO as GPIO
import time
GPIO.setmode(GPIO.BCM)

ballSwitchPin = 3
GPIO.setup(ballSwitchPin, GPIO.IN)

try:
    while True:
        time.sleep(1)
        ballSwitchState = GPIO.input(ballSwitchPin)
        if ballSwitchState:
            print("Ball switch not triggered")
        else:
            print("Ball switch triggered")
        
except KeyboardInterrupt:
    GPIO.cleanup()