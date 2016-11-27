#define CHANNEL_1 A0
#define CHANNEL_2 A1
#define CHANNEL_3 A2
#define CHANNEL_4 A3
#define CHANNEL_5 A4
#define CHANNEL_6 A5

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  /*
  Serial.println("Channel 1:" + String(analogRead(CHANNEL_1)));
  Serial.println("Channel 2:" + String(analogRead(CHANNEL_2)));
  Serial.println("Channel 3:" + String(analogRead(CHANNEL_3)));
  Serial.println("Channel 4:" + String(analogRead(CHANNEL_4)));
  Serial.println("Channel 5:" + String(analogRead(CHANNEL_5)));
  Serial.println("Channel 6:" + String(analogRead(CHANNEL_6)));
  */
  //Serial.println(String(analogRead(CHANNEL_1))+","+String(analogRead(CHANNEL_2))+","+String(analogRead(CHANNEL_3)));
  //delay(10);
  //Serial.println("");

  potVal = analogRead(
}
