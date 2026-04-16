int pir = 2;
int led = 3;

void setup() {
  pinMode(pir, INPUT);
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int state = digitalRead(pir);

  if (state == HIGH) {
    Serial.println("Slot Occupied");
    digitalWrite(led, HIGH);
  } else {
    Serial.println("Slot Empty");
    digitalWrite(led, LOW);
  }

  delay(1000);
}
