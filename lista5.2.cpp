#include<stdio.h>
#include<stdlib.h> 
#include<locale.h> 

int main(){
	setlocale(LC_ALL, "Portuguese");
    
	int num1, num2, num3, maior;
    

    	printf("Informe o primeiro número:\n");
		scanf("%d", &num1);
		printf("Informe o segundo número:\n");
		scanf("%d", &num2);
		printf("Informe o terceiro número:\n");
		scanf("%d", &num3);
		
		if(num1 >= num2 && num1 >= num3){
		maior = num1;
		}if(num2 >= num1 && num2 >= num3){
	    maior = num2;
		}else if(num3>= num1 && num3 >= num1){
		maior = num3;
		}
	system("cls"); 	
		
	printf("O maior número dos três é : %d", maior);

return 0;
}
