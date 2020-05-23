
/*
		Declara duas variávéis e aponta (pointers) o endereço delas na memória
 */


#include <stdio.h>

int y = 5;

int main() {
	
	int x = 4;

	printf("X tem o valor %i e está armazenada na stack %p da memória RAM.\n", x, &x);
	printf("Y tem o valor %i está armazenada na parte Global %p da memória RAM. \n", y, &y);

	return 0;
}

