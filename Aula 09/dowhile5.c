#include<stdio.h>
#include<stdlib.h>

void main(){
	int fat=6, i=5;
	
	do{
		fat = fat * i;
		printf("\nFatorial de 6: %d", fat);
		i--;
	}
	while(i>1);
	
	getch();
}
