#include <stdio.h>
#include <stdlib.h>

//Thiago da Silva Ferreira

/*2)Preencha um vetor de 5 posições com número de 1 a 9 e exiba na tela a tabuada
desses números.*/

int main(void) {
	int i, numero[]={2,4,6,8,9};
	for(i=0; i<5 ; i++){
		printf("\nTabuada do %d\n",numero[i]);
		for (int cont=1; cont <=10; cont ++){
		printf("%d x %d = %d\n", numero[i],cont,numero[i]*cont);
		}
	}
	return 0;
}
