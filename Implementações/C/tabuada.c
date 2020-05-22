#include <stdio.h>

int main()
{
    long int multiplicador, resultado;
    int i; 

    puts("Digite o multiplicador da tabuada: ");
    scanf("%li", &multiplicador);

    for ( i = 0; i <= 10; i++)  
    {
        resultado = multiplicador * i;
        printf("Resultado %li x %i = %li \n", multiplicador, i, resultado);
    }    
}