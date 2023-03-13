#include <stdio.h>

bool esPrimo(int numero){
	bool esPrimo=true;
	
	for(int i = 2; i<numero; i++){
		if(numero%i==0){
			esPrimo=false;
			break;			
		}
	}	
	return esPrimo;
}

int main(){
	int num, aux, suma=0;
	printf("Ingrese un numero: ");
	scanf("%d", &num);
	aux = num;
	
	while(aux>=1){
		suma+=aux%10;
		aux/=10;		
	}
	if(esPrimo(suma)){
		printf("La suma de los digitos es: %d,", suma);	
		printf(" ES PRIMO.");	
	}else{
		printf("La suma de los digitos es: %d,", suma);	
		printf(" NO ES PRIMO.");	
	}
}
