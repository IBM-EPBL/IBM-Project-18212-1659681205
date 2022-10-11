// C++ code
//
int val=0;
void setup()
{
  pinMode(2, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(12,OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  double senu=analogRead(A5);
  Serial.println("analog value");
  Serial.println(senu);
  double n=senu/1024;
  double v=n*5;
  Serial.println("Voltage value");
  Serial.println(v);
  double k=v-0.5;
  double t=k*100;
  Serial.println("Temperature value");
  Serial.println(t);
  if(t>33.00){
  digitalWrite(8, HIGH);
  digitalWrite(2, HIGH);
  delay(1000);// Wait for 1000 millisecond(s)
  digitalWrite(2, LOW);
  delay(1000);
  }
  else{
  digitalWrite(2, LOW);
  digitalWrite(8, LOW);
  }// Wait for 1000 millisecond(s)
  int pir=analogRead(A1);
  val=map(pir,0,1023,0,255);
  delay(5000);
  Serial.println("pir value");
  Serial.println(val);
  if(val>100){
    digitalWrite(12, HIGH);
  }
  else{
     digitalWrite(12, LOW);
  }
}