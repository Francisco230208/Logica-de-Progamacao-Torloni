

// C++ code
//
int palpite;

void setup()
{
  Serial.begin(9600);
  random(analogRead(0));//inicia e normalize a porta
}

void desenhaCabecalho()
{
  Serial.println("---JOGO DO DADO---");
  Serial.println("");
  delay(2000);
}

void desenhaPontinho(int qtdPontos = 5, int tempo = 700)
{
  for(int i = 1; i <= qtdPontos; i++)
  {
    Serial.print(".");
    delay(tempo);
  }
}

void loop()
{
  desenhaCabecalho();
//perguntar ao usuário quantas vezes ele quer jogar
//criar os vetores basedos na quantidade de rodadas
//jogar apenas essa quantidade (laço de repetição)  
  
  
  Serial.println("Quantas vezes voce quer jogar?");
  while(!Serial.available());
  int qtdRodadas = Serial.parseInt();
  Serial.println();
  delay(1000);
  
  //criar arrays de estatisticas
  //os vetores do tamanho da quantidade de rodadas
  int vetPalpites[qtdRodadas];//tamanho do vetor? R: Depende de quantas vezes o usuario vai jogar
  int vetResultados[qtdRodadas];//
  
  
  for(int rod = 0; rod < qtdRodadas; rod++){
  //aqui dentro o jogo todo
  //solicitar palpite do usuario
  Serial.println("Digite seu palpite de 1 a 6");
  while(!Serial.available());  
  palpite = Serial.parseInt();

  //jogar dado
  int numeroSorteado = random(1, 7); //Sorteia um numero de 1 até 7 - 1, ou seja 6
  
  //Guardar os dados para estatisticas
  vetPalpites[rod] = palpite;
  vetResultados[rod] = numeroSorteado;

  Serial.print("Jogando dado ");
  desenhaPontinho();
  Serial.println();
  
  //exibir o palpite do usuario
  Serial.println();

  Serial.print("Seu Palpite : " + String(palpite));
  Serial.println();


  //exibif numero sorteado
  Serial.println("Numero do Dado : " + String(numeroSorteado));
  Serial.println("");

  if(palpite == numeroSorteado)
  {
    Serial.println("Parabens, voce acertou!!!");
  } else {
    Serial.println("Que pena! Tente outra vez");
  }

  
  }//fim do for das rodadas
  
  //Ao finalizar, mostrar as estatisticas das jogadas - um relatório
  Serial.println();
  Serial.println("	ESTATISTICAS DO JOGO");
  Serial.println();
  for(int i = 0; i < qtdRodadas; i++)
  {
   Serial.println("Rodada " + String(i + 1)+ ":");
   Serial.println("Palpite: " + String(vetPalpites[i]));
   Serial.println("Resultado: " +String(vetResultados[i] == vetPalpites[i] ? "acertou" : "errou"));
   Serial.println("----------------------------");
   Serial.println(); 
  }//fim do for exibe o relatorio final
    
    
  Serial.println("FIM DO JOGO, REINICIANDO O SISTEMA!!");
  desenhaPontinho(5, 500);
  Serial.println();
  delay(3000); 
  
  
}

