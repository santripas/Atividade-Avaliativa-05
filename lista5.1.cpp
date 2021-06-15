#include <stdio.h>
#include <locale.h> 
int main(){
	setlocale(LC_ALL, "portuguese");

	float resultado=0,percentual;

	

	printf("Informe o valor percentual a ser calculado: \n");
	scanf("%f", &percentual);
	
	resultado = (percentual * 555) / 100;
	
	printf("%.0f%%  de 555 = %.2f", percentual, resultado);
}
