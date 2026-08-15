/*L293D 프로그램*/
int enable = 11;
int in1 = 10;
int in2 = 9;
int Switch = 7;
int pot = 0;
 
void setup()
{
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(enable, OUTPUT);
  pinMode(Switch, INPUT_PULLUP);
}
 
void loop()
{
  int speed = analogRead(pot) / 4;
  boolean reverse = digitalRead(Switch);
  setMotor(speed, reverse);
}
 
void setMotor(int speed, boolean reverse)
{
  analogWrite(enable, speed);
  digitalWrite(in1, !reverse);
  digitalWrite(in2, reverse);
}