
//human following robot
#define HIGH 1;
#define LOW  1;
int trig=4, echo=2;
int lsn=12, rsn=13;
int lp=7,ln=8, rp=9,rn=10;
int del=200;
void setup() {
 pinMode(trig,OUTPUT); // trig to output
  pinMode(echo,INPUT); // echo to input
  pinMode(lsn,INPUT);  // left sensor
  pinMode(rsn,INPUT);  //right sensor
  pinMode(lp,OUTPUT);  // left +
  pinMode(ln,OUTPUT);  // left -
  pinMode(rp,OUTPUT);  // right +
  pinMode(rn,OUTPUT);  // right -
  Serial.begin(9600);
}

void loop() {
 /*  //taking out distance reading from ultrasonic sensor
  digitalWrite(trig,0);
  delayMicroseconds(2);  
  digitalWrite(trig,1);
  delayMicroseconds(10); // making trig high for 10u seconds
  digitalWrite(trig,0);

  int duration=pulseIn(echo,1);  // reading out pulse from echo pin
  int d=duration*0.034/2;
  Serial.print("Distance :");
  Serial.print(d);
  Serial.println(" cm");
*/
   /* if distance is less than 40 , robot moves forward
      otherwise no movement    */
 /* if(d<=40 && d>=10){
    forward();
    Serial.print("f");
    delay(del);
   }
   else halt();
 */

  if(lsn==1 && rsn==0) Serial.print("\nleft");
      else if(lsn==0 && rsn==1) Serial.print("\nright");
      else if(lsn==1 && rsn==1) Serial.print("\nforward");
  else Serial.print("\nstop");
 }

  int forward()   { lf();  rf(); }     // 11
  int backward()  { lb();  rb(); }     // 22
  int rturnslow() { lf();  rs(); }     // 10
  int lturnslow() { rf();  ls(); }     // 01 
  int rturn()     { lf();  rb(); }     // 12
  int lturn()     { rf();  lb(); }     // 21
  int halt()      { rs();  ls(); }     // 00
  
   int lf(){digitalWrite(lp,1);    digitalWrite(ln,0);}
   int rf(){digitalWrite(rp,1);    digitalWrite(rn,0);}
   int lb(){digitalWrite(lp,0);    digitalWrite(ln,1);}
   int rb(){digitalWrite(rp,0);    digitalWrite(rn,1);}
   int ls(){digitalWrite(lp,0);    digitalWrite(ln,0);}
   int rs(){digitalWrite(rp,0);    digitalWrite(rn,0);}
   
