#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void main(){
	int n, i;
	
	while(n>0){
		printf("Digite um numero: ");
		scanf("%d", &n);
		if(n>=100 && n<=200){
			i++;
		}
	}
	printf("\nForam digitados %d numeros entre 100 e 200!", i);
	getch();
}
