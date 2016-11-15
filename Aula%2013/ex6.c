#include <stdio.h>
#include <stdlib.h>

float add(float a,float b){
	return a+b;
}
float sub(float a,float b){
	return a-b;
}
float divi(float a,float b){
	if(b==0)
		return 0;
	else
		return a/b;
}
float mult(float a,float b){
	return a*b;
}

void main(){
	float num1,num2,result=0;
	char op='a';
	while(op!='0'){
		printf("Digite 0 para sair\n");
		printf("Digite a operacao desejada: (+ - / *)\n");
		fflush(stdin);
		scanf("%c",&op);
		if(op == '0'){
			printf("\nPrograma encerrado!");
			sleep(1);
			op = '0';
		}else{
			printf("\nDigite o primeiro numero: ");
			scanf("%f",&num1);
			printf("Digite o segundo numero: ");
			scanf("%f",&num2);
			switch(op){
				case '+':
					result = add(num1,num2);
					printf("O resultado da soma e: %.2f\n\n",result);
					break;
				case '-':
					result = sub(num1,num2);
					printf("O resultado da subtracao e: %.2f\n\n",result);
					break;
				case '/':
					result = divi(num1,num2);
					if(result == 0){
						printf("tentativa de divisao por 0\n\n");
					}else{
						printf("O resultado da divisao e: %.2f\n\n",result);
					}
					break;
				case '*':
					result = mult(num1,num2);
					printf("O resultado da multiplicacao e: %.2f\n\n",result);
					break;
				default:
					printf("Operacao invalida");
			}
		}
	}
}




