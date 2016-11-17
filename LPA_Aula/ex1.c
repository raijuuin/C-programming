#include<stdio.h>
#include<stdlib.h>

void main(){
	int x, *p;
	p = &x; // inicialização
	
	printf("Digite um valor: ");
	scanf("%d", p);
	
	printf("\n\nValor: %d", *p);
	
	getch();
}



// & -> retorna o endereço de qualquer variável

// * -> multiplicação, declaração dos ponteiros, acesso ao conteúdo referenciado (apontado) pelo ponteiro.
