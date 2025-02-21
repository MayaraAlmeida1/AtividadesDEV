#define pinLEDRED 10
#define pinLEDYELLOW 9
#define pinLEDGREEN 8
#define pinLEDVERMELHO 7
#define pinLEDAMARELO 5
#define pinLEDVERDE 4
#define pinLEDPEDRED 11
#define pinLEDPEDGREEN 12
#define pinLEDPEDVERMELHO 3
#define pinLEDPEDVERDE 2
#define tempoRED 5000
#define tempoYELLOW 2000
#define tempoVERMELHO 5000
#define tempoAMARELO 2000
#define tempoVerde 3000

void setup ()
{
  pinMode (pinLEDRED, OUTPUT);//define pino 13 como saída
  pinMode (pinLEDYELLOW, OUTPUT);//define pino 12 como saída
  pinMode (pinLEDGREEN, OUTPUT);//define pino 8 como saída
  pinMode (pinLEDVERMELHO, OUTPUT);//define pino 5 como saída
  pinMode (pinLEDAMARELO, OUTPUT);//define pino 3 como saída
  pinMode (pinLEDVERDE, OUTPUT);//define pino 2 como saída
  pinMode (pinLEDPEDRED, OUTPUT);
  pinMode (pinLEDPEDGREEN, OUTPUT);
  pinMode (pinLEDPEDVERMELHO, OUTPUT);
  pinMode (pinLEDPEDVERDE, OUTPUT);
}

void loop ()
{
  digitalWrite (pinLEDRED, HIGH);//liga pino vermelho
  digitalWrite (pinLEDVERDE, HIGH);//liga pino verde
  digitalWrite (pinLEDPEDGREEN, HIGH);
  digitalWrite (pinLEDPEDVERMELHO, HIGH);
  delay (tempoVerde);//delay de 5 segundos 
  digitalWrite (pinLEDVERDE, LOW);//desliga pino verde
  digitalWrite (pinLEDAMARELO, HIGH);//liga pino amarelo
  delay (tempoAMARELO);//delay de 2 segundos
  digitalWrite (pinLEDAMARELO, LOW);//desliga pino amarelo
  digitalWrite (pinLEDPEDVERMELHO, LOW);
  digitalWrite (pinLEDPEDVERDE, HIGH);
  digitalWrite (pinLEDPEDGREEN, LOW);
  digitalWrite (pinLEDPEDRED, HIGH);
  digitalWrite (pinLEDRED, LOW);//desliga pino vermelho
  digitalWrite (pinLEDVERMELHO, HIGH);//liga pino vermelho
  digitalWrite (pinLEDGREEN, HIGH);//liga pino verde
  delay (tempoVerde);//delay de 5 segundos
  digitalWrite (pinLEDGREEN, LOW);//desliga pino verde
  digitalWrite (pinLEDYELLOW, HIGH);//liga pino amarelo
  delay (tempoYELLOW);//delay de 2 segundos
  digitalWrite (pinLEDPEDRED, LOW);
  digitalWrite (pinLEDPEDVERDE, LOW);
  digitalWrite (pinLEDYELLOW, LOW);//desliga pino amarelo
  digitalWrite (pinLEDVERMELHO, LOW);//desliga pino vermelho
 
}