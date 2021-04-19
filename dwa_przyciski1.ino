
int buttonState1 = 0;
int buttonState2 = 0;

void setup()
{
  pinMode(4, INPUT);
  pinMode(2, INPUT);
  pinMode(9, OUTPUT);
  digitalWrite(9, LOW);
 
}

void loop()
{
  buttonState1 = digitalRead(2);
  buttonState2 = digitalRead(4);

  if (buttonState1 == HIGH) 
  {
    for(int i=1; i<10; i++)
    {
    digitalWrite(9, HIGH);
      delay(2100);
    digitalWrite(9, LOW);
      delay(250);
    buttonState1 = digitalRead(4);
      if(buttonState1 == LOW) 
        break;
    }
  } 
  else if(buttonState1 == LOW) 
  {
    digitalWrite(9, LOW);
  }
  if(buttonState2 == HIGH)
  {
    for(int i=1; i<50; i++)
    {
    digitalWrite(9, HIGH);
    delay(500);
   	digitalWrite(9, LOW);
    delay(500);
    buttonState2 = digitalRead(2);
      if(buttonState2 == LOW) break;
    }
  }
  else if(buttonState2 == LOW) 
  {
    digitalWrite(9, LOW);
  }
  delay(10);
}