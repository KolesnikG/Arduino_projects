int led=13;
int count=100;
int delta=1;
void setup(){
pinMode(led, OUTPUT);
}

void loop() {
digitalWrite(led, HIGH);   
count-=delta;
delay(count);               
digitalWrite(led, LOW);
delay(count);
if ((count<=0) || (count>100))
delta*=-1;
}

