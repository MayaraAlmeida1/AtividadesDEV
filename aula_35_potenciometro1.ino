#define pinAnalogico A0


void setup()
{
  Serial.begin (9600);
}

void loop()
{
  int leituraA0 = analogRead (pinAnalogico);
  Serial.println (leituraA0 * 5/ 1024.0);
}