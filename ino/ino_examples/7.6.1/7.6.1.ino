// include the library code:
#include <LiquidCrystal.h>

// LCD에 필요한 라이브러리 파일을 불러온다
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  // LCD를 16열 x 2행으로 초기한다
  lcd.begin(16, 2);
  // LCD에 다음과 같은 메시지를 전송, 0행 0열에 hello, world출력
  lcd.print("hello, world!");
}

void loop() {
  // 커서를 1행 0열로 설정한다.
  // 두 번째 행(1행)으로 커서를 설정한다
  lcd.setCursor(0, 1);
  // 리셋 이후에 초를 표시한다
  //millis()/1000이란 1000ms가 지나면 1초가 된다
  lcd.print(millis() / 1000);
 }