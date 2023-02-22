#include <stdio.h>

int main (){
	
	int tiempoInicial=35;
	int velocidad=100;
	int tiempoX=20;
	int x;
	
	x= (tiempoX*velocidad)/tiempoInicial;
	
	printf ("la velocidad alcanzada en %d segundos es: %dkm/h",tiempoX,x);
	
	return 0;
	
}
