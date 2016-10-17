#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>

void main(){
	float n1, n2, res;
	
	printf("Insira o primeiro numero: ");
	scanf("%f", &n1);
	printf("Insira o segundo numero: ");
	scanf("%f", &n2);
	
	res = n1-n2;
	
	if (res > 0){
		printf("\nO resultado da subtracao e: %.2f", res);
	}
	else{
		printf("\nO resultado e negativo: %.2f", res);
	}
	
	getch();
}
