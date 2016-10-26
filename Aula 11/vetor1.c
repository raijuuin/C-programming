#include<stdlib.h>
#include<stdio.h>

void main(){
	int num[10], i;
	
	for(i=0; i<10; i++){
		printf("Digite um valor para o elemento da posicao %d: ", i);
		scanf("%d", &num[i]);
	}
	printf("\nOs valores lidos sao: \n");
	for(i=0; i<10; i++){
		printf("%d\n", num[i]);
	}
	getch();
}
