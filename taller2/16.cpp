#include <stdio.h>

int main (){
	
	int num, cant,contador=0, promedio,suma=0;
	
	printf ("ingrese un numero: ");
	scanf ("%d", &num);
	
	printf ("cantidad de multiplos para el promedio: ");
	scanf ("%d", &cant);
	
	for (int i=1; i<=num && contador<cant; i++){
		
	if (i%3==0){
		
		suma+=i;
		contador++; 
		
	}
	}
	promedio= suma/cant;
    printf ("promedio: %d",promedio);
}
