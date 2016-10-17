#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>

void main(){
	float dia, preco;
	char cor[50];
	
	printf("Insira a quantidade de dias: ");
	scanf("%f", &dia);
	printf("Digite a cor do selo: ");
	scanf("%s", &cor);
	
	if (stricmp(cor, "verde") == 0){
		preco = 5.50 * dia;
		printf("\nO preco a ser pago e de: %.2f", preco);
	}
	
	else if(stricmp(cor, "azul") == 0){
		preco = 5.70 * dia;
		printf("\nO preco a ser pago e de: %.2f", preco);
	}
	
	else if(stricmp(cor, "branco") == 0){
		preco = 4.00 * dia;
		printf("\nO preco a ser pago e de: %.2f", preco);
	}
	
	else if(stricmp(cor, "rosa") == 0){
		preco = 3.50 * dia;
		printf("\nO preco a ser pago e de: %.2f", preco);
	}
	else{
		printf("\nDigite uma cor valida!");
	}
	getch();
}
