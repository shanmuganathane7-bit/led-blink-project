void setup() {
  pinMode(11, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(3, OUTPUT);
}

void loop() {
  // LED 1 ON
  digitalWrite(11, HIGH);
  delay(500);
  digitalWrite(11, LOW);

  // LED 2 ON
  digitalWrite(6, HIGH);
  delay(500);
  digitalWrite(6, LOW);

  // LED 3 ON
  digitalWrite(3, HIGH);
  delay(500);
  digitalWrite(3, LOW);
}
