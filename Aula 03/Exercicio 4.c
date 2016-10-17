#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
#include<string.h>

void main(){
	float v1, v2;
	
	printf("Digite o valor atual do seu salario: ");
	scanf("%f", &v1);
	
	v2 = v1 + ((v1/100)*25);
	printf("\nO novo valor do seu salario e: %.2f", v2);
	
	getch();
}
