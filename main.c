#include <stdio.h>
#include <stdlib.h>
#include "LDE.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void mostra_int(void *p){
  printf("%d\n",*(char*)p); // (int*) -> convertendo a direita da express�o para int, nesse caso, a vari�vel p
}


void main(int argc, char *argv[]) {
	int x;
	char s[100];
	scanf("%s",s);
	
	inicializa_INT(&x,&s);
	mostra_INT(&x, mostra_int);
	desaloca_INT(&x);
}
