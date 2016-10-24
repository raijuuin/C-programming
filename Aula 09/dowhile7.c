#include<stdio.h>
#include<stdlib.h>

void main(){
	int num, i, res;
	i=1;
	
	printf("Digite um numero:");
	scanf("%d", &num);
	
	do{
		res = num * i;
		printf("%d x %d = %d\n", num, i, res);
		i++;
	}
	while(i<=10);
	getch();
}
