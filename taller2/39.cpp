#include <stdio.h>
int main(){
	int siguiente=1, anterior=0, fibo;
	
	printf("%d\n%d\n", 0, 1);	
	for(int i=0; i<=20; i++){
		fibo = anterior + siguiente;
		printf("%d\n", fibo);
		anterior=siguiente;
		siguiente=fibo;		
	}		
}
