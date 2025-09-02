void setup()
{
  pinMode(13, OUTPUT);
  pinMode(2, INPUT_PULLUP);
}

void loop()
{
  int access= digitalRead(2);
  if(access == LOW)
  digitalWrite(13, HIGH);
  else
  digitalWrite(13, LOW);
}