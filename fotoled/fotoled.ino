int led = 13;
int ldr = 0;
void setup() {
pinMode(led, OUTPUT);
Serial.begin(9600);
}

void loop() {
if (analogRead(ldr) < 1000) digitalWrite(led, HIGH);
else digitalWrite(led, LOW);
int sensorValue = analogRead(A0);
Serial.println(sensorValue);
delay(1000);
}
