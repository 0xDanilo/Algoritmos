#include <stdio.h>

int main()
{
    int soma, i;
    
    soma = 0;
    for ( i = 0; i <= 10; i++) {
        soma = soma + i;
    }
    printf("O soma é: %i.", soma);
    return 0;
}
