#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void main(){
	int mat[8][8], i, j;
	
	loop:
	srand(time(NULL));
	
	for(i=0; i<8; i++){
		for(j=0; j<8; j++){
			mat[i][j] = rand()%2;
			printf("Linha %d, coluna %d: %d\n", i+1, j+1, mat[i][j]);
		}
	}
	
	if(mat[i][j] = mat[j][i]){
		printf("\nMatriz simetrica!");
	}
	else{
		printf("\nMatriz nao simetrica!");
	}
	
	getch();
	goto loop;
}
