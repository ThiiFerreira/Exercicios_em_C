#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Thiago da Silva Ferreira

/* 5. Crie uma fun��o que receba um vetor de entrada e outro de sa�da. A fun��o deve
inverter o vetor de entrada, colocando na sa�da os mesmos elementos, mas em ordem
inversa */

void inverso(int vetorEntrada[],int vetorSaida[], int n){
	int j=n-1;
		for(int i=0; i<n ; i++){
		vetorSaida[j]=vetorEntrada[i];
		j--;
	}
}

int main(void) {
setlocale(LC_ALL,"");
	int vetorEntrada[] = {1,2,3,4};
	int vetorSaida[4];
	inverso(vetorEntrada, vetorSaida, 4);
	
	printf("Vetor de entrada:");
	for(int i=0; i<4; i++)
		printf("%d ", vetorEntrada[i]);
	
	printf("\nVetor de saida:");
	for(int i=0; i<4; i++)
		printf("%d ", vetorSaida[i]);
	return 0;
}
