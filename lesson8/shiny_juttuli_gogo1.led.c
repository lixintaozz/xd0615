
int pos = 0;//定义变量pos并赋值为0

void setup()
{
  pinMode(8, OUTPUT);//设置6，7，8为输出
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
}

void loop()
{

  noTone(8);//停止8号引脚的发声

  tone(6, 880, 200); //6号引脚以880的频率发生200毫秒
  delay(200); //延迟200毫秒
 
  noTone(6);//停止6号引脚的发声

  tone(7, 988, 500); //7号引脚以988的频率发生500毫秒
  delay(500); //延迟500毫秒
 
  noTone(7);//停止7号引脚的发声
  
  tone(8, 1047, 300); //8号引脚以1047的频率发生300毫秒
  delay(300); //延迟300毫秒
}