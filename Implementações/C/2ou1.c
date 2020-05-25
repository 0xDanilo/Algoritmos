#include <stdio.h>
#include <stdbool.h>

int main() {
    int andre, carlos, prietro;
    bool jogadaValida;

    puts("Doooooois ou um!!\n");

//Primeiro jogador

    do
    {
        puts("Digite o valor 1 ou 2 para Andre: ");
        scanf("%d", &andre);
        jogadaValida = true;
        
        if (andre != 1 && andre != 2) {
            jogadaValida = false;
            puts("Digite apenas 1 ou 2!!\n");
        }

    } while (jogadaValida != true);
    
//Segundo Jogador

    do
    {
        puts("Digite o valor 1 ou 2 para Carlos: ");
        scanf("%d", &carlos);
        jogadaValida = true;

        if (carlos != 1 && carlos != 2) {
            jogadaValida = false;
            puts("Digite apenas 1 ou 2!!\n");
        } 

    } while (jogadaValida != true);

//terceiro jogador:

    do
    {
        puts("Digite o valor 1 ou 2 para Pietro: ");
        scanf("%d", &prietro);
        jogadaValida = true;

        if (prietro != 1 && prietro != 2) {
            jogadaValida = false;
            puts("Digite apenas 1 ou 2!!\n");
        } 

    } while (jogadaValida != true);

//Faz as conparações e imprime o vencedor:

    if (andre == 1 && carlos == 1 && prietro == 2) {
        puts("Pietro é o vencedor!!");    
        }
        else if (andre == 2 && carlos == 2 && prietro == 1 ) {
            puts("Pietro é o vencedor!!");
            }
            else if (andre == 1 && carlos == 2 && prietro == 1)
               {
                puts("Carlos é o vencedor!!");
                }
                 else if (andre == 2 && carlos == 1 && prietro == 2){
                    puts("Carlos é o vencedor!!");
                    }
                      else if (andre == 1 && carlos == 2 && prietro == 2){
                        puts("Andre é o vencedor!!");
                        }
                         else if (andre == 2 && carlos == 1 && prietro == 1){
                         	puts("Andre é o vencedor!!");
                        	}
                         	else {
								puts("Empatooooouuuu!!!");
								}

    return 0;
}