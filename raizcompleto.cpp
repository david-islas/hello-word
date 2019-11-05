/*
	------------------------------------------------------------------
	|*Universidad Politecnica de Tulancingo                          |
	|*Ingenieria en Electronica y Telecuminicaciones                 |
	|*Logica de Programacion                                         |
	|*David Islas Alcantara                                          |
	|*programa para obtener la raiz cuadrada de cualquier valor por  |
	!*el metodo babilonico                                           |
	------------------------------------------------------------------
*/

#include <iostream>
#include <stdio.h>
#include <stdlib.h>

float absoluto(float valor) {
	float nuevo;
	nuevo = valor;
	if (nuevo < 0)
		nuevo = nuevo*-1;
	return nuevo;
}

int main(){
	float n, a, b, dif;
	const float EXAC = 0.000001;

	printf("captura el valor:");
	scanf_s("%f", & n);
	a = n;
	b = 1;
	dif = absoluto(a - b);
	while (dif > EXAC) {
		a = (a + b) / 2;
		b = n / a;
		dif = abs(a - b);
	}
	printf("la raiz de %f es %f", n, a);
}

