#include<stdlib.h>
#include<locale.h>
#include<stdio.h>
#include<conio.h>
#include<ctype.h>
int main(){
	setlocale(LC_ALL,"portuguese"); 

	char sexo;
	
	do{
		printf("Informe o seu sexo: \n");
		printf("(F) Feminino\n");
		printf("(M) Masculino\n");
		sexo = getche();
		sexo = toupper(sexo);
	}while(sexo != 'M' and sexo != 'F');
	
    system("cls");
	sexo=='M' ? printf("SEXO MASCULINO!"):printf("SEXO FEMININO!");
	
	return 0;
}
