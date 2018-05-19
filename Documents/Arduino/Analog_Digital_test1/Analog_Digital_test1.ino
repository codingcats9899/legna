#define segA 2    //connecting segment A to PIN2
#define segB 3    // connecting segment B to PIN3
#define segC A3   // connecting segment C to PIN4
#define segD A4   // connecting segment D to PIN5
#define segE A5   // connecting segment E to PIN6
#define segF 4    // connecting segment F to PIN7
#define segG 5    // connecting segment G to PIN8

#define joyX A0
#define joyY A1
#define joyZ A2

int countNum = 0;
int xVar = 0;
int yVar = 0;
int zVar = 0;

void setup(){

   /* for (int i = 2; i < 14; i++){

            pinMode(i, OUTPUT);   // taking all pins from 7-13 as output

  }*/
  pinMode(2, OUTPUT);   // taking all pins from 7-13 as output
  pinMode(3, OUTPUT);   // taking all pins from 7-13 as output
  pinMode(A3, OUTPUT);   // taking all pins from 7-13 as output
  pinMode(A4, OUTPUT);   // taking all pins from 7-13 as output
  pinMode(A5, OUTPUT);   // taking all pins from 7-13 as output
  pinMode(4, OUTPUT);   // taking all pins from 7-13 as output
  pinMode(5, OUTPUT);   // taking all pins from 7-13 as output

  

}


void loop(){

  
  xVar = analogRead(joyX);
  yVar = analogRead(joyY);
  zVar = analogRead(joyZ);
  
if (xVar >= 354 && xVar <= 669 && yVar >= 0 && yVar <= 25){
    countNum = 0;
  }
  if (xVar >= 0 && xVar <= 353 && yVar >= 0 &&  yVar <= 300){
    countNum = 1;
  }
  if (xVar >= 0 && xVar <= 97 && yVar >= 301 &&  yVar <= 511){
    countNum = 2;
  }
  if (xVar >= 0 && xVar <= 97 && yVar >= 512 &&  yVar <= 812){
    countNum = 3;
  }
  if (xVar >= 0 && xVar <= 353 && yVar >= 813 &&  yVar <= 1023){
    countNum = 4;
  }
  if (xVar >= 354 && xVar <= 669 && yVar >= 999 &&  yVar <= 1023){
    countNum = 5;
  }
  if (xVar >= 700 && xVar <= 1023 && yVar >= 813 &&  yVar <= 1023){
    countNum = 6;
  }
  if (xVar >= 926 && xVar <= 1023 && yVar >= 512 &&  yVar <= 812){
    countNum = 7;
  }
  if (xVar >= 926 && xVar <= 1023 && yVar >= 301 &&  yVar <= 511){
    countNum = 8;
  }
  if (xVar >= 700 && xVar <= 1023 && yVar >= 0 &&  yVar <= 300){
    countNum = 9;
  }
  
  Serial.print(xVar);
  Serial.print("\t");
  Serial.print(yVar);
  Serial.print("\t");
  Serial.print(zVar);
  Serial.print("\t");
  Serial.println(countNum);
  

  
  switch (countNum){
    
      case 0://when count value is zero show ”0” on disp
      
      digitalWrite(segA, HIGH);

      digitalWrite(segB, HIGH);

      digitalWrite(segC, HIGH);

      digitalWrite(segD, HIGH);

      digitalWrite(segE, HIGH);

      digitalWrite(segF, HIGH);

      digitalWrite(segG, LOW);

      break;



      case 1:// when count value is 1 show ”1” on disp

      digitalWrite(segA, LOW);

      digitalWrite(segB, HIGH);

      digitalWrite(segC, HIGH);

      digitalWrite(segD, LOW);

      digitalWrite(segE, LOW);

      digitalWrite(segF, LOW);

      digitalWrite(segG, LOW);

      break;



      case 2:// when count value is 2 show ”2” on disp

      digitalWrite(segA, HIGH);

      digitalWrite(segB, HIGH);

      digitalWrite(segC, LOW);

      digitalWrite(segD, HIGH);

      digitalWrite(segE, HIGH);

      digitalWrite(segF, LOW);

      digitalWrite(segG, HIGH);

      break;



      case 3:// when count value is 3 show ”3” on disp

      digitalWrite(segA, HIGH);

      digitalWrite(segB, HIGH);

      digitalWrite(segC, HIGH);

      digitalWrite(segD, HIGH);

      digitalWrite(segE, LOW);

      digitalWrite(segF, LOW);

      digitalWrite(segG, HIGH);

      break;



      case 4:// when count value is 4 show ”4” on disp

      digitalWrite(segA, LOW);

      digitalWrite(segB, HIGH);

      digitalWrite(segC, HIGH);

      digitalWrite(segD, LOW);

      digitalWrite(segE, LOW);

      digitalWrite(segF, HIGH);

      digitalWrite(segG, HIGH);

      break;



      case 5:// when count value is 5 show ”5” on disp

      digitalWrite(segA, HIGH);

      digitalWrite(segB, LOW);

      digitalWrite(segC, HIGH);

      digitalWrite(segD, HIGH);

      digitalWrite(segE, LOW);

      digitalWrite(segF, HIGH);

      digitalWrite(segG, HIGH);

      break;



      case 6:// when count value is 6 show ”6” on disp


      digitalWrite(segA, HIGH);

      digitalWrite(segB, LOW);

      digitalWrite(segC, HIGH);

      digitalWrite(segD, HIGH);

      digitalWrite(segE, HIGH);

      digitalWrite(segF, HIGH);

      digitalWrite(segG, HIGH);

      break;



      case 7:// when count value is 7 show ”7” on disp


      digitalWrite(segA, HIGH);

      digitalWrite(segB, HIGH);

      digitalWrite(segC, HIGH);

      digitalWrite(segD, LOW);

      digitalWrite(segE, LOW);

      digitalWrite(segF, LOW);

      digitalWrite(segG, LOW);

      break;



      case 8:// when count value is 8 show ”8” on disp


      digitalWrite(segA, HIGH);

      digitalWrite(segB, HIGH);

      digitalWrite(segC, HIGH);

      digitalWrite(segD, HIGH);

      digitalWrite(segE, HIGH);

      digitalWrite(segF, HIGH);

      digitalWrite(segG, HIGH);

      break;



      case 9:// when count value is 9 show ”9” on disp

      digitalWrite(segA, HIGH);

      digitalWrite(segB, HIGH);

      digitalWrite(segC, HIGH);

      digitalWrite(segD, HIGH);

      digitalWrite(segE, LOW);

      digitalWrite(segF, HIGH);

      digitalWrite(segG, HIGH);

      break;



      break;
      
      }

}
