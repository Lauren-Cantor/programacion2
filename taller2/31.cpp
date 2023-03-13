#include <stdio.h>

int main(){
	int num, suma=0, promedio, cantidad=0;
	
	do{
		printf("Ingrese un numero diferente de 0: ");
		scanf("%d", &num);
		if(num%10==5){
			suma+=num;
			cantidad++;
		}		
	}while(num!=0);	
	
	promedio=suma/cantidad;
	
	printf("El promedio de los numeros terminados en 5 es: %d", promedio);
}
