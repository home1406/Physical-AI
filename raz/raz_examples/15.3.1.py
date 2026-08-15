
import paho.mqtt.client as mqtt
from gpiozero import LED
led = LED(17)
broker = "localhost"
topic = "home/led"
def on_message(client, userdata, msg):
    command = msg.payload.decode()
    if command == "ON":
        led.on()
        print("LED ON")
    elif command == "OFF":
        led.off()
        print("LED OFF")
client = mqtt.Client()
client.connect(broker, 1883, 60)
client.subscribe(topic)
client.on_message = on_message
client.loop_forever()
client.loop_forever()