#include<stdio.h>
#include<stdlib.h>

int main (){
	
	char caractere;
	
	printf("Informe o caractere: \n");
	scanf("%c",&caractere);
	
	system("cls");

	printf("Caractere: %c\n", caractere);
	printf("Decimal: %i\n", caractere);
	printf("Octal: %o\n", caractere);
	printf("Hexadecimal: %x", caractere);
	
	
	return 0;
}
