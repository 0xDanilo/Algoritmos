#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
	char nome[80];
	int tamanho;

	system("clear");

	puts("Digite seu nome completo:");
	scanf("%79s", nome);
	//fgets(nome, 79, stdin);
	fflush(stdin);

	tamanho = strlen(nome);
	printf("O comprimento do nome é: %d\n", tamanho);

	return(0);

}