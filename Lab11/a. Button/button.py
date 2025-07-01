import RPi.GPIO as GPIO
import time
GPIO.setmode(GPIO.BCM)

GPIO_PIN = 3
GPIO.setup(GPIO_PIN, GPIO.IN, pull_up_down=GPIO.PUD_UP)

try:
    while True:
        if GPIO.input(GPIO_PIN) != GPIO.HIGH:
            print("Button pressed")
        else:
            print("Button not pressed")

        time.sleep(0.5)
        
except KeyboardInterrupt:
    GPIO.cleanup()