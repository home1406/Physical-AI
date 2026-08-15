</>Python
import paho.mqtt.client as mqtt

broker = "localhost"
topic = "camera/event“

client = mqtt.Client()
client.connect(broker, 1883, 60)

event = "MOTION_DETECTED"
client.publish(topic, event)

print("MQTT Published:", event)