/*
    Repetição: Enquanto e Para
*/
/*jshint esversion: 6 */
//Declara as variáveis.
let resultado = 1;
let resultado2 = 1;
let contador = 0;

//Realiza o calculo utilizando um loop 'Enquanto'.
while (contador < 8) {
  resultado = resultado * 2;
  contador = contador + 1; //Controla o laço de repetição, ao atigir 8 para.
}
console.log(resultado);

//Realiza o cálculo utilizando um loop 'Para'.
for (let i = 0; i < 8; i++) {
  resultado2 = resultado2 * 2;
}
console.log(resultado2);

//Realiza o mesmo cálculo utilizando a função nativa em JavaScript.
console.log(Math.pow(2, 8));

