#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>

void main(){
	float a, b, c, delta, x1, x2;
	
	printf("Digite o valor de A: ");
	scanf("%f", &a);
	printf("Digite o valor de B: ");
	scanf("%f", &b);
	printf("Digite o valor de C: ");
	scanf("%f", &c);
	
	delta = (b*b) - (4*a*c);
	
	if (delta > 0){
	x1 = (-b + sqrt(delta))/(2*a);
	x2 = (-b - sqrt(delta))/(2*a);
		printf("\nOs valores da raizes sao: delta: %.2f, x1: %.2f, x2: %.2f", delta, x1, x2);
	}
	else{
		printf("\nNao foi possivel calcular delta!");
	}
}
