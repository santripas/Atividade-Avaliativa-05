#include<stdio.h>
#include<stdlib.h> 
#include<locale.h> 

int main(){
	setlocale(LC_ALL, "Portuguese");
    
	int num1, num2, num3, maior;
    

    	printf("Informe o primeiro n�mero:\n");
		scanf("%d", &num1);
		printf("Informe o segundo n�mero:\n");
		scanf("%d", &num2);
		printf("Informe o terceiro n�mero:\n");
		scanf("%d", &num3);
		
		if(num1 >= num2 && num1 >= num3){
		maior = num1;
		}if(num2 >= num1 && num2 >= num3){
	    maior = num2;
		}else if(num3>= num1 && num3 >= num1){
		maior = num3;
		}
	system("cls"); 	
		
	printf("O maior n�mero dos tr�s � : %d", maior);

return 0;
}
