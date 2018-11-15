int var;
#define r1 8
#define r2 9
#define r3 10
#define r4 11
int a,b,c,d;
void setup()
{
  pinMode(r1,OUTPUT);
  pinMode(r2,OUTPUT);
  pinMode(r3,OUTPUT);
  pinMode(r4,OUTPUT);
  digitalWrite(r1,HIGH);
  digitalWrite(r2,HIGH);
  digitalWrite(r3,HIGH);
  digitalWrite(r4,HIGH);
a=1;
b=1;
c=1;
d=1;

  Serial.begin(9600);
 }

  void loop()
  {
    if(Serial.available())
    {
      var=Serial.read();
      switch(var)
      {
        case '1':
        {
        if(a!=0)
        {
        digitalWrite(r1,LOW);
        a=0;
        break;
        }
        else
        {a=1;
        digitalWrite(r1,HIGH);
        break;
        }
        break;
        }

        case '2':{
        if(b!=0){
        digitalWrite(r2,LOW);
        b=0;
        break;
        }
        
        else{
          b=1;
        digitalWrite(r2,HIGH);
        break;
        }}
        
        case '3':{
        if(c!=0)
        {c=0;
        digitalWrite(r3,LOW);
        break;
        }
        else 
        {c=1;
          digitalWrite(r3,HIGH);
          break;
          }}
        case '4':{
        if(d!=0)
        {d=0;
        digitalWrite(r4,LOW);
        break;
        }
        else
        {d=1;
        digitalWrite(r4,HIGH);
        break;
          }
        }}
      }
    }
