float peso = 78;
float altura = 1.52;
float IMC = 0;

void setup()
{
  Serial.begin(9600);
  IMC = peso / (altura*altura);
  Serial.println (IMC);
  
  if (IMC >=32.4){
    Serial.println ("Obesidade");
  }
  
  else if(IMC <=32.3 & IMC >=27.4){
  Serial.println ("Acima do peso");
  }
  
  else if (IMC <=27.3 & IMC >=25.9){
    Serial.println ("Pouco acima do peso");
  }
  
  else if (IMC <=25.8 & IMC >=19.1){
    Serial.println ("Peso normal");
  }
  
  else {
    Serial.println ("Abaixo do peso");
  }
  
  
}

void loop()
{
 
}