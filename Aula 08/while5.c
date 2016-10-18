#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void main(){
	int x, res;
	char ch='s';
	x=0;
	
	while(ch=='s'){
		printf("\nDigite um numero: ");
		scanf("%d", &x);
		res = x*3;
		printf("Resultado: %d", res);
		printf("\nDeseja continuar? (s/n):");
		ch = getche();
	}
	printf("\nAte logo!");
	getch();
}
