/*스위치 예제
LED는 핀 13에 버튼은 핀 2에 풀업으로 연결
 */
int inPin = 3; // 입력핀의 번호
int outPin = 13; // 출력핀의 번호
int state = HIGH; // 현재 출력핀의 상태
int reading; // 현재 입력핀에서 읽은 값
int previous = LOW; // 이전의 입력핀의 값
// 다음변수는 밀리초로 측정되는 시간이므로 long으로 선언한다
long time = 0; // 출력핀이 토글된 마지막 시간
long debounce = 200; //디바운스 시간

void setup() 
{ 
      Serial.begin(19200); 
      pinMode(inPin, INPUT); 
      pinMode(outPin, OUTPUT); 
} 

void loop() 
{ 
    reading = digitalRead(inPin); 
    // 만일 입력이 LOW에서 HIGH로 가면 충분히 기다려서
    // 회로의 잡음을 무시하고 출력을 토글한다
    if (reading == HIGH && previous == LOW && millis() -        time > debounce) { 
    if (state == HIGH) 
      state = LOW; 
    else 
      state = HIGH; 
     time = millis(); 
    } 
    digitalWrite(outPin, state); 
    previous = reading; 
} 