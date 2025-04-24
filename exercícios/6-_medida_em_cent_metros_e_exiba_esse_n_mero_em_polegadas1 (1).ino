// Faça um programa que receba a medida em centímetros e exiba esse
// número em polegadas. Uma polegada equivale a 2.54 centímetros

// Variáveis
int cm = 0;
int polegadas10 = 0; // polegadas multiplicadas por 10 para simular uma casa decimal

void setup() {
  Serial.begin(9600);
}

void loop() {
  
  
  
  //cabeçalho
  Serial.println("|------------------------------|"); 
  Serial.println("|                              |");
  Serial.println("|       L0PAL - EX_06          |");
  Serial.println("|                              |");
  Serial.println("|------------------------------|");
  
  // Entrada
  Serial.println("Digite a medida em centimetros:");
  while (!Serial.available()) {}
  cm = Serial.parseInt();

  // Processamento
  // 1 polegada = 2.54 cm → usamos 254 ao invés de 2.54 (trabalhando com inteiros)
  // multiplicamos por 10 para manter uma casa decimal no resultado
  polegadas10 = (cm * 1000) / 254;

  // Saída
  Serial.print("Medida em polegadas: ");
  Serial.print(polegadas10 / 10); // parte inteira
  Serial.print(".");
  Serial.println(polegadas10 % 10); // parte decima
  delay(5000);
}
