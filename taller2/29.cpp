#include <stdio.h>

int main(){
	int num, aux, primerNumero;
	printf("Ingrese un numero: ");
	scanf("%d", &num);
	aux = num;
	
	while(aux>=1){
		primerNumero=aux%10;
		aux/=10;
	}
	
	printf("El primer digito es: %d", primerNumero);
}
