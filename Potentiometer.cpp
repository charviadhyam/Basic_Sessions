int pot = 0;
void setup() {
  Serial.begin(115200);
  pinMode(12, INPUT);
}

void loop() {
  pot=analogRead(12);
  Serial.println(pot);
  delay(200);
}
