let multiplicador = Number(prompt("Digite o multiplicador da tabuada: "));

for (let i = 0; i <= 10; i++) {
    let resultado = 0;
    resultado = i * multiplicador;
    console.log("Resultado: "+multiplicador+" x "+i+" = "+resultado);
}