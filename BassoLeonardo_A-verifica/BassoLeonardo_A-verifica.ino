int led1 = 13;
int led2 = 11;
int led3 = 7;
int led4 = 5;
String input;
int delay_1;
int delay_2;
int delay_3;
int delay_4;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
Serial.println("quanto tempo vuoi far rimanere acceso il led rosso led rosso?");
while(Serial.available() == 0)
if (Serial.available() > 0)
  {
  input = Serial.readString();
  delay_1 = input.toInt();
  }
  Serial.println(delay_1);
pinMode(led1, OUTPUT);
pinMode(led2, OUTPUT);
pinMode(led3, OUTPUT);
pinMode(led4, OUTPUT);

}

void loop() {
  digitalWrite(led1, HIGH);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  delay(delay_1);
  digitalWrite(led1, LOW);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, HIGH);
  digitalWrite(led4, HIGH);
  delay(delay_1);
}
