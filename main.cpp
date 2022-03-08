#include <stdio.h>

int main () {

	float raio, altura, area, volume;
	
	printf("Insira o raio: ");
	raio = scanf("%f, &raio");
	printf("Insira a altura: ");
	altura = scanf("%f, &altura");
	
	area = 3.14 * raio * raio;
	volume = altura * area;
	
	printf("volume=%f\n", volume);

}

