#include <stdio.h>
#include <stdlib.h>
#define PI 3.14159265358979323846

//Thiago da Silva Ferreira
//consgue olha o chat?
int main(int argc, char *argv[]) {
	double num1,num2,raio, result;
	int off = 1, op;//operação
	
	printf("CALCULADORA\n\n");
	do{
		printf("Digite qual vai ser a operacao:\n");
		printf("[1]-Adicao\n[2]-Subtracao\n[3]-Multiplicacao\n[4]-divisao\n[5]-Area do Circulo\n[0]-Sair do Programa\n");
		scanf("%d", &op);
		
		switch (op) {
			case 1:
				printf("Digite o primeiro valor:");
				scanf("%lf", &num1);
				printf("Digite o segundo valor:");
				scanf("%lf", &num2);
				result=num1+num2;
				printf("O resultado da operacao e %g\n", result);
					break;
		
			case 2:
				printf("Digite o primeiro valor:");
				scanf("%lf", &num1);
				printf("Digite o segundo valor:");
				scanf("%lf", &num2);
				result=num1-num2;
				printf("O resultado da operacao e %g\n", result);
					break;
		
			case 3:
				printf("Digite o primeiro valor:");
				scanf("%lf", &num1);
				printf("Digite o segundo valor:");
				scanf("%lf", &num2);
				result=num1*num2;
			int i;
       		for(i = 0; i < num2; i++) {
    			if(i == num2-1) {
            		printf("%g = %g.\n", num1, result);
        		} else {
            	printf("%g + ", num1);
        		}
        	}
				printf("O resultado da operacao e %g\n", result);
					break;
		
			case 4:
				printf("Digite o primeiro valor:");
				scanf("%lf", &num1);
				printf("Digite o segundo valor:");
				scanf("%lf", &num2);
				if (num2==0){
					printf("Nao e possivel fazer divisao por 0\n");
					break;
				} else {
				  result = num1 / num2;
        		}	
				printf("O resultado da operacao e %g\n", result);
				break;
					
			case 5: 
				printf("Digite o valor do raio:");
				scanf("%lf", &raio);
        		raio *= PI * raio;
				//result=PI*(raio*raio); usaria assim para definir o raio mas esse foi o unico lugar que eu vi a possibilidade de usar o "*="	
				
				printf("O resultado da operacao e %g\n", raio);
				break;
			
			case 0:
        		off = 0;
				break;
			
			default:
				printf("Operação invalida");
          	break;
		}
	}while(off!=0);
		printf("Ate breve!");
	return 0;
}
