#include<stdio.h>
#include<stdlib.h>

void main(){
	int n;
	
	for(n=0; n<=150; n++){
		if(n%5==0){
			printf("%d\n", n);
		}
	}
	
	getch();
}
