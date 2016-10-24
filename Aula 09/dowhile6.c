#include<stdio.h>
#include<stdlib.h>

void main(){
	int num, i;
	i = 0;
	num = 100;
	
	do{
		if(num%2==0){
			printf("Valor: %d\n", num);
		}
		num++;
		i++;
	}
	while(i<=100);
	getch();
}
