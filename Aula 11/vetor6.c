#include<stdlib.h>
#include<stdio.h>

void main(){
	int vet[10], i, maior=0;
	
	for(i=0; i<10; i++){
		printf("Digite um valor para a posicao %d: ", i);
		scanf("%d", &vet[i]);
	}
	
	for(i=0; i<10; i++)
	maior += vet[i] > 50;
	
		if(maior!=0)
			printf("\nVoce digitou %d numeros maiores que 50. ", maior);
		else
			printf("\nNenhum numero digitado foi maior que 50.");
	
	getch();	
}
