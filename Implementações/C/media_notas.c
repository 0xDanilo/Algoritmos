/*
		Média das Notas
 */

#include <stdio.h>

int main() {
char nome[3][10] = {}; //Eis a questão.
float n1 [4] = {}; 
float n2 [4] = {}; 
float n3 [4] = {}; 
float n4 [4] = {}; 
float media [4] = {};
int contador;

 for (int contador = 0; contador < 3; contador++)
 {
 	puts("Informe o nomer do aluno: ");
 	scanf("%10s", nome[contador]); //Eis a outra questão.

 	puts("Informa a nota 1: ");
 	scanf("%f", &n1[contador]);

 	puts("Informa a nota 2: ");
 	scanf("%f", &n2[contador]);

 	puts("Informa a nota 3: ");
 	scanf("%f", &n3[contador]);
 	
 	puts("Informa a nota 4: ");
 	scanf("%f", &n4[contador]);

 	media[contador] = (n1[contador] + n2[contador] + n3[contador] + n4[contador])/4;
 	
 }

 for (int contador = 0; contador < 3; contador++){
 	printf("Aluno: %s \n", nome[contador]);
 	printf("Nota 1: %.2f\n", n1[contador]);
 	printf("Nota 2: %.2f\n", n2[contador]);
 	printf("Nota 3: %.2f\n", n3[contador]);
 	printf("Nota 4: %.2f\n", n4[contador]);
 	printf("Média: %.2f\n", media[contador]);

 }
 
       return 0;

}
