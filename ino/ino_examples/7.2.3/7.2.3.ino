#define A_IN 5
#define B_IN 6
void setup() {
    pinMode(A_IN, OUTPUT);
    pinMode(B_IN, OUTPUT);
}
void loop() {
    digitalWrite(A_IN, HIGH); // 정회전
    digitalWrite(B_IN, LOW);
    delay(1000);
    digitalWrite(A_IN, LOW); // 역회전
    digitalWrite(B_IN, HIGH);
    delay(1000);
}