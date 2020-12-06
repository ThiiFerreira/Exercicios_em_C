#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Thiago da Silva Ferreira

/*3. Crie uma função que receba um vetor e seu tamanho e retorne a soma dos números
pares deste vetor*/

int somapar(const int num[], int n){
	int soma=0;
		for (int i=0; i < n ; i++){
			if(num[i]%2==0)
				soma+=num[i];
		}
	return soma;	
}
int main(void){
	setlocale(LC_ALL, "");
	int num []={1,2,3,4,5,6,7,8,9,10};
	
	printf("Segue a sequencida de Números:\n");
	for(int i=0; i<10;i++)
	printf("%d, ", num[i]);
	printf("\nA soma dos numeros pares é %d", somapar(num,10));	
	
	return 0;
}
