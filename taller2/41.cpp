#include <stdio.h>
int main(){
	int siguiente=1, anterior=0, fibo, suma=1;
		
	for(int i=0; i<15; i++){
		fibo = anterior + siguiente;
		if(fibo<=1000){
			suma+=fibo;
		}		
		anterior=siguiente;
		siguiente=fibo;		
	}
	printf("La sumatoria de los fibonacci de 0 a 100 es: %d", suma);		
}
