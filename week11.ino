#include <Servo.h>

Servo door;
int irSensor = 2;

void setup() {
  pinMode(irSensor, INPUT);
  door.attach(9);
  Serial.begin(9600);
}

void loop() {
  int state = digitalRead(irSensor);

  if (state == LOW) {
    Serial.println("Person detected - Opening door");
    door.write(90); // open
    delay(3000);
  } else {
    door.write(0); // close
  }
}
