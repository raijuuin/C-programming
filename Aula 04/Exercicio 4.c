#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>

void main(){
	float n1, n2, res;
	
	printf("Digite o primeiro numero: ");
	scanf("%f", &n1);
	printf("Digite o segundo numero: ");
	scanf("%f", &n2);
	
	res = n1*n2;
	
	if(res >= 50 && res <= 100){
		printf("\nO resultado e: %.2f", res);
	}
	else{
		printf("\nO resultado foi menor que 50 ou maior que 100!!");
	}
	getch();
}
