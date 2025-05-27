// C++ code
#include <Servo.h>

int palpite; // Varaiavel criada para armazenar os palpites do usuario
int ledVermelho = 10;
int ledVerde = 7;
int ledAzul1 = 4;
int ledAzul2 = 3;
int ledAzul3 = 2;
Servo meuServo; // Cria um objeto do motor servo (não utilizado aqui)
Servo motor;

void setup() {
  pinMode(ledVermelho, OUTPUT);
  pinMode(ledVerde, OUTPUT);
  pinMode(ledAzul1, OUTPUT);
  pinMode(ledAzul2, OUTPUT);
  pinMode(ledAzul3, OUTPUT);

  motor.write(0);

  Serial.begin(9600);
  randomSeed(analogRead(0)); // comando para randomizar os numeros
}

void desenhaCabecalho() {
  Serial.println("--- JOGO DO DADO ---");
  delay(1000);
}

void desenhaPontinhos(int qtd = 5, int tempo = 500) {
  for (int i = 0; i < qtd; i++) {
    Serial.print(".");
    delay(tempo);
  }
  Serial.println();
}

void loop() {
  motor.write(0);
  delay(1500);
  motor.write(90);
  delay(1500);
  motor.write(180);
  delay(1500);

  desenhaCabecalho();

  Serial.println("Quantas vezes voce quer jogar?");
  while (! Serial.available());
  int rodadas = Serial.parseInt();
  Serial.println();

  int palpites[rodadas];
  int resultados[rodadas];
  int acertosConsecutivos = 0;

  for (int i = 0; i < rodadas; i++)
  {
    Serial.println("Digite seu palpite (1 a 6):");
    while (!Serial.available());
    palpite = Serial.parseInt();

    while (palpite < 1 || palpite > 6) {
      Serial.println("Palpite invalido. Digite um numero de 1 a 6:");
      while (!Serial.available());
      palpite = Serial.parseInt();
    }

   int sorteado = random(1, 7);
    palpites[i] = palpite;
    resultados[i] = sorteado;

    Serial.print("Jogando dado");
    desenhaPontinhos();

    Serial.println("Seu palpite: " + String(palpite));
    Serial.println("Numero sorteado: " + String(sorteado));

    if (palpite == sorteado) {
      digitalWrite(ledVerde, HIGH);
      delay(1000);
      digitalWrite(ledVerde, LOW);
      Serial.println("Parabens! Você acertou!");
      acertosConsecutivos++;

      if (acertosConsecutivos == 1) {
        digitalWrite(ledAzul1, HIGH);
      } else if (acertosConsecutivos == 2) {
        digitalWrite(ledAzul2, HIGH);
      } else if (acertosConsecutivos == 3) {
        digitalWrite(ledAzul3, HIGH);
          motor.attach(12); // Ligar somente o servo motor se acertar 3x consec

      }

    } else {
      digitalWrite(ledVermelho, HIGH);
      delay(500);
      digitalWrite(ledVermelho, LOW);
      Serial.println("Errou! Boa sorte na proxima!");
      acertosConsecutivos = 0;
      digitalWrite(ledAzul1, LOW);
      digitalWrite(ledAzul2, LOW);
      digitalWrite(ledAzul3, LOW);
    }
  }

  Serial.println(" RELATORIO FINAL ");
  for (int i = 0; i < rodadas; i++) {
    Serial.print("Rodada ");
    Serial.println(i + 1);
    Serial.println("Palpite: " + String(palpites[i]));
    Serial.println("Resultado: " + String(resultados[i]));
    Serial.println("Status: " + String(palpites[i] == resultados[i] ? "Acertou" : "Errou"));
    Serial.println("------------------------\n");
  }

  Serial.println("FIM DO JOGO. Reiniciando...");
  desenhaPontinhos();
  delay(3000);
}
