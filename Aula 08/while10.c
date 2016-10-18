#include<stdlib.h>
#include<stdio.h>
#include<conio.h>

void main(){
	int fat, n;
	
	printf("Insira um valor para o qual deseja calcular seu fatorial: ");
	scanf("%d", &n);
	 
	if(n>0){
	for(fat = 1; n > 1; n = n - 1)
	fat = fat * n;
	 
	printf("\nFatorial calculado: %d", fat);
	}
	else{
		printf("\nPrograma encerrado!");
	}
	getch();
	
}
