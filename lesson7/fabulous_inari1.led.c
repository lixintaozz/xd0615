#include <MsTimer2.h>
#define IN1 3
#define IN2 4
#define IN3 5
#define IN4 6
int pinInterrupt = 2; 


void setup() {
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(pinInterrupt, INPUT);


  MsTimer2::set(1000, myTimer);
  MsTimer2::start();

  attachInterrupt(digitalPinToInterrupt(pinInterrupt), onChange, CHANGE);

}

int num = 0;
void loop() {//通过cnt的加来实现数字的变化
  digitalWrite(9, LOW);
  digitalWrite(7,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(IN1, num & 0x01);
  digitalWrite(IN2, (num >> 1) & 0x01);
  digitalWrite(IN3, (num >> 2) & 0x01);
  digitalWrite(IN4, (num >> 3) & 0x01);
  digitalWrite(9, HIGH);
}

void myTimer() {
  if (num >= 9) {
    num = 0;
  }
  else {
    num++;
  }
  Serial.println(num);
}

void onChange(){
  num = 0;
}
