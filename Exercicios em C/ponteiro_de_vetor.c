#include <stdio.h>
#include <stdlib.h>

//Thiago da Silva Ferreira
/* 1. Usando ponteiros, codifique a função carrega(v,n), que preenche um vetor v com n
valores lidos do teclado. A leitura dos n valores devem ser realizadas dentro da
função. Após o término da função escreva no main o vetor com os n valores lidos.*/

void carrega( int vetor[], int n){
	int valor=0; // varialvel para amarzenar o valor digitado pelo usuario
	int *p=vetor;// define um ponteiro para o vetor
	for(int i=0; i<n; i++){//enquanto i for menor que o numero de valores recebido na funcao
		printf("Digite um valor:");
		scanf("%d", &valor);
		*p=valor; //adiciona o valor lido no ponteiro que aponta para a primeira posição do vetor
		p++;// adiciona 1 em ponteiro para percorrer o vetor 
	}	
}

int main(void) {
	int n_valores=10;//numero de valores
	int vetor[n_valores]; // define o vetor com o tamanho de n_valores
	carrega(vetor,n_valores);//chama a funcao mandando o vetor e n_valores
	
	system("cls");
	printf("Valores lido na funcao:\n");
	for(int i=0; i< n_valores; i++)
		printf("valor %d : %d\n",i+1, vetor[i]);// imprime os valores lidos na funcao 
	
	return 0;
}
