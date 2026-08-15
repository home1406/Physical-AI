
import time
import board
import adafruit_dht
sensor = adafruit_dht.DHT22(board.D4)
while True:
    temperature = sensor.temperature
    humidity = sensor.humidity
    print("Temperature:", temperature, "C")
    print("Humidity:", humidity, "%")
    time.sleep(2)