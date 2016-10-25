#include<stdio.h>
#include<stdlib.h>

void main(){
	int n;
	
	for(n=999; n<=1500; n++){
		if(n%2!=0){
			printf("%d\n", n);
		}
	}
	getch();
}
