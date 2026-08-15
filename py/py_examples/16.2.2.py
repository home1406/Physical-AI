</>Python
import time
import json
import paho.mqtt.client as mqtt

BROKER = "localhost“
PORT = 1883

TOPIC_TEMP = "home/env/temperature"
TOPIC_HUM = "home/env/humidity"
TOPIC_STATUS = "home/env/status"
TOPIC_ALL = "home/env/all“

client = mqtt.Client()
client.connect(BROKER, PORT, 60)

while True:
    temperature = 25.3
    humidity = 61.0
    status = "OK“

    data = {
        "temperature": temperature,
        "humidity": humidity,
        "status": status
    }

    client.publish(TOPIC_TEMP, str(temperature))
    client.publish(TOPIC_HUM, str(humidity))
    client.publish(TOPIC_STATUS, status)
    client.publish(TOPIC_ALL, json.dumps(data))

    print("Published:", data)
    time.sleep(2)