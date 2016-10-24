#include<stdio.h>
#include<stdlib.h>

void main(){
	int x, r;
	char resp[3];
	
	do{
		printf("Digite um valor para X: ");
		scanf("%d", &x);
		r = x*3;
		printf("\nO valor de r e: %d", r);
		printf("\nDeseja continuar? (s/n)");
		scanf("%s", &resp);
	}
	while(strcmp(resp,"sim")==0);
	getch();
}
