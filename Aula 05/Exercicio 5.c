#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>

void main(){
	float n1, n2, media;
	
	printf("Digite a primeira nota: ");
	scanf("%f", &n1);
	printf("Digite a segunda nota: ");
	scanf("%f", &n2);
	
	media = (n1+n2)/2;
	
	if(media >= 7){
		printf("\nO aluno foi aprovado!");
	}
	else if(media >= 5 && media < 7){
		printf("\nO aluno esta de exame!");
	}
	else{
		printf("\nO aluno foi reprovado!");
	}
	getch();
}
