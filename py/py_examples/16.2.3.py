</>Python
from flask import Flask, render_template_string, request, redirect, url_for
from gpiozero import LED

app = Flask(__name__)
led = LED(17)

html = """
<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>라즈베리파이 웹 대시보드</title>
    <style>
        body { font-family: Arial; text-align: center; margin-top: 40px; }
        h1 { color: #2c3e50; }
        .status { font-size: 24px; margin: 20px; }
        .on { color: green; font-weight: bold; }
        .off { color: red; font-weight: bold; }
        button {
            width: 140px; height: 50px; font-size: 18px;
            margin: 10px; border: none; border-radius: 8px;
        }
        .btn-on { background-color: #27ae60; color: white; }
        .btn-off { background-color: #c0392b; color: white; }
    </style>
</head>
<body>
    <h1>웹 대시보드 기반 장치 제어 시스템</h1>
    <div class="status">
        현재 상태:
        {% if state == "ON" %}
            <span class="on">LED ON</span>
        {% else %}
            <span class="off">LED OFF</span>
        {% endif %}
    </div>
    <form action="/on" method="post">
        <button class="btn-on" type="submit">LED 켜기</button>
    </form>
    <form action="/off" method="post">
        <button class="btn-off" type="submit">LED 끄기</button>
    </form>
</body>
</html>
""“

@app.route("/")
def index():
    state = "ON" if led.value == 1 else "OFF"
    return render_template_string(html, state=state)

@app.route("/on", methods=["POST"])
def turn_on():
    led.on()
    return redirect(url_for("index"))

@app.route("/off", methods=["POST"])
def turn_off():
    led.off()
    return redirect(url_for("index"))

if __name__ == "__main__":
    app.run(host="0.0.0.0", port=5000)