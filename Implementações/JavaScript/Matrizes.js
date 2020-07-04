let matriz = [];

for (let linhas = 0; linhas < 5; linhas++) {
	matriz[linhas] = [];
	for (colunas = 0; colunas < 5; colunas++) {
		matriz[linhas][colunas] = linhas + colunas;
	}
}

console.log(matriz);