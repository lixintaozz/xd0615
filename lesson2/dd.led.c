int i=0;
void setup()
{
  for(i=0;i<10;i++){
    if(i%2!=0){
  pinMode(i, OUTPUT);
  }
  }   
}

void loop()
{
  for(i=0;i<10;i++){
    if(i%2!=0){
  digitalWrite(i, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(i, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  }
  }
}