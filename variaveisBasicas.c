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
	
	printf("Número 1 = %d\n",n1); //(%d) substitui uma variavel inteira
	printf("Número 2 = %d\n\n",n2);
	
	printf("Soma dos Números = %d\n",soma);
	
	printf("Subtração dos Números = %d\n",subtracao);
	
	printf("Divisão dos Números = %d\n",divisao);
	printf("O Resto da Divisão dos Números = %d\n",restoDivisao);
	
	
	printf("Multiplicação dos Números = %d\n",multiplicacao);	

}
