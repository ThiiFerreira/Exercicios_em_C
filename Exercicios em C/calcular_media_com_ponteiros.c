#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Thiago da Silva Ferreira
/* 3. Crie uma fun��o que retorne a m�dia dos valores de um vetor double. */

double calcularmedia(double vmedia[], int n){
	double *p=vmedia; // declara um ponteiro apontando para vmedia
	double soma=0, cont=0; 
	
	for(int i=0; i<n ; i++){
		soma+=*p; // vai somando os valores de *p e guardando em soma
		p++; // vai mudando a posi��o de p
		cont++;	// vai contando quantas e vez rodou o loop 
	}
	
	double media=soma/n;// pega a soma e divide pelo cont
	return media;
}
int main(void) {
	setlocale(LC_ALL, "");
	
	double vmedia[]={10,20,4,6,10,6,8,1,6,7};
	
	double n = sizeof(vmedia)/sizeof(double);// indentifica o tamanho do vetor e guarda em n
	
	printf("A media dos elementos dos vetor � %.2f",calcularmedia(vmedia,n));
	return 0;
}
