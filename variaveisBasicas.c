#include <stdio.h>
#include <locale.h>

void main()
{
	setlocale(LC_ALL,"Portuguese");	//Usar parametros da Lingua Portuguesa
	
	int n1 = 20; //Variaveis numeros inteiros
	int n2 = 10;
	int soma = n1+n2;
	int subtracao = n1-n2;
	int divisao = n1/n2;
	int restoDivisao = n1%n2;
	int multiplicacao = n1*n2;
	
	printf("N�mero 1 = %d\n",n1); //(%d) substitui uma variavel inteira
	printf("N�mero 2 = %d\n\n",n2);
	
	printf("Soma dos N�meros = %d\n",soma);
	
	printf("Subtra��o dos N�meros = %d\n",subtracao);
	
	printf("Divis�o dos N�meros = %d\n",divisao);
	printf("O Resto da Divis�o dos N�meros = %d\n",restoDivisao);
	
	
	printf("Multiplica��o dos N�meros = %d\n",multiplicacao);	

}
