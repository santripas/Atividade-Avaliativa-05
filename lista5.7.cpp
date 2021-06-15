#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

void limpaTela(){
	system("cls");
}

int main(){
setlocale(LC_ALL,"portuguese");
		
	int num[3], aux, indice, troca;
	
	printf("Informe o primeiro número: ");
	scanf("%d", &num[0]);
	fflush(stdin);
	printf("Informe o segundo número: ");
	scanf("%d", &num[1]);
	fflush(stdin);
	printf("Informe o terceiro número: ");
	scanf("%d", &num[2]);
	fflush(stdin);
	

	for(aux=0;aux<3;aux++){
		for(indice=aux+1;indice<3;indice++){
			if(num[aux] > num[indice]){
				troca = num[aux];
				num[aux] = num[indice];
				num[indice] = troca;
			}
		}
	}
	limpaTela();
	printf("Os valores em ordem crescente: %d, %d, %d.", num[0], num[1], num[2]);
	
	return 0;
}
