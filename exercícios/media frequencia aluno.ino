//Você foi contratado para criar um sistema que analisa a situação de um aluno com base em suas notas e frequência.
//
//Vriaveis

float nota1 = 0;
float nota2 = 0;
int media = 0;
int frequencia = 0;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
 Serial.println ("Digite a primeira nota");
  while(! Serial.available());
 nota1 =  Serial.parseFloat();
  
  Serial.println ("Digite a segunda nota nota");
  while(! Serial.available());
 nota2 = Serial.parseFloat();
  
  media = (nota1 + nota2)/2;
    
  if (media>=6){//faltei na ultima aula tive dificuldades no else if
   Serial.println("APROVADO");
  } else if(frequencia >=75){ ; 
} else if(media<6) {
   Serial.println("REPROVADO POR NOTA");}
} else if (frequencia<75) {
   Serial.println("REPROVADO POR FREQUENCIA");
}

    
 
