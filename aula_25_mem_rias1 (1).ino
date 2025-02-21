
unsigned int numero = 400; //valor que tem dentro da variavel

void setup()
{
 Serial.begin(9600);//velocidade de comunicação do serial
 Serial.print ("Ola Mundo!!\n");// o \n faz o proximo texto mudar de linha
 Serial.println ("Senai 134");//o print ln faz o proximo texto ficar na outra linha
 Serial.println ("A variavel contem: ");
 Serial.println (numero);
 numero = 300;
 Serial.println ("A variavel agora contem: ");
 Serial.println (numero);
  
 Serial.println ("Tamanho dos tipos de variaveis em bytes"); 
  Serial.print ("bool: "); Serial.println (sizeof(bool)); //possui 1 byte (8bites)so aceita verdadeiro ou falso 0 ou 1
 Serial.print ("char: "); Serial.println (sizeof(char));//possui 1 byte (8bites 0-255 caracteres) aceita variaveis da tebla asc, aceita letras
 Serial.print ("byte: "); Serial.println (sizeof(byte));// 0 a 255
 Serial.print ("int: "); Serial.println (sizeof(int));// pode ser sinalizado implicitamente -32768 a 32767
 Serial.print ("unsigned int: "); Serial.println (sizeof(unsigned int));//sinalizado explicitamente 65535
 Serial.print ("long: "); Serial.println (sizeof(long));//-2.147.483.648 a 2.147.483.647 maior variavel
 Serial.print ("unsigned long: "); Serial.println (sizeof(unsigned long));//0 a 4.294.967.295
 Serial.print ("float: "); Serial.println (sizeof(float));
  //aceita virgula
  //valor maximo positivo 3,4028235 x 10^38
  //valor minimo positivo 1.175494 x 10^-38
  //valor minimo negativo -1.175494 x 10^-38
   //valor maximo negativo -3,4028235 x 10^38
 Serial.print ("double: "); Serial.println (sizeof(double));//-2.147.483.648 a 2.147.483.647

 Serial.println ("Tamanho das variaveis explicitos em bytes");//esta pergutando o tamanho
 Serial.print ("int8_t: "); Serial.println (sizeof(int8_t));
 Serial.print ("uint8_t: "); Serial.println (sizeof(uint8_t));
 Serial.print ("int16_t: "); Serial.println (sizeof(int16_t));
 Serial.print ("uint16_t: "); Serial.println (sizeof(uint16_t));
 Serial.print ("int32_t: "); Serial.println (sizeof(int32_t));
 Serial.print ("uint32_t: "); Serial.println (sizeof(uint32_t));
 Serial.print ("int64_t: "); Serial.println (sizeof(int64_t));//nao e pssoivel usar pq e maior
 Serial.print ("uint64_t: "); Serial.println (sizeof(uint64_t));
  
  
}

void loop ()
{
  
}
 