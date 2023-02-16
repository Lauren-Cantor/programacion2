#include <stdio.h>

int main(){
	float x, x1, y, y1, pendiente;
	printf("Ingrese la X del primer punto: ");
	scanf("%f", &x);
	printf("Ingres el Y del primer punto: ");
	scanf("%f", &y);
	
	printf("Ingrese la X del segundo punto: ");
	scanf("%f", &x1);
	printf("Ingres el Y del segundo punto: ");
	scanf("%f", &y1);
	
	pendiente = (y1-y)/(x1-x);
	
	printf("La pendiente de la recta que pasa por los puntos [%0.1f, %0.1f] y [%0.1f, %0.1f] es: %0.1f", x, y, x1, y1, pendiente);
	
	
	return 0;
}
