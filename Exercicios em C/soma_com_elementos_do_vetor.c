#include <stdio.h>
#include <stdlib.h>
#define TAM 10

//Thiago da Silva Ferreira

/*Declare e inicialize um vetor com dez inteiros quaisquer. Então calcule
e imprima a sua soma*/

int main(void) {
	
	int vetor[TAM]={10,30,44,15,1,23,3,17,19,3};
	int n=TAM, soma=0;
	for (int i=0; i<n ; i++){
		printf("somando %d + %d = %d\n",soma, vetor[i], vetor[i]+soma);
		soma+=vetor[i];	
	}
	return 0;
}
