#include <IRremote.h>

String btn;

int const infraRed = 2;

IRrecv receptor(infraRed);
decode_results outputValue;

void setup() {
  Serial.begin(9600);
  receptor.enableIRIn();
}

void loop() {
  if (receptor.decode(&outputValue)) {
    receptor.resume();
    Serial.println(outputValue.value);
    if (outputValue.value == 16753245)
      btn = "1";
    if (outputValue.value == 16736925)
      btn = "2";
    if (outputValue.value == 16769565)
      btn = "3";
    if (outputValue.value == 16720605)
      btn = "4";
    if (outputValue.value == 16712445)
      btn = "5";
    if (outputValue.value == 16761405)
      btn = "6";
    if (outputValue.value == 16769055)
      btn = "7";
    if (outputValue.value == 16754775)
      btn = "8";
    if (outputValue.value == 16748655)
      btn = "9";
    if (outputValue.value == 16750695)
      btn = "0";
    if (outputValue.value == 16738455)
      btn = "*";
    if (outputValue.value == 16756815)
      btn = "#";
    if (outputValue.value == 16718055)
      btn = "up";
    if (outputValue.value == 16730805)
      btn = "down";
    if (outputValue.value == 16716015)
      btn = "left";
    if (outputValue.value == 16734885)
      btn = "right";
    if (outputValue.value == 16726215)
      btn = "ok";
    //Segurar botão
    if (outputValue.value == 4294967295) {
      //Se sgurar o botão
    }
  } else {
    delay(125);
    //Se soltar
  }
}
