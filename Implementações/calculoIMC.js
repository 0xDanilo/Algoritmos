/*  
    Implementação do Algoritmo Calculo de IMC
*/

 //Função que calcula o IMC
 function calculoIMC(peso, altura) {
     resultado = peso/(Math.pow(altura, 2));
     return resultado;
 }

 //Cria as variaveis "peso" e "altura" e solicita a entrada dos valores pelo usuário.
let peso = Number(prompt("Qual o seu peso?"));
let altura = Number(prompt("Qual a sua altura?"));

resultadoIMC = calculoIMC(peso, altura); //Chama a função e realiza o cálculo
console.log(resultadoIMC); //Mostra o resultado do calculo no console.

//Compara o resultado do calculo e retorna a mensagem de acordo com a condição do IMC.
if (resultadoIMC < 20) {
    alert("Abaixo do peso ideal");
	} else if (resultadoIMC <= 25) {
		alert("Peso normal");
		} else if( resultadoIMC <= 30){ 
    		alert("Excesso de peso.");
			} else if (resultadoIMC <= 35) {
    			alert("Obesidade.");
				} else {
    				alert("Obesidade mórbida.");
    		}

