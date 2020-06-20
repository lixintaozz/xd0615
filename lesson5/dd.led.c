#define IN1 2
#define IN2 3
#define IN3 4
#define IN4 5

#define S1 8
#define S2 9
#define S3 10
#define S4 11

#define LT 6
#define BT 7
byte income=0;
byte incomel=0;
byte incomell=0;
byte incomelll=0;
void setup()
{
  pinMode(IN1, OUTPUT);//输入1
  pinMode(IN2, OUTPUT);//输入2
  pinMode(IN3, OUTPUT);//输入3
  pinMode(IN4, OUTPUT);//输入4
  pinMode(S1, OUTPUT);//片选1
  pinMode(S2, OUTPUT);//片选2
  pinMode(S3, OUTPUT);//片选3
  pinMode(S4, OUTPUT);//片选4
  
  pinMode(LT,OUTPUT);//测试
  pinMode(BT,OUTPUT);//消隐
  
  digitalWrite(LT,HIGH);
  digitalWrite(BT,HIGH);
  
  digitalWrite(S1,LOW);
  digitalWrite(S2,LOW);
  digitalWrite(S3,LOW);
  digitalWrite(S4,LOW);
  Serial.begin(9600);

  
  //digitalWrite(S4,LOW);
  //digitalWrite(IN1,HIGH);
  //digitalWrite(IN2,LOW);
  //digitalWrite(IN3,LOW);
  //digitalWrite(IN4,LOW);
  //digitalWrite(S4,HIGH);
  
    /*digitalWrite(S2,LOW);
  digitalWrite(IN1,LOW);
  digitalWrite(IN2,HIGH);
  digitalWrite(IN3,LOW);
  digitalWrite(IN4,LOW);
  digitalWrite(S2,HIGH);
  
    digitalWrite(S3,LOW);
  digitalWrite(IN1,HIGH);
  digitalWrite(IN2,HIGH);
  digitalWrite(IN3,LOW);
  digitalWrite(IN4,LOW);
  digitalWrite(S3,HIGH);
  
    digitalWrite(S4,LOW);
  digitalWrite(IN1,LOW);
  digitalWrite(IN2,LOW);
  digitalWrite(IN3,HIGH);
  digitalWrite(IN4,LOW);
  digitalWrite(S4,HIGH);*/
}

void loop()
{
   if(Serial.available()>0)
  {
  	income=Serial.read();
     
    //incomel=Serial.read();
    //incomell=Serial.read();
    //incomelll=Serial.read();
    
    income=income-'0';
    digitalWrite(2,income&0x1);
    digitalWrite(3,(income>>1)&0x1);
    digitalWrite(4,(income>>2)&0x1);
    digitalWrite(5,(income>>3)&0x1);
  	delay(10);
    digitalWrite(S1,HIGH);
     incomel=Serial.read();
     incomel=incomel-'0';
    digitalWrite(2,incomel&0x1);
    digitalWrite(3,(incomel>>1)&0x1);
    digitalWrite(4,(incomel>>2)&0x1);
    digitalWrite(5,(incomel>>3)&0x1);
  	delay(10);
    digitalWrite(S2,HIGH);
     incomell=Serial.read();
     incomell=incomell-'0';
    digitalWrite(2,incomell&0x1);
    digitalWrite(3,(incomell>>1)&0x1);
    digitalWrite(4,(incomell>>2)&0x1);
    digitalWrite(5,(incomell>>3)&0x1);
  	delay(10);
    digitalWrite(S3,HIGH);
     incomelll=Serial.read();
     incomelll=incomelll-'0';
    digitalWrite(2,incomelll&0x1);
    digitalWrite(3,(incomelll>>1)&0x1);
    digitalWrite(4,(incomelll>>2)&0x1);
    digitalWrite(5,(incomelll>>3)&0x1);
  	delay(10);
    digitalWrite(S4,HIGH);
     //Serial.println(income);
}
}
