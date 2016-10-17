#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>

void main(){
	float vmax, vmot, vexc, multa;
	
	printf("Digite a velocidade maxima permitida na avenida: ");
	scanf("%f", &vmax);
	printf("Digite a velocidade do motorista: ");
	scanf("%f", &vmot);
	
	vexc = vmot - vmax;
	if(vmot > vmax){
		if(vexc <= 10){
			printf("\nIra pagar: R$50,00. ");
		}
		else if(vexc > 10 && vexc <= 30){
			printf("\nIra pagar: R$100,00. ");
		}
		else{
			printf("\nIra pagar: R$200,00. ");
		}
	}
	else{
		printf("\n OMotorista nao ultrapassou a velocidade");
	}
	getch();
}
