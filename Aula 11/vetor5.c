#include<stdlib.h>
#include<stdio.h>

void main(){
	int vetA[6], vetB[6], vetC[10], i, j, aux;
	
	printf("Vetor A: ");
	for(i=0; i<5; i++){
		printf("Digite um valor para a posicao %d: ", i);
		scanf("%d", &vetA[i]);
	}
	
	printf("\n\nVetor B: ");
	for(i=0; i<5; i++){
		printf("Digite um valor para a posicao %d: ", i);
		scanf("%d", &vetB[i]);
	}

	
	/* Ordenando os vetores A e B */
	for(i=0; i<5; i++){
	for(j=i+1; j<5; j++){
		if(vetA[i] > vetA[j]){
			aux = vetA[i];
			vetA[i] = vetA[j];
			vetA[j] = aux;
		}
	}
	}
	for(i=0; i<5; i++){
	for(j=i+1; j<5; j++){
		if(vetB[i] > vetB[j]){
			aux = vetB[i];
			vetB[i] = vetB[j];
			vetB[j] = aux;
		}
	}
	}
	
	/* Vetor C */
	for(i=0; i<5; i++)
		vetC[i] = vetA[i];
	for(i=5; i<10; i++)
		vetC[i] = vetB[i-5];
	
	
	
	/*Ordenando o vetor C */
	for(i=0; i<10; i++){
	for(j=i+1; j<10; j++){
		if(vetC[i] > vetC[j]){
			aux = vetC[i];
			vetC[i] = vetC[j];
			vetC[j] = aux;
		}
	}
	}
	
	/*Impressão do vetor A ordenado */
	printf("\nVetor A em ordem crescente: \n");
	for(i=0; i<5; i++)
	printf("%d\n", vetA[i]);
	
	/*Impressão do vetor B ordenado */
	printf("\n\nVetor B em ordem crescente: \n");
	for(i=0; i<5; i++)
	printf("%d\n", vetB[i]);
	
	/*Impressão do vetor C ordenado */
	printf("\n\nVetor C em ordem crescente: \n");
	for(i=0; i<10; i++)
	printf("%d\n", vetC[i]);
	
	getch();
}
