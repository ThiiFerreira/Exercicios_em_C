#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
//conceito de fila é sempre que um chegar vai pra final e sempre que um sair é o primeiro da fila que sai

struct fila{
  	int dado;
  	struct fila *prox;
};
typedef struct fila Fila;
Fila *fim=0;
Fila* insere_fim(Fila* f,int valor){
  	Fila* novo=(Fila*)malloc(sizeof(Fila));
  	novo->dado=valor;
  	novo->prox=NULL;
  	if(f==NULL){
    	fim=novo;
    	return novo;
  	}else{
    	fim->prox=novo;
    	fim=novo;
    	return f;
  	}
}
Fila* remover_inicio(Fila* f){
  	if(f==NULL){
    	printf("\nErro - A Fila esta vazia\n\n");
  	}else{
    	printf("\n%d foi removido da Fila\n\n", f->dado);
		Fila* aux=(Fila*)malloc(sizeof(Fila));
    	aux=f;
    	f=f->prox;
    	free(aux);
    }
	system("pause");
	return f;
}
void impreme(Fila* f){
  	Fila* aux;
  	if(f==NULL){
    	printf("\nA Fila esta vazia\n\n");
  	}else{
   		printf("\n***Fila***\n");
    	for(aux=f;aux!=NULL; aux=aux->prox){
      		printf("Valor %d\n", aux->dado);
    	}
    	printf("\n");
  	}
}
int main(void) {
  	setlocale(LC_ALL,"");
	srand(time(NULL));
  	
 	Fila *f=0;
  	//Fila *fim=0;
  	for(int i=0;i<10;i++){
    	f=insere_fim(f,rand()%100);
  	}
	printf("Fila criada aleatoriamente\n");
  	impreme(f);
	int op=0;  
  	system("pause");
	do{
  		system("cls");
  		impreme(f);
  		printf("Escolha uma opcao:\n");
  		printf("[1]-Inserir elemento \n");
  		printf("[2]-Remover elemento\n");
    	printf("[3]-Finalizar Fila\n");
		scanf("%d", &op);
    	switch(op){
      	int valor;
      	case 1:
        	printf("Digite o valor pra ser inserido: ");
        	scanf("%d", &valor);
        	f=insere_fim(f,valor);
      	break;
      	case 2:
        	f=remover_inicio(f);
      	break;
      	case 3:
      		op=3;
		break;
		default:
        printf("Opcao nao encontrada\n");
     	break;
    }
    
  }while(op!=3);
  system("cls");
  printf("A fila ficou assim:\n");
  impreme(f);
  printf("Até breve!!!\n");
  return 0;
}
