int led1 = 13;
int led2 = 11;
int led3 = 7;
int led4 = 5;
String input1;
String input2;
String input3;
String input4;
int delay_1;
int delay_2;
int delay_3;
int delay_4;
int cicli;
void setup() {
  // put your setup code here, to run once:
pinMode(led1, OUTPUT);
pinMode(led2, OUTPUT);
pinMode(led3, OUTPUT);
pinMode(led4, OUTPUT);
Serial.begin(9600);
}

void loop() {
  delay_1 = random(100, 2000);
  Serial.println(delay_1);
  delay_2 = random(100, 2000);
  Serial.println(delay_2);
  delay_3 = random(100, 2000);
  Serial.println(delay_3);
  delay_4 = random(100, 2000);
  Serial.println(delay_4);
delay(1000);
  Serial.println("quanti cicli vuoi fare?");
  while(Serial.available() == 0);
  cicli = Serial.readString().toInt();
  Serial.println(cicli);
  for(int i = 0; i < cicli; i++)
  {
  digitalWrite(led1, HIGH);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  delay(delay_1);
  digitalWrite(led1, LOW);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  delay(delay_2);
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, HIGH);
  digitalWrite(led4, LOW);
  delay(delay_3);
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, HIGH);
  delay(delay_4);
  }
}
