#define pinBotao 10
#define pinLed 13 //o LED_BUILTIN tem como saida 13


//--------VARIAVEIS GLOBAIS---------//

/*void setup()
{
 pinMode (pinBotao, INPUT); //define o pino como entrada
 pinMode (LED_BUILTIN, OUTPUT);
 Serial.begin (9600);
}

void loop()
{
  bool statusBotao = digitalRead (pinBotao);
  Serial.println (statusBotao);
  
  if (digitalRead (pinBotao)) // o if nao precisa da chave pois é so um comando
   digitalWrite (pinLed, HIGH);
  				
  else digitalWrite (pinLed, LOW);
}*/

//exercicio contar quantas vezes o botao foi apertado

int contagem = 0;

void setup ()
{
 pinMode (pinBotao, INPUT); 
 Serial.begin (9600);
}

void loop()
{
static bool estadoAnteriorBotao; //o static impede a variavel local de ser destruida
bool estadoAtualBotao = digitalRead (pinBotao);
  if (estadoAtualBotao && !estadoAnteriorBotao){//verifica se o estado atual é verdaeiro e 
    											//se o estado anterior do botao é falso
   contagem ++; 
   Serial.println (contagem);
  }
  estadoAnteriorBotao = estadoAtualBotao;
}