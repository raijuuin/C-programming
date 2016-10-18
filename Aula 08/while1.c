#include<stdlib.h>
#include<stdio.h>
#include<conio.h>

void main(){
	int x, r, cont;
	cont=0;
	
	while(cont<5){
		printf("Digite um valor para X: ");
		scanf("%d", &x);
		r = x*3;
		printf("\nO valor de r e: %d\n\n", r);
		cont++;
	}
	getch();
}
