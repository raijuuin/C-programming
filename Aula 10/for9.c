#include<stdio.h>
#include<stdlib.h>

void main(){
	int n, soma;
	
	printf("Digite um numero N: ");
	scanf("%d", &n);
	
	for(soma=0; n>=0; n--){
		soma += n;
	}
	
	printf("Soma = %d", soma);
	getch();
}
