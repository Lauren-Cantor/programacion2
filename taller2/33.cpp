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
	for(int i=32768; i>0; i--){
		if(esPrimo(i)){
			printf("El numero primo mas cercano a 32768 es: %d", i);
			break;
		}
	}
}
