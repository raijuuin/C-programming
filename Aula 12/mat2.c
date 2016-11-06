#include<stdio.h>
#include<stdlib.h>

void main(){
	int matA[5][3], matB[5][3], matC[5][3], i, j;
	
	for(i=0; i<5; i++){
		for(j=0; j<3; j++){
			printf("Digite um valor para o %do. elemento da linha %d, coluna %d da Matriz A: ", j+1, i+1, j+1);
			scanf("%d", &matA[i][j]);
		}
	}
	
	printf("\n");
	for(i=0; i<5; i++){
		for(j=0; j<3; j++){
			printf("Digite um valor para o %do. elemento da linha %d, coluna %d da Matriz B: ", j+1, i+1, j+1);
			scanf("%d", &matB[i][j]);
		}
	}
	
	printf("\nOs valores somados sao: \n");
	
	for(i=0; i<5; i++){
		for(j=0; j<3; j++){
			matC[i][j] = matA[i][j] + matB[i][j];
			printf("%d \n", matC[i][j]);
		}
	}
	
	getch();
}
