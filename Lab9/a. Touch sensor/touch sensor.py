import RPi.GPIO as GPIO
import time
GPIO.setmode(GPIO.BCM)

touchPin = 3

GPIO.setup(touchPin, GPIO.IN)
try:
    while True:
        touch_state = GPIO.input(touchPin)
        if touch_state == GPIO.LOW:
            print("Touch sensor is not touched")
        else:
            print("Touch sensor is touched")
        time.sleep(1)
except KeyboardInterrupt:
    GPIO.cleanup()