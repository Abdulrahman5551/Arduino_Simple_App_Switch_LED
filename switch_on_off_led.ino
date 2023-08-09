/*
          This App is very simple
 one button can swtich led ==> ON / OFF
 - button
 - led 

*/

const int ledPin = 13; // led pin
const int buttonPin = 7; // button pin
int flag = 0; //switch variable bettwen 0 or 1
void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() {
  
  if(digitalRead(buttonPin) == LOW){
    delay(100);
    while(digitalRead(buttonPin) == LOW);
    if(flag == 0){
      digitalWrite(ledPin, LOW);
      flag = 1;
    }
    else{
      digitalWrite(ledPin, HIGH);
      flag = 0;
    }
  }
}
