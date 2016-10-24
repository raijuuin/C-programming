#include<stdio.h>
#include<stdlib.h>

void main(){
	char letra;
	letra ='a';
	
	do{
		printf("O valor ASCII de %c: %d, e seu Hexadecimal: %x\n", letra, letra, letra);
		letra++;
	}
	while(letra<='z');
	getch();
}
