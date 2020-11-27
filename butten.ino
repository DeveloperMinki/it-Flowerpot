//버튼 안정화 장치
int buttonPin = 8;
int ledPin = 13;
int x=0;
int O=0;
void setup() {
  Serial.begin(9600);
  //pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP);
}

void loop() {
  if (digitalRead(buttonPin) == LOW) {
    Serial.println(O);
    O=210;// 모터 실행
    x=1;
  }
  else x=0;
  
  
  if(O==210)
  {
    if(x==0)
    {
      O=0;
      Serial.println(O);
    }
  }
  
  
}
