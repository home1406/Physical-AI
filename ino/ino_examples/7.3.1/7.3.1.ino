const int kPinTemp = A0;

void setup()
{
    Serial.begin(9600);
}
void loop()
{
    float temperatureC = getTemperatureC();

    Serial.print(temperatureC);
    Serial.println(" Temperature C");
 
// 화씨로의 변경
    float temperatureF = convertToF(temperatureC);

     Serial.print(temperatureF);
     Serial.println("Temperature F");
     delay(500);
 }

float getTemperatureC()
{
     int reading = analogRead(kPinTemp);
     float voltage = (reading * 5.0) / 1024;
 // 10 mv/도로부터 500mV 옵셋을 고려하여 섭씨로 변경
 // ((voltage - 500mV) * 100)
     return (voltage - 0.5) * 100;
}
 float convertToF(float temperatureC) //섭씨를 화씨로 변경
 {
   return (temperatureC * 9.0 / 5.0) + 32.0;
}