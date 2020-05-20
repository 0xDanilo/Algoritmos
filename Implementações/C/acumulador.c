#include <stdio.h>

int main()
{
    int soma, i;
    
    soma = 0;
    for ( i = 1; i <= 10; i++) {
        soma = soma + i;
    }
    printf("O soma de todos os números entre 1 e 10 é: %i.", soma);
    return 0;
}
