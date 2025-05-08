/*
Solicita o preço de compra e o percentual de lucro.
Calcula o preço de venda.
Exibe alerta se o lucro for inferior a 50%.
*/

float precoCompra = 0;
float percentualLucro = 0;
float precoVenda = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  if (Serial.available()) {
    Serial.println("Digite o preco de compra do produto:");
    precoCompra = Serial.readStringUntil('\n').toFloat();

    Serial.println("Digite o percentual de lucro (ex: 50 para 50%):");
    while (Serial.available() == 0) {}

    percentualLucro = Serial.readStringUntil('\n').toFloat();

    precoVenda = precoCompra + (precoCompra * (percentualLucro / 100));

    Serial.print("Preco de venda: R$ ");
    Serial.println(precoVenda, 2);

    if (percentualLucro < 50) {
      Serial.println("Atenção: margem de lucro muito pequena.");
    }

    Serial.println("--------------------------------------");
    Serial.println("Digite o preco de compra do proximo produto:");
  }
}
