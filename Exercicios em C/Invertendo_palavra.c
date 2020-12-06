#include <stdio.h>
#include <stdlib.h>

//Thiago da Silva Ferreira

/* Declare um vetor de caracteres e inicialize com a string "algoritmos".
Então conte quantos caracteres tem esta string e imprima.*/

int main(void){
	char str[]= "algoritimo";
	int i;
	for ( i =0; str[i];i++){
		printf("%c", str[i]);
	}
	printf("\n");
	printf("\nEssa palavra tem %d caracteres\n", i);
	printf("palavra invertida\n\n");
	for (--i; i>=0; --i){
	printf("%c ", str[i]);
	}
	return 0;
}
