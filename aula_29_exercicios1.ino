//1- Faca um programa que avalie um numero inteiro e informe 
	//se este numero é positivo ou negativo

//2- Faca um programa com as seguintes informacoes: nome, cargo e
	//salario de um funcionario. Se o funcionario ganhar abaixo
	//de 1000 reais, calcule o salario acrescido de 10%. Ao final 
	//exiba o nome, cargo e o salario reajustado desse funcionario.

//3- Uma empresa decide dar aumento de 30% aos funcionarios cujo
	//salario é inferior a 500 reais. Escreva um programa que avalie
	// o salario de um funcionario e imprima o valor do salario 
	//reajustado ou uma mensagem caso o funcionario nao tenha
	//direito a aumento

//4-  Faça um programa avalie dois valores e imprima qual é o
	//maior número.

//5- Faça um programa que avalie 4 notas de um aluno, calcule 
	//e imprima a média aritmética das notas e a mensagem de 
	//APROVADO para média superior ou iguala 7,0, RECUPERAÇÃO 
	//para notas entre 5.0 e 7,0 ou a mensagem de REPROVADO 
	//para média inferior a 5,0.


void setup()
{
 Serial.begin(9600);
  
  //******EXERCICIO 1*****
  int numerointeiro = -88;
  if (numerointeiro >=0){
  Serial.println ("O numero inteiro eh postivo");
  }
  else{
  Serial.println ("O numero inteiro eh negativo");
  }
  
 //****EXERCICIO 2*****
 auto nome = "Monica";
 auto cargo = "Contadora";
 float salarioRuim = 1100;
 float salario = 0;

  
  if (salarioRuim <1000){
  salario = salarioRuim + (salarioRuim * 10/100);
  Serial.print (nome );
  Serial.print (" eh ");
  Serial.print (cargo );
  Serial.print (" e possui um salario equivalente a ");
  Serial.println (salario);
  }
  else{
 Serial.print (nome );
 Serial.print (" eh ");
 Serial.print (cargo );
 Serial.print (" e possui um salario equivalente a ");
 Serial.println (salarioRuim);
  }

//****EXERCICIO 3***
 float salarioAtual = 420;
 float salarioAjustado = 0;
  
 if (salarioAtual <500){
 salarioAjustado = salarioAtual + (salarioAtual * 30/100);
 Serial.print ("Seu salario foi reajustado para: ");
 Serial.println (salarioAjustado);
 }
  else {
  Serial.println ("Com o seu salario atual infelizmente voce nao tem direito a aumento");
  }

//****EXERCICIO 4****
float valor1 = 72;
float valor2 = 58;
 
  if (valor1 > valor2){
Serial.print ("O maior numero eh: ");
Serial.println (valor1);
}
  else {
 Serial.print ("O maior numero eh: ");
 Serial.println (valor2);
  }

//****EXERCICIO 5****
 
float nota1 = 7;
float nota2 = 8;
float nota3 = 3;
float nota4 = 4;
float media = 0;

media = (nota1 + nota2 + nota3 + nota4) / 4;

  if (media >=7){
  Serial.println ("O aluno foi APROVADO");
  }
  
  else if (media <7 && media >=5){
  Serial.println ("O aluno esta de RECUPERACAO");
  }
  
  else {
  Serial.println ("O aluno foi REPROVADO");
  }
  
  
  
}

void loop()
{
  
}