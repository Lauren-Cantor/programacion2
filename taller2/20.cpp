#include <stdio.h>

int main(){
	int num, aux, digitos=0;
	printf("Ingrese un numero: ");
	scanf("%d", &num);
	aux = num;
	
	while(aux>=1){
		aux/=10;
		digitos++;
	}
	printf("El numero tiene %d digitos.", digitos);
}
