#include <LiquidCrystal.h>
const int rs= 10, en=9, d4=4, d5=5, d6=6, d7=7;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
const int Sensor1= A0;
const int Sensor2= A4;
const int led1=2;
const int led2=3;
int temperature1= 0;
int temperature2= 0;
float realTemp1= 0;
float realTemp2= 0;
int d1 = 0;

void setup() {
  // put your setup code here, to run once:
  lcd.begin(16, 2);
  lcd.print("Temp.Project");
  delay(500);
  lcd.clear();
  pinMode(Sensor1, INPUT);
  pinMode(Sensor2, INPUT);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  temperature1 = analogRead(Sensor1);
  temperature2 = analogRead(Sensor2);
  realTemp1 = (((float)temperature1*5.0)/1023.0)*100.0;
  realTemp2 = (((float)temperature2*5.0)/1023.0)*100.0;
  lcd.setCursor(0, 0);
  lcd.print("realTemp1:");
  lcd.print(realTemp1, 1);
  delay(500);

  lcd.setCursor(0, 1);
  lcd.print("realTemp2:");
  lcd.print(realTemp2, 1);
  delay(500);
  if (realTemp1 >=50.0){
    digitalWrite (led1, HIGH);
  } 
  else {
    digitalWrite(led1, LOW);
  }
  if (realTemp2 >50.0){
    digitalWrite (led2, HIGH);
  } 
  else {
    digitalWrite(led2, LOW);
  }


}
