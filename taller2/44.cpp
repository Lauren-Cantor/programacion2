#include <stdio.h>
int main(){
	int factorial=1, num;
	printf("Ingrese un numero: ");
	scanf("%d", &num);
		
	for(int i=2; i<=num; i++){
		factorial*=i;				
	}
	
	printf("El factorial de %d es: %d", num, factorial);		
}
