#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

//Thiago da Silva Ferreira
/*4- (Opcional) Faça um programa utilizando ponteiro que identifique um valor que mais se
repete dentro do vetor de 100 posições. Faça o preenchimento do vetor de maneira
automática. Caso não exista dois valores iguais, escreva na tela que todos os números são
diferentes.*/

int cont_vezes(int vetor[],const int n){//recebe o vetor inteiro e o numero do vetor de acordo com o for 
	int cont=0;//variavel de controle
	for(int i=0; i<100; i++)
		if(n==vetor[i]){
			cont++;// adiciona um em cont caso o numero do vetor seja igual a n
		}
	return cont;//retorna o valor acumulado de cont 
}

int main(void) {
	setlocale(LC_ALL,"");
	int vetor[100];//declara um vetor de tamanho 100
	srand(time(NULL));
	for(int i=0; i<100; i++)
  		vetor[i]=rand()%100;//armazena valores aleatorios no vetor 
	
	for(int i=0; i<100; i++)
		printf("%d ", vetor[i]);//imprime os valores na tela
	
	int mcont=0, cont=0, num=0;//declarando variaveis de controle
	
	for(int i=0; i<100; i++){
		cont=cont_vezes(vetor, vetor[i]);//chama funcao e guarda o retorno em cont
		if(cont>mcont){//caso cont seja maior que mcont cai na condição
			mcont=cont;//armazena o valor de cont no mcont
			num=vetor[i];//O numero que esta sendo comparado com os outros e retornou o maior cont e armazenado em num
		}
	}	
		if(mcont>1)
			printf("\nO numero %d aparece %d vezes", num, mcont);//aparece o numero que mais vezes se repetiu
		else
			printf("\nTodos os valores são diferentes");
  return 0;
}
