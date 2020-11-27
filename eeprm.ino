#include <EEPROM.h>

int randomNumber;
char data=' ';
void setup(){
  Serial.begin(9600); // 시리얼 통신 초기화
  randomSeed(analogRead(0));
}

void loop(){
 // Serial.println("Writing random numbers...");

  if(Serial.available())
  {
    data = Serial.read();
  }
  if(data == 'a')
  {

    randomNumber = 100;
    EEPROM.write(0, randomNumber); // write(주소, 값)
  Serial.println();

  }
  if(data == 'b')
  {

    randomNumber = 50;
    EEPROM.write(1, randomNumber); // write(주소, 값)
  Serial.println();

  }

  if(data == 'c')
  {
        randomNumber = EEPROM.read(0); // read(주소)
    Serial.println("EEPROM Address : " + String(0) + "\t Value : " + randomNumber);
    
  }
  if(data == 'd')
  {
        randomNumber = EEPROM.read(1); // read(주소)
    Serial.println("EEPROM Address : " + String(0) + "\t Value : " + randomNumber);
    
  }

 
  

 



}
