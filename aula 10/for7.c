#include<stdio.h>
#include<stdlib.h>

void main(){
	int n, fat;
	n = 6;
	
	for(fat=1; n>1; n--)
		fat = fat*n;
		printf("Fatorial = %d\n", fat);
		
	getch();
}
