#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
#include<string.h>

void main(){
	float v1, v2;
	
	printf("Digite o seu salario base: ");
	scanf("%f", &v1);
	
	v2 = v1+((v1/100)*5) - ((v1/100)*7);
	printf("\nO valor do salario a receber e de: %.2f", v2);
	
	getch();
}
