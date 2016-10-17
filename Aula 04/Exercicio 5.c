#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>

void main(){
	float n1, n2, res;
	char op;
	
	printf("Digite o primeiro numero: ");
	scanf("%f", &n1);
	printf("Digite o segundo numero: ");
	scanf("%f", &n2);
	printf("Digite a operacao a ser realizada (+, -, *, /): ");
	scanf("%s", &op);
	
	if(op == '+'){
		res = n1+n2;
		printf("\nO resultado e: %.2f: ", res);
	}
	
	else if(op == '-'){
		res = n1-n2;
		printf("\nO resultado e: %.2f: ", res);
	}
	
	else if(op == '*'){
		res = n1*n2;
		printf("\nO resultado e: %.2f: ", res);
	}
	
	else if(op == '/'){
		res = n1/n2;
		printf("\nO resultado e: %.2f: ", res);
	}
	else{
		printf("\nDigite uma operacao valida!");
	}
	getch();
}
