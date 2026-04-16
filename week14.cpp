int sensor = 2;
int count = 0;

void setup() {
  pinMode(sensor, INPUT);
  Serial.begin(9600);
}

void loop() {
  if (digitalRead(sensor) == LOW) {
    count++;
    Serial.print("Object Count: ");
    Serial.println(count);

    delay(1000); // debounce
  }
}
