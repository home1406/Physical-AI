#include <Servo.h>
Servo myservo;  // 서보를 제어하기 위한 객체를 생성한다
void setup()
{
  myservo.attach(9);  //서보 핀을 아두이노 9번 단자에 연결
}
void loop() 
{ 
  int pos;
  for(pos = 0; pos <= 180; pos += 1) //0도에서 180도로 1도씩 이동
  {                                  
    myservo.write(pos);              // pos의 값으로 서보 이동
    delay(15);                 // 서보가 도달하도록 15ms대기
  } 
  for(pos = 180; pos>=0; pos-=1) // 180도에서 0도로 이동
  {                                
    myservo.write(pos);              // pos로 서보에 명령 쓰기
    delay(15);                 // 서보가 도달하도록 15ms대기
  } 
}  