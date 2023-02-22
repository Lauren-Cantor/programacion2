#include <stdio.h>
#include <math.h>

int main (){
	
	int radio, altura;
	float area,volumen;

	printf ("el radio del cilindro es: ");
	scanf ("%d", &radio);
	
	printf ("la altura del cilindro es: ");
	scanf ("%d", &altura);
	
	area= 2*3.1416*(radio*altura)+2*3.1416*pow(radio,2);
	volumen= 3.1416*pow(radio,2)*altura;
	
	printf ("el area de la cilindro es: %f\n", area);
	printf ("el volumen de la cilindro es: %f\n", volumen);
	
	return 0;
	
	
}
