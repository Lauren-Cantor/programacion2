#include <stdio.h>

int main (){
	
	int cant, suma=0, suma1=0, cant5;
	float promedio, promedio5;

	
	printf ("cantidad de multiplos para el promedio de 2: ");
	scanf ("%d", &cant);
	
	printf ("cantidad de multiplos para el promedio de 5: ");
	scanf ("%d", &cant5);
	
	for (int i=0; i<=cant; i++){
		suma+=i*2;		
	}
	for (int i=1; i<=cant5; i++){
		suma1+=i*5;		
	}
	promedio= suma/cant;
	printf ("promedio de los multiplos de 2: %.0f\n",promedio);
	promedio5= suma1/cant5;
	printf("promedio de los multiplos de 5: %.0f", promedio5);
}
