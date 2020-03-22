void setup(){
    Serial.begin(9600);
    pinMode(13, OUTPUT);
    pinMode(2, INPUT_PULLUP);
}
void loop(){
    digitalWrite(13, 1);
    delay(100);
    Serial.println(digitalRead(2));
 }

/*void setup() {
    pinMode(13, OUTPUT);
    pinMode(8, OUTPUT);
}
void loop() {
    digitalWrite(13, 0);
    digitalWrite(8, 1);
    delay(500);
    digitalWrite(13, 1);
    digitalWrite(8, 0);
    delay(500);
}*/