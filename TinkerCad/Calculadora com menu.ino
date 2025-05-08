// C++ code
//Variáveis

float numero1 = 0;
float numero2 =0;
float soma;
float subtracao;
float divisao;
float multiplicacao;
int escolhaDaOperacao;
int contador = 0;
void setup()
{
  Serial.begin(9600);
  
  
    do{
    Serial.println("Bem vindo(a) a Calculadora mega inteligente :P!!!");
    Serial.println("Escolha uma das opcoes/operacoes:");
    Serial.println("1 - Somar"); 
    Serial.println("2 - Subtrair");  
    Serial.println("3 - multiplicar");
    Serial.println("4 - dividir");  
    while(!Serial.available()){}//Espera o usuário digitar

    escolhaDaOperacao = Serial.parseInt(); // Armazena o que o usuário digitou na variável

    Serial.println("Agora, para realizar a operacao digite o primeiro numero:");
    while(!Serial.available()){}//Espera o usuário digitar
    numero1 = Serial.parseFloat();


    Serial.println("Agora, para realizar a operacao digite o segundo numero:");
    while(!Serial.available()){}//Espera o usuário digitar
    numero2 = Serial.parseFloat();

    if (escolhaDaOperacao == 1){
       
    }  
      
            switch(escolhaDaOperacao) {
            case 1:
               soma = numero1 + numero2;
        Serial.println("WOW!!! O resultado foi: " + String(soma));
              
              break;

              case 2:
                 subtracao = numero1 - numero2;
        Serial.println("WOW!!! O resultado foi: " + String(subtracao));
                
                break;


              case 3:
                 multiplicacao = numero1 * numero2;
        Serial.println("WOW!!! O resultado foi: " + String(multiplicacao));
                
                break;


              case 4:
                 divisao = numero1 / numero2;
        Serial.println("WOW!!! O resultado foi: " + String(divisao));
                
                break;

             default:
                Serial.println("Opcao invalida");

        }  
      
    Serial.println("Voce deseja continuar? Se sim digite [s], se nao digite [n]");
    while(! Serial.available()){} //Espera usuario digitar  

    if(Serial.readString() =="s") {
        contador ++;
    } 
    else{
    contador == 0;
    Serial.println("Ate breve, volte mais vezes");
    Serial.println("Caso queira voltar reinicie o sistema");  
    }
    
    }
    while(contador != 0);
    }
    
      void loop() 
      {     
        
      }
  