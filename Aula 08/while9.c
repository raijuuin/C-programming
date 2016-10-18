#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>

void main(){
	char nome[50], sex[2];
	int m=0, f=0;
	
	while(stricmp(nome,"fim")!=0){
		printf("\nDigite o nome da pessoa: ");
		gets(nome);
		printf("Digite o sexo da pessoa: ");
		gets(sex);
		if(stricmp(sex,"m")==0){
			m++;
		}
		else if(stricmp(sex,"f")==0){
			f++;
		}
		else{
			printf("\nSexo invalido!");
		}
	}
	printf("\n%d pessoas do sexo masculino e %d pessoas do sexo feminino", m, f);
	getch();
}
