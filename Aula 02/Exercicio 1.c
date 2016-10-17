#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>

void main(){
	float r, a, vol, pi=3.1415;
	
	printf("Bem vindo ao programa para calcular o volume de um tonel de gasolina!\n");
	printf("Digite o raio do tonel: ");
	scanf("%f", &r);
	printf("Digite a altura do tonel: ");
	scanf("%f", &a);
	
	vol=pi*r*r*a;
	printf("O volume do tonel de gasolina e: %.2f", vol);
	getch();
}
