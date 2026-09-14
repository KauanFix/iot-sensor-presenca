// C++ code
//

int sensorMovimento = 13;
int Led = 2;

void setup()
{
 	pinMode(sensorMovimento, INPUT);
  pinMode(Led, OUTPUT);
}

void loop()
{
  if (digitalRead(sensorMovimento) == 1){
    digitalWrite(Led, 1);
  }else{
    digitalWrite(Led, 0);
  }
}
