#include <IRremote.h>
#include <MPU6050.h>

int const speedChange = 10;
int const in1 = 4, in2 = 3, enA = 5; //enA needs PWM
int const infraRed = 6;

int const initialSpeed = 150;
int speed = initialSpeed;
bool onOff = true;

IRrecv receptor(infraRed);
decode_results outputValue;

void setup() {
  Serial.begin(9600);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(enA, OUTPUT);
  receptor.enableIRIn();
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
}

void loop() {
  if (receptor.decode(&outputValue)) {
    receptor.resume();
    if (outputValue.value == 16613503) { //Vol +
      if (speed < 255) {
        speed = speed + speedChange;
      }
    }
    if (outputValue.value == 16617583) { //Vol -
      if (speed > 0) {
        speed = speed - speedChange;
      }
    }
    if (outputValue.value == 16580863) { //On/off
      speed = initialSpeed;
      if (onOff == true) {
        digitalWrite(in1, HIGH);
        onOff = false;
      } else {
        digitalWrite(in1, LOW);
        onOff = true;
      }
    }
  }
  Serial.println(speed);
  analogWrite(enA, speed);
}
