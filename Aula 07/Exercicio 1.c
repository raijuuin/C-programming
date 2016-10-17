#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>

void main(){
	float peso, epeso, multa;
	
	printf("Digite o peso de peixes: ");
	scanf("%f", &peso);
	
	epeso = peso - 50;
	multa = epeso*4;
	if(peso<=50){
		printf("\nExcesso de peso: 0. \nValor da multa: 0.");
	}
	else{
		printf("\nExcesso de peso: %.2f", epeso);
		printf("\nValor da multa: %.2f", multa);
	}
	getch();
}
