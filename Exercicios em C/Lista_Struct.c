#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*Lista duplamente encadeada com ponteiros para o primeiro e ultimo elemento*/

//definindo os dados da lista
struct lista {
  	int dado;
  	struct lista *prox;
  	struct lista *ant;
};
typedef struct lista Lista; //colocando um apelido na struct lista de Lista

Lista* inicializa(void){
  	return NULL;
}

//inserindo elementos na lista
Lista* insere(Lista *l,Lista **ult, int valor){
  	Lista* novo=(Lista*)malloc(sizeof(Lista));
  	if(novo==NULL){
    	printf("Erro malloc\n");
  	}
    if(l==NULL){
      	novo->dado=valor;
      	novo->prox=NULL;
      	novo->ant=NULL;
  	}else{
	    novo->dado=valor;
	    novo->ant=NULL;
	    l->ant=novo;
	    novo->prox=l;
  	}
  	if(*ult==NULL)
    	*ult=novo;
  	return novo;
}
//impremi a lista
void impreme(Lista* l){
  	Lista* aux;
  	for(aux=l;aux!=NULL; aux=aux->prox){
    	printf("Valor %d\n", aux->dado);
  	}
}
int main(void){
  	Lista *l, *ult;
  	l=inicializa();
  	ult=inicializa();
  	srand(time(NULL));
  	
  	//inserindo valores aleatorio na lista
	for(int i=0;i<10;i++){
    	l=insere(l,&ult,rand()%100);
  	}
  	impreme(l);
  	printf("\nanterior do primeiro elemento: %p\n",l->ant);//controle dos ponteiros
  	printf("valor do primeiro elemento: %d\n",l->dado);
  	printf("Proximo do primeiro elemento: %d\n",l->prox->dado);//controle dos ponteiros
  	printf("-----------------------------------------\n");
  	printf("Anterior do ultimo elemento: %d\n",ult->ant->dado);//controle dos ponteiros
  	printf("valor do ultimo elemento: %d\n",ult->dado);
  	printf("Proximo do ultimo: %p\n",ult->prox);//controle dos ponteiros
	return 0;
}
