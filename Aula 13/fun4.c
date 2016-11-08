#include<stdio.h>
#include<stdlib.h>

long fatorial(int n){
	if(n==1)
		return 1;
	else
		printf("%d\n",&n);
		printf("%d\n", n);
		getch();
		return n*fatorial(n-1);
}

void main(){
	int n=0;
	
	while(n >= 0){
		printf("\nDigite um numero ou negativo para terminar: ");
		scanf("%d", &n);
		
		if(n < 0)
			break;
			
		printf("\nO fatorial de %d e %d. \n", n, fatorial(n));
	}
	
	getch();
}
