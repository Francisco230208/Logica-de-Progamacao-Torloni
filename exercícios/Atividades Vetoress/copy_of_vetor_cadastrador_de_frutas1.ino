// C++ code para Arduino
// Variáveis globais
String frutas[6];           // vetor com 6 frutas
float precosFrutas[6];      // vetor com 6 preços

void setup() {
  Serial.begin(9600);

  Serial.println("*** PROGRAMA SACOLAO DO ZEH ***");
  Serial.println();
  Serial.println("Oh Zeh, bora cadastrar as frutas!");
  Serial.println();

  for (int i = 0; i < 6; i++) {
    Serial.print("Informe a " + String(i + 1) + " fruta: ");
    while (!Serial.available());
    String frutaDigitada = Serial.readString();;  // melhor prática

    // Limpa buffer
    delay(100);
    while (Serial.available());

    // pega o preço da fruta
    Serial.print("Qual o preco de " + frutaDigitada + "? ");
    while (!Serial.available());
    float precoDigitado = Serial.parseFloat();

    // Limpa buffer
    delay(100);
    while (Serial.available()) Serial.read();

    frutas[i] = frutaDigitada;
    precosFrutas[i] = precoDigitado;

    Serial.println();
  }

  Serial.println("Exibindo os valores cadastrados:");
  Serial.println();

  for (int i = 0; i < 6; i++) {
    Serial.println("Fruta " + String(i + 1) + ": " + frutas[i]);
    Serial.println("Preço da fruta: R$ " + String(precosFrutas[i], 2));
    Serial.println();
  }
}

void loop() {
  // Nada no loop
}
