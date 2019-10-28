/*
 ============================================================================
 Name        : ProjetoLP.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void contar(int max) {
	int i;

	printf("Vou contar ate %d\n",max);
	for(i=0;i<max;i++)
		 printf("valor = %d\n",i);
}

int main(void) {
	puts("!!!Hello World!!!"); /* prints !!!Hello World!!! */
	contar(100);
	return EXIT_SUCCESS;
}
