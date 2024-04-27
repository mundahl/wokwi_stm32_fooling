void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial.println("Hello, STM32!");
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(7, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(10); // this speeds up the simulation
  digitalWrite(LED_BUILTIN, HIGH);
  digitalWrite(7, HIGH);
  delay(1000);
  digitalWrite(LED_BUILTIN, LOW);
  digitalWrite(7, LOW);
  delay(1000);
}
