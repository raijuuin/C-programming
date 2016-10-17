#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
#include<string.h>

void main(){
	float litros, tempo, vm, dist;
	
	printf("Insira o tempo de viagem: ");
	scanf("%f", &tempo);
	printf("Insira a velocidade media: ");
	scanf("%f", &vm);
	
	dist = tempo*vm;
	litros = dist/12;
	
	printf("Quantidade de litros usados: %.2f", litros);
	
	getch();
}
