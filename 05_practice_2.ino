#define PIN_LED 7

void setup() {
  // put your setup code here, to run once:
  pinMode(PIN_LED, OUTPUT);
  digitalWrite(PIN_LED, LOW);
  delay(1000);
}

void loop() {
  // put your main code here, to run repeatedly:
  int cnt = 0;
  while(cnt <= 5) {
    digitalWrite(PIN_LED, LOW);
    delay(100);
    digitalWrite(PIN_LED, HIGH);
    delay(100);
    ++cnt;
  }
  while(1) {};
}
