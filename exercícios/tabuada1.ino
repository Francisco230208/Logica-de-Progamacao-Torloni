// C++ code
//
int tabuada = 0;
int resultado;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
 Serial.println("Bem vindo(a) !!!"); 
 Serial.println("Digite o numero de uma tabuada");
 while (! Serial.available());
 tabuada = Serial.parseInt();
  
 for(int contador =1; contador<=10; contador++){
  int resultado = tabuada * contador;
   
   // Exibir assim 2X1 = 2
   Serial.println(String(tabuada) + "x" + String(contador) + "=" + String(resultado));
 
 } 
}
