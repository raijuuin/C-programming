#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>

void main(){
	float n1, n2, n3, media;
	
	printf("Digite a nota do laboratorio: ");
	scanf("%f", &n1);
	printf("Digite a nota da avaliacao semestral: ");
	scanf("%f", &n2);
	printf("Digite a nota do exame final: ");
	scanf("%f", &n3);
	
	media = ((n1*2) + (n2*3) + (n3*5))/10;
	
	if(media == 10 && media >= 8){
		printf("\nConceito: A!");
	}
	else if(media >= 7 && media < 8){
		printf("\nConceito: B!");
	}
	else if(media >= 6 && media < 7){
		printf("\nConceito: C!");
	}
	else if(media >= 5 && media < 6){
		printf("\nConceito: D!");
	}
	else{
		printf("\nConceito: E!");
	}
	getch();
}
