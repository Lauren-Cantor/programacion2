#include <stdio.h>
int main(){
	int num, siguiente=1, anterior=0, fibo;	
	bool pertenece=false;
	
	printf("Ingrese un numero de dos digitos: ");
	scanf("%d", &num);	
		
	for(int i=0; i<=num; i++){
		fibo = anterior + siguiente;
		if(num==fibo){
			pertenece=true;			
		}
		anterior=siguiente;
		siguiente=fibo;		
	}
	if(num==0){
		pertenece=true;
	}
	if(pertenece){
		printf("Pertenece a la serie de fibonacci.");
	}else{
		printf("No pertenece a la serie de fibonacci.");
	}			
}
