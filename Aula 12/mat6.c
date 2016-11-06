#include<stdio.h>
#include<stdlib.h>

void main(){
	float mat[4][7], menor, maior;
	int i, j, p1[2], p2[2];
	
	for(i=0; i<4; i++){
		for(j=0; j<7; j++){
			printf("Digite o numero para a linha %d, coluna %d: ", i+1, j+1);
			scanf("%f", &mat[i][j]);
		}
	}
	
	menor = mat[0][0];
	maior = mat[0][0];
	for(i = 0;i<4;i++){
		for(j = 0;j<7;j++){
			if(mat[i][j] > maior){
				maior = mat[i][j];
				p1[0] = i+1;
				p1[1] = j+1;
			}
			
			if(mat[i][j] < menor){
				menor = mat[i][j];
				p2[0] = i+1;
				p2[1] = j+1;				
			}
		}
	}
	printf("\nO maior numero e: %.2f na linha: %d coluna %d", maior, p1[0], p1[1]);
	printf("\nO menor numero e: %.2f na linha: %d coluna %d", menor, p2[0], p2[1]);

	getch();
}
