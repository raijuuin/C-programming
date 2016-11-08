#include<stdio.h>
#include<stdlib.h>

int verifica(int a){
	int resp;
	
	if(a >= 0)
		resp = 1;
	else
		resp = 0;
	return resp;
}

void main(){
	int x;
	
	printf("Digite o numero: ");
	scanf("%d", &x);
	
	x = verifica(x);
	
	if(x == 0)
		printf("\nNumero negativo");
	else
		printf("\nNumero positivo");
		
	getch();
}
