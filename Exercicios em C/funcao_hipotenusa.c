#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Thiago da Silva Ferreira x
/*1 - Crie uma função que calcule a diagonal de um retângulo. Use números em ponto flutuante (double).
Crie também um programa que teste essa função, imprimindo o resultado. */

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
