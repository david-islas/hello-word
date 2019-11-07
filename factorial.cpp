/*
	------------------------------------------------------------------
	|*Universidad Politecnica de Tulancingo                          |
	|*Ingenieria en Electronica y Telecuminicaciones                 |
	|*Logica de Programacion                                         |
	|*David Islas Alcantara                                          |
	|*programa para encontar el valor factorial de cualquier numero  |
	|*positivo                                                       |
	------------------------------------------------------------------
*/

#include <iostream>
#include <stdlib.h>
#include<stdio.h>
using namespace std;

int u(int n) {
	if (n > 0) {
		return n * u(n - 1);

	}
	else {
		return 1;
	}
}

int main() {

	int ene;
	do {
		printf( "captura un numero entero positivo:");
		scanf_s("%d", &ene);
	} 
	while (ene < 0);
	printf( " el factorial de: %d  es: %d ",ene,u(ene));

	return 0;
}