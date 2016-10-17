#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>

void main(){
	float a, b, res;
	
	printf("Digite o valor para A: ");
	scanf("%f", &a);
	printf("Digite o valor para B: ");
	scanf("%f", &b);
	
	if(a > 0 && b > 0){
		res = ((pow(a,2))+(2*a*b)+(pow(b,2))+(30*a*30));
		printf("\nResultado do polinomio (2^2+2ab+b^2+cac): %.2f", res);
	}
	else if(a > 0 && b < 0){
		res = ((pow(a,2))+(2*a*b)+(pow(b,2))+(0*a*0));
		printf("\nResultado do polinomio (2^2+2ab+b^2+cac): %.2f", res);
	}
	else if(a < 0 && b > 0){
		res = ((pow(a,2))+(2*a*b)+(pow(b,2))+(-1*a*-1));
		printf("\nResultado do polinomio (2^2+2ab+b^2+cac): %.2f", res);
	}
	
	else{
		res = ((pow(a,2))+(2*a*b)+(pow(b,2))+((a*b*-1)*a*(a*b*-1)));
		printf("\nResultado do polinomio (2^2+2ab+b^2+cac): %.2f", res);
	}
	getch();
}
