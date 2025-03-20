//ligar leds com vetor e for 




int posicoes [5] = {13,12,11,10,9};

void setup()
{
  for (int i = 0; i < 5; i++){
  pinMode (posicoes [i], OUTPUT);//cdefine todos os pinos do vetor
    							//como saída
  }
}

void loop()
{
  for (int i = 0; i < 5; i++)
  {
    digitalWrite (posicoes [i], HIGH);
  }
  
 delay (500); //o delay fora liga e desliga todos os leds ao msm tempo
  			//se o delay estivesse dentro do for ligaria um led por vex
   
  for (int i = 0; i < 5; i++)
  {
    digitalWrite (posicoes [i], LOW);
  }
  
  delay (500);
}



/*while (true)verifica primeiro a condicao
enquanto a condicao for verdadeira o programa roda
    ele cria um loop qnd o microcontrolador nao tiver
     o true pode ser substituido por 1, ou alguma condicao
    pode substituir o loop, mas so funciona se a condicao for verdadeira
    nao e comum utilizar mais de um while por programa, pois ele trava o msm

do{}while(); roda primeiro o progrma dps verifica se o laco deve ser verdadeiro ou nao
    roda o codigo dps verifica */