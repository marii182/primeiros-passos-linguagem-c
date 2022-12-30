#include <stdio.h>
#include <stdlib.h>



int main() {
	float baseRetangulo, alturaRetangulo, areaRetangulo;
	
	printf("Escreva a base do retangulo:\n ");
	scanf("%f", &baseRetangulo);
	printf("Escreva a altura do retangulo:\n ");
	scanf("%f", &alturaRetangulo);
	
	areaRetangulo = baseRetangulo * alturaRetangulo;
	
	printf("A area do retangulo e de: %f \n\n ", areaRetangulo);
	
	system("PAUSE");
	return 0;
}
