import time
import paho.mqtt.client as mqtt

broker = "localhost"
temperature_topic = "home/temperature"
humidity_topic = "home/humidity"

client = mqtt.Client()

client.connect(broker, 1883, 60)

while True:
    temperature = 25.3
    humidity = 60.0

    client.publish(temperature_topic, str(temperature))
    client.publish(humidity_topic, str(humidity))

    print("Temperature:", temperature)
    print("Humidity:", humidity)

    time.sleep(2)