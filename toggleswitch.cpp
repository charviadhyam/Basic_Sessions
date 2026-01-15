#define POT 34
#define Push1 14
#define LED 12
int pot= 0;
int push= 0;
void setup() {
  Serial.begin(115200);
  pinMode(POT, INPUT);
  pinMode(LED, OUTPUT);
  pinMode(Push1, INPUT);
}
void loop() {
  if (digitalRead(Push1)==0){
    push = push + 1;
    delay(500);
    
  }
  if (push%2 == 0) {
      digitalWrite(LED,LOW);
      pot=analogRead(POT);
      Serial.println(pot);
      delay(500);
    }
  if (push%2 == 1) {
      digitalWrite(LED, HIGH);
      delay(200);
      digitalWrite(LED, LOW);
      delay(200);
    }
    
  }
