#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>

void main(){
	float l1, l2, l3, res;
	
	printf("Digite o primeiro lado do triangulo: ");
	scanf("%f", &l1);
	printf("Digite o segundo lado do trangulo: ");
	scanf("%f", &l2);
	printf("Digite o terceiro lado do triangulo: ");
	scanf("%f", &l3);
	
	if ((l1 < (l2 + l3)) || (l2 < (l1 + l3)) || (l3 < (l1 + l2))){
		if(l1==l2 && l2==l3){
			printf("\nE um triangulo equilatero!");
		}
		else if (l1==l2 || l2==l3 || l1==l3){
		printf("\nE um triangulo isosceles!");
		}
		else {
			printf("\nE um triangulo escaleno!");
		}	
	}
	
	else{
		printf("\nImpossivel formar um triangulo com esses valores!");
	}
	getch();
}
