#include<stdio.h>
#include<stdlib.h>

void main(){
	int num, fat, i;
	num = 6;
	
	do{
		for(fat = 1; num > 1; num = num -1)
		fat = fat * num;
		printf("Fatorial: %d", fat);
	}
	while(fat<=num);
	getch();
}
