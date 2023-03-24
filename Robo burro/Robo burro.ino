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
    Serial.println("andando");
    digitalWrite(in1, HIGH);
    digitalWrite(in2, LOW);
    digitalWrite(in3, LOW);
    digitalWrite(in4, HIGH);
  } else {
    Serial.println("parado");
    digitalWrite(in1, LOW);
    digitalWrite(in2, LOW);
    digitalWrite(in3, LOW);
    digitalWrite(in4, LOW);
  }
    delay(125);
}