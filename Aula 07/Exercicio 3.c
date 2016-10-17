#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<time.h>

void main(){
	int n1,n2,n3, a, b, c, i;
	
	printf("Digite o primeiro numero: ");
	scanf("%d", &n1);
	printf("Digite o segundo numero: ");
	scanf("%d", &n2);
	printf("Digite o terceiro numero: ");
	scanf("%d", &n3);
	
	srand(time(NULL));
	a = rand()%10;
	b = rand()%10;
	c = rand()%10;

    printf("%d %d %d\n",a,b,c);
    if(n1==a){
    	i++;
	}
	if(n2==b){
    	i++;
	}
	if(n3==c){
    	i++;
	}
	printf("\nVoce acertou %d numeros",i);
	
	getch();
}
