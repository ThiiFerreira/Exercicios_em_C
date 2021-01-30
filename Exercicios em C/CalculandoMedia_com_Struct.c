#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 3 //define a quantidade de alunos 
//Obejetivo desse codigo é armazenar os dados do aluno em uma struct e depois fazer uma comparação entre eles

//criação da struct
struct Aluno{
	int matricula;
	float n1,n2,n3,media;
	char nome[50];
};

//armazenando os dados do aluno
struct Aluno preencheAluno(){
  	struct Aluno a;
	    printf("Digite o nome do aluno: ");
	    scanf("%s", a.nome);
	    printf("Digite a matricula do aluno:");
	    scanf("%d", &a.matricula);
	    printf("Digite a 1° nota do aluno:\n");
	    scanf("%f", &a.n1);
	    printf("Digite a 2° nota do aluno:\n");
	    scanf("%f", &a.n2);
	    printf("Digite a 3° nota do aluno:\n");
	    scanf("%f", &a.n3);
    
    	a.media=(a.n1+a.n2+a.n3)/3;
    return a;
}

//armazenar os dados do alunos em um vetor do tipo struct aluno
void preencheVetor(struct Aluno a[]){
  	for(int i=0; i<TAM; i++){
    	system("cls");
    	printf("Aluno %d\n",i+1);
    	a[i]=preencheAluno();
  	}
}
//impreme os dados do aluno 
void exibealuno(struct Aluno a){
		printf("Aluno: %s\n", a.nome);
		printf("Matricula: %d\n", a.matricula);
		printf("Media: %.2f\n", a.media);
		if(a.media>=6){
    		printf("Aprovado\n\n");
  		}else{
    		printf("Reprovado\n\n");
  		}
}
//impreme o vetor com todos os alunos
void imprimeVetor(struct Aluno a[]){
  	for(int i=0; i<TAM;i++){
    	exibealuno(a[i]);
  	}
}

//impreme o aluno com a maior nota na 1° prova
void maiorNota(struct Aluno a[]){
  	float maiorNota=0;
  	int aux=0;
  	for(int i=0; i<TAM; i++){
    	if(a[i].n1>maiorNota){
      		maiorNota=a[i].n1;
      		aux=i;
    	}
  	}
  	printf("\nA maior nota na 1° prova foi %.2f do aluno %s\n\n", maiorNota, a[aux].nome);
}

//impreme o aluno com a maior e menor media
void Media(struct Aluno a[]){
  	float maiorMedia=0;
  	float menorMedia=11;
  	int aux, ax;

  	for(int i=0; i<TAM;i++){
   		if(a[i].media>maiorMedia){
      	maiorMedia=a[i].media;
      	aux=i;
    	}
    	if(a[i].media<menorMedia){
      		menorMedia=a[i].media;
      		ax=i;
		}
  	}
  	printf("A maior media foi %.2f do aluno %s\n\n", maiorMedia,a[aux].nome);
  
  	printf("A menor media foi %.2f do aluno %s\n\n", menorMedia,a[ax].nome);
}

int main(void) {
  	setlocale(LC_ALL,"");
	struct Aluno alunos[TAM];
  	preencheVetor(alunos);
  	system("cls");
  	maiorNota(alunos);
  	Media(alunos);
  	imprimeVetor(alunos);
  	return 0;
}
