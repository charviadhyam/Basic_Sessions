int pot = 0;
void setup() {
  Serial.begin(115200);
  pinMode(34, INPUT);
  pinMode(13, OUTPUT);
}

void loop() {
  pot=analogRead(34);
  Serial.println(pot);
  if (pot>100){
    digitalWrite(13, HIGH);
    delay(200);
    digitalWrite(13, LOW);
    delay(200);
  }
  delay(200);
}
