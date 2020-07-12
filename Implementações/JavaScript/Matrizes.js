let matriz = [];

for (let linhas = 0; linhas < 5; linhas++) {
	matriz[linhas] = [];
	for (colunas = 0; colunas < 5; colunas++) {
		matriz[linhas][colunas] = linhas + colunas;
	}
}

console.log(matriz);

Como uma função:

function criarMatriz(x, y) {
	let matriz = [];

for (let linhas = 0; linhas < x; linhas++) {
	matriz[linhas] = [];
	for (colunas = 0; colunas < y; colunas++) {
		matriz[linhas][colunas] = colunas+linhas;
	}
}

console.log(matriz);
}

criarMatriz(5, 5);