#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>

void main(){
	float n1, n2, n3;
	
	printf("Digite o primeiro valor: ");
	scanf("%f", &n1);
	printf("Digite o segundo valor: ");
	scanf("%f", &n2);
	printf("Digite o terceiro valor: ");
	scanf("%f", &n3);
	
	if (n1>n2 && n2>n3){
		printf("\nEm ordem crescente: %.2f, %.2f, %.2f", n3,n2,n1);
	}
	else if(n3>n2 && n2>n1){
		printf("\nEm ordem crescente: %.2f, %.2f, %.2f", n1,n2,n3);
	}
	else if(n2>n3 && n3>n1){
		printf("\nEm ordem crescente: %.2f, %.2f, %.2f", n1,n3,n2);
	}
	else if(n1<n3 && n3<n2){
		printf("\nEm ordem crescente: %.2f, %.2f, %.2f", n2,n3,n1);
	}
	else if(n2>n1 && n1>n3){
		printf("\nEm ordem crescente: %.2f, %.2f, %.2f", n3,n1,n2);
	}
	else{
		printf("\nEm ordem crescente: %.2f, %.2f, %.2f", n2,n1,n3);
	}
	getch();
}
