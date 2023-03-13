#include <stdio.h>

int main(){
	int num, aux, suma=0, digitos=0, promedio;
	printf("Ingrese un numero: ");
	scanf("%d", &num);
	aux = num;
	
	while(aux>=1){
		suma+=aux%10;			
		aux/=10;
		digitos++;		
	}
	promedio = suma/digitos;
	printf("EL promedio de la suma de los digitos es: %d,", promedio);
}
