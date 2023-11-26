int i;
const int buton1 = 10;
const int buton2 = 11;
void setup() {
  for (i = 3; i <= 7; i++) {
    pinMode(i, OUTPUT);
  }
  pinMode(buton1, INPUT);
  pinMode(buton2, INPUT);

  for (i = 3; i <= 7; i++) {
    digitalWrite(i, HIGH);
  }
}
bool bt2 = true;
bool bt1 = true;
void loop() {
  int button1 = digitalRead(buton1);
  if (button1 == 1 && bt1 == true) {
    digitalWrite(3, HIGH);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    digitalWrite(7, HIGH);
    bt1 = false;
  } else {
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(7, HIGH);
  }

  int button2 = digitalRead(buton2);
  if (button2 == 1 && bt2 == 1) {
    for (i = 3; i <= 7; i++) {
      digitalWrite(i, LOW);
    }
    for (i = 3; i <= 7; i++) {
      digitalWrite(i, HIGH);
      delay(250);
      digitalWrite(i, LOW);
    }
  } else {
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(7, HIGH);
  }
  if (button1 == 1 && button2 == 1) {
    bt1 = false;
    bt2 = false;
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, HIGH);
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);
    delay(500);
    digitalWrite(5, LOW);
    delay(500);
  }else{
    bt1 = true;
    bt2 = true;
  }
}
