#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
int main(){
	setlocale(LC_ALL, "portuguese");
	
	int movel,cadeira=0,mesapc=0,estanteLivro=0,mesaimpressora=0,estanteCd=0;
	
	
	do{
		
	printf("\n\n**************Loja de móveis de informática**************\n\n");
	printf("Opção de móveis oferecidos :\n");
	printf("\n1- Cadeira \n");
	printf("\n2- Mesa de computador\n");
	printf("\n3- Estante de livros\n");
	printf("\n4- Mesa de impressora\n");
	printf("\n5- Estante de CD\n");
	printf("\n0- Sair do Programa\n");
	printf("\nInforme a opção desejada! ");
	scanf("%d",&movel);
	fflush(stdin);
	system("cls");
	
	
    if(movel!= 1 && movel!=2 && movel!=3 && movel!=4 && movel!=5 && movel!=0){
    	printf("Móvel não encontrado!");
    	printf("Informe uma opção oferecida");
	}
	
	switch(movel){
		
		case 1: 
		cadeira = cadeira+1;	
		break;
		
		case 2: 
		mesapc = mesapc+1;
		break;
		
		case 3:
		estanteLivro=estanteLivro+1;
		break;
		
		case 4:
		mesaimpressora=mesaimpressora+1;		
		break;
		
		case 5: 
		estanteCd=estanteCd+1;	
	     break;
	     
	    case 0: break;
		
	}
	
	}while(movel!=0);
	
	
	printf("Número de Cadeiras compradas: %d \n",cadeira);
	printf("Número de Mesas de computador compradas: %d \n",mesapc);
	printf("Número de Estantes de livros compradas: %d\n",estanteLivro);
	printf("Número de Mesas de impressora compradas: %d\n",mesaimpressora);
	printf("Número de Estantes de CD compradas: %d\n",estanteCd);
	printf("");
	printf("");
	
	return 0;
}
