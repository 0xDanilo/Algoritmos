

#include <stdio.h>

int main() {

	char nome[3][10] = {}; //Eis a questão.
	float n1 [4] = {}; 
	int contador;
	//Armaxen dados no Array.
	for(int contador = 0; contador < 3; contador++) {
		puts("Informe o nomer do aluno: ");
 		scanf("%10s", nome[contador]); //Eis a outra questão.

 		puts("Informa a nota 1: ");
 		scanf("%f", &n1[contador]);

	}
	for (int contador = 0; contador < 3; ++contador) {
		printf("Conteudo do vetor nome[] = %s, 
		armazenado no local %p da memória RAM \n", nome[contador], &nome[contador]);
		printf("Conteudo do vetor n1[]  = %.2f, 
		armazenado no local %p da memória RAM \n", n1[contador], &n1[contador]);
	}
	return 0;
}