#include<stdio.h>
#include<stdlib.h>

void main(){
	int tentativas;
	char resp, secreto;
	
	do{
		secreto = rand()%26 + 'a';
		tentativas = 1;
		printf("\nDigite uma letra entre 'a' e 'z': \n");
		while((resp=getch())!=secreto){
			printf("%c e incorreto. Tente novamente. \n", resp);
			tentativas++;
		}
		printf("%c e correto!! \n", resp);
		printf("Voce acertou em %d tentativas.\n", tentativas);
		printf("\nQuer jogar novamente? (s/n): ");
	}
	while(getche()=='s');
	printf("\nAte logo!\n");
	getch();
}
