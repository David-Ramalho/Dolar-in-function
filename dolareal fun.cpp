#include <stdio.h>
#include <string.h>
#include <stdlib.h>

float cot(float dolar,float real);
int main()
{
	float dolar, real;
	float resultado;
	
	printf("Qual a cotacao do dolar?\n");
	scanf("%f", &dolar);
	printf("Qual o valor em reais?\n");
	scanf("%f", &real);
	
	resultado= cot(dolar, real);
	
	printf("O valor em dolar e: %.2f", resultado);
	
	
	return 0;
}

float cot(float dolar,float real)
{
	
	float valordolar;
	
	valordolar=real/dolar;
	
	
	return(valordolar);
	
	
	
}