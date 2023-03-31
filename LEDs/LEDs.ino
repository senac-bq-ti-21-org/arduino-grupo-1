const int btn = 2, led1 = 3, led2 = 4, led3 = 5, led4 = 6, led5 = 7, led6 = 8, led7 = 9, led8 = 10, led9 = 11, led10 = 12, led11 = 13;
const int led1Mi1 = 0, led2Mi1 = 40, led3Mi1 = 80, led4Mi1 = 120, led5Mi1 = 160, led6Mi1 = 200, led7Mi1 = 240, led8Mi1 = 280, led9Mi1 = 320, led10Mi1 = 360, led11Mi1 = 400;
const int led1Mi = 0, led2Mi = 40, led3Mi = 80, led4Mi = 120, led5Mi = 160, led6Mi = 200, led7Mi = 240, led8Mi = 280, led9Mi = 320, led10Mi = 360, led11Mi = 400, 
const int led1Ma1 = 39, led2Ma1 = 79, led3Ma1 = 119, led4Ma1 = 159, led5Ma1 = 199, led6Ma1 = 239, led7Ma1 = 279, led8Ma1 = 680, led9Ma1 = 359, led10Ma1 = 499, led11Ma1 = 439;
const int led1Ma = 39, led2Ma = 79, led3Ma = 119, led4Ma = 159, led5Ma = 199, led6Ma = 239, led7Ma = 279, led8Ma = 680, led9Ma = 359, led10Ma = 499, led11Ma = 439, 

void setup() {
  pinMode(btn, INPUT);
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