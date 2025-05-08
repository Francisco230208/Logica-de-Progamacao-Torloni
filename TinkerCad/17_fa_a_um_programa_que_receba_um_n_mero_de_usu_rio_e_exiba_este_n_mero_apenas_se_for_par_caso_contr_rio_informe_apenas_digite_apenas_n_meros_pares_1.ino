
// C++ code
//
void setup()
{
  Serial.begin(9600);
}
 int numero = 0;
void loop()
{
  Serial.println("Digite um numero par");
  while (!Serial.available()) {}
  numero = Serial.parseInt();
  
  if( numero %2 == 0 ) {
  Serial.println(numero);
  }else{
  Serial.println("DIGITE APENAS NUMEROS PARES");
  }
  Serial.println();
  Serial.println();
  delay(5000);
}