#include <stdio.h>
bool esPrimo(int num){
	bool esPrimo=true;
	
	for(int i = 2; i<num; i++){
		if(num%i==0){
			esPrimo=false;
			break;			
		}
	}
	if(num==0||num==1){
		esPrimo=false;
	}
	
	return esPrimo;	
}

int cantidadDigitosPrimos(int num){
	int aux, digitos=0;
	aux = num;
	
	while(aux>=1){			
		aux/=10;
		if(esPrimo(aux%10)){
			digitos++;			
		}	
	}
	return digitos;
}

int main(){
	int num1, num2;
	printf("Ingrese el primer numero: ");
	scanf("%d", &num1);
	printf("Ingrese el primer numero: ");
	scanf("%d", &num2);
	
	if(cantidadDigitosPrimos(num1)>=cantidadDigitosPrimos(num2)){
		printf("El primer numero tiene mayor cantidad de numeros primos, %d digitos.", cantidadDigitosPrimos(num1));		
	}else{
		printf("El segundo numero tiene mayor cantidad de numeros primos, %d digitos.", cantidadDigitosPrimos(num2));
	}
}
