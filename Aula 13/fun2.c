#include<stdio.h>
#include<stdlib.h>

int soma_dobro(int a, int b); //Protótipo da função

void main(){
	int x, y, resp;
	
	printf("Digite o primeiro numero: ");
	scanf("%d", &x);
	printf("Digite o segundo numero: ");
	scanf("%d", &y);
	
	resp = soma_dobro(x,y);
	printf("\n\nA soma do dobro dos numeros resultou em: %d", resp);
	
	getch();
}

int soma_dobro(int a, int b){
	int soma_dobro;
	
	a = a*2;
	b = b*2;
	soma_dobro = a + b;
	return soma_dobro;
}
