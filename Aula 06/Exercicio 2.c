#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>

void main(){
	char ch;
	
	printf("Digite uma letra: ");
	scanf("%s", &ch);
	
	switch(ch){
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
			printf("\nE uma vogal!");
			break;
		default:
			printf("\nE uma consoante!");
			break;
	}
	getch();
}
