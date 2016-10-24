#include<stdio.h>
#include<stdlib.h>

void main(){
	int x, r, cont;
	cont = 1;
	do{
		printf("Digite um valor para x: ");
		scanf("%d", &x);
		r = x*3;
		printf("\n O valor de r e: %d\n\n", r);
		cont++;
	}
	while(cont<=5);
	getch();
}
