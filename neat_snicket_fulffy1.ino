int sensorPin=A0;
void setup()
{
  Serial.begin(9600);
  pinMode(4, OUTPUT);
  
}

void loop()
{
  int reading =analogRead(sensorPin);
  float voltage = reading*4.68;
  voltage /=1024.0;
  float temperatureC = (voltage-0.5)*100;
  Serial.print(temperatureC);
  Serial.println("degree C");
  if(temperatureC > 100){
    digitalWrite(4,HIGH);
    delay(1000);
    digitalWrite(4,LOW);}
  delay(1000);
}