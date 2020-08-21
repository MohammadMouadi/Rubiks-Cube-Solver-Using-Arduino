#include <Servo.h>
String com; 
Servo hit,rot,block;
int i,angle=98;
int j;
int correction = 0;
void hitman(){
  int speed = 50;
  int dd = 1310;
  if(angle == 98) {speed = 45; dd =1170;}
       delay(100);
  hit.write(speed);
      delay(dd);
      hit.write(85);
      delay(500);
      if(correction++ == 10){
        hit.write(95);
       delay(4500);
       hit.write(85);
       correction = 0;
       hit.write(0);
  delay(250);
  hit.write(85);
      }
}
void BUB(int angle){
      /*for(j=180;j>0;j--){
        block.write(j);
        delay(4);
      }*/
      block.write(0);
      delay(500);
      rot.write(angle);
      delay(1000);
      block.write(180);
      delay(500);
}
void setup (){
Serial.begin(9600);
hit.attach (9);
  block.attach (10);
  rot.attach(11);
  hit.write(84);
  block.write(180);
  rot.write(98);
  /*hit.write(95);
  delay(6000);
  hit.write(0);
  delay(250);
  hit.write(85);*/
  
}

void loop (){
  while(Serial.available()<=0); 
  com = Serial.readString();
Serial.print(com);
for(i = 0;i<com.length();i++){
  switch(com[i]){
    case 'r':
      angle-=98;
      rot.write(angle);
      delay(500);
      break;
    case 'i':
      angle+=98;
      rot.write(angle);
      delay(500);
      break;
    case '1':
        angle+=106;
        BUB(angle);
        angle-=8;
        rot.write(angle);
        delay(500);
      break;
    case '2': 
    angle-=98;
        BUB(angle);
        angle+=113;
        rot.write(angle);
        delay(500);
        angle-=25;
        BUB(angle);
        angle-=88;
        rot.write(angle);
        delay(500);
        
      
      break;


      case 'x':
        hitman();
      break;

      case 'y':
      hitman();
      hitman();
      break;
      case 'z':
     hitman();hitman();hitman();
      break;
      
      case 'a':
       BUB(angle);
       break;

       case 'd':
       delay(1000);
       break;

       case 'p':
       angle=98;
       rot.write(98);
       break;

       case 't':
       hit.write(95);
       delay(6000);
       hit.write(85);
       break;

        case 'b':
       hit.write(95);
       delay(6000);
       hit.write(0);
       delay(300);
       hit.write(85);
       break;
        
  }
}
Serial.println(angle);
com = " ";
}
