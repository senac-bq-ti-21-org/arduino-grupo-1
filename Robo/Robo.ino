//digitalWrite(IN1, HIGH);
//digitalWrite(IN2, HIGH);


#include <IRremote.h>

int IN1 = 2;
int IN2 = 3;

IRrecv receptor(4);
decode_results outputValue;

void setup() {
  Serial.begin(9600);
  receptor.enableIRIn();
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
}

void loop() {
  if (receptor.decode(&outputValue)) {
    receptor.resume();
    //Serial.println(outputValue.value);
    if (outputValue.value == 16753245) {
      Serial.println("1");
    }
    if (outputValue.value == 16736925) {
      Serial.println("2");
    }
    if (outputValue.value == 16769565) {
      Serial.println("3");
    }
    if (outputValue.value == 16720605) {
      Serial.println("4");
    }
    if (outputValue.value == 16712445) {
      Serial.println("5");
    }
    if (outputValue.value == 16761405) {
      Serial.println("6");
    }
    if (outputValue.value == 16769055) {
      Serial.println("7");
    }
    if (outputValue.value == 16754775) {
      Serial.println("8");
    }
    if (outputValue.value == 16748655) {
      Serial.println("9");
    }
    if (outputValue.value == 16750695) {
      Serial.println("0");
    }
    if (outputValue.value == 16738455) {
      Serial.println("*");
    }
    if (outputValue.value == 16756815) {
      Serial.println("#");
    }
    if (outputValue.value == 16718055) {
      Serial.println("up");
      digitalWrite(IN1, LOW);
      digitalWrite(IN2, HIGH);
    }
    if (outputValue.value == 16730805) {
      Serial.println("down");
      digitalWrite(IN1, LOW);
      digitalWrite(IN2, LOW);
    }
    if (outputValue.value == 16716015) {
      Serial.println("left");
    }
    if (outputValue.value == 16734885) {
      Serial.println("right");
    }
    if (outputValue.value == 16726215) {
      Serial.println("ok");
    }
  }
}
