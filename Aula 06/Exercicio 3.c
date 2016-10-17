#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>

void main(){
	int n;
	
	printf("Digite um numero: ");
	scanf("%d", &n);
	
	switch(n){
		case 0:
		case 2:
		case 4:
		case 6:
		case 8:
		case 10:
			printf("\nNumero par e menor que 10!");
			break;
		case 1:
		case 3:
		case 5:
		case 7:
		case 9:
			printf("\nNumero impar e menor que 10!");
			break;
		default:
			printf("\nNumero fora do intervalo!");
	}
	getch();
}
