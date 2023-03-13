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

int main(){
	int num, suma=0, primos, cantidad=0;
	
	do{
		printf("Ingrese un numero diferente de 0: ");
		scanf("%d", &num);
		if(esPrimo(num)){
			suma+=num;
			cantidad++;
		}		
	}while(num!=0);	
	
	primos=suma/cantidad;
	
	printf("El promedio de los numeros primos es: %d", primos);
}
