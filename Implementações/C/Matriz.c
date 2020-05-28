/*

	Aprendendo mais sobre matrizes

*/


#include <stdio.h>

int main() {

	int matriz[5][5];
	int i, j, linhas, colunas;

/*Utiliza dois loops "for" (um para as linhas e outro para as colunas) 
para popular a matriz. É possivel utilizar outros operadores aritiméticos
e popular a matriz com diferentes valores. */

	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			matriz[i][j] = i + j; // pppula a matriz com a soma de i + j
		}
	}
	
//Imprime o conteúdo dentro da "matriz" de 5 x 5

	for (linhas = 0; linhas < 5; linhas++)
	{
    	for(colunas = 0; colunas < 5; colunas++)
    	{
        	printf("%d     ", matriz[linhas][colunas]);
    	}
    	printf("\n");
	}

	return 0;
}