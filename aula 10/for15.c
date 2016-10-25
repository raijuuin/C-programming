#include<stdio.h>
#include<stdlib.h>

void main(){
	int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11, n12, n13, n14, n15, soma, media;
	
	printf("Digite 15 numeros separados por espaco: (Ex: 1 2 3...) ");
	scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10, &n11, &n12, &n13, &n14, &n15);
	
	soma = n1+n2+n3+n4+n5+n6+n7+n8+n9+n10+n11+n12+n13+n14+n15;
	media= (n1+n2+n3+n4+n5+n6+n7+n8+n9+n10+n11+n12+n13+n14+n15)/15;
	
	printf("\nSoma: %d", soma);
	printf("\nMedia: %d", media);
	
	getch();
}
