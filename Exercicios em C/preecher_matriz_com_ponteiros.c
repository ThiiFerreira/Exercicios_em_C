#include <stdio.h>
#include <stdlib.h>

//Thiago da Silva Ferreira
/* 4. Escreva um programa que declare uma matriz 10x10 de inteiros. Você deve
inicializar a matriz com zeros usando ponteiros para endereçar seus elementos.
Preencha depois a matriz com os números de 1 a 100, também usando ponteiros. */
int main(void) {
	
	int matriz[10][10];//declaração da matriz 10x10
	int *p=&(matriz[0][0]);//iniciando um ponteiro apontando pra matriz
	
	for(int i=0; i<10; i++){//adiciona o 0 em cada parte da matriz que o ponteiro aponta
		for(int j=0; j<10; j++){
			*p=0;
			p++;	
		}
	}
	
	printf("Matriz nula:\n\n");
	for(int i=0; i<10; i++){//imprime a matriz na tela 
		for(int j=0; j<10; j++){
			printf("%d ",matriz[i][j]);
		}
		printf("\n");
	}
	
	
	p=&(matriz[0][0]);
	int num=1;
	for(int i=0; i<10; i++){//adiciona 1 a 100 na matriz 
		for(int j=0; j<10; j++){
			*p=num;
			num++;
			p++;	
		}
	}
	printf("\nMatriz com os numeros de 1 a 100\n\n");
	
	for(int i=0; i<10; i++){//imprime a matriz na tela
		for(int j=0; j<10; j++){
		if(matriz[i][j]<10)
			printf(" %d ",matriz[i][j]);
		else
			printf("%d ",matriz[i][j]);
		}
		printf("\n");
	}

	return 0;
}
