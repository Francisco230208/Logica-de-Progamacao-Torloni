// Faça um programa que receba o ano de nascimento de uma pessoa e
// o ano atual. Calcule e imprima:
// a. A idade dessa pessoa
// b. Essa idade convertida em semana

// Variáveis
int anonascimento = 0;
int anoatual = 0;
int idade = 0;
int idadesemana = 0;

void setup() {
  Serial.begin(9600);
}

void loop()
 { 
  //cabeçalho
  Serial.println("|------------------------------|"); 
  Serial.println("|                              |");
  Serial.println("|       L0PAL - EX_02          |");
  Serial.println("|                              |");
  Serial.println("|------------------------------|");
  

   
  Serial.println();//pula uma linha
  Serial.println();//pula uma linha



  // Entrada
  Serial.println("Digite o ano de nascimento:");
  while (!Serial.available()) {}//espera o usuario digitar
  anonascimento = Serial.parseInt();//converte o texto que o usuario digitar em inteiro

  Serial.println("Digite o ano atual:");
  while (!Serial.available()) {}
  anoatual = Serial.parseInt();

  // Processamento
  idade = anoatual - anonascimento;
  idadesemana = idade * 52;

  // Saída
  Serial.println("Idade: " + String(idade));
  Serial.println("Idade em semanas: " + String(idadesemana));

  delay(5000);
}
