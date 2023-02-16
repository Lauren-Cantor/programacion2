#include <stdio.h>
#include <math.h>

int main (){
	
	int radio;
	float area,volumen;

	printf ("el radio de la esfera es: ");
	scanf ("%d", &radio);
	
	area= 4*3.1416*pow(radio,2);
	volumen=4/3*(3.1416*pow(radio,3));
	
	printf ("el area de la esfera es: %f\n",area);
	printf ("el volumen de la esfera es: %f\n",volumen);
	
	return 0;
	
	
}
