#include <stdio.h>


int main (){
	
int base, potencia, total=1;
	
printf ("Ingrese numero base: ");
scanf ("%d", &base);

printf ("Ingrese la potencia: ");
scanf ("%d", &potencia);

for (int i=0; i<potencia; i++){
		
total= total*base;
	
}
printf ("la potencia es: %d", total);
}
