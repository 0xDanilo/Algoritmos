

#include <stdio.h>

int maiorNumero (int a, int b){
	if (a > b)
		return a;
	return b;
}

int main () {
	int num1, num2, resultado;

	puts("Digite um numero: ");
	scanf("%i", &num1);
	puts("Digite outro numero: ");
	scanf("%i", &num2);

	resultado = maiorNumero(num1, num2);

	printf("%i é o maior dos dois números!!\n", resultado);

	//Mostra o local da memória onde as variavéis foram armazenadas.
	printf("O primeiro numero está no local %p da memória. \n", &num1);
	printf("O segundo numero está no local %p da memória. \n", &num2);
	printf("O resultado está no local %p da memória.\n", &resultado);

	return 0;
}