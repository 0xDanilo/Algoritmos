#include <stdio.h>

int numero;
int resultado;

//Função que calcula e imprime a sequência de Fibonnacci:

int Fibonacci(int quantidade) {
	int resultado, primeiroNumero, segundoNumero;

	primeiroNumero = 0;
	segundoNumero = 1;

	for (int i = 0; i < quantidade; ++i)
	{
		resultado = primeiroNumero + segundoNumero;
		segundoNumero = primeiroNumero;
		primeiroNumero = resultado;
		printf("%i ", resultado);
	}
	return resultado;

}


int main() {
	puts("Digite um numero para a serie de Fibonacci:");
	scanf("%2i", &numero);
	printf("A sequencia para os %i primeiros numeros de Fibonacci é: \n", numero);
	Fibonacci(numero);

	return 0;

}