#include<stdio.h>
#include<stdlib.h>

void main(){
	int x, *p;
	p = &x; // inicializa��o
	
	printf("Digite um valor: ");
	scanf("%d", p);
	
	printf("\n\nValor: %d", *p);
	
	getch();
}



// & -> retorna o endere�o de qualquer vari�vel

// * -> multiplica��o, declara��o dos ponteiros, acesso ao conte�do referenciado (apontado) pelo ponteiro.
