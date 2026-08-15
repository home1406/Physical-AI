
import paho.mqtt.client as mqtt
def on_message(client, userdata, msg):
    print("Topic:", msg.topic)
    print("Message:", msg.payload.decode())
broker = "localhost"
topic = "home/temperature"
client = mqtt.Client()
client.connect(broker, 1883, 60)
client.subscribe(topic)
client.on_message = on_message
client.loop_forever()