#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>

void main(){
	char nome[70], cat;
	float sl, nsl;
	
	printf("Digite o nome: ");
	gets(nome);
	printf("\nDigite o salario: ");
	scanf("%f", &sl);
	printf("\nDigite a categoria: ");
	scanf("%s", &cat);
	fflush(stdin);
	
	switch(cat){
		case 'A':
		case 'C':
		case 'F':
		case 'H':
			nsl = sl + ((sl/100)*10);
			printf("\nNovo salario: R$%.2f", nsl);
			break;
		case 'B':
		case 'D':
		case 'E':
		case 'I':
		case 'J':
		case 'T':
			nsl = sl + ((sl/100)*15);
			printf("\nNovo salario: R$%.2f", nsl);
			break;
		case 'K':
		case 'R':
			nsl = sl + ((sl/100)*25);
			printf("\nNovo salario: R$%.2f", nsl);
			break;
		case 'L':
		case 'M':
		case 'N':
		case 'O':
		case 'P':
		case 'Q':
		case 'S':
			nsl = sl + ((sl/100)*35);
			printf("\nNovo salario: R$%.2f", nsl);
			break;
		case 'U':
		case 'V':
		case 'X':
		case 'Y':
		case 'W':
		case 'Z':
			nsl = sl + ((sl/100)*50);
			printf("\nNovo salario: R$%.2f", nsl);
			break;
		default:
			printf("\nDigite uma categoria valida!!");
			break;
	}
	getch();
}
