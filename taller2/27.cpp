#include <stdio.h>

int cantidadDigitos(int num){
	int aux, digitos=0;
	aux = num;
	
	while(aux>=1){			
		aux/=10;
		digitos++;		
	}
	return digitos;
}

int main(){
	int num1, num2;
	printf("Ingrese el primer numero: ");
	scanf("%d", &num1);
	printf("Ingrese el primer numero: ");
	scanf("%d", &num2);
	
	if(cantidadDigitos(num1)>=cantidadDigitos(num2)){
		printf("El primer numero tiene mayor cantidad de digitos, %d digitos.", cantidadDigitos(num1));		
	}else{
		printf("El segundo numero tiene mayor cantidad de digitos, %d digitos.", cantidadDigitos(num2));
	}
}
