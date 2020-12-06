#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

//Thiago da Silva Ferreira

/*1) Determinar o maior e o menor valor de um vetor inteiro de 15 posições. */

int main(void) {
	int numero[]={40,15,10,7,12,5,32,16,43,23,14,55,11,18,21};
	int i, nmaior=INT_MIN ,nmenor=INT_MAX;
	int tam = sizeof(numero)/sizeof(int);
	
	for (i=0; i<tam ; i++){
		printf("numero do indice [%d] = %d\n",i, numero[i]);
		if(numero[i]>nmaior)
			nmaior=numero[i];

		if (numero[i]<nmenor)
			nmenor=numero[i];
	}
	printf("\no maior numero e %d\n", nmaior);
	printf("o menor numero e %d\n", nmenor);
	return 0;
}
