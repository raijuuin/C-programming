#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>

void main(){
	int n1, n2, n3, n4, res;
	
	printf("Digite 4 numeros separados por espaco (Ex: 1 2 3 4): ");
	scanf("%d %d %d %d",&n1,&n2,&n3,&n4);
	
	if(n1%2==0){
		res += n1;
	}
	if(n2%2==0){
		res += n2;
	}
	if(n3%2==0){
		res += n3;
	}
	if(n4%2==0){
		res += n4;
	}
	printf("\nA soma dos numeros pares e: %d",res);
	getch();
}
