// Faça um programa que receba a medida em polegadas e exiba esse número em
//centímetros.

//Variáveis

int medidapolegadas = 0;
int medidacentimetros = 0;
  
void setup()
{
 Serial.begin(9600);
}

void loop() {
  
  
  //cabeçalho
  Serial.println("|------------------------------|"); 
  Serial.println("|                              |");
  Serial.println("|       L0PAL - EX_06          |");
  Serial.println("|                              |");
  Serial.println("|------------------------------|");

  //entrada da medida em polegadas
  Serial.println("Medida em polegadas: ");
  while (!Serial.available()) {}
  medidapolegadas = Serial.parseInt();
  
  //entrada medida em centimetros
  Serial.println("Resultado em centimetros");
  
  //processamento
  medidacentimetros = medidapolegadas * 2.54;
  
  //saida
    Serial.println("Medida em polegadas: " + String(medidapolegadas));
    Serial.println("Equivalente em centimetros: " + String(medidacentimetros));
    delay(5000);
}