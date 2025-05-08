
// C++ code
//
void setup()
{
  Serial.begin(9600);
}
 int numero = 0;
void loop()
{
  Serial.println("Digite o numero que deseja verificar");
  while (!Serial.available()) {}
  numero = Serial.parseInt();
  
  if( numero %2 == 0 ) {
  Serial.println(numero);
  }
  Serial.println();
  Serial.println();
  delay(5000);
}