#include <stdio.h>

int main(){
	int numero1, numero2, suma, resta, multi;
	float division;
	printf("Ingrese el primer numero: ");
	scanf("%d", &numero1);
	printf("Ingrese el segundo numero: ");
	scanf("%d", &numero2);
	
	suma = numero1 + numero2;
	resta = numero1 - numero2;
	multi = numero1 * numero2;
	division = numero1 / numero2;
	
	printf("Suma: %d\nResta: %d\nMultiplicacion: %d\nDivision: %f\n", suma, resta, multi, division);
	
	return 0;
}
