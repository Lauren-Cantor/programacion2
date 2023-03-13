#include <stdio.h>

int main(){
	int num, aux, suma=0;
	printf("Ingrese un numero: ");
	scanf("%d", &num);
	aux = num;
	
	while(aux>=1){
		suma+=aux%10;
		aux/=10;		
	}
	printf("El suma de los digitos es: %d.", suma);
}
