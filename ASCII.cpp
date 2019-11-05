/*	
	------------------------------------------------------------------
	|*Universidad Politecnica de Tulancingo                          |
	|*Ingenieria en Electronica y Telecuminicaciones                 |
	|*Logica de Programacion                                         |
	|*David Islas Alcantara                                          |
	|*programa para listar los simbolos y codigo ascii imprimibles.  |
	------------------------------------------------------------------
*/

#include "pch.h"


int main() {
	int cont = 32;
	unsigned char car = 32;
	while (cont <= 128) {
		printf("el valor %d o el valor hexadecimal %x ", car,car);
		printf("es  el sombolo %c \n", car);
		cont = cont + 1;
		car = car + 1;
	}
	// jerarquia de las operaciones
	printf("no es lo mismo %f que %f\n", 7.0+ 3.0 / 2.0, (7.0 + 3.0) / 2.0);
}
