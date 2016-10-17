#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>

void main(){
	float n1, n2, media;
	
	printf("Insira a primeira nota: ");
	scanf("%f", &n1);
	printf("Insira a segunda nota: ");
	scanf("%f", &n2);
	
	media = (n1 + n2)/2;
	if (media < 7){
		printf("\nAluno reprovado!");
	}
	else{
		printf("\nAluno aprovado!");
	}
	
	printf("\n\nA media do aluno e: %.2f", media);
	getch();
}
