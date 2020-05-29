#include <stdio.h>
#include <math.h>

double potencia(double base, double expoente) 
{
    if (expoente == 0)
    {
        return 1;
    } 
    else
    {
        return base * potencia(base, expoente - 1);
    }
}

int main()
{
    double resultado1, resultado2, base, expoente;

    puts("Digite um numero base: ");
    scanf("%3lf", &base);

    puts("Digite um expoente: ");
    scanf("%3lf", &expoente);

    resultado1 = potencia(base, expoente);
    resultado2 = pow(base, expoente);

    printf("O resultado de %.f elvado a %.f é %.f.\n", base, expoente, resultado1);
    printf("O resultado de %.f elvado a %.f é %.f.\n", base, expoente, resultado2);


}