
from picamera2 import Picamera2
import cv2

camera = Picamera2()
camera.configure(camera.create_preview_configuration())
camera.start()

while True:
    frame = camera.capture_array()
    cv2.imshow("Camera", frame)
    if cv2.waitKey(1) == ord("q"):
        break

camera.stop()
cv2.destroyAllWindows()