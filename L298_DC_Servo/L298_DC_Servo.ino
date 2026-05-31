#include <Servo.h>

Servo s;

void setup() {
  Serial.begin(9600);
  s.attach(45, 500, 2500);  // full pulse range
}

void loop() {
  for (int angle = 0; angle <= 270; angle++) {
    s.write(angle);
    Serial.println(angle);
    serial.print(s);
    delay(20);
  }

  delay(2000);

  for (int angle = 270; angle >= 0; angle--) {
    s.write(angle);
    delay(10);
    Serial.println(angle);
    delay(20);
  }

  delay(2000);
  Serial.print("Done");

}