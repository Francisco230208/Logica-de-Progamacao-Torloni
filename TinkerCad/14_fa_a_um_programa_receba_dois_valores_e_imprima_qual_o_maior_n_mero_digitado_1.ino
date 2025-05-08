// C++ code

void setup()
{
  Serial.begin(9600);
}

int numero1 = 0;
int numero2 = 0;

void loop()
{
  Serial.println("Digite o primeiro numero que deseja verificar");
  while (!Serial.available()) {}
  numero1 = Serial.parseInt();
  
  Serial.println("Digite o segundo numero que deseja verificar");
  while (!Serial.available()) {}
  numero2 = Serial.parseInt();
  
  if (numero1 > numero2) {
    Serial.println("O maior numero eh " + String(numero1));
  } 
  else if (numero2 > numero1) {
    Serial.println("O maior numero eh " + String(numero2));
  } 
  else {
    Serial.println("Os dois numeros sao iguais");
  }

  Serial.println();
  Serial.println();
  delay(5000); // Aguarda antes de repetir
}
