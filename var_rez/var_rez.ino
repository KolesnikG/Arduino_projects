#define led 9
#define pot A0
int k=0;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(pot, INPUT);
  Serial.begin(9600);
 }

void loop() {
  int x;
  x = analogRead(pot) / 4;
  analogWrite(led, x);
  x=(int)x;
  if (k!=x)
  Serial.println(k);
  k=(int)x;
}
