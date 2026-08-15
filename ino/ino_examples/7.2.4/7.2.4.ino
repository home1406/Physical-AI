#define A_IN 5
#define B_IN 6
void setup() {
    Serial.begin(9600);
    Serial.setTimeout(100);
}
void loop() {
    if (Serial.available()) { /*만약 시리얼 버퍼에 데이터가 있다면
     정수로 해석하여 읽어들인다.*/
        short motorSpeed = Serial.parseInt();
        if (motorSpeed >= 0){
            analogWrite(A_IN, motorSpeed);
            analogWrite(B_IN, 0);
        } else {
            analogWrite(A_IN, 0);
            analogWrite(B_IN, -motorSpeed);
        }
    }
}