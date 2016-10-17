#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>

void main(){
	int a, b, troca;
	
	printf("Esse programa troca o valor de duas variaveis!\n");
	printf("\nDigite o valor de A: ");
	scanf("%d", &a);
	printf("Digite o valor de B: ");
	scanf("%d", &b);
	
	troca = a;
	a = b;
	b = troca;
	printf("\nO novo valor de A e: %d", a);
	printf("\nO novo valor de B e: %d", b);
	getch();
}
