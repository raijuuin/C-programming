#include<stdio.h>
#include<stdlib.h>

int troca(int *a, int *b);

void main(){
	int a, b, aux;
	
	printf("Digite o valor de a: ");
	scanf("%d", &a);
	
	printf("Digite o valor de b: ");
	scanf("%d", &b);
	
	aux = troca(&a, &b);

	printf("\n\nNovo valor de a: %d", a);
	printf("\nNovo valor de b: %d", b);
	
	getch();
}

int troca(int *a, int *b){
	int troca, aux;
	
	aux = *a;
	*a = *b;
	*b = aux;
	
}
