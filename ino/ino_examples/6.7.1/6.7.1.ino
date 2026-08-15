const int kPinPot = A0; //Potentiometer의 핀을 A0에 연결
const int kPinLed = 13; //LED는 13번 단자에 연결
void setup()
{
   pinMode(kPinPot, INPUT); //PinPot를 입력으로 설정
   pinMode(kPinLed, OUTPUT); //PinLed를 출력으로 설정
}
void loop()
{
    int ledBrightness;  //밝기 변수
    int sensorValue = 0; //센서값은 초기 0으로 설정
    ledBrightness = analogRead(kPinPot); /*PinPot에서 아날로그를                                   읽어 ledBrightness에 저장 */
    analogWrite(kPinLed, ledBrightness); /*ledBrigntess를                                     PinLed에 출력 */
}