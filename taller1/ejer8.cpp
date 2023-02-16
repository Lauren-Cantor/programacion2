#include <stdio.h>

int main (){
	
	char trabajador[20];
	int dias;
	float salario, salud, pension,dia, valorNeto;
	
	printf ("nombre del trabajador: ");
	scanf ("%s",trabajador);
	
	printf ("basico mensual: ");
	scanf ("%f", &salario);
	
	printf ("dias trabajados: ");
	scanf ("%d", &dias);
	
	salud = (salario*4/100)/30;
	pension = (salario*4/100)/30;
    dia = salario/30;
	
	valorNeto =(dia*dias)-(dias*salud)-(dias*pension);
	
	printf("El valor neto a pagar por %d, dias trabajados es: %f", dias, valorNeto);
	
	
	return 0;
}
