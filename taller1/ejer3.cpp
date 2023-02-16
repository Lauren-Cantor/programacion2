#include <stdio.h>

int main (){
	
	int base, altura, triangulo;
	
	printf("ingrese la base: ", base);
	scanf ("%d", &base);
	
	printf("ingrese la altura: ", altura);
	scanf ("%d", &altura);
	
	triangulo = (base*altura)/2;
	printf ("el area del triangulo es: %d", triangulo);
	
	return 0;
	
}
