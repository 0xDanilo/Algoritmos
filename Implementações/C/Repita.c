/*
 	Exemplo da estrutura "Repita" com o "Do - While" em C
 */

#include <stdio.h>

int main() {
	int numero;

	numero = 0;

	do {
		numero = numero + 1;
		printf("%i \n", numero);
	} while (numero < 10);

	return 0;
}
