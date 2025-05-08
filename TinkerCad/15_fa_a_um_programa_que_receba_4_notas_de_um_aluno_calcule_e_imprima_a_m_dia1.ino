
// C++ code
//
void setup()
{
  Serial.begin(9600);
}
 float n1 = 0;
 float n2 = 0;
 float n3 = 0;
 float n4 = 0;
 float media = 0;
void loop()
{
  Serial.println("Digite a nota do 1 Bimestre");
  while(! Serial.available());
  n1 = Serial.parseFloat();
  
  Serial.println("Digite a nota do 2 Bimestre");
  while(! Serial.available());
  n2 = Serial.parseFloat();
  
  Serial.println("Digite a nota do 3 Bimestre");
  while(! Serial.available());
  n3 = Serial.parseFloat();
  
  Serial.println("Digite a nota do 4 Bimestre");
  while(! Serial.available());
  n4 = Serial.parseFloat();
  
  
  media = (n1 + n2 + n3 + n4 ) / 4;
  
  if(media >= 7) {
  Serial.println("APROVADO");
  } else if(media >= 5) {
  Serial.println ("RECUPERACAO");
 } else {
  Serial.println ("REPROVADO");
  }
  delay(5000);
  Serial.println();
  Serial.println();
}