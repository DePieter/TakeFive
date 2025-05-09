//Bram Finn Pieter
#include <IRremote.hpp>
#include <Servo.h>

#define IR_RECEIVE_PIN 8
#define SERVO_PIN 9

Servo servo;
const int range = 780;
const int mid = 1600;

int pos = 90;
int speed = 10;

void rotate(int angle) {
  angle = map(angle, 0, 180, mid - range, mid + range);
  servo.writeMicroseconds(angle);
}

void setup() {
  IrReceiver.begin(IR_RECEIVE_PIN, ENABLE_LED_FEEDBACK);
  servo.attach(SERVO_PIN);
  rotate(pos);
Serial.begin(9600);


}

void loop() {
 
  if (IrReceiver.decode()) {
    uint16_t command = IrReceiver.decodedIRData.command;
     Serial.println(command);
    if (command == 7) {  // NEXT
      pos = min(pos + speed, 360);
    } else if (command == 21) {  // PREV
      pos = max(pos - speed, 10);
    }
    rotate(pos);
    IrReceiver.resume();
  }
}
