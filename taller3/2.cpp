#include <stdio.h>
#include <math.h>

int main (){

double base, exponente, resultado;

printf ("ingrese el numero base: ");
scanf ("%lf",&base);

printf ("ingrese la potencia: ");
scanf ("%lf",&exponente);
	
resultado= pow (base,exponente);

printf ("la potencia es: %.0lf", resultado);

} 
