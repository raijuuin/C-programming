#include<stdio.h>
#include<stdlib.h>

void main(){
	int n, soma=0;
	
	for(n=10; n<=20; n++){
		if(n%2==0){
			printf("Valores pares: %d\n", n);
			soma += n;
		}
	}
	printf("\nSoma = %d", soma);
	
	getch();	
}
