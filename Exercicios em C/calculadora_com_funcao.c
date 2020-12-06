#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define PI 3.14159265358979323846

//Thiago da Silva Ferreira

double soma(double n1, double n2){
	double soma=n1+n2;
	return soma;	
}
double subtracao(double n1, double n2){
	double sub=n1-n2;
	return sub;	
}
double multiplicacao(double n1, double n2){
	double multi=n1*n2;
	return multi;	
}
double divisao(double n1, double n2){
	double divisao=n1/n2;
	return divisao;	
}
double areaC(double raio){
	double area=raio*raio*PI;
	return area;
}
//6: Outro número qualquer: Operação não encontrada: assinatura: opcaoinvalida().
int opcaoinvalida(int op){
	switch(op){
		case 1: case 2: case 3: case 4: case 5: case 0:
			return 0;
		break ;
		default:
			return 1;
		break;
	}
}

int main(void) {
setlocale( LC_ALL, "");	
	int op, off=1;
	do{
		printf("CALCULADORA\n");
		
		double n1,n2, raio;
		printf("[1]-Adicao\n[2]-Subtracao\n[3]-Multiplicacao\n[4]-divisao\n[5]-Area do Circulo\n[0]-Sair do Programa\n");
		scanf("%d", &op);
		
		switch (op){
			case 1:case 2:case 3:case 4:
				printf("Digite o primeiro valor:");
				scanf("%lf", &n1);
				printf("Digite o segundo valor:");
				scanf("%lf", &n2);
			break;
			case 5:
				printf("Digite o valor do raio do circulo:");
				scanf("%lf", &raio);
			break;
		}
		switch (op){	
			
			case 1:
				printf("\nO resultado é %g\n\n", soma(n1,n2));	
			break;
			
			case 2:
				printf("\nO resultado e %g\n\n", subtracao(n1,n2));
			break;
			
			case 3:
				printf("\n");
	       		for(int i = 0; i < n2; i++) {
					i==n2-1 ? printf("%g=%g\n",n1, multiplicacao(n1,n2)) : printf("%g+", n1);	    		
	    		}
				printf("\nO resultado da operacao é %g\n\n", multiplicacao(n1,n2));
			break;				
		
			case 4:
				n2==0 ? printf("\nNao é possivel fazer divisao por 0\n\n") : printf("\nO resultado é %g\n\n", divisao(n1,n2));
			break;
			
			case 5:
				printf("\nO valor da área é %g\n\n", areaC(raio));
			break;
			
			case 0:
				off=0;
			break;
			
			default :
				if(opcaoinvalida(op)==1)
					printf("\nOPÇÃO NÃO ENCONTRADA\n\n");
			break;
		}
	}while(off!=0);
		printf("Até Breve!\n");
	return 0;
}
