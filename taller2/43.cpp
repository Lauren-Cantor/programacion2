#include <stdio.h>
int main(){
	int siguiente=1, anterior=0, fibo, cantidad=0;
		
	for(int i=0; i<=15; i++){
		fibo = anterior + siguiente;
		if(fibo>=1000&&fibo<=2000){
			cantidad++;		
		}
		anterior=siguiente;
		siguiente=fibo;		
	}	
	
	printf("Hay %d elementos de la serie de fibonacci entre 1000 y 2000.", cantidad);	
}
