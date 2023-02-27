const int led1 = 2, led2 = 3, led3 = 4, led4 = 5, led5 = 6, led6 = 7, led7 = 8, led8 = 9, led9 = 10, led10 = 11, led11 = 12, led12 = 13;
const int led1Mi = 0, led2Mi = 80, led3Mi = 165, led4Mi = 250, led5Mi = 335, led6Mi = 420, led7Mi = 505, led8Mi = 590, led9Mi = 675, led10Mi = 760, led11Mi = 845, led12Mi = 930;
const int led1Ma = 85, led2Ma = 170, led3Ma = 255, led4Ma = 340, led5Ma = 425, led6Ma = 510, led7Ma = 595, led8Ma = 680, led9Ma = 765, led10Ma = 850, led11Ma = 935, led12Ma = 1024;

void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  pinMode(led7, OUTPUT);
  pinMode(led8, OUTPUT);
  pinMode(led9, OUTPUT);
  pinMode(led10, OUTPUT);
  pinMode(led11, OUTPUT);
  pinMode(led12, OUTPUT);
}

void loop() {
    if (analogRead(A0) > led1Mi && analogRead(A0) < led1Ma) {digitalWrite(led1, HIGH);}
    else {digitalWrite(led1, LOW);}
    if (analogRead(A0) > led2Mi && analogRead(A0) < led2Ma) {digitalWrite(led2, HIGH);}
    else {digitalWrite(led2, LOW);}
    if (analogRead(A0) > led3Mi && analogRead(A0) < led3Ma) {digitalWrite(led3, HIGH);}
    else {digitalWrite(led3, LOW);}
    if (analogRead(A0) > led4Mi && analogRead(A0) < led4Ma) {digitalWrite(led4, HIGH);}
    else {digitalWrite(led4, LOW);}
    if (analogRead(A0) > led5Mi && analogRead(A0) < led5Ma) {digitalWrite(led5, HIGH);}
    else {digitalWrite(led5, LOW);}
    if (analogRead(A0) > led6Mi && analogRead(A0) < led6Ma) {digitalWrite(led6, HIGH);}
    else {digitalWrite(led6, LOW);}
    if (analogRead(A0) > led7Mi && analogRead(A0) < led7Ma) {digitalWrite(led7, HIGH);}
    else {digitalWrite(led7, LOW);}
    if (analogRead(A0) > led8Mi && analogRead(A0) < led8Ma) {digitalWrite(led8, HIGH);}
    else {digitalWrite(led8, LOW);}
    if (analogRead(A0) > led9Mi && analogRead(A0) < led9Ma) {digitalWrite(led9, HIGH);}
    else {digitalWrite(led9, LOW);}
    if (analogRead(A0) > led10Mi && analogRead(A0) < led10Ma) {digitalWrite(led10, HIGH);}
    else {digitalWrite(led10, LOW);}
    if (analogRead(A0) > led11Mi && analogRead(A0) < led11Ma) {digitalWrite(led11, HIGH);}
    else {digitalWrite(led11, LOW);}
    if (analogRead(A0) > led12Mi && analogRead(A0) < led12Ma) {digitalWrite(led12, HIGH);}
    else {digitalWrite(led12, LOW);}
}