#include <IRremote.h>

String btn;

int const in1 = 3, in2 = 4, in3 = 5, in4 = 6;
int const infraRed = 2;

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
  if (receptor.decode(&outputValue)) {
    receptor.resume();
    //Serial.println(outputValue.value);
    if (outputValue.value == 16718055)
      btn = "up";
    if (outputValue.value == 16716015)
      btn = "left";
    if (outputValue.value == 16734885)
      btn = "right";
    if (outputValue.value == 4294967295) {
      if (btn == "up"){
        Serial.println("UP");
        digitalWrite(in1, LOW);
        digitalWrite(in2, HIGH);
        digitalWrite(in3, LOW);
        digitalWrite(in4, HIGH);
      }
      if (btn == "left"){
        Serial.println("LEFT");
        digitalWrite(in3, LOW);
        digitalWrite(in4, HIGH);
      }
      if (btn == "right"){
        Serial.println("RIGHT");
        digitalWrite(in1, LOW);
        digitalWrite(in2, HIGH);
      }
    }
  } else {
    delay(125);
    Serial.println("STOP");
    digitalWrite(in1, LOW);
    digitalWrite(in2, LOW);
    digitalWrite(in3, LOW);
    digitalWrite(in4, LOW);
  }
}
