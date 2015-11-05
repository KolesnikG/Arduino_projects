int redPin = 11;
int greenPin = 10;
int bluePin = 9;
int photoPin = 8;
int i=0;

#define pot0 A0
#define pot1 A1

void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  SetColor(100,100,100);
  i=analogRead(pot0);
  analogWrite(photoPin, i);
  int sensorValue = analogRead(pot1);
  Serial.println(sensorValue);
  delay(200);
}

void SetColor(int R, int G, int B){
  analogWrite(redPin, R);
  analogWrite(greenPin, G);
  analogWrite(bluePin, B);
  }


