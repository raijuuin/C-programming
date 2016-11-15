#include <stdio.h>
#include <stdlib.h>

float quad(float a){
	return a*a;
}

void main(){
	float a, res;
	printf("Digite o numero a ser elevado ao quadrado: ");
	scanf("%f",&a);
	res = quad(a);
	printf("\nValor : %.2f", res);
	
	getch();
}

