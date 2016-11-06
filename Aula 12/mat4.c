#include<stdio.h>
#include<stdlib.h>

void main(){
	float notas[3][3], menor;
	int pm, i, j;
	
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			printf("\nDigite a %d nota do aluno %d: ", j+1, i+1);
			scanf("%f", &notas[i][j]);
		}
	}
	
	for(i=0; i<3; i++){
		printf("\nAluno numero %d: ", i+1);
		menor = notas[i][0];
		pm = 0;
		for(j=0; j<3; j++){
			if(notas[i][j] < menor){
				menor = notas[i][j];
				pm = j;
			}
		}
		
		printf("\nA menor nota do aluno %d foi na %da. prova.\n ", i+1, pm+1);
	}
	
	getch();
}
