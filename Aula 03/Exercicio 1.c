#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
#include<string.h>

void main(){
	char nome[200];
	float custo, venda;
	
	printf("Insira o nome do produto: ");
	gets(nome);
	printf("\nInsira o custo do produto: ");
	scanf("%f", &custo);
	fflush(stdin);
	
	venda = custo + ((custo/100)*30);
	printf("\nO valor de venda do produto e: ");
	printf("%.2f", venda);
	
	getch();
}

