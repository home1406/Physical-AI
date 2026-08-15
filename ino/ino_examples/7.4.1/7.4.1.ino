/*경사센서, tiltsensor.pde */
const int kPin_Tilt = 3;
const int kPin_LED = 13;

void setup()
{
    pinMode(kPin_Tilt, INPUT);
    digitalWrite(kPin_Tilt, HIGH); //내장된 내부 풀업 저항을 턴온
    pinMode(kPin_LED, OUTPUT);
} 

void loop()
{
     if(digitalRead(kPin_Tilt) == HIGH){
        digitalWrite(kPin_LED, LOW);
     }
     else{
        digitalWrite(kPin_LED, HIGH);
     }
}