#include <stdio.h>
#include <stdlib.h>

//Thiago da Silva Ferreira
/*Crie e teste uma função que receba um caractere como parâmetro e retorne o caractere seguinte.
Considere que só serão recebidos caracteres minúsculos não acentuados.
Teste. Por exemplo:
Se receber:  Deve retornar:
    'b'            'c'
    'm'            'n'
    'z'            'a'*/
char letraSeguinte(char letra){
	if(letra=='z'){
		letra='a';
	}else {
		letra=letra+1;
	}
	return letra;
}

int main(int argc, char *argv[]) {
	char letra;
	printf("Digite uma letra minuscula:");
	fflush(stdin);
	scanf("%c", &letra);
	
	printf("A proxima letra e %c", letraSeguinte(letra));	
	return 0;
}
