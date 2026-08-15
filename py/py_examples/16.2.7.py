</>Python
from flask import Flask, render_template_string, request, redirect, url_for

app = Flask(__name__)

device_state = {
    "fan": "OFF",
    "lamp": "OFF",
    "mode": "AUTO",
    "temperature": 25.3,
    "humidity": 60,
    "light": 450,
    "motion": "NO"
}

html = """
<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>스마트홈 자동화 컨트롤러</title>
</head>

<body>
    <h1>라즈베리파이 스마트홈 대시보드</h1>

    <h2>센서 상태</h2>
    <p>온도: {{ state.temperature }} ℃</p>
    <p>습도: {{ state.humidity }} %</p>
    <p>조도: {{ state.light }}</p>
    <p>움직임: {{ state.motion }}</p>

    <h2>장치 상태</h2>
    <p>팬: {{ state.fan }}</p>
    <p>조명: {{ state.lamp }}</p>
    <p>모드: {{ state.mode }}</p>

    <form action="/fan_on" method="post">
        <button type="submit">팬 켜기</button>
    </form>

    <form action="/fan_off" method="post">
        <button type="submit">팬 끄기</button>
    </form>

    <form action="/lamp_on" method="post">
        <button type="submit">조명 켜기</button>
    </form>

    <form action="/lamp_off" method="post">
        <button type="submit">조명 끄기</button>
    </form>
</body>
</html>
""“

@app.route("/")
def index():
    return render_template_string(html, state=device_state)

@app.route("/fan_on", methods=["POST"])
def fan_on():
    device_state["fan"] = "ON"
    return redirect(url_for("index"))

@app.route("/fan_off", methods=["POST"])
def fan_off():
    device_state["fan"] = "OFF"
    return redirect(url_for("index"))

@app.route("/lamp_on", methods=["POST"])
def lamp_on():
    device_state["lamp"] = "ON"
    return redirect(url_for("index"))

@app.route("/lamp_off", methods=["POST"])
def lamp_off():
    device_state["lamp"] = "OFF"
    return redirect(url_for("index"))

if __name__ == "__main__":
    app.run(host="0.0.0.0", port=5000)