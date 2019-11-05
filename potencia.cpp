/*
	------------------------------------------------------------------
	|*Universidad Politecnica de Tulancingo                          |
	|*Ingenieria en Electronica y Telecuminicaciones                 |
	|*Logica de Programacion                                         |
	|*David Islas Alcantara                                          |
	|*programa para obtener la potencia de un numero                 |
	------------------------------------------------------------------
*/

#include <iostream>
#include <stdlib.h>
#include <stdio.h>

float x, pot;
int n, signo;

int main()
{
	printf("captura valor:"); scanf_s("%f", &x);
	printf("captura valor:"); scanf_s("%d", &n);
	if (n < 0) {
		signo = 1;
		n = n * -1;
	}
	else
		signo = 0;
	pot = 1.0;
	while(n > 0) {
		pot = pot * x;
		n = n - 1;
	}
	if (signo)
		pot = 1 / pot;
	printf("la potencia de %f es %f", x, pot);
}

