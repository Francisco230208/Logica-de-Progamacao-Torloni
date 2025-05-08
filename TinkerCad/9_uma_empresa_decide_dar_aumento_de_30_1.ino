/*
Se o salário for menor que 500 reais, aumenta 30%.
Senão, informa que não há aumento.
*/

float salario = 0;

void setup() {
  Serial.begin(9600);
  Serial.println("Digite o salario do funcionario:");
}

void loop() {
  if (Serial.available()) {
    // lê os dados
    salario = Serial.readStringUntil('\n').toFloat();

    if (salario < 500) {
      salario *= 1.30;
      Serial.print("Salario reajustado: R$ ");
      Serial.println(salario, 2);
      delay(3000);
      
    } else {
      Serial.println("Funcionario nao tem direito a aumento.");
      delay(500);
    }

    Serial.println("Digite o salario do proximo funcionario:");
  }
}


