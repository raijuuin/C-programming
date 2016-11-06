#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void main(){
	float mg, mt[3];
	int mat[3][8][4], i, j, k;
	
	srand(time(NULL));
	
	for(i=0; i<3; i++){
		for(j=0; j<8; j++){
			for(k=0; k<4; k++){
				printf("Digite a nota para a turma %d, aluno %d, disciplina %d: ", i+1, j+1, k+1);
				scanf("%f", &mat[i][j][k]);
				mg += mat[i][j][k];
				mt[i] += mat[i][j][k];
			}
		}
	}
	
	mg = mg/96;
	printf("\n\nA media geral e: %.2f \n", mg);
	
	for(i=0; i<3; i++){
		mt[i] = mt[i] / 32;
		printf("\nA media da turma %d e %.2f:\n", i+1, mt[i]);
	}
}
