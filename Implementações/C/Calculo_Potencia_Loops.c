
/*
    Repetição: Enquanto e Para
*/

#include <stdio.h>

int main()
{
	int resultado1, resultado2, contador;

	resultado1 = 1;
	resultado2 = 1;
	contador = 0;

//Realiza o calculo utilizando um loop 'Enquanto'.
	while (contador < 8) {
		resultado1 = resultado1 * 2;
		contador = contador + 1;
	}

	printf("2 elevado a 8 = %i. \n", resultado1);

//Realiza o cálculo utilizando um loop 'Para'.

	for (int i = 0; i < 8; i++)
	{
		resultado2 = resultado2 * 2;
	}

	printf("2 elevado a 8 = %i.\n", resultado2 );

	return 0;
}