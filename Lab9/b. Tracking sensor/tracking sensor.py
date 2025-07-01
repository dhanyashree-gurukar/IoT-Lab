import RPi.GPIO as GPIO
import time
GPIO.setmode(GPIO.BCM)

GPIO_PIN = 3
GPIO.setup(GPIO_PIN, GPIO.IN, pull_up_down=GPIO.PUD_UP)

delayTime = 0.2

try:
    while True:
        if GPIO.input(GPIO_PIN) == False:
            print("Line detected")
        else:
            print("Line not detected")
        time.sleep(delayTime)
        
except KeyboardInterrupt:
    GPIO.cleanup()