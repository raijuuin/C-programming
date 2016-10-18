#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void main(){
	int n, i;
	
	while(n>0){
		printf("Digite um numero: ");
		scanf("%d", &n);
		i++;
	}
	printf("\nForam digitados %d numeros!", i);
	getch();
}
