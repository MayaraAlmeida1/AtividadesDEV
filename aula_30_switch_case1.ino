//crie uma variavel que armazene de 1 a 5 e para cada condiçao
//acenda um led de cor diferente.


# define ledRed 13
#define ledBlue 10
#define ledYellow 8
#define ledWhite 6
#define ledGreen 3

int variavel = 6;

void setup()
{
 Serial.begin (9600);
 pinMode (ledRed, OUTPUT);
 pinMode (ledBlue, OUTPUT);
 pinMode (ledYellow, OUTPUT);
 pinMode (ledWhite, OUTPUT);
 pinMode (ledGreen, OUTPUT);
  
  switch (variavel){
  case 1: 
    digitalWrite (ledRed, HIGH);
   break;
 
  case 2: 
    digitalWrite (ledBlue, HIGH);
   break;
 
  case 3: 
    digitalWrite (ledYellow, HIGH);
   break;
    
  case 4: 
    digitalWrite (ledWhite, HIGH);
   break;
    
  case 5: 
    digitalWrite (ledGreen, HIGH);
   break;
    
  default:
  Serial.println ("Variavel nao catalogada");
  break;
  }  
 
}

void loop()
{
  
}