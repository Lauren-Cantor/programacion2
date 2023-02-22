#include <stdio.h>

int main (){
	
	char trabajador[20];
	float salario, valor1,valor2,valor3,neto1,neto2,neto3;
	
	printf ("nombre del trabajador: ");
	scanf ("%s",trabajador);
	
	printf ("basico mensual: ");
	scanf ("%f", &salario);
	

	if (salario<1000000){
	
	valor1= salario*0.07;
	neto1= salario+valor2;
	
	printf ("el aumento fue del 7%, que equivale a %.0f:\n ",neto1);
	printf ("el nuevo salario de %s es de %.0f:\n ",trabajador, neto1);
	

		}else if (salario < 1500000 && salario>= 1000000){
	
			valor2= salario*0.10;
			neto2= salario+valor2;
			
				printf ("el aumento fue del 10%, que equivale a %.0f: \n ",neto2);
				printf ("el nuevo salario de %s es de %.0f:\n ",trabajador, neto2);
			
				}else{
	
				valor3= salario*0.12;
				neto3= salario+valor2;
				
					printf ("el aumento fue del 12%, que equivale a %.0f:\n ",neto3);
					printf ("el nuevo salario de %s es de %.0f:\n",trabajador, neto3);
	
	
	}
	return 0;
}
