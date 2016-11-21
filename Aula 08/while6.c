#include<stdio.h>
#include<stdlib.h>

void main(){
	int fat=5, i;
	
	while(i<5){
		fat = fat * i;
		printf("fatorial de 5: %d\n", fat);
		i++;
	}
	
	getch();
}
