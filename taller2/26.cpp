#include <stdio.h>

int main(){
	int num, aux, mayor=0;
	printf("Ingrese un numero: ");
	scanf("%d", &num);
	aux = num;
	
	while(aux>=1){
		if(aux%10>mayor){
			mayor=aux%10;
		}			
		aux/=10;		
	}
	printf("El numero mayor entre los digitos es: %d.", mayor);
}
