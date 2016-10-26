#include<stdlib.h>
#include<stdio.h>

void main(){
	int vet[5], i, cod;
	
	for(i=0; i<5; i++){
		printf("Digite um valor para a posicao %d: ", i);
		scanf("%d", &vet[i]);
	}
	
	printf("\nDigite o codigo (0, 1 ou 2): ");
	scanf("%d", &cod);
	
	if(cod == 1){
		for(i=0; i<5; i++)
			printf("\nValores: %d", vet[i]);
	}
	
	else if(cod == 2){
		for(i=5; i>=0; i--)
			printf("\nValores: %d", vet[i]);
	}

	else
			printf("\nPrograma finalizado! ");
			
	getch();
}
