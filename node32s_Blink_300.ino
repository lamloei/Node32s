#define __BOARD__ "node32s"

int i;
void setup() {
  Serial.begin(115200);
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH);
  delay(300);
  digitalWrite(LED_BUILTIN, LOW);
  delay(300);
  Serial.print(__BOARD__);
  Serial.print(":\\> ");
  Serial.println(i++);
}
