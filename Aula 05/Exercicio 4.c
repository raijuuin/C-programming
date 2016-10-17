#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>

void main(){
	float n1, n2, n3, soma;
	
	printf("Digite o primeiro numero: ");
	scanf("%f", &n1);
	printf("Digite o segundo numero: ");
	scanf("%f", &n2);
	printf("Digite o terceiro numero: ");
	scanf("%f", &n3);
	
	soma = pow(n1,2)+pow(n2,2)+pow(n3,2);
	printf("\nA soma dos quadrados dos numeros escolhidos e de: %.2f", soma);
	getch();
}
