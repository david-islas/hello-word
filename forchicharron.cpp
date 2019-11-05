/*
	------------------------------------------------------------------
	|*Universidad Politecnica de Tulancingo                          |
	|*Ingenieria en Electronica y Telecuminicaciones                 |
	|*Logica de Programacion                                         |
	|*David Islas Alcantara                                          |
	|*programa para hacer fibonacci y formula del chcicharronera     |
	------------------------------------------------------------------
*/


#include "pch.h"

int main(){
	float  a, b, c;
	printf("capturar a: ");
	scanf_s("%f", &a);
	printf("capturar b: ");
	scanf_s("%f", &b);
	printf("capturar c: ");
	scanf_s("%f", &c);
	printf("valores capturados %f, %f, %f\n", a, b, c);
	printf("en las direcciones %p,%p,%p\n", &a, &b, &c);
}
