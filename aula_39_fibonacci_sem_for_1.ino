//EXERCICIO 
//Imprima na serial os 8 primeiros numeros da 
//sequencia de fibonacci

int numeroPadrao = 1;
int numeroA = 0;
int resultado = 0;

void setup ()
{
 Serial.begin (9600); 
 Serial.println (numeroPadrao);
}


void loop ()
{
 
  if (resultado < 50)
  {
   resultado = numeroA + numeroPadrao; 
    
   Serial.println(resultado);
  }
  
  numeroA = numeroPadrao;
  numeroPadrao = resultado;
  
}

