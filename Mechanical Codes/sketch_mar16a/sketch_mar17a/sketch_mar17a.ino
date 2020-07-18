void setup() {
  pinMode(A0,INPUT);
  Serial.begin(9600);
  // put your setup code here, to run once:

}

void loop() {
  int val, i;
  long sum=0;
  long maxv=0;
  for(i=0;i<50;i++)
  {
    for(int j=0;j<100;j++)
      maxv+=analogRead(A0);
  }
  Serial.println(maxv/1000);
  
  delay(500);
}
