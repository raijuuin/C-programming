#include<stdio.h>
#include<stdlib.h>

void main(){
	int x, r, cont;
	
	printf("\nMultiplicacao de um numero X por 3\n\n");
	
	for(cont=0; cont < 5; cont++){
		printf("\nDigite um valor para X: ");
		scanf("%d", &x);
		r = x * 3;
		printf("O valor de r e: %d\n", r);
	}
	getch();
}
