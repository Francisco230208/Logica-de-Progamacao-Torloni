// C++ code
//
int numero;
void setup()
{
 Serial.begin(9600);
}

void loop()
{
  for (int numero = 0;  numero<=100;  numero += 2){  
  Serial.println("numero: " + String(numero));
  }   
}