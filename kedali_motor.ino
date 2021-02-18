
void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  putarKiri();
  delay(500);
  putarKanan();
  delay(500);
}

void putarKiri(){
  digitalWrite(13, LOW);
  digitalWrite(12, HIGH);
}
void putarKanan(){
  digitalWrite(13, HIGH);
  digitalWrite(12, LOW);
}

