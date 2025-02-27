//1- controle de temperatura 
    //Ecreva um programa para acionar um alarme (ligar um LED)]
	//quando a temperatura for superior a 30C


//2- Alerta de bateria
	//Escreva um codigo que acione um alerta quando a bateria
	//estiver entre 20%  80%


//3- Criar um programa que avalie um valor, converta esse valor de um intervalo
	//de 0 a 1023 para um novo intervalo de 0 a 100, em seguida coloque os resultados
	//entre os limites de 20 e 80, caso o valor exceda os limites acenda
	//um led de alerta e mostre no terminal a mensagem "O valor__
	// execedeu os limtes, valor reajustado para __"

//4 - Acender o led caso o numero seja par. Escreva um programa que acenda
	// o led caso o numero avaliado seja par



#define pinLEDRED 13
#define pinLEDBLUE 9
#define pinLEDGREEN 5
#define tempoBATERIA 500
#define pinLEDORANGE 2


int temperatura = 32;
int bateria = 48;
int resultadoMap = 0;
int valor = 1000;
int resultadoConstrain = 0;
int numeroAvaliado = 67;
int numeroDivisivel = 2;
int resultado = 0;

void setup()
{ 
  Serial.begin (9600);
  
  //***exercicio 1****
  pinMode (pinLEDRED, OUTPUT);
  if (temperatura >30){
  Serial.println ("Alerta alta temperatura");
  digitalWrite (pinLEDRED,HIGH); 
 }
  
  //****exercicio 2****
  pinMode (pinLEDBLUE, OUTPUT);
  if (bateria >20 && bateria<80){
  Serial.println("Bateria entre 20% e 80%");
  }
  
  //****exercicio 3*****
  pinMode (pinLEDGREEN, OUTPUT);
  resultadoMap = map (valor, 0, 1023, 0, 100);
  Serial.print ("O resultado do map encontrado eh: ");
  Serial.println (resultadoMap);
  resultadoConstrain = constrain (resultadoMap, 20, 80);
  Serial.print ("O resultado da constrain encontrada eh: ");
  Serial.println (resultadoConstrain);
  
  if (resultadoMap <20 || resultadoMap >80){
    digitalWrite (pinLEDGREEN, HIGH);
    Serial.print ("O valor ");
    Serial.print (resultadoMap);
    Serial.print (" excedeu os limites, valor reajustado para ");
    Serial.println (resultadoConstrain);
  }
                    
 //****exercicio 4*****
 pinMode (pinLEDORANGE, OUTPUT);
 resultado = numeroAvaliado / numeroDivisivel; 
 resultado = numeroAvaliado % numeroDivisivel;
  if (resultado==0){
   digitalWrite (pinLEDORANGE, HIGH);
  }
  else {
  Serial.println ("O numero eh impar");
  }
}




void loop()
{
  //****exercicio 2****
  if (bateria >20 && bateria <80 ){
  digitalWrite (pinLEDBLUE, HIGH);
  delay (tempoBATERIA);
  digitalWrite (pinLEDBLUE, LOW);
  delay (tempoBATERIA);
  } 
 
}