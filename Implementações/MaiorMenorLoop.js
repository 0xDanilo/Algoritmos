let maiorNum = 0;
let valorNumerico = 0;

for (let i = 0; i < 5; i++) {
  valorNumerico = Number(prompt("Digite um numero: "));
  if (valorNumerico > maiorNum) {
    maiorNum = valorNumerico;
  } else {
    maiorNum = maiorNum;
  }
}
alert("O maior numero digitado foi: "+maiorNum);
