// C++ code
//
int numero;
void setup()
{
 Serial.begin(9600);
}

void loop()
{
  for(int numero = 1; numero<=99; numero += 2){
  Serial.println("numero: " + String(numero));
  }
}