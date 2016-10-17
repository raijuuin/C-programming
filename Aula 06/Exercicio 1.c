#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>

void main(){
	int mes;
	
	printf("Digite o mes: ");
	scanf("%d", &mes);
	
	switch(mes){
		case 1:
			printf("\n Janeiro");
			break;
			
		case 2:
			printf("\n Fevereiro");
			break;
			
		case 3:
			printf("\nMarco");
			break;
			
		case 4:
			printf("\nAbril");
			break;
			
		case 5:
			printf("\nMaio");
			break;
			
		case 6:
			printf("\nJunho");
			break;
			
		case 7:
			printf("\nJulho");
			break;
			
		case 8:
			printf("\nAgosto");
			break;
			
		case 9:
			printf("\nSetembro");
			break;
			
		case 10:
			printf("\nOutubro");
			break;
			
		case 11:
			printf("\nNovembro");
			break;
			
		case 12:
			printf("\nDezembro");
			break;
			
		default:
			printf("\nDigite um mes valido!");
			break;
	}
	getch();
}
