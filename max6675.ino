// Sample Arduino MAX6675 Arduino Sketch

#include "max6675.h"

int ktcSO = 8;
int ktcCS = 9;
int ktcCLK = 10;

MAX6675 ktc(ktcCLK, ktcCS, ktcSO);

  
void setup() {
  Serial.begin(115200);
  // Bekapcsoás után kicsit várunk, hogy a MAX6675 beálljon-give the MAX a little time to settle
  delay(500);
}

void loop() {
  //Celsius és Fahrenheit adatokat külön függvénnyel olvasunk - there are separate funcions for Celsius or Fahrenheit readout
  
   Serial.print("Deg C = "); 
   Serial.print(ktc.readCelsius());
   Serial.print("\t Deg F = ");
   Serial.println(ktc.readFahrenheit());
 
   delay(1000);
}


