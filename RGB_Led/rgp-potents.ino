int redPin = 11;
int greenPin = 10;
int bluePin = 9;
#define pot0 A0
#define pot1 A1
#define pot2 A2
int x0=0;
int x1=0;
int x2=0;
int poh=7;
int x0k=0;
int x1k=0;
int x2k=0;

void setup() {
  pinMode(redPin, INPUT);
  pinMode(greenPin, INPUT);
  pinMode(bluePin, INPUT);
}

void loop() {
  x0 = (analogRead(pot0) / 4);
  if (x0>=0 && x0<poh)
  x0=0;
  analogWrite(redPin, x0);
  x1 = (analogRead(pot1) / 4);
  if (x1>=0 && x1<poh)
  x1=0;
  analogWrite(greenPin, x1);
  x2 = analogRead(pot2) / 4;
  if (x2>=0 && x2<poh)
  x2=0;
  analogWrite(bluePin, x2);
}
