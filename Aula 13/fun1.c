#include<stdio.h>
#include<stdlib.h>

float divisao (int dividendo, int divisor); //Esta linha descreve o protótipo da função

void main(){
	int num1, num2;
	float resp;
	
	printf("Digite o primeiro numero: ");
	scanf("%d", &num1);
	
	do{
		printf("\nDigite o segundo numero: ");
		scanf("%d", &num2);
	}while(num2==0);
	
	resp = divisao(num1,num2);
	printf("\n\nA divisao resultou em: %5.2f\n", resp);
	getch();
}

float divisao (int dividendo, int divisor){
	float conta;
	conta = (dividendo / divisor);
	return conta;
}
