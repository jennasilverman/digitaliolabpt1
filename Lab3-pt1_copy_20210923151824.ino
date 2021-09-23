int redLED=19;
int yellowLED=20;
int s1 = 2;
int s2 = 3;

void setup() {
  pinMode(19, OUTPUT);
  pinMode(20, OUTPUT);
  pinMode(2, INPUT);
  pinMode(3, INPUT);

  Serial.begin(9600);
}

void loop() {
  Serial.println(digitalRead(s2));

  if(digitalRead(s1)==1){
    digitalWrite(yellowLED, HIGH);
  }else{
    digitalWrite(yellowLED, LOW);
  }

  if(digitalRead(s2)==1){
    digitalWrite(redLED, HIGH);
  }else{
    digitalWrite(redLED, LOW);
  }
}
