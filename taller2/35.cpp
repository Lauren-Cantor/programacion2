#include <stdio.h>

int primerDigito(int num){
	int aux, digito;
	aux = num;
	
	while(aux>=1){
		digito=aux%10;			
		aux/=10;		
	}
	return digito;	
}

int main(){
	int num1, num2, dig1, dig2, producto;
	printf("Ingrese primer numero: ");
	scanf("%d", &num1);
	printf("Ingrese segundo numero: ");
	scanf("%d", &num2);
	
	dig1=primerDigito(num1);
	dig2=primerDigito(num2);
	
	producto=dig1*dig2;
	
	printf("El producto de los primeros digitos de los dos numeros es: %d", producto);			
}
