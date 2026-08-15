// 아두이노 7세그먼트 LED 디스플레이
// 0에서 9까지 7 세그먼트 LED 숫자 정의
// 여기서 7 세그먼트 LED는 공통선음극(common cathode)
// common anode타입에서는, 패턴에서 1과 0을 바꾼다
// 여기서 1 = LED 온, 0 = LED 오프
//                                   아두이노 핀: 2,3,4,5,6,7,8
byte seven_seg_digits[10][7] = { { 1,1,1,1,1,1,0 },  // = 0
                                  { 0,1,1,0,0,0,0 },  // = 1
                                  { 1,1,0,1,1,0,1 },  // = 2
                                  { 1,1,1,1,0,0,1 },  // = 3
                                  { 0,1,1,0,0,1,1 },  // = 4
                                  { 1,0,1,1,0,1,1 },  // = 5
                                  { 1,0,1,1,1,1,1 },  // = 6
                                  { 1,1,1,0,0,0,0 },  // = 7
                                  { 1,1,1,1,1,1,1 },  // = 8
                                  { 1,1,1,0,0,1,1 }   // = 9
                            };

void setup() {      
  for (int pinNo = 1; pinNo <=9 ; pinNo++) 
     pinMode(pinNo, OUTPUT);

  writeDot(0);  //"dot"를 오프로 설정한다
}

void writeDot(byte dot) {
  digitalWrite(9, dot);
}
    
void sevenSegWrite(byte digit) {
  byte pin = 2;
  for (byte segCount = 0; segCount < 7; ++segCount) {
    digitalWrite(pin, seven_seg_digits[digit][segCount]);
    ++pin;
  }
}

void loop() {
  for (byte count = 10; count > 0; --count) {
   delay(1000);
   sevenSegWrite(count - 1); 
  }
  delay(4000);
}