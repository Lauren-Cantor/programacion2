#include <stdio.h>

int main(){
	int num;
	bool esPrimo=true;
	printf("Ingrese un numero: ");
	scanf("%d", &num);
	
	for(int i = 2; i<num; i++){
		if(num%i==0){
			esPrimo=false;
			break;			
		}
	}
	if(num==0||num==1){
		esPrimo=false;
	}
	
	if(esPrimo){
		printf("El numero %d es primo", num);		
	}else{
		printf("El numero %d no es primo", num);
	}	
}
