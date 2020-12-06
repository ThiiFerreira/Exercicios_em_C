#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Thiago da Silva Ferreira
/* Matrizes
1. Dada uma matriz real A com m linhas e n colunas e um vetor real V com n elementos,
determinar o produto de A por V.  */

int main(void){
setlocale(LC_ALL,"");
	int linha=2, coluna=2;
	int matrizA[2][2]={1,2,
                    	3,4}; 
  	int vetorR[]={1,2};
	int produto[2]={0,0};
	
	printf("Matriz A %dX%d\n", linha, coluna);
	for(int i=0; i < linha ; i++){
		for(int j=0; j <coluna; j++)
			printf("%d ", matrizA[i][j]);
		printf("\n");
	}
	printf("\nVetor R\n");
	for(int i=0;i<coluna; i++)
		printf("%d\n", vetorR[i]);
		
	for(int i=0; i < linha ; i++){
		for(int j=0; j <coluna; j++){
			produto[i] += matrizA[i][j]*vetorR[j];
		}
	}
	printf("\nO produto da matrizA x vetorR é:");
	for(int i=0; i<linha; i++)
	printf("\n%d", produto[i]);
  return 0;
}
