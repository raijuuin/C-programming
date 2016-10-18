#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void main(){
	int senha;
	
	
	printf("Digite a senha: ");
	scanf("%d", &senha);
	
	while(senha!=1234){
		printf("\nDigite a senha: ");
		scanf("%d", &senha);
	}
	printf("\nSenha correta!");	
	getch();
}
