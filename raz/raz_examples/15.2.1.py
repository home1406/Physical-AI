
import paho.mqtt.client as mqtt
import time
broker = "localhost"
topic = "home/temperature"
client = mqtt.Client()
client.connect(broker, 1883, 60)
while True:
    temperature = 25.3
    client.publish(topic, str(temperature))
    print("Publish:", temperature)
    time.sleep(2)