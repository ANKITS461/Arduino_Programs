
int ls=1;
int Rs=2;
int lp=5;
int ln=6;
int rp=8;
int rn=9;
#define HIGH 1 LOW 0;

void setup() {
  pinMode(ls,INPUT);
  pinMode(Rs,INPUT);
  pinMode(lp,INPUT);
  pinMode(ln,INPUT);
  pinMode(rp,INPUT);
  pinMode(rn,INPUT);

}

int forward()
{
  digitalWrite(lp,1);
  digitalWrite(ln,0);
  digitalWrite(rp,1);
  digitalWrite(rn,0);
}
int halt()
{
  digitalWrite(lp,0);
  digitalWrite(ln,0);
  digitalWrite(rp,0);
  digitalWrite(rn,0);
}
int rturn()
{
  digitalWrite(lp,1);
  digitalWrite(ln,0);
  digitalWrite(rp,0);
  digitalWrite(rn,0);
}

int lturn()
{
  digitalWrite(lp,0);
  digitalWrite(ln,0);
  digitalWrite(rp,1);
  digitalWrite(rn,0);
}


void loop() 
{
     if(ls==1 & Rs==1) halt(), rturn();
else if(ls==1 & Rs==1) rturn(), delay(50);
else if(ls==1 & Rs==1) lturn(), delay(50);
else forward(), delay(30);
}


  
