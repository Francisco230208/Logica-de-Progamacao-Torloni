// C++ code
//Exibir do 0 ao 100 de 5 em 5

//variaveis

int numero;

void setup()
{
 Serial.begin(9600);
}

void loop()
{
  
  for (int numero = 0;  numero<=100;  numero += 5){  
  Serial.println("numero: " + String(numero));
  }
}