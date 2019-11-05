/*	------------------------------------------
	|Universidad Politecnica de Tulancingo    | 
	|Inguebieria en Electronica de Tulancingo |
	|Logica de Programacion                   | 
	|David Islas Alcantara                    | 
	|operaciones basicas                      |
	------------------------------------------
*/

#include <iostream>
#include <stdio.h>
#include<stdlib.h>

int suma(int, int);

int main(){
	int a, b;
	printf("hola al mundo !\n");
	a = 7; b = 6;
	printf("\nEl resultado de suma %d + %d es: %d\n ", a, b, suma(a, b));
}
int suma(int op1, int op2) {
	return op1 + op2;
}
	