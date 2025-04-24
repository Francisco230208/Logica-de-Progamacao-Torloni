// Programa que recebe nome, peso e altura e mostra o IMC com uma casa decimal

// Variáveis
String nome = "";
int peso = 0;
int altura = 0;
int imc10 = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  // Entrada do nome
  Serial.println("Digite o nome:");
  while (!Serial.available()) {}
  nome = Serial.readStringUntil('\n');

  // Entrada do peso
  Serial.println("Digite o peso:");
  while (!Serial.available()) {}
  peso = Serial.parseInt();

  // Entrada da altura
  Serial.println("Digite a altura em cm:");
  while (!Serial.available()) {}
  altura = Serial.parseInt();

  // Cálculo do IMC com uma casa decimal
  imc10 = (peso * 100000) / (altura * altura);

  // Saída
  Serial.print("Nome: ");
  Serial.println(nome);

  Serial.print("IMC aproximado: ");
  Serial.print(imc10 / 10);
  Serial.print(".");
  Serial.println(imc10 % 10);

  delay(5000);
}

