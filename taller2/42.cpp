#include <stdio.h>
int main(){
	int siguiente=1, anterior=0, fibo, suma=1, contador=2, promedio;
		
	for(int i=0; i<15; i++){
		fibo = anterior + siguiente;
		if(fibo<=1000){
			suma+=fibo;
			contador++;
		}		
		anterior=siguiente;
		siguiente=fibo;		
	}
	promedio=suma/contador;
	printf("El promedio de la sumatoria de los fibonacci entre 0 a 1000 es: %d", promedio);		
}
