#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Thiago da Silva Ferreira x
/*1 - Crie uma fun��o que calcule a diagonal de um ret�ngulo. Use n�meros em ponto flutuante (double).
Crie tamb�m um programa que teste essa fun��o, imprimindo o resultado. */

double hipotenusa(double a, double b){
	double diagonal=sqrt(a*a + b*b);
	return diagonal;
}

	int main(int argc, char *argv[]) {
	
	double a=3,b=4;
	
	printf("A diagonal e %g\n",hipotenusa(a,b));
	printf("A diagonal e %g\n",hipotenusa(3.5,9.2));
	return 0;
}
