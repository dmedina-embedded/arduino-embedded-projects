int ledPin = 13;
int delayPeriod = 500;

void setup()
{
  pinMode(13, OUTPUT);
}

void loop()
{
  digitalWrite(13, HIGH);
  delay(500);
  digitalWrite(13, LOW);
  delay(500);
  delayPeriod = delayPeriod + 100;
}