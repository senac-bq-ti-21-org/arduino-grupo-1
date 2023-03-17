#include <IRremote.h>

String btn = "null";

int const in1 = 2, in2 = 3, in3 = 4, in4 = 5;
int const infraRed = 6;

IRrecv receptor(infraRed);
decode_results outputValue;

void setup() {
  Serial.begin(9600);
  receptor.enableIRIn();
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
}

void loop() {
  if(receptor.decode(&outputValue)) {
    receptor.resume();
    Serial.println(outputValue.value);
    if(outputValue.value == 16718055)
      btn = "up";
    if(outputValue.value == 16730805)
      btn = "down";
    if(outputValue.value == 16716015)
      btn = "left";
    if(outputValue.value == 16734885)
      btn = "right";
    if(outputValue.value == 4294967295) {
      if(btn == "up") {
        Serial.println(btn);
        digitalWrite(in1, LOW);
        digitalWrite(in2, HIGH);
        digitalWrite(in3, LOW);
        digitalWrite(in4, HIGH);
      }
      if(btn == "down") {
        Serial.println(btn);
        digitalWrite(in1, HIGH);
        digitalWrite(in2, LOW);
        digitalWrite(in3, HIGH);
        digitalWrite(in4, LOW);
      }
      if(btn == "right") {
        Serial.println(btn);
        digitalWrite(in1, LOW);
        digitalWrite(in2, HIGH);
        digitalWrite(in3, HIGH);
        digitalWrite(in4, LOW);
      }
      if(btn == "left") {
        Serial.println(btn);
        digitalWrite(in1, HIGH);
        digitalWrite(in2, LOW);
        digitalWrite(in3, LOW);
        digitalWrite(in4, HIGH);
      }
    }
  } else {
    delay(125);
    btn = "null";
    Serial.println(btn);
    Serial.println("STOP");
    digitalWrite(in1, LOW);
    digitalWrite(in2, LOW);
    digitalWrite(in3, LOW);
    digitalWrite(in4, LOW);
  }
}