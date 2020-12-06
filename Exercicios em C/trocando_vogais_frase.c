#include <stdio.h>
#include <stdlib.h>

//Thiago da Silva Ferreira


void procedimento (char frase[]){
  	char *p=frase;
		for(int i=0; i<strlen(frase); i++){
      		switch (p[i]){
      			case 'a':
      				p[i]='u';
      			break;
      			case 'e':
      				p[i]='o';
      			break;
      			case 'i':
      				p[i]='e';
      			break;
      			case 'o':
      				p[i]='a';
      			break;
      			case 'u':
      				p[i]='i';
      			break;
			  }
    	}

}
void impreme(char frase[]){
	printf("%s", frase);
}
int main(void) {
  	char frase[100];
 	printf("Digite uma frase:\n");
  	gets(frase);

  	procedimento(frase);
	impreme(frase);

  return 0;
}
