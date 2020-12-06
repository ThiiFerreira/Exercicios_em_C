#include <stdio.h>
#include <stdlib.h>

//Thiago da Silva Ferreira
/*Crie e teste uma fun��o que receba um caractere como par�metro e retorne o caractere seguinte.
Considere que s� ser�o recebidos caracteres min�sculos n�o acentuados.
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
