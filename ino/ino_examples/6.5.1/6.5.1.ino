//버튼 예제
//LED는 핀 13에 버튼은 핀 3에 풀업으로 연결

// const는 변경하지 않음
// 핀번호 설정:
const int buttonPin = 3;     // 푸시버튼의 핀 번호
const int ledPin =  13;      // LED의 핀번호

// 변수는 변경될 수 있음:
int buttonState = 0;         // 푸시버튼을 읽는 변수

void setup() {
  // LED 핀을 출력으로 초기화:
  pinMode(ledPin, OUTPUT);
  // 푸시버튼 핀을 입력으로 초기화:
  pinMode(buttonPin, INPUT);
}

void loop() {
  // 푸시 버튼 값의 상태를 읽음:
  buttonState = digitalRead(buttonPin);

  // 푸시버튼이 눌려있는 지 확인.
  // 만일 buttonState가 HIGH이면:
  if (buttonState == HIGH) {
    // LED를 켠다:
    digitalWrite(ledPin, HIGH);
  }
  else {
    // LED를 끈다:
    digitalWrite(ledPin, LOW);
  }
}
