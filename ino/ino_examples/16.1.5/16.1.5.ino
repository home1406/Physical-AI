int ledPin = 13; // Pin을 LED에 연결
int inputPin = 2; // Pin을 PIR 센서에 연결
int pirState = LOW; //운동이 없을 때 PIR 상태를  LOW로 시작
int val = 0; // 핀의 상태를 읽기 위한 변수
int pinSpeaker = 10; // piezo에 연결된 핀
void setup() {
    pinMode(ledPin, OUTPUT); //  LED를 출력으로 설정
    pinMode(inputPin, INPUT); // sensor를 입력으로 설정
    pinMode(pinSpeaker, OUTPUT);
    Serial.begin(9600);
}
void loop() {
     val = digitalRead(inputPin); // PIR 입력을 읽음
         if (val == HIGH) { // 입력이 HIGH인지 체크
            digitalWrite(ledPin, HIGH); // 만일 그러면 LED를 켬
            playTone(300, 160);
           delay(150);
          if (pirState == LOW) {
// 모션이 감지되면 시리얼 모니터에 출력
          Serial.println("Motion detected!");
          pirState = HIGH;
          }
        } else {
            digitalWrite(ledPin, LOW); // 입력이 HIGH가 아니면 LED를 끔
           playTone(0, 0);
           delay(300);
         if (pirState == HIGH) {
           Serial.println("Motion ended!");
           pirState = LOW;
         }
       }
}
void playTone(long duration, int freq) { // ms로 지속, 주파수 Hz
duration *= 1000;
int period = (1.0 / freq) * 1000000;
long elapsed_time = 0;
while (elapsed_time < duration) {
       digitalWrite(pinSpeaker, HIGH);
       delayMicroseconds(period / 2);
       digitalWrite(pinSpeaker, LOW);
       delayMicroseconds(period / 2);
       elapsed_time += (period);
    }
}
 