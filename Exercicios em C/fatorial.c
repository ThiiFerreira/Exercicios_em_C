#include <stdio.h>
#include <stdlib.h>

//Thiago da Silva Ferreira
//Calcular fatorial

int main(void) {
	
	int num,cont=1, fat=1;
	
	printf("Digite um numero para calcular o fatorial:");
	scanf("%d", &num);
		
	for(cont=1; cont<=num; cont++){
		fat=fat*cont;
	}	
	printf("Fatorial de %d e %d", num , fat);	
	return 0;
}
