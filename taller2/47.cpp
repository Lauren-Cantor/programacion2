#include <stdio.h>
int main(){
	int factorial=1, num, sum=2;
	printf("Ingrese un numero: ");
	scanf("%d", &num);
		
	for(int i=2; i<=num; i++){
		factorial*=i;	
		sum+=factorial;		
	}
	printf("La sumatoria de los factoriales entre 1 y %d es: %d.", num, sum);		
}
