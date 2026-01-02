int currentSensor = A0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int value = analogRead(currentSensor);
  Serial.println(value);
  delay(1000);
}
