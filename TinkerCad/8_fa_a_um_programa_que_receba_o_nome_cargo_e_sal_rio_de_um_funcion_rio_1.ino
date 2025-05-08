//Faça um programa que receba o nome, cargo e salário de um funcionário. Calcule o
//salário acrescido de 10%. Ao final exiba o nome, o cargo e o novo salário desse
//funcionário.

//Variáveis
String nome = "";
String cargo = "";
float salario = 0;
float novosalario = 0;


void setup()
{
  Serial.begin(9600);
}

void loop()
{
  //cabeçalho
  Serial.println("|------------------------------|"); 
  Serial.println("|                              |");
  Serial.println("|       L0PAL - EX_07          |");
  Serial.println("|                              |");
  Serial.println("|------------------------------|");
  Serial.println();

  //Entrada do nome
  Serial.println("Digite o nome");
  while (!Serial.available()) {}
  delay(10);
  nome = Serial.readStringUntil('\n');
  
  //Entrada do cargo
  Serial.println("Digite seu cargo");
  while (!Serial.available()) {}
    delay(10);
    cargo = Serial.readStringUntil('\n');
    

  //Entrada Salario
  Serial.println("Digite o seu salario");
    while (!Serial.available()) {}
  delay(10);
  salario = Serial.readStringUntil('\n').toFloat();
  
  
  
  //Processamento Calculo do salario
  novosalario = salario * 1.10;
  
  
  //Saída
  Serial.println();
  Serial.println();
  
  Serial.println("Relatorio ");
  Serial.println();
  Serial.println("================");
  Serial.println();
  
  Serial.print("Nome: ");
  Serial.println(nome);
  Serial.print("Cargo: ");
  Serial.println(cargo);
  Serial.print("Salario com 10% de aumento: R$ ");
  Serial.println(novosalario, 2);
  Serial.println();
  
  Serial.println("Digite uma letra + <Enter para continuar>... ");
  while(! Serial.available());
  
  Serial.println();
  Serial.println();

  Serial.read();//limpa o cache do \n- o <enter>


    delay(1000);
          
}
