//****	COMANDO FOR

/*for (inicializaçao; condiçao; incremento){}
utilizado para repetir um bloco de codigos envolvidos por chaves
ele possui tres parametros:
inicializaçao = ocorre apenas uma vez e indica em qual numero inicia
condiçao= indica a quantidade de vezes (posicoes) que acontece
incremento= se a condiçcao for verdadeira isso cocorre
*/




/*int numeroPadrao = 1;
int numeroA = 0;
int resultado = 0;


void setup()
{
Serial.begin (9600);

  
for (int i = 0; i < 9 ; i++)
    //"i" é a varivael criada do tipo
    //inteira para ser usado dentro do for
 {
   Serial.println (numeroPadrao);
   resultado = numeroA + numeroPadrao; 
   Serial.println (resultado); 
   numeroA = numeroPadrao;
   numeroPadrao = resultado; 
 }
  
 
}


void loop ()
{
 
  
}*/


/////*ARRAY****
//variaveis q estao gurdando os valores



int numeros[10];
unsigned int numeroPadrao = 1;
unsigned int numeroA = 0;
unsigned int resultado = 0;


void setup()
{
Serial.begin (9600);

  
for (int i = 0; i < 10 ; i++)
    
 {
   numeros [i] = numeroA;
   resultado = numeroA + numeroPadrao; 
   numeroA = numeroPadrao;
   numeroPadrao = resultado; 
 }
 
for (int i = 0; i < 10 ; i++)
 {
	Serial.println (numeros [i]);
 }
    Serial.print ("O oitavo numero eh:");
    Serial.print (numeros [7]);
}


void loop ()
{
 
  
}