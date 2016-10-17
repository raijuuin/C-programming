#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>

void main(){
	int n;
	
	printf("Digite o numero: ");
	scanf("%d", &n);
	
	if(n%2==0){
		printf("\nO numero escolhido e par!!");
	}
	else{
		printf("\nO numero escolhido e impar!!");
	}
	getch();
}
