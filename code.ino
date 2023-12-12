/*
This Code Maked By MR.Red
*/

#define buton1 2
#define buton2 3

byte i;

bool durum1 = true, durum2 = true, durum3 = true;

int sure = 150, sureBlink = 500;

void setup() {
  for (int i = 4; i < 14; i++) {
    pinMode(i, OUTPUT);
  }
  Serial.begin(9600);
  Serial.println("Hello World!");
  pinMode(buton1, INPUT);
  pinMode(buton2, INPUT);
}

void loop() {
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);
  // 2 buton birlikte çalışıyor
  if (digitalRead(buton1) == 1 && digitalRead(buton2) == 1 && durum3) {
    durum2 = false;
    durum1 = false;
    digitalWrite(4, HIGH);
    digitalWrite(13, HIGH);
    delay(sure);
    digitalWrite(4, LOW);
    digitalWrite(13, LOW);
    digitalWrite(5, HIGH);
    digitalWrite(12, HIGH);
    delay(sure);
    digitalWrite(5, LOW);
    digitalWrite(12, LOW);
    digitalWrite(6, HIGH);
    digitalWrite(11, HIGH);
    delay(sure);
    digitalWrite(6, LOW);
    digitalWrite(11, LOW);
    delay(sure);
    digitalWrite(7, HIGH);
    digitalWrite(10, HIGH);
    delay(sure);
    digitalWrite(7, LOW);
    digitalWrite(10, LOW);
    digitalWrite(8, HIGH);
    digitalWrite(9, HIGH);
    delay(sure);
    digitalWrite(8, LOW);
    digitalWrite(9, LOW);
    delay(sure);
  } else {
    durum1 = true;
    durum2 = true;
    durum3 = true;
  }
  //2. Buton
  if (digitalRead(buton2) == 1 && durum2) {
    durum1 = false;
    /*1. çakar
    */
    for (int i = 4; i < 9; i++) {
      digitalWrite(i, HIGH);
    }
    delay(sureBlink);
    for (int i = 4; i < 9; i++) {
      digitalWrite(i, LOW);
    }
    /*2. çakar
    */
    for (int i = 9; i < 14; i++) {
      digitalWrite(i, HIGH);
    }
    delay(sureBlink);
    for (int i = 9; i < 14; i++) {
      digitalWrite(i, LOW);
    }
  }
  //1.Buton
  if (digitalRead(buton1) == 1 && durum1) {
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
    delay(sureBlink);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    digitalWrite(6, HIGH);
    digitalWrite(7, HIGH);
    delay(sureBlink);
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);
    digitalWrite(8, HIGH);
    digitalWrite(9, HIGH);
    delay(sureBlink);
    digitalWrite(8, LOW);
    digitalWrite(9, LOW);
    digitalWrite(10, HIGH);
    digitalWrite(11, HIGH);
    delay(sureBlink);
    digitalWrite(10, LOW);
    digitalWrite(11, LOW);
    digitalWrite(12, HIGH);
    digitalWrite(13, HIGH);
    delay(sureBlink);
  }
}
