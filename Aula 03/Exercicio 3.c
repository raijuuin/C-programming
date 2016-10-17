#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
#include<string.h>

void main(){
	float a, b, c, res1, res2, res3, res4, res5;
	
	printf("Digite o valor de A sendo natural: ");
	scanf("%f", &a);
	printf("\nDigite o valor de B sendo natural: ");
	scanf("%f", &b);
	printf("\nDigite o valor de C sendo natural: ");
	scanf("%f", &c);
	
	res1 = a/b+1;
	res2 = (a-b)/(a+b);
	res3 = (a-(b/c))/(a+(b/c));
	res4 = a-(b/(b+c));
	res5 = (b+c)*a/(a+b);
	
	printf("\nO resultado da primeira conta e: %.2f", res1);
	printf("\n\nO resultado da segunda conta e: %.2f", res2);
	printf("\n\nO resultado da terceira conta e: %.2f", res3);
	printf("\n\nO resultado da quarta conta e: %.2f", res4);
	printf("\n\nO resultado da quinta conta e: %.2f", res5);
	
	getch();
}
