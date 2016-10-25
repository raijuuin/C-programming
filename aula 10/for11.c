#include<stdio.h>
#include<stdlib.h>

void main(){
	int num, i, res;
	i=1;
	
	printf("Digite um numero:");
	scanf("%d", &num);
	
	for(res=0; i<=10; i++){
	res = num * i;
	printf("%d x %d = %d\n", num, i, res);
	}
	
	getch();
}
