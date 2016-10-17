#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
#include<string.h>

void main(){
	float tc1, tc2, tf1, tf2;
	
	printf("Digite a temperatura em graus Celsius: ");
	scanf("%f", &tc1);
	tc2 = (9 * tc1 + 160)/5;
	printf("A temperatura em Fahrenheit e: %.2f", tc2);
	
	printf("\n\nDigite a temperatura em Fahrenheit: ");
	scanf("%f", &tf1);
	fflush(stdin);
	tf2 = (5*(tf1 - 32))/9;
	printf("A temperatura em graus Celsius e: %.2f", tf2);
	
	getch();
}
