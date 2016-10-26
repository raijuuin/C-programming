#include<stdlib.h>
#include<stdio.h>

void main(){
	int vetA[5], i, soma=0, resto=0;
	
	for(i=0; i<5; i++){
		printf("Digite um valor para o elemento da posicao %d: ", i);
		scanf("%d", &vetA[i]);
	}
	
	for(i=0; i<5; i++){
		resto = vetA[i]%2;
		if(resto!=0)
			soma=soma + vetA[i];
	}
	printf("\nSoma dos elementos impares: %d\n\n", soma);
	getch();
}
