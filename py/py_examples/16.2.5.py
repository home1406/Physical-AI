</>Python
from picamera2 import Picamera2
import cv2
import time

camera = Picamera2()
camera.configure(camera.create_preview_configuration())
camera.start()

time.sleep(2)

previous_frame = None

while True:
    frame = camera.capture_array()

    gray = cv2.cvtColor(frame, cv2.COLOR_BGR2GRAY)
    gray = cv2.GaussianBlur(gray, (21, 21), 0)

    if previous_frame is None:
        previous_frame = gray
        continue

    frame_delta = cv2.absdiff(previous_frame, gray)
    threshold = cv2.threshold(frame_delta, 25, 255, cv2.THRESH_BINARY)[1]

    motion_level = threshold.sum()

    if motion_level > 500000:
        print("Motion detected")

        filename = "motion_" + time.strftime("%Y%m%d_%H%M%S") + ".jpg“
        cv2.imwrite(filename, frame)
        print("Saved:", filename)

    cv2.imshow("Motion Detection", threshold)

    previous_frame = gray
    if cv2.waitKey(1) == ord("q"):
        break

camera.stop()
cv2.destroyAllWindows()