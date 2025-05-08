
// C++ code
//
void setup()
{
 Serial.begin(9600);
}
 int codigoOrigem = 0;
void loop()
{
  Serial.println("Digite o codigo de origem do produto");
  while(! Serial.available());
  codigoOrigem = Serial.parseInt();
  
  if (codigoOrigem == 1) {
  Serial.println("A procedencia do seu produto eh do Sul");
  }else if(codigoOrigem == 2){
  Serial.println("A procedencia do seu produto eh do Norte");
  }else if(codigoOrigem == 3){
  Serial.println("A procedencia do seu produto eh do Leste");
  }else if(codigoOrigem == 4){
  Serial.println("A procedencia do seu produto eh do Oeste");
  }else if(codigoOrigem <= 6){
  Serial.println("A procedencia do seu produto eh do Nordeste");
  }else if(codigoOrigem <= 9){
  Serial.println("A procedencia do seu produto eh do Sudeste");
  }else if(codigoOrigem <= 20){
  Serial.println("A procedencia do seu produto eh do Centro-Oeste");
  }else if(codigoOrigem > 20){
  Serial.println("O codigo do seu produto nao tem definicao");
}
  delay(5000);
  Serial.println();
  Serial.println();
}