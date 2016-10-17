#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>

void main(){
	float sf, sm, salarios;
	char nome[100];
	
	printf("Digite seu nome: ");
	gets(nome);
	printf("Digite seu salario: ");
	scanf("%f", &sf);
	printf("Digite o valor do salario minimo atual: ");
	scanf("%f", &sm);
	
	salarios = sf/sm;
	printf("\n%s, voce ganha %.2f salarios minimos!", nome, salarios);
	getch();
}
