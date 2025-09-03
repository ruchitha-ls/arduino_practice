int ledState = HIGH;   
int buttonState;      
int lastButtonState = HIGH; 

void setup() 
{
  pinMode(9, OUTPUT);
  pinMode(7, INPUT); //INPUT_PULLUP not used as button is grounded
}

void loop() 
{
  buttonState = digitalRead(7);
  // Check if button changed from HIGH to LOW (press detected)
  
  if (buttonState == LOW && lastButtonState == HIGH) 
  {
    ledState = !ledState;        // Toggle LED state
    digitalWrite(9, ledState);   // Update LED
    delay(200);                  // Debounce
  }

   lastButtonState = buttonState;// Save state for next loop
}