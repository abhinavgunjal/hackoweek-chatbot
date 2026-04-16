int sensor = 2;
int relay = 3;
int count = 0;

void setup() {
  pinMode(sensor, INPUT);
  pinMode(relay, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  if (digitalRead(sensor) == LOW) {
    Serial.println("Hand detected - Dispensing item");
    digitalWrite(relay, HIGH);
    delay(2000);
    digitalWrite(relay, LOW);

    count++;
    Serial.print("Items dispensed: ");
    Serial.println(count);

    delay(3000);
  }
}
