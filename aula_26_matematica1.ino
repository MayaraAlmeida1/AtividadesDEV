/* 
Autor:Mayara Almeida
Data: 24/02/2025
Descriçao:ESte codigo...
/*

//************DECLARAÇAO DE VARIAVEIS GLOBAIS**************/

int numeroA=10;
int numeroB= 5;
int resultado=0;//= (recebe)
float resultadoReal =0;
  
void setup ()
{
 Serial.begin (9600);
  
 //****SOMA*****
 resultado= numeroA + numeroB;
 Serial.print ("A soma do numero A com o numero B eh:");
 Serial.println (resultado);
 
 //******SUBTRAÇAO****
 resultado= numeroA - numeroB;
 Serial.print ("A subtracao de numero B pela A eh:");
 Serial.println (resultado);
 
 //*******MULTIPLICACAO*****
 resultado= numeroA * numeroB;
 Serial.print ("A multiplicacao de A e B eh:");
 Serial.println (resultado);
  
 //*****DIVISAO******
 resultado= numeroA / numeroB;
 Serial.print ("A divisao de A por B eh:");
 Serial.println (resultado);
 resultado= numeroA%numeroB;
 Serial.print ("e sobra:");
 Serial.println (resultado);
 resultadoReal= (float)numeroA / (float)numeroB;
 Serial.println ("Ou");
 Serial.println (resultadoReal, 1);//limita a impressao do resultado
  									//em uma casa decimal
 
 //******POTENCIACAO****
  
 resultado= pow (numeroA,numeroB); //'numeroA' elevado a 'numeroB'
 Serial.print ("numero A elevado a numero B eh:");
 Serial.println (resultado);
  
 //******QUADRADO*****
  
 resultado= sq(numeroA);//numero A elevado ao quadrado
 Serial.print("numero A elevado ao quadraddo eh:");
 Serial.println (resultado);
 
 
//*****RAIZ QUADRADA******
  
 resultadoReal= sqrt(numeroA);
 Serial.print ("a raiz quadrada de numero A eh:");
 Serial.println (resultadoReal);
 
//*****MODULO*****
resultado= abs (numeroA * -1);
Serial.println (resultado);
  
//*******RESTRIÇAO*****
  
 resultado= constrain (numeroA, -3, 5);//restringe a variavel numeroA aos limites de -3 e 5
 Serial.println(resultado);
  
 //REMAPEAMENTO
  
 resultado= map (7,0 , 10, 0, 1000);
 //map (valor, deMenor, deMaior, paraMenor, paraMaior)
 Serial.println (resultado);
  
 //OPERADORES DE ATRIBUICAO
  
 //numeroA= numeroA + 5;
 Serial.println(numeroA+= 5);
  
 //numeroA =numeroA - 5
 Serial.println (numeroA-= 5);
 
 //numeroA= numeroA *2
 Serial.println (numeroA *= 2);
 
 //numeroA= numeroA / 2
 Serial.println (numeroA /= 2);
  
 //INCREMENTAR A VARIAVEL
 //numeroA = numeroA + 1;
 Serial.println(numeroA++);//pos incremento
 Serial.println(++numeroA);//pre incremento
  
 //DECREMENTAR A VARIAVEL
 //numeroA= numeroA - 1
 Serial.println(numeroA--);//pos incremento
 Serial.println(--numeroA);//pre incremento
 
 resultadoReal= 3 * ((2.0/5.0) + (2 * 3));
 Serial.println(resultadoReal);
  
 //RESPOSTA EXERCICIO MAP
  
 //resultado= (valor-deMenor) * (paraMaior-paraMenor) / (deMaior - deMenor) + paraMenor
  
 
 }

void loop ()
{
}