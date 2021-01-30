#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int main(void) {
   	setlocale(LC_ALL,"");
	srand(time(NULL));
	
	int x[10];//criando vetor
	
	//guardando 10 valores aleatorios no vetor
	for(int i=0;i<10;i++){
	  	x[i]=rand() % 10;
	}
	printf("VETOR NÃO ORDENADO\n");
	for(int i=0;i<10;i++){
	  	printf("%d ",x[i]);
	}
	//ordendando o vetor
	int aux;
	for(int i=0;i<10;i++){
	  	for(int i=0;i<9;i++){
	    	if(x[i]>x[i+1]){
	      		aux=x[i];
	      		x[i]=x[i+1];
	      		x[i+1]=aux;
	    	}
	  	}
	}
	printf("\n\nVETOR ORDENADO\n");
		for(int i=0;i<10;i++){
	  	printf("%d ",x[i]);
	}

  	return 0;
}
