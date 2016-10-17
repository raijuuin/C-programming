#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>

void main(){
	float c, l, a, vol;
	
	printf("Voce esta no programa para calcular o volume de uma caixa retangular!\n");
	printf("Digite o comprimento da caixa: ");
	scanf("%f", &c);
	printf("Digite a largura da caixa: ");
	scanf("%f", &l);
	printf("Digite a altura da caixa: ");
	scanf("%f", &a);
	
	vol=c*l*a;
	printf("O volume da caixa e: %.2f", vol);
	getch();
}
