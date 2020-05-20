#include <stdio.h>
#include <stdbool.h>

int main () {
    int VET[] = {2, 10, 3, 7, 11};
    int x, P;

    puts("Digite um numero de 1 a 5: ");
    scanf("%2i", &x);

    for ( P = 0; P < 5; P++)  {
        if (VET[P] == x) {
            printf("Posição: %i", P);
        }
    } 
}