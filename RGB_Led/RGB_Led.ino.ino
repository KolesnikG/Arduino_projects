int redPin = 11;
int greenPin = 10;
int bluePin = 9;
int count[] = {0,0,0};
int delta=1;
int i=0;

void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void loop() {
  count[i]+=delta;
  setColor(count[0], count[1], count[2]);
  delay(1);
  if ((count[i]==255) || (count[i]==0)) {
    i+=1;
    if (i>2) {
      i=0;
      delta*=-1;
    }
}

void setColor(int red, int green, int blue) {
  analogWrite(redPin, red);
  analogWrite(greenPin, green);
  analogWrite(bluePin, blue);  
}
