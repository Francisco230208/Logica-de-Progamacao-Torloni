// Programa que recebe nome, peso e altura e mostra o IMC com uma casa decimal (usando float)

// Variáveis
String nome = "";
float peso = 0.0;
float altura_cm = 0.0;
float altura_m = 0.0;
float imc = 0.0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  
  
  //cabeçalho
  Serial.println("|------------------------------|"); 
  Serial.println("|                              |");
  Serial.println("|       L0PAL - EX_04          |");
  Serial.println("|                              |");
  Serial.println("|------------------------------|");
  
  
  // Entrada do nome
  Serial.println("Digite o nome:");
  while (!Serial.available()) {}
  nome = Serial.readStringUntil('\n');

  // Entrada do peso
  Serial.println("Digite o peso (em kg):");
  while (!Serial.available()) {}
  peso = Serial.parseFloat();

  // Entrada da altura
  Serial.println("Digite a altura em cm:");
  while (!Serial.available()) {}
  altura_cm = Serial.parseFloat();
  delay(10);

  // Conversão de altura para metros
  altura_m = altura_cm / 100.0;

  // Cálculo do IMC
  imc = peso / (altura_m * altura_m);

  // Saída
  Serial.print("Nome: ");
  Serial.println(nome);

  Serial.print("IMC aproximado: ");
  Serial.println(imc, 1); // uma casa decimal

  delay(5000);
}

