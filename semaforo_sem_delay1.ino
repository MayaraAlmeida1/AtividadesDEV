#define pinLedRed 10
#define pinLedYellow 7
#define pinLedGreen 4
#define tempoRed 5000
#define tempoYellow 2000
#define tempoGreen 3000


unsigned long tempoAtual;
unsigned long tempoInicial = 0;
char faseSemaforo = 0;

void setup()
{
  pinMode (pinLedRed, OUTPUT);
  pinMode (pinLedYellow, OUTPUT);
  pinMode (pinLedGreen, OUTPUT);
}

void loop()
{
 
  tempoAtual = millis ();
  
  //fase 0
  if (faseSemaforo == 0){
    digitalWrite (pinLedRed, LOW);
    digitalWrite (pinLedGreen, HIGH);
    digitalWrite (pinLedYellow, LOW);
  
   if (tempoAtual - tempoInicial >= tempoGreen)
  {
    tempoInicial = tempoAtual;
    faseSemaforo = 1;
  }
  }
  
  //fase 1
  if (faseSemaforo == 1){
    digitalWrite (pinLedRed, LOW);
    digitalWrite (pinLedGreen, LOW);
    digitalWrite (pinLedYellow, HIGH);
    
    if (tempoAtual - tempoInicial >= tempoYellow)
    {
    tempoInicial = tempoAtual;
    faseSemaforo = 2;
  }
  }
  
  //fase 2
  if (faseSemaforo == 2){ 
   digitalWrite (pinLedRed, HIGH);
   digitalWrite (pinLedGreen, LOW);
   digitalWrite (pinLedYellow, LOW);
    
    if (tempoAtual - tempoInicial >= tempoRed)
  {  
   tempoInicial = tempoAtual;
   faseSemaforo = 0;
  }
  }
    
  
  
  
 
  
 
  
}