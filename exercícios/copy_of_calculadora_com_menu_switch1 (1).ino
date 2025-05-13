// C++ code para Arduino
// Variáveis globais

float resultado = 0;
int escolhaDaOperacao;
int contador = 1; // começa com 1 para entrar no loop

// Função para somar com número 3 opcional
float somar(float numero1, float numero2, float numero3 = 0) {
  return (numero1 + numero2 + numero3);  
}

// Função para subtrair
float subtrair(float numero1, float numero2) {
  return (numero1 - numero2);
} 
//função multiplicar
float multiplicar(float numero1, float numero2) {
  return (numero1 * numero2);
  
}//função dividir
float divisao(float numero1, float numero2) {
  return (numero1 / numero2);
}  
void setup() {
  Serial.begin(9600);

  float numero1 = 0;
  float numero2 = 0;

  do {
    Serial.println("Bem vindo(a) a Calculadora mega inteligente :P!!!");
    Serial.println("Escolha uma das opcoes/operacoes:");
    Serial.println("1 - Somar"); 
    Serial.println("2 - Subtrair");  
    Serial.println("3 - Multiplicar");
    Serial.println("4 - Dividir");  

    while (!Serial.available()) {} // Espera o usuário digitar
    escolhaDaOperacao = Serial.parseInt(); // Lê a operação

    Serial.println("Agora, digite o primeiro numero:");
    while (!Serial.available()) {}
    numero1 = Serial.parseFloat();

    Serial.println("Agora, digite o segundo numero:");
    while (!Serial.available()) {}
    numero2 = Serial.parseFloat();  

    switch (escolhaDaOperacao) {
      case 1:
        resultado = somar(numero1, numero2); // ou usar 3 números se quiser
        Serial.println("WOW!!! O resultado foi: " + String(resultado)); 
        break;

      case 2:
        resultado = subtrair(numero1, numero2);
        Serial.println("WOW!!! O resultado foi: " + String(resultado));
        break;

      case 3:
        resultado = multiplicar(numero1,numero2);
        Serial.println("WOW!!! O resultado foi: " + String(resultado));
        break;

      case 4:
        resultado = divisao(numero1, numero2);
        Serial.println("WOW!!! O resultado foi: " + String(resultado));
  
        if (numero2 != 0) {
          Serial.println("WOW!!! O resultado foi: " + String(resultado));  
        } else {
          Serial.println("Erro: divisão por zero!");
        }
        break;

      default:
        Serial.println("Opcao invalida");
    }

    Serial.println("Voce deseja continuar? Se sim digite [s], se nao digite [n]");
    while (!Serial.available()) {}

    String resposta = Serial.readString();

    if (resposta == "s") {
      contador++;
    } else {
      contador = 0;
      Serial.println("Ate breve, volte mais vezes");
      Serial.println("Caso queira voltar, reinicie o sistema");  
    }

  } while (contador != 0);
}

void loop() {
  // Vazio, pois a lógica está toda no setup()
}
