function calculaSalarioTotal (salarioFixo, totalVendas) {
    if (totalVendas < 1500) {
        let resultado = salarioFixo * 1.02;
        return resultado;
    } else {
        let resultado = salarioFixo * 1.04;
        return resultado;
    }
}

let matricula = Number(prompt("Digite sua matricula: "));
let nome = String(prompt("Digite seu nome: "));
let salarioFixo = Number(prompt("Digite seu salário: "));
let totalVendas = Number(prompt("Digite o valor total das vendas: "))

let salarioTotal = calculaSalarioTotal(salarioFixo, totalVendas)

alert("Resultado:\n"+
      "Matricula: "+matricula+"\n"+
      "Nome: "+nome+"\n"+
      "Salário Fixo: "+salarioFixo+"\n"+
      "Salário Total; "+salarioTotal);
