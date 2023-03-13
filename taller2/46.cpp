#include <stdio.h>
int main(){
	int factorial=1, num, sum=2, cant=2, promedio;
	printf("Ingrese un numero: ");
	scanf("%d", &num);
		
	for(int i=2; i<=num; i++){
		factorial*=i;	
		sum+=factorial;
		cant++;			
	}
	promedio=sum/cant;
	printf("El promedio de los factoriales entre 1 y %d es: %d.", num, promedio);		
}
