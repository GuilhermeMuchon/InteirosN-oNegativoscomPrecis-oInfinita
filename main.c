#include <stdio.h>
#include <stdlib.h>
#include "LDE.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main(int argc, char *argv[]) {
	int x;
	char s[1000];
	scanf("%s",s);
	iniclializa_INT(&x,s);
	mostra_INT(x);
	desaloca_INT(&x);
}
