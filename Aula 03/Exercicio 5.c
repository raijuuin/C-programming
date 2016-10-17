#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
#include<string.h>3

void main(){
	float v1, v2, percent, aumento;
	
	printf("Digite o valor do seu atual salario: ");
	scanf("%f", &v1);
	printf("\nDigite o percentual do aumento do salario: ");
	scanf("%f", &percent);
	
	v2 = v1 + ((v1/100)*percent);
	aumento = v2 - v1;
	
	printf("\nO salario novo e: %.2f", v2);
	printf("\nO valor do aumento e: %.2f", aumento);
	
	getch();
}
