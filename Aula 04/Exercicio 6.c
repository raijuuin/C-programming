#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>

void main(){
	float salario, res;
	
	printf("Digite seu salario: ");
	scanf("%f", &salario);
	
	if (salario < 500){
		res = salario + ((salario/100)*15);
		printf("Seu novo salario e de: %.2f", res);
	}
	
	else if(salario >= 500 && salario <= 1000){
		res = salario + ((salario/100)*10);
		printf("Seu novo salario e de: %.2f", res);
	}
	
	else{
		res = salario + ((salario/100)*5);
		printf("Seu novo salario e de: %.2f", res);
	}
	getch();
}
