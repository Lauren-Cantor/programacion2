#include <stdio.h>

int main(){
	int kilometros, galones, kmPorGalon, gasolinaCorriente, gasolinaExtra;
	printf("Distancia a recorrer (Km): ");
	scanf("%d", &kilometros);
	
	printf("Consumo promedio de combustible por Km recorrido: ");
	scanf("%d", &galones);
	
	kmPorGalon = kilometros * galones;
	
	gasolinaCorriente = kilometros * 10000;
	gasolinaExtra = kilometros * 15000;
	
	printf("se necesitan %d galones de combustible para recorrer %d kilometros.\n", kmPorGalon, kilometros);
	printf("El valor de %d galones de corriente es: %d\nEl valor de %d galones de extra es: %d", kmPorGalon, gasolinaCorriente, kmPorGalon, gasolinaExtra);
	
	
	return 0;
}
