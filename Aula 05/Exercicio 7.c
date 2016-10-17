#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>

void main(){
	float n;
	
	printf("Digite o numero: ");
	scanf("%f", &n);
	
	if(n >= 0 && n < 100){
		printf("\nNumero entre 0 e 100!");
	}
	else if(n >= 100 && n < 1000){
		printf("\nNumero entre 100 e 1000!");
	}
	else if(n >= 1000){
		printf("\nNumero maior ou igual a 1000!");
	}
	else{
		printf("\nNumero menor que 0!");
	}
	getch();
}
