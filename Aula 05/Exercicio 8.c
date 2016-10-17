#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>

void main(){
	float b, h, area;
	
	printf("Digite o valor da base do triangulo: ");
	scanf("%f", &b);
	printf("Digite o valor da altura do triangulo: ");
	scanf("%f", &h);
	
	if(b < 0){
		printf("\nValor da base negativo: %.2f, terminando programa", b);
	}
	else if(h < 0){
		printf("\nValor da altura negativo: %.2f, terminando programa", h);
	}
	else{
		area = (b*h)/2;
		printf("\nArea = %.2f", area);
	}
	getch();
}
