
// C++ code
//
void setup()
{
 Serial.begin(9600);
}
String cargo = "";
float salario = 0;
void loop()
{
//cargo  
  Serial.println("Digite o cargo");
  Serial.println("Producao");
  Serial.println("Administrativo");
  Serial.println("Diretoria");

  while (!Serial.available()) {}
  cargo = Serial.parseInt();
//salario  
  Serial.println("Digite o salario");
  while (!Serial.available()) {}
  salario = Serial.readString();
 
  if(cargo == "Producao") {
  salario = salario + salario * (6.5/100);
  Serial.println("Novo salario: " + String(salario));
  } else if(cargo == "Administrativo") {
  salario = salario + salario * (7.5/100);
  Serial.println("Novo salario: " + String(salario));
  } else {
  salario = salario + salario * 0.12;
  Serial.println("Novo salario: " + String(salario));
  } 
  }
  delay(5000);
  Serial.println();
  Serial.println();
}