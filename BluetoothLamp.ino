#include<SoftwareSerial.h>
#define lamp 2
char Command = 'o'  ;


//Bluetooth serial 
const int txpin = 13;       
const int rxpin = 12;
SoftwareSerial blue(txpin, rxpin);


void setup() {
  blue.begin(9600);
 pinMode(lamp,OUTPUT); 
  digitalWrite(lamp,HIGH);

}

void loop() {
  Serial.println(blue.read());

 
   if (blue.available()) {
       Command = blue.read();



 if(Command == 'L'){
        digitalWrite(lamp,HIGH);
      
     }
     if(Command == 'l'){
        digitalWrite(lamp,LOW);
       
   }



   }

}
