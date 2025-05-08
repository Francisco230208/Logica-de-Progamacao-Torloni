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

  if (numero % 2 == 1) {
    Serial.println("Seu numero eh impar");
  } else {
    Serial.println("Seu numero eh par");
  }
}
