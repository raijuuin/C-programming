#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>

void main(){
	float prest, valor, taxa, temp;
	
	printf("Digite o valor da prestacao atrasada: ");
	scanf("%f", &valor);
	printf("Digite a taxa da prestacao: ");
	scanf("%f", &taxa);
	printf("Digite o tempo de atraso: ");
	scanf("%f", &temp);
	
	prest = valor + (valor*(taxa/100)*temp);
	printf("\nO valor da prestacao a ser paga e de: R$%.2f", prest);
	getch();
}
