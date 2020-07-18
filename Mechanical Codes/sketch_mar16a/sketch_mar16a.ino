 void setup() {
  pinMode(A0,INPUT);
  pinMode(A1,INPUT);
  Serial.begin(9600);
  
  // put your setup code here, to run once:

}

void loop() {
  int minm=1023, maxm=0;
  long  int sum=0, val;
  for(int i=0;i<100;i++)
  {  
  val = analogRead(A0);
  sum+=val;
  //Serial.print("A0: ");
  
  //Serial.println("A1: "+analogRead(A3));
  
  // put your main code here, to run repeatedly:
  }
  Serial.println(sum/100);
  delay(200);
}
