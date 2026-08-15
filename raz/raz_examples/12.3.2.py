
from gpiozero import PWMLED
from time import sleep
led = PWMLED(17)
while True:
    for i in range(0, 101):
        led.value = i / 100
        sleep(0.02)
    for i in range(100, -1, -1):
        led.value = i / 100
        sleep(0.02)