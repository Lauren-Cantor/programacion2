#include <stdio.h>

int main(){
	int num, aux, suma=0;
	printf("Ingrese un numero: ");
	scanf("%d", &num);
	aux = num;
	
	while(aux>=1){
		if((aux%10)%2==0){
			suma+=aux%10;			
		}
		aux/=10;		
	}
	printf("La suma de los digitos pares es: %d,", suma);
}
