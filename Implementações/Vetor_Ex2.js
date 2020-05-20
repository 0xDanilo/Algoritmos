let VET = [2, 10, 3, 7, 11];
let X = Number(prompt("Digite um numero para a busca no vetor: "));
let acha = false;

for (let P = 0; P < 5; P++) {
    if (VET[P] == X) {
        alert("Posição: "+P);
        acha = true; 
    }
   
}

if (acha == false) {
    alert("Posição não encontrada.");
}