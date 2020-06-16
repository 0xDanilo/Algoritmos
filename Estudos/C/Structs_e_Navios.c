#include <stdio.h>

struct gps {
	int latitude;
	int longitude;
};

void va_para_leste(struct gps direcao) {
	direcao.latitude = direcao.latitude + 1;
	direcao.longitude = direcao.longitude - 1;
}

int main() {
	struct gps direcao = {32, -64};

	printf("Estamos ancorados em [%i, %i].\n", direcao.latitude, direcao.longitude);

	va_para_leste(direcao);
	printf("Estamos ancorados em [%i, %i].\n", direcao.latitude, direcao.longitude);


	return 0;
}