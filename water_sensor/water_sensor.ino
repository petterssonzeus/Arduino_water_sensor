int waterlevel;
void setup() {
  pinMode(A0, INPUT); //pinmode är en funktion (inom parentes är parametrarna, alltså pin och funktion)
  pinMode(12, OUTPUT);
  Serial.begin(9600); 
}

void loop() {
  waterlevel = analogRead(A0);
  Serial.println(waterlevel);
  if (waterlevel > 600) {
    digitalWrite(12, HIGH);
  }
  else {
    digitalWrite(12, LOW);
  }
}
