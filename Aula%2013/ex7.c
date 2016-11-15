#include <stdio.h>
#include <stdlib.h>

int somador(int a,int b){
	int c=0;
	if(a>b){
		b++;
		for(b; a>b; b++)
			c += b;	
	}else{
		a++;
		for(a;b>a;a++)
			c += a;	
	}
	return c;
}

void main(){
	int num1,num2,result=0;
	printf("Digite o primeiro numero: ");
	scanf("%d",&num1);
	printf("Digite o segundo numero: ");
	scanf("%d",&num2);
	result = somador(num1,num2);
	printf("\n\nA soma dos numero nesse intervalo e de: %d",result);
	
	getch();
}


