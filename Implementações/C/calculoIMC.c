//Algoritmo calculoIMC

#include <stdio.h>
#include <math.h>

int main() {
	float peso, altura, imc;

	puts("Digite o seu peso: ");
	scanf("%f", &peso);
	puts("Digite sua altura: ");
	scanf("%f", &altura);

	//Calcula o IMC
	imc = peso/pow(altura, 2);

	printf("Seu IMC é: %.2f.\n", imc );

	if (imc < 20) {
		puts("Abaixo do peso.");
	}
		else if (imc <= 25) {
			puts("Peso normal");
		}
			else if (imc <= 30) {
				puts("Excesso de peso.");
			}
				else if (imc <= 35) {
					puts("Obesidade.");
				}
					else {
						puts("Obesidade morbida.");
					}

	return 0;
}