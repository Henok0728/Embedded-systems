// Blinking light
int led1 = 13;
int led2 = 12;
int led3 = 11;
void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  // put your setup code here, to run once:
}
void loop() {
  digitalWrite(led1,HIGH);
  digitalWrite(led2,HIGH);
  digitalWrite(led3,HIGH);
  delay(1500);
  digitalWrite(led1,LOW);
  delay(1500);
  digitalWrite(led2,LOW);
  delay(1500);
  digitalWrite(led3,LOW);
  delay(1000);
 
  // put your main code here, to run repeatedly:

}
