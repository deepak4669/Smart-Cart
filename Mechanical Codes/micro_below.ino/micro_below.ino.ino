int prev_list=0;
void setup() {
  
  pinMode(A0,INPUT);
  pinMode(2,OUTPUT);
  Serial.begin(9600);

  if(Serial.available()>0)
  {
    prev_list=Serial.read();
  }
  
  
  // put your setup code here, to run once:

}

void loop() {
  int val=analogRead(A0);
  if(Serial.available())
  {
    prev_list=Serial.read();
    
  }
  if(prev_list!=val)
  {
    digitalWrite(2,HIGH);
  }
  else
  {
    digitalWrite(2,LOW);
  }
  
  // put your main code here, to run repeatedly:

}
