#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

void limpaTela(){
	system("cls");
}

int main(){
	setlocale(LC_ALL,"portuguese");
	
	int opcao;
	
	printf("\t\t\t\t\t        Olá\n\n");
	printf("\t\t\tInforme a região do Brasil que gostaria de conhecer!\n\n");
	printf("\t\t\t\t\t|   Menu de Opções  |\n");
	printf("\t\t\t\t\t|===================|\n");
	printf("\t\t\t\t\t|1- Norte           |\n");
	printf("\t\t\t\t\t|2- Nordeste        |\n");
	printf("\t\t\t\t\t|3- Centro-Oeste    |\n");
	printf("\t\t\t\t\t|4- Sudeste         |\n");
	printf("\t\t\t\t\t|5- Sul             |\n");
	printf("\t\t\t\t\t|0- Sair do Programa|\n");
	scanf("%i",&opcao);
    fflush(stdin);
	limpaTela();
	
	

	switch(opcao){
		
		case 1: 
		limpaTela();
		printf("Norte");		
		break;
		
		case 2: 
		limpaTela();
		printf("Nordeste");		
		break;
		
		case 3: 
		limpaTela();
		printf("Centro-Oeste");		
		break;
				
		case 4: 
		limpaTela();
		printf("Sudeste");	
		break;
		
		case 5: 
		limpaTela();
		printf("Sul");
		break;
		
	    default :
		limpaTela();
		printf("Você saiu do Programa");
		break;
	}
	

}
