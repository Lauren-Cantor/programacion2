#include <stdio.h>
int main(){
	int num, aux, contador=0;
	printf("Ingrese un numero: ");
	scanf("%d", &num);
	aux = num;
	
	while(aux>=1){
		if(aux%10==1){
			contador++;
		}
		aux/=10;		
	}
	printf("El numero 1 aparece: %d veces.", contador);
}
